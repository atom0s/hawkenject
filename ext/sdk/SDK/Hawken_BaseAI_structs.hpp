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

#define CONST_VisCacheStatsWindow                                500
#define CONST_TEAM_AlwaysEnemy                                   253
#define CONST_COVER_ACTION_VISIBILITY_GROUP                      10
#define CONST_TEAM_AlwaysFriend                                  254
#define CONST_PATH_TO_ENEMY_RECHECK_TIMER                        1.0f
#define CONST_kBreadCrumbsMax                                    10
#define CONST_MAX_SO_HUBS                                        16777216
#define CONST_MAX_SO_COMPONENTS                                  255
#define CONST_MAX_SO_ENTRIES                                     15
#define CONST_SOREPLICATION_QUEUE                                20

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum BaseAI.AIDebugTool.ELogDrawingMode
enum class ELogDrawingMode : uint8_t
{
	AIDH_DrawAll                   = 0,
	AIDH_EntryDetails              = 1,
	AIDH_BlackBoard                = 2,
	AIDH_Preconditions             = 3,
	AIDH_SquadEnemy                = 4,
	AIDH_Animation                 = 5,
	AIDH_Covering                  = 6,
	AIDH_Weapon                    = 7,
	AIDH_MAX                       = 8
};


// Enum BaseAI.BaseAITypes.EDebugLineType
enum class EDebugLineType : uint8_t
{
	DLT_Generic                    = 0,
	DLT_InstantFire                = 1,
	DLT_NoPath                     = 2,
	DLT_LeaderFollowing            = 3,
	DLT_Failed                     = 4,
	DLT_Red                        = 5,
	DLT_Green                      = 6,
	DLT_Blue                       = 7,
	DLT_MAX                        = 8
};


// Enum BaseAI.BaseAITypes.ETriBool
enum class ETriBool : uint8_t
{
	ETB_Default                    = 0,
	ETB_False                      = 1,
	ETB_True                       = 2,
	ETB_MAX                        = 3
};


// Enum BaseAI.BaseAITypes.ETargetingRequest
enum class ETargetingRequest : uint8_t
{
	TR_Dont                        = 0,
	TR_IfHasEnemy                  = 1,
	TR_Target                      = 2,
	TR_MAX                         = 3
};


// Enum BaseAI.BaseAITypes.EETQNamedQuery
enum class EETQNamedQuery : uint8_t
{
	ENQ_None                       = 0,
	ENQ_EnemySelection             = 1,
	ENQ_CoverSelection             = 2,
	ENQ_CoverAdjusting             = 3,
	ENQ_MAX                        = 4
};


// Enum BaseAI.BaseAITypes.EBehaviorTag
enum class EBehaviorTag : uint8_t
{
	BTT_None                       = 0,
	BTT_Charge                     = 1,
	BTT_Fallback                   = 2,
	BTT_MAX                        = 3
};


// Enum BaseAI.BaseAITypes.EDistanceClass
enum class EDistanceClass : uint8_t
{
	EDC_None                       = 0,
	EDC_VeryClose                  = 1,
	EDC_Close                      = 2,
	EDC_Medium                     = 3,
	EDC_Large                      = 4,
	EDC_VeryLarge                  = 5,
	EDC_MAX                        = 6
};


// Enum BaseAI.BaseAITypes.ELeaderFollowingMode
enum class ELeaderFollowingMode : uint8_t
{
	LFM_None                       = 0,
	LFM_Lead                       = 1,
	LFM_StayAhead                  = 2,
	LFM_Follow                     = 3,
	LFM_MAX                        = 4
};


// Enum BaseAI.BaseAITypes.ELogicOperation
enum class ELogicOperation : uint8_t
{
	LO_AND                         = 0,
	LO_OR                          = 1,
	LO_XOR                         = 2,
	LO_MAX                         = 3
};


// Enum BaseAI.BaseAITypes.EStridePose
enum class EStridePose : uint8_t
{
	StridePose_Any                 = 0,
	StridePose_OnLeftLeg           = 1,
	StridePose_OnRightLeg          = 2,
	StridePose_MAX                 = 3
};


// Enum BaseAI.BaseAITypes.EBaseMoveType
enum class EBaseMoveType : uint8_t
{
	BMT_Invalid                    = 0,
	BMT_Normal                     = 1,
	BMT_Combat                     = 2,
	BMT_Careful                    = 3,
	BMT_Pain                       = 4,
	BMT_Escape                     = 5,
	BMT_Random                     = 6,
	BMT_MAX                        = 7
};


// Enum BaseAI.BaseAITypes.EBaseMoveMood
enum class EBaseMoveMood : uint8_t
{
	BMM_Invalid                    = 0,
	BMM_Static                     = 1,
	BMM_Slow                       = 2,
	BMM_Normal                     = 3,
	BMM_Fast                       = 4,
	BMM_MAX                        = 5
};


// Enum BaseAI.BaseAITypes.EFocusPriority
enum class EFocusPriority : uint8_t
{
	FP_Invalid                     = 0,
	FP_Movement                    = 1,
	FP_Logic                       = 2,
	FP_Kismet                      = 3,
	FP_MAX                         = 4
};


// Enum BaseAI.BaseAITypes.EActionPriority
enum class EActionPriority : uint8_t
{
	AP_Invalid                     = 0,
	AP_Logic                       = 1,
	AP_Kismet                      = 2,
	AP_Reaction                    = 3,
	AP_MAX                         = 4
};


// Enum BaseAI.BaseAITypes.EDestinationSelectionMethod
enum class EDestinationSelectionMethod : uint8_t
{
	DSM_Best                       = 0,
	DSM_Worst                      = 1,
	DSM_Random                     = 2,
	DSM_RandomBest5                = 3,
	DSM_RandomBest10               = 4,
	DSM_MAX                        = 5
};


// Enum BaseAI.BaseAITypes.ENavLinkType
enum class ENavLinkType : uint8_t
{
	NLT_Mantle                     = 0,
	NLT_Slide                      = 1,
	NLT_Crouch                     = 2,
	NLT_MAX                        = 3
};


// Enum BaseAI.BaseAITypes.ENavPolyArea
enum class ENavPolyArea : uint8_t
{
	NPA_None                       = 0,
	NPA_Empty                      = 1,
	NPA_SubRegular                 = 2,
	NPA_Mantle                     = 3,
	NPA_Slide                      = 4,
	NPA_Crouch                     = 5,
	NPA_Toggleable                 = 6,
	NPA_Avoided                    = 7,
	NPA_MAX                        = 8
};


// Enum BaseAI.BaseAITypes.EWeaponFireMode
enum class EWeaponFireMode : uint8_t
{
	WFM_NormalFire                 = 0,
	WFM_AltFire                    = 1,
	WFM_Reload                     = 2,
	WFM_MAX                        = 3
};


// Enum BaseAI.AIPluginMovement.EMoveRequestDestinationType
enum class EMoveRequestDestinationType : uint8_t
{
	MRDT_Invalid                   = 0,
	MRDT_Vector                    = 1,
	MRDT_Cover                     = 2,
	MRDT_Actor                     = 3,
	MRDT_MAX                       = 4
};


// Enum BaseAI.NavigationPath.ENavigationBodyStance
enum class ENavigationBodyStance : uint8_t
{
	NBS_Invalid                    = 0,
	NBS_Prone                      = 1,
	NBS_Crouch                     = 2,
	NBS_Stand                      = 3,
	NBS_MAX                        = 4
};


// Enum BaseAI.AIPluginMovement.ECtrlMovementMonitorResult
enum class ECtrlMovementMonitorResult : uint8_t
{
	CMMR_NO_CHECK_FOR_CURRENT_MOVE = 0,
	CMMR_THINKS_EVERYTHING_OK      = 1,
	CMMR_NEEDS_REPATH              = 2,
	CMMR_THINKS_STUCK              = 3,
	CMMR_THINKS_STUCK_WHILE_ADJUSTING = 4,
	CMMR_THINKS_OUT_OF_CONTROL     = 5,
	CMMR_NEEDS_ABORT               = 6,
	CMMR_MAX                       = 7
};


// Enum BaseAI.BlackBoard.WSKProp
enum class EWSKProp : uint8_t
{
	WSKP_Enemy                     = 0,
	WSKP_EnemyDistance             = 1,
	WSKP_EnemyStatus               = 2,
	WSKP_EnemyPerception           = 3,
	WSKP_EnemyLOS                  = 4,
	WSKP_EnemyDot                  = 5,
	WSKP_EnemyLastSeen             = 6,
	WSKP_EnemyCanPathTo            = 7,
	WSKP_EnemyPrimaryWeaponStatus  = 8,
	WSKP_EnemySecondaryWeaponStatus = 9,
	WSKP_Cover                     = 10,
	WSKP_CoverStatus               = 11,
	WSKP_CoversAvailable           = 12,
	WSKP_BodyStatus                = 13,
	WSKP_CurrentHealGoal           = 14,
	WSKP_Goal                      = 15,
	WSKP_PrimaryWeaponStatus       = 16,
	WSKP_SecondaryWeaponStatus     = 17,
	WSKP_SpecialDistance           = 18,
	WSKP_ShouldMoveToLeader        = 19,
	WSKP_Leader                    = 20,
	WSKP_ETQQuery                  = 21,
	WSKP_SmartObject               = 22,
	WSKP_Self                      = 23,
	WSKP_DamageMemory              = 24,
	WSKP_DPSTaken                  = 25,
	WSKP_MAX                       = 26
};


// Enum BaseAI.BlackBoard.EWSDamagePerSecTaken
enum class EWSDamagePerSecTaken : uint8_t
{
	WSDPST_None                    = 0,
	WSDPST_Low                     = 1,
	WSDPST_Med                     = 2,
	WSDPST_High                    = 3,
	WSDPST_MAX                     = 4
};


// Enum BaseAI.BlackBoard.EWorldStatePropType
enum class EWorldStatePropType : uint8_t
{
	WSPT_Invalid                   = 0,
	WSPT_Bool                      = 1,
	WSPT_Int                       = 2,
	WSPT_ETQ                       = 3,
	WSPT_Float                     = 4,
	WSPT_Vector                    = 5,
	WSPT_Object                    = 6,
	WSPT_Name                      = 7,
	WSPT_ObjectParam               = 8,
	WSPT_Time                      = 9,
	WSPT_MAX                       = 10
};


// Enum BaseAI.BlackBoard.EWSDamageMemory
enum class EWSDamageMemory : uint8_t
{
	WSDM_Recent                    = 0,
	WSDM_LongAgo                   = 1,
	WSDM_Never                     = 2,
	WSDM_MAX                       = 3
};


// Enum BaseAI.BlackBoard.EWSSymbolicAngle
enum class EWSSymbolicAngle : uint8_t
{
	WSSA_Front                     = 0,
	WSSA_Side                      = 1,
	WSSA_Back                      = 2,
	WSSA_Unknown                   = 3,
	WSSA_MAX                       = 4
};


// Enum BaseAI.BlackBoard.EWSInformationStatus
enum class EWSInformationStatus : uint8_t
{
	WSIS_Actual                    = 0,
	WSIS_Obsolete                  = 1,
	WSIS_Unavailable               = 2,
	WSIS_MAX                       = 3
};


// Enum BaseAI.BlackBoard.EWSSpecialDistance
enum class EWSSpecialDistance : uint8_t
{
	WSSD_None                      = 0,
	WSSD_Distance1                 = 1,
	WSSD_Distance2                 = 2,
	WSSD_Distance3                 = 3,
	WSSD_Distance4                 = 4,
	WSSD_Distance5                 = 5,
	WSSD_MAX                       = 6
};


// Enum BaseAI.BlackBoard.EWSWeaponStatus
enum class EWSWeaponStatus : uint8_t
{
	WSWS_None                      = 0,
	WSWS_Overheating               = 1,
	WSWS_Ready                     = 2,
	WSWS_Firing                    = 3,
	WSWS_MAX                       = 4
};


// Enum BaseAI.BlackBoard.EWSCoverStatus
enum class EWSCoverStatus : uint8_t
{
	WSCS_Invalid                   = 0,
	WSCS_Claimed                   = 1,
	WSCS_Used                      = 2,
	WSCS_MAX                       = 3
};


// Enum BaseAI.BlackBoard.EWSLOSStatus
enum class EWSLOSStatus : uint8_t
{
	WSLS_Unkown                    = 0,
	WSLS_Blocked                   = 1,
	WSLS_Clear                     = 2,
	WSLS_MAX                       = 3
};


// Enum BaseAI.BlackBoard.EWSPerceptionMode
enum class EWSPerceptionMode : uint8_t
{
	WSPM_None                      = 0,
	WSPM_Memory                    = 1,
	WSPM_Belief                    = 2,
	WSPM_Hearing                   = 3,
	WSPM_Detecting                 = 4,
	WSPM_Sight                     = 5,
	WSPM_MAX                       = 6
};


// Enum BaseAI.BlackBoard.EWSBodyStatus
enum class EWSBodyStatus : uint8_t
{
	WSBS_Dead                      = 0,
	WSBS_Recovering                = 1,
	WSBS_SeverelyWounded           = 2,
	WSBS_Injured                   = 3,
	WSBS_LowInjured                = 4,
	WSBS_Normal                    = 5,
	WSBS_MAX                       = 6
};


// Enum BaseAI.BlackBoard.EWSRangeClass
enum class EWSRangeClass : uint8_t
{
	WSRC_Melee                     = 0,
	WSRC_Close                     = 1,
	WSRC_Medium                    = 2,
	WSRC_Large                     = 3,
	WSRC_Maximum                   = 4,
	WSRC_MAX                       = 5
};


// Enum BaseAI.BTDebugInfo.EBTDecoratorDescTokenStatus
enum class EBTDecoratorDescTokenStatus : uint8_t
{
	DDTS_Normal                    = 0,
	DDTS_True                      = 1,
	DDTS_False                     = 2,
	DDTS_MAX                       = 3
};


// Enum BaseAI.BTNode.EBTExecutionStatus
enum class EBTExecutionStatus : uint8_t
{
	BTES_Invalid                   = 0,
	BTES_Running                   = 1,
	BTES_Aborting                  = 2,
	BTES_Finished                  = 3,
	BTES_Aborted                   = 4,
	BTES_MAX                       = 5
};


// Enum BaseAI.BTNode.EBTResult
enum class EBTResult : uint8_t
{
	BTR_Error                      = 0,
	BTR_Abort                      = 1,
	BTR_Fail                       = 2,
	BTR_Success                    = 3,
	BTR_NotFinished                = 4,
	BTR_Restart                    = 5,
	BTR_MAX                        = 6
};


// Enum BaseAI.BTPersonalInstance.EBTStatus
enum class EBTStatus : uint8_t
{
	BTS_Blank                      = 0,
	BTS_Error                      = 1,
	BTS_Running                    = 2,
	BTS_Finished                   = 3,
	BTS_Suspended                  = 4,
	BTS_Stopped                    = 5,
	BTS_Pending                    = 6,
	BTS_MAX                        = 7
};


// Enum BaseAI.BTPersonalInstance.EMsgParam
enum class EMsgParam : uint8_t
{
	BTMSG_None                     = 0,
	BTMSG_Initialize               = 1,
	BTMSG_Restart                  = 2,
	BTMSG_LatentSucceeded          = 3,
	BTMSG_LatentFailed             = 4,
	BTMSG_LatentAborted            = 5,
	BTMSG_ETQFinished              = 6,
	BTMSG_MAX                      = 7
};


// Enum BaseAI.BaseAIPawn.EBaseAIReadability
enum class EBaseAIReadability : uint8_t
{
	AIR_WillFire                   = 0,
	AIR_EnemySeenFirstTime         = 1,
	AIR_MAX                        = 2
};


// Enum BaseAI.BaseAIPawn.EPawnProp
enum class EPawnProp : uint8_t
{
	PP_HumanControlled             = 0,
	PP_Vehicle                     = 1,
	PP_MiniBoss                    = 2,
	PP_Avoided                     = 3,
	PP_MAX                         = 4
};


// Enum BaseAI.BaseAIPawn.EAccuracyType
enum class EAccuracyType : uint8_t
{
	Accuracy_VeryLow               = 0,
	Accuracy_Low                   = 1,
	Accuracy_Normal                = 2,
	Accuracy_High                  = 3,
	Accuracy_VeryHigh              = 4,
	Accuracy_MAX                   = 5
};


// Enum BaseAI.BaseAISubsystem.EAISysBoolProps
enum class EAISysBoolProps : uint8_t
{
	AISP_UseRecast                 = 0,
	AISP_MAX                       = 1
};


// Enum BaseAI.BaseAISubsystem.EUse
enum class EUse : uint8_t
{
	U_First                        = 0,
	U_Second                       = 1,
	U_Last                         = 2,
	U_MAX                          = 3
};


// Enum BaseAI.BTDecoratorAccumulator.AccumulatorAccessType
enum class EAccumulatorAccessType : uint8_t
{
	AAT_Allow                      = 0,
	AAT_Deny                       = 1,
	AAT_MAX                        = 2
};


// Enum BaseAI.BTDecoratorCondition.EArithmeticOperation
enum class EArithmeticOperation : uint8_t
{
	AOP_Equal                      = 0,
	AOP_NotEqual                   = 1,
	AOP_Greater                    = 2,
	AOP_GreaterOrEqual             = 3,
	AOP_Less                       = 4,
	AOP_LessOrEqual                = 5,
	AOP_MAX                        = 6
};


// Enum BaseAI.BTDecoratorCondition.EObjectOperation
enum class EObjectOperation : uint8_t
{
	OOP_IsSet                      = 0,
	OOP_IsNotSet                   = 1,
	OOP_MAX                        = 2
};


// Enum BaseAI.BTDecoratorCondition.EStringOperation
enum class EStringOperation : uint8_t
{
	SOP_Equal                      = 0,
	SOP_NotEqual                   = 1,
	SOP_MAX                        = 2
};


// Enum BaseAI.BTDecoratorTimeSince.ETimeSince
enum class ETimeSince : uint8_t
{
	BTTS_LastFired                 = 0,
	BTTS_LastCharged               = 1,
	BTTS_LastSeenEnemy             = 2,
	BTTS_LastShotAt                = 3,
	BTTS_MAX                       = 4
};


// Enum BaseAI.BTParallel.EParellelismMode
enum class EParellelismMode : uint8_t
{
	PM_All                         = 0,
	PM_Any                         = 1,
	PM_MAX                         = 2
};


// Enum BaseAI.BTTemplate.EBTNodeType
enum class EBTNodeType : uint8_t
{
	BTNT_Unknown                   = 0,
	BTNT_Task                      = 1,
	BTNT_Condition                 = 2,
	BTNT_Sequence                  = 3,
	BTNT_Selector                  = 4,
	BTNT_Decorator                 = 5,
	BTNT_CommentGroup              = 6,
	BTNT_DecoratorGroup            = 7,
	BTNT_Random                    = 8,
	BTNT_Parallel                  = 9,
	BTNT_MAX                       = 10
};


// Enum BaseAI.ETQSystem.EETQDebugMode
enum class EETQDebugMode : uint8_t
{
	ETQDM_Visibility               = 0,
	ETQDM_ShootingPosition         = 1,
	ETQDM_MAX                      = 2
};


// Enum BaseAI.ETQSystem.EETQItemType
enum class EETQItemType : uint8_t
{
	QIT_Invalid                    = 0,
	QIT_Actor                      = 1,
	QIT_PathNode                   = 2,
	QIT_Point                      = 3,
	QIT_SmartObject                = 4,
	QIT_MAX                        = 5
};


// Enum BaseAI.ETQSystem.EETQTest
enum class EETQTest : uint8_t
{
	QT_None                        = 0,
	QT_Visibility                  = 1,
	QT_Distance                    = 2,
	QT_ObjectDot                   = 3,
	QT_ReferenceDot                = 4,
	QT_ContextDot                  = 5,
	QT_Tag                         = 6,
	QT_Ownable                     = 7,
	QT_CurrentItem                 = 8,
	QT_WithinCombatZone            = 9,
	QT_UnusedForTime               = 10,
	QT_IsHumanControlled           = 11,
	QT_SelectionModifier           = 12,
	QT_CurrentEnemy                = 13,
	QT_InAvoidedArea               = 14,
	QT_Usable                      = 15,
	QT_OnWalkableSurface           = 16,
	QT_Reachable                   = 17,
	QT_StraightLinePath            = 18,
	QT_ShootingPositionAt          = 19,
	QT_ContextNormalDot            = 20,
	QT_DistanceToWall              = 21,
	QT_ReferenceContextItemDot     = 22,
	QT_UniversalDot                = 23,
	QT_Threat                      = 24,
	QT_FireCounter                 = 25,
	QT_LineSide                    = 26,
	QT_Health                      = 27,
	QT_JumpReachable               = 28,
	QT_MAX                         = 29
};


// Enum BaseAI.ETQSystem.EETQStatus
enum class EETQStatus : uint8_t
{
	QS_Invalid                     = 0,
	QS_NotStarted                  = 1,
	QS_Processing                  = 2,
	QS_Canceled                    = 3,
	QS_Error                       = 4,
	QS_Fail                        = 5,
	QS_Success                     = 6,
	QS_MAX                         = 7
};


// Enum BaseAI.ETQSystem.EUniversalDotParam
enum class EUniversalDotParam : uint8_t
{
	UD_None                        = 0,
	UD_Self                        = 1,
	UD_Enemy                       = 2,
	UD_SquadEnemies                = 3,
	UD_CurrentCover                = 4,
	UD_Leader                      = 5,
	UD_CombatZone                  = 6,
	UD_Item                        = 7,
	UD_Normal                      = 8,
	UD_LeaderShootingDir           = 9,
	UD_MAX                         = 10
};


// Enum BaseAI.ETQSystem.EETQGeneratorType
enum class EETQGeneratorType : uint8_t
{
	QGT_Invalid                    = 0,
	QGT_Pathnodes                  = 1,
	QGT_Grid                       = 2,
	QGT_SquadEnemies               = 3,
	QGT_SmartObjects               = 4,
	QGT_CurrentLocation            = 5,
	QGT_FireSpots                  = 6,
	QGT_Actors                     = 7,
	QGT_MAX                        = 8
};


// Enum BaseAI.ETQSystem.EETQConditionModifier
enum class EETQConditionModifier : uint8_t
{
	QCM_None                       = 0,
	QCM_Min                        = 1,
	QCM_Max                        = 2
};


// Enum BaseAI.ETQSystem.EETQReferenceObject
enum class EETQReferenceObject : uint8_t
{
	QRO_None                       = 0,
	QRO_Self                       = 1,
	QRO_Enemy                      = 2,
	QRO_SquadEnemies               = 3,
	QRO_Leader                     = 4,
	QRO_CombatZone                 = 5,
	QRO_Item                       = 6,
	QRO_AvoidedSquadEnemies        = 7,
	QRO_MAX                        = 8
};


// Enum BaseAI.ETQSystem.EETQNamedValue
enum class EETQNamedValue : uint8_t
{
	ETQNV_None                     = 0,
	ETQNV_DistanceClass_Melee      = 1,
	ETQNV_DistanceClass_Close      = 2,
	ETQNV_DistanceClass_Medium     = 3,
	ETQNV_DistanceClass_Large      = 4,
	ETQNV_DistanceClass_DistanceToPlayer = 5,
	ETQNV_Counter_FireTicketsMax   = 6,
	ETQNV_Counter_ItemsMaxAttackers = 7,
	ETQNV_DistanceClass_DistanceToEnemy = 8,
	ETQNV_MAX                      = 9
};


// Enum BaseAI.ETQSystem.EPackValueType
enum class EPackValueType : uint8_t
{
	PVT_Pointer                    = 0,
	PVT_Bool                       = 1,
	PVT_Float                      = 2,
	PVT_Int                        = 3,
	PVT_Name                       = 4,
	PVT_MAX                        = 5
};


// Enum BaseAI.NavLocation.ENavLocationMovementType
enum class ENavLocationMovementType : uint8_t
{
	NLMT_Walk                      = 0,
	NLMT_Mantle                    = 1,
	NLMT_Slide                     = 2,
	NLMT_Crouch                    = 3,
	NLMT_MAX                       = 4
};


// Enum BaseAI.MessageSystem.EMessageID
enum class EMessageID : uint8_t
{
	MSGID_BehaviorTree             = 0,
	MSGID_SmartObject              = 1,
	MSGID_SpecialMove              = 2,
	MSGID_Death                    = 3,
	MSGID_InvalidateCover          = 4,
	MSGID_TakeDamage               = 5,
	MSGID_ResumeAI                 = 6,
	MSGID_SOProximityTouch         = 7,
	MSGID_MAX                      = 8
};


// Enum BaseAI.MessageSystem.EMessagePriority
enum class EMessagePriority : uint8_t
{
	MSMP_Low                       = 0,
	MSMP_Normal                    = 1,
	MSMP_High                      = 2,
	MSMP_Instant                   = 3,
	MSMP_MAX                       = 4
};


// Enum BaseAI.SmartObjectComponent.ESOEntryStatus
enum class ESOEntryStatus : uint8_t
{
	SOES_Ready                     = 0,
	SOES_Claimed                   = 1,
	SOES_BeingUsed                 = 2,
	SOES_MAX                       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BaseAI.BaseAIController.LocalEnemyInfo
// 0x002C
struct FLocalEnemyInfo
{
	TArray<float>                                      PerceptionTimestamp;                                      // 0x0000(0x000C) (NeedCtorLink)
	TEnumAsByte<EWSPerceptionMode>                     LatestPerception;                                         // 0x000C(0x0001)
	TEnumAsByte<EWSPerceptionMode>                     DominantPerception;                                       // 0x000D(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	int                                                VisibleCoverActions;                                      // 0x0010(0x0004)
	float                                              CurrentThreat;                                            // 0x0014(0x0004)
	struct FVector                                     LatestLocation;                                           // 0x0018(0x000C)
	class APawn*                                       Pawn;                                                     // 0x0024(0x0004)
	unsigned long                                      bSeenBefore : 1;                                          // 0x0028(0x0004)
	unsigned long                                      bIsPlayer : 1;                                            // 0x0028(0x0004)
};

// ScriptStruct BaseAI.BaseAIDefinition.ETQNamedQueryOverride
// 0x0008
struct FETQNamedQueryOverride
{
	TEnumAsByte<EETQNamedQuery>                        QueryType;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UETQTemplate*                                ETQ;                                                      // 0x0004(0x0004) (Edit)
};

// ScriptStruct BaseAI.BaseAIPlayerController.ShootingInfo
// 0x00FC
struct FShootingInfo
{
	struct FVector                                     Locations[0xE];                                           // 0x0000(0x000C)
	float                                              TimeStamps[0xE];                                          // 0x00A8(0x0004)
	struct FVector                                     LastAverage;                                              // 0x00E0(0x000C) (Const)
	int                                                NextIndex;                                                // 0x00EC(0x0004)
	float                                              InfoLifeTime;                                             // 0x00F0(0x0004)
	float                                              LastTimeStamp;                                            // 0x00F4(0x0004)
	unsigned long                                      bDirty : 1;                                               // 0x00F8(0x0004)
};

// ScriptStruct BaseAI.BaseAITypes.PCVisibleEnemy
// 0x0008
struct FPCVisibleEnemy
{
	class APawn*                                       Enemy;                                                    // 0x0000(0x0004)
	float                                              TimeStamp;                                                // 0x0004(0x0004)
};

// ScriptStruct BaseAI.MessageSystem.MsgParamMirror
// 0x0008
struct FMsgParamMirror
{
	int                                                Dummy0;                                                   // 0x0000(0x0004) (Native)
	int                                                Dummy1;                                                   // 0x0004(0x0004) (Native)
};

// ScriptStruct BaseAI.MessageSystem.MsgData
// 0x002C
struct FMsgData
{
	TEnumAsByte<EMessageID>                            Code;                                                     // 0x0000(0x0001)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FMsgParamMirror                             Sender;                                                   // 0x0004(0x0008) (Native)
	struct FMsgParamMirror                             Receiver;                                                 // 0x000C(0x0008) (Native)
	struct FMsgParamMirror                             P0;                                                       // 0x0014(0x0008) (Native)
	struct FMsgParamMirror                             P1;                                                       // 0x001C(0x0008) (Native)
	int                                                nIndex;                                                   // 0x0024(0x0004) (Const)
	struct FPointer                                    pNext;                                                    // 0x0028(0x0004) (Const, Native)
};

// ScriptStruct BaseAI.SightSystem.PendingSightInfo
// 0x0008
struct FPendingSightInfo
{
	class ABaseAIController*                           TestFrom;                                                 // 0x0000(0x0004)
	class APawn*                                       TestTo;                                                   // 0x0004(0x0004)
};

// ScriptStruct BaseAI.NavigationPath.PathPoint
// 0x000F
struct FPathPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	unsigned char                                      Flags;                                                    // 0x000C(0x0001)
	TEnumAsByte<EBaseMoveMood>                         MaxMoveMood;                                              // 0x000D(0x0001)
	TEnumAsByte<ENavigationBodyStance>                 BodyStance;                                               // 0x000E(0x0001)
};

// ScriptStruct BaseAI.NavigationPath.PolyArray_Mirror
// 0x000C
struct FPolyArray_Mirror
{
	TArray<int>                                        Dummy;                                                    // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct BaseAI.NavigationPath.BaseTransform
// 0x0100
struct FBaseTransform
{
	class AActor*                                      Base;                                                     // 0x0000(0x0004) (Const)
	struct FVector                                     InitialLocation;                                          // 0x0004(0x000C) (Const)
	struct FRotator                                    InitialRotation;                                          // 0x0010(0x000C) (Const)
	struct FVector                                     UpdatedForLocation;                                       // 0x001C(0x000C) (Const)
	struct FRotator                                    UpdatedForRotation;                                       // 0x0028(0x000C) (Const)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
	struct FMatrix                                     InitialReversedTransform;                                 // 0x0040(0x0040) (Const)
	struct FMatrix                                     IBS2WSTransform;                                          // 0x0080(0x0040) (Const)
	struct FMatrix                                     WS2IBSTransform;                                          // 0x00C0(0x0040) (Const)
};

// ScriptStruct BaseAI.NavMeshModifier.CheckpointRecord
// 0x0004
struct ANavMeshModifier_FCheckpointRecord
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
};

// ScriptStruct BaseAI.AIDebugTool.ETQDebugEntry
// 0x0010
struct FETQDebugEntry
{
	float                                              TimeStamp;                                                // 0x0000(0x0004)
	TArray<struct FString>                             ExecutedQueries;                                          // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct BaseAI.BaseAIPawn.SOInfo
// 0x0008
struct FSOInfo
{
	class USmartObjectComponent*                       SO;                                                       // 0x0000(0x0004) (ExportObject, Component, EditInline)
	int                                                EntryIndex;                                               // 0x0004(0x0004)
};

// ScriptStruct BaseAI.BaseAITypes.MovementProperties
// 0x0004
struct FMovementProperties
{
	unsigned long                                      bStartMovementShootingContextModifier : 1;                // 0x0000(0x0004) (Transient)
	unsigned long                                      bStartMovementShooting : 1;                               // 0x0000(0x0004)
	unsigned long                                      bStartMovementShootingOnRepath : 1;                       // 0x0000(0x0004)
	unsigned long                                      bEndMovementShooting : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bCanCombatWalk : 1;                                       // 0x0000(0x0004)
};

// ScriptStruct BaseAI.BaseAIPawn.Breadcrumbs
// 0x0080
struct FBreadcrumbs
{
	struct FVector                                     Crumbs[0xA];                                              // 0x0000(0x000C) (Transient)
	unsigned char                                      CurrentCrumb;                                             // 0x0078(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              CrumbDistanceSq;                                          // 0x007C(0x0004)
};

// ScriptStruct BaseAI.BaseAIPawn.SOExecInfo
// 0x0018
struct FSOExecInfo
{
	struct FSOInfo                                     CurrentSO;                                                // 0x0000(0x0008) (Component)
	class USOAction*                                   CurrentAction;                                            // 0x0008(0x0004)
	int                                                SORepIndex;                                               // 0x000C(0x0004)
	struct FPointer                                    Observer;                                                 // 0x0010(0x0004) (Native)
	unsigned long                                      bActive : 1;                                              // 0x0014(0x0004)
};

// ScriptStruct BaseAI.BlackBoard.WSData_Mirror
// 0x000C
struct FWSData_Mirror
{
	struct FVector                                     Dummy;                                                    // 0x0000(0x000C) (Const, Native)
};

// ScriptStruct BaseAI.BlackBoard.WorldStateProp
// 0x001C
struct FWorldStateProp
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // 0x0000(0x0001) (Const, Native)
	TEnumAsByte<EWorldStatePropType>                   Type;                                                     // 0x0001(0x0001) (Const, Native)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FPointer                                    Precondition;                                             // 0x0004(0x0004) (Const, Native)
	struct FPointer                                    pObserversHead;                                           // 0x0008(0x0004) (Const, Native)
	struct FPointer                                    pObserversTail;                                           // 0x000C(0x0004) (Const, Native)
	struct FWSData_Mirror                              Data;                                                     // 0x0010(0x000C) (Const, Native)
};

// ScriptStruct BaseAI.BlackBoard.WSPropObserver
// 0x0010
struct FWSPropObserver
{
	struct FPointer                                    pPrecond;                                                 // 0x0000(0x0004) (Const, Native)
	struct FPointer                                    pPrev;                                                    // 0x0004(0x0004) (Const, Native)
	struct FPointer                                    pNext;                                                    // 0x0008(0x0004) (Const, Native)
	int                                                nIndex;                                                   // 0x000C(0x0004) (Const)
};

// ScriptStruct BaseAI.BTDebugInfo.BTDecoratorDescToken
// 0x000D
struct FBTDecoratorDescToken
{
	struct FString                                     Text;                                                     // 0x0000(0x000C) (NeedCtorLink)
	TEnumAsByte<EBTDecoratorDescTokenStatus>           Status;                                                   // 0x000C(0x0001)
};

// ScriptStruct BaseAI.BTDebugInfo.BTDecoratorDebugInfo
// 0x0010
struct FBTDecoratorDebugInfo
{
	TArray<struct FBTDecoratorDescToken>               Description;                                              // 0x0000(0x000C) (NeedCtorLink)
	unsigned long                                      bEval : 1;                                                // 0x000C(0x0004)
};

// ScriptStruct BaseAI.BTDebugInfo.BTNodeDebugInfo
// 0x002C
struct FBTNodeDebugInfo
{
	struct FName                                       NodeName;                                                 // 0x0000(0x0008)
	int                                                TreeDepth;                                                // 0x0008(0x0004)
	int                                                DescendantDepth;                                          // 0x000C(0x0004)
	int                                                ParentIndex;                                              // 0x0010(0x0004)
	unsigned long                                      bRunning : 1;                                             // 0x0014(0x0004)
	unsigned long                                      bChildRunning : 1;                                        // 0x0014(0x0004)
	TArray<struct FBTDecoratorDebugInfo>               DecoratorDebugList;                                       // 0x0018(0x000C) (NeedCtorLink)
	struct FVector2D                                   OutPos;                                                   // 0x0024(0x0008)
};

// ScriptStruct BaseAI.BTCompositeNode.BTLink
// 0x0010
struct FBTLink
{
	class UBTNode*                                     ChildNode;                                                // 0x0000(0x0004) (Edit, Const, EditConst)
	TArray<class UBTDecorator*>                        Decorators;                                               // 0x0004(0x000C) (Edit, Const, EditConst, NeedCtorLink)
};

// ScriptStruct BaseAI.BTPersonalInstance.ExecutionTimeObserver
// 0x0008
struct FExecutionTimeObserver
{
	class UBTDecoratorTimeObserverBase*                Observer;                                                 // 0x0000(0x0004)
	float                                              TimeLeft;                                                 // 0x0004(0x0004)
};

// ScriptStruct BaseAI.ETQSystem.ETQGenerator
// 0x0018
struct FETQGenerator
{
	TEnumAsByte<EETQGeneratorType>                     Type;                                                     // 0x0000(0x0001) (Native)
	TEnumAsByte<EETQReferenceObject>                   context;                                                  // 0x0001(0x0001) (Native)
	TEnumAsByte<EETQReferenceObject>                   Reference;                                                // 0x0002(0x0001) (Native)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              Radius;                                                   // 0x0004(0x0004) (Native)
	float                                              Density;                                                  // 0x0008(0x0004) (Native)
	unsigned long                                      bProjectToNavmesh : 1;                                    // 0x000C(0x0004) (Native)
	TEnumAsByte<EETQNamedValue>                        QueriersNamedValueRadius;                                 // 0x0010(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0014(0x0004) (Native)
};

// ScriptStruct BaseAI.ETQSystem.ETQConditionValue_Mirror
// 0x0008
struct FETQConditionValue_Mirror
{
	struct FName                                       Dummy;                                                    // 0x0000(0x0008) (Const, Native)
};

// ScriptStruct BaseAI.ETQSystem.ETQCondition
// 0x001C
struct FETQCondition
{
	TEnumAsByte<EETQTest>                              Test;                                                     // 0x0000(0x0001) (Native)
	TEnumAsByte<EETQConditionModifier>                 Mod;                                                      // 0x0001(0x0001) (Native)
	TEnumAsByte<EETQReferenceObject>                   Reference;                                                // 0x0002(0x0001) (Native)
	TEnumAsByte<EPackValueType>                        ValueType;                                                // 0x0003(0x0001) (Native)
	struct FETQConditionValue_Mirror                   Value;                                                    // 0x0004(0x0008) (Native)
	float                                              WeightModifier;                                           // 0x000C(0x0004) (Native)
	TEnumAsByte<EETQNamedValue>                        NamedValue;                                               // 0x0010(0x0001)
	unsigned char                                      AdditionalData[0x4];                                      // 0x0011(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	unsigned long                                      bCondition : 1;                                           // 0x0018(0x0004) (Native)
	unsigned long                                      bWeight : 1;                                              // 0x0018(0x0004) (Native)
	unsigned long                                      bValidityTest : 1;                                        // 0x0018(0x0004) (Native)
	unsigned long                                      bInverseWeight : 1;                                       // 0x0018(0x0004) (Native)
	unsigned long                                      bSquareFunc : 1;                                          // 0x0018(0x0004) (Native)
};

// ScriptStruct BaseAI.ETQSystem.ETQOption
// 0x002C
struct FETQOption
{
	struct FName                                       OptionName;                                               // 0x0000(0x0008) (Native)
	struct FETQGenerator                               Generator;                                                // 0x0008(0x0018) (Native)
	TArray<struct FETQCondition>                       Tests;                                                    // 0x0020(0x000C) (Native)
};

// ScriptStruct BaseAI.ETQSystem.ETQQueryTemplate
// 0x0014
struct FETQQueryTemplate
{
	struct FName                                       QueryName;                                                // 0x0000(0x0008) (Native)
	TArray<struct FETQOption>                          Options;                                                  // 0x0008(0x000C) (Native)
};

// ScriptStruct BaseAI.ETQSystem.ObjectIdentifierMirror
// 0x0008
struct FObjectIdentifierMirror
{
	int                                                Dummy1;                                                   // 0x0000(0x0004) (Const, Native)
	class UObject*                                     Dummy2;                                                   // 0x0004(0x0004) (Const, Native)
};

// ScriptStruct BaseAI.ETQSystem.CoverItem
// 0x000C
struct FCoverItem
{
	struct FVector                                     Item;                                                     // 0x0000(0x000C) (Const, Native)
};

// ScriptStruct BaseAI.ETQSystem.ETQQueryItem
// 0x0030
struct FETQQueryItem
{
	TEnumAsByte<EETQItemType>                          Type;                                                     // 0x0000(0x0001) (Const, Native)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TotalWeight;                                              // 0x0004(0x0004) (Const, Native)
	TArray<struct FETQConditionValue_Mirror>           TestValues;                                               // 0x0008(0x000C) (Const, Native, AlwaysInit)
	TArray<float>                                      PartialWeights;                                           // 0x0014(0x000C) (Const, Native, AlwaysInit)
	struct FCoverItem                                  Item;                                                     // 0x0020(0x000C) (Const, Native)
	unsigned long                                      bValid : 1;                                               // 0x002C(0x0004) (Native)
};

// ScriptStruct BaseAI.ETQSystem.ETQQueryFailedItem
// 0x0028
struct FETQQueryFailedItem
{
	TEnumAsByte<EETQItemType>                          Type;                                                     // 0x0000(0x0001) (Const, Native)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FCoverItem                                  Item;                                                     // 0x0004(0x000C) (Const, Native)
	TEnumAsByte<EETQTest>                              TestFailed;                                               // 0x0010(0x0001) (Const, Native)
	TEnumAsByte<EETQReferenceObject>                   Reference;                                                // 0x0011(0x0001) (Native)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FVector                                     RefLocation;                                              // 0x0014(0x000C)
	struct FETQConditionValue_Mirror                   ConditionValue;                                           // 0x0020(0x0008) (Native)
};

// ScriptStruct BaseAI.BaseAITypes.SpaceLineInfo
// 0x0030
struct FSpaceLineInfo
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C)
	struct FVector                                     End;                                                      // 0x000C(0x000C)
	TEnumAsByte<EDebugLineType>                        Type;                                                     // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FString                                     Comment;                                                  // 0x001C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FName                                       Category;                                                 // 0x0028(0x0008) (Native)
};

// ScriptStruct BaseAI.ETQSystem.ETQQuery
// 0x005C
struct FETQQuery
{
	class AActor*                                      Querier;                                                  // 0x0000(0x0004) (Native)
	class AController*                                 QueriersCtrl;                                             // 0x0004(0x0004) (Native)
	struct FObjectIdentifierMirror                     Observer;                                                 // 0x0008(0x0008) (Native)
	int                                                QueryTemplateId;                                          // 0x0010(0x0004) (Const, Native)
	struct FPointer                                    QueryTemplate;                                            // 0x0014(0x0004) (Const, Native)
	TArray<struct FETQQueryItem>                       Items;                                                    // 0x0018(0x000C) (Native)
	TEnumAsByte<EETQStatus>                            Status;                                                   // 0x0024(0x0001) (Const, Native)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	unsigned long                                      bInstantExecution : 1;                                    // 0x0028(0x0004) (Const, Native)
	int                                                DEBUG_iterations;                                         // 0x002C(0x0004) (Const, Native)
	int                                                CurrentOption;                                            // 0x0030(0x0004) (Const, Native)
	int                                                CurrentStep;                                              // 0x0034(0x0004) (Const, Native)
	int                                                CurrentItem;                                              // 0x0038(0x0004) (Const, Native)
	int                                                nIndex;                                                   // 0x003C(0x0004) (Const)
	int                                                ReferenceCount;                                           // 0x0040(0x0004) (Const)
	TArray<struct FETQQueryFailedItem>                 FailedItems;                                              // 0x0044(0x000C) (Native)
	TArray<struct FSpaceLineInfo>                      DebugLines;                                               // 0x0050(0x000C) (Native)
};

// ScriptStruct BaseAI.ETQSystem.GeneratorSupportedTest
// 0x000C
struct FGeneratorSupportedTest
{
	TArray<TEnumAsByte<EETQTest>>                      Tests;                                                    // 0x0000(0x000C) (Const, NeedCtorLink)
};

// ScriptStruct BaseAI.AIPluginMovement.MoveParameters
// 0x0020
struct FMoveParameters
{
	TEnumAsByte<ENavigationBodyStance>                 BodyStance;                                               // 0x0000(0x0001)
	TEnumAsByte<EBaseMoveMood>                         MoveMood;                                                 // 0x0001(0x0001)
	TEnumAsByte<EBaseMoveType>                         MoveType;                                                 // 0x0002(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	class AActor*                                      RotateAtEndToMatch;                                       // 0x0004(0x0004)
	class AActor*                                      FollowingActor;                                           // 0x0008(0x0004)
	unsigned long                                      bMovementCanBeInaccurate : 1;                             // 0x000C(0x0004)
	unsigned long                                      bMoveThroughLastPoint : 1;                                // 0x000C(0x0004)
	unsigned long                                      bStartPathFollowingShooting : 1;                          // 0x000C(0x0004)
	unsigned long                                      bEndPathFollowingShooting : 1;                            // 0x000C(0x0004)
	unsigned long                                      bCoverDestination : 1;                                    // 0x000C(0x0004)
	unsigned long                                      bForceAnyMove : 1;                                        // 0x000C(0x0004)
	unsigned long                                      bAllowedToFire : 1;                                       // 0x000C(0x0004)
	float                                              MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;// 0x0010(0x0004)
	float                                              MaxMovementDeltaSqForMoveGoalDuringFinalApprochBeforeRePathNeeded;// 0x0014(0x0004)
	float                                              MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;      // 0x0018(0x0004)
	float                                              MaxMovementDeltaSqForMoveGoalDuringBeforeRePathNeeded;    // 0x001C(0x0004)
};

// ScriptStruct BaseAI.AIPluginMovement.MoveRequestDestination
// 0x0019
struct FMoveRequestDestination
{
	struct FVector                                     VectorDest;                                               // 0x0000(0x000C) (Const)
	struct FCoverInfo                                  CoverInfoDest;                                            // 0x000C(0x0008) (Const)
	class AActor*                                      ActorDest;                                                // 0x0014(0x0004) (Const)
	TEnumAsByte<EMoveRequestDestinationType>           Type;                                                     // 0x0018(0x0001)
};

// ScriptStruct BaseAI.AIPluginMovement.MovementRequest
// 0x006C
struct FMovementRequest
{
	struct FMoveParameters                             MoveParams;                                               // 0x0000(0x0020) (Native)
	float                                              AcceptableDistance;                                       // 0x0020(0x0004)
	struct FVector                                     DestOffset;                                               // 0x0024(0x000C)
	struct FVector                                     MidPointOffset;                                           // 0x0030(0x000C)
	struct FMoveRequestDestination                     Destination;                                              // 0x003C(0x001C) (Native)
	class UNavigationPath*                             PreComputedPath;                                          // 0x0058(0x0004) (Native)
	TEnumAsByte<EActionPriority>                       Priority;                                                 // 0x005C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	class UObject*                                     Observer;                                                 // 0x0060(0x0004) (Const)
	unsigned long                                      bStopAtEndOfMovement : 1;                                 // 0x0064(0x0004)
	unsigned long                                      bStickToNavmesh : 1;                                      // 0x0064(0x0004)
	unsigned long                                      bStickToActionArea : 1;                                   // 0x0064(0x0004)
	unsigned long                                      bDynamicDestOffset : 1;                                   // 0x0064(0x0004)
	unsigned long                                      bDynamicMidPoint : 1;                                     // 0x0064(0x0004)
	unsigned long                                      bPostProcessPath : 1;                                     // 0x0064(0x0004)
	int                                                QueryID;                                                  // 0x0068(0x0004)
};

// ScriptStruct BaseAI.SmartObjectComponent.EntryPoint
// 0x0048
struct FEntryPoint
{
	struct FVector                                     LocationOffset;                                           // 0x0000(0x000C)
	struct FRotator                                    RotationOffset;                                           // 0x000C(0x000C)
	float                                              Radius;                                                   // 0x0018(0x0004) (Edit)
	unsigned long                                      bEnabled : 1;                                             // 0x001C(0x0004) (Edit)
	unsigned long                                      bCurrentlyEnabled : 1;                                    // 0x001C(0x0004) (Transient)
	unsigned long                                      bExclusive : 1;                                           // 0x001C(0x0004) (Edit)
	int                                                MaxUsesNumber;                                            // 0x0020(0x0004) (Edit)
	int                                                NumUsed;                                                  // 0x0024(0x0004) (Transient)
	class USOAction*                                   Action;                                                   // 0x0028(0x0004) (Edit, ExportObject, NeedCtorLink, EditInline)
	TArray<struct FName>                               Tags;                                                     // 0x002C(0x000C) (Edit, NeedCtorLink)
	class USOEntryDataBase*                            EntryData;                                                // 0x0038(0x0004) (Edit, ExportObject, NeedCtorLink, EditInline)
	class ABaseAIPawn*                                 User;                                                     // 0x003C(0x0004) (Transient)
	TEnumAsByte<ESOEntryStatus>                        Status;                                                   // 0x0040(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	unsigned long                                      bSelected : 1;                                            // 0x0044(0x0004) (Transient)
};

// ScriptStruct BaseAI.SmartObjectReplicationActor.SOComponentRepInfo
// 0x0008
struct FSOComponentRepInfo
{
	int                                                ComponentIndex;                                           // 0x0000(0x0004)
	int                                                DataPack;                                                 // 0x0004(0x0004)
};

// ScriptStruct BaseAI.BaseAITypes.Parabola
// 0x000C
struct FParabola
{
	float                                              Directrix;                                                // 0x0000(0x0004) (Edit, Const)
	float                                              H;                                                        // 0x0004(0x0004) (Edit, Const)
	float                                              K;                                                        // 0x0008(0x0004) (Edit, Const)
};

// ScriptStruct BaseAI.BaseAITypes.PlaybackGuard
// 0x0008
struct FPlaybackGuard
{
	float                                              PlaybackTimeout;                                          // 0x0000(0x0004) (Edit)
	float                                              NextPlaybackTimestamp;                                    // 0x0004(0x0004) (Const)
};

// ScriptStruct BaseAI.AIDebugTool.AIDebugLogLine
// 0x0014
struct FAIDebugLogLine
{
	struct FString                                     Line;                                                     // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	struct FName                                       LineCategory;                                             // 0x000C(0x0008)
};

// ScriptStruct BaseAI.AIDebugTool.AIDebugLogEntry
// 0x00B8
struct FAIDebugLogEntry
{
	float                                              TimeStamp;                                                // 0x0000(0x0004)
	struct FVector                                     WorldPosition;                                            // 0x0004(0x000C)
	struct FVector                                     EnemyPosition;                                            // 0x0010(0x000C)
	struct FVector                                     Facing;                                                   // 0x001C(0x000C)
	struct FString                                     BTStatus;                                                 // 0x0028(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             BlackBoardEntries;                                        // 0x0034(0x000C) (NeedCtorLink)
	TArray<struct FString>                             BehaviorTrace;                                            // 0x0040(0x000C) (NeedCtorLink)
	TArray<struct FString>                             Preconditions;                                            // 0x004C(0x000C) (NeedCtorLink)
	TArray<struct FString>                             CommandStack;                                             // 0x0058(0x000C) (NeedCtorLink)
	TArray<struct FString>                             SquadEnemyList;                                           // 0x0064(0x000C) (NeedCtorLink)
	TArray<struct FString>                             LocalEnemyList;                                           // 0x0070(0x000C) (NeedCtorLink)
	TArray<struct FString>                             InnerState;                                               // 0x007C(0x000C) (NeedCtorLink)
	TArray<struct FVector>                             Route;                                                    // 0x0088(0x000C) (NeedCtorLink)
	TArray<struct FSpaceLineInfo>                      DebugLines;                                               // 0x0094(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             WeaponInfo;                                               // 0x00A0(0x000C) (NeedCtorLink)
	TArray<struct FAIDebugLogLine>                     Lines;                                                    // 0x00AC(0x000C) (NeedCtorLink)
};

// ScriptStruct BaseAI.AIDebugTool.AIDebugActorsLog
// 0x0018
struct FAIDebugActorsLog
{
	int                                                Tail;                                                     // 0x0000(0x0004)
	TArray<struct FAIDebugLogEntry>                    Entries;                                                  // 0x0004(0x000C) (NeedCtorLink)
	int                                                NotEmptyElements;                                         // 0x0010(0x0004)
	int                                                nIndex;                                                   // 0x0014(0x0004) (Const)
};

// ScriptStruct BaseAI.BTPreconditions.PreconditionNode
// 0x0034
struct FPreconditionNode
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // 0x0000(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UBTDecoratorCondition*                       Condition;                                                // 0x0004(0x0004) (Const)
	unsigned long                                      bValue : 1;                                               // 0x0008(0x0004) (Const)
	TArray<int>                                        Children;                                                 // 0x000C(0x000C) (Const, NeedCtorLink)
	int                                                BasicFrame;                                               // 0x0018(0x0004) (Const)
	int                                                CurrentFrame;                                             // 0x001C(0x0004) (Const)
	int                                                Depth;                                                    // 0x0020(0x0004) (Const)
	int                                                Parent;                                                   // 0x0024(0x0004) (Const)
	class UBTPreconditions*                            Preconditions;                                            // 0x0028(0x0004) (Const)
	int                                                nIndex;                                                   // 0x002C(0x0004) (Const)
	unsigned long                                      bUsed : 1;                                                // 0x0030(0x0004)
};

// ScriptStruct BaseAI.BTTemplate.BTEditorNode
// 0x003C
struct FBTEditorNode
{
	int                                                PosX;                                                     // 0x0000(0x0004) (Const, Native)
	int                                                PosY;                                                     // 0x0004(0x0004) (Const, Native)
	int                                                NodeState;                                                // 0x0008(0x0004) (Const, Native)
	TEnumAsByte<EBTNodeType>                           NodeType;                                                 // 0x000C(0x0001) (Const, Native)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              RelativePos;                                              // 0x0010(0x0004) (Const, Native)
	TArray<int>                                        RInputX;                                                  // 0x0014(0x000C) (Const, Native)
	TArray<int>                                        ROutputX;                                                 // 0x0020(0x000C) (Const, Native)
	int                                                RDrawWidth;                                               // 0x002C(0x0004) (Const, Native)
	int                                                RDrawHeight;                                              // 0x0030(0x0004) (Const, Native)
	int                                                SubTreeHeight;                                            // 0x0034(0x0004) (Native, Transient)
	int                                                SubTreeWidth;                                             // 0x0038(0x0004) (Native, Transient)
};

// ScriptStruct BaseAI.ETQSystem.RefObject
// 0x0018
struct FRefObject
{
	class AActor*                                      pActor;                                                   // 0x0000(0x0004) (Const, Native)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (Const, Native)
	struct FPointer                                    pNext;                                                    // 0x0010(0x0004) (Const, Native)
	int                                                nIndex;                                                   // 0x0014(0x0004) (Const)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
