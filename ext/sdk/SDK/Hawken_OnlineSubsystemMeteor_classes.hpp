#pragma once

// Hawken (1.5.3.142579) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemMeteor.OnlineAccountManager
// 0x0018 (0x0054 - 0x003C)
class UOnlineAccountManager : public UObject
{
public:
	class UOnlineSubsystemMeteor*                      MeteorOSS;                                                // 0x003C(0x0004) (Transient)
	struct FString                                     OnlineAccountObjectClassName;                             // 0x0040(0x000C) (Config, NeedCtorLink)
	class UOnlineAccountObject*                        LocalPlayerAccount;                                       // 0x004C(0x0004) (Const)
	class UOnlineAccountManagerDelegates*              Delegates;                                                // 0x0050(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineAccountManager");
		return ptr;
	}


	void ShutDown();
	void Init(class UOnlineSubsystem* OnlineSub);
};


// Class OnlineSubsystemMeteor.OnlineAccountManagerDelegates
// 0x0000 (0x003C - 0x003C)
class UOnlineAccountManagerDelegates : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineAccountManagerDelegates");
		return ptr;
	}

};


// Class OnlineSubsystemMeteor.OnlineAccountObject
// 0x00C4 (0x0100 - 0x003C)
class UOnlineAccountObject : public UObject
{
public:
	class UOnlineAccountManager*                       AccountManager;                                           // 0x003C(0x0004) (Const, Transient)
	TArray<struct FUniqueNetId>                        UnlockingAchievementIds;                                  // 0x0040(0x000C) (NeedCtorLink)
	struct FString                                     EmailAddress;                                             // 0x004C(0x000C) (Const, NeedCtorLink)
	struct FString                                     PlayerName;                                               // 0x0058(0x000C) (Const, NeedCtorLink)
	struct FString                                     SteamName;                                                // 0x0064(0x000C) (Const, NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // 0x0070(0x0010) (Const)
	struct FUniqueNetId                                SteamID;                                                  // 0x0080(0x0010) (Const)
	TArray<struct FString>                             Roles;                                                    // 0x0090(0x000C) (Const, NeedCtorLink)
	int                                                FailedLoginAttempts;                                      // 0x009C(0x0004) (Const)
	struct FString                                     CreationTime;                                             // 0x00A0(0x000C) (Const, NeedCtorLink)
	struct FString                                     LastPasswordChangeTime;                                   // 0x00AC(0x000C) (Const, NeedCtorLink)
	struct FString                                     LastLoginTime;                                            // 0x00B8(0x000C) (Const, NeedCtorLink)
	struct FString                                     LastLogoutTime;                                           // 0x00C4(0x000C) (Const, NeedCtorLink)
	struct FString                                     LastUpdateTime;                                           // 0x00D0(0x000C) (Const, NeedCtorLink)
	float                                              AntiAddictionModifierNumber;                              // 0x00DC(0x0004) (Const)
	class UOnlineGameItemInstanceCollection*           ItemInstanceCollection;                                   // 0x00E0(0x0004) (Const)
	class UOnlineUnlockedAchievementCollection*        UnlockedAchievementCollection;                            // 0x00E4(0x0004) (Const)
	class UOnlinePlayerStats*                          Stats;                                                    // 0x00E8(0x0004) (Const)
	int                                                MeteorPoints;                                             // 0x00EC(0x0004) (Const)
	int                                                HawkenPoints;                                             // 0x00F0(0x0004) (Const)
	TArray<struct FString>                             ChatLog;                                                  // 0x00F4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineAccountObject");
		return ptr;
	}


	void SetUniqueId(const struct FUniqueNetId& NewUniqueId);
	void MarkAchievementAsUnlocked(class UOnlineAchievementObject* AchievementObject);
	bool HasRole(const struct FString& Role);
	void ShutDown();
	void Init(class UOnlineAccountManager* Manager);
};


// Class OnlineSubsystemMeteor.OnlineAccountObjectDelegates
// 0x0000 (0x003C - 0x003C)
class UOnlineAccountObjectDelegates : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineAccountObjectDelegates");
		return ptr;
	}

};


// Class OnlineSubsystemMeteor.OnlineAchievementCollection
// 0x0041 (0x007D - 0x003C)
class UOnlineAchievementCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlineAchievementCollection.AchievementsMap
	struct FPointer                                    AchievementIterator;                                      // 0x0078(0x0004) (Native, Transient)
	TEnumAsByte<EAchievementCollectionState>           CollectionState;                                          // 0x007C(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineAchievementCollection");
		return ptr;
	}


	bool GetNextAchievement(class UOnlineAchievementObject** Achievement);
	void ResetAchievementIterator();
	void AddAchievements(class UOnlineAchievementCollection* Achievements);
	void SetAchievement(class UOnlineAchievementObject* Achievement, struct FUniqueNetId* AchievementId);
	class UOnlineAchievementObject* GetAchievement(struct FUniqueNetId* AchievementId);
	int NumAchievements();
};


// Class OnlineSubsystemMeteor.OnlineAchievementObject
// 0x00C0 (0x00FC - 0x003C)
class UOnlineAchievementObject : public UObject
{
public:
	struct FUniqueNetId                                AchievementGuid;                                          // 0x003C(0x0010) (Const)
	TEnumAsByte<EOnlineAchievementType>                AchievementType;                                          // 0x004C(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	unsigned long                                      bActive : 1;                                              // 0x0050(0x0004) (Const)
	unsigned long                                      bHideWhenLocked : 1;                                      // 0x0050(0x0004) (Const)
	unsigned long                                      bHackable : 1;                                            // 0x0050(0x0004) (Const)
	struct FString                                     Title;                                                    // 0x0054(0x000C) (Const, NeedCtorLink)
	struct FString                                     ImageId;                                                  // 0x0060(0x000C) (Const, NeedCtorLink)
	struct FString                                     LockedDescription;                                        // 0x006C(0x000C) (Const, NeedCtorLink)
	struct FString                                     UnlockedDescription;                                      // 0x0078(0x000C) (Const, NeedCtorLink)
	struct FString                                     DisplayUnits;                                             // 0x0084(0x000C) (Const, NeedCtorLink)
	float                                              DisplayUnitsDivider;                                      // 0x0090(0x0004) (Const)
	int                                                DiplaySortOrder;                                          // 0x0094(0x0004) (Const)
	struct FString                                     DisplayCategories;                                        // 0x0098(0x000C) (Const, NeedCtorLink)
	struct FString                                     ConditionStatThreshold;                                   // 0x00A4(0x000C) (Const, NeedCtorLink)
	int                                                ConditionStatThresholdValue;                              // 0x00B0(0x0004) (Const)
	TArray<struct FString>                             RewardOfferIds;                                           // 0x00B4(0x000C) (Const, NeedCtorLink)
	TArray<struct FAchievementStatReward>              RewardGameItemStats;                                      // 0x00C0(0x000C) (Const, NeedCtorLink)
	TArray<struct FAchievementStatReward>              RewardPlayerStats;                                        // 0x00CC(0x000C) (Const, NeedCtorLink)
	int                                                RewardHC;                                                 // 0x00D8(0x0004) (Const)
	int                                                RewardMC;                                                 // 0x00DC(0x0004) (Const)
	int                                                RewardAP;                                                 // 0x00E0(0x0004) (Const)
	struct FString                                     CountryCode;                                              // 0x00E4(0x000C) (Const, NeedCtorLink)
	TArray<struct FAchievementDeveloperData>           DeveloperData;                                            // 0x00F0(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineAchievementObject");
		return ptr;
	}


	void CopyFrom(class UOnlineAchievementObject* AchievementObject);
};


// Class OnlineSubsystemMeteor.OnlineEventTracking
// 0x0000 (0x003C - 0x003C)
class UOnlineEventTracking : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineEventTracking");
		return ptr;
	}


	void STATIC_SendEvent_PlayerExitClient();
	void STATIC_SendEvent_PlayerLoggedIn(class AController* Player, const struct FString& GameVersion, const struct FString& CommandLine);
	void STATIC_SendEvent_WriteGameItemStats(const struct FString& InstanceID, TEnumAsByte<ENetworkErrorCode> ErrorCode, int TryCount, struct FUniqueNetId* PlayerID);
	void STATIC_SendEvent_WriteUserStats(TEnumAsByte<ENetworkErrorCode> ErrorCode, int TryCount, struct FUniqueNetId* PlayerID);
	void STATIC_SendEvent_UpdatedMatchMakingRating(class APlayerReplicationInfo* PRI, const struct FString& RatingKey, float RatingValue, const struct FString& DeviationKey, float DeviationValue);
	void STATIC_SendEvent_PeriodicServerPerformance(const struct FString& ServerName, int avgTickMs, int maxTickMS, int avgDeltaMS, int maxDeltaMS);
	void STATIC_SendEvent_ServerStarted(const struct FString& ServerName, const struct FString& Region, const struct FString& CommandLine);
	struct FString STATIC_ConvertProgressMessageSubTypeToString(TEnumAsByte<EProgressMessageSubType> MessageSubType);
	struct FString STATIC_ConvertConnectionStatusToString(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	struct FString STATIC_ConvertOfferCurrencyToString(TEnumAsByte<EOfferCurrency> Currency);
	struct FString STATIC_ConvertNetworkErrorCodeToString(TEnumAsByte<ENetworkErrorCode> ErrorCode);
	bool STATIC_IsLoggedIn();
	class UStormEventObject* STATIC_CreateEventObject();
	void STATIC_DebugPrintEventObject(class UStormEventObject* eventObject);
	void STATIC_SendEventObject(class UStormEventObject* eventObject, bool bNoDebugTrace);
	struct FString STATIC_CreateGuidString();
	struct FString STATIC_GetLoggedInStormUserId();
	struct FString STATIC_GetUnrealEngineVersion();
	struct FString STATIC_GetBuiltFromChangelist();
	struct FString STATIC_GetUniqueBuildId();
	struct FString STATIC_GetServerListingGuid();
	struct FString STATIC_GetCurrentMatchID();
};


// Class OnlineSubsystemMeteor.OnlineFriendCollection
// 0x0040 (0x007C - 0x003C)
class UOnlineFriendCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlineFriendCollection.FriendsMap
	struct FPointer                                    FriendIterator;                                           // 0x0078(0x0004) (Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineFriendCollection");
		return ptr;
	}


	void SetFriend(struct FOnlineFriend* Friend);
	bool FindFriendByName(const struct FString& FriendName, struct FOnlineFriend* Friend);
	bool GetNextFriend(struct FOnlineFriend* Friend);
	void ResetFriendIterator();
	bool GetFriend(struct FUniqueNetId* PlayerID, struct FOnlineFriend* Friend);
	int NumFriends();
};


// Class OnlineSubsystemMeteor.OnlineFriendObject
// 0x003C (0x0078 - 0x003C)
class UOnlineFriendObject : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x003C(0x0010) (Const)
	TEnumAsByte<ESubscriptionStatus>                   SubscriptionStatus;                                       // 0x004C(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FString                                     ServerListingGuid;                                        // 0x0050(0x000C) (Const, NeedCtorLink)
	TArray<struct FString>                             ChatMessages;                                             // 0x005C(0x000C) (Const, NeedCtorLink)
	struct FString                                     NickName;                                                 // 0x0068(0x000C) (Const, NeedCtorLink)
	unsigned long                                      bIsOnline : 1;                                            // 0x0074(0x0004) (Const)
	unsigned long                                      bIsPlaying : 1;                                           // 0x0074(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineFriendObject");
		return ptr;
	}


	bool HaveInvited();
	bool HasInvitedYou();
	bool ShouldBeDisplayed();
};


// Class OnlineSubsystemMeteor.OnlineGameBundle
// 0x0048 (0x0084 - 0x003C)
class UOnlineGameBundle : public UObject
{
public:
	struct FString                                     BundleId;                                                 // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     BundleDescription;                                        // 0x0048(0x000C) (NeedCtorLink)
	struct FString                                     BundleType;                                               // 0x0054(0x000C) (NeedCtorLink)
	struct FString                                     ExpiryDate;                                               // 0x0060(0x000C) (NeedCtorLink)
	unsigned long                                      VisibleToClient : 1;                                      // 0x006C(0x0004)
	unsigned long                                      MultiRedeemable : 1;                                      // 0x006C(0x0004)
	TArray<struct FString>                             GameOffers;                                               // 0x0070(0x000C) (NeedCtorLink)
	int                                                BundlePriceHawkenPoints;                                  // 0x007C(0x0004)
	int                                                BundlePriceMeteorPoints;                                  // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineGameBundle");
		return ptr;
	}


	bool IsExpired();
	bool IsVisibleToClient();
	bool IsMultiRedeemable();
	bool GetExpiryDate(struct FString* Date);
	bool GetHasExpiryDate();
};


// Class OnlineSubsystemMeteor.OnlineGameBundleCollection
// 0x0040 (0x007C - 0x003C)
class UOnlineGameBundleCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlineGameBundleCollection.BundlesMap
	struct FPointer                                    BundleIterator;                                           // 0x0078(0x0004) (Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineGameBundleCollection");
		return ptr;
	}


	bool GetNextBundle(class UOnlineGameBundle** Bundle);
	void ResetBundleIterator();
	void SetBundle(const struct FString& Key, class UOnlineGameBundle* Bundle);
	class UOnlineGameBundle* GetBundle(const struct FString& Key);
	int NumBundles();
};


// Class OnlineSubsystemMeteor.OnlineGameInterfaceMeteor
// 0x00AC (0x0260 - 0x01B4)
class UOnlineGameInterfaceMeteor : public UOnlineGameInterfaceImpl
{
public:
	class UOnlineSubsystemMeteor*                      MeteorSubsystem;                                          // 0x01B4(0x0004)
	struct FPointer                                    ActiveGameServerListing;                                  // 0x01B8(0x0004) (Const, Native, Transient)
	struct FString                                     ActiveVoiceChannelListingGuid;                            // 0x01BC(0x000C) (Transient, NeedCtorLink)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x01C8(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlineGameInterfaceMeteor.CachedUserInfoMap
	struct FString                                     AllTalkChannelUri;                                        // 0x0204(0x000C) (Transient, NeedCtorLink)
	struct FString                                     ProskChannelUri;                                          // 0x0210(0x000C) (Transient, NeedCtorLink)
	struct FString                                     SentiumChannelUri;                                        // 0x021C(0x000C) (Transient, NeedCtorLink)
	struct FString                                     SpectatorChannelUri;                                      // 0x0228(0x000C) (Transient, NeedCtorLink)
	struct FString                                     VoiceTestChannelUri;                                      // 0x0234(0x000C) (Transient, NeedCtorLink)
	struct FString                                     CurrentMatchID;                                           // 0x0240(0x000C) (NeedCtorLink)
	float                                              NextServerListingUpdateTime;                              // 0x024C(0x0004)
	float                                              ServerListingUpdateRate;                                  // 0x0250(0x0004)
	float                                              NextPlayersPresenceUpdateTime;                            // 0x0254(0x0004)
	float                                              PlayersPresenceUpdateRate;                                // 0x0258(0x0004)
	float                                              AntiAddictionModifierOverride;                            // 0x025C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineGameInterfaceMeteor");
		return ptr;
	}


	bool CheckServerPassword(const struct FString& ServerPassword, const struct FString& ToCheck);
	void SetAntiAddictionModifierOverride(float Modifier);
	float GetPlayerAntiAddictionModifier(struct FUniqueNetId* PlayerID);
	void GenerateCurrentMatchID();
	void TickInternetTasks(float DeltaTime);
	bool UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
	bool CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	bool UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	bool RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	struct FString GetServerRegion();
};


// Class OnlineSubsystemMeteor.OnlineGameItem
// 0x0060 (0x009C - 0x003C)
class UOnlineGameItem : public UObject
{
public:
	struct FString                                     TypeId;                                                   // 0x003C(0x000C) (Const, NeedCtorLink)
	struct FString                                     Version;                                                  // 0x0048(0x000C) (Const, NeedCtorLink)
	struct FString                                     ItemName;                                                 // 0x0054(0x000C) (Const, NeedCtorLink)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0060(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlineGameItem.AttributesMap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineGameItem");
		return ptr;
	}


	void SetAttributeString(const struct FString& Key, const struct FString& Value);
	struct FString GetAttributeValue(const struct FString& Key, const struct FString& Default);
	struct FOnlineGameItemAttribute GetAttribute(int Index);
	int NumAttributes();
};


// Class OnlineSubsystemMeteor.OnlineGameItemInstance
// 0x0060 (0x00FC - 0x009C)
class UOnlineGameItemInstance : public UOnlineGameItem
{
public:
	struct FString                                     InstanceID;                                               // 0x009C(0x000C) (Const, NeedCtorLink)
	struct FString                                     Parent;                                                   // 0x00A8(0x000C) (Const, NeedCtorLink)
	TArray<struct FString>                             ChildrenList;                                             // 0x00B4(0x000C) (Const, NeedCtorLink)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00C0(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlineGameItemInstance.StatsMap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineGameItemInstance");
		return ptr;
	}


	void DebugTestFunctions();
	bool STATIC_DoesTimeIndicateRental(const struct FString& ExpiryDate);
	bool STATIC_IsTimeDefaultData(const struct FString& ExpiryDate);
	bool STATIC_HasUTCTimePassed(const struct FString& UTCTime);
	struct FString STATIC_GetCurrentUTCTimeStringMeteorFormat();
	bool STATIC_ConvertMinutesToTime(int totalSeconds, int* Day, int* Hour, int* Min);
	bool STATIC_ConvertSecondsToTime(int totalSeconds, int* Day, int* Hour, int* Min, int* Sec);
	bool STATIC_ParseMeteorTimeStringIntoInt(const struct FString& meteorTime, bool bRemoveDefaultData, int* Year, int* Month, int* Day, int* Hour, int* Min, int* Sec);
	bool STATIC_ParseMeteorTimeStringIntoString(const struct FString& meteorTime, struct FString* sYear, struct FString* sMonth, struct FString* sDay, struct FString* sHour, struct FString* sMin, struct FString* sSec);
	void STATIC_GetTimeMeteorFormat(int Year, int Month, int Day, int Hour, int Min, int Sec, struct FString* formattedTime);
	void SetExpirationDateToDefault();
	bool DecrementLimitedUses();
	bool IsExpired();
	bool GetRemainingRentalTime(int* daysOut, int* hoursOut, int* minutesOut, int* secondsOut);
	bool GetRemainingRentalTimeAsString(struct FString* RemainingTime);
	bool IsUseLimitedWithGet(int* TotalUses, int* usesLeft);
	bool IsUseLimited();
	bool IsTimedRentalWithGet(struct FString* ExpiryDate);
	bool IsTimedRental();
};


// Class OnlineSubsystemMeteor.OnlineGameItemType
// 0x000C (0x00A8 - 0x009C)
class UOnlineGameItemType : public UOnlineGameItem
{
public:
	TArray<struct FString>                             StoreOfferIds;                                            // 0x009C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineGameItemType");
		return ptr;
	}

};


// Class OnlineSubsystemMeteor.OnlineGameItemInstanceCollection
// 0x0042 (0x007E - 0x003C)
class UOnlineGameItemInstanceCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.ItemsMap
	struct FPointer                                    ItemIterator;                                             // 0x0078(0x0004) (Native, Transient)
	TEnumAsByte<EInstanceCollectionState>              ItemsLoadingState;                                        // 0x007C(0x0001) (Const)
	TEnumAsByte<EInstanceCollectionState>              StatsLoadingState;                                        // 0x007D(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineGameItemInstanceCollection");
		return ptr;
	}


	bool GetNextItem(class UOnlineGameItemInstance** Item);
	void ResetItemIterator();
	void AddItems(class UOnlineGameItemInstanceCollection* Items);
	void SetItem(const struct FString& Key, class UOnlineGameItemInstance* Item);
	TArray<class UOnlineGameItemInstance*> GetItemsByTypeId(const struct FString& TypeId);
	class UOnlineGameItemInstance* GetItem(const struct FString& Key);
	int NumItems();
};


// Class OnlineSubsystemMeteor.OnlineGameItemTypeCollection
// 0x0040 (0x007C - 0x003C)
class UOnlineGameItemTypeCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlineGameItemTypeCollection.ItemsMap
	struct FPointer                                    ItemIterator;                                             // 0x0078(0x0004) (Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineGameItemTypeCollection");
		return ptr;
	}


	bool GetNextItem(class UOnlineGameItemType** Item);
	void ResetItemIterator();
	void SetItem(const struct FString& Key, class UOnlineGameItemType* Item);
	class UOnlineGameItemType* GetItem(const struct FString& Key);
	int NumItems();
};


// Class OnlineSubsystemMeteor.OnlineGameOffer
// 0x006C (0x00A8 - 0x003C)
class UOnlineGameOffer : public UObject
{
public:
	struct FString                                     OfferId;                                                  // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     OfferDescription;                                         // 0x0048(0x000C) (NeedCtorLink)
	TArray<struct FString>                             GameItems;                                                // 0x0054(0x000C) (NeedCtorLink)
	int                                                OfferPriceHawkenPoints;                                   // 0x0060(0x0004)
	int                                                OfferPriceMeteorPoints;                                   // 0x0064(0x0004)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0068(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlineGameOffer.AttributesMap
	struct FPointer                                    AttributeIterator;                                        // 0x00A4(0x0004) (Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineGameOffer");
		return ptr;
	}


	void DebugTestFunctions();
	bool STATIC_IsRentalPurchaseOfferDefault(const struct FString& RentalPurchaseOfferID);
	bool IsExpired();
	bool GetUseLimit(int* TotalUses);
	bool GetHasUseLimit();
	bool GetRelativeExpiry(int* RelativeExpiryMinutes);
	bool GetHasRelativeExpiry();
	bool GetExpiryDate(struct FString* ExpiryDate);
	bool GetHasExpiryDate();
	bool GetNextAttribute(struct FOnlineGameOfferAttribute* Attribute);
	void ResetAttributeIterator();
	void SetAttributeString(const struct FString& Key, const struct FString& Value);
	struct FString GetAttributeValue(const struct FString& Key, const struct FString& Default);
	int NumAttributes();
};


// Class OnlineSubsystemMeteor.OnlineGameOfferCollection
// 0x0040 (0x007C - 0x003C)
class UOnlineGameOfferCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlineGameOfferCollection.OffersMap
	struct FPointer                                    OfferIterator;                                            // 0x0078(0x0004) (Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineGameOfferCollection");
		return ptr;
	}


	bool GetNextOffer(class UOnlineGameOffer** Offer);
	void ResetOfferIterator();
	void SetOffer(const struct FString& Key, class UOnlineGameOffer* Offer);
	class UOnlineGameOffer* GetOffer(const struct FString& Key);
	int NumOffers();
};


// Class OnlineSubsystemMeteor.OnlineInventoryManager
// 0x0018 (0x0054 - 0x003C)
class UOnlineInventoryManager : public UObject
{
public:
	class UOnlineSubsystemMeteor*                      MeteorOSS;                                                // 0x003C(0x0004) (Transient)
	class UOnlineGameOfferCollection*                  GameOfferCollection;                                      // 0x0040(0x0004)
	class UOnlineGameBundleCollection*                 GameBundleCollection;                                     // 0x0044(0x0004)
	class UOnlineGameItemTypeCollection*               GameItemTypeCollection;                                   // 0x0048(0x0004)
	class UOnlineAchievementCollection*                AchievementCollection;                                    // 0x004C(0x0004)
	class UOnlineInventoryManagerDelegates*            Delegates;                                                // 0x0050(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineInventoryManager");
		return ptr;
	}


	void ShutDown();
	void Init(class UOnlineSubsystem* OnlineSub);
};


// Class OnlineSubsystemMeteor.OnlineInventoryManagerDelegates
// 0x0000 (0x003C - 0x003C)
class UOnlineInventoryManagerDelegates : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineInventoryManagerDelegates");
		return ptr;
	}

};


// Class OnlineSubsystemMeteor.OnlineMailMessage
// 0x002C (0x0068 - 0x003C)
class UOnlineMailMessage : public UObject
{
public:
	struct FString                                     MessageId;                                                // 0x003C(0x000C) (Const, NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // 0x0048(0x0010) (Const)
	struct FString                                     TimeStamp;                                                // 0x0058(0x000C) (Const, NeedCtorLink)
	unsigned long                                      bRead : 1;                                                // 0x0064(0x0004) (Const)
	unsigned long                                      bDownloaded : 1;                                          // 0x0064(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineMailMessage");
		return ptr;
	}

};


// Class OnlineSubsystemMeteor.OnlineMailMessage_Emergency
// 0x0018 (0x0080 - 0x0068)
class UOnlineMailMessage_Emergency : public UOnlineMailMessage
{
public:
	struct FString                                     MessageTitle;                                             // 0x0068(0x000C) (Const, NeedCtorLink)
	struct FString                                     MessageBody;                                              // 0x0074(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineMailMessage_Emergency");
		return ptr;
	}

};


// Class OnlineSubsystemMeteor.OnlineMailMessage_FriendRequest
// 0x0018 (0x0080 - 0x0068)
class UOnlineMailMessage_FriendRequest : public UOnlineMailMessage
{
public:
	struct FString                                     FromUserName;                                             // 0x0068(0x000C) (Const, NeedCtorLink)
	struct FString                                     MessageText;                                              // 0x0074(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineMailMessage_FriendRequest");
		return ptr;
	}

};


// Class OnlineSubsystemMeteor.OnlineSubsystemMeteor
// 0x06FC (0x081C - 0x0120)
class UOnlineSubsystemMeteor : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    LeMeteorCore;                                             // 0x0120(0x0004) (Const, Native, Transient)
	struct FPointer                                    AuthenticationConsumer;                                   // 0x0124(0x0004) (Const, Native, Transient)
	struct FPointer                                    EventConsumer;                                            // 0x0128(0x0004) (Const, Native, Transient)
	struct FPointer                                    GameItemConsumer;                                         // 0x012C(0x0004) (Const, Native, Transient)
	struct FPointer                                    GameManagerConsumer;                                      // 0x0130(0x0004) (Const, Native, Transient)
	struct FPointer                                    GameOfferConsumer;                                        // 0x0134(0x0004) (Const, Native, Transient)
	struct FPointer                                    GameBundleConsumer;                                       // 0x0138(0x0004) (Const, Native, Transient)
	struct FPointer                                    SettingsConsumer;                                         // 0x013C(0x0004) (Const, Native, Transient)
	struct FPointer                                    ShopConsumer;                                             // 0x0140(0x0004) (Const, Native, Transient)
	struct FPointer                                    VoiceConsumer;                                            // 0x0144(0x0004) (Const, Native, Transient)
	struct FPointer                                    XMPPConsumer;                                             // 0x0148(0x0004) (Const, Native, Transient)
	struct FPointer                                    AchievementsConsumer;                                     // 0x014C(0x0004) (Const, Native, Transient)
	struct FPointer                                    UserStatsConsumer;                                        // 0x0150(0x0004) (Const, Native, Transient)
	struct FPointer                                    PartyConsumer;                                            // 0x0154(0x0004) (Const, Native, Transient)
	struct FPointer                                    VersionConsumer;                                          // 0x0158(0x0004) (Const, Native, Transient)
	struct FPointer                                    StatOverflowConsumer;                                     // 0x015C(0x0004) (Const, Native, Transient)
	class UOnlineGameInterfaceMeteor*                  MeteorGameInterface;                                      // 0x0160(0x0004)
	class UOnlineMatchmakingManager*                   MatchmakingManager;                                       // 0x0164(0x0004)
	class UOnlineXMPPInterfaceMeteor*                  XMPPInterface;                                            // 0x0168(0x0004)
	struct FString                                     OnlinePartyManagerClassName;                              // 0x016C(0x000C) (Config, NeedCtorLink)
	class UOnlinePartyManager*                         PartyManager;                                             // 0x0178(0x0004) (Transient)
	struct FString                                     OnlineAccountManagerClassName;                            // 0x017C(0x000C) (Config, NeedCtorLink)
	class UOnlineAccountManager*                       AccountManager;                                           // 0x0188(0x0004) (Transient)
	struct FString                                     OnlineInventoryManagerClassName;                          // 0x018C(0x000C) (Config, NeedCtorLink)
	class UOnlineInventoryManager*                     InventoryManager;                                         // 0x0198(0x0004) (Transient)
	struct FString                                     CurrentVoiceChannelUri;                                   // 0x019C(0x000C) (NeedCtorLink)
	TArray<struct FPointer>                            AsyncTasks;                                               // 0x01A8(0x000C) (Const, Native)
	struct FString                                     ProfileDataDirectory;                                     // 0x01B4(0x000C) (Config, NeedCtorLink)
	struct FString                                     ProfileDataExtension;                                     // 0x01C0(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bIsLoggedIn : 1;                                          // 0x01CC(0x0004)
	unsigned long                                      bLastHasLink : 1;                                         // 0x01CC(0x0004)
	unsigned long                                      bDisableCheckClientVersion : 1;                           // 0x01CC(0x0004) (Config)
	unsigned long                                      bIsExternalUIOpen : 1;                                    // 0x01CC(0x0004) (Const)
	float                                              CheckLinkTimeInterval;                                    // 0x01D0(0x0004)
	float                                              CheckLinkElapsedTime;                                     // 0x01D4(0x0004)
	TEnumAsByte<EOnlineServerConnectionStatus>         LastConnectionStatus;                                     // 0x01D8(0x0001)
	TEnumAsByte<EOnlineServerConnectionStatus>         LastServerStatus;                                         // 0x01D9(0x0001)
	TEnumAsByte<EJoinServerFrom>                       ConnectionRequestFrom;                                    // 0x01DA(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01DB(0x0001) MISSED OFFSET
	int                                                MaxCheckConnectionRetries;                                // 0x01DC(0x0004)
	int                                                NumCheckConnectionRetries;                                // 0x01E0(0x0004)
	int                                                NumCheckServerRetries;                                    // 0x01E4(0x0004)
	float                                              CheckConnectionTimeInterval;                              // 0x01E8(0x0004)
	float                                              CheckConnectionElapsedTime;                               // 0x01EC(0x0004)
	struct FString                                     ConnectionStatusMessage;                                  // 0x01F0(0x000C) (Const, NeedCtorLink)
	struct FString                                     ServerStatusMessage;                                      // 0x01FC(0x000C) (Const, NeedCtorLink)
	struct FString                                     ConnectionRequestId;                                      // 0x0208(0x000C) (NeedCtorLink)
	struct FString                                     SupportedClientVersions;                                  // 0x0214(0x000C) (Const, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadProfileSettingsDelegates;                             // 0x0220(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                            // 0x022C(0x000C) (NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                            // 0x0238(0x0004)
	class UOnlineGameItemType*                         Globals;                                                  // 0x023C(0x0004)
	TArray<struct FUniqueNetId>                        SpeakingUserIds;                                          // 0x0240(0x000C) (Const, NeedCtorLink)
	float                                              ServerPilotLevel;                                         // 0x024C(0x0004)
	int                                                ServerPlayerCount;                                        // 0x0250(0x0004)
	int                                                ServerProgressionScore;                                   // 0x0254(0x0004)
	int                                                ServerRankingScore;                                       // 0x0258(0x0004)
	float                                              ClientRequestTimeout;                                     // 0x025C(0x0004) (Config)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                                     // 0x0260(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                                     // 0x026C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LogoutCompletedDelegates;                                 // 0x0278(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     CreateOnlineAccountCompletedDelegates;                    // 0x0284(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;                       // 0x0290(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                                     // 0x029C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                                   // 0x02A8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                                    // 0x02B4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindOnlineGameServersCompletedDelegates;                  // 0x02C0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindUnrankedMatchCompletedDelegates;                      // 0x02CC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserStatsCompleteDelegates;                           // 0x02D8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserStatsCompleteDelegates;                          // 0x02E4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserSettingsCompleteDelegates;                        // 0x02F0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserSettingsCompleteDelegates;                       // 0x02FC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LinkStatusDelegates;                                      // 0x0308(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ConnectionStatusChangeDelegates;                          // 0x0314(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServersStatusChangedDelegates;                            // 0x0320(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     CreateVoiceChannelsCompleteDelegates;                     // 0x032C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinVoiceChannelCompleteDelegates;                        // 0x0338(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LeaveVoiceChannelCompleteDelegates;                       // 0x0344(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadGameItemInstanceCollectionCompleteDelegates;          // 0x0350(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadGameItemInstancesCompleteDelegates;                   // 0x035C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UpdateGameItemInstanceCompleteDelegates;                  // 0x0368(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     IncrementUserGameItemStatsCompleteDelegates;              // 0x0374(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     BatchIncrementUserGameItemStatsCompleteDelegates;         // 0x0380(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserGameItemStatsCompletedDelegates;                  // 0x038C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadAllUserGameItemStatsCompletedDelegates;               // 0x0398(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteGameItemInstanceCompleteDelegates;                  // 0x03A4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadGameItemTypeCollectionCompleteDelegates;              // 0x03B0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ValidateClientConnectionCompleteDelegates;                // 0x03BC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadGameOfferCollectionCompleteDelegates;                 // 0x03C8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadGameBundleCollectionCompleteDelegates;                // 0x03D4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PurchaseGameOfferCompleteDelegates;                       // 0x03E0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerPurchaseGameOfferCompleteDelegates;                 // 0x03EC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PurchaseGameBundleCompleteDelegates;                      // 0x03F8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RentGameOfferCompleteDelegates;                           // 0x0404(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RequestReservationCompleteDelegates;                      // 0x0410(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RefreshWalletCompleteDelegates;                           // 0x041C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     GetOverflowCompleteDelegates;                             // 0x0428(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SendToXPOverflowCompleteDelegates;                        // 0x0434(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     GetFromXPOverflowCompleteDelegates;                       // 0x0440(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     GiveWalletCurrencyCompleteDelegates;                      // 0x044C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadAchievementCollectionCompletedDelegates;              // 0x0458(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUnlockedAchievementCollectionCompletedDelegates;      // 0x0464(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnlockAchievementObjectCompletedDelegates;                // 0x0470(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RefreshUserInfoCompletedDelegates;                        // 0x047C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SetGameTypeCompletedDelegates;                            // 0x0488(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LocalPlayerRoleAuthorizationDelegates;                    // 0x0494(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ExternalUIChangeDelegates;                                // 0x04A0(0x000C) (NeedCtorLink)
	TArray<struct FString>                             NetworkErrorNames;                                        // 0x04AC(0x000C) (Const, Localized, NeedCtorLink)
	TArray<struct FStormGameServerListing>             OnlineGameServers;                                        // 0x04B8(0x000C) (NeedCtorLink)
	class UClass*                                      DefaultGameSearchClass;                                   // 0x04C4(0x0004)
	struct FScriptDelegate                             __OnCreateVoiceChannelsComplete__Delegate;                // 0x04C8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinVoiceChannelComplete__Delegate;                   // 0x04D4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLeaveVoiceChannelComplete__Delegate;                  // 0x04E0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnValidateClientConnectionComplete__Delegate;           // 0x04EC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                                // 0x04F8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                             // 0x0504(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                               // 0x0510(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x051C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;                   // 0x0528(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                              // 0x0534(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                                // 0x0540(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                            // 0x054C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;                // 0x0558(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;               // 0x0564(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                          // 0x0570(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                        // 0x057C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                        // 0x0588(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                    // 0x0594(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                   // 0x05A0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;               // 0x05AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                           // 0x05B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                           // 0x05C4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                           // 0x05D0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;                     // 0x05DC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnServerStatusChange__Delegate;                         // 0x05E8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                        // 0x05F4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;                      // 0x0600(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;                 // 0x060C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;          // 0x0618(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;                  // 0x0624(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;                    // 0x0630(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;                       // 0x063C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                         // 0x0648(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;                     // 0x0654(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;                      // 0x0660(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;                  // 0x066C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;                   // 0x0678(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;               // 0x0684(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFindOnlineGameServersCompleted__Delegate;             // 0x0690(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserStatsComplete__Delegate;                      // 0x069C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserStatsComplete__Delegate;                     // 0x06A8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserSettingsComplete__Delegate;                   // 0x06B4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserSettingsComplete__Delegate;                  // 0x06C0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadGameItemInstanceCollectionComplete__Delegate;     // 0x06CC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadGameItemInstancesComplete__Delegate;              // 0x06D8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateGameItemInstanceComplete__Delegate;             // 0x06E4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnIncrementUserGameItemStatsComplete__Delegate;         // 0x06F0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnBatchIncrementUserGameItemStatsComplete__Delegate;    // 0x06FC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserGameItemStatsCompleted__Delegate;             // 0x0708(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadAllUserGameItemStatsCompleted__Delegate;          // 0x0714(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteGameItemInstanceComplete__Delegate;             // 0x0720(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadGameItemTypeCollectionComplete__Delegate;         // 0x072C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadGameOfferCollectionComplete__Delegate;            // 0x0738(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadGameBundleCollectionComplete__Delegate;           // 0x0744(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPurchaseGameBundleComplete__Delegate;                 // 0x0750(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPurchaseGameOfferComplete__Delegate;                  // 0x075C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnServerPurchaseGameOfferComplete__Delegate;            // 0x0768(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRentGameOfferComplete__Delegate;                      // 0x0774(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRefreshWalletComplete__Delegate;                      // 0x0780(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGetOverflowComplete__Delegate;                        // 0x078C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSendToXPOverflowComplete__Delegate;                   // 0x0798(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGetFromXPOverflowComplete__Delegate;                  // 0x07A4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGiveWalletCurrencyComplete__Delegate;                 // 0x07B0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRequestReservationComplete__Delegate;                 // 0x07BC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFindUnrankedMatchCompleted__Delegate;                 // 0x07C8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRoleAuthorizeComplete__Delegate;                      // 0x07D4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementCollectionCompleted__Delegate;         // 0x07E0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadUnlockedAchievementCollectionCompleted__Delegate; // 0x07EC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementObjectCompleted__Delegate;           // 0x07F8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRefreshUserInfoCompleted__Delegate;                   // 0x0804(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSetGameTypeCompleted__Delegate;                       // 0x0810(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineSubsystemMeteor");
		return ptr;
	}


	bool STATIC_UuidStringToUniqueNetId(const struct FString& UniqueNetIdString, struct FUniqueNetId* out_UniqueId);
	struct FString STATIC_UniqueNetIdToUuidString(struct FUniqueNetId* IdToConvert);
	bool STATIC_SteamIDToUniqueNetId(const struct FString& SteamID, struct FUniqueNetId* out_UniqueId);
	struct FString STATIC_UniqueNetIdToSteamID(struct FUniqueNetId* IdToConvert);
	struct FString GetSteamAuthSessionTicket();
	void ClearSetGameTypeCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddSetGameTypeCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnSetGameTypeCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& PartyId, const struct FString& GameType);
	int SetGameType(const struct FString& PartyId, const struct FString& GameType);
	void ClearRefreshUserInfoCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddRefreshUserInfoCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnRefreshUserInfoCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID);
	int RefreshUserInfo(struct FUniqueNetId* PlayerID);
	void ClearUnlockAchievementObjectCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddUnlockAchievementObjectCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnUnlockAchievementObjectCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, const struct FUniqueNetId& AchievementGuid);
	int UnlockAchievementObject(struct FUniqueNetId* PlayerID, struct FUniqueNetId* AchievementGuid);
	void ClearReadUnlockedAchievementCollectionCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddReadUnlockedAchievementCollectionCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnReadUnlockedAchievementCollectionCompleted(int TaskID, const struct FUniqueNetId& PlayerID, TEnumAsByte<ENetworkErrorCode> ErrorCode, class UOnlineUnlockedAchievementCollection* Collection);
	int ReadUnlockedAchievementCollection(const struct FString& CountryCode, class UOnlineUnlockedAchievementCollection* Collection, struct FUniqueNetId* PlayerID);
	void ClearReadAchievementCollectionCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddReadAchievementCollectionCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnReadAchievementCollectionCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode);
	int ReadAchievementCollection(const struct FString& CountryCode);
	void ClearRoleAuthorizeCompleteDelegate(const struct FScriptDelegate& RoleAuthorizeCompleteHandler);
	void AddRoleAuthorizeCompleteDelegate(const struct FScriptDelegate& RoleAuthorizeCompleteHandler);
	void OnRoleAuthorizeComplete(bool bWasSuccessful, const struct FUniqueNetId& PlayerID);
	bool AuthorizeUserRoles(const struct FUniqueNetId& PlayerID, TArray<struct FString>* RequiredRoles);
	struct FString BuildNetworkErrorMessage(const struct FString& BaseMessage, TEnumAsByte<ENetworkErrorCode> ErrorCode);
	struct FString GetNetworkErrorName(TEnumAsByte<ENetworkErrorCode> ErrorCode);
	bool IsServerListingCreated();
	void OnPendingMatchBeginState();
	struct FOnlineGameSearchResult STATIC_ConvertStormServerListingToGameSearchResult(const struct FStormGameServerListing& ServerListing, class UClass* GameSearchClass);
	void ClearFindUnrankedMatchCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddFindUnrankedMatchCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnFindUnrankedMatchCompleted(int TaskID, bool bWasSuccessful, const struct FStormGameServerListing& ServerListing);
	void CancelFindUnrankedMatch();
	bool IsFindUnrankedMatchInProgress();
	int FindUnrankedMatch(TArray<struct FUniqueNetId> PlayerList, const struct FString& RegionName, const struct FString& GameType);
	void CancelReservationRequest(const struct FStormGameServerListing& DesiredServer);
	void ClearRequestReservationCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddRequestReservationCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnRequestReservationComplete(TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& EndPoint, int Port);
	void RequestReservation(const struct FStormGameServerListing& DesiredServer);
	void ClearGiveWalletCurrencyCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddGiveWalletCurrencyCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnGiveWalletCurrencyComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, TEnumAsByte<EOfferCurrency> Currency, int Amount);
	int GiveWalletCurrency(TEnumAsByte<EOfferCurrency> Currency, int Amount, struct FUniqueNetId* PlayerID);
	void ClearGetFromXPOverflowCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddGetFromXPOverflowCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnGetFromXPOverflowComplete(bool bWasSuccessful, const struct FString& MechId, int Amount, bool bLegacyTransfer);
	int GetFromXPOverflow(const struct FString& MechId, int Amount, bool bLegacyTransfer);
	void ClearSendToXPOverflowCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddSendToXPOverflowCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnSendToXPOverflowComplete(bool bWasSuccessful, const struct FString& MechId, int Amount, bool bLegacyTransfer);
	int SendToXPOverflow(const struct FString& MechId, int Amount, bool bLegacyTransfer);
	void ClearGetOverflowCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddGetOverflowCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnGetOverflowComplete(bool bWasSuccessful, int interval, int mcPerIncrement);
	int GetOverflow();
	void ClearRefreshWalletCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddRefreshWalletCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnRefreshWalletComplete(bool bWasSuccessful);
	void RefreshWallet();
	void ClearRentGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddRentGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnRentGameOfferComplete(int TaskID, const struct FString& OfferId, TEnumAsByte<ENetworkErrorCode> ErrorCode, class UOnlineGameItemInstanceCollection* RentedGameItemInstances);
	int RentGameOfferForCharacter(const struct FString& OfferId, const struct FString& CharacterInstanceId, TEnumAsByte<EOfferCurrency> CurrencyType);
	int RentGameOffer(const struct FString& OfferId, TEnumAsByte<EOfferCurrency> CurrencyType);
	void ClearServerPurchaseGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddServerPurchaseGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnServerPurchaseGameOfferComplete(int TaskID, const struct FString& OfferId, const struct FString& UserId, TEnumAsByte<ENetworkErrorCode> ErrorCode, class UOnlineGameItemInstanceCollection* PurchasedGameItemInstances);
	void ClearPurchaseGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddPurchaseGameOfferCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnPurchaseGameOfferComplete(int TaskID, const struct FString& OfferId, TEnumAsByte<ENetworkErrorCode> ErrorCode, class UOnlineGameItemInstanceCollection* PurchasedGameItemInstances);
	int PurchaseGameOfferForCharacter(const struct FString& OfferId, const struct FString& CharacterInstanceId, TEnumAsByte<EOfferCurrency> CurrencyType);
	int ServerPurchaseGameOffer(const struct FString& OfferId, const struct FString& MechInstanceId, TEnumAsByte<EOfferCurrency> CurrencyType, struct FUniqueNetId* UserId);
	int PurchaseGameOffer(const struct FString& OfferId, TEnumAsByte<EOfferCurrency> CurrencyType);
	void UpdateGameItemTypeCollectionWithOfferIds();
	struct FString STATIC_ConvertOfferCurrencyToStorm(TEnumAsByte<EOfferCurrency> Currency);
	TEnumAsByte<EOfferCurrency> STATIC_ConvertOfferCurrencyFromStorm(const struct FString& Currency);
	void ClearPurchaseGameBundleCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddPurchaseGameBundleCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnPurchaseGameBundleComplete(int TaskID, const struct FString& BundleId, TEnumAsByte<ENetworkErrorCode> ErrorCode);
	int PurchaseGameBundleForCharacter(const struct FString& BundleId, const struct FString& CharacterInstanceId, TEnumAsByte<EBundleCurrency> CurrencyType);
	int PurchaseGameBundle(const struct FString& BundleId, TEnumAsByte<EBundleCurrency> CurrencyType);
	void ClearReadGameBundleCollectionCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddReadGameBundleCollectionCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnReadGameBundleCollectionComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode);
	void ReadGameBundleCollection();
	void ClearReadGameOfferCollectionCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddReadGameOfferCollectionCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnReadGameOfferCollectionComplete(bool bWasSuccessful);
	void ReadGameOfferCollection();
	void ClearReadGameItemTypeCollectionCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddReadGameItemTypeCollectionCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnReadGameItemTypeCollectionComplete(bool bWasSuccessful);
	void ReadGameItemTypeCollection();
	void ClearDeleteGameItemInstanceCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddDeleteGameItemInstanceCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnDeleteGameItemInstanceComplete(bool bWasSuccessful, const struct FUniqueNetId& PlayerID, const struct FString& InstanceID);
	void DeleteGameItemInstance(const struct FString& InstanceID, struct FUniqueNetId* PlayerID);
	void ClearReadAllUserGameItemStatsCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddReadAllUserGameItemStatsCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnReadAllUserGameItemStatsCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, class UOnlineGameItemInstanceCollection* InstanceCollection);
	int ReadAllUserGameItemStats(class UOnlineGameItemInstanceCollection* InstanceCollection, struct FUniqueNetId* PlayerID);
	void ClearReadUserGameItemStatsCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddReadUserGameItemStatsCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnReadUserGameItemStatsCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, const struct FString& InstanceID, class UOnlinePlayerStats* Stats);
	int ReadUserGameItemStats(const struct FString& InstanceID, class UOnlinePlayerStats* Stats, struct FUniqueNetId* PlayerID);
	void ClearBatchIncrementUserGameItemStatsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddBatchIncrementUserGameItemStatsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnBatchIncrementUserGameItemStatsComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, TArray<struct FStormUserGameItemStats> StatsArray);
	int BatchIncrementUserGameItemStats(TArray<struct FStormUserGameItemStats> StatsArray);
	void ClearIncrementUserGameItemStatsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddIncrementUserGameItemStatsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnIncrementUserGameItemStatsComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, class UOnlineGameItemInstance* Instance, class UOnlinePlayerStats* Stats);
	int IncrementUserGameItemStats(class UOnlineGameItemInstance* Instance, class UOnlinePlayerStats* Stats, struct FUniqueNetId* PlayerID);
	void ClearUpdateGameItemInstanceCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddUpdateGameItemInstanceCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnUpdateGameItemInstanceComplete(bool bWasSuccessful, const struct FUniqueNetId& PlayerID, class UOnlineGameItemInstance* Instance, TArray<struct FString> PrefixedAttributesOnly);
	void UpdateGameItemInstance(class UOnlineGameItemInstance* Instance, TArray<struct FString> PrefixedAttributesOnly, struct FUniqueNetId* PlayerID);
	void ClearReadGameItemInstancesCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddReadGameItemInstancesCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnReadGameItemInstancesComplete(int TaskID, bool bWasSuccessful, const struct FUniqueNetId& PlayerID, TArray<struct FString> InstanceIds, bool bReadChildren, class UOnlineGameItemInstanceCollection* ItemInstanceCollection);
	int ReadGameItemInstances(TArray<struct FString> InstanceIds, bool bReadChildren, struct FUniqueNetId* PlayerID);
	void ClearReadGameItemInstanceCollectionCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddReadGameItemInstanceCollectionCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnReadGameItemInstanceCollectionComplete(const struct FUniqueNetId& PlayerID, bool bWasSuccessful, class UOnlineGameItemInstanceCollection* ItemInstanceCollection);
	void ReadGameItemInstanceCollection(class UOnlineGameItemInstanceCollection* ItemInstanceCollection, struct FUniqueNetId* PlayerID);
	void ClearWriteUserSettingsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddWriteUserSettingsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnWriteUserSettingsComplete(bool bWasSuccessful);
	void WriteUserSettings(class UOnlinePlayerSettings* Settings, TEnumAsByte<ESettingsCategory> SettingsCategory);
	unsigned char STATIC_ConvertSettingsCategoryToStorm(TEnumAsByte<ESettingsCategory> SettingsCategory);
	void ClearReadUserSettingsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddReadUserSettingsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnReadUserSettingsComplete(bool bWasSuccessful, class UOnlinePlayerSettings* Settings, const struct FUniqueNetId& PlayerID);
	void ReadUserSettings(TArray<struct FString> SettingKeys, TEnumAsByte<ESettingsCategory> SettingsCategory, const struct FUniqueNetId& PlayerID);
	void ClearWriteUserStatsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddWriteUserStatsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnWriteUserStatsComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, class UOnlinePlayerStats* PlayerStats);
	int WriteUserStats(class UOnlinePlayerStats* PlayerStats, struct FUniqueNetId* PlayerID);
	void ClearReadUserStatsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddReadUserStatsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnReadUserStatsComplete(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, class UOnlinePlayerStats* PlayerStats);
	int ReadUserStats(class UOnlinePlayerStats* PlayerStats, struct FUniqueNetId* PlayerID);
	void ClearFindOnlineGameServersCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddFindOnlineGameServersCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnFindOnlineGameServersCompleted(bool bWasSuccessful);
	void FindOnlineGameServers(const struct FString& MapName, const struct FString& GameType);
	bool GetLocalAccountNames(TArray<struct FString>* Accounts);
	bool DeleteLocalAccount(const struct FString& UserName, const struct FString& Password);
	bool RenameLocalAccount(const struct FString& NewUserName, const struct FString& OldUserName, const struct FString& Password);
	bool CreateLocalAccount(const struct FString& UserName, const struct FString& Password);
	void ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnCreateOnlineAccountCompleted(TEnumAsByte<EOnlineAccountCreateStatus> ErrorStatus);
	bool CreateOnlineAccount(const struct FString& UserName, const struct FString& Password, const struct FString& EmailAddress, const struct FString& ProductKey);
	TEnumAsByte<EOnlineEnumerationReadState> GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements);
	void ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void OnReadAchievementsComplete(int TitleId);
	bool ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages);
	void ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	bool UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	bool DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	bool UnmuteAll(unsigned char LocalUserNum);
	bool MuteAll(unsigned char LocalUserNum, bool bAllowFriends);
	void ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend);
	void ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName);
	bool SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text);
	bool SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text);
	bool SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message);
	void ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	bool RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend);
	bool DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	void ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void OnAddFriendByNameComplete(bool bWasSuccessful);
	bool AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message);
	bool AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message);
	void ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	bool WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(unsigned char LocalUserNum);
	void ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	bool ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage);
	void AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful);
	void AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	struct FString GetKeyboardInputResults(unsigned char* bWasCanceled);
	void ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void OnKeyboardInputComplete(bool bWasSuccessful);
	bool ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	void SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties);
	void ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	int GetLocale();
	TEnumAsByte<ENATType> GetNATType();
	struct FString GetServerStatusMessage();
	void ClearServerStatusChangeDelegate(const struct FScriptDelegate& ServerStatusDelegate);
	void AddServerStatusChangeDelegate(const struct FScriptDelegate& ServerStatusDelegate);
	void OnServerStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ServerStatus);
	struct FString GetConnectionStatusMessage();
	void ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	bool IsControllerConnected(int ControllerId);
	void ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void OnControllerChange(int ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos);
	TEnumAsByte<ENetworkNotificationPosition> GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(const struct FScriptDelegate& Delegate);
	void AddExternalUIChangeDelegate(const struct FScriptDelegate& Delegate);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
	void CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma);
	bool RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool RegisterHostStatGuid(struct FString* HostStatGuid);
	struct FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool FlushOnlineStats(const struct FName& SessionName);
	bool WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	bool ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players);
	void OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(unsigned char LocalUserNum, int VocabularyId);
	void ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words);
	bool StopSpeechRecognition(unsigned char LocalUserNum);
	bool StartSpeechRecognition(unsigned char LocalUserNum);
	void StopNetworkedVoice(unsigned char LocalUserNum);
	void StartNetworkedVoice(unsigned char LocalUserNum);
	bool UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority);
	bool IsHeadsetPresent(unsigned char LocalUserNum);
	bool IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID);
	bool IsLocalPlayerTalking(unsigned char LocalUserNum);
	bool UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool RegisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool UnregisterLocalTalker(unsigned char LocalUserNum);
	bool RegisterLocalTalker(unsigned char LocalUserNum);
	TEnumAsByte<EOnlineEnumerationReadState> GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends);
	void ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	void ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(unsigned char LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	bool IsGuestLogin(unsigned char LocalUserNum);
	bool IsLocalLogin(unsigned char LocalUserNum);
	void ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	bool ShowFriendsUI(unsigned char LocalUserNum);
	bool IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query);
	bool IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	TEnumAsByte<EFeaturePrivilegeLevel> CanShowPresenceInformation(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanViewPlayerProfiles(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanPurchaseContent(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanDownloadUserContent(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanCommunicate(unsigned char LocalUserNum);
	TEnumAsByte<EFeaturePrivilegeLevel> CanPlayOnline(unsigned char LocalUserNum);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	bool GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID);
	TEnumAsByte<ELoginStatus> GetLoginStatus(unsigned char LocalUserNum);
	void ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& Delegate);
	void AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& Delegate);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(unsigned char LocalUserNum);
	void ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate);
	void AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginDelegate);
	void OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	bool AutoLogin();
	bool Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly);
	bool ShowLoginUI(bool bShowOnlineOnly);
	void OnFriendsChange();
	void ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking);
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const struct FString& FileToRead);
	void OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(unsigned char LocalUserNum);
	void UpdateServerRanking(float ServerRanking);
	void UpdateServerScore(float ProgressionScore);
	void UpdateServerPilotLevel(float PilotLevel);
	void UpdateTeamRatings(TArray<class APlayerController*> winningTeamPlayers, TArray<class UOnlinePlayerStats*> winningTeamPlayerStats, TArray<class APlayerController*> losingTeamPlayers, TArray<class UOnlinePlayerStats*> losingTeamPlayerStats, int ratingCategory);
	void CalculateServerAverageRating(TArray<class APlayerReplicationInfo*> sortedPlayers, TArray<class UOnlinePlayerStats*> sortedPlayerStats, class APlayerReplicationInfo* IgnorePlayer, float* avgRating, float* avgDeviation);
	void UpdateSoloRatingsServerAverage(TArray<class APlayerReplicationInfo*> sortedPlayers, TArray<class UOnlinePlayerStats*> sortedPlayerStats, int ratingCategory);
	void UpdatePlayerProgressionInfo(TArray<class APlayerReplicationInfo*> Players);
	float GetMicrophoneVolume();
	void SetMicrophoneVolume(float Volume);
	void SetMicrophoneSensitivity(int sensitivity);
	float GetSpeakerVolume();
	void SetSpeakerVolume(float Volume);
	void OnValidateClientConnectionComplete(const struct FUniqueNetId& UniqueId, bool bCallSuccessful, bool bClientAccepted);
	bool IsUserSpeaking(struct FUniqueNetId* PlayerID);
	void UpdateSpeakingUsers();
	bool IsUserMuted(struct FUniqueNetId* PlayerID);
	void UnmuteUser(struct FUniqueNetId* PlayerID);
	void MuteUser(struct FUniqueNetId* PlayerID);
	struct FString GetCurrentVoiceChannel();
	void ClearLeaveVoiceChannelCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddLeaveVoiceChannelCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnLeaveVoiceChannelComplete(bool bWasSuccessful);
	void LeaveVoiceChannel();
	void ClearJoinVoiceChannelCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddJoinVoiceChannelCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnJoinVoiceChannelComplete(bool bWasSuccessful);
	void JoinVoiceChannel(const struct FString& channelUri);
	void DeleteVoiceChannels(const struct FString& channelUri);
	void ClearCreateVoiceChannelsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddCreateVoiceChannelsCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnCreateVoiceChannelsComplete(bool bWasSuccessful);
	void CreateVoiceChannels(TArray<struct FString> channelUriList);
	TArray<struct FStormGameServerListing> Storm_ListGames(const struct FString& MapName, const struct FString& GameType);
	void Storm_SendEvent(class UStormEventObject* eventObject);
	struct FStormUserInfo Storm_GetCurrentUserInfo();
	bool Storm_IsLoggedIn();
	bool Storm_Logout();
	bool Storm_Login(const struct FString& EmailAddress, const struct FString& Password);
	bool Storm_DeleteUser();
	struct FStormUserInfo Storm_UpdateUser(const struct FString& newPassword);
	struct FStormUserInfo Storm_GetUserInfo(const struct FString& UserId);
	bool Storm_CreateUser(const struct FString& EmailAddress, const struct FString& Password);
	bool Storm_JoinGame(const struct FStormGameServerListing& listing);
	class UOnlineGameItemType* GetGlobals(bool bWarn);
	void Exit();
	void OnExit();
	bool PostInit();
	bool Init();
	bool InitializeItemDatabaseCache();
	bool InitializeVoiceChannels();
	bool InitializeServerListing();
};


// Class OnlineSubsystemMeteor.OnlineMailMessage_GameInvite
// 0x00A8 (0x0110 - 0x0068)
class UOnlineMailMessage_GameInvite : public UOnlineMailMessage
{
public:
	struct FString                                     MessageText;                                              // 0x0068(0x000C) (Const, NeedCtorLink)
	struct FStormGameServerListing                     ServerListing;                                            // 0x0074(0x009C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineMailMessage_GameInvite");
		return ptr;
	}

};


// Class OnlineSubsystemMeteor.OnlineMailMessage_PartyInvite
// 0x0024 (0x008C - 0x0068)
class UOnlineMailMessage_PartyInvite : public UOnlineMailMessage
{
public:
	struct FString                                     PartyId;                                                  // 0x0068(0x000C) (Const, NeedCtorLink)
	struct FString                                     FromUserName;                                             // 0x0074(0x000C) (Const, NeedCtorLink)
	struct FString                                     MessageText;                                              // 0x0080(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineMailMessage_PartyInvite");
		return ptr;
	}

};


// Class OnlineSubsystemMeteor.OnlineMailMessage_System
// 0x0018 (0x0080 - 0x0068)
class UOnlineMailMessage_System : public UOnlineMailMessage
{
public:
	struct FString                                     MessageTitle;                                             // 0x0068(0x000C) (Const, NeedCtorLink)
	struct FString                                     MessageBody;                                              // 0x0074(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineMailMessage_System");
		return ptr;
	}

};


// Class OnlineSubsystemMeteor.OnlineMatchmakingManager
// 0x0080 (0x00BC - 0x003C)
class UOnlineMatchmakingManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	unsigned long                                      bIsRankedServer : 1;                                      // 0x0040(0x0004) (Config)
	class UOnlineGameInterfaceMeteor*                  GameInterface;                                            // 0x0044(0x0004)
	class UOnlineSubsystemMeteor*                      OwningSubsystem;                                          // 0x0048(0x0004)
	TEnumAsByte<EMatchmakingManagerState>              MatchmakingState;                                         // 0x004C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FDouble                                     ClientRequestStartTime;                                   // 0x0050(0x0008)
	float                                              ClientRequestTimeout;                                     // 0x0058(0x0004) (Config)
	float                                              ClientUpdateFrequency;                                    // 0x005C(0x0004)
	float                                              ServerUpdateFrequency;                                    // 0x0060(0x0004)
	float                                              AdvertisementHeartbeatFrequency;                          // 0x0064(0x0004)
	struct FPointer                                    ActiveClientRequest;                                      // 0x0068(0x0004) (Const, Native, Transient)
	TArray<struct FPointer>                            ActiveServerAdvertisements;                               // 0x006C(0x000C) (Const, Native, Transient)
	TArray<struct FScriptDelegate>                     FindUnrankedMatchCompletedDelegates;                      // 0x0078(0x000C) (NeedCtorLink)
	int                                                RequestMatchTaskID;                                       // 0x0084(0x0004)
	struct FDouble                                     LastClientUpdate;                                         // 0x0088(0x0008)
	struct FDouble                                     LastLevelChange;                                          // 0x0090(0x0008)
	struct FDouble                                     LastServerAdvertisementsUpdate;                           // 0x0098(0x0008)
	struct FDouble                                     LastAdvertisementHeartbeatTime;                           // 0x00A0(0x0008)
	int                                                LastTotalAvailSlots;                                      // 0x00A8(0x0004)
	TArray<struct FMMPlayerReservation>                ReservedPlayers;                                          // 0x00AC(0x000C) (NeedCtorLink)
	float                                              ReservedPlayerTimeout;                                    // 0x00B8(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineMatchmakingManager");
		return ptr;
	}


	void DumpReservedPlayers();
	void DumpAdvertisements();
	void ShutDown();
	void Init(class UOnlineSubsystemMeteor* OnlineSub);
};


// Class OnlineSubsystemMeteor.OnlinePartyLog
// 0x000C (0x0048 - 0x003C)
class UOnlinePartyLog : public UObject
{
public:
	TArray<struct FPartyLogEntry>                      Entries;                                                  // 0x003C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlinePartyLog");
		return ptr;
	}


	void AddEntry(TEnumAsByte<EPartyLogEntryType> Type, const struct FUniqueNetId& PlayerID, const struct FString& UserNick, const struct FString& Text);
};


// Class OnlineSubsystemMeteor.OnlinePartyManager
// 0x012C (0x0168 - 0x003C)
class UOnlinePartyManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	class UOnlineSubsystemMeteor*                      MeteorOSS;                                                // 0x0040(0x0004) (Transient)
	struct FString                                     OnlinePartyObjectClassName;                               // 0x0044(0x000C) (Config, NeedCtorLink)
	struct FString                                     OnlinePartyMemberObjectClassName;                         // 0x0050(0x000C) (Config, NeedCtorLink)
	struct FPointer                                    XMPPPartyResponseHandler;                                 // 0x005C(0x0004) (Native)
	class UOnlinePartyObject*                          CurrentPartyObject;                                       // 0x0060(0x0004) (Const)
	class UOnlinePartyManagerDelegates*                Delegates;                                                // 0x0064(0x0004)
	unsigned long                                      bCancellingCreateParty : 1;                               // 0x0068(0x0004)
	struct FScriptDelegate                             __OnCreatePartyCompleted__Delegate;                       // 0x006C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLeavePartyCompleted__Delegate;                        // 0x0078(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnInviteToPartyCompleted__Delegate;                     // 0x0084(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnInvitedToParty__Delegate;                             // 0x0090(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptPartyInvitationCompleted__Delegate;             // 0x009C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeclinePartyInvitationCompleted__Delegate;            // 0x00A8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerJoinedParty__Delegate;                          // 0x00B4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerLeftParty__Delegate;                            // 0x00C0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnKickFromPartyCompleted__Delegate;                     // 0x00CC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerKickedFromParty__Delegate;                      // 0x00D8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPromoteToLeaderCompleted__Delegate;                   // 0x00E4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPartyLeaderChanged__Delegate;                         // 0x00F0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPartyMemberChanged__Delegate;                         // 0x00FC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSendMessageToPartyCompleted__Delegate;                // 0x0108(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPartyMessageReceived__Delegate;                       // 0x0114(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPartyDeploying__Delegate;                             // 0x0120(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPartyDeploymentCancelled__Delegate;                   // 0x012C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPartyTravelRequestReceived__Delegate;                 // 0x0138(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPartyMatchmakingStarted__Delegate;                    // 0x0144(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPartyMatchmakingCanceled__Delegate;                   // 0x0150(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPartyVoiceChannelChanged__Delegate;                   // 0x015C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlinePartyManager");
		return ptr;
	}


	void OnPartyVoiceChannelChanged(const struct FString& VoiceChannelUri);
	TEnumAsByte<ENetworkErrorCode> InvitePartyToGame(int* InvitesSent);
	void OnPartyMatchmakingCanceled(TEnumAsByte<EMMCancelReason> Reason);
	void OnPartyMatchmakingStarted();
	void NotifyMatchmakingCanceled(TEnumAsByte<EMMCancelReason> Reason);
	void NotifyMatchmakingStarted();
	void OnPartyTravelRequestReceived(const struct FStormGameServerListing& GameToJoin, bool bHasReservation);
	void TellPartyToTravel(const struct FStormGameServerListing& GameToJoin, bool bHasReservation);
	void OnPartyDeploymentCancelled(TEnumAsByte<EMMCancelReason> Reason);
	void CancelDeploy(TEnumAsByte<EMMCancelReason> Reason);
	void OnPartyDeploying(int CountdownTime);
	void DeployParty(int CountdownTime);
	void SendDataToParty(const struct FString& DataName, const struct FString& DataValue);
	void OnPartyMessageReceived(class UOnlinePartyMemberObject* PartyMemberObject, const struct FString& Message);
	void OnSendMessageToPartyCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& Message);
	int SendMessageToParty(const struct FString& Message);
	void OnPartyMemberChanged(class UOnlinePartyMemberObject* PartyMemberObject);
	void OnPartyLeaderChanged(class UOnlinePartyMemberObject* NewLeaderMemberObject);
	void OnPromoteToLeaderCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID);
	int PromoteToLeader(struct FUniqueNetId* PlayerID);
	void OnPlayerKickedFromParty(class UOnlinePartyMemberObject* PartyMemberObject);
	void OnKickFromPartyCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID);
	int KickFromParty(struct FUniqueNetId* PlayerID);
	void OnPlayerLeftParty(class UOnlinePartyMemberObject* PartyMemberObject);
	void OnPlayerJoinedParty(class UOnlinePartyMemberObject* PartyMemberObject, bool bNewMember);
	void OnDeclinePartyInvitationCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& InviteMessageId);
	int DeclinePartyInvitation(const struct FString& InviteMessageId);
	void OnAcceptPartyInvitationCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& InviteMessageId, class UOnlinePartyObject* PartyObject);
	int AcceptPartyInvitation(const struct FString& InviteMessageId);
	void OnInvitedToParty(int TaskID, const struct FString& Message);
	void OnInviteToPartyCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FUniqueNetId& PlayerID, const struct FString& Message, class UOnlinePartyObject* PartyObject);
	int InviteToParty(const struct FString& Message, struct FUniqueNetId* PlayerID);
	void OnLeavePartyCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode);
	int LeaveParty();
	void OnCreatePartyCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode, class UOnlinePartyObject* PartyObject);
	void CancelCreate();
	int CreateParty(const struct FString& GameType, bool bAreMembersAllowedToInvite, bool bIsInviteOnly);
	void ShutDown();
	void Init(class UOnlineSubsystem* OnlineSub);
};


// Class OnlineSubsystemMeteor.OnlinePartyManagerDelegates
// 0x00FC (0x0138 - 0x003C)
class UOnlinePartyManagerDelegates : public UObject
{
public:
	TArray<struct FScriptDelegate>                     CreatePartyCompletedDelegates;                            // 0x003C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LeavePartyCompletedDelegates;                             // 0x0048(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     InvitedToPartyDelegates;                                  // 0x0054(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     InviteToPartyCompletedDelegates;                          // 0x0060(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AcceptPartyInvitationCompletedDelegates;                  // 0x006C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeclinePartyInvitationCompletedDelegates;                 // 0x0078(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PlayerJoinedPartyDelegates;                               // 0x0084(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PlayerLeftPartyDelegates;                                 // 0x0090(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     KickFromPartyCompletedDelegates;                          // 0x009C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PlayerKickedFromPartyDelegates;                           // 0x00A8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PromoteToLeaderCompletedDelegates;                        // 0x00B4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PartyLeaderChangedDelegates;                              // 0x00C0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PartyMemberChangedDelegates;                              // 0x00CC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PartyMessageReceivedDelegates;                            // 0x00D8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SendMessageToPartyCompletedDelegates;                     // 0x00E4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PartyDeployingDelegates;                                  // 0x00F0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PartyDeploymentCancelledDelegates;                        // 0x00FC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PartyTravelRequestReceivedDelegates;                      // 0x0108(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PartyVoiceChannelChangedDelegates;                        // 0x0114(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PartyMatchmakingCanceledDelegates;                        // 0x0120(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PartyMatchmakingStartedDelegates;                         // 0x012C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlinePartyManagerDelegates");
		return ptr;
	}


	void ClearPartyMatchmakingCanceledDelegate(const struct FScriptDelegate& Delegate);
	void AddPartyMatchmakingCanceledDelegate(const struct FScriptDelegate& Delegate);
	void ClearPartyMatchmakingStartedDelegate(const struct FScriptDelegate& Delegate);
	void AddPartyMatchmakingStartedDelegate(const struct FScriptDelegate& Delegate);
	void ClearPartyVoiceChannelChangedDelegate(const struct FScriptDelegate& Delegate);
	void AddPartyVoiceChannelChangedDelegate(const struct FScriptDelegate& Delegate);
	void ClearPartyTravelRequestReceivedDelegate(const struct FScriptDelegate& Delegate);
	void AddPartyTravelRequestReceivedDelegate(const struct FScriptDelegate& Delegate);
	void ClearPartyDeploymentCancelledDelegate(const struct FScriptDelegate& Delegate);
	void AddPartyDeploymentCancelledDelegate(const struct FScriptDelegate& Delegate);
	void ClearPartyDeployingDelegate(const struct FScriptDelegate& Delegate);
	void AddPartyDeployingDelegate(const struct FScriptDelegate& Delegate);
	void ClearPartyMessageReceivedDelegate(const struct FScriptDelegate& Delegate);
	void AddPartyMessageReceivedDelegate(const struct FScriptDelegate& Delegate);
	void ClearSendMessageToPartyCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddSendMessageToPartyCompletedDelegate(const struct FScriptDelegate& Delegate);
	void ClearPartyMemberChangedDelegate(const struct FScriptDelegate& Delegate);
	void AddPartyMemberChangedDelegate(const struct FScriptDelegate& Delegate);
	void ClearPartyLeaderChangedDelegate(const struct FScriptDelegate& Delegate);
	void AddPartyLeaderChangedDelegate(const struct FScriptDelegate& Delegate);
	void ClearPromoteToLeaderCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddPromoteToLeaderCompletedDelegate(const struct FScriptDelegate& Delegate);
	void ClearPlayerKickedFromPartyDelegate(const struct FScriptDelegate& Delegate);
	void AddPlayerKickedFromPartyDelegate(const struct FScriptDelegate& Delegate);
	void ClearKickFromPartyCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddKickFromPartyCompletedDelegate(const struct FScriptDelegate& Delegate);
	void ClearPlayerLeftPartyDelegate(const struct FScriptDelegate& Delegate);
	void AddPlayerLeftPartyDelegate(const struct FScriptDelegate& Delegate);
	void ClearPlayerJoinedPartyDelegate(const struct FScriptDelegate& Delegate);
	void AddPlayerJoinedPartyDelegate(const struct FScriptDelegate& Delegate);
	void ClearDeclinePartyInvitationCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddDeclinePartyInvitationCompletedDelegate(const struct FScriptDelegate& Delegate);
	void ClearAcceptPartyInvitationCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddAcceptPartyInvitationCompletedDelegate(const struct FScriptDelegate& Delegate);
	void ClearInvitedToPartyDelegate(const struct FScriptDelegate& Delegate);
	void AddInvitedToPartyDelegate(const struct FScriptDelegate& Delegate);
	void ClearInviteToPartyCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddInviteToPartyCompletedDelegate(const struct FScriptDelegate& Delegate);
	void ClearLeavePartyCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddLeavePartyCompletedDelegate(const struct FScriptDelegate& Delegate);
	void ClearCreatePartyCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddCreatePartyCompletedDelegate(const struct FScriptDelegate& Delegate);
};


// Class OnlineSubsystemMeteor.OnlinePartyMemberObject
// 0x0024 (0x0060 - 0x003C)
class UOnlinePartyMemberObject : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                                 // 0x003C(0x0010) (Const)
	struct FString                                     UserNick;                                                 // 0x004C(0x000C) (Const, NeedCtorLink)
	unsigned long                                      bLeader : 1;                                              // 0x0058(0x0004)
	class UOnlineClanInfo*                             ClanInfo;                                                 // 0x005C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlinePartyMemberObject");
		return ptr;
	}

};


// Class OnlineSubsystemMeteor.OnlinePartyObject
// 0x0038 (0x0074 - 0x003C)
class UOnlinePartyObject : public UObject
{
public:
	struct FString                                     PartyId;                                                  // 0x003C(0x000C) (Const, NeedCtorLink)
	struct FString                                     GameType;                                                 // 0x0048(0x000C) (Const, NeedCtorLink)
	TArray<class UOnlinePartyMemberObject*>            Members;                                                  // 0x0054(0x000C) (Const, NeedCtorLink)
	struct FString                                     VoiceChannelUri;                                          // 0x0060(0x000C) (Const, NeedCtorLink)
	unsigned long                                      bAreMembersAllowedToInvite : 1;                           // 0x006C(0x0004) (Const)
	unsigned long                                      bIsInviteOnly : 1;                                        // 0x006C(0x0004) (Const)
	class UOnlinePartyLog*                             LogHistory;                                               // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlinePartyObject");
		return ptr;
	}


	class UOnlinePartyMemberObject* GetMemberFromUserNick(const struct FString& UserNick);
	class UOnlinePartyMemberObject* GetMember(struct FUniqueNetId* PlayerID);
	bool IsLeader(struct FUniqueNetId* PlayerID);
	bool IsMember(struct FUniqueNetId* PlayerID);
	struct FString GetPartyId();
	void ShutDown();
	void Init();
};


// Class OnlineSubsystemMeteor.OnlinePlayerSettings
// 0x003C (0x0078 - 0x003C)
class UOnlinePlayerSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlinePlayerSettings.SettingsMap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlinePlayerSettings");
		return ptr;
	}


	void GetKeys(TArray<struct FString>* SettingKeys);
	void Empty();
	struct FString GetSetting(int Index);
	bool IsEmpty();
	int Num();
	bool HasSetting(const struct FString& Key);
	bool GetSettingBool(const struct FString& Key, bool Default);
	int GetSettingInt(const struct FString& Key, int Default);
	float GetSettingFloat(const struct FString& Key, float Default);
	struct FString GetSettingString(const struct FString& Key, const struct FString& Default);
	void SetSettingBool(const struct FString& Key, bool Value);
	void SetSettingInt(const struct FString& Key, int Value);
	void SetSettingFloat(const struct FString& Key, float Value);
	void SetSettingString(const struct FString& Key, const struct FString& Value);
};


// Class OnlineSubsystemMeteor.OnlinePlayerStats
// 0x0040 (0x007C - 0x003C)
class UOnlinePlayerStats : public UObject
{
public:
	TEnumAsByte<EOnlinePlayerStats_State>              StatsState;                                               // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x3C];                                      // 0x003D(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlinePlayerStats.StatsMap

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlinePlayerStats");
		return ptr;
	}


	void MergeAllIncrements();
	void Empty();
	bool SetIntStatIfSmaller(const struct FString& Key, int Value);
	bool SetIntStatIfGreater(const struct FString& Key, int Value);
	bool SetFloatStatIfSmaller(const struct FString& Key, float Value);
	bool SetFloatStatIfGreater(const struct FString& Key, float Value);
	void IncrementIntStat(const struct FString& Key, int Increment);
	void IncrementFloatStat(const struct FString& Key, float Increment);
	int GetIntStat(const struct FString& Key);
	float GetFloatStat(const struct FString& Key);
	void SetIntStat(const struct FString& Key, int Value);
	void SetFloatStat(const struct FString& Key, float Value);
	struct FString GetIncrementAsString(const struct FString& Key);
	float GetValueAsFloat(const struct FString& Key);
	int GetValueAsInt(const struct FString& Key);
	struct FString GetValueAsString(const struct FString& Key);
	void SetInitialValueFromString(const struct FString& Key, const struct FString& Value);
	bool HasStat(const struct FString& Key);
	void AddFloatStat(const struct FString& Key, float Value);
	void AddIntStat(const struct FString& Key, int Value);
};


// Class OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor
// 0x0014 (0x00AC - 0x0098)
class UOnlineRecentPlayersListMeteor : public UOnlineRecentPlayersList
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0098(0x0004) (Const, Native, NoExport)
	unsigned long                                      bInitialized : 1;                                         // 0x009C(0x0004) (Transient)
	unsigned long                                      bIsDirty : 1;                                             // 0x009C(0x0004) (Transient)
	unsigned long                                      bUpdateRecentPlayersEx : 1;                               // 0x009C(0x0004)
	float                                              LastRecentPlayersExTime;                                  // 0x00A0(0x0004)
	class UOnlineSubsystemMeteor*                      OwningSubsystem;                                          // 0x00A4(0x0004)
	float                                              UpdateRecentPlayersExFrequency;                           // 0x00A8(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineRecentPlayersListMeteor");
		return ptr;
	}


	void WritePersistentData();
	void DecodeRecentPlayersJson(const struct FString& ToDecode);
	void OnReadUserSettingsComplete(bool bWasSuccessful, class UOnlinePlayerSettings* Settings, const struct FUniqueNetId& PlayerID);
	void ReadPersistantData();
	void FixupRecentPlayersEx();
	void AddPlayerToRecentPlayers(const struct FUniqueNetId& NewPlayer);
	void Init();
};


// Class OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection
// 0x0041 (0x007D - 0x003C)
class UOnlineUnlockedAchievementCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x003C(0x003C) UNKNOWN PROPERTY: MapProperty OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.UnlockedAchievementsMap
	struct FPointer                                    UnlockedAchievementIterator;                              // 0x0078(0x0004) (Native, Transient)
	TEnumAsByte<EUnlockedAchievementCollectionState>   CollectionState;                                          // 0x007C(0x0001) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection");
		return ptr;
	}


	bool GetNextUnlockedAchievement(struct FOnlineUnlockedAchievement* OutUnlockedAchievement);
	void ResetUnlockedAchievementIterator();
	bool IsUnlocked(struct FUniqueNetId* AchievementGuid);
	bool GetUnlockedAchievement(struct FUniqueNetId* AchievementGuid, struct FOnlineUnlockedAchievement* OutUnlockedAchievement);
	int NumUnlockedAchievements();
};


// Class OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor
// 0x02F0 (0x032C - 0x003C)
class UOnlineXMPPInterfaceMeteor : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	unsigned long                                      bIsConnected : 1;                                         // 0x0040(0x0004) (Const)
	unsigned long                                      bIsConnecting : 1;                                        // 0x0040(0x0004) (Const)
	unsigned long                                      HACK_bRefreshFriendListPeriodically : 1;                  // 0x0040(0x0004)
	unsigned long                                      HACK_bRefreshFriendListPeriodicallyPreviousValue : 1;     // 0x0040(0x0004)
	unsigned long                                      bFriendsListDirty : 1;                                    // 0x0040(0x0004)
	class UOnlineFriendCollection*                     FriendCollection;                                         // 0x0044(0x0004) (Const)
	TArray<class UOnlineMailMessage*>                  MailMessageArray;                                         // 0x0048(0x000C) (Const, NeedCtorLink)
	struct FPointer                                    XMPPResponseHandler;                                      // 0x0054(0x0004) (Native)
	class UOnlineSubsystemMeteor*                      MeteorOSS;                                                // 0x0058(0x0004)
	float                                              HACK_FriendListRefreshTimeInterval;                       // 0x005C(0x0004)
	float                                              HACK_FriendListRefreshElapsedTime;                        // 0x0060(0x0004)
	struct FString                                     DownloadingMailMessageId;                                 // 0x0064(0x000C) (NeedCtorLink)
	struct FString                                     Default_GameInvite_Text;                                  // 0x0070(0x000C) (Const, Localized, NeedCtorLink)
	class UOnlineClanInfo*                             CachedClanInfo;                                           // 0x007C(0x0004)
	TArray<struct FOnlineFriend>                       ClanMembers;                                              // 0x0080(0x000C) (NeedCtorLink)
	TArray<class UOnlineClanMessage*>                  ClanMessages;                                             // 0x008C(0x000C) (NeedCtorLink)
	int                                                ClanInfoRefreshRequestID;                                 // 0x0098(0x0004)
	float                                              ClanInfoRefreshInterval;                                  // 0x009C(0x0004)
	float                                              LastClanInfoRefreshTime;                                  // 0x00A0(0x0004)
	TArray<struct FScriptDelegate>                     ConnectionChangedDelegates;                               // 0x00A4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendRequestSentDelegates;                               // 0x00B0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendRequestAcceptedByFriendDelegates;                   // 0x00BC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendRequestAcceptedDelegates;                           // 0x00C8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendRequestDeclinedDelegates;                           // 0x00D4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendPresenceUpdatedDelegates;                           // 0x00E0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendChatMessageReceivedDelegates;                       // 0x00EC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendRemovedDelegates;                                   // 0x00F8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendsListRefreshedDelegates;                            // 0x0104(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendServerCompletedDelegates;                       // 0x0110(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SendGameInviteCompletedDelegates;                         // 0x011C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MailMessageListRefreshedDelegates;                        // 0x0128(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MailMessageReceivedDelegates;                             // 0x0134(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MailMessageDeletedDelegates;                              // 0x0140(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MailMessageDownloadedDelegates;                           // 0x014C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AntiAddictionMessageReceivedDelegates;                    // 0x0158(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     CreateClanCompleteDelegates;                              // 0x0164(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DestroyClanCompleteDelegates;                             // 0x0170(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ChangeClanInfoCompleteDelegates;                          // 0x017C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClanInfoChangedDelegates;                                 // 0x0188(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadClanMembersCompleteDelegates;                         // 0x0194(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MembersChangedDelegates;                                  // 0x01A0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ChangeClanLeaderCompleteDelegates;                        // 0x01AC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindClanCompleteDelegates;                                // 0x01B8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClanInviteReceivedDelegates;                              // 0x01C4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClanInviteAcceptedDelegates;                              // 0x01D0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceiveClanMessageDelegates;                              // 0x01DC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionChanged__Delegate;                          // 0x01E8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendRequestSent__Delegate;                          // 0x01F4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendRequestAcceptedByFriend__Delegate;              // 0x0200(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendRequestAccepted__Delegate;                      // 0x020C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendRequestDeclined__Delegate;                      // 0x0218(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendPresenceUpdated__Delegate;                      // 0x0224(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendChatMessageReceived__Delegate;                  // 0x0230(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendRemoved__Delegate;                              // 0x023C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsListRefreshed__Delegate;                       // 0x0248(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendServerCompleted__Delegate;                  // 0x0254(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSendGameInviteCompleted__Delegate;                    // 0x0260(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnMailMessageReceived__Delegate;                        // 0x026C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnMailMessageDeleted__Delegate;                         // 0x0278(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnMailMessageListRefreshed__Delegate;                   // 0x0284(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnMailMessageDownloaded__Delegate;                      // 0x0290(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAntiAddictionMessageReceived__Delegate;               // 0x029C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateClanComplete__Delegate;                         // 0x02A8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyClanComplete__Delegate;                        // 0x02B4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnChangeClanInfoComplete__Delegate;                     // 0x02C0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnClanInfoChanged__Delegate;                            // 0x02CC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadClanMembersComplete__Delegate;                    // 0x02D8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnMembersChanged__Delegate;                             // 0x02E4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnChangeClanLeaderComplete__Delegate;                   // 0x02F0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFindClanComplete__Delegate;                           // 0x02FC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnClanInviteReceived__Delegate;                         // 0x0308(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnClanInviteAccepted__Delegate;                         // 0x0314(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceiveClanMessage__Delegate;                         // 0x0320(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.OnlineXMPPInterfaceMeteor");
		return ptr;
	}


	void DebugReceiveFakeEmergencyMessage();
	void DebugReceiveFakeAntiAddictionMessage(int AAMessageId);
	void DebugBulkAddFakeFriends(int NumFakeFriends, bool bFakeOnline, bool bGenerateGUIDs);
	void DebugAddFakeFriends();
	void DebugPrintMailMessage(class UOnlineMailMessage* MailMessage);
	void DebugPrintFriend(const struct FOnlineFriend& Friend);
	void OnFindPlayerClan_Update(int RequestID, bool bWasSuccessful, class UOnlineClanInfo* ClanInfo);
	void UpdatePlayerClanInfo();
	void ClearMessageHistory();
	void GetMessageHistory(TArray<class UOnlineClanMessage*>* Messages);
	void ClearReceiveClanMessageDelegate(const struct FScriptDelegate& Delegate);
	void AddReceiveClanMessageDelegate(const struct FScriptDelegate& Delegate);
	void OnReceiveClanMessage(class UOnlineClanMessage* Message);
	bool SendClanMessage(class UOnlineClanMessage* Message);
	void ClearClanInviteAcceptedDelegate(const struct FScriptDelegate& Delegate);
	void AddClanInviteAcceptedDelegate(const struct FScriptDelegate& Delegate);
	void OnClanInviteAccepted(class UOnlineClanInfo* ClanInfo);
	bool AcceptClanInvitation(struct FUniqueNetId* ClanId);
	void ClearClanInviteReceivedDelegate(const struct FScriptDelegate& Delegate);
	void AddClanInviteReceivedDelegate(const struct FScriptDelegate& Delegate);
	void OnClanInviteReceived(class UOnlineClanMessage* Invite);
	bool RemovePlayerFromClan(struct FUniqueNetId* PlayerID);
	bool SendClanInvite(const struct FString& Message, struct FUniqueNetId* PlayerID);
	void ClearFindClanCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddFindClanCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnFindClanComplete(int RequestID, bool bWasSuccessful, class UOnlineClanInfo* ClanInfo);
	int FindPlayerClan(struct FUniqueNetId* PlayerID);
	int FindClanByTag(const struct FName& ClanTag);
	int FindClanByName(const struct FName& ClanName);
	int FindClanById(struct FUniqueNetId* ClanId);
	void ClearChangeClanLeaderCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddChangeClanLeaderCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnChangeClanLeaderComplete(bool bWasSuccessful);
	bool ChangeClanLeader(struct FUniqueNetId* PlayerID);
	bool GetClanMember(struct FUniqueNetId* PlayerID, struct FOnlineFriend* Friend);
	bool IsClanMember(struct FUniqueNetId* PlayerID);
	void ClearMembersChangedDelegate(const struct FScriptDelegate& Delegate);
	void AddMembersChangedDelegate(const struct FScriptDelegate& Delegate);
	void OnMembersChanged(TArray<struct FOnlineFriend> Members);
	void GetClanMembers(TArray<struct FOnlineFriend>* Members);
	void ClearReadClanMembersCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddReadClanMembersCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnReadClanMembersComplete(bool bWasSuccessful);
	bool ReadClanMembers();
	void ClearClanInfoChangedDelegate(const struct FScriptDelegate& Delegate);
	void AddClanInfoChangedDelegate(const struct FScriptDelegate& Delegate);
	void OnClanInfoChanged(class UOnlineClanInfo* ClanInfo);
	void ClearChangeClanInfoCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddChangeClanInfoCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnChangeClanInfoComplete(bool bWasSuccessful);
	bool ChangeClanInfo(class UOnlineClanInfo* ClanInfo);
	void ClearDestroyClanCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddDestroyClanCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnDestroyClanComplete(bool bWasSuccessful);
	bool DestroyClan();
	void ClearCreateClanCompleteDelegate(const struct FScriptDelegate& Delegate);
	void AddCreateClanCompleteDelegate(const struct FScriptDelegate& Delegate);
	void OnCreateClanComplete(bool bWasSuccessful);
	bool CreateClan(class UOnlineClanInfo* ClanInfo);
	class UOnlineClanInfo* GetClanInfo();
	void ClearAntiAddictionMessageReceivedDelegate(const struct FScriptDelegate& Delegate);
	void AddAntiAddictionMessageReceivedDelegate(const struct FScriptDelegate& Delegate);
	void OnAntiAddictionMessageReceived(int AAMessageId);
	void ClearMailMessageDownloadedDelegate(const struct FScriptDelegate& Delegate);
	void AddMailMessageDownloadedDelegate(const struct FScriptDelegate& Delegate);
	void OnMailMessageDownloaded(class UOnlineMailMessage* MailMessage);
	void ClearMailMessageListRefreshedDelegate(const struct FScriptDelegate& Delegate);
	void AddMailMessageListRefreshedDelegate(const struct FScriptDelegate& Delegate);
	void OnMailMessageListRefreshed();
	void ClearMailMessageDeletedDelegate(const struct FScriptDelegate& Delegate);
	void AddMailMessageDeletedDelegate(const struct FScriptDelegate& Delegate);
	void OnMailMessageDeleted(class UOnlineMailMessage* MailMessage);
	void ClearMailMessageReceivedDelegate(const struct FScriptDelegate& Delegate);
	void AddMailMessageReceivedDelegate(const struct FScriptDelegate& Delegate);
	void OnMailMessageReceived(class UOnlineMailMessage* MailMessage);
	void ClearSendGameInviteCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddSendGameInviteCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnSendGameInviteCompleted(int TaskID, TEnumAsByte<ENetworkErrorCode> ErrorCode);
	void ClearJoinFriendServerCompletedDelegate(const struct FScriptDelegate& Delegate);
	void AddJoinFriendServerCompletedDelegate(const struct FScriptDelegate& Delegate);
	void OnJoinFriendServerCompleted(TEnumAsByte<ENetworkErrorCode> ErrorCode, bool bTravelingInitiated);
	void ClearFriendsListRefreshedDelegate(const struct FScriptDelegate& Delegate);
	void AddFriendsListRefreshedDelegate(const struct FScriptDelegate& Delegate);
	void OnFriendsListRefreshed();
	void ClearFriendRemovedDelegate(const struct FScriptDelegate& Delegate);
	void AddFriendRemovedDelegate(const struct FScriptDelegate& Delegate);
	void OnFriendRemoved(const struct FUniqueNetId& PlayerID);
	void ClearFriendChatMessageReceivedDelegate(const struct FScriptDelegate& Delegate);
	void AddFriendChatMessageReceivedDelegate(const struct FScriptDelegate& Delegate);
	void OnFriendChatMessageReceived(const struct FOnlineFriend& Friend, const struct FChatMessage& Message);
	void ClearFriendPresenceUpdatedDelegate(const struct FScriptDelegate& Delegate);
	void AddFriendPresenceUpdatedDelegate(const struct FScriptDelegate& Delegate);
	void OnFriendPresenceUpdated(const struct FOnlineFriend& Friend);
	void ClearFriendRequestDeclinedDelegate(const struct FScriptDelegate& Delegate);
	void AddFriendRequestDeclinedDelegate(const struct FScriptDelegate& Delegate);
	void OnFriendRequestDeclined(const struct FString& MessageId);
	void ClearFriendRequestAcceptedDelegate(const struct FScriptDelegate& Delegate);
	void AddFriendRequestAcceptedDelegate(const struct FScriptDelegate& Delegate);
	void OnFriendRequestAccepted(TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& MessageId);
	void ClearFriendRequestAcceptedByFriendDelegate(const struct FScriptDelegate& Delegate);
	void AddFriendRequestAcceptedByFriendDelegate(const struct FScriptDelegate& Delegate);
	void OnFriendRequestAcceptedByFriend(const struct FOnlineFriend& Friend);
	void ClearFriendRequestSentDelegate(const struct FScriptDelegate& Delegate);
	void AddFriendRequestSentDelegate(const struct FScriptDelegate& Delegate);
	void OnFriendRequestSent(TEnumAsByte<ENetworkErrorCode> ErrorCode, const struct FString& Email, const struct FString& Callsign, const struct FUniqueNetId& PlayerID);
	void ClearConnectionChangedDelegate(const struct FScriptDelegate& Delegate);
	void AddConnectionChangedDelegate(const struct FScriptDelegate& Delegate);
	void OnConnectionChanged(bool bConnected, bool bConnecting);
	void MarkMailMessageAsRead(const struct FString& MessageId);
	void DeleteMailMessage(const struct FString& MessageId);
	void DeclineGameInvite(const struct FString& MessageId);
	TEnumAsByte<ENetworkErrorCode> AcceptGameInvite(const struct FString& MessageId, const struct FString& Password);
	int SendGameInvite(const struct FString& Message, struct FUniqueNetId* PlayerID);
	void CancelJoinFriendServer();
	TEnumAsByte<ENetworkErrorCode> JoinFriendServer(struct FUniqueNetId* PlayerID);
	TEnumAsByte<ENetworkErrorCode> MarkFriendChatMessageAsRead(const struct FString& MessageId, struct FUniqueNetId* PlayerID);
	TEnumAsByte<ENetworkErrorCode> SendFriendChatMessage(const struct FString& Message, struct FUniqueNetId* PlayerID);
	void RemoveFromFriendsList(struct FUniqueNetId* UserId);
	void DeclineFriendRequest(const struct FString& MessageId);
	TEnumAsByte<ENetworkErrorCode> AcceptFriendRequest(const struct FString& MessageId);
	void SendFriendRequestFromCallsign(const struct FString& Callsign);
	void SendFriendRequestFromEmail(const struct FString& Email);
	void SendFriendRequestFromUserId(struct FUniqueNetId* PlayerID);
	bool IsInFriendsList(struct FUniqueNetId* PlayerID);
	void Disconnect();
	void Connect();
	void ShutDown();
	void Init(class UOnlineSubsystemMeteor* OnlineSubsystem);
};


// Class OnlineSubsystemMeteor.PartyBeaconHostMeteor
// 0x0004 (0x00D4 - 0x00D0)
class UPartyBeaconHostMeteor : public UPartyBeaconHost
{
public:
	unsigned long                                      bAutoBalanceTeams : 1;                                    // 0x00D0(0x0004)
	unsigned long                                      bBalancedTeamAssignment : 1;                              // 0x00D0(0x0004)
	unsigned long                                      bKeepUnverifiedReservations : 1;                          // 0x00D0(0x0004)
	unsigned long                                      bSyncMatchmakingManager : 1;                              // 0x00D0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.PartyBeaconHostMeteor");
		return ptr;
	}


	void AddFakeReservation(int Glicko1, int Level1, int MatchScore1, int Glicko2, int Level2, int MatchScore2, int Glicko3, int Level3, int MatchScore3);
	void DumpReservations();
	bool UpdatePlayerScore(const struct FUniqueNetId& PlayerID, int Score);
	bool UpdatePartyReservationTeam(const struct FUniqueNetId& PartyLeader, int TeamIndex, bool bForceUpdate);
	bool SplitPartyReservation(const struct FUniqueNetId& PlayerID, int TeamIndex);
	bool ReconfigureTeamAndPlayerCount(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations);
	void RebalancePendingTeamAssignments();
	void RebalanceTeamAssignments();
	void HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty);
	int GetPartyTotalXpLevel(const struct FPartyReservation& Reservation);
	int GetPartyTotalSkill(const struct FPartyReservation& Reservation);
	int GetTeamForCurrentPlayer(const struct FUniqueNetId& Player);
	int GetExistingReservation(struct FUniqueNetId* Player);
	int GetNumPlayersOnTeamWrapper(int I);
};


// Class OnlineSubsystemMeteor.StormEventObject
// 0x0048 (0x0084 - 0x003C)
class UStormEventObject : public UObject
{
public:
	struct FStormEventNoun                             Subject;                                                  // 0x003C(0x0018) (NeedCtorLink)
	struct FString                                     Verb;                                                     // 0x0054(0x000C) (NeedCtorLink)
	struct FStormEventNoun                             Target;                                                   // 0x0060(0x0018) (NeedCtorLink)
	TArray<struct FDataValue>                          AdditionalData;                                           // 0x0078(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemMeteor.StormEventObject");
		return ptr;
	}


	void AddData(const struct FString& Key, const struct FString& Value);
	struct FString DumpEventData(const struct FName& LogPrefix);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
