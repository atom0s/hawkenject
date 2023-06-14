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

#define NOMINMAX

#pragma comment(lib, "Psapi.lib")

#include <Windows.h>
#include <algorithm>
#include <format>
#include <ranges>
#include <string>
#include <Psapi.h>

#include "detours.h"
#include "SDK.hpp"
#include "utils.hpp"

extern "C"
{
    // Functions
    auto Real_ParseParam                     = static_cast<uint32_t(__cdecl*)(const wchar_t*, const wchar_t*, uint32_t)>(nullptr);
    auto Real_TArray_USeqAct_Latent_AddItem  = static_cast<uint32_t(__thiscall*)(int32_t, int32_t)>(nullptr);
    auto Real_UGameEngine_ConstructNetDriver = static_cast<int32_t(__thiscall*)(int32_t)>(nullptr);
    auto Real_UGameEngine_SpawnServerActors  = static_cast<void(__thiscall*)(int32_t)>(nullptr);
    auto Real_UNetDriver_InitListen          = static_cast<int32_t(__thiscall*)(int32_t, int32_t, int32_t, int32_t)>(nullptr);
    auto Real_UTcpNetDriver_InitListen       = static_cast<int32_t(__thiscall*)(int32_t, int32_t, int32_t, int32_t)>(nullptr);
    auto Real_UPackageMap_AddNetPackages     = static_cast<void(__thiscall*)(int32_t)>(nullptr);
    auto Real_UWorld_GetGameInfo             = static_cast<int32_t(__thiscall*)(int32_t)>(nullptr);
    auto Real_UWorld_SetGameInfo             = static_cast<void(__thiscall*)(int32_t, int32_t)>(nullptr);
    auto Real_UWorld_GetWorldInfo            = static_cast<int32_t(__thiscall*)(int32_t, int32_t)>(nullptr);

    // Object Pointers
    auto Real_PTR_GCmdLine                   = static_cast<uint32_t*>(nullptr);
    auto Real_PTR_GUseSeekFreePackageMap     = static_cast<uint32_t*>(nullptr);
    auto Real_PTR_UGameEngine                = static_cast<uint32_t*>(nullptr);
    auto Real_PTR_UPackage_NetObjectNotifies = static_cast<uint32_t*>(nullptr);
}

/**
 * Reimplementation of the 'UWorld::Listen' function. (Removed from Hawken 2014+ clients.)
 *
 * @param {int32_t} world - The main UWorld object.
 * @param {int32_t} url - The URL associated with this world.
 * @return {BOOL} TRUE on success, FALSE otherwise.
 * @note
 *
 *      The contents of this reimplementation are based on the reversed code of the old PAX Hawken client
 *      and various code implementations of this function from UE3/4. The comments within this function
 *      show what the original code of this function looks like from UE3.
 */
BOOL __stdcall Mine_UWorld_Listen(const int32_t world, const int32_t url)
{
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // if (NetDriver)
    // {
    //     Error = LocalizeError(TEXT("NetAlready"), TEXT("Engine"));
    //     return FALSE;
    // }
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    // Offset pulled from: UWorld::IsServer
    auto NetDriver = reinterpret_cast<int32_t*>(world + 0x00D8);
    if (*NetDriver)
        return FALSE;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // NetDriver = GEngine->ConstructNetDriver();
    // if (NetDriver == NULL)
    // {
    //     debugf(TEXT("Failed to create Net Driver"));
    //     return FALSE;
    // }
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    *NetDriver = Real_UGameEngine_ConstructNetDriver(*Real_PTR_UGameEngine);
    if (*NetDriver == NULL)
        return FALSE;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // if (!NetDriver->InitListen(this, InURL, Error))
    // {
    //     debugf(TEXT("Failed to listen: %s"), *Error);
    //     NetDriver = NULL;
    //     return FALSE;
    // }
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    Classes::FString error;
    if (!Real_UTcpNetDriver_InitListen(*NetDriver, world, url, reinterpret_cast<int32_t>(&error)))
    {
        *NetDriver = NULL;
        return FALSE;
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // static UBOOL LanPlay = ParseParam(appCmdLine(), TEXT("lanplay"));
    // if (!LanPlay && (NetDriver->MaxInternetClientRate < NetDriver->MaxClientRate) && (NetDriver->MaxInternetClientRate > 2500))
    // {
    //     NetDriver->MaxClientRate = NetDriver->MaxInternetClientRate;
    // }
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    // Offsets pulled from: UNetDriver::StaticConstructor
    auto NetDriver_MasterMap             = reinterpret_cast<uint32_t*>(*NetDriver + 0x0058);
    auto NetDriver_ServerTravelPause     = reinterpret_cast<float*>(*NetDriver + 0x0074);
    auto NetDriver_MaxClientRate         = reinterpret_cast<uint32_t*>(*NetDriver + 0x0078);
    auto NetDriver_MaxInternetClientRate = reinterpret_cast<uint32_t*>(*NetDriver + 0x007C);

    static BOOL LanPlay = Real_ParseParam(reinterpret_cast<const wchar_t*>(Real_PTR_GCmdLine), L"lanplay", 0);
    if (!LanPlay && (*NetDriver_MaxInternetClientRate < *NetDriver_MaxClientRate) && (*NetDriver_MaxInternetClientRate > 2500))
        *NetDriver_MaxClientRate = *NetDriver_MaxInternetClientRate;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // if (GetGameInfo() && GetGameInfo()->MaxPlayers > 16)
    // {
    //     NetDriver->MaxClientRate = ::Min(NetDriver->MaxClientRate, 10000);
    // }
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    const auto game_info = reinterpret_cast<Classes::AGameInfo*>(Real_UWorld_GetGameInfo(world));
    if (game_info && game_info->MaxPlayers > 16)
        *NetDriver_MaxClientRate = std::min(*NetDriver_MaxClientRate, 10000u);

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // if (!GUseSeekFreePackageMap)
    // {
    //     BuildServerMasterMap();
    // }
    // else
    // {
    //     UPackage::NetObjectNotifies.AddItem(NetDriver);
    // }
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    if (!*Real_PTR_GUseSeekFreePackageMap)
    {
        Real_UPackageMap_AddNetPackages(*NetDriver_MasterMap);
        Real_TArray_USeqAct_Latent_AddItem(reinterpret_cast<uint32_t>(Real_PTR_UPackage_NetObjectNotifies), reinterpret_cast<uint32_t>(NetDriver));
    }
    else
    {
        Real_TArray_USeqAct_Latent_AddItem(reinterpret_cast<uint32_t>(Real_PTR_UPackage_NetObjectNotifies), reinterpret_cast<uint32_t>(NetDriver));
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    // GEngine->SpawnServerActors();
    //
    // GetWorldInfo()->NetMode             = GEngine->Client ? NM_ListenServer : NM_DedicatedServer;
    // GetWorldInfo()->NextSwitchCountdown = NetDriver->ServerTravelPause;
    // debugf(TEXT("NetMode is now %d"), GetWorldInfo()->NetMode);
    //
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    Real_UGameEngine_SpawnServerActors(*Real_PTR_UGameEngine);

    const auto world_info = reinterpret_cast<Classes::AWorldInfo*>(Real_UWorld_GetWorldInfo(world, 0));
    if (world_info)
    {
        const auto engine = reinterpret_cast<Classes::UGameEngine*>(*Real_PTR_UGameEngine);

        world_info->NetMode             = engine->Client ? Classes::ENetMode::NM_ListenServer : Classes::ENetMode::NM_DedicatedServer;
        world_info->NextSwitchCountdown = *NetDriver_ServerTravelPause;
    }

    return TRUE;
}

/**
 * UWorld::SetGameInfo detour hook callback.
 *
 * @param {int32_t} world - The current UWorld object used for this call.
 * @param {int32_t} pEdx - The value of the EDX register. (ignored)
 * @param {int32_t} url - The URL associated with this world.
 */
void __fastcall Mine_UWorld_SetGameInfo(int32_t world, int32_t pEdx, int32_t url)
{
    UNREFERENCED_PARAMETER(pEdx);

    // Allow the original call to happen first..
    Real_UWorld_SetGameInfo(world, url);

    __asm pushad;
    __asm pushfd;

    // Reimplement the removed UWorld::Listen call..
    Mine_UWorld_Listen(world, url);

    __asm popfd;
    __asm popad;
}

/**
 * Installs the hawkenject hook into the current process.
 *
 * @return {BOOL} TRUE on success, FALSE otherwise.
 */
__declspec(dllexport) BOOL __stdcall install(void)
{
    MODULEINFO minfo{};
    if (!::GetModuleInformation(::GetCurrentProcess(), ::GetModuleHandleA(nullptr), &minfo, sizeof(MODULEINFO)))
        return FALSE;

    std::vector<std::string> names;

#define PTR_CHECK(p)  \
    if (p == nullptr) \
        names.push_back(#p);

    const auto base = reinterpret_cast<uint32_t>(minfo.lpBaseOfDll);
    const auto size = minfo.SizeOfImage;

    // Update the function pointers..
    Real_ParseParam                     = atomic::memory::find<decltype(Real_ParseParam)>(base, size, "538B5C240866833B0055565774??8B7C24188D43025750E8", 0, 0);
    Real_TArray_USeqAct_Latent_AddItem  = atomic::memory::find<decltype(Real_TArray_USeqAct_Latent_AddItem)>(base, size, "568BF18B4E08578B7E048D47018946043BC17E??6A045150E8????????8B0E83C40C89460885C975??85C074??03C06A0803C05051E8????????83C40C89068B0E8D04B985C074??8B54240C8B0A89088BC75F5EC20400", 0, 0);
    Real_UGameEngine_ConstructNetDriver = atomic::memory::find<decltype(Real_UGameEngine_ConstructNetDriver)>(base, size, "833D????????0053565775??68????????E8????????83C404A3????????E8????????A1????????6A0068002000006A0068????????6A0050", 0, 0);
    Real_UGameEngine_SpawnServerActors  = atomic::memory::find<decltype(Real_UGameEngine_SpawnServerActors)>(base, size, "6AFF68????????64A1000000005081EC2C020000A1", 0, 0);
    Real_UNetDriver_InitListen          = atomic::memory::find<decltype(Real_UNetDriver_InitListen)>(base, size, "568BF18B068B904C010000FFD28B442408894654B8010000005EC20C00", 0, 0);
    Real_UTcpNetDriver_InitListen       = atomic::memory::find<decltype(Real_UTcpNetDriver_InitListen)>(base, size, "6AFF68????????64A1000000005083EC1853555657A1????????33C4508D44242C64A3000000008BF18B5C24448B7C24408B6C243C535755E8", 0, 0);
    Real_UPackageMap_AddNetPackages     = atomic::memory::find<decltype(Real_UPackageMap_AddNetPackages)>(base, size, "6AFF68????????64A1000000005083EC1053555657A1????????33C4508D44242464A3000000008BF9897C24148D773C", 0, 0);
    Real_UWorld_GetGameInfo             = atomic::memory::find<decltype(Real_UWorld_GetGameInfo)>(base, size, "568B71508B464085C07F??74??68????????683F02000068????????68????????E8????????83C4108B463C8B088B81B40400005EC3", 0, 0);
    Real_UWorld_SetGameInfo             = atomic::memory::find<decltype(Real_UWorld_SetGameInfo)>(base, size, "6AFF68????????64A1000000005081EC64020000A1????????33C48984246002000053555657A1????????33C4508D84247802000064A3000000008BAC248802", 0, 0);
    Real_UWorld_GetWorldInfo            = atomic::memory::find<decltype(Real_UWorld_GetWorldInfo)>(base, size, "568B71508B464085C07F??74??68????????683F02000068????????68????????E8????????83C410837C2408008B463C8B300F??????????83", 0, 0);

    PTR_CHECK(Real_ParseParam);
    PTR_CHECK(Real_TArray_USeqAct_Latent_AddItem);
    PTR_CHECK(Real_UGameEngine_ConstructNetDriver);
    PTR_CHECK(Real_UGameEngine_SpawnServerActors);
    PTR_CHECK(Real_UNetDriver_InitListen);
    PTR_CHECK(Real_UTcpNetDriver_InitListen);
    PTR_CHECK(Real_UPackageMap_AddNetPackages);
    PTR_CHECK(Real_UWorld_GetGameInfo);
    PTR_CHECK(Real_UWorld_SetGameInfo);
    PTR_CHECK(Real_UWorld_GetWorldInfo);

    // Update object pointers..
    Real_PTR_GCmdLine                   = atomic::memory::find_ptr<decltype(Real_PTR_GCmdLine)>(base, size, "68????????895C2428E8????????83C41485C0", 1, 0);
    Real_PTR_GUseSeekFreePackageMap     = atomic::memory::find_ptr<decltype(Real_PTR_GUseSeekFreePackageMap)>(base, size, "833D????????000F??????????8B4E188B018B90600100005355", 2, 0);
    Real_PTR_UGameEngine                = atomic::memory::find_ptr<decltype(Real_PTR_UGameEngine)>(base, size, "A1????????3BC30F??????????3998E00400000F", 1, 0);
    Real_PTR_UPackage_NetObjectNotifies = atomic::memory::find_ptr<decltype(Real_PTR_UPackage_NetObjectNotifies)>(base, size, "8B15????????8B0CBA8B018B500456FFD2A1", 2, 0);

    PTR_CHECK(Real_PTR_GCmdLine);
    PTR_CHECK(Real_PTR_GUseSeekFreePackageMap);
    PTR_CHECK(Real_PTR_UGameEngine);
    PTR_CHECK(Real_PTR_UPackage_NetObjectNotifies);

    // Update the SDK pointers..
    Classes::FName::GNames     = atomic::memory::find_ptr<decltype(Classes::FName::GNames)>(base, size, "8B0185C078??3B05????????7D??8B0D????????833C810074", 16, 0);
    Classes::UObject::GObjects = atomic::memory::find_ptr<decltype(Classes::UObject::GObjects)>(base, size, "8B44240485C078??3B05????????7D??8B0D????????8B0481C333C0C3", 18, 0);

    // Check for any pattern scanning failures..
    if (!names.empty())
    {
        const auto msg = std::ranges::views::transform(names, [](const auto str) { return str + "\n"; }) |
                         std::ranges::views::join |
                         std::ranges::to<std::string>();

        ::MessageBoxA(0, msg.c_str(), "hawkenject :: Failed to locate required pattern(s)!", MB_ICONERROR | MB_OK);
        return FALSE;
    }

    // Hook the needed functions with detours..
    ::DetourTransactionBegin();
    ::DetourUpdateThread(::GetCurrentThread());
    ::DetourAttach(&(PVOID&)Real_UWorld_SetGameInfo, Mine_UWorld_SetGameInfo);
    ::DetourTransactionCommit();

    return TRUE;
}

/**
 * Uninstalls the hawkenject hook from the current process.
 *
 * @return {BOOL} TRUE on success, FALSE otherwise.
 */
__declspec(dllexport) BOOL __stdcall uninstall(void)
{
    ::DetourTransactionBegin();
    ::DetourUpdateThread(::GetCurrentThread());
    ::DetourDetach(&(PVOID&)Real_UWorld_SetGameInfo, Mine_UWorld_SetGameInfo);
    ::DetourTransactionCommit();

    return TRUE;
}

/**
 * Module entry point.
 *
 * @param {HINSTANCE} hinstDLL - A handle to the DLL module.
 * @param {DWORD} fdwReason - The reason code that indicates why the DLL entry-point function is being called.
 * @param {LPVOID} lpvReserved - Reserved.
 * @return {BOOL} TRUE on success, FALSE otherwise.
 */
BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    UNREFERENCED_PARAMETER(lpvReserved);

    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            ::DisableThreadLibraryCalls(hinstDLL);
            break;
        case DLL_PROCESS_DETACH:
            uninstall();
            break;
        default:
            break;
    }

    return TRUE;
}