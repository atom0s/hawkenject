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

#include <Windows.h>
#include <filesystem>
#include <iostream>
#include <string>

/**
 * Validates and reads the hook configuration file. (hook.ini)
 *
 * @param {auto&} path - The configuration file path.
 * @return {std::tuple} Tuple containing the return status and read configuration information.
 */
auto read_config(const auto& path) -> std::tuple<bool, std::string, std::string, std::string>
{
    std::error_code ec{};

    const auto p = std::filesystem::canonical(path, ec);
    if (ec)
    {
        std::cout << "[!] Error: Invalid configuration path. (1)"
                  << std::endl;

        return {false, "", "", ""};
    }

    if (!std::filesystem::exists(p, ec) || ec)
    {
        std::cout << "[!] Error: Invalid configuration path. (2)"
                  << std::endl;

        return {false, "", "", ""};
    }

    char root[MAX_PATH]{};
    char game[MAX_PATH]{};
    char args[1024]{};

    ::GetPrivateProfileStringA("config", "root", "", root, MAX_PATH, p.string().c_str());
    ::GetPrivateProfileStringA("config", "game", "", game, MAX_PATH, p.string().c_str());
    ::GetPrivateProfileStringA("config", "args", "", args, 1024, p.string().c_str());

    if (root[0] == '\0' || game[0] == '\0')
    {
        std::cout << "[!] Error: Invalid 'root' or 'game' path in configuration file."
                  << std::endl;

        return {false, "", "", ""};
    }

    return {true, root, game, args};
}

/**
 * Validates the hook module. (hook.dll)
 *
 * @param {auto&} path - The hook module path.
 * @return {std::tuple} Tuple containing the return status and the offset to the hook.dll 'install' function export.
 */
auto hook_validate(const auto& path) -> std::tuple<bool, uint32_t>
{
    std::error_code ec{};

    const auto p = std::filesystem::canonical(path, ec);
    if (ec)
    {
        std::cout << "[!] Error: Invalid hook path. (1)"
                  << std::endl;

        return {false, 0};
    }

    if (!std::filesystem::exists(p, ec) || ec)
    {
        std::cout << "[!] Error: Invalid hook path. (2)"
                  << std::endl;

        return {false, 0};
    }

    const auto mod = ::LoadLibraryExA(p.string().c_str(), nullptr, DONT_RESOLVE_DLL_REFERENCES);
    if (mod == nullptr)
    {
        std::cout << "[!] Error: Failed to load 'hook.dll' locally for validation."
                  << std::endl;

        return {false, 0};
    }

    const auto offset = ::GetProcAddress(mod, "install");
    ::FreeLibrary(mod);

    if (offset == nullptr)
    {
        std::cout << "[!] Error: Failed to locate 'install' export within 'hook.dll'."
                  << std::endl;

        return {false, 0};
    }

    return {true, reinterpret_cast<uint32_t>(offset) - reinterpret_cast<uint32_t>(mod)};
}

/**
 * Injects the hook module into the the given process.
 *
 * @param {auto&} path - The hook module path.
 * @param {auto&} handle - The process handle to inject the hook into.
 * @return {std::tuple} Tuple containing the return status and the hook module base address.
 */
auto hook_inject(const auto& path, const auto& handle) -> std::tuple<bool, uint32_t>
{
    const auto alloc = ::VirtualAllocEx(handle, nullptr, path.string().size() + 1, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (alloc == nullptr)
    {
        std::cout << "[!] Error: Injection failed; failed to allocate remote memory in game process."
                  << std::endl;

        return {false, 0};
    }

    if (!::WriteProcessMemory(handle, alloc, path.string().c_str(), path.string().size(), nullptr))
    {
        std::cout << "[!] Error: Injection failed; failed to write hook path to memory."
                  << std::endl;

        return {false, 0};
    }

    const auto loadlib = ::GetProcAddress(::GetModuleHandleA("kernel32.dll"), "LoadLibraryA");
    const auto thread  = ::CreateRemoteThread(handle, nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(loadlib), alloc, 0, nullptr);

    if (thread == nullptr)
    {
        std::cout << "[!] Error: Injection failed; failed to create remote thread in game process. (1)"
                  << std::endl;

        return {false, 0};
    }

    auto exit_code = 0ul;

    ::WaitForSingleObject(thread, 15000);
    ::GetExitCodeThread(thread, &exit_code);
    ::CloseHandle(thread);

    ::VirtualFreeEx(handle, alloc, path.string().size() + 1, MEM_DECOMMIT | MEM_RESERVE);

    return {exit_code > 0, exit_code};
}

/**
 * Installs the hook module in the given process. (Calls the hook.dll 'install' export remotely.)
 *
 * @param {auto&} handle - The process handle to install the hook into.
 * @param {auto&} hook_base - The base address of the loaded hook.dll module.
 * @param {auto&} install_offset - The offset to the hook.dll 'install' function export.
 * @return {std::tuple} Tuple containing the return status.
 */
auto hook_install(const auto& handle, const auto& hook_base, const auto& install_offset) -> std::tuple<bool>
{
    const auto thread = ::CreateRemoteThread(handle, nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(hook_base + install_offset), nullptr, 0, nullptr);

    if (thread == nullptr)
    {
        std::cout << "[!] Error: Injection failed; failed to to create remote thread in game process. (2)"
                  << std::endl;

        return {false};
    }

    auto exit_code = 0ul;

    ::WaitForSingleObject(thread, 15000);
    ::GetExitCodeThread(thread, &exit_code);
    ::CloseHandle(thread);

    return {exit_code != 0};
}

/**
 * Validates the game executable.
 *
 * @param {auto&} path - The game executable path.
 * @return {std::tuple} Tuple containing the return status.
 */
auto game_validate(const auto& path) -> std::tuple<bool>
{
    std::error_code ec{};

    const auto p = std::filesystem::canonical(path, ec);
    if (ec)
    {
        std::cout << "[!] Error: Invalid game path. (1)"
                  << std::endl;

        return {false};
    }

    if (!std::filesystem::exists(p, ec) || ec)
    {
        std::cout << "[!] Error: Invalid game path. (2)"
                  << std::endl;

        return {false};
    }

    return {true};
}

/**
 * Launches the game executable (suspended) for injection.
 *
 * @param {auto&} root - The path to the games root folder.
 * @param {auto&} game - The path to the game executable.
 * @param {auto&} args - The arguments to pass to the game executable.
 * @return {std::tuple} Tuple containing the return status and the information about the launched process.
 */
auto game_launch(const auto& root, const auto& game, const auto& args) -> std::tuple<bool, PROCESS_INFORMATION>
{
    PROCESS_INFORMATION pi{};
    STARTUPINFOA si{};

    const auto arg = std::format("\"{}\" {}", std::filesystem::canonical(game).string(), args);
    const auto ret = ::CreateProcessA(
        nullptr, const_cast<LPSTR>(arg.c_str()),
        nullptr, nullptr,
        FALSE, CREATE_SUSPENDED | NORMAL_PRIORITY_CLASS,
        nullptr, std::filesystem::canonical(root).string().c_str(),
        &si, &pi);

    if (!ret)
    {
        std::cout << "[!] Error: Failed to launch game process for injection."
                  << std::endl;
    }

    return {ret, pi};
}

/**
 * Application entry point. (Console Mode)
 *
 * @param {int32_t} argc - The argument count passed to the application.
 * @param {char*[]} argv - The argument array passed to the application.
 * @return {int32_t} Non-specific return value.
 */
int32_t __cdecl main(int32_t argc, char* argv[])
{
    std::cout << "hawkenject - Hawken Dedicated Server Hook" << std::endl;
    std::cout << "(c) 2023 atom0s [atom0s@live.com]"
              << std::endl
              << std::endl
              << "Discord: https://discord.gg/UmXNvjq (atom0s)"
              << std::endl
              << std::endl;
    std::cout << "Support Me via Donations:" << std::endl;
    std::cout << "  >> PayPal : https://paypal.me/atom0s" << std::endl;
    std::cout << "  >> Patreon: https://patreon.com/atom0s" << std::endl;
    std::cout << "  >> GitHub : https://github.com/sponsors/atom0s"
              << std::endl
              << std::endl;

    UNREFERENCED_PARAMETER(argc);
    UNREFERENCED_PARAMETER(argv);

    // Read the configuration file information..
    const auto cfg = read_config(std::filesystem::current_path() / "hook.ini");
    if (!std::get<0>(cfg))
        return 1;

    // Validate the hook file..
    const auto [is_hook_valid, install_offset] = hook_validate(std::filesystem::current_path() / "hook.dll");
    if (!is_hook_valid)
        return 1;

    // Validate the game file..
    if (!std::get<0>(game_validate(std::filesystem::path(std::get<2>(cfg)))))
        return 1;

    // Launch the game for injection..
    const auto [is_game_running, pi] = game_launch(std::filesystem::path(std::get<1>(cfg)), std::filesystem::path(std::get<2>(cfg)), std::get<3>(cfg));
    if (!is_game_running)
        return 1;

    // Inject and install the hook into the game process..
    if (const auto ret = hook_inject(std::filesystem::current_path() / "hook.dll", pi.hProcess);
        !std::get<0>(ret) ||
        !std::get<0>(hook_install(pi.hProcess, std::get<1>(ret), install_offset)))
    {
        ::TerminateProcess(pi.hProcess, 0);
        ::CloseHandle(pi.hProcess);
        ::CloseHandle(pi.hThread);

        std::cout << "[!] Error: Injection failed."
                  << std::endl;
        return 1;
    }

    ::ResumeThread(pi.hThread);
    ::CloseHandle(pi.hProcess);
    ::CloseHandle(pi.hThread);

    std::cout << "[!] Success! Enjoy. ~"
              << std::endl;

    return ERROR_SUCCESS;
}
