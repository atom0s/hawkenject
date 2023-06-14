#pragma once

// Hawken (1.5.3.142579) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnlineSubsystemMeteor.OnlineAccountManager.ShutDown
struct UOnlineAccountManager_ShutDown_Params
{
};

// Function OnlineSubsystemMeteor.OnlineAccountManager.Init
struct UOnlineAccountManager_Init_Params
{
	class UOnlineSubsystem*                            OnlineSub;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineAccountObject.SetUniqueId
struct UOnlineAccountObject_SetUniqueId_Params
{
	struct FUniqueNetId                                NewUniqueId;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineAccountObject.MarkAchievementAsUnlocked
struct UOnlineAccountObject_MarkAchievementAsUnlocked_Params
{
	class UOnlineAchievementObject*                    AchievementObject;                                        // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineAccountObject.HasRole
struct UOnlineAccountObject_HasRole_Params
{
	struct FString                                     Role;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineAccountObject.ShutDown
struct UOnlineAccountObject_ShutDown_Params
{
};

// Function OnlineSubsystemMeteor.OnlineAccountObject.Init
struct UOnlineAccountObject_Init_Params
{
	class UOnlineAccountManager*                       Manager;                                                  // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineAchievementCollection.GetNextAchievement
struct UOnlineAchievementCollection_GetNextAchievement_Params
{
	class UOnlineAchievementObject*                    Achievement;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineAchievementCollection.ResetAchievementIterator
struct UOnlineAchievementCollection_ResetAchievementIterator_Params
{
};

// Function OnlineSubsystemMeteor.OnlineAchievementCollection.AddAchievements
struct UOnlineAchievementCollection_AddAchievements_Params
{
	class UOnlineAchievementCollection*                Achievements;                                             // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineAchievementCollection.SetAchievement
struct UOnlineAchievementCollection_SetAchievement_Params
{
	struct FUniqueNetId                                AchievementId;                                            // (Const, Parm, OutParm)
	class UOnlineAchievementObject*                    Achievement;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineAchievementCollection.GetAchievement
struct UOnlineAchievementCollection_GetAchievement_Params
{
	struct FUniqueNetId                                AchievementId;                                            // (Const, Parm, OutParm)
	class UOnlineAchievementObject*                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineAchievementCollection.NumAchievements
struct UOnlineAchievementCollection_NumAchievements_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineAchievementObject.CopyFrom
struct UOnlineAchievementObject_CopyFrom_Params
{
	class UOnlineAchievementObject*                    AchievementObject;                                        // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_PlayerExitClient
struct UOnlineEventTracking_SendEvent_PlayerExitClient_Params
{
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_PlayerLoggedIn
struct UOnlineEventTracking_SendEvent_PlayerLoggedIn_Params
{
	class AController*                                 Player;                                                   // (Parm)
	struct FString                                     GameVersion;                                              // (Parm, NeedCtorLink)
	struct FString                                     CommandLine;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_WriteGameItemStats
struct UOnlineEventTracking_SendEvent_WriteGameItemStats_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FString                                     InstanceID;                                               // (Parm, NeedCtorLink)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	int                                                TryCount;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_WriteUserStats
struct UOnlineEventTracking_SendEvent_WriteUserStats_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	int                                                TryCount;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_UpdatedMatchMakingRating
struct UOnlineEventTracking_SendEvent_UpdatedMatchMakingRating_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (Parm)
	struct FString                                     RatingKey;                                                // (Parm, NeedCtorLink)
	float                                              RatingValue;                                              // (Parm)
	struct FString                                     DeviationKey;                                             // (Parm, NeedCtorLink)
	float                                              DeviationValue;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_PeriodicServerPerformance
struct UOnlineEventTracking_SendEvent_PeriodicServerPerformance_Params
{
	struct FString                                     ServerName;                                               // (Parm, NeedCtorLink)
	int                                                avgTickMs;                                                // (Parm)
	int                                                maxTickMS;                                                // (Parm)
	int                                                avgDeltaMS;                                               // (Parm)
	int                                                maxDeltaMS;                                               // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_ServerStarted
struct UOnlineEventTracking_SendEvent_ServerStarted_Params
{
	struct FString                                     ServerName;                                               // (Parm, NeedCtorLink)
	struct FString                                     Region;                                                   // (Parm, NeedCtorLink)
	struct FString                                     CommandLine;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertProgressMessageSubTypeToString
struct UOnlineEventTracking_ConvertProgressMessageSubTypeToString_Params
{
	TEnumAsByte<EProgressMessageSubType>               MessageSubType;                                           // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertConnectionStatusToString
struct UOnlineEventTracking_ConvertConnectionStatusToString_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertOfferCurrencyToString
struct UOnlineEventTracking_ConvertOfferCurrencyToString_Params
{
	TEnumAsByte<EOfferCurrency>                        Currency;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertNetworkErrorCodeToString
struct UOnlineEventTracking_ConvertNetworkErrorCodeToString_Params
{
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.IsLoggedIn
struct UOnlineEventTracking_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.CreateEventObject
struct UOnlineEventTracking_CreateEventObject_Params
{
	class UStormEventObject*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.DebugPrintEventObject
struct UOnlineEventTracking_DebugPrintEventObject_Params
{
	class UStormEventObject*                           eventObject;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEventObject
struct UOnlineEventTracking_SendEventObject_Params
{
	class UStormEventObject*                           eventObject;                                              // (Parm)
	bool                                               bNoDebugTrace;                                            // (OptionalParm, Parm)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.CreateGuidString
struct UOnlineEventTracking_CreateGuidString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.GetLoggedInStormUserId
struct UOnlineEventTracking_GetLoggedInStormUserId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.GetUnrealEngineVersion
struct UOnlineEventTracking_GetUnrealEngineVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.GetBuiltFromChangelist
struct UOnlineEventTracking_GetBuiltFromChangelist_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.GetUniqueBuildId
struct UOnlineEventTracking_GetUniqueBuildId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.GetServerListingGuid
struct UOnlineEventTracking_GetServerListingGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineEventTracking.GetCurrentMatchID
struct UOnlineEventTracking_GetCurrentMatchID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineFriendCollection.SetFriend
struct UOnlineFriendCollection_SetFriend_Params
{
	struct FOnlineFriend                               Friend;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineFriendCollection.FindFriendByName
struct UOnlineFriendCollection_FindFriendByName_Params
{
	struct FString                                     FriendName;                                               // (Parm, NeedCtorLink)
	struct FOnlineFriend                               Friend;                                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineFriendCollection.GetNextFriend
struct UOnlineFriendCollection_GetNextFriend_Params
{
	struct FOnlineFriend                               Friend;                                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineFriendCollection.ResetFriendIterator
struct UOnlineFriendCollection_ResetFriendIterator_Params
{
};

// Function OnlineSubsystemMeteor.OnlineFriendCollection.GetFriend
struct UOnlineFriendCollection_GetFriend_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FOnlineFriend                               Friend;                                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineFriendCollection.NumFriends
struct UOnlineFriendCollection_NumFriends_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineFriendObject.HaveInvited
struct UOnlineFriendObject_HaveInvited_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineFriendObject.HasInvitedYou
struct UOnlineFriendObject_HasInvitedYou_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineFriendObject.ShouldBeDisplayed
struct UOnlineFriendObject_ShouldBeDisplayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameBundle.IsExpired
struct UOnlineGameBundle_IsExpired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameBundle.IsVisibleToClient
struct UOnlineGameBundle_IsVisibleToClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameBundle.IsMultiRedeemable
struct UOnlineGameBundle_IsMultiRedeemable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameBundle.GetExpiryDate
struct UOnlineGameBundle_GetExpiryDate_Params
{
	struct FString                                     Date;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameBundle.GetHasExpiryDate
struct UOnlineGameBundle_GetHasExpiryDate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameBundleCollection.GetNextBundle
struct UOnlineGameBundleCollection_GetNextBundle_Params
{
	class UOnlineGameBundle*                           Bundle;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameBundleCollection.ResetBundleIterator
struct UOnlineGameBundleCollection_ResetBundleIterator_Params
{
};

// Function OnlineSubsystemMeteor.OnlineGameBundleCollection.SetBundle
struct UOnlineGameBundleCollection_SetBundle_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	class UOnlineGameBundle*                           Bundle;                                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineGameBundleCollection.GetBundle
struct UOnlineGameBundleCollection_GetBundle_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	class UOnlineGameBundle*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameBundleCollection.NumBundles
struct UOnlineGameBundleCollection_NumBundles_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.CheckServerPassword
struct UOnlineGameInterfaceMeteor_CheckServerPassword_Params
{
	struct FString                                     ServerPassword;                                           // (Parm, NeedCtorLink)
	struct FString                                     ToCheck;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.SetAntiAddictionModifierOverride
struct UOnlineGameInterfaceMeteor_SetAntiAddictionModifierOverride_Params
{
	float                                              Modifier;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.GetPlayerAntiAddictionModifier
struct UOnlineGameInterfaceMeteor_GetPlayerAntiAddictionModifier_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.GenerateCurrentMatchID
struct UOnlineGameInterfaceMeteor_GenerateCurrentMatchID_Params
{
};

// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.TickInternetTasks
struct UOnlineGameInterfaceMeteor_TickInternetTasks_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.UpdateOnlineGame
struct UOnlineGameInterfaceMeteor_UpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         UpdatedGameSettings;                                      // (Parm)
	bool                                               bShouldRefreshOnlineData;                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.CreateOnlineGame
struct UOnlineGameInterfaceMeteor_CreateOnlineGame_Params
{
	unsigned char                                      HostingPlayerNum;                                         // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         NewGameSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.UnregisterPlayer
struct UOnlineGameInterfaceMeteor_UnregisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.RegisterPlayer
struct UOnlineGameInterfaceMeteor_RegisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bWasInvited;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.GetServerRegion
struct UOnlineGameInterfaceMeteor_GetServerRegion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineGameItem.SetAttributeString
struct UOnlineGameItem_SetAttributeString_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, CoerceParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineGameItem.GetAttributeValue
struct UOnlineGameItem_GetAttributeValue_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Default;                                                  // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineGameItem.GetAttribute
struct UOnlineGameItem_GetAttribute_Params
{
	int                                                Index;                                                    // (Parm)
	struct FOnlineGameItemAttribute                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineGameItem.NumAttributes
struct UOnlineGameItem_NumAttributes_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.DebugTestFunctions
struct UOnlineGameItemInstance_DebugTestFunctions_Params
{
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.DoesTimeIndicateRental
struct UOnlineGameItemInstance_DoesTimeIndicateRental_Params
{
	struct FString                                     ExpiryDate;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsTimeDefaultData
struct UOnlineGameItemInstance_IsTimeDefaultData_Params
{
	struct FString                                     ExpiryDate;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.HasUTCTimePassed
struct UOnlineGameItemInstance_HasUTCTimePassed_Params
{
	struct FString                                     UTCTime;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetCurrentUTCTimeStringMeteorFormat
struct UOnlineGameItemInstance_GetCurrentUTCTimeStringMeteorFormat_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.ConvertMinutesToTime
struct UOnlineGameItemInstance_ConvertMinutesToTime_Params
{
	int                                                totalSeconds;                                             // (Parm)
	int                                                Day;                                                      // (Parm, OutParm)
	int                                                Hour;                                                     // (Parm, OutParm)
	int                                                Min;                                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.ConvertSecondsToTime
struct UOnlineGameItemInstance_ConvertSecondsToTime_Params
{
	int                                                totalSeconds;                                             // (Parm)
	int                                                Day;                                                      // (Parm, OutParm)
	int                                                Hour;                                                     // (Parm, OutParm)
	int                                                Min;                                                      // (Parm, OutParm)
	int                                                Sec;                                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.ParseMeteorTimeStringIntoInt
struct UOnlineGameItemInstance_ParseMeteorTimeStringIntoInt_Params
{
	struct FString                                     meteorTime;                                               // (Parm, NeedCtorLink)
	int                                                Year;                                                     // (Parm, OutParm)
	int                                                Month;                                                    // (Parm, OutParm)
	int                                                Day;                                                      // (Parm, OutParm)
	int                                                Hour;                                                     // (Parm, OutParm)
	int                                                Min;                                                      // (Parm, OutParm)
	int                                                Sec;                                                      // (Parm, OutParm)
	bool                                               bRemoveDefaultData;                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.ParseMeteorTimeStringIntoString
struct UOnlineGameItemInstance_ParseMeteorTimeStringIntoString_Params
{
	struct FString                                     meteorTime;                                               // (Parm, NeedCtorLink)
	struct FString                                     sYear;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     sMonth;                                                   // (Parm, OutParm, NeedCtorLink)
	struct FString                                     sDay;                                                     // (Parm, OutParm, NeedCtorLink)
	struct FString                                     sHour;                                                    // (Parm, OutParm, NeedCtorLink)
	struct FString                                     sMin;                                                     // (Parm, OutParm, NeedCtorLink)
	struct FString                                     sSec;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetTimeMeteorFormat
struct UOnlineGameItemInstance_GetTimeMeteorFormat_Params
{
	int                                                Year;                                                     // (Parm)
	int                                                Month;                                                    // (Parm)
	int                                                Day;                                                      // (Parm)
	int                                                Hour;                                                     // (Parm)
	int                                                Min;                                                      // (Parm)
	int                                                Sec;                                                      // (Parm)
	struct FString                                     formattedTime;                                            // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.SetExpirationDateToDefault
struct UOnlineGameItemInstance_SetExpirationDateToDefault_Params
{
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.DecrementLimitedUses
struct UOnlineGameItemInstance_DecrementLimitedUses_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsExpired
struct UOnlineGameItemInstance_IsExpired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetRemainingRentalTime
struct UOnlineGameItemInstance_GetRemainingRentalTime_Params
{
	int                                                daysOut;                                                  // (Parm, OutParm)
	int                                                hoursOut;                                                 // (Parm, OutParm)
	int                                                minutesOut;                                               // (Parm, OutParm)
	int                                                secondsOut;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetRemainingRentalTimeAsString
struct UOnlineGameItemInstance_GetRemainingRentalTimeAsString_Params
{
	struct FString                                     RemainingTime;                                            // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsUseLimitedWithGet
struct UOnlineGameItemInstance_IsUseLimitedWithGet_Params
{
	int                                                TotalUses;                                                // (Parm, OutParm)
	int                                                usesLeft;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsUseLimited
struct UOnlineGameItemInstance_IsUseLimited_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsTimedRentalWithGet
struct UOnlineGameItemInstance_IsTimedRentalWithGet_Params
{
	struct FString                                     ExpiryDate;                                               // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsTimedRental
struct UOnlineGameItemInstance_IsTimedRental_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.GetNextItem
struct UOnlineGameItemInstanceCollection_GetNextItem_Params
{
	class UOnlineGameItemInstance*                     Item;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.ResetItemIterator
struct UOnlineGameItemInstanceCollection_ResetItemIterator_Params
{
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.AddItems
struct UOnlineGameItemInstanceCollection_AddItems_Params
{
	class UOnlineGameItemInstanceCollection*           Items;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.SetItem
struct UOnlineGameItemInstanceCollection_SetItem_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	class UOnlineGameItemInstance*                     Item;                                                     // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.GetItemsByTypeId
struct UOnlineGameItemInstanceCollection_GetItemsByTypeId_Params
{
	struct FString                                     TypeId;                                                   // (Parm, NeedCtorLink)
	TArray<class UOnlineGameItemInstance*>             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.GetItem
struct UOnlineGameItemInstanceCollection_GetItem_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	class UOnlineGameItemInstance*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.NumItems
struct UOnlineGameItemInstanceCollection_NumItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.GetNextItem
struct UOnlineGameItemTypeCollection_GetNextItem_Params
{
	class UOnlineGameItemType*                         Item;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.ResetItemIterator
struct UOnlineGameItemTypeCollection_ResetItemIterator_Params
{
};

// Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.SetItem
struct UOnlineGameItemTypeCollection_SetItem_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	class UOnlineGameItemType*                         Item;                                                     // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.GetItem
struct UOnlineGameItemTypeCollection_GetItem_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	class UOnlineGameItemType*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.NumItems
struct UOnlineGameItemTypeCollection_NumItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.DebugTestFunctions
struct UOnlineGameOffer_DebugTestFunctions_Params
{
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.IsRentalPurchaseOfferDefault
struct UOnlineGameOffer_IsRentalPurchaseOfferDefault_Params
{
	struct FString                                     RentalPurchaseOfferID;                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.IsExpired
struct UOnlineGameOffer_IsExpired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.GetUseLimit
struct UOnlineGameOffer_GetUseLimit_Params
{
	int                                                TotalUses;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.GetHasUseLimit
struct UOnlineGameOffer_GetHasUseLimit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.GetRelativeExpiry
struct UOnlineGameOffer_GetRelativeExpiry_Params
{
	int                                                RelativeExpiryMinutes;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.GetHasRelativeExpiry
struct UOnlineGameOffer_GetHasRelativeExpiry_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.GetExpiryDate
struct UOnlineGameOffer_GetExpiryDate_Params
{
	struct FString                                     ExpiryDate;                                               // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.GetHasExpiryDate
struct UOnlineGameOffer_GetHasExpiryDate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.GetNextAttribute
struct UOnlineGameOffer_GetNextAttribute_Params
{
	struct FOnlineGameOfferAttribute                   Attribute;                                                // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.ResetAttributeIterator
struct UOnlineGameOffer_ResetAttributeIterator_Params
{
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.SetAttributeString
struct UOnlineGameOffer_SetAttributeString_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.GetAttributeValue
struct UOnlineGameOffer_GetAttributeValue_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Default;                                                  // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineGameOffer.NumAttributes
struct UOnlineGameOffer_NumAttributes_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOfferCollection.GetNextOffer
struct UOnlineGameOfferCollection_GetNextOffer_Params
{
	class UOnlineGameOffer*                            Offer;                                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOfferCollection.ResetOfferIterator
struct UOnlineGameOfferCollection_ResetOfferIterator_Params
{
};

// Function OnlineSubsystemMeteor.OnlineGameOfferCollection.SetOffer
struct UOnlineGameOfferCollection_SetOffer_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	class UOnlineGameOffer*                            Offer;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineGameOfferCollection.GetOffer
struct UOnlineGameOfferCollection_GetOffer_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	class UOnlineGameOffer*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineGameOfferCollection.NumOffers
struct UOnlineGameOfferCollection_NumOffers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineInventoryManager.ShutDown
struct UOnlineInventoryManager_ShutDown_Params
{
};

// Function OnlineSubsystemMeteor.OnlineInventoryManager.Init
struct UOnlineInventoryManager_Init_Params
{
	class UOnlineSubsystem*                            OnlineSub;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UuidStringToUniqueNetId
struct UOnlineSubsystemMeteor_UuidStringToUniqueNetId_Params
{
	struct FString                                     UniqueNetIdString;                                        // (Parm, NeedCtorLink)
	struct FUniqueNetId                                out_UniqueId;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UniqueNetIdToUuidString
struct UOnlineSubsystemMeteor_UniqueNetIdToUuidString_Params
{
	struct FUniqueNetId                                IdToConvert;                                              // (Const, Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SteamIDToUniqueNetId
struct UOnlineSubsystemMeteor_SteamIDToUniqueNetId_Params
{
	struct FString                                     SteamID;                                                  // (Parm, NeedCtorLink)
	struct FUniqueNetId                                out_UniqueId;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UniqueNetIdToSteamID
struct UOnlineSubsystemMeteor_UniqueNetIdToSteamID_Params
{
	struct FUniqueNetId                                IdToConvert;                                              // (Const, Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetSteamAuthSessionTicket
struct UOnlineSubsystemMeteor_GetSteamAuthSessionTicket_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearSetGameTypeCompletedDelegate
struct UOnlineSubsystemMeteor_ClearSetGameTypeCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddSetGameTypeCompletedDelegate
struct UOnlineSubsystemMeteor_AddSetGameTypeCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnSetGameTypeCompleted
struct UOnlineSubsystemMeteor_OnSetGameTypeCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FString                                     PartyId;                                                  // (Parm, NeedCtorLink)
	struct FString                                     GameType;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetGameType
struct UOnlineSubsystemMeteor_SetGameType_Params
{
	struct FString                                     PartyId;                                                  // (Parm, NeedCtorLink)
	struct FString                                     GameType;                                                 // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRefreshUserInfoCompletedDelegate
struct UOnlineSubsystemMeteor_ClearRefreshUserInfoCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRefreshUserInfoCompletedDelegate
struct UOnlineSubsystemMeteor_AddRefreshUserInfoCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRefreshUserInfoCompleted
struct UOnlineSubsystemMeteor_OnRefreshUserInfoCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RefreshUserInfo
struct UOnlineSubsystemMeteor_RefreshUserInfo_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearUnlockAchievementObjectCompletedDelegate
struct UOnlineSubsystemMeteor_ClearUnlockAchievementObjectCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddUnlockAchievementObjectCompletedDelegate
struct UOnlineSubsystemMeteor_AddUnlockAchievementObjectCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnUnlockAchievementObjectCompleted
struct UOnlineSubsystemMeteor_OnUnlockAchievementObjectCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FUniqueNetId                                AchievementGuid;                                          // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnlockAchievementObject
struct UOnlineSubsystemMeteor_UnlockAchievementObject_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FUniqueNetId                                AchievementGuid;                                          // (Const, Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUnlockedAchievementCollectionCompletedDelegate
struct UOnlineSubsystemMeteor_ClearReadUnlockedAchievementCollectionCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUnlockedAchievementCollectionCompletedDelegate
struct UOnlineSubsystemMeteor_AddReadUnlockedAchievementCollectionCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUnlockedAchievementCollectionCompleted
struct UOnlineSubsystemMeteor_OnReadUnlockedAchievementCollectionCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	class UOnlineUnlockedAchievementCollection*        Collection;                                               // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUnlockedAchievementCollection
struct UOnlineSubsystemMeteor_ReadUnlockedAchievementCollection_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FString                                     CountryCode;                                              // (Parm, NeedCtorLink)
	class UOnlineUnlockedAchievementCollection*        Collection;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadAchievementCollectionCompletedDelegate
struct UOnlineSubsystemMeteor_ClearReadAchievementCollectionCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadAchievementCollectionCompletedDelegate
struct UOnlineSubsystemMeteor_AddReadAchievementCollectionCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadAchievementCollectionCompleted
struct UOnlineSubsystemMeteor_OnReadAchievementCollectionCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadAchievementCollection
struct UOnlineSubsystemMeteor_ReadAchievementCollection_Params
{
	struct FString                                     CountryCode;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRoleAuthorizeCompleteDelegate
struct UOnlineSubsystemMeteor_ClearRoleAuthorizeCompleteDelegate_Params
{
	struct FScriptDelegate                             RoleAuthorizeCompleteHandler;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRoleAuthorizeCompleteDelegate
struct UOnlineSubsystemMeteor_AddRoleAuthorizeCompleteDelegate_Params
{
	struct FScriptDelegate                             RoleAuthorizeCompleteHandler;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRoleAuthorizeComplete
struct UOnlineSubsystemMeteor_OnRoleAuthorizeComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AuthorizeUserRoles
struct UOnlineSubsystemMeteor_AuthorizeUserRoles_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	TArray<struct FString>                             RequiredRoles;                                            // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.BuildNetworkErrorMessage
struct UOnlineSubsystemMeteor_BuildNetworkErrorMessage_Params
{
	struct FString                                     BaseMessage;                                              // (Parm, NeedCtorLink)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetNetworkErrorName
struct UOnlineSubsystemMeteor_GetNetworkErrorName_Params
{
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsServerListingCreated
struct UOnlineSubsystemMeteor_IsServerListingCreated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPendingMatchBeginState
struct UOnlineSubsystemMeteor_OnPendingMatchBeginState_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertStormServerListingToGameSearchResult
struct UOnlineSubsystemMeteor_ConvertStormServerListingToGameSearchResult_Params
{
	struct FStormGameServerListing                     ServerListing;                                            // (Parm, NeedCtorLink)
	class UClass*                                      GameSearchClass;                                          // (Parm)
	struct FOnlineGameSearchResult                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFindUnrankedMatchCompletedDelegate
struct UOnlineSubsystemMeteor_ClearFindUnrankedMatchCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFindUnrankedMatchCompletedDelegate
struct UOnlineSubsystemMeteor_AddFindUnrankedMatchCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFindUnrankedMatchCompleted
struct UOnlineSubsystemMeteor_OnFindUnrankedMatchCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FStormGameServerListing                     ServerListing;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CancelFindUnrankedMatch
struct UOnlineSubsystemMeteor_CancelFindUnrankedMatch_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsFindUnrankedMatchInProgress
struct UOnlineSubsystemMeteor_IsFindUnrankedMatchInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FindUnrankedMatch
struct UOnlineSubsystemMeteor_FindUnrankedMatch_Params
{
	TArray<struct FUniqueNetId>                        PlayerList;                                               // (Const, Parm, NeedCtorLink)
	struct FString                                     RegionName;                                               // (Parm, NeedCtorLink)
	struct FString                                     GameType;                                                 // (OptionalParm, Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CancelReservationRequest
struct UOnlineSubsystemMeteor_CancelReservationRequest_Params
{
	struct FStormGameServerListing                     DesiredServer;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRequestReservationCompleteDelegate
struct UOnlineSubsystemMeteor_ClearRequestReservationCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRequestReservationCompleteDelegate
struct UOnlineSubsystemMeteor_AddRequestReservationCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRequestReservationComplete
struct UOnlineSubsystemMeteor_OnRequestReservationComplete_Params
{
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FString                                     EndPoint;                                                 // (Parm, NeedCtorLink)
	int                                                Port;                                                     // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RequestReservation
struct UOnlineSubsystemMeteor_RequestReservation_Params
{
	struct FStormGameServerListing                     DesiredServer;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearGiveWalletCurrencyCompleteDelegate
struct UOnlineSubsystemMeteor_ClearGiveWalletCurrencyCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddGiveWalletCurrencyCompleteDelegate
struct UOnlineSubsystemMeteor_AddGiveWalletCurrencyCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnGiveWalletCurrencyComplete
struct UOnlineSubsystemMeteor_OnGiveWalletCurrencyComplete_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	TEnumAsByte<EOfferCurrency>                        Currency;                                                 // (Parm)
	int                                                Amount;                                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GiveWalletCurrency
struct UOnlineSubsystemMeteor_GiveWalletCurrency_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	TEnumAsByte<EOfferCurrency>                        Currency;                                                 // (Parm)
	int                                                Amount;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearGetFromXPOverflowCompleteDelegate
struct UOnlineSubsystemMeteor_ClearGetFromXPOverflowCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddGetFromXPOverflowCompleteDelegate
struct UOnlineSubsystemMeteor_AddGetFromXPOverflowCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnGetFromXPOverflowComplete
struct UOnlineSubsystemMeteor_OnGetFromXPOverflowComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     MechId;                                                   // (Parm, NeedCtorLink)
	int                                                Amount;                                                   // (Parm)
	bool                                               bLegacyTransfer;                                          // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetFromXPOverflow
struct UOnlineSubsystemMeteor_GetFromXPOverflow_Params
{
	struct FString                                     MechId;                                                   // (Parm, NeedCtorLink)
	int                                                Amount;                                                   // (Parm)
	bool                                               bLegacyTransfer;                                          // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearSendToXPOverflowCompleteDelegate
struct UOnlineSubsystemMeteor_ClearSendToXPOverflowCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddSendToXPOverflowCompleteDelegate
struct UOnlineSubsystemMeteor_AddSendToXPOverflowCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnSendToXPOverflowComplete
struct UOnlineSubsystemMeteor_OnSendToXPOverflowComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     MechId;                                                   // (Parm, NeedCtorLink)
	int                                                Amount;                                                   // (Parm)
	bool                                               bLegacyTransfer;                                          // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendToXPOverflow
struct UOnlineSubsystemMeteor_SendToXPOverflow_Params
{
	struct FString                                     MechId;                                                   // (Parm, NeedCtorLink)
	int                                                Amount;                                                   // (Parm)
	bool                                               bLegacyTransfer;                                          // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearGetOverflowCompleteDelegate
struct UOnlineSubsystemMeteor_ClearGetOverflowCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddGetOverflowCompleteDelegate
struct UOnlineSubsystemMeteor_AddGetOverflowCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnGetOverflowComplete
struct UOnlineSubsystemMeteor_OnGetOverflowComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	int                                                interval;                                                 // (Parm)
	int                                                mcPerIncrement;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetOverflow
struct UOnlineSubsystemMeteor_GetOverflow_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRefreshWalletCompleteDelegate
struct UOnlineSubsystemMeteor_ClearRefreshWalletCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRefreshWalletCompleteDelegate
struct UOnlineSubsystemMeteor_AddRefreshWalletCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRefreshWalletComplete
struct UOnlineSubsystemMeteor_OnRefreshWalletComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RefreshWallet
struct UOnlineSubsystemMeteor_RefreshWallet_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRentGameOfferCompleteDelegate
struct UOnlineSubsystemMeteor_ClearRentGameOfferCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRentGameOfferCompleteDelegate
struct UOnlineSubsystemMeteor_AddRentGameOfferCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRentGameOfferComplete
struct UOnlineSubsystemMeteor_OnRentGameOfferComplete_Params
{
	int                                                TaskID;                                                   // (Parm)
	struct FString                                     OfferId;                                                  // (Parm, NeedCtorLink)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	class UOnlineGameItemInstanceCollection*           RentedGameItemInstances;                                  // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RentGameOfferForCharacter
struct UOnlineSubsystemMeteor_RentGameOfferForCharacter_Params
{
	struct FString                                     OfferId;                                                  // (Parm, NeedCtorLink)
	struct FString                                     CharacterInstanceId;                                      // (Parm, NeedCtorLink)
	TEnumAsByte<EOfferCurrency>                        CurrencyType;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RentGameOffer
struct UOnlineSubsystemMeteor_RentGameOffer_Params
{
	struct FString                                     OfferId;                                                  // (Parm, NeedCtorLink)
	TEnumAsByte<EOfferCurrency>                        CurrencyType;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearServerPurchaseGameOfferCompleteDelegate
struct UOnlineSubsystemMeteor_ClearServerPurchaseGameOfferCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddServerPurchaseGameOfferCompleteDelegate
struct UOnlineSubsystemMeteor_AddServerPurchaseGameOfferCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnServerPurchaseGameOfferComplete
struct UOnlineSubsystemMeteor_OnServerPurchaseGameOfferComplete_Params
{
	int                                                TaskID;                                                   // (Parm)
	struct FString                                     OfferId;                                                  // (Parm, NeedCtorLink)
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	class UOnlineGameItemInstanceCollection*           PurchasedGameItemInstances;                               // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearPurchaseGameOfferCompleteDelegate
struct UOnlineSubsystemMeteor_ClearPurchaseGameOfferCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddPurchaseGameOfferCompleteDelegate
struct UOnlineSubsystemMeteor_AddPurchaseGameOfferCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPurchaseGameOfferComplete
struct UOnlineSubsystemMeteor_OnPurchaseGameOfferComplete_Params
{
	int                                                TaskID;                                                   // (Parm)
	struct FString                                     OfferId;                                                  // (Parm, NeedCtorLink)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	class UOnlineGameItemInstanceCollection*           PurchasedGameItemInstances;                               // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameOfferForCharacter
struct UOnlineSubsystemMeteor_PurchaseGameOfferForCharacter_Params
{
	struct FString                                     OfferId;                                                  // (Parm, NeedCtorLink)
	struct FString                                     CharacterInstanceId;                                      // (Parm, NeedCtorLink)
	TEnumAsByte<EOfferCurrency>                        CurrencyType;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ServerPurchaseGameOffer
struct UOnlineSubsystemMeteor_ServerPurchaseGameOffer_Params
{
	struct FString                                     OfferId;                                                  // (Parm, NeedCtorLink)
	struct FUniqueNetId                                UserId;                                                   // (Const, Parm, OutParm)
	struct FString                                     MechInstanceId;                                           // (Parm, NeedCtorLink)
	TEnumAsByte<EOfferCurrency>                        CurrencyType;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameOffer
struct UOnlineSubsystemMeteor_PurchaseGameOffer_Params
{
	struct FString                                     OfferId;                                                  // (Parm, NeedCtorLink)
	TEnumAsByte<EOfferCurrency>                        CurrencyType;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateGameItemTypeCollectionWithOfferIds
struct UOnlineSubsystemMeteor_UpdateGameItemTypeCollectionWithOfferIds_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertOfferCurrencyToStorm
struct UOnlineSubsystemMeteor_ConvertOfferCurrencyToStorm_Params
{
	TEnumAsByte<EOfferCurrency>                        Currency;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertOfferCurrencyFromStorm
struct UOnlineSubsystemMeteor_ConvertOfferCurrencyFromStorm_Params
{
	struct FString                                     Currency;                                                 // (Parm, NeedCtorLink)
	TEnumAsByte<EOfferCurrency>                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearPurchaseGameBundleCompleteDelegate
struct UOnlineSubsystemMeteor_ClearPurchaseGameBundleCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddPurchaseGameBundleCompleteDelegate
struct UOnlineSubsystemMeteor_AddPurchaseGameBundleCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPurchaseGameBundleComplete
struct UOnlineSubsystemMeteor_OnPurchaseGameBundleComplete_Params
{
	int                                                TaskID;                                                   // (Parm)
	struct FString                                     BundleId;                                                 // (Parm, NeedCtorLink)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameBundleForCharacter
struct UOnlineSubsystemMeteor_PurchaseGameBundleForCharacter_Params
{
	struct FString                                     BundleId;                                                 // (Parm, NeedCtorLink)
	struct FString                                     CharacterInstanceId;                                      // (Parm, NeedCtorLink)
	TEnumAsByte<EBundleCurrency>                       CurrencyType;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameBundle
struct UOnlineSubsystemMeteor_PurchaseGameBundle_Params
{
	struct FString                                     BundleId;                                                 // (Parm, NeedCtorLink)
	TEnumAsByte<EBundleCurrency>                       CurrencyType;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameBundleCollectionCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadGameBundleCollectionCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameBundleCollectionCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadGameBundleCollectionCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameBundleCollectionComplete
struct UOnlineSubsystemMeteor_OnReadGameBundleCollectionComplete_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameBundleCollection
struct UOnlineSubsystemMeteor_ReadGameBundleCollection_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameOfferCollectionCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadGameOfferCollectionCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameOfferCollectionCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadGameOfferCollectionCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameOfferCollectionComplete
struct UOnlineSubsystemMeteor_OnReadGameOfferCollectionComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameOfferCollection
struct UOnlineSubsystemMeteor_ReadGameOfferCollection_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameItemTypeCollectionCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadGameItemTypeCollectionCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameItemTypeCollectionCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadGameItemTypeCollectionCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameItemTypeCollectionComplete
struct UOnlineSubsystemMeteor_OnReadGameItemTypeCollectionComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameItemTypeCollection
struct UOnlineSubsystemMeteor_ReadGameItemTypeCollection_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearDeleteGameItemInstanceCompleteDelegate
struct UOnlineSubsystemMeteor_ClearDeleteGameItemInstanceCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddDeleteGameItemInstanceCompleteDelegate
struct UOnlineSubsystemMeteor_AddDeleteGameItemInstanceCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnDeleteGameItemInstanceComplete
struct UOnlineSubsystemMeteor_OnDeleteGameItemInstanceComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FString                                     InstanceID;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteGameItemInstance
struct UOnlineSubsystemMeteor_DeleteGameItemInstance_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FString                                     InstanceID;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadAllUserGameItemStatsCompletedDelegate
struct UOnlineSubsystemMeteor_ClearReadAllUserGameItemStatsCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadAllUserGameItemStatsCompletedDelegate
struct UOnlineSubsystemMeteor_AddReadAllUserGameItemStatsCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadAllUserGameItemStatsCompleted
struct UOnlineSubsystemMeteor_OnReadAllUserGameItemStatsCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	class UOnlineGameItemInstanceCollection*           InstanceCollection;                                       // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadAllUserGameItemStats
struct UOnlineSubsystemMeteor_ReadAllUserGameItemStats_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	class UOnlineGameItemInstanceCollection*           InstanceCollection;                                       // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUserGameItemStatsCompletedDelegate
struct UOnlineSubsystemMeteor_ClearReadUserGameItemStatsCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUserGameItemStatsCompletedDelegate
struct UOnlineSubsystemMeteor_AddReadUserGameItemStatsCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUserGameItemStatsCompleted
struct UOnlineSubsystemMeteor_OnReadUserGameItemStatsCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FString                                     InstanceID;                                               // (Parm, NeedCtorLink)
	class UOnlinePlayerStats*                          Stats;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUserGameItemStats
struct UOnlineSubsystemMeteor_ReadUserGameItemStats_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FString                                     InstanceID;                                               // (Parm, NeedCtorLink)
	class UOnlinePlayerStats*                          Stats;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearBatchIncrementUserGameItemStatsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearBatchIncrementUserGameItemStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddBatchIncrementUserGameItemStatsCompleteDelegate
struct UOnlineSubsystemMeteor_AddBatchIncrementUserGameItemStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnBatchIncrementUserGameItemStatsComplete
struct UOnlineSubsystemMeteor_OnBatchIncrementUserGameItemStatsComplete_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	TArray<struct FStormUserGameItemStats>             StatsArray;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.BatchIncrementUserGameItemStats
struct UOnlineSubsystemMeteor_BatchIncrementUserGameItemStats_Params
{
	TArray<struct FStormUserGameItemStats>             StatsArray;                                               // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearIncrementUserGameItemStatsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearIncrementUserGameItemStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddIncrementUserGameItemStatsCompleteDelegate
struct UOnlineSubsystemMeteor_AddIncrementUserGameItemStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnIncrementUserGameItemStatsComplete
struct UOnlineSubsystemMeteor_OnIncrementUserGameItemStatsComplete_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	class UOnlineGameItemInstance*                     Instance;                                                 // (Parm)
	class UOnlinePlayerStats*                          Stats;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IncrementUserGameItemStats
struct UOnlineSubsystemMeteor_IncrementUserGameItemStats_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	class UOnlineGameItemInstance*                     Instance;                                                 // (Parm)
	class UOnlinePlayerStats*                          Stats;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearUpdateGameItemInstanceCompleteDelegate
struct UOnlineSubsystemMeteor_ClearUpdateGameItemInstanceCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddUpdateGameItemInstanceCompleteDelegate
struct UOnlineSubsystemMeteor_AddUpdateGameItemInstanceCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnUpdateGameItemInstanceComplete
struct UOnlineSubsystemMeteor_OnUpdateGameItemInstanceComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	class UOnlineGameItemInstance*                     Instance;                                                 // (Parm)
	TArray<struct FString>                             PrefixedAttributesOnly;                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateGameItemInstance
struct UOnlineSubsystemMeteor_UpdateGameItemInstance_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	class UOnlineGameItemInstance*                     Instance;                                                 // (Parm)
	TArray<struct FString>                             PrefixedAttributesOnly;                                   // (OptionalParm, Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameItemInstancesCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadGameItemInstancesCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameItemInstancesCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadGameItemInstancesCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameItemInstancesComplete
struct UOnlineSubsystemMeteor_OnReadGameItemInstancesComplete_Params
{
	int                                                TaskID;                                                   // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	TArray<struct FString>                             InstanceIds;                                              // (Parm, NeedCtorLink)
	bool                                               bReadChildren;                                            // (Parm)
	class UOnlineGameItemInstanceCollection*           ItemInstanceCollection;                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameItemInstances
struct UOnlineSubsystemMeteor_ReadGameItemInstances_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	TArray<struct FString>                             InstanceIds;                                              // (Parm, NeedCtorLink)
	bool                                               bReadChildren;                                            // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameItemInstanceCollectionCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadGameItemInstanceCollectionCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameItemInstanceCollectionCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadGameItemInstanceCollectionCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameItemInstanceCollectionComplete
struct UOnlineSubsystemMeteor_OnReadGameItemInstanceCollectionComplete_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
	class UOnlineGameItemInstanceCollection*           ItemInstanceCollection;                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameItemInstanceCollection
struct UOnlineSubsystemMeteor_ReadGameItemInstanceCollection_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	class UOnlineGameItemInstanceCollection*           ItemInstanceCollection;                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWriteUserSettingsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearWriteUserSettingsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWriteUserSettingsCompleteDelegate
struct UOnlineSubsystemMeteor_AddWriteUserSettingsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWriteUserSettingsComplete
struct UOnlineSubsystemMeteor_OnWriteUserSettingsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteUserSettings
struct UOnlineSubsystemMeteor_WriteUserSettings_Params
{
	class UOnlinePlayerSettings*                       Settings;                                                 // (Parm)
	TEnumAsByte<ESettingsCategory>                     SettingsCategory;                                         // (OptionalParm, Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertSettingsCategoryToStorm
struct UOnlineSubsystemMeteor_ConvertSettingsCategoryToStorm_Params
{
	TEnumAsByte<ESettingsCategory>                     SettingsCategory;                                         // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUserSettingsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadUserSettingsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUserSettingsCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadUserSettingsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUserSettingsComplete
struct UOnlineSubsystemMeteor_OnReadUserSettingsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	class UOnlinePlayerSettings*                       Settings;                                                 // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUserSettings
struct UOnlineSubsystemMeteor_ReadUserSettings_Params
{
	TArray<struct FString>                             SettingKeys;                                              // (Parm, NeedCtorLink)
	TEnumAsByte<ESettingsCategory>                     SettingsCategory;                                         // (OptionalParm, Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (OptionalParm, Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWriteUserStatsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearWriteUserStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWriteUserStatsCompleteDelegate
struct UOnlineSubsystemMeteor_AddWriteUserStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWriteUserStatsComplete
struct UOnlineSubsystemMeteor_OnWriteUserStatsComplete_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	class UOnlinePlayerStats*                          PlayerStats;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteUserStats
struct UOnlineSubsystemMeteor_WriteUserStats_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	class UOnlinePlayerStats*                          PlayerStats;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUserStatsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadUserStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUserStatsCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadUserStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUserStatsComplete
struct UOnlineSubsystemMeteor_OnReadUserStatsComplete_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	class UOnlinePlayerStats*                          PlayerStats;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUserStats
struct UOnlineSubsystemMeteor_ReadUserStats_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	class UOnlinePlayerStats*                          PlayerStats;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFindOnlineGameServersCompletedDelegate
struct UOnlineSubsystemMeteor_ClearFindOnlineGameServersCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFindOnlineGameServersCompletedDelegate
struct UOnlineSubsystemMeteor_AddFindOnlineGameServersCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFindOnlineGameServersCompleted
struct UOnlineSubsystemMeteor_OnFindOnlineGameServersCompleted_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FindOnlineGameServers
struct UOnlineSubsystemMeteor_FindOnlineGameServers_Params
{
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     GameType;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetLocalAccountNames
struct UOnlineSubsystemMeteor_GetLocalAccountNames_Params
{
	TArray<struct FString>                             Accounts;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteLocalAccount
struct UOnlineSubsystemMeteor_DeleteLocalAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RenameLocalAccount
struct UOnlineSubsystemMeteor_RenameLocalAccount_Params
{
	struct FString                                     NewUserName;                                              // (Parm, NeedCtorLink)
	struct FString                                     OldUserName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CreateLocalAccount
struct UOnlineSubsystemMeteor_CreateLocalAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearCreateOnlineAccountCompletedDelegate
struct UOnlineSubsystemMeteor_ClearCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddCreateOnlineAccountCompletedDelegate
struct UOnlineSubsystemMeteor_AddCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnCreateOnlineAccountCompleted
struct UOnlineSubsystemMeteor_OnCreateOnlineAccountCompleted_Params
{
	TEnumAsByte<EOnlineAccountCreateStatus>            ErrorStatus;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CreateOnlineAccount
struct UOnlineSubsystemMeteor_CreateOnlineAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	struct FString                                     EmailAddress;                                             // (Parm, NeedCtorLink)
	struct FString                                     ProductKey;                                               // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetAchievements
struct UOnlineSubsystemMeteor_GetAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FAchievementDetails>                 Achievements;                                             // (Parm, OutParm, NeedCtorLink)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadAchievementsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadAchievementsCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadAchievementsComplete
struct UOnlineSubsystemMeteor_OnReadAchievementsComplete_Params
{
	int                                                TitleId;                                                  // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadAchievements
struct UOnlineSubsystemMeteor_ReadAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	bool                                               bShouldReadText;                                          // (OptionalParm, Parm)
	bool                                               bShouldReadImages;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearUnlockAchievementCompleteDelegate
struct UOnlineSubsystemMeteor_ClearUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddUnlockAchievementCompleteDelegate
struct UOnlineSubsystemMeteor_AddUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnUnlockAchievementComplete
struct UOnlineSubsystemMeteor_OnUnlockAchievementComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnlockAchievement
struct UOnlineSubsystemMeteor_UnlockAchievement_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                AchievementId;                                            // (Parm)
	float                                              PercentComplete;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteMessage
struct UOnlineSubsystemMeteor_DeleteMessage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnmuteAll
struct UOnlineSubsystemMeteor_UnmuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.MuteAll
struct UOnlineSubsystemMeteor_MuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bAllowFriends;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFriendMessageReceivedDelegate
struct UOnlineSubsystemMeteor_ClearFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendMessageReceivedDelegate
struct UOnlineSubsystemMeteor_AddFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFriendMessageReceived
struct UOnlineSubsystemMeteor_OnFriendMessageReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                SendingPlayer;                                            // (Parm)
	struct FString                                     SendingNick;                                              // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetFriendMessages
struct UOnlineSubsystemMeteor_GetFriendMessages_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearJoinFriendGameCompleteDelegate
struct UOnlineSubsystemMeteor_ClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddJoinFriendGameCompleteDelegate
struct UOnlineSubsystemMeteor_AddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnJoinFriendGameComplete
struct UOnlineSubsystemMeteor_OnJoinFriendGameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.JoinFriendGame
struct UOnlineSubsystemMeteor_JoinFriendGame_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReceivedGameInviteDelegate
struct UOnlineSubsystemMeteor_ClearReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReceivedGameInviteDelegate
struct UOnlineSubsystemMeteor_AddReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReceivedGameInvite
struct UOnlineSubsystemMeteor_OnReceivedGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     InviterName;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendGameInviteToFriends
struct UOnlineSubsystemMeteor_SendGameInviteToFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Friends;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendGameInviteToFriend
struct UOnlineSubsystemMeteor_SendGameInviteToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendMessageToFriend
struct UOnlineSubsystemMeteor_SendMessageToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFriendInviteReceivedDelegate
struct UOnlineSubsystemMeteor_ClearFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendInviteReceivedDelegate
struct UOnlineSubsystemMeteor_AddFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFriendInviteReceived
struct UOnlineSubsystemMeteor_OnFriendInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	struct FString                                     RequestingNick;                                           // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RemoveFriend
struct UOnlineSubsystemMeteor_RemoveFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                FormerFriend;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DenyFriendInvite
struct UOnlineSubsystemMeteor_DenyFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AcceptFriendInvite
struct UOnlineSubsystemMeteor_AcceptFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearAddFriendByNameCompleteDelegate
struct UOnlineSubsystemMeteor_ClearAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddAddFriendByNameCompleteDelegate
struct UOnlineSubsystemMeteor_AddAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnAddFriendByNameComplete
struct UOnlineSubsystemMeteor_OnAddFriendByNameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendByName
struct UOnlineSubsystemMeteor_AddFriendByName_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     FriendName;                                               // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriend
struct UOnlineSubsystemMeteor_AddFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                NewFriend;                                                // (Parm)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemMeteor_ClearWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WritePlayerStorage
struct UOnlineSubsystemMeteor_WritePlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	int                                                DeviceID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetPlayerStorage
struct UOnlineSubsystemMeteor_GetPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadPlayerStorageComplete
struct UOnlineSubsystemMeteor_OnReadPlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadPlayerStorage
struct UOnlineSubsystemMeteor_ReadPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	int                                                DeviceID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadPlayerStorageForNetId
struct UOnlineSubsystemMeteor_ReadPlayerStorageForNetId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadPlayerStorageForNetIdComplete
struct UOnlineSubsystemMeteor_OnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemMeteor_AddWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWritePlayerStorageComplete
struct UOnlineSubsystemMeteor_OnWritePlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetKeyboardInputResults
struct UOnlineSubsystemMeteor_GetKeyboardInputResults_Params
{
	unsigned char                                      bWasCanceled;                                             // (Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearKeyboardInputDoneDelegate
struct UOnlineSubsystemMeteor_ClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddKeyboardInputDoneDelegate
struct UOnlineSubsystemMeteor_AddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnKeyboardInputComplete
struct UOnlineSubsystemMeteor_OnKeyboardInputComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ShowKeyboardUI
struct UOnlineSubsystemMeteor_ShowKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                              // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetOnlineStatus
struct UOnlineSubsystemMeteor_SetOnlineStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                StatusId;                                                 // (Parm)
	TArray<struct FLocalizedStringSetting>             LocalizedStringSettings;                                  // (Const, Parm, OutParm, NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                               // (Const, Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearStorageDeviceChangeDelegate
struct UOnlineSubsystemMeteor_ClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddStorageDeviceChangeDelegate
struct UOnlineSubsystemMeteor_AddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnStorageDeviceChange
struct UOnlineSubsystemMeteor_OnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetLocale
struct UOnlineSubsystemMeteor_GetLocale_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetNATType
struct UOnlineSubsystemMeteor_GetNATType_Params
{
	TEnumAsByte<ENATType>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetServerStatusMessage
struct UOnlineSubsystemMeteor_GetServerStatusMessage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearServerStatusChangeDelegate
struct UOnlineSubsystemMeteor_ClearServerStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ServerStatusDelegate;                                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddServerStatusChangeDelegate
struct UOnlineSubsystemMeteor_AddServerStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ServerStatusDelegate;                                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnServerStatusChange
struct UOnlineSubsystemMeteor_OnServerStatusChange_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ServerStatus;                                             // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetConnectionStatusMessage
struct UOnlineSubsystemMeteor_GetConnectionStatusMessage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearConnectionStatusChangeDelegate
struct UOnlineSubsystemMeteor_ClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddConnectionStatusChangeDelegate
struct UOnlineSubsystemMeteor_AddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnConnectionStatusChange
struct UOnlineSubsystemMeteor_OnConnectionStatusChange_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsControllerConnected
struct UOnlineSubsystemMeteor_IsControllerConnected_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearControllerChangeDelegate
struct UOnlineSubsystemMeteor_ClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddControllerChangeDelegate
struct UOnlineSubsystemMeteor_AddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnControllerChange
struct UOnlineSubsystemMeteor_OnControllerChange_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               bIsConnected;                                             // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetNetworkNotificationPosition
struct UOnlineSubsystemMeteor_SetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          NewPos;                                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetNetworkNotificationPosition
struct UOnlineSubsystemMeteor_GetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearExternalUIChangeDelegate
struct UOnlineSubsystemMeteor_ClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddExternalUIChangeDelegate
struct UOnlineSubsystemMeteor_AddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnExternalUIChange
struct UOnlineSubsystemMeteor_OnExternalUIChange_Params
{
	bool                                               bIsOpening;                                               // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLinkStatusChangeDelegate
struct UOnlineSubsystemMeteor_ClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLinkStatusChangeDelegate
struct UOnlineSubsystemMeteor_AddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLinkStatusChange
struct UOnlineSubsystemMeteor_OnLinkStatusChange_Params
{
	bool                                               bIsConnected;                                             // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.HasLinkConnection
struct UOnlineSubsystemMeteor_HasLinkConnection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetPlayerNicknameFromIndex
struct UOnlineSubsystemMeteor_GetPlayerNicknameFromIndex_Params
{
	int                                                UserIndex;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CalcAggregateSkill
struct UOnlineSubsystemMeteor_CalcAggregateSkill_Params
{
	TArray<struct FDouble>                             Mus;                                                      // (Parm, NeedCtorLink)
	TArray<struct FDouble>                             Sigmas;                                                   // (Parm, NeedCtorLink)
	struct FDouble                                     OutAggregateMu;                                           // (Parm, OutParm)
	struct FDouble                                     OutAggregateSigma;                                        // (Parm, OutParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterStatGuid
struct UOnlineSubsystemMeteor_RegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FString                                     ClientStatGuid;                                           // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetClientStatGuid
struct UOnlineSubsystemMeteor_GetClientStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRegisterHostStatGuidCompleteDelegateDelegate
struct UOnlineSubsystemMeteor_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRegisterHostStatGuidCompleteDelegate
struct UOnlineSubsystemMeteor_AddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRegisterHostStatGuidComplete
struct UOnlineSubsystemMeteor_OnRegisterHostStatGuidComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterHostStatGuid
struct UOnlineSubsystemMeteor_RegisterHostStatGuid_Params
{
	struct FString                                     HostStatGuid;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetHostStatGuid
struct UOnlineSubsystemMeteor_GetHostStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteOnlinePlayerScores
struct UOnlineSubsystemMeteor_WriteOnlinePlayerScores_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	int                                                LeaderboardId;                                            // (Parm)
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemMeteor_AddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFlushOnlineStatsComplete
struct UOnlineSubsystemMeteor_OnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FlushOnlineStats
struct UOnlineSubsystemMeteor_FlushOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteOnlineStats
struct UOnlineSubsystemMeteor_WriteOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                Player;                                                   // (Parm)
	class UOnlineStatsWrite*                           StatsWrite;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FreeStats
struct UOnlineSubsystemMeteor_FreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStatsByRankAroundPlayer
struct UOnlineSubsystemMeteor_ReadOnlineStatsByRankAroundPlayer_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                NumRows;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStatsByRank
struct UOnlineSubsystemMeteor_ReadOnlineStatsByRank_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                StartIndex;                                               // (OptionalParm, Parm)
	int                                                NumToRead;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStatsForFriends
struct UOnlineSubsystemMeteor_ReadOnlineStatsForFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStats
struct UOnlineSubsystemMeteor_ReadOnlineStats_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadOnlineStatsComplete
struct UOnlineSubsystemMeteor_OnReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetSpeechRecognitionObject
struct UOnlineSubsystemMeteor_SetSpeechRecognitionObject_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class USpeechRecognition*                          SpeechRecogObj;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SelectVocabulary
struct UOnlineSubsystemMeteor_SelectVocabulary_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                VocabularyId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRecognitionCompleteDelegate
struct UOnlineSubsystemMeteor_ClearRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRecognitionCompleteDelegate
struct UOnlineSubsystemMeteor_AddRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRecognitionComplete
struct UOnlineSubsystemMeteor_OnRecognitionComplete_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetRecognitionResults
struct UOnlineSubsystemMeteor_GetRecognitionResults_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                    // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StopSpeechRecognition
struct UOnlineSubsystemMeteor_StopSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StartSpeechRecognition
struct UOnlineSubsystemMeteor_StartSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StopNetworkedVoice
struct UOnlineSubsystemMeteor_StopNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StartNetworkedVoice
struct UOnlineSubsystemMeteor_StartNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnmuteRemoteTalker
struct UOnlineSubsystemMeteor_UnmuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bIsSystemWide;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.MuteRemoteTalker
struct UOnlineSubsystemMeteor_MuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bIsSystemWide;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetRemoteTalkerPriority
struct UOnlineSubsystemMeteor_SetRemoteTalkerPriority_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	int                                                Priority;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsHeadsetPresent
struct UOnlineSubsystemMeteor_IsHeadsetPresent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsRemotePlayerTalking
struct UOnlineSubsystemMeteor_IsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsLocalPlayerTalking
struct UOnlineSubsystemMeteor_IsLocalPlayerTalking_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnregisterRemoteTalker
struct UOnlineSubsystemMeteor_UnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterRemoteTalker
struct UOnlineSubsystemMeteor_RegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnregisterLocalTalker
struct UOnlineSubsystemMeteor_UnregisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterLocalTalker
struct UOnlineSubsystemMeteor_RegisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetFriendsList
struct UOnlineSubsystemMeteor_GetFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                  // (Parm, OutParm, NeedCtorLink)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadFriendsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadFriendsCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadFriendsComplete
struct UOnlineSubsystemMeteor_OnReadFriendsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadFriendsList
struct UOnlineSubsystemMeteor_ReadFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginStatusChangeDelegate
struct UOnlineSubsystemMeteor_ClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginStatusChangeDelegate
struct UOnlineSubsystemMeteor_AddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginStatusChange
struct UOnlineSubsystemMeteor_OnLoginStatusChange_Params
{
	TEnumAsByte<ELoginStatus>                          NewStatus;                                                // (Parm)
	struct FUniqueNetId                                NewId;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemMeteor_AddWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWriteProfileSettingsComplete
struct UOnlineSubsystemMeteor_OnWriteProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteProfileSettings
struct UOnlineSubsystemMeteor_WriteProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetProfileSettings
struct UOnlineSubsystemMeteor_GetProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadProfileSettingsComplete
struct UOnlineSubsystemMeteor_OnReadProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadProfileSettings
struct UOnlineSubsystemMeteor_ReadProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFriendsChangeDelegate
struct UOnlineSubsystemMeteor_ClearFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendsChangeDelegate
struct UOnlineSubsystemMeteor_AddFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearMutingChangeDelegate
struct UOnlineSubsystemMeteor_ClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddMutingChangeDelegate
struct UOnlineSubsystemMeteor_AddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsGuestLogin
struct UOnlineSubsystemMeteor_IsGuestLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsLocalLogin
struct UOnlineSubsystemMeteor_IsLocalLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginCancelledDelegate
struct UOnlineSubsystemMeteor_ClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginCancelledDelegate
struct UOnlineSubsystemMeteor_AddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginChangeDelegate
struct UOnlineSubsystemMeteor_ClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginChangeDelegate
struct UOnlineSubsystemMeteor_AddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ShowFriendsUI
struct UOnlineSubsystemMeteor_ShowFriendsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsMuted
struct UOnlineSubsystemMeteor_IsMuted_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AreAnyFriends
struct UOnlineSubsystemMeteor_AreAnyFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FFriendsQuery>                       Query;                                                    // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsFriend
struct UOnlineSubsystemMeteor_IsFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanShowPresenceInformation
struct UOnlineSubsystemMeteor_CanShowPresenceInformation_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanViewPlayerProfiles
struct UOnlineSubsystemMeteor_CanViewPlayerProfiles_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanPurchaseContent
struct UOnlineSubsystemMeteor_CanPurchaseContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanDownloadUserContent
struct UOnlineSubsystemMeteor_CanDownloadUserContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanCommunicate
struct UOnlineSubsystemMeteor_CanCommunicate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanPlayOnline
struct UOnlineSubsystemMeteor_CanPlayOnline_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetPlayerNickname
struct UOnlineSubsystemMeteor_GetPlayerNickname_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetUniquePlayerId
struct UOnlineSubsystemMeteor_GetUniquePlayerId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetLoginStatus
struct UOnlineSubsystemMeteor_GetLoginStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<ELoginStatus>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLogoutCompletedDelegate
struct UOnlineSubsystemMeteor_ClearLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLogoutCompletedDelegate
struct UOnlineSubsystemMeteor_AddLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLogoutCompleted
struct UOnlineSubsystemMeteor_OnLogoutCompleted_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Logout
struct UOnlineSubsystemMeteor_Logout_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginFailedDelegate
struct UOnlineSubsystemMeteor_ClearLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginFailedDelegate
struct UOnlineSubsystemMeteor_AddLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginFailed
struct UOnlineSubsystemMeteor_OnLoginFailed_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EOnlineServerConnectionStatus>         ErrorCode;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AutoLogin
struct UOnlineSubsystemMeteor_AutoLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Login
struct UOnlineSubsystemMeteor_Login_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     LoginName;                                                // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	bool                                               bWantsLocalOnly;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ShowLoginUI
struct UOnlineSubsystemMeteor_ShowLoginUI_Params
{
	bool                                               bShowOnlineOnly;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFriendsChange
struct UOnlineSubsystemMeteor_OnFriendsChange_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearPlayerTalkingDelegate
struct UOnlineSubsystemMeteor_ClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddPlayerTalkingDelegate
struct UOnlineSubsystemMeteor_AddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPlayerTalkingStateChange
struct UOnlineSubsystemMeteor_OnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                                   // (Parm)
	bool                                               bIsTalking;                                               // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetTitleFileState
struct UOnlineSubsystemMeteor_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetTitleFileContents
struct UOnlineSubsystemMeteor_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadTitleFileCompleteDelegate
struct UOnlineSubsystemMeteor_ClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadTitleFileCompleteDelegate
struct UOnlineSubsystemMeteor_AddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadTitleFile
struct UOnlineSubsystemMeteor_ReadTitleFile_Params
{
	struct FString                                     FileToRead;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadTitleFileComplete
struct UOnlineSubsystemMeteor_OnReadTitleFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnMutingChange
struct UOnlineSubsystemMeteor_OnMutingChange_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginCancelled
struct UOnlineSubsystemMeteor_OnLoginCancelled_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginChange
struct UOnlineSubsystemMeteor_OnLoginChange_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateServerRanking
struct UOnlineSubsystemMeteor_UpdateServerRanking_Params
{
	float                                              ServerRanking;                                            // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateServerScore
struct UOnlineSubsystemMeteor_UpdateServerScore_Params
{
	float                                              ProgressionScore;                                         // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateServerPilotLevel
struct UOnlineSubsystemMeteor_UpdateServerPilotLevel_Params
{
	float                                              PilotLevel;                                               // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateTeamRatings
struct UOnlineSubsystemMeteor_UpdateTeamRatings_Params
{
	TArray<class APlayerController*>                   winningTeamPlayers;                                       // (Parm, NeedCtorLink)
	TArray<class UOnlinePlayerStats*>                  winningTeamPlayerStats;                                   // (Parm, NeedCtorLink)
	TArray<class APlayerController*>                   losingTeamPlayers;                                        // (Parm, NeedCtorLink)
	TArray<class UOnlinePlayerStats*>                  losingTeamPlayerStats;                                    // (Parm, NeedCtorLink)
	int                                                ratingCategory;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CalculateServerAverageRating
struct UOnlineSubsystemMeteor_CalculateServerAverageRating_Params
{
	TArray<class APlayerReplicationInfo*>              sortedPlayers;                                            // (Parm, NeedCtorLink)
	TArray<class UOnlinePlayerStats*>                  sortedPlayerStats;                                        // (Parm, NeedCtorLink)
	float                                              avgRating;                                                // (Parm, OutParm)
	float                                              avgDeviation;                                             // (Parm, OutParm)
	class APlayerReplicationInfo*                      IgnorePlayer;                                             // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateSoloRatingsServerAverage
struct UOnlineSubsystemMeteor_UpdateSoloRatingsServerAverage_Params
{
	TArray<class APlayerReplicationInfo*>              sortedPlayers;                                            // (Parm, NeedCtorLink)
	TArray<class UOnlinePlayerStats*>                  sortedPlayerStats;                                        // (Parm, NeedCtorLink)
	int                                                ratingCategory;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdatePlayerProgressionInfo
struct UOnlineSubsystemMeteor_UpdatePlayerProgressionInfo_Params
{
	TArray<class APlayerReplicationInfo*>              Players;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetMicrophoneVolume
struct UOnlineSubsystemMeteor_GetMicrophoneVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetMicrophoneVolume
struct UOnlineSubsystemMeteor_SetMicrophoneVolume_Params
{
	float                                              Volume;                                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetMicrophoneSensitivity
struct UOnlineSubsystemMeteor_SetMicrophoneSensitivity_Params
{
	int                                                sensitivity;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetSpeakerVolume
struct UOnlineSubsystemMeteor_GetSpeakerVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetSpeakerVolume
struct UOnlineSubsystemMeteor_SetSpeakerVolume_Params
{
	float                                              Volume;                                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnValidateClientConnectionComplete
struct UOnlineSubsystemMeteor_OnValidateClientConnectionComplete_Params
{
	struct FUniqueNetId                                UniqueId;                                                 // (Parm)
	bool                                               bCallSuccessful;                                          // (Parm)
	bool                                               bClientAccepted;                                          // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsUserSpeaking
struct UOnlineSubsystemMeteor_IsUserSpeaking_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateSpeakingUsers
struct UOnlineSubsystemMeteor_UpdateSpeakingUsers_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsUserMuted
struct UOnlineSubsystemMeteor_IsUserMuted_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnmuteUser
struct UOnlineSubsystemMeteor_UnmuteUser_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.MuteUser
struct UOnlineSubsystemMeteor_MuteUser_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetCurrentVoiceChannel
struct UOnlineSubsystemMeteor_GetCurrentVoiceChannel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLeaveVoiceChannelCompleteDelegate
struct UOnlineSubsystemMeteor_ClearLeaveVoiceChannelCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLeaveVoiceChannelCompleteDelegate
struct UOnlineSubsystemMeteor_AddLeaveVoiceChannelCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLeaveVoiceChannelComplete
struct UOnlineSubsystemMeteor_OnLeaveVoiceChannelComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.LeaveVoiceChannel
struct UOnlineSubsystemMeteor_LeaveVoiceChannel_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearJoinVoiceChannelCompleteDelegate
struct UOnlineSubsystemMeteor_ClearJoinVoiceChannelCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddJoinVoiceChannelCompleteDelegate
struct UOnlineSubsystemMeteor_AddJoinVoiceChannelCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnJoinVoiceChannelComplete
struct UOnlineSubsystemMeteor_OnJoinVoiceChannelComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.JoinVoiceChannel
struct UOnlineSubsystemMeteor_JoinVoiceChannel_Params
{
	struct FString                                     channelUri;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteVoiceChannels
struct UOnlineSubsystemMeteor_DeleteVoiceChannels_Params
{
	struct FString                                     channelUri;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearCreateVoiceChannelsCompleteDelegate
struct UOnlineSubsystemMeteor_ClearCreateVoiceChannelsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddCreateVoiceChannelsCompleteDelegate
struct UOnlineSubsystemMeteor_AddCreateVoiceChannelsCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnCreateVoiceChannelsComplete
struct UOnlineSubsystemMeteor_OnCreateVoiceChannelsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CreateVoiceChannels
struct UOnlineSubsystemMeteor_CreateVoiceChannels_Params
{
	TArray<struct FString>                             channelUriList;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_ListGames
struct UOnlineSubsystemMeteor_Storm_ListGames_Params
{
	struct FString                                     MapName;                                                  // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     GameType;                                                 // (OptionalParm, Parm, NeedCtorLink)
	TArray<struct FStormGameServerListing>             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_SendEvent
struct UOnlineSubsystemMeteor_Storm_SendEvent_Params
{
	class UStormEventObject*                           eventObject;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_GetCurrentUserInfo
struct UOnlineSubsystemMeteor_Storm_GetCurrentUserInfo_Params
{
	struct FStormUserInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_IsLoggedIn
struct UOnlineSubsystemMeteor_Storm_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_Logout
struct UOnlineSubsystemMeteor_Storm_Logout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_Login
struct UOnlineSubsystemMeteor_Storm_Login_Params
{
	struct FString                                     EmailAddress;                                             // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_DeleteUser
struct UOnlineSubsystemMeteor_Storm_DeleteUser_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_UpdateUser
struct UOnlineSubsystemMeteor_Storm_UpdateUser_Params
{
	struct FString                                     newPassword;                                              // (Parm, NeedCtorLink)
	struct FStormUserInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_GetUserInfo
struct UOnlineSubsystemMeteor_Storm_GetUserInfo_Params
{
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FStormUserInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_CreateUser
struct UOnlineSubsystemMeteor_Storm_CreateUser_Params
{
	struct FString                                     EmailAddress;                                             // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_JoinGame
struct UOnlineSubsystemMeteor_Storm_JoinGame_Params
{
	struct FStormGameServerListing                     listing;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetGlobals
struct UOnlineSubsystemMeteor_GetGlobals_Params
{
	bool                                               bWarn;                                                    // (OptionalParm, Parm)
	class UOnlineGameItemType*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Exit
struct UOnlineSubsystemMeteor_Exit_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnExit
struct UOnlineSubsystemMeteor_OnExit_Params
{
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PostInit
struct UOnlineSubsystemMeteor_PostInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Init
struct UOnlineSubsystemMeteor_Init_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.InitializeItemDatabaseCache
struct UOnlineSubsystemMeteor_InitializeItemDatabaseCache_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.InitializeVoiceChannels
struct UOnlineSubsystemMeteor_InitializeVoiceChannels_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.InitializeServerListing
struct UOnlineSubsystemMeteor_InitializeServerListing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineMatchmakingManager.DumpReservedPlayers
struct UOnlineMatchmakingManager_DumpReservedPlayers_Params
{
};

// Function OnlineSubsystemMeteor.OnlineMatchmakingManager.DumpAdvertisements
struct UOnlineMatchmakingManager_DumpAdvertisements_Params
{
};

// Function OnlineSubsystemMeteor.OnlineMatchmakingManager.ShutDown
struct UOnlineMatchmakingManager_ShutDown_Params
{
};

// Function OnlineSubsystemMeteor.OnlineMatchmakingManager.Init
struct UOnlineMatchmakingManager_Init_Params
{
	class UOnlineSubsystemMeteor*                      OnlineSub;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyLog.AddEntry
struct UOnlinePartyLog_AddEntry_Params
{
	TEnumAsByte<EPartyLogEntryType>                    Type;                                                     // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (OptionalParm, Parm)
	struct FString                                     UserNick;                                                 // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyVoiceChannelChanged
struct UOnlinePartyManager_OnPartyVoiceChannelChanged_Params
{
	struct FString                                     VoiceChannelUri;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.InvitePartyToGame
struct UOnlinePartyManager_InvitePartyToGame_Params
{
	int                                                InvitesSent;                                              // (OptionalParm, Parm, OutParm)
	TEnumAsByte<ENetworkErrorCode>                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMatchmakingCanceled
struct UOnlinePartyManager_OnPartyMatchmakingCanceled_Params
{
	TEnumAsByte<EMMCancelReason>                       Reason;                                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMatchmakingStarted
struct UOnlinePartyManager_OnPartyMatchmakingStarted_Params
{
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.NotifyMatchmakingCanceled
struct UOnlinePartyManager_NotifyMatchmakingCanceled_Params
{
	TEnumAsByte<EMMCancelReason>                       Reason;                                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.NotifyMatchmakingStarted
struct UOnlinePartyManager_NotifyMatchmakingStarted_Params
{
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyTravelRequestReceived
struct UOnlinePartyManager_OnPartyTravelRequestReceived_Params
{
	struct FStormGameServerListing                     GameToJoin;                                               // (Parm, NeedCtorLink)
	bool                                               bHasReservation;                                          // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.TellPartyToTravel
struct UOnlinePartyManager_TellPartyToTravel_Params
{
	struct FStormGameServerListing                     GameToJoin;                                               // (Parm, NeedCtorLink)
	bool                                               bHasReservation;                                          // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyDeploymentCancelled
struct UOnlinePartyManager_OnPartyDeploymentCancelled_Params
{
	TEnumAsByte<EMMCancelReason>                       Reason;                                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.CancelDeploy
struct UOnlinePartyManager_CancelDeploy_Params
{
	TEnumAsByte<EMMCancelReason>                       Reason;                                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyDeploying
struct UOnlinePartyManager_OnPartyDeploying_Params
{
	int                                                CountdownTime;                                            // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.DeployParty
struct UOnlinePartyManager_DeployParty_Params
{
	int                                                CountdownTime;                                            // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.SendDataToParty
struct UOnlinePartyManager_SendDataToParty_Params
{
	struct FString                                     DataName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     DataValue;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMessageReceived
struct UOnlinePartyManager_OnPartyMessageReceived_Params
{
	class UOnlinePartyMemberObject*                    PartyMemberObject;                                        // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnSendMessageToPartyCompleted
struct UOnlinePartyManager_OnSendMessageToPartyCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.SendMessageToParty
struct UOnlinePartyManager_SendMessageToParty_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMemberChanged
struct UOnlinePartyManager_OnPartyMemberChanged_Params
{
	class UOnlinePartyMemberObject*                    PartyMemberObject;                                        // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyLeaderChanged
struct UOnlinePartyManager_OnPartyLeaderChanged_Params
{
	class UOnlinePartyMemberObject*                    NewLeaderMemberObject;                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPromoteToLeaderCompleted
struct UOnlinePartyManager_OnPromoteToLeaderCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.PromoteToLeader
struct UOnlinePartyManager_PromoteToLeader_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPlayerKickedFromParty
struct UOnlinePartyManager_OnPlayerKickedFromParty_Params
{
	class UOnlinePartyMemberObject*                    PartyMemberObject;                                        // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnKickFromPartyCompleted
struct UOnlinePartyManager_OnKickFromPartyCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.KickFromParty
struct UOnlinePartyManager_KickFromParty_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPlayerLeftParty
struct UOnlinePartyManager_OnPlayerLeftParty_Params
{
	class UOnlinePartyMemberObject*                    PartyMemberObject;                                        // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPlayerJoinedParty
struct UOnlinePartyManager_OnPlayerJoinedParty_Params
{
	class UOnlinePartyMemberObject*                    PartyMemberObject;                                        // (Parm)
	bool                                               bNewMember;                                               // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnDeclinePartyInvitationCompleted
struct UOnlinePartyManager_OnDeclinePartyInvitationCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FString                                     InviteMessageId;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.DeclinePartyInvitation
struct UOnlinePartyManager_DeclinePartyInvitation_Params
{
	struct FString                                     InviteMessageId;                                          // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnAcceptPartyInvitationCompleted
struct UOnlinePartyManager_OnAcceptPartyInvitationCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FString                                     InviteMessageId;                                          // (Parm, NeedCtorLink)
	class UOnlinePartyObject*                          PartyObject;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.AcceptPartyInvitation
struct UOnlinePartyManager_AcceptPartyInvitation_Params
{
	struct FString                                     InviteMessageId;                                          // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnInvitedToParty
struct UOnlinePartyManager_OnInvitedToParty_Params
{
	int                                                TaskID;                                                   // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnInviteToPartyCompleted
struct UOnlinePartyManager_OnInviteToPartyCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	class UOnlinePartyObject*                          PartyObject;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.InviteToParty
struct UOnlinePartyManager_InviteToParty_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnLeavePartyCompleted
struct UOnlinePartyManager_OnLeavePartyCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.LeaveParty
struct UOnlinePartyManager_LeaveParty_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.OnCreatePartyCompleted
struct UOnlinePartyManager_OnCreatePartyCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	class UOnlinePartyObject*                          PartyObject;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.CancelCreate
struct UOnlinePartyManager_CancelCreate_Params
{
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.CreateParty
struct UOnlinePartyManager_CreateParty_Params
{
	struct FString                                     GameType;                                                 // (Parm, NeedCtorLink)
	bool                                               bAreMembersAllowedToInvite;                               // (Parm)
	bool                                               bIsInviteOnly;                                            // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.ShutDown
struct UOnlinePartyManager_ShutDown_Params
{
};

// Function OnlineSubsystemMeteor.OnlinePartyManager.Init
struct UOnlinePartyManager_Init_Params
{
	class UOnlineSubsystem*                            OnlineSub;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMatchmakingCanceledDelegate
struct UOnlinePartyManagerDelegates_ClearPartyMatchmakingCanceledDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMatchmakingCanceledDelegate
struct UOnlinePartyManagerDelegates_AddPartyMatchmakingCanceledDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMatchmakingStartedDelegate
struct UOnlinePartyManagerDelegates_ClearPartyMatchmakingStartedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMatchmakingStartedDelegate
struct UOnlinePartyManagerDelegates_AddPartyMatchmakingStartedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyVoiceChannelChangedDelegate
struct UOnlinePartyManagerDelegates_ClearPartyVoiceChannelChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyVoiceChannelChangedDelegate
struct UOnlinePartyManagerDelegates_AddPartyVoiceChannelChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyTravelRequestReceivedDelegate
struct UOnlinePartyManagerDelegates_ClearPartyTravelRequestReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyTravelRequestReceivedDelegate
struct UOnlinePartyManagerDelegates_AddPartyTravelRequestReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyDeploymentCancelledDelegate
struct UOnlinePartyManagerDelegates_ClearPartyDeploymentCancelledDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyDeploymentCancelledDelegate
struct UOnlinePartyManagerDelegates_AddPartyDeploymentCancelledDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyDeployingDelegate
struct UOnlinePartyManagerDelegates_ClearPartyDeployingDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyDeployingDelegate
struct UOnlinePartyManagerDelegates_AddPartyDeployingDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMessageReceivedDelegate
struct UOnlinePartyManagerDelegates_ClearPartyMessageReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMessageReceivedDelegate
struct UOnlinePartyManagerDelegates_AddPartyMessageReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearSendMessageToPartyCompletedDelegate
struct UOnlinePartyManagerDelegates_ClearSendMessageToPartyCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddSendMessageToPartyCompletedDelegate
struct UOnlinePartyManagerDelegates_AddSendMessageToPartyCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMemberChangedDelegate
struct UOnlinePartyManagerDelegates_ClearPartyMemberChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMemberChangedDelegate
struct UOnlinePartyManagerDelegates_AddPartyMemberChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyLeaderChangedDelegate
struct UOnlinePartyManagerDelegates_ClearPartyLeaderChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyLeaderChangedDelegate
struct UOnlinePartyManagerDelegates_AddPartyLeaderChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPromoteToLeaderCompletedDelegate
struct UOnlinePartyManagerDelegates_ClearPromoteToLeaderCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPromoteToLeaderCompletedDelegate
struct UOnlinePartyManagerDelegates_AddPromoteToLeaderCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPlayerKickedFromPartyDelegate
struct UOnlinePartyManagerDelegates_ClearPlayerKickedFromPartyDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPlayerKickedFromPartyDelegate
struct UOnlinePartyManagerDelegates_AddPlayerKickedFromPartyDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearKickFromPartyCompletedDelegate
struct UOnlinePartyManagerDelegates_ClearKickFromPartyCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddKickFromPartyCompletedDelegate
struct UOnlinePartyManagerDelegates_AddKickFromPartyCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPlayerLeftPartyDelegate
struct UOnlinePartyManagerDelegates_ClearPlayerLeftPartyDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPlayerLeftPartyDelegate
struct UOnlinePartyManagerDelegates_AddPlayerLeftPartyDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPlayerJoinedPartyDelegate
struct UOnlinePartyManagerDelegates_ClearPlayerJoinedPartyDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPlayerJoinedPartyDelegate
struct UOnlinePartyManagerDelegates_AddPlayerJoinedPartyDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearDeclinePartyInvitationCompletedDelegate
struct UOnlinePartyManagerDelegates_ClearDeclinePartyInvitationCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddDeclinePartyInvitationCompletedDelegate
struct UOnlinePartyManagerDelegates_AddDeclinePartyInvitationCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearAcceptPartyInvitationCompletedDelegate
struct UOnlinePartyManagerDelegates_ClearAcceptPartyInvitationCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddAcceptPartyInvitationCompletedDelegate
struct UOnlinePartyManagerDelegates_AddAcceptPartyInvitationCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearInvitedToPartyDelegate
struct UOnlinePartyManagerDelegates_ClearInvitedToPartyDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddInvitedToPartyDelegate
struct UOnlinePartyManagerDelegates_AddInvitedToPartyDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearInviteToPartyCompletedDelegate
struct UOnlinePartyManagerDelegates_ClearInviteToPartyCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddInviteToPartyCompletedDelegate
struct UOnlinePartyManagerDelegates_AddInviteToPartyCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearLeavePartyCompletedDelegate
struct UOnlinePartyManagerDelegates_ClearLeavePartyCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddLeavePartyCompletedDelegate
struct UOnlinePartyManagerDelegates_AddLeavePartyCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearCreatePartyCompletedDelegate
struct UOnlinePartyManagerDelegates_ClearCreatePartyCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddCreatePartyCompletedDelegate
struct UOnlinePartyManagerDelegates_AddCreatePartyCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyObject.GetMemberFromUserNick
struct UOnlinePartyObject_GetMemberFromUserNick_Params
{
	struct FString                                     UserNick;                                                 // (Parm, NeedCtorLink)
	class UOnlinePartyMemberObject*                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyObject.GetMember
struct UOnlinePartyObject_GetMember_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	class UOnlinePartyMemberObject*                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyObject.IsLeader
struct UOnlinePartyObject_IsLeader_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyObject.IsMember
struct UOnlinePartyObject_IsMember_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePartyObject.GetPartyId
struct UOnlinePartyObject_GetPartyId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePartyObject.ShutDown
struct UOnlinePartyObject_ShutDown_Params
{
};

// Function OnlineSubsystemMeteor.OnlinePartyObject.Init
struct UOnlinePartyObject_Init_Params
{
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetKeys
struct UOnlinePlayerSettings_GetKeys_Params
{
	TArray<struct FString>                             SettingKeys;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.Empty
struct UOnlinePlayerSettings_Empty_Params
{
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSetting
struct UOnlinePlayerSettings_GetSetting_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.IsEmpty
struct UOnlinePlayerSettings_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.Num
struct UOnlinePlayerSettings_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.HasSetting
struct UOnlinePlayerSettings_HasSetting_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingBool
struct UOnlinePlayerSettings_GetSettingBool_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	bool                                               Default;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingInt
struct UOnlinePlayerSettings_GetSettingInt_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                Default;                                                  // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingFloat
struct UOnlinePlayerSettings_GetSettingFloat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	float                                              Default;                                                  // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingString
struct UOnlinePlayerSettings_GetSettingString_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Default;                                                  // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingBool
struct UOnlinePlayerSettings_SetSettingBool_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	bool                                               Value;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingInt
struct UOnlinePlayerSettings_SetSettingInt_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                Value;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingFloat
struct UOnlinePlayerSettings_SetSettingFloat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	float                                              Value;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingString
struct UOnlinePlayerSettings_SetSettingString_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.MergeAllIncrements
struct UOnlinePlayerStats_MergeAllIncrements_Params
{
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.Empty
struct UOnlinePlayerStats_Empty_Params
{
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetIntStatIfSmaller
struct UOnlinePlayerStats_SetIntStatIfSmaller_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                Value;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetIntStatIfGreater
struct UOnlinePlayerStats_SetIntStatIfGreater_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                Value;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetFloatStatIfSmaller
struct UOnlinePlayerStats_SetFloatStatIfSmaller_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	float                                              Value;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetFloatStatIfGreater
struct UOnlinePlayerStats_SetFloatStatIfGreater_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	float                                              Value;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.IncrementIntStat
struct UOnlinePlayerStats_IncrementIntStat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                Increment;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.IncrementFloatStat
struct UOnlinePlayerStats_IncrementFloatStat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	float                                              Increment;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetIntStat
struct UOnlinePlayerStats_GetIntStat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetFloatStat
struct UOnlinePlayerStats_GetFloatStat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetIntStat
struct UOnlinePlayerStats_SetIntStat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                Value;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetFloatStat
struct UOnlinePlayerStats_SetFloatStat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	float                                              Value;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetIncrementAsString
struct UOnlinePlayerStats_GetIncrementAsString_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetValueAsFloat
struct UOnlinePlayerStats_GetValueAsFloat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetValueAsInt
struct UOnlinePlayerStats_GetValueAsInt_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetValueAsString
struct UOnlinePlayerStats_GetValueAsString_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetInitialValueFromString
struct UOnlinePlayerStats_SetInitialValueFromString_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.HasStat
struct UOnlinePlayerStats_HasStat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.AddFloatStat
struct UOnlinePlayerStats_AddFloatStat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	float                                              Value;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlinePlayerStats.AddIntStat
struct UOnlinePlayerStats_AddIntStat_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                Value;                                                    // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.WritePersistentData
struct UOnlineRecentPlayersListMeteor_WritePersistentData_Params
{
};

// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.DecodeRecentPlayersJson
struct UOnlineRecentPlayersListMeteor_DecodeRecentPlayersJson_Params
{
	struct FString                                     ToDecode;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.OnReadUserSettingsComplete
struct UOnlineRecentPlayersListMeteor_OnReadUserSettingsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	class UOnlinePlayerSettings*                       Settings;                                                 // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.ReadPersistantData
struct UOnlineRecentPlayersListMeteor_ReadPersistantData_Params
{
};

// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.FixupRecentPlayersEx
struct UOnlineRecentPlayersListMeteor_FixupRecentPlayersEx_Params
{
};

// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.AddPlayerToRecentPlayers
struct UOnlineRecentPlayersListMeteor_AddPlayerToRecentPlayers_Params
{
	struct FUniqueNetId                                NewPlayer;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.Init
struct UOnlineRecentPlayersListMeteor_Init_Params
{
};

// Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.GetNextUnlockedAchievement
struct UOnlineUnlockedAchievementCollection_GetNextUnlockedAchievement_Params
{
	struct FOnlineUnlockedAchievement                  OutUnlockedAchievement;                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.ResetUnlockedAchievementIterator
struct UOnlineUnlockedAchievementCollection_ResetUnlockedAchievementIterator_Params
{
};

// Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.IsUnlocked
struct UOnlineUnlockedAchievementCollection_IsUnlocked_Params
{
	struct FUniqueNetId                                AchievementGuid;                                          // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.GetUnlockedAchievement
struct UOnlineUnlockedAchievementCollection_GetUnlockedAchievement_Params
{
	struct FUniqueNetId                                AchievementGuid;                                          // (Const, Parm, OutParm)
	struct FOnlineUnlockedAchievement                  OutUnlockedAchievement;                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.NumUnlockedAchievements
struct UOnlineUnlockedAchievementCollection_NumUnlockedAchievements_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugReceiveFakeEmergencyMessage
struct UOnlineXMPPInterfaceMeteor_DebugReceiveFakeEmergencyMessage_Params
{
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugReceiveFakeAntiAddictionMessage
struct UOnlineXMPPInterfaceMeteor_DebugReceiveFakeAntiAddictionMessage_Params
{
	int                                                AAMessageId;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugBulkAddFakeFriends
struct UOnlineXMPPInterfaceMeteor_DebugBulkAddFakeFriends_Params
{
	int                                                NumFakeFriends;                                           // (OptionalParm, Parm)
	bool                                               bFakeOnline;                                              // (OptionalParm, Parm)
	bool                                               bGenerateGUIDs;                                           // (OptionalParm, Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugAddFakeFriends
struct UOnlineXMPPInterfaceMeteor_DebugAddFakeFriends_Params
{
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugPrintMailMessage
struct UOnlineXMPPInterfaceMeteor_DebugPrintMailMessage_Params
{
	class UOnlineMailMessage*                          MailMessage;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugPrintFriend
struct UOnlineXMPPInterfaceMeteor_DebugPrintFriend_Params
{
	struct FOnlineFriend                               Friend;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFindPlayerClan_Update
struct UOnlineXMPPInterfaceMeteor_OnFindPlayerClan_Update_Params
{
	int                                                RequestID;                                                // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
	class UOnlineClanInfo*                             ClanInfo;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.UpdatePlayerClanInfo
struct UOnlineXMPPInterfaceMeteor_UpdatePlayerClanInfo_Params
{
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMessageHistory
struct UOnlineXMPPInterfaceMeteor_ClearMessageHistory_Params
{
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetMessageHistory
struct UOnlineXMPPInterfaceMeteor_GetMessageHistory_Params
{
	TArray<class UOnlineClanMessage*>                  Messages;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearReceiveClanMessageDelegate
struct UOnlineXMPPInterfaceMeteor_ClearReceiveClanMessageDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddReceiveClanMessageDelegate
struct UOnlineXMPPInterfaceMeteor_AddReceiveClanMessageDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnReceiveClanMessage
struct UOnlineXMPPInterfaceMeteor_OnReceiveClanMessage_Params
{
	class UOnlineClanMessage*                          Message;                                                  // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendClanMessage
struct UOnlineXMPPInterfaceMeteor_SendClanMessage_Params
{
	class UOnlineClanMessage*                          Message;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearClanInviteAcceptedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearClanInviteAcceptedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddClanInviteAcceptedDelegate
struct UOnlineXMPPInterfaceMeteor_AddClanInviteAcceptedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnClanInviteAccepted
struct UOnlineXMPPInterfaceMeteor_OnClanInviteAccepted_Params
{
	class UOnlineClanInfo*                             ClanInfo;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AcceptClanInvitation
struct UOnlineXMPPInterfaceMeteor_AcceptClanInvitation_Params
{
	struct FUniqueNetId                                ClanId;                                                   // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearClanInviteReceivedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearClanInviteReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddClanInviteReceivedDelegate
struct UOnlineXMPPInterfaceMeteor_AddClanInviteReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnClanInviteReceived
struct UOnlineXMPPInterfaceMeteor_OnClanInviteReceived_Params
{
	class UOnlineClanMessage*                          Invite;                                                   // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.RemovePlayerFromClan
struct UOnlineXMPPInterfaceMeteor_RemovePlayerFromClan_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendClanInvite
struct UOnlineXMPPInterfaceMeteor_SendClanInvite_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFindClanCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_ClearFindClanCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFindClanCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_AddFindClanCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFindClanComplete
struct UOnlineXMPPInterfaceMeteor_OnFindClanComplete_Params
{
	int                                                RequestID;                                                // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
	class UOnlineClanInfo*                             ClanInfo;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindPlayerClan
struct UOnlineXMPPInterfaceMeteor_FindPlayerClan_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindClanByTag
struct UOnlineXMPPInterfaceMeteor_FindClanByTag_Params
{
	struct FName                                       ClanTag;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindClanByName
struct UOnlineXMPPInterfaceMeteor_FindClanByName_Params
{
	struct FName                                       ClanName;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindClanById
struct UOnlineXMPPInterfaceMeteor_FindClanById_Params
{
	struct FUniqueNetId                                ClanId;                                                   // (Const, Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearChangeClanLeaderCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_ClearChangeClanLeaderCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddChangeClanLeaderCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_AddChangeClanLeaderCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnChangeClanLeaderComplete
struct UOnlineXMPPInterfaceMeteor_OnChangeClanLeaderComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ChangeClanLeader
struct UOnlineXMPPInterfaceMeteor_ChangeClanLeader_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetClanMember
struct UOnlineXMPPInterfaceMeteor_GetClanMember_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FOnlineFriend                               Friend;                                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.IsClanMember
struct UOnlineXMPPInterfaceMeteor_IsClanMember_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMembersChangedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearMembersChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMembersChangedDelegate
struct UOnlineXMPPInterfaceMeteor_AddMembersChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMembersChanged
struct UOnlineXMPPInterfaceMeteor_OnMembersChanged_Params
{
	TArray<struct FOnlineFriend>                       Members;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetClanMembers
struct UOnlineXMPPInterfaceMeteor_GetClanMembers_Params
{
	TArray<struct FOnlineFriend>                       Members;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearReadClanMembersCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_ClearReadClanMembersCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddReadClanMembersCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_AddReadClanMembersCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnReadClanMembersComplete
struct UOnlineXMPPInterfaceMeteor_OnReadClanMembersComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ReadClanMembers
struct UOnlineXMPPInterfaceMeteor_ReadClanMembers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearClanInfoChangedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearClanInfoChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddClanInfoChangedDelegate
struct UOnlineXMPPInterfaceMeteor_AddClanInfoChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnClanInfoChanged
struct UOnlineXMPPInterfaceMeteor_OnClanInfoChanged_Params
{
	class UOnlineClanInfo*                             ClanInfo;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearChangeClanInfoCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_ClearChangeClanInfoCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddChangeClanInfoCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_AddChangeClanInfoCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnChangeClanInfoComplete
struct UOnlineXMPPInterfaceMeteor_OnChangeClanInfoComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ChangeClanInfo
struct UOnlineXMPPInterfaceMeteor_ChangeClanInfo_Params
{
	class UOnlineClanInfo*                             ClanInfo;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearDestroyClanCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_ClearDestroyClanCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddDestroyClanCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_AddDestroyClanCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnDestroyClanComplete
struct UOnlineXMPPInterfaceMeteor_OnDestroyClanComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DestroyClan
struct UOnlineXMPPInterfaceMeteor_DestroyClan_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearCreateClanCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_ClearCreateClanCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddCreateClanCompleteDelegate
struct UOnlineXMPPInterfaceMeteor_AddCreateClanCompleteDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnCreateClanComplete
struct UOnlineXMPPInterfaceMeteor_OnCreateClanComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.CreateClan
struct UOnlineXMPPInterfaceMeteor_CreateClan_Params
{
	class UOnlineClanInfo*                             ClanInfo;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetClanInfo
struct UOnlineXMPPInterfaceMeteor_GetClanInfo_Params
{
	class UOnlineClanInfo*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearAntiAddictionMessageReceivedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearAntiAddictionMessageReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddAntiAddictionMessageReceivedDelegate
struct UOnlineXMPPInterfaceMeteor_AddAntiAddictionMessageReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnAntiAddictionMessageReceived
struct UOnlineXMPPInterfaceMeteor_OnAntiAddictionMessageReceived_Params
{
	int                                                AAMessageId;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageDownloadedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearMailMessageDownloadedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageDownloadedDelegate
struct UOnlineXMPPInterfaceMeteor_AddMailMessageDownloadedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageDownloaded
struct UOnlineXMPPInterfaceMeteor_OnMailMessageDownloaded_Params
{
	class UOnlineMailMessage*                          MailMessage;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageListRefreshedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearMailMessageListRefreshedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageListRefreshedDelegate
struct UOnlineXMPPInterfaceMeteor_AddMailMessageListRefreshedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageListRefreshed
struct UOnlineXMPPInterfaceMeteor_OnMailMessageListRefreshed_Params
{
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageDeletedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearMailMessageDeletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageDeletedDelegate
struct UOnlineXMPPInterfaceMeteor_AddMailMessageDeletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageDeleted
struct UOnlineXMPPInterfaceMeteor_OnMailMessageDeleted_Params
{
	class UOnlineMailMessage*                          MailMessage;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageReceivedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearMailMessageReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageReceivedDelegate
struct UOnlineXMPPInterfaceMeteor_AddMailMessageReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageReceived
struct UOnlineXMPPInterfaceMeteor_OnMailMessageReceived_Params
{
	class UOnlineMailMessage*                          MailMessage;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearSendGameInviteCompletedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearSendGameInviteCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddSendGameInviteCompletedDelegate
struct UOnlineXMPPInterfaceMeteor_AddSendGameInviteCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnSendGameInviteCompleted
struct UOnlineXMPPInterfaceMeteor_OnSendGameInviteCompleted_Params
{
	int                                                TaskID;                                                   // (Parm)
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearJoinFriendServerCompletedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearJoinFriendServerCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddJoinFriendServerCompletedDelegate
struct UOnlineXMPPInterfaceMeteor_AddJoinFriendServerCompletedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnJoinFriendServerCompleted
struct UOnlineXMPPInterfaceMeteor_OnJoinFriendServerCompleted_Params
{
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	bool                                               bTravelingInitiated;                                      // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendsListRefreshedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearFriendsListRefreshedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendsListRefreshedDelegate
struct UOnlineXMPPInterfaceMeteor_AddFriendsListRefreshedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendsListRefreshed
struct UOnlineXMPPInterfaceMeteor_OnFriendsListRefreshed_Params
{
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRemovedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearFriendRemovedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRemovedDelegate
struct UOnlineXMPPInterfaceMeteor_AddFriendRemovedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRemoved
struct UOnlineXMPPInterfaceMeteor_OnFriendRemoved_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendChatMessageReceivedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearFriendChatMessageReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendChatMessageReceivedDelegate
struct UOnlineXMPPInterfaceMeteor_AddFriendChatMessageReceivedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendChatMessageReceived
struct UOnlineXMPPInterfaceMeteor_OnFriendChatMessageReceived_Params
{
	struct FOnlineFriend                               Friend;                                                   // (Parm, NeedCtorLink)
	struct FChatMessage                                Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendPresenceUpdatedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearFriendPresenceUpdatedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendPresenceUpdatedDelegate
struct UOnlineXMPPInterfaceMeteor_AddFriendPresenceUpdatedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendPresenceUpdated
struct UOnlineXMPPInterfaceMeteor_OnFriendPresenceUpdated_Params
{
	struct FOnlineFriend                               Friend;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestDeclinedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearFriendRequestDeclinedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestDeclinedDelegate
struct UOnlineXMPPInterfaceMeteor_AddFriendRequestDeclinedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestDeclined
struct UOnlineXMPPInterfaceMeteor_OnFriendRequestDeclined_Params
{
	struct FString                                     MessageId;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestAcceptedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearFriendRequestAcceptedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestAcceptedDelegate
struct UOnlineXMPPInterfaceMeteor_AddFriendRequestAcceptedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestAccepted
struct UOnlineXMPPInterfaceMeteor_OnFriendRequestAccepted_Params
{
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FString                                     MessageId;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestAcceptedByFriendDelegate
struct UOnlineXMPPInterfaceMeteor_ClearFriendRequestAcceptedByFriendDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestAcceptedByFriendDelegate
struct UOnlineXMPPInterfaceMeteor_AddFriendRequestAcceptedByFriendDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestAcceptedByFriend
struct UOnlineXMPPInterfaceMeteor_OnFriendRequestAcceptedByFriend_Params
{
	struct FOnlineFriend                               Friend;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestSentDelegate
struct UOnlineXMPPInterfaceMeteor_ClearFriendRequestSentDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestSentDelegate
struct UOnlineXMPPInterfaceMeteor_AddFriendRequestSentDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestSent
struct UOnlineXMPPInterfaceMeteor_OnFriendRequestSent_Params
{
	TEnumAsByte<ENetworkErrorCode>                     ErrorCode;                                                // (Parm)
	struct FString                                     Email;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Callsign;                                                 // (Parm, NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearConnectionChangedDelegate
struct UOnlineXMPPInterfaceMeteor_ClearConnectionChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddConnectionChangedDelegate
struct UOnlineXMPPInterfaceMeteor_AddConnectionChangedDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnConnectionChanged
struct UOnlineXMPPInterfaceMeteor_OnConnectionChanged_Params
{
	bool                                               bConnected;                                               // (Parm)
	bool                                               bConnecting;                                              // (Parm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.MarkMailMessageAsRead
struct UOnlineXMPPInterfaceMeteor_MarkMailMessageAsRead_Params
{
	struct FString                                     MessageId;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DeleteMailMessage
struct UOnlineXMPPInterfaceMeteor_DeleteMailMessage_Params
{
	struct FString                                     MessageId;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DeclineGameInvite
struct UOnlineXMPPInterfaceMeteor_DeclineGameInvite_Params
{
	struct FString                                     MessageId;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AcceptGameInvite
struct UOnlineXMPPInterfaceMeteor_AcceptGameInvite_Params
{
	struct FString                                     MessageId;                                                // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	TEnumAsByte<ENetworkErrorCode>                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendGameInvite
struct UOnlineXMPPInterfaceMeteor_SendGameInvite_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.CancelJoinFriendServer
struct UOnlineXMPPInterfaceMeteor_CancelJoinFriendServer_Params
{
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.JoinFriendServer
struct UOnlineXMPPInterfaceMeteor_JoinFriendServer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	TEnumAsByte<ENetworkErrorCode>                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.MarkFriendChatMessageAsRead
struct UOnlineXMPPInterfaceMeteor_MarkFriendChatMessageAsRead_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FString                                     MessageId;                                                // (Parm, NeedCtorLink)
	TEnumAsByte<ENetworkErrorCode>                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendChatMessage
struct UOnlineXMPPInterfaceMeteor_SendFriendChatMessage_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	TEnumAsByte<ENetworkErrorCode>                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.RemoveFromFriendsList
struct UOnlineXMPPInterfaceMeteor_RemoveFromFriendsList_Params
{
	struct FUniqueNetId                                UserId;                                                   // (Const, Parm, OutParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DeclineFriendRequest
struct UOnlineXMPPInterfaceMeteor_DeclineFriendRequest_Params
{
	struct FString                                     MessageId;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AcceptFriendRequest
struct UOnlineXMPPInterfaceMeteor_AcceptFriendRequest_Params
{
	struct FString                                     MessageId;                                                // (Parm, NeedCtorLink)
	TEnumAsByte<ENetworkErrorCode>                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendRequestFromCallsign
struct UOnlineXMPPInterfaceMeteor_SendFriendRequestFromCallsign_Params
{
	struct FString                                     Callsign;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendRequestFromEmail
struct UOnlineXMPPInterfaceMeteor_SendFriendRequestFromEmail_Params
{
	struct FString                                     Email;                                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendRequestFromUserId
struct UOnlineXMPPInterfaceMeteor_SendFriendRequestFromUserId_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.IsInFriendsList
struct UOnlineXMPPInterfaceMeteor_IsInFriendsList_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.Disconnect
struct UOnlineXMPPInterfaceMeteor_Disconnect_Params
{
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.Connect
struct UOnlineXMPPInterfaceMeteor_Connect_Params
{
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ShutDown
struct UOnlineXMPPInterfaceMeteor_ShutDown_Params
{
};

// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.Init
struct UOnlineXMPPInterfaceMeteor_Init_Params
{
	class UOnlineSubsystemMeteor*                      OnlineSubsystem;                                          // (Parm)
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.AddFakeReservation
struct UPartyBeaconHostMeteor_AddFakeReservation_Params
{
	int                                                Glicko1;                                                  // (Parm)
	int                                                Level1;                                                   // (Parm)
	int                                                MatchScore1;                                              // (Parm)
	int                                                Glicko2;                                                  // (OptionalParm, Parm)
	int                                                Level2;                                                   // (OptionalParm, Parm)
	int                                                MatchScore2;                                              // (OptionalParm, Parm)
	int                                                Glicko3;                                                  // (OptionalParm, Parm)
	int                                                Level3;                                                   // (OptionalParm, Parm)
	int                                                MatchScore3;                                              // (OptionalParm, Parm)
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.DumpReservations
struct UPartyBeaconHostMeteor_DumpReservations_Params
{
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.UpdatePlayerScore
struct UPartyBeaconHostMeteor_UpdatePlayerScore_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	int                                                Score;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.UpdatePartyReservationTeam
struct UPartyBeaconHostMeteor_UpdatePartyReservationTeam_Params
{
	struct FUniqueNetId                                PartyLeader;                                              // (Parm)
	int                                                TeamIndex;                                                // (Parm)
	bool                                               bForceUpdate;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.SplitPartyReservation
struct UPartyBeaconHostMeteor_SplitPartyReservation_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	int                                                TeamIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.ReconfigureTeamAndPlayerCount
struct UPartyBeaconHostMeteor_ReconfigureTeamAndPlayerCount_Params
{
	int                                                InNumTeams;                                               // (Parm)
	int                                                InNumPlayersPerTeam;                                      // (Parm)
	int                                                InNumReservations;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.RebalancePendingTeamAssignments
struct UPartyBeaconHostMeteor_RebalancePendingTeamAssignments_Params
{
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.RebalanceTeamAssignments
struct UPartyBeaconHostMeteor_RebalanceTeamAssignments_Params
{
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.HandlePlayerLogout
struct UPartyBeaconHostMeteor_HandlePlayerLogout_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bMaintainParty;                                           // (Parm)
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetPartyTotalXpLevel
struct UPartyBeaconHostMeteor_GetPartyTotalXpLevel_Params
{
	struct FPartyReservation                           Reservation;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetPartyTotalSkill
struct UPartyBeaconHostMeteor_GetPartyTotalSkill_Params
{
	struct FPartyReservation                           Reservation;                                              // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetTeamForCurrentPlayer
struct UPartyBeaconHostMeteor_GetTeamForCurrentPlayer_Params
{
	struct FUniqueNetId                                Player;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetExistingReservation
struct UPartyBeaconHostMeteor_GetExistingReservation_Params
{
	struct FUniqueNetId                                Player;                                                   // (Const, Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetNumPlayersOnTeamWrapper
struct UPartyBeaconHostMeteor_GetNumPlayersOnTeamWrapper_Params
{
	int                                                I;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemMeteor.StormEventObject.AddData
struct UStormEventObject_AddData_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, CoerceParm, NeedCtorLink)
};

// Function OnlineSubsystemMeteor.StormEventObject.DumpEventData
struct UStormEventObject_DumpEventData_Params
{
	struct FName                                       LogPrefix;                                                // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
