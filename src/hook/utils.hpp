/**
 * hawkenject - Copyright (c) 2023 atom0s [atom0s@live.com]
 *
 * Contact: https://www.atom0s.com/
 * Contact: https://discord.gg/UmXNvjq
 * Contact: https://github.com/atom0s
 * Support: https://paypal.me/atom0s
 * Support: https://patreon.com/atom0s
 * Support: https://github.com/sponsors/atom0s
 *
 * This file is part of hawkenject.
 *
 * hawkenject is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * hawkenject is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with hawkenject.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef UTILS_HPP
#define UTILS_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#include <Windows.h>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include <vector>

namespace atomic::memory
{
    namespace details
    {
        template<typename T>
        struct scannableiterator_t
        {
            uintptr_t base_;
            uintptr_t size_;

            scannableiterator_t(void)                       = delete;
            scannableiterator_t(const scannableiterator_t&) = delete;
            scannableiterator_t(const uintptr_t addr, const uintptr_t size)
                : base_{addr}
                , size_{size}
            {}

            T* begin(void)
            {
                return reinterpret_cast<T*>(this->base_);
            }

            T* end(void)
            {
                return reinterpret_cast<T*>(this->base_ + this->size_);
            }
        };

    } // namespace details

    /**
     * Returns the location where a pattern of bytes is found within the range of memory given. (Accepts wildcards as ?? bytes.)
     *
     * @param {uintptr_t} base_address - The starting address to begin scanning for the pattern.
     * @param {uintptr_t} size - The length of data to perform the scan within.
     * @param {const char*} pattern - The pattern of data to scan for.
     * @param {intptr_t} offset - The offset to add to the found position of the pattern.
     * @param {uintptr_t} count - The count of the pattern to use. (Used for patterns that will be found more than once and the first instance is not the desired result.)
     * @return {uintptr_t} The address where the pattern was located on success, 0 otherwise.
     */
    static uintptr_t find_pattern(const uintptr_t base_address, const uintptr_t size, const char* pattern, const intptr_t offset, const uintptr_t count)
    {
        if (base_address == 0 || size == 0)
            return 0;

        const auto len = ::strlen(pattern);
        if (len == 0 || len % 2 > 0)
            return 0;

        std::vector<std::pair<uint8_t, bool>> vpattern;
        for (std::size_t x = 0, y = len / 2; x < y; x++)
        {
            if (std::stringstream stream(std::string(pattern + (x * 2), 2)); stream.str() == "??")
                vpattern.push_back(std::make_pair(static_cast<uint8_t>(0), false));
            else
            {
                const auto b = strtol(stream.str().c_str(), nullptr, 16);
                vpattern.push_back(std::make_pair(static_cast<uint8_t>(b), true));
            }
        }

        details::scannableiterator_t<uint8_t> data(base_address, size);
        auto scan_start = data.begin();
        auto result     = static_cast<uintptr_t>(0);

        while (true)
        {
            auto ret = std::search(scan_start, data.end(), vpattern.begin(), vpattern.end(),
                [&](const uint8_t curr, const std::pair<uint8_t, bool> curr_pattern) {
                    return !curr_pattern.second || curr == curr_pattern.first;
                });

            if (ret != data.end())
            {
                if (result == count || count == 0)
                    return (std::distance(data.begin(), ret) + base_address) + offset;

                ++result;
                scan_start = ++ret;
            }
            else
                break;
        }

        return 0;
    }

    /**
     * find_pattern wrapper to cast the return to a desired type.
     *
     * @param {uintptr_t} base_address - The starting address to begin scanning for the pattern.
     * @param {uintptr_t} size - The length of data to perform the scan within.
     * @param {const char*} pattern - The pattern of data to scan for.
     * @param {intptr_t} offset - The offset to add to the found position of the pattern.
     * @param {uintptr_t} count - The count of the pattern to use. (Used for patterns that will be found more than once and the first instance is not the desired result.)
     * @return {T} The address where the pattern was located on success, 0 otherwise.
     */
    template<typename T>
    static T find(const auto& base, const auto& size, const auto& pattern, const auto& offset, const auto& count)
    {
        return reinterpret_cast<T>(find_pattern(base, size, pattern, offset, count));
    }

    /**
     * find_pattern wrapper to read a pointer from the found location of the pattern.
     *
     * @param {uintptr_t} base_address - The starting address to begin scanning for the pattern.
     * @param {uintptr_t} size - The length of data to perform the scan within.
     * @param {const char*} pattern - The pattern of data to scan for.
     * @param {intptr_t} offset - The offset to add to the found position of the pattern.
     * @param {uintptr_t} count - The count of the pattern to use. (Used for patterns that will be found more than once and the first instance is not the desired result.)
     * @return {T} The pointer address read from where the pattern was located on success, 0 otherwise.
     */
    template<typename T>
    static T find_ptr(const auto& base, const auto& size, const auto& pattern, const auto& offset, const auto& count)
    {
        const auto ret = find_pattern(base, size, pattern, offset, count);
        if (ret == 0)
            return reinterpret_cast<T>(ret);

        return reinterpret_cast<T>(*reinterpret_cast<T*>(ret));
    }

} // namespace atomic::memory

namespace atomic::strings
{
    template<int32_t ElemsPerRow, bool AsciiDisplay>
    struct hexdump_t
    {
        hexdump_t(const uint8_t* data, const std::size_t size)
            : data_(data)
            , size_(size)
        {}

        const uint8_t* data_;
        const std::size_t size_;
    };

    template<int32_t ElemsPerRow, bool AsciiDisplay>
    using hexdump = hexdump_t<ElemsPerRow, AsciiDisplay>;

    template<int32_t ElemsPerRow, bool AsciiDisplay>
    inline std::ostream& operator<<(std::ostream& out, const hexdump<ElemsPerRow, AsciiDisplay>& data)
    {
        out.fill('0');

        for (std::size_t x = 0; x < data.size_; x += ElemsPerRow)
        {
            // Print the leading address..
            out << "0x" << std::setw(8) << std::hex << x << ": ";

            // Print the data bytes..
            for (std::size_t y = 0; y < ElemsPerRow; ++y)
            {
                if (x + y < data.size_)
                    out << std::hex << std::setw(2) << static_cast<uint32_t>(data.data_[x + y]) << " ";
                else
                    out << "   ";
            }

            // Print the ascii table..
            if (AsciiDisplay)
            {
                out << " | ";

                for (std::size_t y = 0; y < ElemsPerRow; ++y)
                {
                    if (x + y < data.size_)
                    {
                        if (std::isprint(data.data_[x + y]))
                            out << static_cast<char>(data.data_[x + y]);
                        else
                            out << ".";
                    }
                }
            }

            out << std::endl;
        }

        return out;
    }

} // namespace atomic::strings

#endif // UTILS_HPP