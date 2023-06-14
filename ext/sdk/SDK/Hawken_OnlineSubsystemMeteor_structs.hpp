#pragma once

// Hawken (1.5.3.142579) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_OAC_TYPE_CLASSIC                                   "Classic"
#define CONST_OAC_TYPE_WEEKLY_CHALLENGE                          "WeeklyChallenge"
#define CONST_OAC_TYPE_DAILY_BONUS                               "DailyBonus"
#define CONST_OAC_TYPE_DAILY_CHALLENGE                           "DailyChallenge"
#define CONST_OAC_NAME_STAT_THRESHOLD_NAME                       "StatThresholdName"
#define CONST_OAC_TYPE_MECH_CHALLENGE                            "MechChallenge"
#define CONST_OAC_NAME_STAT_THRESHOLD_VALUE                      "StatThresholdValue"
#define CONST_OAC_REWARD_MC                                      "MP"
#define CONST_OAC_NAME_HIDE_WHEN_LOCKED                          "HideWhenLocked"
#define CONST_OAC_NAME_ACHIEVEMENT_TYPE                          "AchievementType"
#define CONST_OAC_TYPE_INTERNAL                                  "Internal"
#define CONST_OAC_NAME_DISPLAY_UNITS_DIVIDER                     "DisplayUnitsDivider"
#define CONST_OAC_NAME_DISPLAY_SORT_ORDER                        "DisplaySortOrder"
#define CONST_OAC_REWARD_HC                                      "HP"
#define CONST_OAC_REWARD_AP                                      "AchievementPoints"
#define CONST_OAC_TYPE_TRUE                                      "True"
#define CONST_OAC_VALUE_DEFAULT_DISPLAY_SORT_ORDER               9999999
#define CONST_OAC_TYPE_FALSE                                     "False"
#define CONST_GlobalsInvType                                     41
#define CONST_STAT_FLOAT_EPSILON                                 0.00001

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemMeteor.OnlineAchievementCollection.EAchievementCollectionState
enum class EAchievementCollectionState : uint8_t
{
	ACS_NOT_LOADED                 = 0,
	ACS_LOADING                    = 1,
	ACS_LOADED                     = 2,
	ACS_ERROR                      = 3,
	ACS_MAX                        = 4
};


// Enum OnlineSubsystemMeteor.OnlineAchievementObject.OnlineAchievementType
enum class EOnlineAchievementType : uint8_t
{
	OAT_None                       = 0,
	OAT_Classic                    = 1,
	OAT_DailyBonus                 = 2,
	OAT_DailyChallenge             = 3,
	OAT_WeeklyChallenge            = 4,
	OAT_MechChallenge              = 5,
	OAT_Internal                   = 6,
	OAT_MAX                        = 7
};


// Enum OnlineSubsystemMeteor.OnlineGameOffer.EOfferCurrency
enum class EOfferCurrency : uint8_t
{
	EOfferCurrency_MeteorPoints    = 0,
	EOfferCurrency_HawkenPoints    = 1,
	EOfferCurrency_MAX             = 2
};


// Enum OnlineSubsystemMeteor.OnlineGameBundle.EBundleCurrency
enum class EBundleCurrency : uint8_t
{
	EBundleCurrency_MeteorPoints   = 0,
	EBundleCurrency_HawkenPoints   = 1,
	EBundleCurrency_MAX            = 2
};


// Enum OnlineSubsystemMeteor.OnlineSubsystemMeteor.ESettingsCategory
enum class ESettingsCategory : uint8_t
{
	ESettingsCategory_Game         = 0,
	ESettingsCategory_Web          = 1,
	ESettingsCategory_Meteor       = 2,
	ESettingsCategory_PublicReadOnly = 3,
	ESettingsCategory_MAX          = 4
};


// Enum OnlineSubsystemMeteor.OnlineSubsystemMeteor.ENetworkErrorCode
enum class ENetworkErrorCode : uint8_t
{
	NETWORK_OK                     = 0,
	NETWORK_ERROR                  = 1,
	NETWORK_SERVER_FULL            = 2,
	NETWORK_SERVER_RESERVATION_FAILED = 3,
	NETWORK_SERVER_CONNECTION_FAILED = 4,
	NETWORK_INVALID_USER           = 5,
	NETWORK_INVALID_MESSAGE        = 6,
	NETWORK_FRIEND_NOT_PLAYING     = 7,
	NETWORK_ADDING_YOURSELF_AS_FRIEND = 8,
	NETWORK_DOWNLOAD_ALREADY_IN_PROGRESS = 9,
	NETWORK_DOWNLOAD_ALREADY_COMPLETED = 10,
	NETWORK_INSUFFICIENT_FUNDS     = 11,
	NETWORK_INVALID_OFFER          = 12,
	NETWORK_DISABLED_OFFER         = 13,
	NETWORK_PAYMENT_REQUIRED       = 14,
	NETWORK_FRIEND_ON_SAME_SERVER  = 15,
	NETWORK_FRIEND_ALREADY_ADDED   = 16,
	NETWORK_INVALID_ACCESS_GRANT   = 17,
	NETWORK_PARTY_NO_LONGER_EXISTS = 18,
	NETWORK_PURCHASED_SUCCEEDED_BUT_SYNC_FAILED = 19,
	NETWORK_FITNESS_OUT_OF_RANGE   = 20,
	NETWORK_PARTY_ALREADY_DEPLOYED = 21,
	NETWORK_SERVER_UNAVAILABLE     = 22,
	NETWORK_SERVER_INVITEONLY      = 23,
	NETWORK_MAX                    = 24
};


// Enum OnlineSubsystemMeteor.OnlineSubsystemMeteor.EJoinServerFrom
enum class EJoinServerFrom : uint8_t
{
	JSF_MATCHMAKING                = 0,
	JSF_SERVER_BROWSER             = 1,
	JSF_FRIENDS_LIST               = 2,
	JSF_GAME_INVITE                = 3,
	JSF_DIRECT_CONNECT             = 4,
	JSF_MAX                        = 5
};


// Enum OnlineSubsystemMeteor.OnlineFriendObject.ESubscriptionStatus
enum class ESubscriptionStatus : uint8_t
{
	SUB_NONE                       = 0,
	SUB_NONE_OUT                   = 1,
	SUB_NONE_IN                    = 2,
	SUB_NONE_OUT_IN                = 3,
	SUB_TO                         = 4,
	SUB_TO_IN                      = 5,
	SUB_FROM                       = 6,
	SUB_FROM_OUT                   = 7,
	SUB_BOTH                       = 8,
	SUB_MAX                        = 9
};


// Enum OnlineSubsystemMeteor.OnlineGameItemInstanceCollection.EInstanceCollectionState
enum class EInstanceCollectionState : uint8_t
{
	INSTANCE_COLLECTION_NOT_LOADED = 0,
	INSTANCE_COLLECTION_LOADING    = 1,
	INSTANCE_COLLECTION_LOADED     = 2,
	INSTANCE_COLLECTION_ERROR      = 3,
	INSTANCE_COLLECTION_MAX        = 4
};


// Enum OnlineSubsystemMeteor.OnlineMatchmakingManager.MatchmakingManagerState
enum class EMatchmakingManagerState : uint8_t
{
	ALLOW_MATCHMAKING              = 0,
	DISABLE_MATCHMAKING            = 1,
	MatchmakingManagerState_MAX    = 2
};


// Enum OnlineSubsystemMeteor.OnlinePartyLog.EPartyLogEntryType
enum class EPartyLogEntryType : uint8_t
{
	PLET_PartyCreated              = 0,
	PLET_UserJoined                = 1,
	PLET_UserLeft                  = 2,
	PLET_UserKicked                = 3,
	PLET_ChatMessage               = 4,
	PLET_LeaderChanged             = 5,
	PLET_CustomMessage             = 6,
	PLET_MAX                       = 7
};


// Enum OnlineSubsystemMeteor.OnlinePartyManager.EMMCancelReason
enum class EMMCancelReason : uint8_t
{
	EMCR_NONE                      = 0,
	EMCR_LEADER_ACTION             = 1,
	EMCR_LEADER_CHANGE             = 2,
	EMCR_MATCH_FAILURE             = 3,
	EMCR_MEMBER_JOIN               = 4,
	EMCR_MEMBER_LEFT               = 5,
	EMCR_MEMBER_KICKED             = 6,
	EMCR_MAX                       = 7
};


// Enum OnlineSubsystemMeteor.OnlinePlayerStats.EOnlineStatDataType
enum class EOnlineStatDataType : uint8_t
{
	OSDT_INT                       = 0,
	OSDT_FLOAT                     = 1,
	OSDT_MAX                       = 2
};


// Enum OnlineSubsystemMeteor.OnlinePlayerStats.EOnlinePlayerStats_State
enum class EOnlinePlayerStats_State : uint8_t
{
	EOnlinePlayerStats_Invalid     = 0,
	EOnlinePlayerStats_Valid       = 1,
	EOnlinePlayerStats_Reading     = 2,
	EOnlinePlayerStats_Writing     = 3,
	EOnlinePlayerStats_Error       = 4,
	EOnlinePlayerStats_MAX         = 5
};


// Enum OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.EUnlockedAchievementCollectionState
enum class EUnlockedAchievementCollectionState : uint8_t
{
	UACS_NOT_LOADED                = 0,
	UACS_LOADING                   = 1,
	UACS_LOADED                    = 2,
	UACS_ERROR                     = 3,
	UACS_MAX                       = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemMeteor.OnlineAchievementObject.AchievementStatReward
// 0x0010
struct FAchievementStatReward
{
	struct FString                                     Key;                                                      // 0x0000(0x000C) (NeedCtorLink)
	float                                              Amount;                                                   // 0x000C(0x0004)
};

// ScriptStruct OnlineSubsystemMeteor.OnlineAchievementObject.AchievementDeveloperData
// 0x0024
struct FAchievementDeveloperData
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Type;                                                     // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     Value;                                                    // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemMeteor.OnlineGameItem.OnlineGameItemAttribute
// 0x0018
struct FOnlineGameItemAttribute
{
	struct FString                                     Key;                                                      // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Value;                                                    // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemMeteor.OnlineGameOffer.OnlineGameOfferAttribute
// 0x0018
struct FOnlineGameOfferAttribute
{
	struct FString                                     Key;                                                      // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Value;                                                    // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemMeteor.OnlineSubsystemMeteor.StormUserGameItemStats
// 0x0018
struct FStormUserGameItemStats
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0010) (AlwaysInit)
	class UOnlineGameItemInstance*                     Instance;                                                 // 0x0010(0x0004) (AlwaysInit)
	class UOnlinePlayerStats*                          Stats;                                                    // 0x0014(0x0004) (AlwaysInit)
};

// ScriptStruct OnlineSubsystemMeteor.OnlineSubsystemMeteor.StormUserInfo
// 0x0018
struct FStormUserInfo
{
	struct FString                                     Guid;                                                     // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     EmailAddress;                                             // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemMeteor.OnlineSubsystemMeteor.StormGameServerListing
// 0x0099
struct FStormGameServerListing
{
	struct FString                                     ListingGuid;                                              // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     ServerName;                                               // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     MapName;                                                  // 0x0018(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     GameType;                                                 // 0x0024(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     VoiceChannelListing;                                      // 0x0030(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                UserCount;                                                // 0x003C(0x0004) (AlwaysInit)
	int                                                MaxUsers;                                                 // 0x0040(0x0004) (AlwaysInit)
	struct FString                                     EndPoint;                                                 // 0x0044(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                Port;                                                     // 0x0050(0x0004) (AlwaysInit)
	int                                                ServerRanking;                                            // 0x0054(0x0004) (AlwaysInit)
	int                                                ServerScore;                                              // 0x0058(0x0004) (AlwaysInit)
	int                                                AveragePilotLevel;                                        // 0x005C(0x0004) (AlwaysInit)
	struct FString                                     Region;                                                   // 0x0060(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Roles;                                                    // 0x006C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Version;                                                  // 0x0078(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned long                                      AlwaysShowInRegion : 1;                                   // 0x0084(0x0004) (AlwaysInit)
	unsigned long                                      RatingUnlocked : 1;                                       // 0x0084(0x0004) (AlwaysInit)
	struct FString                                     Password;                                                 // 0x0088(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bIgnoreMMR : 1;                                           // 0x0094(0x0004) (AlwaysInit)
	TEnumAsByte<EOnlineMatchState>                     CurrentState;                                             // 0x0098(0x0001) (AlwaysInit)
};

// ScriptStruct OnlineSubsystemMeteor.OnlineMatchmakingManager.MMPlayerReservation
// 0x0058
struct FMMPlayerReservation
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0010) (AlwaysInit)
	unsigned long                                      bConnected : 1;                                           // 0x0010(0x0004) (AlwaysInit)
	unsigned long                                      bVerified : 1;                                            // 0x0010(0x0004) (AlwaysInit)
	int                                                TeamNum;                                                  // 0x0014(0x0004) (AlwaysInit)
	struct FUniqueNetId                                PartyId;                                                  // 0x0018(0x0010) (AlwaysInit)
	struct FUniqueNetId                                PartyLeaderId;                                            // 0x0028(0x0010) (AlwaysInit)
	struct FUniqueNetId                                ClanId;                                                   // 0x0038(0x0010) (AlwaysInit)
	int                                                PilotLevel;                                               // 0x0048(0x0004) (AlwaysInit)
	int                                                SkillRating;                                              // 0x004C(0x0004) (AlwaysInit)
	struct FDouble                                     TimeStamp;                                                // 0x0050(0x0008) (AlwaysInit)
};

// ScriptStruct OnlineSubsystemMeteor.OnlinePartyLog.PartyLogEntry
// 0x002C
struct FPartyLogEntry
{
	TEnumAsByte<EPartyLogEntryType>                    Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FUniqueNetId                                PlayerID;                                                 // 0x0004(0x0010)
	struct FString                                     UserNick;                                                 // 0x0014(0x000C) (NeedCtorLink)
	struct FString                                     Text;                                                     // 0x0020(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemMeteor.OnlineUnlockedAchievementCollection.OnlineUnlockedAchievement
// 0x001C
struct FOnlineUnlockedAchievement
{
	struct FUniqueNetId                                AchievementGuid;                                          // 0x0000(0x0010)
	struct FString                                     DateUnlocked;                                             // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemMeteor.StormEventObject.StormEventNoun
// 0x0018
struct FStormEventNoun
{
	struct FString                                     Type;                                                     // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Id;                                                       // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct OnlineSubsystemMeteor.StormEventObject.DataValue
// 0x0018
struct FDataValue
{
	struct FString                                     Key;                                                      // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Value;                                                    // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct OnlineSubsystemMeteor.OnlineSubsystemMeteor.StormGameServerReservationInfo
// 0x0014
struct FStormGameServerReservationInfo
{
	unsigned long                                      bSlotReserved : 1;                                        // 0x0000(0x0004)
	struct FString                                     EndPoint;                                                 // 0x0004(0x000C) (NeedCtorLink)
	int                                                Port;                                                     // 0x0010(0x0004)
};

// ScriptStruct OnlineSubsystemMeteor.OnlineSubsystemMeteor.StormShopItem
// 0x0018
struct FStormShopItem
{
	struct FString                                     ItemId;                                                   // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     ItemName;                                                 // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemMeteor.OnlineSubsystemMeteor.StormInventoryItem
// 0x001C
struct FStormInventoryItem
{
	struct FString                                     ItemId;                                                   // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     ItemName;                                                 // 0x000C(0x000C) (NeedCtorLink)
	int                                                Count;                                                    // 0x0018(0x0004)
};

// ScriptStruct OnlineSubsystemMeteor.OnlinePlayerStats.OnlineStatData
// 0x000C
struct FOnlineStatData
{
	TEnumAsByte<EOnlineStatDataType>                   StatDataType;                                             // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                InitialValue;                                             // 0x0004(0x0004)
	int                                                Increment;                                                // 0x0008(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
