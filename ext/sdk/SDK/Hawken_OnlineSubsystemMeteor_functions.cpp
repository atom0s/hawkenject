// Hawken (1.5.3.142579) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemMeteor.OnlineAccountManager.ShutDown
// (Native, Public)

void UOnlineAccountManager::ShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAccountManager.ShutDown");

	UOnlineAccountManager_ShutDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineAccountManager.Init
// (Native, Public)
// Parameters:
// class UOnlineSubsystem*        OnlineSub                      (Parm)

void UOnlineAccountManager::Init(class UOnlineSubsystem* OnlineSub)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAccountManager.Init");

	UOnlineAccountManager_Init_Params params;
	params.OnlineSub = OnlineSub;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineAccountObject.SetUniqueId
// (Native, Public)
// Parameters:
// struct FUniqueNetId            NewUniqueId                    (Parm)

void UOnlineAccountObject::SetUniqueId(const struct FUniqueNetId& NewUniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAccountObject.SetUniqueId");

	UOnlineAccountObject_SetUniqueId_Params params;
	params.NewUniqueId = NewUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineAccountObject.MarkAchievementAsUnlocked
// (Native, Public)
// Parameters:
// class UOnlineAchievementObject* AchievementObject              (Parm)

void UOnlineAccountObject::MarkAchievementAsUnlocked(class UOnlineAchievementObject* AchievementObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAccountObject.MarkAchievementAsUnlocked");

	UOnlineAccountObject_MarkAchievementAsUnlocked_Params params;
	params.AchievementObject = AchievementObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineAccountObject.HasRole
// (Defined, Public)
// Parameters:
// struct FString                 Role                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAccountObject::HasRole(const struct FString& Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAccountObject.HasRole");

	UOnlineAccountObject_HasRole_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineAccountObject.ShutDown
// (Native, Public)

void UOnlineAccountObject::ShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAccountObject.ShutDown");

	UOnlineAccountObject_ShutDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineAccountObject.Init
// (Native, Public)
// Parameters:
// class UOnlineAccountManager*   Manager                        (Parm)

void UOnlineAccountObject::Init(class UOnlineAccountManager* Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAccountObject.Init");

	UOnlineAccountObject_Init_Params params;
	params.Manager = Manager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineAchievementCollection.GetNextAchievement
// (Native, Public, HasOutParms)
// Parameters:
// class UOnlineAchievementObject* Achievement                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAchievementCollection::GetNextAchievement(class UOnlineAchievementObject** Achievement)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAchievementCollection.GetNextAchievement");

	UOnlineAchievementCollection_GetNextAchievement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievement != nullptr)
		*Achievement = params.Achievement;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineAchievementCollection.ResetAchievementIterator
// (Native, Public)

void UOnlineAchievementCollection::ResetAchievementIterator()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAchievementCollection.ResetAchievementIterator");

	UOnlineAchievementCollection_ResetAchievementIterator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineAchievementCollection.AddAchievements
// (Native, Public)
// Parameters:
// class UOnlineAchievementCollection* Achievements                   (Parm)

void UOnlineAchievementCollection::AddAchievements(class UOnlineAchievementCollection* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAchievementCollection.AddAchievements");

	UOnlineAchievementCollection_AddAchievements_Params params;
	params.Achievements = Achievements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineAchievementCollection.SetAchievement
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            AchievementId                  (Const, Parm, OutParm)
// class UOnlineAchievementObject* Achievement                    (Parm)

void UOnlineAchievementCollection::SetAchievement(class UOnlineAchievementObject* Achievement, struct FUniqueNetId* AchievementId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAchievementCollection.SetAchievement");

	UOnlineAchievementCollection_SetAchievement_Params params;
	params.Achievement = Achievement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AchievementId != nullptr)
		*AchievementId = params.AchievementId;
}


// Function OnlineSubsystemMeteor.OnlineAchievementCollection.GetAchievement
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            AchievementId                  (Const, Parm, OutParm)
// class UOnlineAchievementObject* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineAchievementObject* UOnlineAchievementCollection::GetAchievement(struct FUniqueNetId* AchievementId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAchievementCollection.GetAchievement");

	UOnlineAchievementCollection_GetAchievement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AchievementId != nullptr)
		*AchievementId = params.AchievementId;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineAchievementCollection.NumAchievements
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineAchievementCollection::NumAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAchievementCollection.NumAchievements");

	UOnlineAchievementCollection_NumAchievements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineAchievementObject.CopyFrom
// (Native, Public)
// Parameters:
// class UOnlineAchievementObject* AchievementObject              (Parm)

void UOnlineAchievementObject::CopyFrom(class UOnlineAchievementObject* AchievementObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineAchievementObject.CopyFrom");

	UOnlineAchievementObject_CopyFrom_Params params;
	params.AchievementObject = AchievementObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_PlayerExitClient
// (Final, Native, Static, Public)

void UOnlineEventTracking::STATIC_SendEvent_PlayerExitClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_PlayerExitClient");

	UOnlineEventTracking_SendEvent_PlayerExitClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_PlayerLoggedIn
// (Defined, Static, Public)
// Parameters:
// class AController*             Player                         (Parm)
// struct FString                 GameVersion                    (Parm, NeedCtorLink)
// struct FString                 CommandLine                    (Parm, NeedCtorLink)

void UOnlineEventTracking::STATIC_SendEvent_PlayerLoggedIn(class AController* Player, const struct FString& GameVersion, const struct FString& CommandLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_PlayerLoggedIn");

	UOnlineEventTracking_SendEvent_PlayerLoggedIn_Params params;
	params.Player = Player;
	params.GameVersion = GameVersion;
	params.CommandLine = CommandLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_WriteGameItemStats
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FString                 InstanceID                     (Parm, NeedCtorLink)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// int                            TryCount                       (Parm)

void UOnlineEventTracking::STATIC_SendEvent_WriteGameItemStats(const struct FString& InstanceID, TEnumAsByte<ENetworkErrorCode> ErrorCode, int TryCount, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_WriteGameItemStats");

	UOnlineEventTracking_SendEvent_WriteGameItemStats_Params params;
	params.InstanceID = InstanceID;
	params.ErrorCode = ErrorCode;
	params.TryCount = TryCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_WriteUserStats
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// int                            TryCount                       (Parm)

void UOnlineEventTracking::STATIC_SendEvent_WriteUserStats(TEnumAsByte<ENetworkErrorCode> ErrorCode, int TryCount, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_WriteUserStats");

	UOnlineEventTracking_SendEvent_WriteUserStats_Params params;
	params.ErrorCode = ErrorCode;
	params.TryCount = TryCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_UpdatedMatchMakingRating
// (Final, Native, Static, Public)
// Parameters:
// class APlayerReplicationInfo*  PRI                            (Parm)
// struct FString                 RatingKey                      (Parm, NeedCtorLink)
// float                          RatingValue                    (Parm)
// struct FString                 DeviationKey                   (Parm, NeedCtorLink)
// float                          DeviationValue                 (Parm)

void UOnlineEventTracking::STATIC_SendEvent_UpdatedMatchMakingRating(class APlayerReplicationInfo* PRI, const struct FString& RatingKey, float RatingValue, const struct FString& DeviationKey, float DeviationValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_UpdatedMatchMakingRating");

	UOnlineEventTracking_SendEvent_UpdatedMatchMakingRating_Params params;
	params.PRI = PRI;
	params.RatingKey = RatingKey;
	params.RatingValue = RatingValue;
	params.DeviationKey = DeviationKey;
	params.DeviationValue = DeviationValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_PeriodicServerPerformance
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ServerName                     (Parm, NeedCtorLink)
// int                            avgTickMs                      (Parm)
// int                            maxTickMS                      (Parm)
// int                            avgDeltaMS                     (Parm)
// int                            maxDeltaMS                     (Parm)

void UOnlineEventTracking::STATIC_SendEvent_PeriodicServerPerformance(const struct FString& ServerName, int avgTickMs, int maxTickMS, int avgDeltaMS, int maxDeltaMS)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_PeriodicServerPerformance");

	UOnlineEventTracking_SendEvent_PeriodicServerPerformance_Params params;
	params.ServerName = ServerName;
	params.avgTickMs = avgTickMs;
	params.maxTickMS = maxTickMS;
	params.avgDeltaMS = avgDeltaMS;
	params.maxDeltaMS = maxDeltaMS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_ServerStarted
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ServerName                     (Parm, NeedCtorLink)
// struct FString                 Region                         (Parm, NeedCtorLink)
// struct FString                 CommandLine                    (Parm, NeedCtorLink)

void UOnlineEventTracking::STATIC_SendEvent_ServerStarted(const struct FString& ServerName, const struct FString& Region, const struct FString& CommandLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.SendEvent_ServerStarted");

	UOnlineEventTracking_SendEvent_ServerStarted_Params params;
	params.ServerName = ServerName;
	params.Region = Region;
	params.CommandLine = CommandLine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertProgressMessageSubTypeToString
// (Final, Native, Static, Public)
// Parameters:
// TEnumAsByte<EProgressMessageSubType> MessageSubType                 (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineEventTracking::STATIC_ConvertProgressMessageSubTypeToString(TEnumAsByte<EProgressMessageSubType> MessageSubType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertProgressMessageSubTypeToString");

	UOnlineEventTracking_ConvertProgressMessageSubTypeToString_Params params;
	params.MessageSubType = MessageSubType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertConnectionStatusToString
// (Final, Native, Static, Public)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus               (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineEventTracking::STATIC_ConvertConnectionStatusToString(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertConnectionStatusToString");

	UOnlineEventTracking_ConvertConnectionStatusToString_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertOfferCurrencyToString
// (Final, Native, Static, Public)
// Parameters:
// TEnumAsByte<EOfferCurrency>    Currency                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineEventTracking::STATIC_ConvertOfferCurrencyToString(TEnumAsByte<EOfferCurrency> Currency)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertOfferCurrencyToString");

	UOnlineEventTracking_ConvertOfferCurrencyToString_Params params;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertNetworkErrorCodeToString
// (Final, Native, Static, Public)
// Parameters:
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineEventTracking::STATIC_ConvertNetworkErrorCodeToString(TEnumAsByte<ENetworkErrorCode> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.ConvertNetworkErrorCodeToString");

	UOnlineEventTracking_ConvertNetworkErrorCodeToString_Params params;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.IsLoggedIn
// (Defined, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineEventTracking::STATIC_IsLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.IsLoggedIn");

	UOnlineEventTracking_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.CreateEventObject
// (Final, Defined, Static, Public)
// Parameters:
// class UStormEventObject*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UStormEventObject* UOnlineEventTracking::STATIC_CreateEventObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.CreateEventObject");

	UOnlineEventTracking_CreateEventObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.DebugPrintEventObject
// (Final, Native, Static, Public)
// Parameters:
// class UStormEventObject*       eventObject                    (Parm)

void UOnlineEventTracking::STATIC_DebugPrintEventObject(class UStormEventObject* eventObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.DebugPrintEventObject");

	UOnlineEventTracking_DebugPrintEventObject_Params params;
	params.eventObject = eventObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.SendEventObject
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// class UStormEventObject*       eventObject                    (Parm)
// bool                           bNoDebugTrace                  (OptionalParm, Parm)

void UOnlineEventTracking::STATIC_SendEventObject(class UStormEventObject* eventObject, bool bNoDebugTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.SendEventObject");

	UOnlineEventTracking_SendEventObject_Params params;
	params.eventObject = eventObject;
	params.bNoDebugTrace = bNoDebugTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.CreateGuidString
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineEventTracking::STATIC_CreateGuidString()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.CreateGuidString");

	UOnlineEventTracking_CreateGuidString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.GetLoggedInStormUserId
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineEventTracking::STATIC_GetLoggedInStormUserId()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.GetLoggedInStormUserId");

	UOnlineEventTracking_GetLoggedInStormUserId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.GetUnrealEngineVersion
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineEventTracking::STATIC_GetUnrealEngineVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.GetUnrealEngineVersion");

	UOnlineEventTracking_GetUnrealEngineVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.GetBuiltFromChangelist
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineEventTracking::STATIC_GetBuiltFromChangelist()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.GetBuiltFromChangelist");

	UOnlineEventTracking_GetBuiltFromChangelist_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.GetUniqueBuildId
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineEventTracking::STATIC_GetUniqueBuildId()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.GetUniqueBuildId");

	UOnlineEventTracking_GetUniqueBuildId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.GetServerListingGuid
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineEventTracking::STATIC_GetServerListingGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.GetServerListingGuid");

	UOnlineEventTracking_GetServerListingGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineEventTracking.GetCurrentMatchID
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineEventTracking::STATIC_GetCurrentMatchID()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineEventTracking.GetCurrentMatchID");

	UOnlineEventTracking_GetCurrentMatchID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineFriendCollection.SetFriend
// (Native, Public, HasOutParms)
// Parameters:
// struct FOnlineFriend           Friend                         (Parm, OutParm, NeedCtorLink)

void UOnlineFriendCollection::SetFriend(struct FOnlineFriend* Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineFriendCollection.SetFriend");

	UOnlineFriendCollection_SetFriend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friend != nullptr)
		*Friend = params.Friend;
}


// Function OnlineSubsystemMeteor.OnlineFriendCollection.FindFriendByName
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 FriendName                     (Parm, NeedCtorLink)
// struct FOnlineFriend           Friend                         (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineFriendCollection::FindFriendByName(const struct FString& FriendName, struct FOnlineFriend* Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineFriendCollection.FindFriendByName");

	UOnlineFriendCollection_FindFriendByName_Params params;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friend != nullptr)
		*Friend = params.Friend;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineFriendCollection.GetNextFriend
// (Native, Public, HasOutParms)
// Parameters:
// struct FOnlineFriend           Friend                         (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineFriendCollection::GetNextFriend(struct FOnlineFriend* Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineFriendCollection.GetNextFriend");

	UOnlineFriendCollection_GetNextFriend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friend != nullptr)
		*Friend = params.Friend;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineFriendCollection.ResetFriendIterator
// (Native, Public)

void UOnlineFriendCollection::ResetFriendIterator()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineFriendCollection.ResetFriendIterator");

	UOnlineFriendCollection_ResetFriendIterator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineFriendCollection.GetFriend
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FOnlineFriend           Friend                         (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineFriendCollection::GetFriend(struct FUniqueNetId* PlayerID, struct FOnlineFriend* Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineFriendCollection.GetFriend");

	UOnlineFriendCollection_GetFriend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
	if (Friend != nullptr)
		*Friend = params.Friend;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineFriendCollection.NumFriends
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineFriendCollection::NumFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineFriendCollection.NumFriends");

	UOnlineFriendCollection_NumFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineFriendObject.HaveInvited
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineFriendObject::HaveInvited()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineFriendObject.HaveInvited");

	UOnlineFriendObject_HaveInvited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineFriendObject.HasInvitedYou
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineFriendObject::HasInvitedYou()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineFriendObject.HasInvitedYou");

	UOnlineFriendObject_HasInvitedYou_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineFriendObject.ShouldBeDisplayed
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineFriendObject::ShouldBeDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineFriendObject.ShouldBeDisplayed");

	UOnlineFriendObject_ShouldBeDisplayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameBundle.IsExpired
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameBundle::IsExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameBundle.IsExpired");

	UOnlineGameBundle_IsExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameBundle.IsVisibleToClient
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameBundle::IsVisibleToClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameBundle.IsVisibleToClient");

	UOnlineGameBundle_IsVisibleToClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameBundle.IsMultiRedeemable
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameBundle::IsMultiRedeemable()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameBundle.IsMultiRedeemable");

	UOnlineGameBundle_IsMultiRedeemable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameBundle.GetExpiryDate
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 Date                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameBundle::GetExpiryDate(struct FString* Date)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameBundle.GetExpiryDate");

	UOnlineGameBundle_GetExpiryDate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Date != nullptr)
		*Date = params.Date;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameBundle.GetHasExpiryDate
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameBundle::GetHasExpiryDate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameBundle.GetHasExpiryDate");

	UOnlineGameBundle_GetHasExpiryDate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameBundleCollection.GetNextBundle
// (Native, Public, HasOutParms)
// Parameters:
// class UOnlineGameBundle*       Bundle                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameBundleCollection::GetNextBundle(class UOnlineGameBundle** Bundle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameBundleCollection.GetNextBundle");

	UOnlineGameBundleCollection_GetNextBundle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bundle != nullptr)
		*Bundle = params.Bundle;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameBundleCollection.ResetBundleIterator
// (Native, Public)

void UOnlineGameBundleCollection::ResetBundleIterator()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameBundleCollection.ResetBundleIterator");

	UOnlineGameBundleCollection_ResetBundleIterator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameBundleCollection.SetBundle
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// class UOnlineGameBundle*       Bundle                         (Parm)

void UOnlineGameBundleCollection::SetBundle(const struct FString& Key, class UOnlineGameBundle* Bundle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameBundleCollection.SetBundle");

	UOnlineGameBundleCollection_SetBundle_Params params;
	params.Key = Key;
	params.Bundle = Bundle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameBundleCollection.GetBundle
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// class UOnlineGameBundle*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameBundle* UOnlineGameBundleCollection::GetBundle(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameBundleCollection.GetBundle");

	UOnlineGameBundleCollection_GetBundle_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameBundleCollection.NumBundles
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineGameBundleCollection::NumBundles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameBundleCollection.NumBundles");

	UOnlineGameBundleCollection_NumBundles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.CheckServerPassword
// (Native, Public)
// Parameters:
// struct FString                 ServerPassword                 (Parm, NeedCtorLink)
// struct FString                 ToCheck                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceMeteor::CheckServerPassword(const struct FString& ServerPassword, const struct FString& ToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.CheckServerPassword");

	UOnlineGameInterfaceMeteor_CheckServerPassword_Params params;
	params.ServerPassword = ServerPassword;
	params.ToCheck = ToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.SetAntiAddictionModifierOverride
// (Defined, Public)
// Parameters:
// float                          Modifier                       (Parm)

void UOnlineGameInterfaceMeteor::SetAntiAddictionModifierOverride(float Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.SetAntiAddictionModifierOverride");

	UOnlineGameInterfaceMeteor_SetAntiAddictionModifierOverride_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.GetPlayerAntiAddictionModifier
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOnlineGameInterfaceMeteor::GetPlayerAntiAddictionModifier(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.GetPlayerAntiAddictionModifier");

	UOnlineGameInterfaceMeteor_GetPlayerAntiAddictionModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.GenerateCurrentMatchID
// (Native, Public)

void UOnlineGameInterfaceMeteor::GenerateCurrentMatchID()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.GenerateCurrentMatchID");

	UOnlineGameInterfaceMeteor_GenerateCurrentMatchID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.TickInternetTasks
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UOnlineGameInterfaceMeteor::TickInternetTasks(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.TickInternetTasks");

	UOnlineGameInterfaceMeteor_TickInternetTasks_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.UpdateOnlineGame
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (Parm)
// bool                           bShouldRefreshOnlineData       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceMeteor::UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.UpdateOnlineGame");

	UOnlineGameInterfaceMeteor_UpdateOnlineGame_Params params;
	params.SessionName = SessionName;
	params.UpdatedGameSettings = UpdatedGameSettings;
	params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.CreateOnlineGame
// (Native, Public)
// Parameters:
// unsigned char                  HostingPlayerNum               (Parm)
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     NewGameSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceMeteor::CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.CreateOnlineGame");

	UOnlineGameInterfaceMeteor_CreateOnlineGame_Params params;
	params.HostingPlayerNum = HostingPlayerNum;
	params.SessionName = SessionName;
	params.NewGameSettings = NewGameSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.UnregisterPlayer
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceMeteor::UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.UnregisterPlayer");

	UOnlineGameInterfaceMeteor_UnregisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.RegisterPlayer
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasInvited                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceMeteor::RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.RegisterPlayer");

	UOnlineGameInterfaceMeteor_RegisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasInvited = bWasInvited;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.GetServerRegion
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineGameInterfaceMeteor::GetServerRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.GetServerRegion");

	UOnlineGameInterfaceMeteor_GetServerRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItem.SetAttributeString
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, CoerceParm, NeedCtorLink)

void UOnlineGameItem::SetAttributeString(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItem.SetAttributeString");

	UOnlineGameItem_SetAttributeString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameItem.GetAttributeValue
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 Default                        (OptionalParm, Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineGameItem::GetAttributeValue(const struct FString& Key, const struct FString& Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItem.GetAttributeValue");

	UOnlineGameItem_GetAttributeValue_Params params;
	params.Key = Key;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItem.GetAttribute
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FOnlineGameItemAttribute ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FOnlineGameItemAttribute UOnlineGameItem::GetAttribute(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItem.GetAttribute");

	UOnlineGameItem_GetAttribute_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItem.NumAttributes
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineGameItem::NumAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItem.NumAttributes");

	UOnlineGameItem_NumAttributes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.DebugTestFunctions
// (Native, Public)

void UOnlineGameItemInstance::DebugTestFunctions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.DebugTestFunctions");

	UOnlineGameItemInstance_DebugTestFunctions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.DoesTimeIndicateRental
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ExpiryDate                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::STATIC_DoesTimeIndicateRental(const struct FString& ExpiryDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.DoesTimeIndicateRental");

	UOnlineGameItemInstance_DoesTimeIndicateRental_Params params;
	params.ExpiryDate = ExpiryDate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsTimeDefaultData
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ExpiryDate                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::STATIC_IsTimeDefaultData(const struct FString& ExpiryDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsTimeDefaultData");

	UOnlineGameItemInstance_IsTimeDefaultData_Params params;
	params.ExpiryDate = ExpiryDate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.HasUTCTimePassed
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 UTCTime                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::STATIC_HasUTCTimePassed(const struct FString& UTCTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.HasUTCTimePassed");

	UOnlineGameItemInstance_HasUTCTimePassed_Params params;
	params.UTCTime = UTCTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetCurrentUTCTimeStringMeteorFormat
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineGameItemInstance::STATIC_GetCurrentUTCTimeStringMeteorFormat()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetCurrentUTCTimeStringMeteorFormat");

	UOnlineGameItemInstance_GetCurrentUTCTimeStringMeteorFormat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.ConvertMinutesToTime
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            totalSeconds                   (Parm)
// int                            Day                            (Parm, OutParm)
// int                            Hour                           (Parm, OutParm)
// int                            Min                            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::STATIC_ConvertMinutesToTime(int totalSeconds, int* Day, int* Hour, int* Min)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.ConvertMinutesToTime");

	UOnlineGameItemInstance_ConvertMinutesToTime_Params params;
	params.totalSeconds = totalSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Day != nullptr)
		*Day = params.Day;
	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Min != nullptr)
		*Min = params.Min;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.ConvertSecondsToTime
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            totalSeconds                   (Parm)
// int                            Day                            (Parm, OutParm)
// int                            Hour                           (Parm, OutParm)
// int                            Min                            (Parm, OutParm)
// int                            Sec                            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::STATIC_ConvertSecondsToTime(int totalSeconds, int* Day, int* Hour, int* Min, int* Sec)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.ConvertSecondsToTime");

	UOnlineGameItemInstance_ConvertSecondsToTime_Params params;
	params.totalSeconds = totalSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Day != nullptr)
		*Day = params.Day;
	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Min != nullptr)
		*Min = params.Min;
	if (Sec != nullptr)
		*Sec = params.Sec;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.ParseMeteorTimeStringIntoInt
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 meteorTime                     (Parm, NeedCtorLink)
// int                            Year                           (Parm, OutParm)
// int                            Month                          (Parm, OutParm)
// int                            Day                            (Parm, OutParm)
// int                            Hour                           (Parm, OutParm)
// int                            Min                            (Parm, OutParm)
// int                            Sec                            (Parm, OutParm)
// bool                           bRemoveDefaultData             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::STATIC_ParseMeteorTimeStringIntoInt(const struct FString& meteorTime, bool bRemoveDefaultData, int* Year, int* Month, int* Day, int* Hour, int* Min, int* Sec)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.ParseMeteorTimeStringIntoInt");

	UOnlineGameItemInstance_ParseMeteorTimeStringIntoInt_Params params;
	params.meteorTime = meteorTime;
	params.bRemoveDefaultData = bRemoveDefaultData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Year != nullptr)
		*Year = params.Year;
	if (Month != nullptr)
		*Month = params.Month;
	if (Day != nullptr)
		*Day = params.Day;
	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Min != nullptr)
		*Min = params.Min;
	if (Sec != nullptr)
		*Sec = params.Sec;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.ParseMeteorTimeStringIntoString
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 meteorTime                     (Parm, NeedCtorLink)
// struct FString                 sYear                          (Parm, OutParm, NeedCtorLink)
// struct FString                 sMonth                         (Parm, OutParm, NeedCtorLink)
// struct FString                 sDay                           (Parm, OutParm, NeedCtorLink)
// struct FString                 sHour                          (Parm, OutParm, NeedCtorLink)
// struct FString                 sMin                           (Parm, OutParm, NeedCtorLink)
// struct FString                 sSec                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::STATIC_ParseMeteorTimeStringIntoString(const struct FString& meteorTime, struct FString* sYear, struct FString* sMonth, struct FString* sDay, struct FString* sHour, struct FString* sMin, struct FString* sSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.ParseMeteorTimeStringIntoString");

	UOnlineGameItemInstance_ParseMeteorTimeStringIntoString_Params params;
	params.meteorTime = meteorTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sYear != nullptr)
		*sYear = params.sYear;
	if (sMonth != nullptr)
		*sMonth = params.sMonth;
	if (sDay != nullptr)
		*sDay = params.sDay;
	if (sHour != nullptr)
		*sHour = params.sHour;
	if (sMin != nullptr)
		*sMin = params.sMin;
	if (sSec != nullptr)
		*sSec = params.sSec;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetTimeMeteorFormat
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            Year                           (Parm)
// int                            Month                          (Parm)
// int                            Day                            (Parm)
// int                            Hour                           (Parm)
// int                            Min                            (Parm)
// int                            Sec                            (Parm)
// struct FString                 formattedTime                  (Parm, OutParm, NeedCtorLink)

void UOnlineGameItemInstance::STATIC_GetTimeMeteorFormat(int Year, int Month, int Day, int Hour, int Min, int Sec, struct FString* formattedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetTimeMeteorFormat");

	UOnlineGameItemInstance_GetTimeMeteorFormat_Params params;
	params.Year = Year;
	params.Month = Month;
	params.Day = Day;
	params.Hour = Hour;
	params.Min = Min;
	params.Sec = Sec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (formattedTime != nullptr)
		*formattedTime = params.formattedTime;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.SetExpirationDateToDefault
// (Native, Public)

void UOnlineGameItemInstance::SetExpirationDateToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.SetExpirationDateToDefault");

	UOnlineGameItemInstance_SetExpirationDateToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.DecrementLimitedUses
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::DecrementLimitedUses()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.DecrementLimitedUses");

	UOnlineGameItemInstance_DecrementLimitedUses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsExpired
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::IsExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsExpired");

	UOnlineGameItemInstance_IsExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetRemainingRentalTime
// (Native, Public, HasOutParms)
// Parameters:
// int                            daysOut                        (Parm, OutParm)
// int                            hoursOut                       (Parm, OutParm)
// int                            minutesOut                     (Parm, OutParm)
// int                            secondsOut                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::GetRemainingRentalTime(int* daysOut, int* hoursOut, int* minutesOut, int* secondsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetRemainingRentalTime");

	UOnlineGameItemInstance_GetRemainingRentalTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (daysOut != nullptr)
		*daysOut = params.daysOut;
	if (hoursOut != nullptr)
		*hoursOut = params.hoursOut;
	if (minutesOut != nullptr)
		*minutesOut = params.minutesOut;
	if (secondsOut != nullptr)
		*secondsOut = params.secondsOut;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetRemainingRentalTimeAsString
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 RemainingTime                  (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::GetRemainingRentalTimeAsString(struct FString* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.GetRemainingRentalTimeAsString");

	UOnlineGameItemInstance_GetRemainingRentalTimeAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsUseLimitedWithGet
// (Native, Public, HasOutParms)
// Parameters:
// int                            TotalUses                      (Parm, OutParm)
// int                            usesLeft                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::IsUseLimitedWithGet(int* TotalUses, int* usesLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsUseLimitedWithGet");

	UOnlineGameItemInstance_IsUseLimitedWithGet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalUses != nullptr)
		*TotalUses = params.TotalUses;
	if (usesLeft != nullptr)
		*usesLeft = params.usesLeft;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsUseLimited
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::IsUseLimited()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsUseLimited");

	UOnlineGameItemInstance_IsUseLimited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsTimedRentalWithGet
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 ExpiryDate                     (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::IsTimedRentalWithGet(struct FString* ExpiryDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsTimedRentalWithGet");

	UOnlineGameItemInstance_IsTimedRentalWithGet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpiryDate != nullptr)
		*ExpiryDate = params.ExpiryDate;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsTimedRental
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstance::IsTimedRental()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstance.IsTimedRental");

	UOnlineGameItemInstance_IsTimedRental_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.GetNextItem
// (Native, Public, HasOutParms)
// Parameters:
// class UOnlineGameItemInstance* Item                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemInstanceCollection::GetNextItem(class UOnlineGameItemInstance** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.GetNextItem");

	UOnlineGameItemInstanceCollection_GetNextItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.ResetItemIterator
// (Native, Public)

void UOnlineGameItemInstanceCollection::ResetItemIterator()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.ResetItemIterator");

	UOnlineGameItemInstanceCollection_ResetItemIterator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.AddItems
// (Native, Public)
// Parameters:
// class UOnlineGameItemInstanceCollection* Items                          (Parm)

void UOnlineGameItemInstanceCollection::AddItems(class UOnlineGameItemInstanceCollection* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.AddItems");

	UOnlineGameItemInstanceCollection_AddItems_Params params;
	params.Items = Items;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.SetItem
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// class UOnlineGameItemInstance* Item                           (Parm)

void UOnlineGameItemInstanceCollection::SetItem(const struct FString& Key, class UOnlineGameItemInstance* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.SetItem");

	UOnlineGameItemInstanceCollection_SetItem_Params params;
	params.Key = Key;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.GetItemsByTypeId
// (Native, Public)
// Parameters:
// struct FString                 TypeId                         (Parm, NeedCtorLink)
// TArray<class UOnlineGameItemInstance*> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class UOnlineGameItemInstance*> UOnlineGameItemInstanceCollection::GetItemsByTypeId(const struct FString& TypeId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.GetItemsByTypeId");

	UOnlineGameItemInstanceCollection_GetItemsByTypeId_Params params;
	params.TypeId = TypeId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.GetItem
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// class UOnlineGameItemInstance* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameItemInstance* UOnlineGameItemInstanceCollection::GetItem(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.GetItem");

	UOnlineGameItemInstanceCollection_GetItem_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.NumItems
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineGameItemInstanceCollection::NumItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.NumItems");

	UOnlineGameItemInstanceCollection_NumItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.GetNextItem
// (Native, Public, HasOutParms)
// Parameters:
// class UOnlineGameItemType*     Item                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameItemTypeCollection::GetNextItem(class UOnlineGameItemType** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.GetNextItem");

	UOnlineGameItemTypeCollection_GetNextItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.ResetItemIterator
// (Native, Public)

void UOnlineGameItemTypeCollection::ResetItemIterator()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.ResetItemIterator");

	UOnlineGameItemTypeCollection_ResetItemIterator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.SetItem
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// class UOnlineGameItemType*     Item                           (Parm)

void UOnlineGameItemTypeCollection::SetItem(const struct FString& Key, class UOnlineGameItemType* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.SetItem");

	UOnlineGameItemTypeCollection_SetItem_Params params;
	params.Key = Key;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.GetItem
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// class UOnlineGameItemType*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameItemType* UOnlineGameItemTypeCollection::GetItem(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.GetItem");

	UOnlineGameItemTypeCollection_GetItem_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.NumItems
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineGameItemTypeCollection::NumItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameItemTypeCollection.NumItems");

	UOnlineGameItemTypeCollection_NumItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.DebugTestFunctions
// (Native, Public)

void UOnlineGameOffer::DebugTestFunctions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.DebugTestFunctions");

	UOnlineGameOffer_DebugTestFunctions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.IsRentalPurchaseOfferDefault
// (Native, Static, Public)
// Parameters:
// struct FString                 RentalPurchaseOfferID          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameOffer::STATIC_IsRentalPurchaseOfferDefault(const struct FString& RentalPurchaseOfferID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.IsRentalPurchaseOfferDefault");

	UOnlineGameOffer_IsRentalPurchaseOfferDefault_Params params;
	params.RentalPurchaseOfferID = RentalPurchaseOfferID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.IsExpired
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameOffer::IsExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.IsExpired");

	UOnlineGameOffer_IsExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.GetUseLimit
// (Native, Public, HasOutParms)
// Parameters:
// int                            TotalUses                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameOffer::GetUseLimit(int* TotalUses)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.GetUseLimit");

	UOnlineGameOffer_GetUseLimit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalUses != nullptr)
		*TotalUses = params.TotalUses;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.GetHasUseLimit
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameOffer::GetHasUseLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.GetHasUseLimit");

	UOnlineGameOffer_GetHasUseLimit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.GetRelativeExpiry
// (Native, Public, HasOutParms)
// Parameters:
// int                            RelativeExpiryMinutes          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameOffer::GetRelativeExpiry(int* RelativeExpiryMinutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.GetRelativeExpiry");

	UOnlineGameOffer_GetRelativeExpiry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelativeExpiryMinutes != nullptr)
		*RelativeExpiryMinutes = params.RelativeExpiryMinutes;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.GetHasRelativeExpiry
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameOffer::GetHasRelativeExpiry()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.GetHasRelativeExpiry");

	UOnlineGameOffer_GetHasRelativeExpiry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.GetExpiryDate
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 ExpiryDate                     (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameOffer::GetExpiryDate(struct FString* ExpiryDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.GetExpiryDate");

	UOnlineGameOffer_GetExpiryDate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpiryDate != nullptr)
		*ExpiryDate = params.ExpiryDate;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.GetHasExpiryDate
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameOffer::GetHasExpiryDate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.GetHasExpiryDate");

	UOnlineGameOffer_GetHasExpiryDate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.GetNextAttribute
// (Native, Public, HasOutParms)
// Parameters:
// struct FOnlineGameOfferAttribute Attribute                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameOffer::GetNextAttribute(struct FOnlineGameOfferAttribute* Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.GetNextAttribute");

	UOnlineGameOffer_GetNextAttribute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attribute != nullptr)
		*Attribute = params.Attribute;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.ResetAttributeIterator
// (Native, Public)

void UOnlineGameOffer::ResetAttributeIterator()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.ResetAttributeIterator");

	UOnlineGameOffer_ResetAttributeIterator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.SetAttributeString
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, NeedCtorLink)

void UOnlineGameOffer::SetAttributeString(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.SetAttributeString");

	UOnlineGameOffer_SetAttributeString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.GetAttributeValue
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 Default                        (OptionalParm, Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineGameOffer::GetAttributeValue(const struct FString& Key, const struct FString& Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.GetAttributeValue");

	UOnlineGameOffer_GetAttributeValue_Params params;
	params.Key = Key;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOffer.NumAttributes
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineGameOffer::NumAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOffer.NumAttributes");

	UOnlineGameOffer_NumAttributes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOfferCollection.GetNextOffer
// (Native, Public, HasOutParms)
// Parameters:
// class UOnlineGameOffer*        Offer                          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameOfferCollection::GetNextOffer(class UOnlineGameOffer** Offer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOfferCollection.GetNextOffer");

	UOnlineGameOfferCollection_GetNextOffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offer != nullptr)
		*Offer = params.Offer;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOfferCollection.ResetOfferIterator
// (Native, Public)

void UOnlineGameOfferCollection::ResetOfferIterator()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOfferCollection.ResetOfferIterator");

	UOnlineGameOfferCollection_ResetOfferIterator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameOfferCollection.SetOffer
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// class UOnlineGameOffer*        Offer                          (Parm)

void UOnlineGameOfferCollection::SetOffer(const struct FString& Key, class UOnlineGameOffer* Offer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOfferCollection.SetOffer");

	UOnlineGameOfferCollection_SetOffer_Params params;
	params.Key = Key;
	params.Offer = Offer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineGameOfferCollection.GetOffer
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// class UOnlineGameOffer*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameOffer* UOnlineGameOfferCollection::GetOffer(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOfferCollection.GetOffer");

	UOnlineGameOfferCollection_GetOffer_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineGameOfferCollection.NumOffers
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineGameOfferCollection::NumOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineGameOfferCollection.NumOffers");

	UOnlineGameOfferCollection_NumOffers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineInventoryManager.ShutDown
// (Native, Public)

void UOnlineInventoryManager::ShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineInventoryManager.ShutDown");

	UOnlineInventoryManager_ShutDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineInventoryManager.Init
// (Native, Public)
// Parameters:
// class UOnlineSubsystem*        OnlineSub                      (Parm)

void UOnlineInventoryManager::Init(class UOnlineSubsystem* OnlineSub)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineInventoryManager.Init");

	UOnlineInventoryManager_Init_Params params;
	params.OnlineSub = OnlineSub;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UuidStringToUniqueNetId
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 UniqueNetIdString              (Parm, NeedCtorLink)
// struct FUniqueNetId            out_UniqueId                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::STATIC_UuidStringToUniqueNetId(const struct FString& UniqueNetIdString, struct FUniqueNetId* out_UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UuidStringToUniqueNetId");

	UOnlineSubsystemMeteor_UuidStringToUniqueNetId_Params params;
	params.UniqueNetIdString = UniqueNetIdString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_UniqueId != nullptr)
		*out_UniqueId = params.out_UniqueId;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UniqueNetIdToUuidString
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            IdToConvert                    (Const, Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::STATIC_UniqueNetIdToUuidString(struct FUniqueNetId* IdToConvert)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UniqueNetIdToUuidString");

	UOnlineSubsystemMeteor_UniqueNetIdToUuidString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IdToConvert != nullptr)
		*IdToConvert = params.IdToConvert;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SteamIDToUniqueNetId
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 SteamID                        (Parm, NeedCtorLink)
// struct FUniqueNetId            out_UniqueId                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::STATIC_SteamIDToUniqueNetId(const struct FString& SteamID, struct FUniqueNetId* out_UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SteamIDToUniqueNetId");

	UOnlineSubsystemMeteor_SteamIDToUniqueNetId_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_UniqueId != nullptr)
		*out_UniqueId = params.out_UniqueId;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UniqueNetIdToSteamID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            IdToConvert                    (Const, Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::STATIC_UniqueNetIdToSteamID(struct FUniqueNetId* IdToConvert)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UniqueNetIdToSteamID");

	UOnlineSubsystemMeteor_UniqueNetIdToSteamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IdToConvert != nullptr)
		*IdToConvert = params.IdToConvert;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetSteamAuthSessionTicket
// (Final, Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::GetSteamAuthSessionTicket()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetSteamAuthSessionTicket");

	UOnlineSubsystemMeteor_GetSteamAuthSessionTicket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearSetGameTypeCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearSetGameTypeCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearSetGameTypeCompletedDelegate");

	UOnlineSubsystemMeteor_ClearSetGameTypeCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddSetGameTypeCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddSetGameTypeCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddSetGameTypeCompletedDelegate");

	UOnlineSubsystemMeteor_AddSetGameTypeCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnSetGameTypeCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FString                 PartyId                        (Parm, NeedCtorLink)
// struct FString                 GameType                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::OnSetGameTypeCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& PartyId, const struct FString& GameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnSetGameTypeCompleted");

	UOnlineSubsystemMeteor_OnSetGameTypeCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PartyId = PartyId;
	params.GameType = GameType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetGameType
// (Native, Public)
// Parameters:
// struct FString                 PartyId                        (Parm, NeedCtorLink)
// struct FString                 GameType                       (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::SetGameType(const struct FString& PartyId, const struct FString& GameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetGameType");

	UOnlineSubsystemMeteor_SetGameType_Params params;
	params.PartyId = PartyId;
	params.GameType = GameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRefreshUserInfoCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearRefreshUserInfoCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRefreshUserInfoCompletedDelegate");

	UOnlineSubsystemMeteor_ClearRefreshUserInfoCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRefreshUserInfoCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddRefreshUserInfoCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRefreshUserInfoCompletedDelegate");

	UOnlineSubsystemMeteor_AddRefreshUserInfoCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRefreshUserInfoCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)

void UOnlineSubsystemMeteor::OnRefreshUserInfoCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRefreshUserInfoCompleted");

	UOnlineSubsystemMeteor_OnRefreshUserInfoCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RefreshUserInfo
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::RefreshUserInfo(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RefreshUserInfo");

	UOnlineSubsystemMeteor_RefreshUserInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearUnlockAchievementObjectCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearUnlockAchievementObjectCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearUnlockAchievementObjectCompletedDelegate");

	UOnlineSubsystemMeteor_ClearUnlockAchievementObjectCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddUnlockAchievementObjectCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddUnlockAchievementObjectCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddUnlockAchievementObjectCompletedDelegate");

	UOnlineSubsystemMeteor_AddUnlockAchievementObjectCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnUnlockAchievementObjectCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// struct FUniqueNetId            AchievementGuid                (Parm)

void UOnlineSubsystemMeteor::OnUnlockAchievementObjectCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, const struct FUniqueNetId& AchievementGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnUnlockAchievementObjectCompleted");

	UOnlineSubsystemMeteor_OnUnlockAchievementObjectCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PlayerID = PlayerID;
	params.AchievementGuid = AchievementGuid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnlockAchievementObject
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FUniqueNetId            AchievementGuid                (Const, Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::UnlockAchievementObject(struct FUniqueNetId* PlayerID, struct FUniqueNetId* AchievementGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnlockAchievementObject");

	UOnlineSubsystemMeteor_UnlockAchievementObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
	if (AchievementGuid != nullptr)
		*AchievementGuid = params.AchievementGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUnlockedAchievementCollectionCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadUnlockedAchievementCollectionCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUnlockedAchievementCollectionCompletedDelegate");

	UOnlineSubsystemMeteor_ClearReadUnlockedAchievementCollectionCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUnlockedAchievementCollectionCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadUnlockedAchievementCollectionCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUnlockedAchievementCollectionCompletedDelegate");

	UOnlineSubsystemMeteor_AddReadUnlockedAchievementCollectionCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUnlockedAchievementCollectionCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// class UOnlineUnlockedAchievementCollection* Collection                     (Parm)

void UOnlineSubsystemMeteor::OnReadUnlockedAchievementCollectionCompleted(int TaskID, const struct FUniqueNetId& PlayerID, TEnumAsByte<ENetworkErrorCode> ErrorCode, class UOnlineUnlockedAchievementCollection* Collection)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUnlockedAchievementCollectionCompleted");

	UOnlineSubsystemMeteor_OnReadUnlockedAchievementCollectionCompleted_Params params;
	params.TaskID = TaskID;
	params.PlayerID = PlayerID;
	params.ErrorCode = ErrorCode;
	params.Collection = Collection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUnlockedAchievementCollection
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FString                 CountryCode                    (Parm, NeedCtorLink)
// class UOnlineUnlockedAchievementCollection* Collection                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::ReadUnlockedAchievementCollection(const struct FString& CountryCode, class UOnlineUnlockedAchievementCollection* Collection, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUnlockedAchievementCollection");

	UOnlineSubsystemMeteor_ReadUnlockedAchievementCollection_Params params;
	params.CountryCode = CountryCode;
	params.Collection = Collection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadAchievementCollectionCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadAchievementCollectionCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadAchievementCollectionCompletedDelegate");

	UOnlineSubsystemMeteor_ClearReadAchievementCollectionCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadAchievementCollectionCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadAchievementCollectionCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadAchievementCollectionCompletedDelegate");

	UOnlineSubsystemMeteor_AddReadAchievementCollectionCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadAchievementCollectionCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)

void UOnlineSubsystemMeteor::OnReadAchievementCollectionCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadAchievementCollectionCompleted");

	UOnlineSubsystemMeteor_OnReadAchievementCollectionCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadAchievementCollection
// (Native, Public)
// Parameters:
// struct FString                 CountryCode                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::ReadAchievementCollection(const struct FString& CountryCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadAchievementCollection");

	UOnlineSubsystemMeteor_ReadAchievementCollection_Params params;
	params.CountryCode = CountryCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRoleAuthorizeCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RoleAuthorizeCompleteHandler   (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearRoleAuthorizeCompleteDelegate(const struct FScriptDelegate& RoleAuthorizeCompleteHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRoleAuthorizeCompleteDelegate");

	UOnlineSubsystemMeteor_ClearRoleAuthorizeCompleteDelegate_Params params;
	params.RoleAuthorizeCompleteHandler = RoleAuthorizeCompleteHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRoleAuthorizeCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RoleAuthorizeCompleteHandler   (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddRoleAuthorizeCompleteDelegate(const struct FScriptDelegate& RoleAuthorizeCompleteHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRoleAuthorizeCompleteDelegate");

	UOnlineSubsystemMeteor_AddRoleAuthorizeCompleteDelegate_Params params;
	params.RoleAuthorizeCompleteHandler = RoleAuthorizeCompleteHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRoleAuthorizeComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)

void UOnlineSubsystemMeteor::OnRoleAuthorizeComplete(bool bWasSuccessful, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRoleAuthorizeComplete");

	UOnlineSubsystemMeteor_OnRoleAuthorizeComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AuthorizeUserRoles
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// TArray<struct FString>         RequiredRoles                  (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::AuthorizeUserRoles(const struct FUniqueNetId& PlayerID, TArray<struct FString>* RequiredRoles)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AuthorizeUserRoles");

	UOnlineSubsystemMeteor_AuthorizeUserRoles_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequiredRoles != nullptr)
		*RequiredRoles = params.RequiredRoles;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.BuildNetworkErrorMessage
// (Defined, Public)
// Parameters:
// struct FString                 BaseMessage                    (Parm, NeedCtorLink)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::BuildNetworkErrorMessage(const struct FString& BaseMessage, TEnumAsByte<ENetworkErrorCode> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.BuildNetworkErrorMessage");

	UOnlineSubsystemMeteor_BuildNetworkErrorMessage_Params params;
	params.BaseMessage = BaseMessage;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetNetworkErrorName
// (Defined, Public)
// Parameters:
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::GetNetworkErrorName(TEnumAsByte<ENetworkErrorCode> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetNetworkErrorName");

	UOnlineSubsystemMeteor_GetNetworkErrorName_Params params;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsServerListingCreated
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsServerListingCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsServerListingCreated");

	UOnlineSubsystemMeteor_IsServerListingCreated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPendingMatchBeginState
// (Defined, Public)

void UOnlineSubsystemMeteor::OnPendingMatchBeginState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPendingMatchBeginState");

	UOnlineSubsystemMeteor_OnPendingMatchBeginState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertStormServerListingToGameSearchResult
// (Native, Static, Public)
// Parameters:
// struct FStormGameServerListing ServerListing                  (Parm, NeedCtorLink)
// class UClass*                  GameSearchClass                (Parm)
// struct FOnlineGameSearchResult ReturnValue                    (Parm, OutParm, ReturnParm)

struct FOnlineGameSearchResult UOnlineSubsystemMeteor::STATIC_ConvertStormServerListingToGameSearchResult(const struct FStormGameServerListing& ServerListing, class UClass* GameSearchClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertStormServerListingToGameSearchResult");

	UOnlineSubsystemMeteor_ConvertStormServerListingToGameSearchResult_Params params;
	params.ServerListing = ServerListing;
	params.GameSearchClass = GameSearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFindUnrankedMatchCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearFindUnrankedMatchCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFindUnrankedMatchCompletedDelegate");

	UOnlineSubsystemMeteor_ClearFindUnrankedMatchCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFindUnrankedMatchCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddFindUnrankedMatchCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFindUnrankedMatchCompletedDelegate");

	UOnlineSubsystemMeteor_AddFindUnrankedMatchCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFindUnrankedMatchCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// bool                           bWasSuccessful                 (Parm)
// struct FStormGameServerListing ServerListing                  (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::OnFindUnrankedMatchCompleted(int TaskID, bool bWasSuccessful, const struct FStormGameServerListing& ServerListing)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFindUnrankedMatchCompleted");

	UOnlineSubsystemMeteor_OnFindUnrankedMatchCompleted_Params params;
	params.TaskID = TaskID;
	params.bWasSuccessful = bWasSuccessful;
	params.ServerListing = ServerListing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CancelFindUnrankedMatch
// (Native, Public)

void UOnlineSubsystemMeteor::CancelFindUnrankedMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CancelFindUnrankedMatch");

	UOnlineSubsystemMeteor_CancelFindUnrankedMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsFindUnrankedMatchInProgress
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsFindUnrankedMatchInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsFindUnrankedMatchInProgress");

	UOnlineSubsystemMeteor_IsFindUnrankedMatchInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FindUnrankedMatch
// (Native, HasOptionalParms, Public)
// Parameters:
// TArray<struct FUniqueNetId>    PlayerList                     (Const, Parm, NeedCtorLink)
// struct FString                 RegionName                     (Parm, NeedCtorLink)
// struct FString                 GameType                       (OptionalParm, Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::FindUnrankedMatch(TArray<struct FUniqueNetId> PlayerList, const struct FString& RegionName, const struct FString& GameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FindUnrankedMatch");

	UOnlineSubsystemMeteor_FindUnrankedMatch_Params params;
	params.PlayerList = PlayerList;
	params.RegionName = RegionName;
	params.GameType = GameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CancelReservationRequest
// (Native, Public)
// Parameters:
// struct FStormGameServerListing DesiredServer                  (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::CancelReservationRequest(const struct FStormGameServerListing& DesiredServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CancelReservationRequest");

	UOnlineSubsystemMeteor_CancelReservationRequest_Params params;
	params.DesiredServer = DesiredServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRequestReservationCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearRequestReservationCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRequestReservationCompleteDelegate");

	UOnlineSubsystemMeteor_ClearRequestReservationCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRequestReservationCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddRequestReservationCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRequestReservationCompleteDelegate");

	UOnlineSubsystemMeteor_AddRequestReservationCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRequestReservationComplete
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FString                 EndPoint                       (Parm, NeedCtorLink)
// int                            Port                           (Parm)

void UOnlineSubsystemMeteor::OnRequestReservationComplete(TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& EndPoint, int Port)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRequestReservationComplete");

	UOnlineSubsystemMeteor_OnRequestReservationComplete_Params params;
	params.ErrorCode = ErrorCode;
	params.EndPoint = EndPoint;
	params.Port = Port;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RequestReservation
// (Native, Public)
// Parameters:
// struct FStormGameServerListing DesiredServer                  (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::RequestReservation(const struct FStormGameServerListing& DesiredServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RequestReservation");

	UOnlineSubsystemMeteor_RequestReservation_Params params;
	params.DesiredServer = DesiredServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearGiveWalletCurrencyCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearGiveWalletCurrencyCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearGiveWalletCurrencyCompleteDelegate");

	UOnlineSubsystemMeteor_ClearGiveWalletCurrencyCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddGiveWalletCurrencyCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddGiveWalletCurrencyCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddGiveWalletCurrencyCompleteDelegate");

	UOnlineSubsystemMeteor_AddGiveWalletCurrencyCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnGiveWalletCurrencyComplete
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// TEnumAsByte<EOfferCurrency>    Currency                       (Parm)
// int                            Amount                         (Parm)

void UOnlineSubsystemMeteor::OnGiveWalletCurrencyComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, TEnumAsByte<EOfferCurrency> Currency, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnGiveWalletCurrencyComplete");

	UOnlineSubsystemMeteor_OnGiveWalletCurrencyComplete_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PlayerID = PlayerID;
	params.Currency = Currency;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GiveWalletCurrency
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// TEnumAsByte<EOfferCurrency>    Currency                       (Parm)
// int                            Amount                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::GiveWalletCurrency(TEnumAsByte<EOfferCurrency> Currency, int Amount, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GiveWalletCurrency");

	UOnlineSubsystemMeteor_GiveWalletCurrency_Params params;
	params.Currency = Currency;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearGetFromXPOverflowCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearGetFromXPOverflowCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearGetFromXPOverflowCompleteDelegate");

	UOnlineSubsystemMeteor_ClearGetFromXPOverflowCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddGetFromXPOverflowCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddGetFromXPOverflowCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddGetFromXPOverflowCompleteDelegate");

	UOnlineSubsystemMeteor_AddGetFromXPOverflowCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnGetFromXPOverflowComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 MechId                         (Parm, NeedCtorLink)
// int                            Amount                         (Parm)
// bool                           bLegacyTransfer                (Parm)

void UOnlineSubsystemMeteor::OnGetFromXPOverflowComplete(bool bWasSuccessful, const struct FString& MechId, int Amount, bool bLegacyTransfer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnGetFromXPOverflowComplete");

	UOnlineSubsystemMeteor_OnGetFromXPOverflowComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.MechId = MechId;
	params.Amount = Amount;
	params.bLegacyTransfer = bLegacyTransfer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetFromXPOverflow
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 MechId                         (Parm, NeedCtorLink)
// int                            Amount                         (Parm)
// bool                           bLegacyTransfer                (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::GetFromXPOverflow(const struct FString& MechId, int Amount, bool bLegacyTransfer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetFromXPOverflow");

	UOnlineSubsystemMeteor_GetFromXPOverflow_Params params;
	params.MechId = MechId;
	params.Amount = Amount;
	params.bLegacyTransfer = bLegacyTransfer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearSendToXPOverflowCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearSendToXPOverflowCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearSendToXPOverflowCompleteDelegate");

	UOnlineSubsystemMeteor_ClearSendToXPOverflowCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddSendToXPOverflowCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddSendToXPOverflowCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddSendToXPOverflowCompleteDelegate");

	UOnlineSubsystemMeteor_AddSendToXPOverflowCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnSendToXPOverflowComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 MechId                         (Parm, NeedCtorLink)
// int                            Amount                         (Parm)
// bool                           bLegacyTransfer                (Parm)

void UOnlineSubsystemMeteor::OnSendToXPOverflowComplete(bool bWasSuccessful, const struct FString& MechId, int Amount, bool bLegacyTransfer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnSendToXPOverflowComplete");

	UOnlineSubsystemMeteor_OnSendToXPOverflowComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.MechId = MechId;
	params.Amount = Amount;
	params.bLegacyTransfer = bLegacyTransfer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendToXPOverflow
// (Native, Public)
// Parameters:
// struct FString                 MechId                         (Parm, NeedCtorLink)
// int                            Amount                         (Parm)
// bool                           bLegacyTransfer                (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::SendToXPOverflow(const struct FString& MechId, int Amount, bool bLegacyTransfer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendToXPOverflow");

	UOnlineSubsystemMeteor_SendToXPOverflow_Params params;
	params.MechId = MechId;
	params.Amount = Amount;
	params.bLegacyTransfer = bLegacyTransfer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearGetOverflowCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearGetOverflowCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearGetOverflowCompleteDelegate");

	UOnlineSubsystemMeteor_ClearGetOverflowCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddGetOverflowCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddGetOverflowCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddGetOverflowCompleteDelegate");

	UOnlineSubsystemMeteor_AddGetOverflowCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnGetOverflowComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// int                            interval                       (Parm)
// int                            mcPerIncrement                 (Parm)

void UOnlineSubsystemMeteor::OnGetOverflowComplete(bool bWasSuccessful, int interval, int mcPerIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnGetOverflowComplete");

	UOnlineSubsystemMeteor_OnGetOverflowComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.interval = interval;
	params.mcPerIncrement = mcPerIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetOverflow
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::GetOverflow()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetOverflow");

	UOnlineSubsystemMeteor_GetOverflow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRefreshWalletCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearRefreshWalletCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRefreshWalletCompleteDelegate");

	UOnlineSubsystemMeteor_ClearRefreshWalletCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRefreshWalletCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddRefreshWalletCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRefreshWalletCompleteDelegate");

	UOnlineSubsystemMeteor_AddRefreshWalletCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRefreshWalletComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnRefreshWalletComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRefreshWalletComplete");

	UOnlineSubsystemMeteor_OnRefreshWalletComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RefreshWallet
// (Native, Public)

void UOnlineSubsystemMeteor::RefreshWallet()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RefreshWallet");

	UOnlineSubsystemMeteor_RefreshWallet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRentGameOfferCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearRentGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRentGameOfferCompleteDelegate");

	UOnlineSubsystemMeteor_ClearRentGameOfferCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRentGameOfferCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddRentGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRentGameOfferCompleteDelegate");

	UOnlineSubsystemMeteor_AddRentGameOfferCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRentGameOfferComplete
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// struct FString                 OfferId                        (Parm, NeedCtorLink)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// class UOnlineGameItemInstanceCollection* RentedGameItemInstances        (Parm)

void UOnlineSubsystemMeteor::OnRentGameOfferComplete(int TaskID, const struct FString& OfferId, TEnumAsByte<ENetworkErrorCode> ErrorCode, class UOnlineGameItemInstanceCollection* RentedGameItemInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRentGameOfferComplete");

	UOnlineSubsystemMeteor_OnRentGameOfferComplete_Params params;
	params.TaskID = TaskID;
	params.OfferId = OfferId;
	params.ErrorCode = ErrorCode;
	params.RentedGameItemInstances = RentedGameItemInstances;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RentGameOfferForCharacter
// (Native, Public)
// Parameters:
// struct FString                 OfferId                        (Parm, NeedCtorLink)
// struct FString                 CharacterInstanceId            (Parm, NeedCtorLink)
// TEnumAsByte<EOfferCurrency>    CurrencyType                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::RentGameOfferForCharacter(const struct FString& OfferId, const struct FString& CharacterInstanceId, TEnumAsByte<EOfferCurrency> CurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RentGameOfferForCharacter");

	UOnlineSubsystemMeteor_RentGameOfferForCharacter_Params params;
	params.OfferId = OfferId;
	params.CharacterInstanceId = CharacterInstanceId;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RentGameOffer
// (Native, Public)
// Parameters:
// struct FString                 OfferId                        (Parm, NeedCtorLink)
// TEnumAsByte<EOfferCurrency>    CurrencyType                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::RentGameOffer(const struct FString& OfferId, TEnumAsByte<EOfferCurrency> CurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RentGameOffer");

	UOnlineSubsystemMeteor_RentGameOffer_Params params;
	params.OfferId = OfferId;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearServerPurchaseGameOfferCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearServerPurchaseGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearServerPurchaseGameOfferCompleteDelegate");

	UOnlineSubsystemMeteor_ClearServerPurchaseGameOfferCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddServerPurchaseGameOfferCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddServerPurchaseGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddServerPurchaseGameOfferCompleteDelegate");

	UOnlineSubsystemMeteor_AddServerPurchaseGameOfferCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnServerPurchaseGameOfferComplete
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// struct FString                 OfferId                        (Parm, NeedCtorLink)
// struct FString                 UserId                         (Parm, NeedCtorLink)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// class UOnlineGameItemInstanceCollection* PurchasedGameItemInstances     (Parm)

void UOnlineSubsystemMeteor::OnServerPurchaseGameOfferComplete(int TaskID, const struct FString& OfferId, const struct FString& UserId, TEnumAsByte<ENetworkErrorCode> ErrorCode, class UOnlineGameItemInstanceCollection* PurchasedGameItemInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnServerPurchaseGameOfferComplete");

	UOnlineSubsystemMeteor_OnServerPurchaseGameOfferComplete_Params params;
	params.TaskID = TaskID;
	params.OfferId = OfferId;
	params.UserId = UserId;
	params.ErrorCode = ErrorCode;
	params.PurchasedGameItemInstances = PurchasedGameItemInstances;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearPurchaseGameOfferCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearPurchaseGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearPurchaseGameOfferCompleteDelegate");

	UOnlineSubsystemMeteor_ClearPurchaseGameOfferCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddPurchaseGameOfferCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddPurchaseGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddPurchaseGameOfferCompleteDelegate");

	UOnlineSubsystemMeteor_AddPurchaseGameOfferCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPurchaseGameOfferComplete
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// struct FString                 OfferId                        (Parm, NeedCtorLink)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// class UOnlineGameItemInstanceCollection* PurchasedGameItemInstances     (Parm)

void UOnlineSubsystemMeteor::OnPurchaseGameOfferComplete(int TaskID, const struct FString& OfferId, TEnumAsByte<ENetworkErrorCode> ErrorCode, class UOnlineGameItemInstanceCollection* PurchasedGameItemInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPurchaseGameOfferComplete");

	UOnlineSubsystemMeteor_OnPurchaseGameOfferComplete_Params params;
	params.TaskID = TaskID;
	params.OfferId = OfferId;
	params.ErrorCode = ErrorCode;
	params.PurchasedGameItemInstances = PurchasedGameItemInstances;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameOfferForCharacter
// (Native, Public)
// Parameters:
// struct FString                 OfferId                        (Parm, NeedCtorLink)
// struct FString                 CharacterInstanceId            (Parm, NeedCtorLink)
// TEnumAsByte<EOfferCurrency>    CurrencyType                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::PurchaseGameOfferForCharacter(const struct FString& OfferId, const struct FString& CharacterInstanceId, TEnumAsByte<EOfferCurrency> CurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameOfferForCharacter");

	UOnlineSubsystemMeteor_PurchaseGameOfferForCharacter_Params params;
	params.OfferId = OfferId;
	params.CharacterInstanceId = CharacterInstanceId;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ServerPurchaseGameOffer
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 OfferId                        (Parm, NeedCtorLink)
// struct FUniqueNetId            UserId                         (Const, Parm, OutParm)
// struct FString                 MechInstanceId                 (Parm, NeedCtorLink)
// TEnumAsByte<EOfferCurrency>    CurrencyType                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::ServerPurchaseGameOffer(const struct FString& OfferId, const struct FString& MechInstanceId, TEnumAsByte<EOfferCurrency> CurrencyType, struct FUniqueNetId* UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ServerPurchaseGameOffer");

	UOnlineSubsystemMeteor_ServerPurchaseGameOffer_Params params;
	params.OfferId = OfferId;
	params.MechInstanceId = MechInstanceId;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserId != nullptr)
		*UserId = params.UserId;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameOffer
// (Native, Public)
// Parameters:
// struct FString                 OfferId                        (Parm, NeedCtorLink)
// TEnumAsByte<EOfferCurrency>    CurrencyType                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::PurchaseGameOffer(const struct FString& OfferId, TEnumAsByte<EOfferCurrency> CurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameOffer");

	UOnlineSubsystemMeteor_PurchaseGameOffer_Params params;
	params.OfferId = OfferId;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateGameItemTypeCollectionWithOfferIds
// (Native, Public)

void UOnlineSubsystemMeteor::UpdateGameItemTypeCollectionWithOfferIds()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateGameItemTypeCollectionWithOfferIds");

	UOnlineSubsystemMeteor_UpdateGameItemTypeCollectionWithOfferIds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertOfferCurrencyToStorm
// (Native, Static, Public)
// Parameters:
// TEnumAsByte<EOfferCurrency>    Currency                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::STATIC_ConvertOfferCurrencyToStorm(TEnumAsByte<EOfferCurrency> Currency)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertOfferCurrencyToStorm");

	UOnlineSubsystemMeteor_ConvertOfferCurrencyToStorm_Params params;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertOfferCurrencyFromStorm
// (Native, Static, Public)
// Parameters:
// struct FString                 Currency                       (Parm, NeedCtorLink)
// TEnumAsByte<EOfferCurrency>    ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOfferCurrency> UOnlineSubsystemMeteor::STATIC_ConvertOfferCurrencyFromStorm(const struct FString& Currency)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertOfferCurrencyFromStorm");

	UOnlineSubsystemMeteor_ConvertOfferCurrencyFromStorm_Params params;
	params.Currency = Currency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearPurchaseGameBundleCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearPurchaseGameBundleCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearPurchaseGameBundleCompleteDelegate");

	UOnlineSubsystemMeteor_ClearPurchaseGameBundleCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddPurchaseGameBundleCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddPurchaseGameBundleCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddPurchaseGameBundleCompleteDelegate");

	UOnlineSubsystemMeteor_AddPurchaseGameBundleCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPurchaseGameBundleComplete
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// struct FString                 BundleId                       (Parm, NeedCtorLink)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)

void UOnlineSubsystemMeteor::OnPurchaseGameBundleComplete(int TaskID, const struct FString& BundleId, TEnumAsByte<ENetworkErrorCode> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPurchaseGameBundleComplete");

	UOnlineSubsystemMeteor_OnPurchaseGameBundleComplete_Params params;
	params.TaskID = TaskID;
	params.BundleId = BundleId;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameBundleForCharacter
// (Native, Public)
// Parameters:
// struct FString                 BundleId                       (Parm, NeedCtorLink)
// struct FString                 CharacterInstanceId            (Parm, NeedCtorLink)
// TEnumAsByte<EBundleCurrency>   CurrencyType                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::PurchaseGameBundleForCharacter(const struct FString& BundleId, const struct FString& CharacterInstanceId, TEnumAsByte<EBundleCurrency> CurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameBundleForCharacter");

	UOnlineSubsystemMeteor_PurchaseGameBundleForCharacter_Params params;
	params.BundleId = BundleId;
	params.CharacterInstanceId = CharacterInstanceId;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameBundle
// (Native, Public)
// Parameters:
// struct FString                 BundleId                       (Parm, NeedCtorLink)
// TEnumAsByte<EBundleCurrency>   CurrencyType                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::PurchaseGameBundle(const struct FString& BundleId, TEnumAsByte<EBundleCurrency> CurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PurchaseGameBundle");

	UOnlineSubsystemMeteor_PurchaseGameBundle_Params params;
	params.BundleId = BundleId;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameBundleCollectionCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadGameBundleCollectionCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameBundleCollectionCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadGameBundleCollectionCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameBundleCollectionCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadGameBundleCollectionCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameBundleCollectionCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadGameBundleCollectionCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameBundleCollectionComplete
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)

void UOnlineSubsystemMeteor::OnReadGameBundleCollectionComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameBundleCollectionComplete");

	UOnlineSubsystemMeteor_OnReadGameBundleCollectionComplete_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameBundleCollection
// (Native, Public)

void UOnlineSubsystemMeteor::ReadGameBundleCollection()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameBundleCollection");

	UOnlineSubsystemMeteor_ReadGameBundleCollection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameOfferCollectionCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadGameOfferCollectionCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameOfferCollectionCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadGameOfferCollectionCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameOfferCollectionCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadGameOfferCollectionCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameOfferCollectionCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadGameOfferCollectionCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameOfferCollectionComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnReadGameOfferCollectionComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameOfferCollectionComplete");

	UOnlineSubsystemMeteor_OnReadGameOfferCollectionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameOfferCollection
// (Native, Public)

void UOnlineSubsystemMeteor::ReadGameOfferCollection()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameOfferCollection");

	UOnlineSubsystemMeteor_ReadGameOfferCollection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameItemTypeCollectionCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadGameItemTypeCollectionCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameItemTypeCollectionCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadGameItemTypeCollectionCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameItemTypeCollectionCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadGameItemTypeCollectionCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameItemTypeCollectionCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadGameItemTypeCollectionCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameItemTypeCollectionComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnReadGameItemTypeCollectionComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameItemTypeCollectionComplete");

	UOnlineSubsystemMeteor_OnReadGameItemTypeCollectionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameItemTypeCollection
// (Native, Public)

void UOnlineSubsystemMeteor::ReadGameItemTypeCollection()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameItemTypeCollection");

	UOnlineSubsystemMeteor_ReadGameItemTypeCollection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearDeleteGameItemInstanceCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearDeleteGameItemInstanceCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearDeleteGameItemInstanceCompleteDelegate");

	UOnlineSubsystemMeteor_ClearDeleteGameItemInstanceCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddDeleteGameItemInstanceCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddDeleteGameItemInstanceCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddDeleteGameItemInstanceCompleteDelegate");

	UOnlineSubsystemMeteor_AddDeleteGameItemInstanceCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnDeleteGameItemInstanceComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// struct FString                 InstanceID                     (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::OnDeleteGameItemInstanceComplete(bool bWasSuccessful, const struct FUniqueNetId& PlayerID, const struct FString& InstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnDeleteGameItemInstanceComplete");

	UOnlineSubsystemMeteor_OnDeleteGameItemInstanceComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerID = PlayerID;
	params.InstanceID = InstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteGameItemInstance
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FString                 InstanceID                     (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::DeleteGameItemInstance(const struct FString& InstanceID, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteGameItemInstance");

	UOnlineSubsystemMeteor_DeleteGameItemInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadAllUserGameItemStatsCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadAllUserGameItemStatsCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadAllUserGameItemStatsCompletedDelegate");

	UOnlineSubsystemMeteor_ClearReadAllUserGameItemStatsCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadAllUserGameItemStatsCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadAllUserGameItemStatsCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadAllUserGameItemStatsCompletedDelegate");

	UOnlineSubsystemMeteor_AddReadAllUserGameItemStatsCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadAllUserGameItemStatsCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// class UOnlineGameItemInstanceCollection* InstanceCollection             (Parm)

void UOnlineSubsystemMeteor::OnReadAllUserGameItemStatsCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, class UOnlineGameItemInstanceCollection* InstanceCollection)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadAllUserGameItemStatsCompleted");

	UOnlineSubsystemMeteor_OnReadAllUserGameItemStatsCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PlayerID = PlayerID;
	params.InstanceCollection = InstanceCollection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadAllUserGameItemStats
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// class UOnlineGameItemInstanceCollection* InstanceCollection             (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::ReadAllUserGameItemStats(class UOnlineGameItemInstanceCollection* InstanceCollection, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadAllUserGameItemStats");

	UOnlineSubsystemMeteor_ReadAllUserGameItemStats_Params params;
	params.InstanceCollection = InstanceCollection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUserGameItemStatsCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadUserGameItemStatsCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUserGameItemStatsCompletedDelegate");

	UOnlineSubsystemMeteor_ClearReadUserGameItemStatsCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUserGameItemStatsCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadUserGameItemStatsCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUserGameItemStatsCompletedDelegate");

	UOnlineSubsystemMeteor_AddReadUserGameItemStatsCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUserGameItemStatsCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// struct FString                 InstanceID                     (Parm, NeedCtorLink)
// class UOnlinePlayerStats*      Stats                          (Parm)

void UOnlineSubsystemMeteor::OnReadUserGameItemStatsCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, const struct FString& InstanceID, class UOnlinePlayerStats* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUserGameItemStatsCompleted");

	UOnlineSubsystemMeteor_OnReadUserGameItemStatsCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PlayerID = PlayerID;
	params.InstanceID = InstanceID;
	params.Stats = Stats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUserGameItemStats
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FString                 InstanceID                     (Parm, NeedCtorLink)
// class UOnlinePlayerStats*      Stats                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::ReadUserGameItemStats(const struct FString& InstanceID, class UOnlinePlayerStats* Stats, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUserGameItemStats");

	UOnlineSubsystemMeteor_ReadUserGameItemStats_Params params;
	params.InstanceID = InstanceID;
	params.Stats = Stats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearBatchIncrementUserGameItemStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearBatchIncrementUserGameItemStatsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearBatchIncrementUserGameItemStatsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearBatchIncrementUserGameItemStatsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddBatchIncrementUserGameItemStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddBatchIncrementUserGameItemStatsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddBatchIncrementUserGameItemStatsCompleteDelegate");

	UOnlineSubsystemMeteor_AddBatchIncrementUserGameItemStatsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnBatchIncrementUserGameItemStatsComplete
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// TArray<struct FStormUserGameItemStats> StatsArray                     (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::OnBatchIncrementUserGameItemStatsComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, TArray<struct FStormUserGameItemStats> StatsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnBatchIncrementUserGameItemStatsComplete");

	UOnlineSubsystemMeteor_OnBatchIncrementUserGameItemStatsComplete_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.StatsArray = StatsArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.BatchIncrementUserGameItemStats
// (Native, Public)
// Parameters:
// TArray<struct FStormUserGameItemStats> StatsArray                     (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::BatchIncrementUserGameItemStats(TArray<struct FStormUserGameItemStats> StatsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.BatchIncrementUserGameItemStats");

	UOnlineSubsystemMeteor_BatchIncrementUserGameItemStats_Params params;
	params.StatsArray = StatsArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearIncrementUserGameItemStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearIncrementUserGameItemStatsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearIncrementUserGameItemStatsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearIncrementUserGameItemStatsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddIncrementUserGameItemStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddIncrementUserGameItemStatsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddIncrementUserGameItemStatsCompleteDelegate");

	UOnlineSubsystemMeteor_AddIncrementUserGameItemStatsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnIncrementUserGameItemStatsComplete
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// class UOnlineGameItemInstance* Instance                       (Parm)
// class UOnlinePlayerStats*      Stats                          (Parm)

void UOnlineSubsystemMeteor::OnIncrementUserGameItemStatsComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, class UOnlineGameItemInstance* Instance, class UOnlinePlayerStats* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnIncrementUserGameItemStatsComplete");

	UOnlineSubsystemMeteor_OnIncrementUserGameItemStatsComplete_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PlayerID = PlayerID;
	params.Instance = Instance;
	params.Stats = Stats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IncrementUserGameItemStats
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// class UOnlineGameItemInstance* Instance                       (Parm)
// class UOnlinePlayerStats*      Stats                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::IncrementUserGameItemStats(class UOnlineGameItemInstance* Instance, class UOnlinePlayerStats* Stats, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IncrementUserGameItemStats");

	UOnlineSubsystemMeteor_IncrementUserGameItemStats_Params params;
	params.Instance = Instance;
	params.Stats = Stats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearUpdateGameItemInstanceCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearUpdateGameItemInstanceCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearUpdateGameItemInstanceCompleteDelegate");

	UOnlineSubsystemMeteor_ClearUpdateGameItemInstanceCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddUpdateGameItemInstanceCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddUpdateGameItemInstanceCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddUpdateGameItemInstanceCompleteDelegate");

	UOnlineSubsystemMeteor_AddUpdateGameItemInstanceCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnUpdateGameItemInstanceComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// class UOnlineGameItemInstance* Instance                       (Parm)
// TArray<struct FString>         PrefixedAttributesOnly         (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::OnUpdateGameItemInstanceComplete(bool bWasSuccessful, const struct FUniqueNetId& PlayerID, class UOnlineGameItemInstance* Instance, TArray<struct FString> PrefixedAttributesOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnUpdateGameItemInstanceComplete");

	UOnlineSubsystemMeteor_OnUpdateGameItemInstanceComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerID = PlayerID;
	params.Instance = Instance;
	params.PrefixedAttributesOnly = PrefixedAttributesOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateGameItemInstance
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// class UOnlineGameItemInstance* Instance                       (Parm)
// TArray<struct FString>         PrefixedAttributesOnly         (OptionalParm, Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::UpdateGameItemInstance(class UOnlineGameItemInstance* Instance, TArray<struct FString> PrefixedAttributesOnly, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateGameItemInstance");

	UOnlineSubsystemMeteor_UpdateGameItemInstance_Params params;
	params.Instance = Instance;
	params.PrefixedAttributesOnly = PrefixedAttributesOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameItemInstancesCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadGameItemInstancesCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameItemInstancesCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadGameItemInstancesCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameItemInstancesCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadGameItemInstancesCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameItemInstancesCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadGameItemInstancesCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameItemInstancesComplete
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// bool                           bWasSuccessful                 (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// TArray<struct FString>         InstanceIds                    (Parm, NeedCtorLink)
// bool                           bReadChildren                  (Parm)
// class UOnlineGameItemInstanceCollection* ItemInstanceCollection         (Parm)

void UOnlineSubsystemMeteor::OnReadGameItemInstancesComplete(int TaskID, bool bWasSuccessful, const struct FUniqueNetId& PlayerID, TArray<struct FString> InstanceIds, bool bReadChildren, class UOnlineGameItemInstanceCollection* ItemInstanceCollection)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameItemInstancesComplete");

	UOnlineSubsystemMeteor_OnReadGameItemInstancesComplete_Params params;
	params.TaskID = TaskID;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerID = PlayerID;
	params.InstanceIds = InstanceIds;
	params.bReadChildren = bReadChildren;
	params.ItemInstanceCollection = ItemInstanceCollection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameItemInstances
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// TArray<struct FString>         InstanceIds                    (Parm, NeedCtorLink)
// bool                           bReadChildren                  (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::ReadGameItemInstances(TArray<struct FString> InstanceIds, bool bReadChildren, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameItemInstances");

	UOnlineSubsystemMeteor_ReadGameItemInstances_Params params;
	params.InstanceIds = InstanceIds;
	params.bReadChildren = bReadChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameItemInstanceCollectionCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadGameItemInstanceCollectionCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadGameItemInstanceCollectionCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadGameItemInstanceCollectionCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameItemInstanceCollectionCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadGameItemInstanceCollectionCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadGameItemInstanceCollectionCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadGameItemInstanceCollectionCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameItemInstanceCollectionComplete
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasSuccessful                 (Parm)
// class UOnlineGameItemInstanceCollection* ItemInstanceCollection         (Parm)

void UOnlineSubsystemMeteor::OnReadGameItemInstanceCollectionComplete(const struct FUniqueNetId& PlayerID, bool bWasSuccessful, class UOnlineGameItemInstanceCollection* ItemInstanceCollection)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadGameItemInstanceCollectionComplete");

	UOnlineSubsystemMeteor_OnReadGameItemInstanceCollectionComplete_Params params;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;
	params.ItemInstanceCollection = ItemInstanceCollection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameItemInstanceCollection
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// class UOnlineGameItemInstanceCollection* ItemInstanceCollection         (Parm)

void UOnlineSubsystemMeteor::ReadGameItemInstanceCollection(class UOnlineGameItemInstanceCollection* ItemInstanceCollection, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadGameItemInstanceCollection");

	UOnlineSubsystemMeteor_ReadGameItemInstanceCollection_Params params;
	params.ItemInstanceCollection = ItemInstanceCollection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWriteUserSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearWriteUserSettingsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWriteUserSettingsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearWriteUserSettingsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWriteUserSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddWriteUserSettingsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWriteUserSettingsCompleteDelegate");

	UOnlineSubsystemMeteor_AddWriteUserSettingsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWriteUserSettingsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnWriteUserSettingsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWriteUserSettingsComplete");

	UOnlineSubsystemMeteor_OnWriteUserSettingsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteUserSettings
// (Native, HasOptionalParms, Public)
// Parameters:
// class UOnlinePlayerSettings*   Settings                       (Parm)
// TEnumAsByte<ESettingsCategory> SettingsCategory               (OptionalParm, Parm)

void UOnlineSubsystemMeteor::WriteUserSettings(class UOnlinePlayerSettings* Settings, TEnumAsByte<ESettingsCategory> SettingsCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteUserSettings");

	UOnlineSubsystemMeteor_WriteUserSettings_Params params;
	params.Settings = Settings;
	params.SettingsCategory = SettingsCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertSettingsCategoryToStorm
// (Native, Static, Public)
// Parameters:
// TEnumAsByte<ESettingsCategory> SettingsCategory               (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemMeteor::STATIC_ConvertSettingsCategoryToStorm(TEnumAsByte<ESettingsCategory> SettingsCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ConvertSettingsCategoryToStorm");

	UOnlineSubsystemMeteor_ConvertSettingsCategoryToStorm_Params params;
	params.SettingsCategory = SettingsCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUserSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadUserSettingsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUserSettingsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadUserSettingsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUserSettingsCompleteDelegate
// (Defined, Event, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadUserSettingsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUserSettingsCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadUserSettingsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUserSettingsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// class UOnlinePlayerSettings*   Settings                       (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)

void UOnlineSubsystemMeteor::OnReadUserSettingsComplete(bool bWasSuccessful, class UOnlinePlayerSettings* Settings, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUserSettingsComplete");

	UOnlineSubsystemMeteor_OnReadUserSettingsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Settings = Settings;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUserSettings
// (Native, HasOptionalParms, Public)
// Parameters:
// TArray<struct FString>         SettingKeys                    (Parm, NeedCtorLink)
// TEnumAsByte<ESettingsCategory> SettingsCategory               (OptionalParm, Parm)
// struct FUniqueNetId            PlayerID                       (OptionalParm, Parm)

void UOnlineSubsystemMeteor::ReadUserSettings(TArray<struct FString> SettingKeys, TEnumAsByte<ESettingsCategory> SettingsCategory, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUserSettings");

	UOnlineSubsystemMeteor_ReadUserSettings_Params params;
	params.SettingKeys = SettingKeys;
	params.SettingsCategory = SettingsCategory;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWriteUserStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearWriteUserStatsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWriteUserStatsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearWriteUserStatsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWriteUserStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddWriteUserStatsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWriteUserStatsCompleteDelegate");

	UOnlineSubsystemMeteor_AddWriteUserStatsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWriteUserStatsComplete
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// class UOnlinePlayerStats*      PlayerStats                    (Parm)

void UOnlineSubsystemMeteor::OnWriteUserStatsComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, class UOnlinePlayerStats* PlayerStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWriteUserStatsComplete");

	UOnlineSubsystemMeteor_OnWriteUserStatsComplete_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PlayerID = PlayerID;
	params.PlayerStats = PlayerStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteUserStats
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// class UOnlinePlayerStats*      PlayerStats                    (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::WriteUserStats(class UOnlinePlayerStats* PlayerStats, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteUserStats");

	UOnlineSubsystemMeteor_WriteUserStats_Params params;
	params.PlayerStats = PlayerStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUserStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadUserStatsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadUserStatsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadUserStatsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUserStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadUserStatsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadUserStatsCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadUserStatsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUserStatsComplete
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// class UOnlinePlayerStats*      PlayerStats                    (Parm)

void UOnlineSubsystemMeteor::OnReadUserStatsComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, class UOnlinePlayerStats* PlayerStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadUserStatsComplete");

	UOnlineSubsystemMeteor_OnReadUserStatsComplete_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PlayerID = PlayerID;
	params.PlayerStats = PlayerStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUserStats
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// class UOnlinePlayerStats*      PlayerStats                    (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::ReadUserStats(class UOnlinePlayerStats* PlayerStats, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadUserStats");

	UOnlineSubsystemMeteor_ReadUserStats_Params params;
	params.PlayerStats = PlayerStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFindOnlineGameServersCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearFindOnlineGameServersCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFindOnlineGameServersCompletedDelegate");

	UOnlineSubsystemMeteor_ClearFindOnlineGameServersCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFindOnlineGameServersCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddFindOnlineGameServersCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFindOnlineGameServersCompletedDelegate");

	UOnlineSubsystemMeteor_AddFindOnlineGameServersCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFindOnlineGameServersCompleted
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnFindOnlineGameServersCompleted(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFindOnlineGameServersCompleted");

	UOnlineSubsystemMeteor_OnFindOnlineGameServersCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FindOnlineGameServers
// (Native, Public)
// Parameters:
// struct FString                 MapName                        (Parm, NeedCtorLink)
// struct FString                 GameType                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::FindOnlineGameServers(const struct FString& MapName, const struct FString& GameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FindOnlineGameServers");

	UOnlineSubsystemMeteor_FindOnlineGameServers_Params params;
	params.MapName = MapName;
	params.GameType = GameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetLocalAccountNames
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<struct FString>         Accounts                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::GetLocalAccountNames(TArray<struct FString>* Accounts)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetLocalAccountNames");

	UOnlineSubsystemMeteor_GetLocalAccountNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accounts != nullptr)
		*Accounts = params.Accounts;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteLocalAccount
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::DeleteLocalAccount(const struct FString& UserName, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteLocalAccount");

	UOnlineSubsystemMeteor_DeleteLocalAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RenameLocalAccount
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FString                 NewUserName                    (Parm, NeedCtorLink)
// struct FString                 OldUserName                    (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::RenameLocalAccount(const struct FString& NewUserName, const struct FString& OldUserName, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RenameLocalAccount");

	UOnlineSubsystemMeteor_RenameLocalAccount_Params params;
	params.NewUserName = NewUserName;
	params.OldUserName = OldUserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CreateLocalAccount
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::CreateLocalAccount(const struct FString& UserName, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CreateLocalAccount");

	UOnlineSubsystemMeteor_CreateLocalAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearCreateOnlineAccountCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearCreateOnlineAccountCompletedDelegate");

	UOnlineSubsystemMeteor_ClearCreateOnlineAccountCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddCreateOnlineAccountCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddCreateOnlineAccountCompletedDelegate");

	UOnlineSubsystemMeteor_AddCreateOnlineAccountCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnCreateOnlineAccountCompleted
// (Public, Delegate)
// Parameters:
// TEnumAsByte<EOnlineAccountCreateStatus> ErrorStatus                    (Parm)

void UOnlineSubsystemMeteor::OnCreateOnlineAccountCompleted(TEnumAsByte<EOnlineAccountCreateStatus> ErrorStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnCreateOnlineAccountCompleted");

	UOnlineSubsystemMeteor_OnCreateOnlineAccountCompleted_Params params;
	params.ErrorStatus = ErrorStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CreateOnlineAccount
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// struct FString                 EmailAddress                   (Parm, NeedCtorLink)
// struct FString                 ProductKey                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::CreateOnlineAccount(const struct FString& UserName, const struct FString& Password, const struct FString& EmailAddress, const struct FString& ProductKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CreateOnlineAccount");

	UOnlineSubsystemMeteor_CreateOnlineAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;
	params.EmailAddress = EmailAddress;
	params.ProductKey = ProductKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetAchievements
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FAchievementDetails> Achievements                   (Parm, OutParm, NeedCtorLink)
// int                            TitleId                        (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemMeteor::GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetAchievements");

	UOnlineSubsystemMeteor_GetAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadAchievementsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadAchievementsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadAchievementsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadAchievementsCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadAchievementsComplete
// (Public, Delegate)
// Parameters:
// int                            TitleId                        (Parm)

void UOnlineSubsystemMeteor::OnReadAchievementsComplete(int TitleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadAchievementsComplete");

	UOnlineSubsystemMeteor_OnReadAchievementsComplete_Params params;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadAchievements
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (OptionalParm, Parm)
// bool                           bShouldReadText                (OptionalParm, Parm)
// bool                           bShouldReadImages              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadAchievements");

	UOnlineSubsystemMeteor_ReadAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bShouldReadText = bShouldReadText;
	params.bShouldReadImages = bShouldReadImages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearUnlockAchievementCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearUnlockAchievementCompleteDelegate");

	UOnlineSubsystemMeteor_ClearUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddUnlockAchievementCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddUnlockAchievementCompleteDelegate");

	UOnlineSubsystemMeteor_AddUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnUnlockAchievementComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnUnlockAchievementComplete");

	UOnlineSubsystemMeteor_OnUnlockAchievementComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnlockAchievement
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            AchievementId                  (Parm)
// float                          PercentComplete                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnlockAchievement");

	UOnlineSubsystemMeteor_UnlockAchievement_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AchievementId = AchievementId;
	params.PercentComplete = PercentComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteMessage
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            MessageIndex                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteMessage");

	UOnlineSubsystemMeteor_DeleteMessage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnmuteAll
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::UnmuteAll(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnmuteAll");

	UOnlineSubsystemMeteor_UnmuteAll_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.MuteAll
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bAllowFriends                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::MuteAll(unsigned char LocalUserNum, bool bAllowFriends)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.MuteAll");

	UOnlineSubsystemMeteor_MuteAll_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAllowFriends = bAllowFriends;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFriendMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFriendMessageReceivedDelegate");

	UOnlineSubsystemMeteor_ClearFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendMessageReceivedDelegate");

	UOnlineSubsystemMeteor_AddFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFriendMessageReceived
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            SendingPlayer                  (Parm)
// struct FString                 SendingNick                    (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFriendMessageReceived");

	UOnlineSubsystemMeteor_OnFriendMessageReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SendingPlayer = SendingPlayer;
	params.SendingNick = SendingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetFriendMessages
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemMeteor::GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetFriendMessages");

	UOnlineSubsystemMeteor_GetFriendMessages_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendMessages != nullptr)
		*FriendMessages = params.FriendMessages;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearJoinFriendGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearJoinFriendGameCompleteDelegate");

	UOnlineSubsystemMeteor_ClearJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddJoinFriendGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddJoinFriendGameCompleteDelegate");

	UOnlineSubsystemMeteor_AddJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnJoinFriendGameComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnJoinFriendGameComplete");

	UOnlineSubsystemMeteor_OnJoinFriendGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.JoinFriendGame
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.JoinFriendGame");

	UOnlineSubsystemMeteor_JoinFriendGame_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReceivedGameInviteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReceivedGameInviteDelegate");

	UOnlineSubsystemMeteor_ClearReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReceivedGameInviteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReceivedGameInviteDelegate");

	UOnlineSubsystemMeteor_AddReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReceivedGameInvite
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviterName                    (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReceivedGameInvite");

	UOnlineSubsystemMeteor_OnReceivedGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviterName = InviterName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendGameInviteToFriends
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Friends                        (Parm, NeedCtorLink)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendGameInviteToFriends");

	UOnlineSubsystemMeteor_SendGameInviteToFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friends = Friends;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendGameInviteToFriend
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendGameInviteToFriend");

	UOnlineSubsystemMeteor_SendGameInviteToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendMessageToFriend
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SendMessageToFriend");

	UOnlineSubsystemMeteor_SendMessageToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFriendInviteReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFriendInviteReceivedDelegate");

	UOnlineSubsystemMeteor_ClearFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendInviteReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendInviteReceivedDelegate");

	UOnlineSubsystemMeteor_AddFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFriendInviteReceived
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// struct FString                 RequestingNick                 (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFriendInviteReceived");

	UOnlineSubsystemMeteor_OnFriendInviteReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;
	params.RequestingNick = RequestingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RemoveFriend
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            FormerFriend                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RemoveFriend");

	UOnlineSubsystemMeteor_RemoveFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FormerFriend = FormerFriend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DenyFriendInvite
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DenyFriendInvite");

	UOnlineSubsystemMeteor_DenyFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AcceptFriendInvite
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AcceptFriendInvite");

	UOnlineSubsystemMeteor_AcceptFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearAddFriendByNameCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearAddFriendByNameCompleteDelegate");

	UOnlineSubsystemMeteor_ClearAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddAddFriendByNameCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddAddFriendByNameCompleteDelegate");

	UOnlineSubsystemMeteor_AddAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnAddFriendByNameComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnAddFriendByNameComplete");

	UOnlineSubsystemMeteor_OnAddFriendByNameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendByName
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 FriendName                     (Parm, NeedCtorLink)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendByName");

	UOnlineSubsystemMeteor_AddFriendByName_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendName = FriendName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriend
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NewFriend                      (Parm)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriend");

	UOnlineSubsystemMeteor_AddFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewFriend = NewFriend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWritePlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWritePlayerStorageCompleteDelegate");

	UOnlineSubsystemMeteor_ClearWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WritePlayerStorage
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WritePlayerStorage");

	UOnlineSubsystemMeteor_WritePlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetPlayerStorage
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlinePlayerStorage* UOnlineSubsystemMeteor::GetPlayerStorage(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetPlayerStorage");

	UOnlineSubsystemMeteor_GetPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadPlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadPlayerStorageCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadPlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadPlayerStorageCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadPlayerStorageComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadPlayerStorageComplete");

	UOnlineSubsystemMeteor_OnReadPlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadPlayerStorage
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadPlayerStorage");

	UOnlineSubsystemMeteor_ReadPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadPlayerStorageForNetIdCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadPlayerStorageForNetIdCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadPlayerStorageForNetId
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NetId                          (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadPlayerStorageForNetId");

	UOnlineSubsystemMeteor_ReadPlayerStorageForNetId_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NetId = NetId;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadPlayerStorageForNetIdCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadPlayerStorageForNetIdCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadPlayerStorageForNetIdComplete
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadPlayerStorageForNetIdComplete");

	UOnlineSubsystemMeteor_OnReadPlayerStorageForNetIdComplete_Params params;
	params.NetId = NetId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWritePlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWritePlayerStorageCompleteDelegate");

	UOnlineSubsystemMeteor_AddWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWritePlayerStorageComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWritePlayerStorageComplete");

	UOnlineSubsystemMeteor_OnWritePlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetKeyboardInputResults
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  bWasCanceled                   (Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::GetKeyboardInputResults(unsigned char* bWasCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetKeyboardInputResults");

	UOnlineSubsystemMeteor_GetKeyboardInputResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasCanceled != nullptr)
		*bWasCanceled = params.bWasCanceled;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearKeyboardInputDoneDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearKeyboardInputDoneDelegate");

	UOnlineSubsystemMeteor_ClearKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddKeyboardInputDoneDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddKeyboardInputDoneDelegate");

	UOnlineSubsystemMeteor_AddKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnKeyboardInputComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnKeyboardInputComplete");

	UOnlineSubsystemMeteor_OnKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ShowKeyboardUI
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 TitleText                      (Parm, NeedCtorLink)
// struct FString                 DescriptionText                (Parm, NeedCtorLink)
// bool                           bIsPassword                    (OptionalParm, Parm)
// bool                           bShouldValidate                (OptionalParm, Parm)
// struct FString                 DefaultText                    (OptionalParm, Parm, NeedCtorLink)
// int                            MaxResultLength                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ShowKeyboardUI");

	UOnlineSubsystemMeteor_ShowKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.bIsPassword = bIsPassword;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetOnlineStatus
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            StatusId                       (Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (Const, Parm, OutParm, NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (Const, Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemMeteor::SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetOnlineStatus");

	UOnlineSubsystemMeteor_SetOnlineStatus_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatusId = StatusId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalizedStringSettings != nullptr)
		*LocalizedStringSettings = params.LocalizedStringSettings;
	if (Properties != nullptr)
		*Properties = params.Properties;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearStorageDeviceChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearStorageDeviceChangeDelegate");

	UOnlineSubsystemMeteor_ClearStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddStorageDeviceChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddStorageDeviceChangeDelegate");

	UOnlineSubsystemMeteor_AddStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnStorageDeviceChange
// (Public, Delegate)

void UOnlineSubsystemMeteor::OnStorageDeviceChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnStorageDeviceChange");

	UOnlineSubsystemMeteor_OnStorageDeviceChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetLocale
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemMeteor::GetLocale()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetLocale");

	UOnlineSubsystemMeteor_GetLocale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetNATType
// (Defined, Public)
// Parameters:
// TEnumAsByte<ENATType>          ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENATType> UOnlineSubsystemMeteor::GetNATType()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetNATType");

	UOnlineSubsystemMeteor_GetNATType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetServerStatusMessage
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::GetServerStatusMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetServerStatusMessage");

	UOnlineSubsystemMeteor_GetServerStatusMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearServerStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ServerStatusDelegate           (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearServerStatusChangeDelegate(const struct FScriptDelegate& ServerStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearServerStatusChangeDelegate");

	UOnlineSubsystemMeteor_ClearServerStatusChangeDelegate_Params params;
	params.ServerStatusDelegate = ServerStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddServerStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ServerStatusDelegate           (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddServerStatusChangeDelegate(const struct FScriptDelegate& ServerStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddServerStatusChangeDelegate");

	UOnlineSubsystemMeteor_AddServerStatusChangeDelegate_Params params;
	params.ServerStatusDelegate = ServerStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnServerStatusChange
// (Public, Delegate)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ServerStatus                   (Parm)

void UOnlineSubsystemMeteor::OnServerStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ServerStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnServerStatusChange");

	UOnlineSubsystemMeteor_OnServerStatusChange_Params params;
	params.ServerStatus = ServerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetConnectionStatusMessage
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::GetConnectionStatusMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetConnectionStatusMessage");

	UOnlineSubsystemMeteor_GetConnectionStatusMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearConnectionStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearConnectionStatusChangeDelegate");

	UOnlineSubsystemMeteor_ClearConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddConnectionStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddConnectionStatusChangeDelegate");

	UOnlineSubsystemMeteor_AddConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnConnectionStatusChange
// (Public, Delegate)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus               (Parm)

void UOnlineSubsystemMeteor::OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnConnectionStatusChange");

	UOnlineSubsystemMeteor_OnConnectionStatusChange_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsControllerConnected
// (Defined, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsControllerConnected(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsControllerConnected");

	UOnlineSubsystemMeteor_IsControllerConnected_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearControllerChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearControllerChangeDelegate");

	UOnlineSubsystemMeteor_ClearControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddControllerChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddControllerChangeDelegate");

	UOnlineSubsystemMeteor_AddControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnControllerChange
// (Public, Delegate)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bIsConnected                   (Parm)

void UOnlineSubsystemMeteor::OnControllerChange(int ControllerId, bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnControllerChange");

	UOnlineSubsystemMeteor_OnControllerChange_Params params;
	params.ControllerId = ControllerId;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetNetworkNotificationPosition
// (Defined, Public)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> NewPos                         (Parm)

void UOnlineSubsystemMeteor::SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetNetworkNotificationPosition");

	UOnlineSubsystemMeteor_SetNetworkNotificationPosition_Params params;
	params.NewPos = NewPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetNetworkNotificationPosition
// (Defined, Public)
// Parameters:
// TEnumAsByte<ENetworkNotificationPosition> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkNotificationPosition> UOnlineSubsystemMeteor::GetNetworkNotificationPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetNetworkNotificationPosition");

	UOnlineSubsystemMeteor_GetNetworkNotificationPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearExternalUIChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearExternalUIChangeDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearExternalUIChangeDelegate");

	UOnlineSubsystemMeteor_ClearExternalUIChangeDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddExternalUIChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddExternalUIChangeDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddExternalUIChangeDelegate");

	UOnlineSubsystemMeteor_AddExternalUIChangeDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnExternalUIChange
// (Public, Delegate)
// Parameters:
// bool                           bIsOpening                     (Parm)

void UOnlineSubsystemMeteor::OnExternalUIChange(bool bIsOpening)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnExternalUIChange");

	UOnlineSubsystemMeteor_OnExternalUIChange_Params params;
	params.bIsOpening = bIsOpening;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLinkStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLinkStatusChangeDelegate");

	UOnlineSubsystemMeteor_ClearLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLinkStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLinkStatusChangeDelegate");

	UOnlineSubsystemMeteor_AddLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLinkStatusChange
// (Public, Delegate)
// Parameters:
// bool                           bIsConnected                   (Parm)

void UOnlineSubsystemMeteor::OnLinkStatusChange(bool bIsConnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLinkStatusChange");

	UOnlineSubsystemMeteor_OnLinkStatusChange_Params params;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.HasLinkConnection
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::HasLinkConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.HasLinkConnection");

	UOnlineSubsystemMeteor_HasLinkConnection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetPlayerNicknameFromIndex
// (Defined, Event, Public)
// Parameters:
// int                            UserIndex                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::GetPlayerNicknameFromIndex(int UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetPlayerNicknameFromIndex");

	UOnlineSubsystemMeteor_GetPlayerNicknameFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CalcAggregateSkill
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<struct FDouble>         Mus                            (Parm, NeedCtorLink)
// TArray<struct FDouble>         Sigmas                         (Parm, NeedCtorLink)
// struct FDouble                 OutAggregateMu                 (Parm, OutParm)
// struct FDouble                 OutAggregateSigma              (Parm, OutParm)

void UOnlineSubsystemMeteor::CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CalcAggregateSkill");

	UOnlineSubsystemMeteor_CalcAggregateSkill_Params params;
	params.Mus = Mus;
	params.Sigmas = Sigmas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAggregateMu != nullptr)
		*OutAggregateMu = params.OutAggregateMu;
	if (OutAggregateSigma != nullptr)
		*OutAggregateSigma = params.OutAggregateSigma;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterStatGuid
// (Defined, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// struct FString                 ClientStatGuid                 (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterStatGuid");

	UOnlineSubsystemMeteor_RegisterStatGuid_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientStatGuid != nullptr)
		*ClientStatGuid = params.ClientStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetClientStatGuid
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::GetClientStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetClientStatGuid");

	UOnlineSubsystemMeteor_GetClientStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRegisterHostStatGuidCompleteDelegateDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRegisterHostStatGuidCompleteDelegateDelegate");

	UOnlineSubsystemMeteor_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRegisterHostStatGuidCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRegisterHostStatGuidCompleteDelegate");

	UOnlineSubsystemMeteor_AddRegisterHostStatGuidCompleteDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRegisterHostStatGuidComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRegisterHostStatGuidComplete");

	UOnlineSubsystemMeteor_OnRegisterHostStatGuidComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterHostStatGuid
// (Defined, Public, HasOutParms)
// Parameters:
// struct FString                 HostStatGuid                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::RegisterHostStatGuid(struct FString* HostStatGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterHostStatGuid");

	UOnlineSubsystemMeteor_RegisterHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HostStatGuid != nullptr)
		*HostStatGuid = params.HostStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetHostStatGuid
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::GetHostStatGuid()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetHostStatGuid");

	UOnlineSubsystemMeteor_GetHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteOnlinePlayerScores
// (Defined, Public, HasOutParms)
// Parameters:
// struct FName                   SessionName                    (Parm)
// int                            LeaderboardId                  (Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteOnlinePlayerScores");

	UOnlineSubsystemMeteor_WriteOnlinePlayerScores_Params params;
	params.SessionName = SessionName;
	params.LeaderboardId = LeaderboardId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFlushOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFlushOnlineStatsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFlushOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFlushOnlineStatsCompleteDelegate");

	UOnlineSubsystemMeteor_AddFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFlushOnlineStatsComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFlushOnlineStatsComplete");

	UOnlineSubsystemMeteor_OnFlushOnlineStatsComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FlushOnlineStats
// (Defined, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::FlushOnlineStats(const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FlushOnlineStats");

	UOnlineSubsystemMeteor_FlushOnlineStats_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteOnlineStats
// (Defined, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Player                         (Parm)
// class UOnlineStatsWrite*       StatsWrite                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteOnlineStats");

	UOnlineSubsystemMeteor_WriteOnlineStats_Params params;
	params.SessionName = SessionName;
	params.Player = Player;
	params.StatsWrite = StatsWrite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FreeStats
// (Defined, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)

void UOnlineSubsystemMeteor::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.FreeStats");

	UOnlineSubsystemMeteor_FreeStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadOnlineStatsCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadOnlineStatsCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStatsByRankAroundPlayer
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            NumRows                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStatsByRankAroundPlayer");

	UOnlineSubsystemMeteor_ReadOnlineStatsByRankAroundPlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.NumRows = NumRows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStatsByRank
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            StartIndex                     (OptionalParm, Parm)
// int                            NumToRead                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStatsByRank");

	UOnlineSubsystemMeteor_ReadOnlineStatsByRank_Params params;
	params.StatsRead = StatsRead;
	params.StartIndex = StartIndex;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStatsForFriends
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStatsForFriends");

	UOnlineSubsystemMeteor_ReadOnlineStatsForFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStats
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadOnlineStats");

	UOnlineSubsystemMeteor_ReadOnlineStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadOnlineStatsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadOnlineStatsComplete");

	UOnlineSubsystemMeteor_OnReadOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetSpeechRecognitionObject
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class USpeechRecognition*      SpeechRecogObj                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetSpeechRecognitionObject");

	UOnlineSubsystemMeteor_SetSpeechRecognitionObject_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SpeechRecogObj = SpeechRecogObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SelectVocabulary
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            VocabularyId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::SelectVocabulary(unsigned char LocalUserNum, int VocabularyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SelectVocabulary");

	UOnlineSubsystemMeteor_SelectVocabulary_Params params;
	params.LocalUserNum = LocalUserNum;
	params.VocabularyId = VocabularyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRecognitionCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearRecognitionCompleteDelegate");

	UOnlineSubsystemMeteor_ClearRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRecognitionCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddRecognitionCompleteDelegate");

	UOnlineSubsystemMeteor_AddRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRecognitionComplete
// (Public, Delegate)

void UOnlineSubsystemMeteor::OnRecognitionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnRecognitionComplete");

	UOnlineSubsystemMeteor_OnRecognitionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetRecognitionResults
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetRecognitionResults");

	UOnlineSubsystemMeteor_GetRecognitionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Words != nullptr)
		*Words = params.Words;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StopSpeechRecognition
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::StopSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StopSpeechRecognition");

	UOnlineSubsystemMeteor_StopSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StartSpeechRecognition
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::StartSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StartSpeechRecognition");

	UOnlineSubsystemMeteor_StartSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StopNetworkedVoice
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemMeteor::StopNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StopNetworkedVoice");

	UOnlineSubsystemMeteor_StopNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StartNetworkedVoice
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemMeteor::StartNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.StartNetworkedVoice");

	UOnlineSubsystemMeteor_StartNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnmuteRemoteTalker
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bIsSystemWide                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnmuteRemoteTalker");

	UOnlineSubsystemMeteor_UnmuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.MuteRemoteTalker
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bIsSystemWide                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.MuteRemoteTalker");

	UOnlineSubsystemMeteor_MuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetRemoteTalkerPriority
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            Priority                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetRemoteTalkerPriority");

	UOnlineSubsystemMeteor_SetRemoteTalkerPriority_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsHeadsetPresent
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsHeadsetPresent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsHeadsetPresent");

	UOnlineSubsystemMeteor_IsHeadsetPresent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsRemotePlayerTalking
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsRemotePlayerTalking");

	UOnlineSubsystemMeteor_IsRemotePlayerTalking_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsLocalPlayerTalking
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsLocalPlayerTalking(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsLocalPlayerTalking");

	UOnlineSubsystemMeteor_IsLocalPlayerTalking_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnregisterRemoteTalker
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnregisterRemoteTalker");

	UOnlineSubsystemMeteor_UnregisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterRemoteTalker
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::RegisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterRemoteTalker");

	UOnlineSubsystemMeteor_RegisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnregisterLocalTalker
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::UnregisterLocalTalker(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnregisterLocalTalker");

	UOnlineSubsystemMeteor_UnregisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterLocalTalker
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::RegisterLocalTalker(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.RegisterLocalTalker");

	UOnlineSubsystemMeteor_RegisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetFriendsList
// (Defined, HasOptionalParms, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriend>   Friends                        (Parm, OutParm, NeedCtorLink)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemMeteor::GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetFriendsList");

	UOnlineSubsystemMeteor_GetFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadFriendsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadFriendsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadFriendsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadFriendsCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadFriendsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnReadFriendsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadFriendsComplete");

	UOnlineSubsystemMeteor_OnReadFriendsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadFriendsList
// (Defined, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadFriendsList");

	UOnlineSubsystemMeteor_ReadFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemMeteor::ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginStatusChangeDelegate");

	UOnlineSubsystemMeteor_ClearLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemMeteor::AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginStatusChangeDelegate");

	UOnlineSubsystemMeteor_AddLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginStatusChange
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ELoginStatus>      NewStatus                      (Parm)
// struct FUniqueNetId            NewId                          (Parm)

void UOnlineSubsystemMeteor::OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginStatusChange");

	UOnlineSubsystemMeteor_OnLoginStatusChange_Params params;
	params.NewStatus = NewStatus;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWriteProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearWriteProfileSettingsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWriteProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddWriteProfileSettingsCompleteDelegate");

	UOnlineSubsystemMeteor_AddWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWriteProfileSettingsComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnWriteProfileSettingsComplete");

	UOnlineSubsystemMeteor_OnWriteProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteProfileSettings
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.WriteProfileSettings");

	UOnlineSubsystemMeteor_WriteProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetProfileSettings
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineProfileSettings* UOnlineSubsystemMeteor::GetProfileSettings(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetProfileSettings");

	UOnlineSubsystemMeteor_GetProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadProfileSettingsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadProfileSettingsCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadProfileSettingsComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadProfileSettingsComplete");

	UOnlineSubsystemMeteor_OnReadProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadProfileSettings
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadProfileSettings");

	UOnlineSubsystemMeteor_ReadProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFriendsChangeDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearFriendsChangeDelegate");

	UOnlineSubsystemMeteor_ClearFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendsChangeDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddFriendsChangeDelegate");

	UOnlineSubsystemMeteor_AddFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearMutingChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearMutingChangeDelegate");

	UOnlineSubsystemMeteor_ClearMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddMutingChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddMutingChangeDelegate");

	UOnlineSubsystemMeteor_AddMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsGuestLogin
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsGuestLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsGuestLogin");

	UOnlineSubsystemMeteor_IsGuestLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsLocalLogin
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsLocalLogin(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsLocalLogin");

	UOnlineSubsystemMeteor_IsLocalLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginCancelledDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginCancelledDelegate");

	UOnlineSubsystemMeteor_ClearLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginCancelledDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginCancelledDelegate");

	UOnlineSubsystemMeteor_AddLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginChangeDelegate");

	UOnlineSubsystemMeteor_ClearLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginChangeDelegate");

	UOnlineSubsystemMeteor_AddLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ShowFriendsUI
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ShowFriendsUI(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ShowFriendsUI");

	UOnlineSubsystemMeteor_ShowFriendsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsMuted
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsMuted");

	UOnlineSubsystemMeteor_IsMuted_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AreAnyFriends
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FFriendsQuery>   Query                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AreAnyFriends");

	UOnlineSubsystemMeteor_AreAnyFriends_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Query != nullptr)
		*Query = params.Query;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsFriend
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsFriend");

	UOnlineSubsystemMeteor_IsFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanShowPresenceInformation
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemMeteor::CanShowPresenceInformation(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanShowPresenceInformation");

	UOnlineSubsystemMeteor_CanShowPresenceInformation_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanViewPlayerProfiles
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemMeteor::CanViewPlayerProfiles(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanViewPlayerProfiles");

	UOnlineSubsystemMeteor_CanViewPlayerProfiles_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanPurchaseContent
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemMeteor::CanPurchaseContent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanPurchaseContent");

	UOnlineSubsystemMeteor_CanPurchaseContent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanDownloadUserContent
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemMeteor::CanDownloadUserContent(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanDownloadUserContent");

	UOnlineSubsystemMeteor_CanDownloadUserContent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanCommunicate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemMeteor::CanCommunicate(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanCommunicate");

	UOnlineSubsystemMeteor_CanCommunicate_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanPlayOnline
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFeaturePrivilegeLevel> UOnlineSubsystemMeteor::CanPlayOnline(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CanPlayOnline");

	UOnlineSubsystemMeteor_CanPlayOnline_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetPlayerNickname
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::GetPlayerNickname(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetPlayerNickname");

	UOnlineSubsystemMeteor_GetPlayerNickname_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetUniquePlayerId
// (Defined, Public, HasOutParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetUniquePlayerId");

	UOnlineSubsystemMeteor_GetUniquePlayerId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetLoginStatus
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<ELoginStatus>      ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ELoginStatus> UOnlineSubsystemMeteor::GetLoginStatus(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetLoginStatus");

	UOnlineSubsystemMeteor_GetLoginStatus_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLogoutCompletedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLogoutCompletedDelegate");

	UOnlineSubsystemMeteor_ClearLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLogoutCompletedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLogoutCompletedDelegate");

	UOnlineSubsystemMeteor_AddLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLogoutCompleted
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnLogoutCompleted(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLogoutCompleted");

	UOnlineSubsystemMeteor_OnLogoutCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Logout
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::Logout(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Logout");

	UOnlineSubsystemMeteor_Logout_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginFailedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLoginFailedDelegate");

	UOnlineSubsystemMeteor_ClearLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginFailedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLoginFailedDelegate");

	UOnlineSubsystemMeteor_AddLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginFailed
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode                      (Parm)

void UOnlineSubsystemMeteor::OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginFailed");

	UOnlineSubsystemMeteor_OnLoginFailed_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AutoLogin
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::AutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AutoLogin");

	UOnlineSubsystemMeteor_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Login
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 LoginName                      (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// bool                           bWantsLocalOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Login");

	UOnlineSubsystemMeteor_Login_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginName = LoginName;
	params.Password = Password;
	params.bWantsLocalOnly = bWantsLocalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ShowLoginUI
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bShowOnlineOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ShowLoginUI(bool bShowOnlineOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ShowLoginUI");

	UOnlineSubsystemMeteor_ShowLoginUI_Params params;
	params.bShowOnlineOnly = bShowOnlineOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFriendsChange
// (Public, Delegate)

void UOnlineSubsystemMeteor::OnFriendsChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnFriendsChange");

	UOnlineSubsystemMeteor_OnFriendsChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearPlayerTalkingDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearPlayerTalkingDelegate");

	UOnlineSubsystemMeteor_ClearPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddPlayerTalkingDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddPlayerTalkingDelegate");

	UOnlineSubsystemMeteor_AddPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPlayerTalkingStateChange
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            Player                         (Parm)
// bool                           bIsTalking                     (Parm)

void UOnlineSubsystemMeteor::OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnPlayerTalkingStateChange");

	UOnlineSubsystemMeteor_OnPlayerTalkingStateChange_Params params;
	params.Player = Player;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetTitleFileState
// (Defined, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> UOnlineSubsystemMeteor::GetTitleFileState(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetTitleFileState");

	UOnlineSubsystemMeteor_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetTitleFileContents
// (Defined, Public, HasOutParms)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetTitleFileContents");

	UOnlineSubsystemMeteor_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadTitleFileCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearReadTitleFileCompleteDelegate");

	UOnlineSubsystemMeteor_ClearReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadTitleFileCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddReadTitleFileCompleteDelegate");

	UOnlineSubsystemMeteor_AddReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadTitleFile
// (Defined, Public)
// Parameters:
// struct FString                 FileToRead                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::ReadTitleFile(const struct FString& FileToRead)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ReadTitleFile");

	UOnlineSubsystemMeteor_ReadTitleFile_Params params;
	params.FileToRead = FileToRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadTitleFileComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnReadTitleFileComplete");

	UOnlineSubsystemMeteor_OnReadTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnMutingChange
// (Public, Delegate)

void UOnlineSubsystemMeteor::OnMutingChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnMutingChange");

	UOnlineSubsystemMeteor_OnMutingChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginCancelled
// (Public, Delegate)

void UOnlineSubsystemMeteor::OnLoginCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginCancelled");

	UOnlineSubsystemMeteor_OnLoginCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginChange
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemMeteor::OnLoginChange(unsigned char LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLoginChange");

	UOnlineSubsystemMeteor_OnLoginChange_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateServerRanking
// (Native, Public)
// Parameters:
// float                          ServerRanking                  (Parm)

void UOnlineSubsystemMeteor::UpdateServerRanking(float ServerRanking)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateServerRanking");

	UOnlineSubsystemMeteor_UpdateServerRanking_Params params;
	params.ServerRanking = ServerRanking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateServerScore
// (Native, Public)
// Parameters:
// float                          ProgressionScore               (Parm)

void UOnlineSubsystemMeteor::UpdateServerScore(float ProgressionScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateServerScore");

	UOnlineSubsystemMeteor_UpdateServerScore_Params params;
	params.ProgressionScore = ProgressionScore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateServerPilotLevel
// (Native, Public)
// Parameters:
// float                          PilotLevel                     (Parm)

void UOnlineSubsystemMeteor::UpdateServerPilotLevel(float PilotLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateServerPilotLevel");

	UOnlineSubsystemMeteor_UpdateServerPilotLevel_Params params;
	params.PilotLevel = PilotLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateTeamRatings
// (Native, Public)
// Parameters:
// TArray<class APlayerController*> winningTeamPlayers             (Parm, NeedCtorLink)
// TArray<class UOnlinePlayerStats*> winningTeamPlayerStats         (Parm, NeedCtorLink)
// TArray<class APlayerController*> losingTeamPlayers              (Parm, NeedCtorLink)
// TArray<class UOnlinePlayerStats*> losingTeamPlayerStats          (Parm, NeedCtorLink)
// int                            ratingCategory                 (Parm)

void UOnlineSubsystemMeteor::UpdateTeamRatings(TArray<class APlayerController*> winningTeamPlayers, TArray<class UOnlinePlayerStats*> winningTeamPlayerStats, TArray<class APlayerController*> losingTeamPlayers, TArray<class UOnlinePlayerStats*> losingTeamPlayerStats, int ratingCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateTeamRatings");

	UOnlineSubsystemMeteor_UpdateTeamRatings_Params params;
	params.winningTeamPlayers = winningTeamPlayers;
	params.winningTeamPlayerStats = winningTeamPlayerStats;
	params.losingTeamPlayers = losingTeamPlayers;
	params.losingTeamPlayerStats = losingTeamPlayerStats;
	params.ratingCategory = ratingCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CalculateServerAverageRating
// (Native, Public, HasOutParms)
// Parameters:
// TArray<class APlayerReplicationInfo*> sortedPlayers                  (Parm, NeedCtorLink)
// TArray<class UOnlinePlayerStats*> sortedPlayerStats              (Parm, NeedCtorLink)
// float                          avgRating                      (Parm, OutParm)
// float                          avgDeviation                   (Parm, OutParm)
// class APlayerReplicationInfo*  IgnorePlayer                   (Parm)

void UOnlineSubsystemMeteor::CalculateServerAverageRating(TArray<class APlayerReplicationInfo*> sortedPlayers, TArray<class UOnlinePlayerStats*> sortedPlayerStats, class APlayerReplicationInfo* IgnorePlayer, float* avgRating, float* avgDeviation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CalculateServerAverageRating");

	UOnlineSubsystemMeteor_CalculateServerAverageRating_Params params;
	params.sortedPlayers = sortedPlayers;
	params.sortedPlayerStats = sortedPlayerStats;
	params.IgnorePlayer = IgnorePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (avgRating != nullptr)
		*avgRating = params.avgRating;
	if (avgDeviation != nullptr)
		*avgDeviation = params.avgDeviation;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateSoloRatingsServerAverage
// (Native, Public)
// Parameters:
// TArray<class APlayerReplicationInfo*> sortedPlayers                  (Parm, NeedCtorLink)
// TArray<class UOnlinePlayerStats*> sortedPlayerStats              (Parm, NeedCtorLink)
// int                            ratingCategory                 (Parm)

void UOnlineSubsystemMeteor::UpdateSoloRatingsServerAverage(TArray<class APlayerReplicationInfo*> sortedPlayers, TArray<class UOnlinePlayerStats*> sortedPlayerStats, int ratingCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateSoloRatingsServerAverage");

	UOnlineSubsystemMeteor_UpdateSoloRatingsServerAverage_Params params;
	params.sortedPlayers = sortedPlayers;
	params.sortedPlayerStats = sortedPlayerStats;
	params.ratingCategory = ratingCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdatePlayerProgressionInfo
// (Native, Public)
// Parameters:
// TArray<class APlayerReplicationInfo*> Players                        (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::UpdatePlayerProgressionInfo(TArray<class APlayerReplicationInfo*> Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdatePlayerProgressionInfo");

	UOnlineSubsystemMeteor_UpdatePlayerProgressionInfo_Params params;
	params.Players = Players;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetMicrophoneVolume
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOnlineSubsystemMeteor::GetMicrophoneVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetMicrophoneVolume");

	UOnlineSubsystemMeteor_GetMicrophoneVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetMicrophoneVolume
// (Native, Public)
// Parameters:
// float                          Volume                         (Parm)

void UOnlineSubsystemMeteor::SetMicrophoneVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetMicrophoneVolume");

	UOnlineSubsystemMeteor_SetMicrophoneVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetMicrophoneSensitivity
// (Native, Public)
// Parameters:
// int                            sensitivity                    (Parm)

void UOnlineSubsystemMeteor::SetMicrophoneSensitivity(int sensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetMicrophoneSensitivity");

	UOnlineSubsystemMeteor_SetMicrophoneSensitivity_Params params;
	params.sensitivity = sensitivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetSpeakerVolume
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOnlineSubsystemMeteor::GetSpeakerVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetSpeakerVolume");

	UOnlineSubsystemMeteor_GetSpeakerVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetSpeakerVolume
// (Native, Public)
// Parameters:
// float                          Volume                         (Parm)

void UOnlineSubsystemMeteor::SetSpeakerVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.SetSpeakerVolume");

	UOnlineSubsystemMeteor_SetSpeakerVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnValidateClientConnectionComplete
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            UniqueId                       (Parm)
// bool                           bCallSuccessful                (Parm)
// bool                           bClientAccepted                (Parm)

void UOnlineSubsystemMeteor::OnValidateClientConnectionComplete(const struct FUniqueNetId& UniqueId, bool bCallSuccessful, bool bClientAccepted)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnValidateClientConnectionComplete");

	UOnlineSubsystemMeteor_OnValidateClientConnectionComplete_Params params;
	params.UniqueId = UniqueId;
	params.bCallSuccessful = bCallSuccessful;
	params.bClientAccepted = bClientAccepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsUserSpeaking
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsUserSpeaking(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsUserSpeaking");

	UOnlineSubsystemMeteor_IsUserSpeaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateSpeakingUsers
// (Native, Public)

void UOnlineSubsystemMeteor::UpdateSpeakingUsers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UpdateSpeakingUsers");

	UOnlineSubsystemMeteor_UpdateSpeakingUsers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsUserMuted
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::IsUserMuted(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.IsUserMuted");

	UOnlineSubsystemMeteor_IsUserMuted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnmuteUser
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)

void UOnlineSubsystemMeteor::UnmuteUser(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.UnmuteUser");

	UOnlineSubsystemMeteor_UnmuteUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.MuteUser
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)

void UOnlineSubsystemMeteor::MuteUser(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.MuteUser");

	UOnlineSubsystemMeteor_MuteUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetCurrentVoiceChannel
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemMeteor::GetCurrentVoiceChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetCurrentVoiceChannel");

	UOnlineSubsystemMeteor_GetCurrentVoiceChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLeaveVoiceChannelCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearLeaveVoiceChannelCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearLeaveVoiceChannelCompleteDelegate");

	UOnlineSubsystemMeteor_ClearLeaveVoiceChannelCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLeaveVoiceChannelCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddLeaveVoiceChannelCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddLeaveVoiceChannelCompleteDelegate");

	UOnlineSubsystemMeteor_AddLeaveVoiceChannelCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLeaveVoiceChannelComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnLeaveVoiceChannelComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnLeaveVoiceChannelComplete");

	UOnlineSubsystemMeteor_OnLeaveVoiceChannelComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.LeaveVoiceChannel
// (Native, Public)

void UOnlineSubsystemMeteor::LeaveVoiceChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.LeaveVoiceChannel");

	UOnlineSubsystemMeteor_LeaveVoiceChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearJoinVoiceChannelCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearJoinVoiceChannelCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearJoinVoiceChannelCompleteDelegate");

	UOnlineSubsystemMeteor_ClearJoinVoiceChannelCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddJoinVoiceChannelCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddJoinVoiceChannelCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddJoinVoiceChannelCompleteDelegate");

	UOnlineSubsystemMeteor_AddJoinVoiceChannelCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnJoinVoiceChannelComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnJoinVoiceChannelComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnJoinVoiceChannelComplete");

	UOnlineSubsystemMeteor_OnJoinVoiceChannelComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.JoinVoiceChannel
// (Native, Public)
// Parameters:
// struct FString                 channelUri                     (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::JoinVoiceChannel(const struct FString& channelUri)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.JoinVoiceChannel");

	UOnlineSubsystemMeteor_JoinVoiceChannel_Params params;
	params.channelUri = channelUri;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteVoiceChannels
// (Native, Public)
// Parameters:
// struct FString                 channelUri                     (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::DeleteVoiceChannels(const struct FString& channelUri)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.DeleteVoiceChannels");

	UOnlineSubsystemMeteor_DeleteVoiceChannels_Params params;
	params.channelUri = channelUri;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearCreateVoiceChannelsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::ClearCreateVoiceChannelsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.ClearCreateVoiceChannelsCompleteDelegate");

	UOnlineSubsystemMeteor_ClearCreateVoiceChannelsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddCreateVoiceChannelsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::AddCreateVoiceChannelsCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.AddCreateVoiceChannelsCompleteDelegate");

	UOnlineSubsystemMeteor_AddCreateVoiceChannelsCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnCreateVoiceChannelsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemMeteor::OnCreateVoiceChannelsComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnCreateVoiceChannelsComplete");

	UOnlineSubsystemMeteor_OnCreateVoiceChannelsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CreateVoiceChannels
// (Native, Public)
// Parameters:
// TArray<struct FString>         channelUriList                 (Parm, NeedCtorLink)

void UOnlineSubsystemMeteor::CreateVoiceChannels(TArray<struct FString> channelUriList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.CreateVoiceChannels");

	UOnlineSubsystemMeteor_CreateVoiceChannels_Params params;
	params.channelUriList = channelUriList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_ListGames
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 MapName                        (OptionalParm, Parm, NeedCtorLink)
// struct FString                 GameType                       (OptionalParm, Parm, NeedCtorLink)
// TArray<struct FStormGameServerListing> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FStormGameServerListing> UOnlineSubsystemMeteor::Storm_ListGames(const struct FString& MapName, const struct FString& GameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_ListGames");

	UOnlineSubsystemMeteor_Storm_ListGames_Params params;
	params.MapName = MapName;
	params.GameType = GameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_SendEvent
// (Native, Public)
// Parameters:
// class UStormEventObject*       eventObject                    (Parm)

void UOnlineSubsystemMeteor::Storm_SendEvent(class UStormEventObject* eventObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_SendEvent");

	UOnlineSubsystemMeteor_Storm_SendEvent_Params params;
	params.eventObject = eventObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_GetCurrentUserInfo
// (Native, Public)
// Parameters:
// struct FStormUserInfo          ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FStormUserInfo UOnlineSubsystemMeteor::Storm_GetCurrentUserInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_GetCurrentUserInfo");

	UOnlineSubsystemMeteor_Storm_GetCurrentUserInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_IsLoggedIn
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::Storm_IsLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_IsLoggedIn");

	UOnlineSubsystemMeteor_Storm_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_Logout
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::Storm_Logout()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_Logout");

	UOnlineSubsystemMeteor_Storm_Logout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_Login
// (Native, Public)
// Parameters:
// struct FString                 EmailAddress                   (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::Storm_Login(const struct FString& EmailAddress, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_Login");

	UOnlineSubsystemMeteor_Storm_Login_Params params;
	params.EmailAddress = EmailAddress;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_DeleteUser
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::Storm_DeleteUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_DeleteUser");

	UOnlineSubsystemMeteor_Storm_DeleteUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_UpdateUser
// (Native, Public)
// Parameters:
// struct FString                 newPassword                    (Parm, NeedCtorLink)
// struct FStormUserInfo          ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FStormUserInfo UOnlineSubsystemMeteor::Storm_UpdateUser(const struct FString& newPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_UpdateUser");

	UOnlineSubsystemMeteor_Storm_UpdateUser_Params params;
	params.newPassword = newPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_GetUserInfo
// (Native, Public)
// Parameters:
// struct FString                 UserId                         (Parm, NeedCtorLink)
// struct FStormUserInfo          ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FStormUserInfo UOnlineSubsystemMeteor::Storm_GetUserInfo(const struct FString& UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_GetUserInfo");

	UOnlineSubsystemMeteor_Storm_GetUserInfo_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_CreateUser
// (Native, Public)
// Parameters:
// struct FString                 EmailAddress                   (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::Storm_CreateUser(const struct FString& EmailAddress, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_CreateUser");

	UOnlineSubsystemMeteor_Storm_CreateUser_Params params;
	params.EmailAddress = EmailAddress;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_JoinGame
// (Native, Public)
// Parameters:
// struct FStormGameServerListing listing                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::Storm_JoinGame(const struct FStormGameServerListing& listing)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Storm_JoinGame");

	UOnlineSubsystemMeteor_Storm_JoinGame_Params params;
	params.listing = listing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetGlobals
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bWarn                          (OptionalParm, Parm)
// class UOnlineGameItemType*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameItemType* UOnlineSubsystemMeteor::GetGlobals(bool bWarn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.GetGlobals");

	UOnlineSubsystemMeteor_GetGlobals_Params params;
	params.bWarn = bWarn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Exit
// (Defined, Event, Public)

void UOnlineSubsystemMeteor::Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Exit");

	UOnlineSubsystemMeteor_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnExit
// (Native, Public)

void UOnlineSubsystemMeteor::OnExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.OnExit");

	UOnlineSubsystemMeteor_OnExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PostInit
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::PostInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.PostInit");

	UOnlineSubsystemMeteor_PostInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Init
// (Native, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.Init");

	UOnlineSubsystemMeteor_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.InitializeItemDatabaseCache
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::InitializeItemDatabaseCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.InitializeItemDatabaseCache");

	UOnlineSubsystemMeteor_InitializeItemDatabaseCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.InitializeVoiceChannels
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::InitializeVoiceChannels()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.InitializeVoiceChannels");

	UOnlineSubsystemMeteor_InitializeVoiceChannels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.InitializeServerListing
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemMeteor::InitializeServerListing()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineSubsystemMeteor.InitializeServerListing");

	UOnlineSubsystemMeteor_InitializeServerListing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineMatchmakingManager.DumpReservedPlayers
// (Native, Public)

void UOnlineMatchmakingManager::DumpReservedPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineMatchmakingManager.DumpReservedPlayers");

	UOnlineMatchmakingManager_DumpReservedPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineMatchmakingManager.DumpAdvertisements
// (Native, Public)

void UOnlineMatchmakingManager::DumpAdvertisements()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineMatchmakingManager.DumpAdvertisements");

	UOnlineMatchmakingManager_DumpAdvertisements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineMatchmakingManager.ShutDown
// (Native, Public)

void UOnlineMatchmakingManager::ShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineMatchmakingManager.ShutDown");

	UOnlineMatchmakingManager_ShutDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineMatchmakingManager.Init
// (Native, Public)
// Parameters:
// class UOnlineSubsystemMeteor*  OnlineSub                      (Parm)

void UOnlineMatchmakingManager::Init(class UOnlineSubsystemMeteor* OnlineSub)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineMatchmakingManager.Init");

	UOnlineMatchmakingManager_Init_Params params;
	params.OnlineSub = OnlineSub;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyLog.AddEntry
// (Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EPartyLogEntryType> Type                           (Parm)
// struct FUniqueNetId            PlayerID                       (OptionalParm, Parm)
// struct FString                 UserNick                       (OptionalParm, Parm, NeedCtorLink)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)

void UOnlinePartyLog::AddEntry(TEnumAsByte<EPartyLogEntryType> Type, const struct FUniqueNetId& PlayerID, const struct FString& UserNick, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyLog.AddEntry");

	UOnlinePartyLog_AddEntry_Params params;
	params.Type = Type;
	params.PlayerID = PlayerID;
	params.UserNick = UserNick;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyVoiceChannelChanged
// (Public, Delegate)
// Parameters:
// struct FString                 VoiceChannelUri                (Parm, NeedCtorLink)

void UOnlinePartyManager::OnPartyVoiceChannelChanged(const struct FString& VoiceChannelUri)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyVoiceChannelChanged");

	UOnlinePartyManager_OnPartyVoiceChannelChanged_Params params;
	params.VoiceChannelUri = VoiceChannelUri;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.InvitePartyToGame
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            InvitesSent                    (OptionalParm, Parm, OutParm)
// TEnumAsByte<ENetworkErrorCode> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkErrorCode> UOnlinePartyManager::InvitePartyToGame(int* InvitesSent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.InvitePartyToGame");

	UOnlinePartyManager_InvitePartyToGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InvitesSent != nullptr)
		*InvitesSent = params.InvitesSent;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMatchmakingCanceled
// (Public, Delegate)
// Parameters:
// TEnumAsByte<EMMCancelReason>   Reason                         (Parm)

void UOnlinePartyManager::OnPartyMatchmakingCanceled(TEnumAsByte<EMMCancelReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMatchmakingCanceled");

	UOnlinePartyManager_OnPartyMatchmakingCanceled_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMatchmakingStarted
// (Public, Delegate)

void UOnlinePartyManager::OnPartyMatchmakingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMatchmakingStarted");

	UOnlinePartyManager_OnPartyMatchmakingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.NotifyMatchmakingCanceled
// (Native, Public)
// Parameters:
// TEnumAsByte<EMMCancelReason>   Reason                         (Parm)

void UOnlinePartyManager::NotifyMatchmakingCanceled(TEnumAsByte<EMMCancelReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.NotifyMatchmakingCanceled");

	UOnlinePartyManager_NotifyMatchmakingCanceled_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.NotifyMatchmakingStarted
// (Native, Public)

void UOnlinePartyManager::NotifyMatchmakingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.NotifyMatchmakingStarted");

	UOnlinePartyManager_NotifyMatchmakingStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyTravelRequestReceived
// (Public, Delegate)
// Parameters:
// struct FStormGameServerListing GameToJoin                     (Parm, NeedCtorLink)
// bool                           bHasReservation                (Parm)

void UOnlinePartyManager::OnPartyTravelRequestReceived(const struct FStormGameServerListing& GameToJoin, bool bHasReservation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyTravelRequestReceived");

	UOnlinePartyManager_OnPartyTravelRequestReceived_Params params;
	params.GameToJoin = GameToJoin;
	params.bHasReservation = bHasReservation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.TellPartyToTravel
// (Native, Public)
// Parameters:
// struct FStormGameServerListing GameToJoin                     (Parm, NeedCtorLink)
// bool                           bHasReservation                (Parm)

void UOnlinePartyManager::TellPartyToTravel(const struct FStormGameServerListing& GameToJoin, bool bHasReservation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.TellPartyToTravel");

	UOnlinePartyManager_TellPartyToTravel_Params params;
	params.GameToJoin = GameToJoin;
	params.bHasReservation = bHasReservation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyDeploymentCancelled
// (Public, Delegate)
// Parameters:
// TEnumAsByte<EMMCancelReason>   Reason                         (Parm)

void UOnlinePartyManager::OnPartyDeploymentCancelled(TEnumAsByte<EMMCancelReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyDeploymentCancelled");

	UOnlinePartyManager_OnPartyDeploymentCancelled_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.CancelDeploy
// (Native, Public)
// Parameters:
// TEnumAsByte<EMMCancelReason>   Reason                         (Parm)

void UOnlinePartyManager::CancelDeploy(TEnumAsByte<EMMCancelReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.CancelDeploy");

	UOnlinePartyManager_CancelDeploy_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyDeploying
// (Public, Delegate)
// Parameters:
// int                            CountdownTime                  (Parm)

void UOnlinePartyManager::OnPartyDeploying(int CountdownTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyDeploying");

	UOnlinePartyManager_OnPartyDeploying_Params params;
	params.CountdownTime = CountdownTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.DeployParty
// (Native, Public)
// Parameters:
// int                            CountdownTime                  (Parm)

void UOnlinePartyManager::DeployParty(int CountdownTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.DeployParty");

	UOnlinePartyManager_DeployParty_Params params;
	params.CountdownTime = CountdownTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.SendDataToParty
// (Native, Public)
// Parameters:
// struct FString                 DataName                       (Parm, NeedCtorLink)
// struct FString                 DataValue                      (Parm, NeedCtorLink)

void UOnlinePartyManager::SendDataToParty(const struct FString& DataName, const struct FString& DataValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.SendDataToParty");

	UOnlinePartyManager_SendDataToParty_Params params;
	params.DataName = DataName;
	params.DataValue = DataValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMessageReceived
// (Public, Delegate)
// Parameters:
// class UOnlinePartyMemberObject* PartyMemberObject              (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlinePartyManager::OnPartyMessageReceived(class UOnlinePartyMemberObject* PartyMemberObject, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMessageReceived");

	UOnlinePartyManager_OnPartyMessageReceived_Params params;
	params.PartyMemberObject = PartyMemberObject;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnSendMessageToPartyCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlinePartyManager::OnSendMessageToPartyCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnSendMessageToPartyCompleted");

	UOnlinePartyManager_OnSendMessageToPartyCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.SendMessageToParty
// (Native, Public)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePartyManager::SendMessageToParty(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.SendMessageToParty");

	UOnlinePartyManager_SendMessageToParty_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMemberChanged
// (Public, Delegate)
// Parameters:
// class UOnlinePartyMemberObject* PartyMemberObject              (Parm)

void UOnlinePartyManager::OnPartyMemberChanged(class UOnlinePartyMemberObject* PartyMemberObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyMemberChanged");

	UOnlinePartyManager_OnPartyMemberChanged_Params params;
	params.PartyMemberObject = PartyMemberObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyLeaderChanged
// (Public, Delegate)
// Parameters:
// class UOnlinePartyMemberObject* NewLeaderMemberObject          (Parm)

void UOnlinePartyManager::OnPartyLeaderChanged(class UOnlinePartyMemberObject* NewLeaderMemberObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPartyLeaderChanged");

	UOnlinePartyManager_OnPartyLeaderChanged_Params params;
	params.NewLeaderMemberObject = NewLeaderMemberObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPromoteToLeaderCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)

void UOnlinePartyManager::OnPromoteToLeaderCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPromoteToLeaderCompleted");

	UOnlinePartyManager_OnPromoteToLeaderCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.PromoteToLeader
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePartyManager::PromoteToLeader(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.PromoteToLeader");

	UOnlinePartyManager_PromoteToLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPlayerKickedFromParty
// (Public, Delegate)
// Parameters:
// class UOnlinePartyMemberObject* PartyMemberObject              (Parm)

void UOnlinePartyManager::OnPlayerKickedFromParty(class UOnlinePartyMemberObject* PartyMemberObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPlayerKickedFromParty");

	UOnlinePartyManager_OnPlayerKickedFromParty_Params params;
	params.PartyMemberObject = PartyMemberObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnKickFromPartyCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)

void UOnlinePartyManager::OnKickFromPartyCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnKickFromPartyCompleted");

	UOnlinePartyManager_OnKickFromPartyCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.KickFromParty
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePartyManager::KickFromParty(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.KickFromParty");

	UOnlinePartyManager_KickFromParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPlayerLeftParty
// (Public, Delegate)
// Parameters:
// class UOnlinePartyMemberObject* PartyMemberObject              (Parm)

void UOnlinePartyManager::OnPlayerLeftParty(class UOnlinePartyMemberObject* PartyMemberObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPlayerLeftParty");

	UOnlinePartyManager_OnPlayerLeftParty_Params params;
	params.PartyMemberObject = PartyMemberObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnPlayerJoinedParty
// (Public, Delegate)
// Parameters:
// class UOnlinePartyMemberObject* PartyMemberObject              (Parm)
// bool                           bNewMember                     (Parm)

void UOnlinePartyManager::OnPlayerJoinedParty(class UOnlinePartyMemberObject* PartyMemberObject, bool bNewMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnPlayerJoinedParty");

	UOnlinePartyManager_OnPlayerJoinedParty_Params params;
	params.PartyMemberObject = PartyMemberObject;
	params.bNewMember = bNewMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnDeclinePartyInvitationCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FString                 InviteMessageId                (Parm, NeedCtorLink)

void UOnlinePartyManager::OnDeclinePartyInvitationCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& InviteMessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnDeclinePartyInvitationCompleted");

	UOnlinePartyManager_OnDeclinePartyInvitationCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.InviteMessageId = InviteMessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.DeclinePartyInvitation
// (Native, Public)
// Parameters:
// struct FString                 InviteMessageId                (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePartyManager::DeclinePartyInvitation(const struct FString& InviteMessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.DeclinePartyInvitation");

	UOnlinePartyManager_DeclinePartyInvitation_Params params;
	params.InviteMessageId = InviteMessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnAcceptPartyInvitationCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FString                 InviteMessageId                (Parm, NeedCtorLink)
// class UOnlinePartyObject*      PartyObject                    (Parm)

void UOnlinePartyManager::OnAcceptPartyInvitationCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& InviteMessageId, class UOnlinePartyObject* PartyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnAcceptPartyInvitationCompleted");

	UOnlinePartyManager_OnAcceptPartyInvitationCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.InviteMessageId = InviteMessageId;
	params.PartyObject = PartyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.AcceptPartyInvitation
// (Native, Public)
// Parameters:
// struct FString                 InviteMessageId                (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePartyManager::AcceptPartyInvitation(const struct FString& InviteMessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.AcceptPartyInvitation");

	UOnlinePartyManager_AcceptPartyInvitation_Params params;
	params.InviteMessageId = InviteMessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnInvitedToParty
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlinePartyManager::OnInvitedToParty(int TaskID, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnInvitedToParty");

	UOnlinePartyManager_OnInvitedToParty_Params params;
	params.TaskID = TaskID;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnInviteToPartyCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// class UOnlinePartyObject*      PartyObject                    (Parm)

void UOnlinePartyManager::OnInviteToPartyCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, const struct FString& Message, class UOnlinePartyObject* PartyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnInviteToPartyCompleted");

	UOnlinePartyManager_OnInviteToPartyCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PlayerID = PlayerID;
	params.Message = Message;
	params.PartyObject = PartyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.InviteToParty
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePartyManager::InviteToParty(const struct FString& Message, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.InviteToParty");

	UOnlinePartyManager_InviteToParty_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnLeavePartyCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)

void UOnlinePartyManager::OnLeavePartyCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnLeavePartyCompleted");

	UOnlinePartyManager_OnLeavePartyCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.LeaveParty
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePartyManager::LeaveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.LeaveParty");

	UOnlinePartyManager_LeaveParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.OnCreatePartyCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// class UOnlinePartyObject*      PartyObject                    (Parm)

void UOnlinePartyManager::OnCreatePartyCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, class UOnlinePartyObject* PartyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.OnCreatePartyCompleted");

	UOnlinePartyManager_OnCreatePartyCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;
	params.PartyObject = PartyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.CancelCreate
// (Native, Public)

void UOnlinePartyManager::CancelCreate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.CancelCreate");

	UOnlinePartyManager_CancelCreate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.CreateParty
// (Native, Public)
// Parameters:
// struct FString                 GameType                       (Parm, NeedCtorLink)
// bool                           bAreMembersAllowedToInvite     (Parm)
// bool                           bIsInviteOnly                  (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePartyManager::CreateParty(const struct FString& GameType, bool bAreMembersAllowedToInvite, bool bIsInviteOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.CreateParty");

	UOnlinePartyManager_CreateParty_Params params;
	params.GameType = GameType;
	params.bAreMembersAllowedToInvite = bAreMembersAllowedToInvite;
	params.bIsInviteOnly = bIsInviteOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.ShutDown
// (Native, Public)

void UOnlinePartyManager::ShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.ShutDown");

	UOnlinePartyManager_ShutDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManager.Init
// (Native, Public)
// Parameters:
// class UOnlineSubsystem*        OnlineSub                      (Parm)

void UOnlinePartyManager::Init(class UOnlineSubsystem* OnlineSub)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManager.Init");

	UOnlinePartyManager_Init_Params params;
	params.OnlineSub = OnlineSub;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMatchmakingCanceledDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPartyMatchmakingCanceledDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMatchmakingCanceledDelegate");

	UOnlinePartyManagerDelegates_ClearPartyMatchmakingCanceledDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMatchmakingCanceledDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPartyMatchmakingCanceledDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMatchmakingCanceledDelegate");

	UOnlinePartyManagerDelegates_AddPartyMatchmakingCanceledDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMatchmakingStartedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPartyMatchmakingStartedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMatchmakingStartedDelegate");

	UOnlinePartyManagerDelegates_ClearPartyMatchmakingStartedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMatchmakingStartedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPartyMatchmakingStartedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMatchmakingStartedDelegate");

	UOnlinePartyManagerDelegates_AddPartyMatchmakingStartedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyVoiceChannelChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPartyVoiceChannelChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyVoiceChannelChangedDelegate");

	UOnlinePartyManagerDelegates_ClearPartyVoiceChannelChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyVoiceChannelChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPartyVoiceChannelChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyVoiceChannelChangedDelegate");

	UOnlinePartyManagerDelegates_AddPartyVoiceChannelChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyTravelRequestReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPartyTravelRequestReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyTravelRequestReceivedDelegate");

	UOnlinePartyManagerDelegates_ClearPartyTravelRequestReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyTravelRequestReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPartyTravelRequestReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyTravelRequestReceivedDelegate");

	UOnlinePartyManagerDelegates_AddPartyTravelRequestReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyDeploymentCancelledDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPartyDeploymentCancelledDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyDeploymentCancelledDelegate");

	UOnlinePartyManagerDelegates_ClearPartyDeploymentCancelledDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyDeploymentCancelledDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPartyDeploymentCancelledDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyDeploymentCancelledDelegate");

	UOnlinePartyManagerDelegates_AddPartyDeploymentCancelledDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyDeployingDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPartyDeployingDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyDeployingDelegate");

	UOnlinePartyManagerDelegates_ClearPartyDeployingDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyDeployingDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPartyDeployingDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyDeployingDelegate");

	UOnlinePartyManagerDelegates_AddPartyDeployingDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPartyMessageReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMessageReceivedDelegate");

	UOnlinePartyManagerDelegates_ClearPartyMessageReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPartyMessageReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMessageReceivedDelegate");

	UOnlinePartyManagerDelegates_AddPartyMessageReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearSendMessageToPartyCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearSendMessageToPartyCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearSendMessageToPartyCompletedDelegate");

	UOnlinePartyManagerDelegates_ClearSendMessageToPartyCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddSendMessageToPartyCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddSendMessageToPartyCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddSendMessageToPartyCompletedDelegate");

	UOnlinePartyManagerDelegates_AddSendMessageToPartyCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMemberChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPartyMemberChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyMemberChangedDelegate");

	UOnlinePartyManagerDelegates_ClearPartyMemberChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMemberChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPartyMemberChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyMemberChangedDelegate");

	UOnlinePartyManagerDelegates_AddPartyMemberChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyLeaderChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPartyLeaderChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPartyLeaderChangedDelegate");

	UOnlinePartyManagerDelegates_ClearPartyLeaderChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyLeaderChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPartyLeaderChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPartyLeaderChangedDelegate");

	UOnlinePartyManagerDelegates_AddPartyLeaderChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPromoteToLeaderCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPromoteToLeaderCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPromoteToLeaderCompletedDelegate");

	UOnlinePartyManagerDelegates_ClearPromoteToLeaderCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPromoteToLeaderCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPromoteToLeaderCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPromoteToLeaderCompletedDelegate");

	UOnlinePartyManagerDelegates_AddPromoteToLeaderCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPlayerKickedFromPartyDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPlayerKickedFromPartyDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPlayerKickedFromPartyDelegate");

	UOnlinePartyManagerDelegates_ClearPlayerKickedFromPartyDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPlayerKickedFromPartyDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPlayerKickedFromPartyDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPlayerKickedFromPartyDelegate");

	UOnlinePartyManagerDelegates_AddPlayerKickedFromPartyDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearKickFromPartyCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearKickFromPartyCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearKickFromPartyCompletedDelegate");

	UOnlinePartyManagerDelegates_ClearKickFromPartyCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddKickFromPartyCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddKickFromPartyCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddKickFromPartyCompletedDelegate");

	UOnlinePartyManagerDelegates_AddKickFromPartyCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPlayerLeftPartyDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPlayerLeftPartyDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPlayerLeftPartyDelegate");

	UOnlinePartyManagerDelegates_ClearPlayerLeftPartyDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPlayerLeftPartyDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPlayerLeftPartyDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPlayerLeftPartyDelegate");

	UOnlinePartyManagerDelegates_AddPlayerLeftPartyDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPlayerJoinedPartyDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearPlayerJoinedPartyDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearPlayerJoinedPartyDelegate");

	UOnlinePartyManagerDelegates_ClearPlayerJoinedPartyDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPlayerJoinedPartyDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddPlayerJoinedPartyDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddPlayerJoinedPartyDelegate");

	UOnlinePartyManagerDelegates_AddPlayerJoinedPartyDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearDeclinePartyInvitationCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearDeclinePartyInvitationCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearDeclinePartyInvitationCompletedDelegate");

	UOnlinePartyManagerDelegates_ClearDeclinePartyInvitationCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddDeclinePartyInvitationCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddDeclinePartyInvitationCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddDeclinePartyInvitationCompletedDelegate");

	UOnlinePartyManagerDelegates_AddDeclinePartyInvitationCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearAcceptPartyInvitationCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearAcceptPartyInvitationCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearAcceptPartyInvitationCompletedDelegate");

	UOnlinePartyManagerDelegates_ClearAcceptPartyInvitationCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddAcceptPartyInvitationCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddAcceptPartyInvitationCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddAcceptPartyInvitationCompletedDelegate");

	UOnlinePartyManagerDelegates_AddAcceptPartyInvitationCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearInvitedToPartyDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearInvitedToPartyDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearInvitedToPartyDelegate");

	UOnlinePartyManagerDelegates_ClearInvitedToPartyDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddInvitedToPartyDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddInvitedToPartyDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddInvitedToPartyDelegate");

	UOnlinePartyManagerDelegates_AddInvitedToPartyDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearInviteToPartyCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearInviteToPartyCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearInviteToPartyCompletedDelegate");

	UOnlinePartyManagerDelegates_ClearInviteToPartyCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddInviteToPartyCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddInviteToPartyCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddInviteToPartyCompletedDelegate");

	UOnlinePartyManagerDelegates_AddInviteToPartyCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearLeavePartyCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearLeavePartyCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearLeavePartyCompletedDelegate");

	UOnlinePartyManagerDelegates_ClearLeavePartyCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddLeavePartyCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddLeavePartyCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddLeavePartyCompletedDelegate");

	UOnlinePartyManagerDelegates_AddLeavePartyCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearCreatePartyCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::ClearCreatePartyCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.ClearCreatePartyCompletedDelegate");

	UOnlinePartyManagerDelegates_ClearCreatePartyCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddCreatePartyCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlinePartyManagerDelegates::AddCreatePartyCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyManagerDelegates.AddCreatePartyCompletedDelegate");

	UOnlinePartyManagerDelegates_AddCreatePartyCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyObject.GetMemberFromUserNick
// (Native, Public)
// Parameters:
// struct FString                 UserNick                       (Parm, NeedCtorLink)
// class UOnlinePartyMemberObject* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlinePartyMemberObject* UOnlinePartyObject::GetMemberFromUserNick(const struct FString& UserNick)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyObject.GetMemberFromUserNick");

	UOnlinePartyObject_GetMemberFromUserNick_Params params;
	params.UserNick = UserNick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyObject.GetMember
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// class UOnlinePartyMemberObject* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlinePartyMemberObject* UOnlinePartyObject::GetMember(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyObject.GetMember");

	UOnlinePartyObject_GetMember_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyObject.IsLeader
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePartyObject::IsLeader(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyObject.IsLeader");

	UOnlinePartyObject_IsLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyObject.IsMember
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePartyObject::IsMember(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyObject.IsMember");

	UOnlinePartyObject_IsMember_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyObject.GetPartyId
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlinePartyObject::GetPartyId()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyObject.GetPartyId");

	UOnlinePartyObject_GetPartyId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePartyObject.ShutDown
// (Native, Public)

void UOnlinePartyObject::ShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyObject.ShutDown");

	UOnlinePartyObject_ShutDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePartyObject.Init
// (Native, Public)

void UOnlinePartyObject::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePartyObject.Init");

	UOnlinePartyObject_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetKeys
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FString>         SettingKeys                    (Parm, OutParm, NeedCtorLink)

void UOnlinePlayerSettings::GetKeys(TArray<struct FString>* SettingKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetKeys");

	UOnlinePlayerSettings_GetKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SettingKeys != nullptr)
		*SettingKeys = params.SettingKeys;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.Empty
// (Native, Public)

void UOnlinePlayerSettings::Empty()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.Empty");

	UOnlinePlayerSettings_Empty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSetting
// (Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlinePlayerSettings::GetSetting(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSetting");

	UOnlinePlayerSettings_GetSetting_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.IsEmpty
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlayerSettings::IsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.IsEmpty");

	UOnlinePlayerSettings_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.Num
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePlayerSettings::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.Num");

	UOnlinePlayerSettings_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.HasSetting
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlayerSettings::HasSetting(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.HasSetting");

	UOnlinePlayerSettings_HasSetting_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingBool
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// bool                           Default                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlayerSettings::GetSettingBool(const struct FString& Key, bool Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingBool");

	UOnlinePlayerSettings_GetSettingBool_Params params;
	params.Key = Key;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingInt
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            Default                        (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePlayerSettings::GetSettingInt(const struct FString& Key, int Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingInt");

	UOnlinePlayerSettings_GetSettingInt_Params params;
	params.Key = Key;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingFloat
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// float                          Default                        (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOnlinePlayerSettings::GetSettingFloat(const struct FString& Key, float Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingFloat");

	UOnlinePlayerSettings_GetSettingFloat_Params params;
	params.Key = Key;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingString
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 Default                        (OptionalParm, Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlinePlayerSettings::GetSettingString(const struct FString& Key, const struct FString& Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.GetSettingString");

	UOnlinePlayerSettings_GetSettingString_Params params;
	params.Key = Key;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingBool
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// bool                           Value                          (Parm)

void UOnlinePlayerSettings::SetSettingBool(const struct FString& Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingBool");

	UOnlinePlayerSettings_SetSettingBool_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingInt
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            Value                          (Parm)

void UOnlinePlayerSettings::SetSettingInt(const struct FString& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingInt");

	UOnlinePlayerSettings_SetSettingInt_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingFloat
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// float                          Value                          (Parm)

void UOnlinePlayerSettings::SetSettingFloat(const struct FString& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingFloat");

	UOnlinePlayerSettings_SetSettingFloat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingString
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, NeedCtorLink)

void UOnlinePlayerSettings::SetSettingString(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerSettings.SetSettingString");

	UOnlinePlayerSettings_SetSettingString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.MergeAllIncrements
// (Native, Public)

void UOnlinePlayerStats::MergeAllIncrements()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.MergeAllIncrements");

	UOnlinePlayerStats_MergeAllIncrements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.Empty
// (Native, Public)

void UOnlinePlayerStats::Empty()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.Empty");

	UOnlinePlayerStats_Empty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetIntStatIfSmaller
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            Value                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlayerStats::SetIntStatIfSmaller(const struct FString& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.SetIntStatIfSmaller");

	UOnlinePlayerStats_SetIntStatIfSmaller_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetIntStatIfGreater
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            Value                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlayerStats::SetIntStatIfGreater(const struct FString& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.SetIntStatIfGreater");

	UOnlinePlayerStats_SetIntStatIfGreater_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetFloatStatIfSmaller
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// float                          Value                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlayerStats::SetFloatStatIfSmaller(const struct FString& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.SetFloatStatIfSmaller");

	UOnlinePlayerStats_SetFloatStatIfSmaller_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetFloatStatIfGreater
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// float                          Value                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlayerStats::SetFloatStatIfGreater(const struct FString& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.SetFloatStatIfGreater");

	UOnlinePlayerStats_SetFloatStatIfGreater_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.IncrementIntStat
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            Increment                      (Parm)

void UOnlinePlayerStats::IncrementIntStat(const struct FString& Key, int Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.IncrementIntStat");

	UOnlinePlayerStats_IncrementIntStat_Params params;
	params.Key = Key;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.IncrementFloatStat
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// float                          Increment                      (Parm)

void UOnlinePlayerStats::IncrementFloatStat(const struct FString& Key, float Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.IncrementFloatStat");

	UOnlinePlayerStats_IncrementFloatStat_Params params;
	params.Key = Key;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetIntStat
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePlayerStats::GetIntStat(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.GetIntStat");

	UOnlinePlayerStats_GetIntStat_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetFloatStat
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOnlinePlayerStats::GetFloatStat(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.GetFloatStat");

	UOnlinePlayerStats_GetFloatStat_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetIntStat
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            Value                          (Parm)

void UOnlinePlayerStats::SetIntStat(const struct FString& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.SetIntStat");

	UOnlinePlayerStats_SetIntStat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetFloatStat
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// float                          Value                          (Parm)

void UOnlinePlayerStats::SetFloatStat(const struct FString& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.SetFloatStat");

	UOnlinePlayerStats_SetFloatStat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetIncrementAsString
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlinePlayerStats::GetIncrementAsString(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.GetIncrementAsString");

	UOnlinePlayerStats_GetIncrementAsString_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetValueAsFloat
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOnlinePlayerStats::GetValueAsFloat(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.GetValueAsFloat");

	UOnlinePlayerStats_GetValueAsFloat_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetValueAsInt
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePlayerStats::GetValueAsInt(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.GetValueAsInt");

	UOnlinePlayerStats_GetValueAsInt_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.GetValueAsString
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlinePlayerStats::GetValueAsString(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.GetValueAsString");

	UOnlinePlayerStats_GetValueAsString_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.SetInitialValueFromString
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, NeedCtorLink)

void UOnlinePlayerStats::SetInitialValueFromString(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.SetInitialValueFromString");

	UOnlinePlayerStats_SetInitialValueFromString_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.HasStat
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlayerStats::HasStat(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.HasStat");

	UOnlinePlayerStats_HasStat_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.AddFloatStat
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// float                          Value                          (Parm)

void UOnlinePlayerStats::AddFloatStat(const struct FString& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.AddFloatStat");

	UOnlinePlayerStats_AddFloatStat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlinePlayerStats.AddIntStat
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            Value                          (Parm)

void UOnlinePlayerStats::AddIntStat(const struct FString& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlinePlayerStats.AddIntStat");

	UOnlinePlayerStats_AddIntStat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.WritePersistentData
// (Defined, Event, Public, HasDefaults)

void UOnlineRecentPlayersListMeteor::WritePersistentData()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.WritePersistentData");

	UOnlineRecentPlayersListMeteor_WritePersistentData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.DecodeRecentPlayersJson
// (Final, Native, Private)
// Parameters:
// struct FString                 ToDecode                       (Parm, NeedCtorLink)

void UOnlineRecentPlayersListMeteor::DecodeRecentPlayersJson(const struct FString& ToDecode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.DecodeRecentPlayersJson");

	UOnlineRecentPlayersListMeteor_DecodeRecentPlayersJson_Params params;
	params.ToDecode = ToDecode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.OnReadUserSettingsComplete
// (Defined, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// class UOnlinePlayerSettings*   Settings                       (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)

void UOnlineRecentPlayersListMeteor::OnReadUserSettingsComplete(bool bWasSuccessful, class UOnlinePlayerSettings* Settings, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.OnReadUserSettingsComplete");

	UOnlineRecentPlayersListMeteor_OnReadUserSettingsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Settings = Settings;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.ReadPersistantData
// (Defined, Event, Public)

void UOnlineRecentPlayersListMeteor::ReadPersistantData()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.ReadPersistantData");

	UOnlineRecentPlayersListMeteor_ReadPersistantData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.FixupRecentPlayersEx
// (Native, Public)

void UOnlineRecentPlayersListMeteor::FixupRecentPlayersEx()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.FixupRecentPlayersEx");

	UOnlineRecentPlayersListMeteor_FixupRecentPlayersEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.AddPlayerToRecentPlayers
// (Defined, Public, HasDefaults)
// Parameters:
// struct FUniqueNetId            NewPlayer                      (Parm)

void UOnlineRecentPlayersListMeteor::AddPlayerToRecentPlayers(const struct FUniqueNetId& NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.AddPlayerToRecentPlayers");

	UOnlineRecentPlayersListMeteor_AddPlayerToRecentPlayers_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.Init
// (Defined, Event, Public)

void UOnlineRecentPlayersListMeteor::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor.Init");

	UOnlineRecentPlayersListMeteor_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.GetNextUnlockedAchievement
// (Native, Public, HasOutParms)
// Parameters:
// struct FOnlineUnlockedAchievement OutUnlockedAchievement         (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineUnlockedAchievementCollection::GetNextUnlockedAchievement(struct FOnlineUnlockedAchievement* OutUnlockedAchievement)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.GetNextUnlockedAchievement");

	UOnlineUnlockedAchievementCollection_GetNextUnlockedAchievement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutUnlockedAchievement != nullptr)
		*OutUnlockedAchievement = params.OutUnlockedAchievement;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.ResetUnlockedAchievementIterator
// (Native, Public)

void UOnlineUnlockedAchievementCollection::ResetUnlockedAchievementIterator()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.ResetUnlockedAchievementIterator");

	UOnlineUnlockedAchievementCollection_ResetUnlockedAchievementIterator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.IsUnlocked
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            AchievementGuid                (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineUnlockedAchievementCollection::IsUnlocked(struct FUniqueNetId* AchievementGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.IsUnlocked");

	UOnlineUnlockedAchievementCollection_IsUnlocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AchievementGuid != nullptr)
		*AchievementGuid = params.AchievementGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.GetUnlockedAchievement
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            AchievementGuid                (Const, Parm, OutParm)
// struct FOnlineUnlockedAchievement OutUnlockedAchievement         (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineUnlockedAchievementCollection::GetUnlockedAchievement(struct FUniqueNetId* AchievementGuid, struct FOnlineUnlockedAchievement* OutUnlockedAchievement)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.GetUnlockedAchievement");

	UOnlineUnlockedAchievementCollection_GetUnlockedAchievement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AchievementGuid != nullptr)
		*AchievementGuid = params.AchievementGuid;
	if (OutUnlockedAchievement != nullptr)
		*OutUnlockedAchievement = params.OutUnlockedAchievement;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.NumUnlockedAchievements
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineUnlockedAchievementCollection::NumUnlockedAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.NumUnlockedAchievements");

	UOnlineUnlockedAchievementCollection_NumUnlockedAchievements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugReceiveFakeEmergencyMessage
// (Native, Public)

void UOnlineXMPPInterfaceMeteor::DebugReceiveFakeEmergencyMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugReceiveFakeEmergencyMessage");

	UOnlineXMPPInterfaceMeteor_DebugReceiveFakeEmergencyMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugReceiveFakeAntiAddictionMessage
// (Native, Public)
// Parameters:
// int                            AAMessageId                    (Parm)

void UOnlineXMPPInterfaceMeteor::DebugReceiveFakeAntiAddictionMessage(int AAMessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugReceiveFakeAntiAddictionMessage");

	UOnlineXMPPInterfaceMeteor_DebugReceiveFakeAntiAddictionMessage_Params params;
	params.AAMessageId = AAMessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugBulkAddFakeFriends
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            NumFakeFriends                 (OptionalParm, Parm)
// bool                           bFakeOnline                    (OptionalParm, Parm)
// bool                           bGenerateGUIDs                 (OptionalParm, Parm)

void UOnlineXMPPInterfaceMeteor::DebugBulkAddFakeFriends(int NumFakeFriends, bool bFakeOnline, bool bGenerateGUIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugBulkAddFakeFriends");

	UOnlineXMPPInterfaceMeteor_DebugBulkAddFakeFriends_Params params;
	params.NumFakeFriends = NumFakeFriends;
	params.bFakeOnline = bFakeOnline;
	params.bGenerateGUIDs = bGenerateGUIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugAddFakeFriends
// (Native, Public)

void UOnlineXMPPInterfaceMeteor::DebugAddFakeFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugAddFakeFriends");

	UOnlineXMPPInterfaceMeteor_DebugAddFakeFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugPrintMailMessage
// (Native, Public)
// Parameters:
// class UOnlineMailMessage*      MailMessage                    (Parm)

void UOnlineXMPPInterfaceMeteor::DebugPrintMailMessage(class UOnlineMailMessage* MailMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugPrintMailMessage");

	UOnlineXMPPInterfaceMeteor_DebugPrintMailMessage_Params params;
	params.MailMessage = MailMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugPrintFriend
// (Native, Public)
// Parameters:
// struct FOnlineFriend           Friend                         (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::DebugPrintFriend(const struct FOnlineFriend& Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DebugPrintFriend");

	UOnlineXMPPInterfaceMeteor_DebugPrintFriend_Params params;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFindPlayerClan_Update
// (Final, Defined, Private)
// Parameters:
// int                            RequestID                      (Parm)
// bool                           bWasSuccessful                 (Parm)
// class UOnlineClanInfo*         ClanInfo                       (Parm)

void UOnlineXMPPInterfaceMeteor::OnFindPlayerClan_Update(int RequestID, bool bWasSuccessful, class UOnlineClanInfo* ClanInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFindPlayerClan_Update");

	UOnlineXMPPInterfaceMeteor_OnFindPlayerClan_Update_Params params;
	params.RequestID = RequestID;
	params.bWasSuccessful = bWasSuccessful;
	params.ClanInfo = ClanInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.UpdatePlayerClanInfo
// (Final, Defined, Event, Private, HasDefaults)

void UOnlineXMPPInterfaceMeteor::UpdatePlayerClanInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.UpdatePlayerClanInfo");

	UOnlineXMPPInterfaceMeteor_UpdatePlayerClanInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMessageHistory
// (Defined, Public)

void UOnlineXMPPInterfaceMeteor::ClearMessageHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMessageHistory");

	UOnlineXMPPInterfaceMeteor_ClearMessageHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetMessageHistory
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<class UOnlineClanMessage*> Messages                       (Parm, OutParm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::GetMessageHistory(TArray<class UOnlineClanMessage*>* Messages)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetMessageHistory");

	UOnlineXMPPInterfaceMeteor_GetMessageHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Messages != nullptr)
		*Messages = params.Messages;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearReceiveClanMessageDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearReceiveClanMessageDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearReceiveClanMessageDelegate");

	UOnlineXMPPInterfaceMeteor_ClearReceiveClanMessageDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddReceiveClanMessageDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddReceiveClanMessageDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddReceiveClanMessageDelegate");

	UOnlineXMPPInterfaceMeteor_AddReceiveClanMessageDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnReceiveClanMessage
// (Public, Delegate)
// Parameters:
// class UOnlineClanMessage*      Message                        (Parm)

void UOnlineXMPPInterfaceMeteor::OnReceiveClanMessage(class UOnlineClanMessage* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnReceiveClanMessage");

	UOnlineXMPPInterfaceMeteor_OnReceiveClanMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendClanMessage
// (Native, Public)
// Parameters:
// class UOnlineClanMessage*      Message                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::SendClanMessage(class UOnlineClanMessage* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendClanMessage");

	UOnlineXMPPInterfaceMeteor_SendClanMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearClanInviteAcceptedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearClanInviteAcceptedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearClanInviteAcceptedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearClanInviteAcceptedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddClanInviteAcceptedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddClanInviteAcceptedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddClanInviteAcceptedDelegate");

	UOnlineXMPPInterfaceMeteor_AddClanInviteAcceptedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnClanInviteAccepted
// (Public, Delegate)
// Parameters:
// class UOnlineClanInfo*         ClanInfo                       (Parm)

void UOnlineXMPPInterfaceMeteor::OnClanInviteAccepted(class UOnlineClanInfo* ClanInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnClanInviteAccepted");

	UOnlineXMPPInterfaceMeteor_OnClanInviteAccepted_Params params;
	params.ClanInfo = ClanInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AcceptClanInvitation
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            ClanId                         (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::AcceptClanInvitation(struct FUniqueNetId* ClanId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AcceptClanInvitation");

	UOnlineXMPPInterfaceMeteor_AcceptClanInvitation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClanId != nullptr)
		*ClanId = params.ClanId;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearClanInviteReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearClanInviteReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearClanInviteReceivedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearClanInviteReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddClanInviteReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddClanInviteReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddClanInviteReceivedDelegate");

	UOnlineXMPPInterfaceMeteor_AddClanInviteReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnClanInviteReceived
// (Public, Delegate)
// Parameters:
// class UOnlineClanMessage*      Invite                         (Parm)

void UOnlineXMPPInterfaceMeteor::OnClanInviteReceived(class UOnlineClanMessage* Invite)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnClanInviteReceived");

	UOnlineXMPPInterfaceMeteor_OnClanInviteReceived_Params params;
	params.Invite = Invite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.RemovePlayerFromClan
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::RemovePlayerFromClan(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.RemovePlayerFromClan");

	UOnlineXMPPInterfaceMeteor_RemovePlayerFromClan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendClanInvite
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::SendClanInvite(const struct FString& Message, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendClanInvite");

	UOnlineXMPPInterfaceMeteor_SendClanInvite_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFindClanCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearFindClanCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFindClanCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_ClearFindClanCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFindClanCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddFindClanCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFindClanCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_AddFindClanCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFindClanComplete
// (Public, Delegate)
// Parameters:
// int                            RequestID                      (Parm)
// bool                           bWasSuccessful                 (Parm)
// class UOnlineClanInfo*         ClanInfo                       (Parm)

void UOnlineXMPPInterfaceMeteor::OnFindClanComplete(int RequestID, bool bWasSuccessful, class UOnlineClanInfo* ClanInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFindClanComplete");

	UOnlineXMPPInterfaceMeteor_OnFindClanComplete_Params params;
	params.RequestID = RequestID;
	params.bWasSuccessful = bWasSuccessful;
	params.ClanInfo = ClanInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindPlayerClan
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineXMPPInterfaceMeteor::FindPlayerClan(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindPlayerClan");

	UOnlineXMPPInterfaceMeteor_FindPlayerClan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindClanByTag
// (Native, Public)
// Parameters:
// struct FName                   ClanTag                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineXMPPInterfaceMeteor::FindClanByTag(const struct FName& ClanTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindClanByTag");

	UOnlineXMPPInterfaceMeteor_FindClanByTag_Params params;
	params.ClanTag = ClanTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindClanByName
// (Native, Public)
// Parameters:
// struct FName                   ClanName                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineXMPPInterfaceMeteor::FindClanByName(const struct FName& ClanName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindClanByName");

	UOnlineXMPPInterfaceMeteor_FindClanByName_Params params;
	params.ClanName = ClanName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindClanById
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            ClanId                         (Const, Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineXMPPInterfaceMeteor::FindClanById(struct FUniqueNetId* ClanId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.FindClanById");

	UOnlineXMPPInterfaceMeteor_FindClanById_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClanId != nullptr)
		*ClanId = params.ClanId;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearChangeClanLeaderCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearChangeClanLeaderCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearChangeClanLeaderCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_ClearChangeClanLeaderCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddChangeClanLeaderCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddChangeClanLeaderCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddChangeClanLeaderCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_AddChangeClanLeaderCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnChangeClanLeaderComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineXMPPInterfaceMeteor::OnChangeClanLeaderComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnChangeClanLeaderComplete");

	UOnlineXMPPInterfaceMeteor_OnChangeClanLeaderComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ChangeClanLeader
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::ChangeClanLeader(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ChangeClanLeader");

	UOnlineXMPPInterfaceMeteor_ChangeClanLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetClanMember
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FOnlineFriend           Friend                         (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::GetClanMember(struct FUniqueNetId* PlayerID, struct FOnlineFriend* Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetClanMember");

	UOnlineXMPPInterfaceMeteor_GetClanMember_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
	if (Friend != nullptr)
		*Friend = params.Friend;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.IsClanMember
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::IsClanMember(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.IsClanMember");

	UOnlineXMPPInterfaceMeteor_IsClanMember_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMembersChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearMembersChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMembersChangedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearMembersChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMembersChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddMembersChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMembersChangedDelegate");

	UOnlineXMPPInterfaceMeteor_AddMembersChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMembersChanged
// (Public, Delegate)
// Parameters:
// TArray<struct FOnlineFriend>   Members                        (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::OnMembersChanged(TArray<struct FOnlineFriend> Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMembersChanged");

	UOnlineXMPPInterfaceMeteor_OnMembersChanged_Params params;
	params.Members = Members;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetClanMembers
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<struct FOnlineFriend>   Members                        (Parm, OutParm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::GetClanMembers(TArray<struct FOnlineFriend>* Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetClanMembers");

	UOnlineXMPPInterfaceMeteor_GetClanMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Members != nullptr)
		*Members = params.Members;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearReadClanMembersCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearReadClanMembersCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearReadClanMembersCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_ClearReadClanMembersCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddReadClanMembersCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddReadClanMembersCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddReadClanMembersCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_AddReadClanMembersCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnReadClanMembersComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineXMPPInterfaceMeteor::OnReadClanMembersComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnReadClanMembersComplete");

	UOnlineXMPPInterfaceMeteor_OnReadClanMembersComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ReadClanMembers
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::ReadClanMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ReadClanMembers");

	UOnlineXMPPInterfaceMeteor_ReadClanMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearClanInfoChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearClanInfoChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearClanInfoChangedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearClanInfoChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddClanInfoChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddClanInfoChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddClanInfoChangedDelegate");

	UOnlineXMPPInterfaceMeteor_AddClanInfoChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnClanInfoChanged
// (Public, Delegate)
// Parameters:
// class UOnlineClanInfo*         ClanInfo                       (Parm)

void UOnlineXMPPInterfaceMeteor::OnClanInfoChanged(class UOnlineClanInfo* ClanInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnClanInfoChanged");

	UOnlineXMPPInterfaceMeteor_OnClanInfoChanged_Params params;
	params.ClanInfo = ClanInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearChangeClanInfoCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearChangeClanInfoCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearChangeClanInfoCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_ClearChangeClanInfoCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddChangeClanInfoCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddChangeClanInfoCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddChangeClanInfoCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_AddChangeClanInfoCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnChangeClanInfoComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineXMPPInterfaceMeteor::OnChangeClanInfoComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnChangeClanInfoComplete");

	UOnlineXMPPInterfaceMeteor_OnChangeClanInfoComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ChangeClanInfo
// (Native, Public)
// Parameters:
// class UOnlineClanInfo*         ClanInfo                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::ChangeClanInfo(class UOnlineClanInfo* ClanInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ChangeClanInfo");

	UOnlineXMPPInterfaceMeteor_ChangeClanInfo_Params params;
	params.ClanInfo = ClanInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearDestroyClanCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearDestroyClanCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearDestroyClanCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_ClearDestroyClanCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddDestroyClanCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddDestroyClanCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddDestroyClanCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_AddDestroyClanCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnDestroyClanComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineXMPPInterfaceMeteor::OnDestroyClanComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnDestroyClanComplete");

	UOnlineXMPPInterfaceMeteor_OnDestroyClanComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DestroyClan
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::DestroyClan()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DestroyClan");

	UOnlineXMPPInterfaceMeteor_DestroyClan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearCreateClanCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearCreateClanCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearCreateClanCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_ClearCreateClanCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddCreateClanCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddCreateClanCompleteDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddCreateClanCompleteDelegate");

	UOnlineXMPPInterfaceMeteor_AddCreateClanCompleteDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnCreateClanComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineXMPPInterfaceMeteor::OnCreateClanComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnCreateClanComplete");

	UOnlineXMPPInterfaceMeteor_OnCreateClanComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.CreateClan
// (Native, Public)
// Parameters:
// class UOnlineClanInfo*         ClanInfo                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::CreateClan(class UOnlineClanInfo* ClanInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.CreateClan");

	UOnlineXMPPInterfaceMeteor_CreateClan_Params params;
	params.ClanInfo = ClanInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetClanInfo
// (Defined, Public)
// Parameters:
// class UOnlineClanInfo*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineClanInfo* UOnlineXMPPInterfaceMeteor::GetClanInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.GetClanInfo");

	UOnlineXMPPInterfaceMeteor_GetClanInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearAntiAddictionMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearAntiAddictionMessageReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearAntiAddictionMessageReceivedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearAntiAddictionMessageReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddAntiAddictionMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddAntiAddictionMessageReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddAntiAddictionMessageReceivedDelegate");

	UOnlineXMPPInterfaceMeteor_AddAntiAddictionMessageReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnAntiAddictionMessageReceived
// (Public, Delegate)
// Parameters:
// int                            AAMessageId                    (Parm)

void UOnlineXMPPInterfaceMeteor::OnAntiAddictionMessageReceived(int AAMessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnAntiAddictionMessageReceived");

	UOnlineXMPPInterfaceMeteor_OnAntiAddictionMessageReceived_Params params;
	params.AAMessageId = AAMessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageDownloadedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearMailMessageDownloadedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageDownloadedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearMailMessageDownloadedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageDownloadedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddMailMessageDownloadedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageDownloadedDelegate");

	UOnlineXMPPInterfaceMeteor_AddMailMessageDownloadedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageDownloaded
// (Public, Delegate)
// Parameters:
// class UOnlineMailMessage*      MailMessage                    (Parm)

void UOnlineXMPPInterfaceMeteor::OnMailMessageDownloaded(class UOnlineMailMessage* MailMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageDownloaded");

	UOnlineXMPPInterfaceMeteor_OnMailMessageDownloaded_Params params;
	params.MailMessage = MailMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageListRefreshedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearMailMessageListRefreshedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageListRefreshedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearMailMessageListRefreshedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageListRefreshedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddMailMessageListRefreshedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageListRefreshedDelegate");

	UOnlineXMPPInterfaceMeteor_AddMailMessageListRefreshedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageListRefreshed
// (Public, Delegate)

void UOnlineXMPPInterfaceMeteor::OnMailMessageListRefreshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageListRefreshed");

	UOnlineXMPPInterfaceMeteor_OnMailMessageListRefreshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageDeletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearMailMessageDeletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageDeletedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearMailMessageDeletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageDeletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddMailMessageDeletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageDeletedDelegate");

	UOnlineXMPPInterfaceMeteor_AddMailMessageDeletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageDeleted
// (Public, Delegate)
// Parameters:
// class UOnlineMailMessage*      MailMessage                    (Parm)

void UOnlineXMPPInterfaceMeteor::OnMailMessageDeleted(class UOnlineMailMessage* MailMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageDeleted");

	UOnlineXMPPInterfaceMeteor_OnMailMessageDeleted_Params params;
	params.MailMessage = MailMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearMailMessageReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearMailMessageReceivedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearMailMessageReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddMailMessageReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddMailMessageReceivedDelegate");

	UOnlineXMPPInterfaceMeteor_AddMailMessageReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageReceived
// (Public, Delegate)
// Parameters:
// class UOnlineMailMessage*      MailMessage                    (Parm)

void UOnlineXMPPInterfaceMeteor::OnMailMessageReceived(class UOnlineMailMessage* MailMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnMailMessageReceived");

	UOnlineXMPPInterfaceMeteor_OnMailMessageReceived_Params params;
	params.MailMessage = MailMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearSendGameInviteCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearSendGameInviteCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearSendGameInviteCompletedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearSendGameInviteCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddSendGameInviteCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddSendGameInviteCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddSendGameInviteCompletedDelegate");

	UOnlineXMPPInterfaceMeteor_AddSendGameInviteCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnSendGameInviteCompleted
// (Public, Delegate)
// Parameters:
// int                            TaskID                         (Parm)
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)

void UOnlineXMPPInterfaceMeteor::OnSendGameInviteCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnSendGameInviteCompleted");

	UOnlineXMPPInterfaceMeteor_OnSendGameInviteCompleted_Params params;
	params.TaskID = TaskID;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearJoinFriendServerCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearJoinFriendServerCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearJoinFriendServerCompletedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearJoinFriendServerCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddJoinFriendServerCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddJoinFriendServerCompletedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddJoinFriendServerCompletedDelegate");

	UOnlineXMPPInterfaceMeteor_AddJoinFriendServerCompletedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnJoinFriendServerCompleted
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// bool                           bTravelingInitiated            (Parm)

void UOnlineXMPPInterfaceMeteor::OnJoinFriendServerCompleted(TEnumAsByte<ENetworkErrorCode> ErrorCode, bool bTravelingInitiated)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnJoinFriendServerCompleted");

	UOnlineXMPPInterfaceMeteor_OnJoinFriendServerCompleted_Params params;
	params.ErrorCode = ErrorCode;
	params.bTravelingInitiated = bTravelingInitiated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendsListRefreshedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearFriendsListRefreshedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendsListRefreshedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearFriendsListRefreshedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendsListRefreshedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddFriendsListRefreshedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendsListRefreshedDelegate");

	UOnlineXMPPInterfaceMeteor_AddFriendsListRefreshedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendsListRefreshed
// (Public, Delegate)

void UOnlineXMPPInterfaceMeteor::OnFriendsListRefreshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendsListRefreshed");

	UOnlineXMPPInterfaceMeteor_OnFriendsListRefreshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRemovedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearFriendRemovedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRemovedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearFriendRemovedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRemovedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddFriendRemovedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRemovedDelegate");

	UOnlineXMPPInterfaceMeteor_AddFriendRemovedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRemoved
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)

void UOnlineXMPPInterfaceMeteor::OnFriendRemoved(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRemoved");

	UOnlineXMPPInterfaceMeteor_OnFriendRemoved_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendChatMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearFriendChatMessageReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendChatMessageReceivedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearFriendChatMessageReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendChatMessageReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddFriendChatMessageReceivedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendChatMessageReceivedDelegate");

	UOnlineXMPPInterfaceMeteor_AddFriendChatMessageReceivedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendChatMessageReceived
// (Public, Delegate)
// Parameters:
// struct FOnlineFriend           Friend                         (Parm, NeedCtorLink)
// struct FChatMessage            Message                        (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::OnFriendChatMessageReceived(const struct FOnlineFriend& Friend, const struct FChatMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendChatMessageReceived");

	UOnlineXMPPInterfaceMeteor_OnFriendChatMessageReceived_Params params;
	params.Friend = Friend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendPresenceUpdatedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearFriendPresenceUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendPresenceUpdatedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearFriendPresenceUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendPresenceUpdatedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddFriendPresenceUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendPresenceUpdatedDelegate");

	UOnlineXMPPInterfaceMeteor_AddFriendPresenceUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendPresenceUpdated
// (Public, Delegate)
// Parameters:
// struct FOnlineFriend           Friend                         (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::OnFriendPresenceUpdated(const struct FOnlineFriend& Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendPresenceUpdated");

	UOnlineXMPPInterfaceMeteor_OnFriendPresenceUpdated_Params params;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestDeclinedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearFriendRequestDeclinedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestDeclinedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearFriendRequestDeclinedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestDeclinedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddFriendRequestDeclinedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestDeclinedDelegate");

	UOnlineXMPPInterfaceMeteor_AddFriendRequestDeclinedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestDeclined
// (Public, Delegate)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::OnFriendRequestDeclined(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestDeclined");

	UOnlineXMPPInterfaceMeteor_OnFriendRequestDeclined_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestAcceptedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearFriendRequestAcceptedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestAcceptedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearFriendRequestAcceptedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestAcceptedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddFriendRequestAcceptedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestAcceptedDelegate");

	UOnlineXMPPInterfaceMeteor_AddFriendRequestAcceptedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestAccepted
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FString                 MessageId                      (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::OnFriendRequestAccepted(TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestAccepted");

	UOnlineXMPPInterfaceMeteor_OnFriendRequestAccepted_Params params;
	params.ErrorCode = ErrorCode;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestAcceptedByFriendDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearFriendRequestAcceptedByFriendDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestAcceptedByFriendDelegate");

	UOnlineXMPPInterfaceMeteor_ClearFriendRequestAcceptedByFriendDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestAcceptedByFriendDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddFriendRequestAcceptedByFriendDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestAcceptedByFriendDelegate");

	UOnlineXMPPInterfaceMeteor_AddFriendRequestAcceptedByFriendDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestAcceptedByFriend
// (Public, Delegate)
// Parameters:
// struct FOnlineFriend           Friend                         (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::OnFriendRequestAcceptedByFriend(const struct FOnlineFriend& Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestAcceptedByFriend");

	UOnlineXMPPInterfaceMeteor_OnFriendRequestAcceptedByFriend_Params params;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestSentDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearFriendRequestSentDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearFriendRequestSentDelegate");

	UOnlineXMPPInterfaceMeteor_ClearFriendRequestSentDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestSentDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddFriendRequestSentDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddFriendRequestSentDelegate");

	UOnlineXMPPInterfaceMeteor_AddFriendRequestSentDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestSent
// (Public, Delegate)
// Parameters:
// TEnumAsByte<ENetworkErrorCode> ErrorCode                      (Parm)
// struct FString                 Email                          (Parm, NeedCtorLink)
// struct FString                 Callsign                       (Parm, NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (Parm)

void UOnlineXMPPInterfaceMeteor::OnFriendRequestSent(TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& Email, const struct FString& Callsign, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnFriendRequestSent");

	UOnlineXMPPInterfaceMeteor_OnFriendRequestSent_Params params;
	params.ErrorCode = ErrorCode;
	params.Email = Email;
	params.Callsign = Callsign;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearConnectionChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::ClearConnectionChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ClearConnectionChangedDelegate");

	UOnlineXMPPInterfaceMeteor_ClearConnectionChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddConnectionChangedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::AddConnectionChangedDelegate(const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AddConnectionChangedDelegate");

	UOnlineXMPPInterfaceMeteor_AddConnectionChangedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnConnectionChanged
// (Public, Delegate)
// Parameters:
// bool                           bConnected                     (Parm)
// bool                           bConnecting                    (Parm)

void UOnlineXMPPInterfaceMeteor::OnConnectionChanged(bool bConnected, bool bConnecting)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.OnConnectionChanged");

	UOnlineXMPPInterfaceMeteor_OnConnectionChanged_Params params;
	params.bConnected = bConnected;
	params.bConnecting = bConnecting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.MarkMailMessageAsRead
// (Native, Public)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::MarkMailMessageAsRead(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.MarkMailMessageAsRead");

	UOnlineXMPPInterfaceMeteor_MarkMailMessageAsRead_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DeleteMailMessage
// (Native, Public)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::DeleteMailMessage(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DeleteMailMessage");

	UOnlineXMPPInterfaceMeteor_DeleteMailMessage_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DeclineGameInvite
// (Native, Public)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::DeclineGameInvite(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DeclineGameInvite");

	UOnlineXMPPInterfaceMeteor_DeclineGameInvite_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AcceptGameInvite
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// TEnumAsByte<ENetworkErrorCode> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkErrorCode> UOnlineXMPPInterfaceMeteor::AcceptGameInvite(const struct FString& MessageId, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AcceptGameInvite");

	UOnlineXMPPInterfaceMeteor_AcceptGameInvite_Params params;
	params.MessageId = MessageId;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendGameInvite
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineXMPPInterfaceMeteor::SendGameInvite(const struct FString& Message, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendGameInvite");

	UOnlineXMPPInterfaceMeteor_SendGameInvite_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.CancelJoinFriendServer
// (Native, Public)

void UOnlineXMPPInterfaceMeteor::CancelJoinFriendServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.CancelJoinFriendServer");

	UOnlineXMPPInterfaceMeteor_CancelJoinFriendServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.JoinFriendServer
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// TEnumAsByte<ENetworkErrorCode> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkErrorCode> UOnlineXMPPInterfaceMeteor::JoinFriendServer(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.JoinFriendServer");

	UOnlineXMPPInterfaceMeteor_JoinFriendServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.MarkFriendChatMessageAsRead
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FString                 MessageId                      (Parm, NeedCtorLink)
// TEnumAsByte<ENetworkErrorCode> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkErrorCode> UOnlineXMPPInterfaceMeteor::MarkFriendChatMessageAsRead(const struct FString& MessageId, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.MarkFriendChatMessageAsRead");

	UOnlineXMPPInterfaceMeteor_MarkFriendChatMessageAsRead_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendChatMessage
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// TEnumAsByte<ENetworkErrorCode> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkErrorCode> UOnlineXMPPInterfaceMeteor::SendFriendChatMessage(const struct FString& Message, struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendChatMessage");

	UOnlineXMPPInterfaceMeteor_SendFriendChatMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.RemoveFromFriendsList
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            UserId                         (Const, Parm, OutParm)

void UOnlineXMPPInterfaceMeteor::RemoveFromFriendsList(struct FUniqueNetId* UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.RemoveFromFriendsList");

	UOnlineXMPPInterfaceMeteor_RemoveFromFriendsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserId != nullptr)
		*UserId = params.UserId;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DeclineFriendRequest
// (Native, Public)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::DeclineFriendRequest(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.DeclineFriendRequest");

	UOnlineXMPPInterfaceMeteor_DeclineFriendRequest_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AcceptFriendRequest
// (Native, Public)
// Parameters:
// struct FString                 MessageId                      (Parm, NeedCtorLink)
// TEnumAsByte<ENetworkErrorCode> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENetworkErrorCode> UOnlineXMPPInterfaceMeteor::AcceptFriendRequest(const struct FString& MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.AcceptFriendRequest");

	UOnlineXMPPInterfaceMeteor_AcceptFriendRequest_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendRequestFromCallsign
// (Native, Public)
// Parameters:
// struct FString                 Callsign                       (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::SendFriendRequestFromCallsign(const struct FString& Callsign)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendRequestFromCallsign");

	UOnlineXMPPInterfaceMeteor_SendFriendRequestFromCallsign_Params params;
	params.Callsign = Callsign;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendRequestFromEmail
// (Native, Public)
// Parameters:
// struct FString                 Email                          (Parm, NeedCtorLink)

void UOnlineXMPPInterfaceMeteor::SendFriendRequestFromEmail(const struct FString& Email)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendRequestFromEmail");

	UOnlineXMPPInterfaceMeteor_SendFriendRequestFromEmail_Params params;
	params.Email = Email;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendRequestFromUserId
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)

void UOnlineXMPPInterfaceMeteor::SendFriendRequestFromUserId(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.SendFriendRequestFromUserId");

	UOnlineXMPPInterfaceMeteor_SendFriendRequestFromUserId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.IsInFriendsList
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineXMPPInterfaceMeteor::IsInFriendsList(struct FUniqueNetId* PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.IsInFriendsList");

	UOnlineXMPPInterfaceMeteor_IsInFriendsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.Disconnect
// (Native, Public)

void UOnlineXMPPInterfaceMeteor::Disconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.Disconnect");

	UOnlineXMPPInterfaceMeteor_Disconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.Connect
// (Native, Public)

void UOnlineXMPPInterfaceMeteor::Connect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.Connect");

	UOnlineXMPPInterfaceMeteor_Connect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ShutDown
// (Final, Native, Private)

void UOnlineXMPPInterfaceMeteor::ShutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.ShutDown");

	UOnlineXMPPInterfaceMeteor_ShutDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.Init
// (Final, Native, Private)
// Parameters:
// class UOnlineSubsystemMeteor*  OnlineSubsystem                (Parm)

void UOnlineXMPPInterfaceMeteor::Init(class UOnlineSubsystemMeteor* OnlineSubsystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor.Init");

	UOnlineXMPPInterfaceMeteor_Init_Params params;
	params.OnlineSubsystem = OnlineSubsystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.AddFakeReservation
// (Native, HasOptionalParms, Public)
// Parameters:
// int                            Glicko1                        (Parm)
// int                            Level1                         (Parm)
// int                            MatchScore1                    (Parm)
// int                            Glicko2                        (OptionalParm, Parm)
// int                            Level2                         (OptionalParm, Parm)
// int                            MatchScore2                    (OptionalParm, Parm)
// int                            Glicko3                        (OptionalParm, Parm)
// int                            Level3                         (OptionalParm, Parm)
// int                            MatchScore3                    (OptionalParm, Parm)

void UPartyBeaconHostMeteor::AddFakeReservation(int Glicko1, int Level1, int MatchScore1, int Glicko2, int Level2, int MatchScore2, int Glicko3, int Level3, int MatchScore3)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.AddFakeReservation");

	UPartyBeaconHostMeteor_AddFakeReservation_Params params;
	params.Glicko1 = Glicko1;
	params.Level1 = Level1;
	params.MatchScore1 = MatchScore1;
	params.Glicko2 = Glicko2;
	params.Level2 = Level2;
	params.MatchScore2 = MatchScore2;
	params.Glicko3 = Glicko3;
	params.Level3 = Level3;
	params.MatchScore3 = MatchScore3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.DumpReservations
// (Native, Public)

void UPartyBeaconHostMeteor::DumpReservations()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.DumpReservations");

	UPartyBeaconHostMeteor_DumpReservations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.UpdatePlayerScore
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            Score                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconHostMeteor::UpdatePlayerScore(const struct FUniqueNetId& PlayerID, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.UpdatePlayerScore");

	UPartyBeaconHostMeteor_UpdatePlayerScore_Params params;
	params.PlayerID = PlayerID;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.UpdatePartyReservationTeam
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (Parm)
// int                            TeamIndex                      (Parm)
// bool                           bForceUpdate                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconHostMeteor::UpdatePartyReservationTeam(const struct FUniqueNetId& PartyLeader, int TeamIndex, bool bForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.UpdatePartyReservationTeam");

	UPartyBeaconHostMeteor_UpdatePartyReservationTeam_Params params;
	params.PartyLeader = PartyLeader;
	params.TeamIndex = TeamIndex;
	params.bForceUpdate = bForceUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.SplitPartyReservation
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            TeamIndex                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconHostMeteor::SplitPartyReservation(const struct FUniqueNetId& PlayerID, int TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.SplitPartyReservation");

	UPartyBeaconHostMeteor_SplitPartyReservation_Params params;
	params.PlayerID = PlayerID;
	params.TeamIndex = TeamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.ReconfigureTeamAndPlayerCount
// (Native, Public)
// Parameters:
// int                            InNumTeams                     (Parm)
// int                            InNumPlayersPerTeam            (Parm)
// int                            InNumReservations              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconHostMeteor::ReconfigureTeamAndPlayerCount(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.ReconfigureTeamAndPlayerCount");

	UPartyBeaconHostMeteor_ReconfigureTeamAndPlayerCount_Params params;
	params.InNumTeams = InNumTeams;
	params.InNumPlayersPerTeam = InNumPlayersPerTeam;
	params.InNumReservations = InNumReservations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.RebalancePendingTeamAssignments
// (Native, Public)

void UPartyBeaconHostMeteor::RebalancePendingTeamAssignments()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.RebalancePendingTeamAssignments");

	UPartyBeaconHostMeteor_RebalancePendingTeamAssignments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.RebalanceTeamAssignments
// (Native, Public)

void UPartyBeaconHostMeteor::RebalanceTeamAssignments()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.RebalanceTeamAssignments");

	UPartyBeaconHostMeteor_RebalanceTeamAssignments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.HandlePlayerLogout
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bMaintainParty                 (Parm)

void UPartyBeaconHostMeteor::HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.HandlePlayerLogout");

	UPartyBeaconHostMeteor_HandlePlayerLogout_Params params;
	params.PlayerID = PlayerID;
	params.bMaintainParty = bMaintainParty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetPartyTotalXpLevel
// (Native, Public)
// Parameters:
// struct FPartyReservation       Reservation                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPartyBeaconHostMeteor::GetPartyTotalXpLevel(const struct FPartyReservation& Reservation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetPartyTotalXpLevel");

	UPartyBeaconHostMeteor_GetPartyTotalXpLevel_Params params;
	params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetPartyTotalSkill
// (Native, Public)
// Parameters:
// struct FPartyReservation       Reservation                    (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPartyBeaconHostMeteor::GetPartyTotalSkill(const struct FPartyReservation& Reservation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetPartyTotalSkill");

	UPartyBeaconHostMeteor_GetPartyTotalSkill_Params params;
	params.Reservation = Reservation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetTeamForCurrentPlayer
// (Native, Public)
// Parameters:
// struct FUniqueNetId            Player                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPartyBeaconHostMeteor::GetTeamForCurrentPlayer(const struct FUniqueNetId& Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetTeamForCurrentPlayer");

	UPartyBeaconHostMeteor_GetTeamForCurrentPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetExistingReservation
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            Player                         (Const, Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPartyBeaconHostMeteor::GetExistingReservation(struct FUniqueNetId* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetExistingReservation");

	UPartyBeaconHostMeteor_GetExistingReservation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetNumPlayersOnTeamWrapper
// (Native, Public)
// Parameters:
// int                            I                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPartyBeaconHostMeteor::GetNumPlayersOnTeamWrapper(int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.PartyBeaconHostMeteor.GetNumPlayersOnTeamWrapper");

	UPartyBeaconHostMeteor_GetNumPlayersOnTeamWrapper_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemMeteor.StormEventObject.AddData
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, CoerceParm, NeedCtorLink)

void UStormEventObject::AddData(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.StormEventObject.AddData");

	UStormEventObject_AddData_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemMeteor.StormEventObject.DumpEventData
// (Final, Event, HasOptionalParms, Public)
// Parameters:
// struct FName                   LogPrefix                      (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UStormEventObject::DumpEventData(const struct FName& LogPrefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemMeteor.StormEventObject.DumpEventData");

	UStormEventObject_DumpEventData_Params params;
	params.LogPrefix = LogPrefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
