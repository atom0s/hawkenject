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

// Function BaseAI.AIEditorDataInterface.IsBeingEdit
struct UAIEditorDataInterface_IsBeingEdit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIEditorDataInterface.SetBeingEdit
struct UAIEditorDataInterface_SetBeingEdit_Params
{
	bool                                               bIsBeingEdited;                                           // (Parm)
};

// Function BaseAI.AIEditorDataInterface.LoadData
struct UAIEditorDataInterface_LoadData_Params
{
	class UObject*                                     TemplateOb;                                               // (Parm)
};

// Function BaseAI.AIEditorDataInterface.SaveData
struct UAIEditorDataInterface_SaveData_Params
{
	class UObject*                                     TemplateOb;                                               // (Parm)
};

// Function BaseAI.BaseAIController.DrawEnemyPerception
struct ABaseAIController_DrawEnemyPerception_Params
{
	class UCanvas*                                     DrawCanvas;                                               // (Parm)
};

// Function BaseAI.BaseAIController.HasLOSToEnemy
struct ABaseAIController_HasLOSToEnemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.GetAimPoint
struct ABaseAIController_GetAimPoint_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.AdjustAimError
struct ABaseAIController_AdjustAimError_Params
{
	float                                              TargetDist;                                               // (Parm)
	bool                                               bInstantProj;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.IsPointInMyActionArea
struct ABaseAIController_IsPointInMyActionArea_Params
{
	struct FVector                                     pos;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.CreatePathForRoute
struct ABaseAIController_CreatePathForRoute_Params
{
	class ABaseAIRoute*                                BaseRoute;                                                // (Parm)
	class UNavigationPath*                             outPath;                                                  // (Parm, OutParm)
};

// Function BaseAI.BaseAIController.FollowRoute
struct ABaseAIController_FollowRoute_Params
{
	class UObject*                                     MoveObserver;                                             // (Parm)
	class ARoute*                                      RouteToFollow;                                            // (Parm)
	TEnumAsByte<EActionPriority>                       ActionPriority;                                           // (Parm)
	TEnumAsByte<EBaseMoveMood>                         InMM;                                                     // (OptionalParm, Parm)
	bool                                               bInvCover;                                                // (OptionalParm, Parm)
	bool                                               bStopAtEnd;                                               // (OptionalParm, Parm)
	class AActor*                                      RotateAtEndToMatch;                                       // (OptionalParm, Parm)
	float                                              AcceptableDistance;                                       // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.MoveToPoint
struct ABaseAIController_MoveToPoint_Params
{
	class UObject*                                     MoveObserver;                                             // (Parm)
	struct FVector                                     InDestLocation;                                           // (Parm)
	TEnumAsByte<EActionPriority>                       ActionPriority;                                           // (Parm)
	TEnumAsByte<EBaseMoveMood>                         InMM;                                                     // (OptionalParm, Parm)
	bool                                               bAllowedToFire;                                           // (OptionalParm, Parm)
	bool                                               bStopAtEnd;                                               // (OptionalParm, Parm)
	struct FVector                                     DestOffset;                                               // (Const, OptionalParm, Parm, OutParm)
	struct FVector                                     MidPointOffset;                                           // (Const, OptionalParm, Parm, OutParm)
	bool                                               bDynamicMidPoint;                                         // (OptionalParm, Parm)
	bool                                               bStickToNavmesh;                                          // (OptionalParm, Parm)
	float                                              AcceptableDistance;                                       // (OptionalParm, Parm)
	class AActor*                                      RotateAtEndToMatch;                                       // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.MoveToFiringPositionUponEnemy
struct ABaseAIController_MoveToFiringPositionUponEnemy_Params
{
	class UObject*                                     MoveObserver;                                             // (Parm)
	struct FVector                                     InFirePosLocation;                                        // (Const, Parm, OutParm)
	TEnumAsByte<EActionPriority>                       ActionPriority;                                           // (Parm)
	TEnumAsByte<EBaseMoveMood>                         InMM;                                                     // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;      // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;// (OptionalParm, Parm)
	bool                                               bAllowedToFire;                                           // (OptionalParm, Parm)
	bool                                               bStopAtEnd;                                               // (OptionalParm, Parm)
	float                                              AcceptableDistance;                                       // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.HideFromEnemy
struct ABaseAIController_HideFromEnemy_Params
{
	class UObject*                                     MoveObserver;                                             // (Parm)
	class APawn*                                       MoveGoal;                                                 // (Parm)
	TEnumAsByte<EActionPriority>                       ActionPriority;                                           // (Parm)
	TEnumAsByte<EBaseMoveMood>                         InMM;                                                     // (OptionalParm, Parm)
	float                                              DistAwayFromEnemy;                                        // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;      // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;// (OptionalParm, Parm)
	bool                                               bAllowedToFire;                                           // (OptionalParm, Parm)
	bool                                               bStopAtEnd;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.MoveToActor
struct ABaseAIController_MoveToActor_Params
{
	class UObject*                                     MoveObserver;                                             // (Parm)
	class AActor*                                      inActorGoal;                                              // (Parm)
	TEnumAsByte<EActionPriority>                       ActionPriority;                                           // (Parm)
	TEnumAsByte<EBaseMoveMood>                         InMM;                                                     // (OptionalParm, Parm)
	bool                                               bInAllowedToFire;                                         // (OptionalParm, Parm)
	bool                                               bStopAtEnd;                                               // (OptionalParm, Parm)
	bool                                               bStickToNavmesh;                                          // (OptionalParm, Parm)
	float                                              AcceptableDistance;                                       // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;      // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;// (OptionalParm, Parm)
	class AActor*                                      RotateAtEndToMatch;                                       // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.AllowedToMove
struct ABaseAIController_AllowedToMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.StopMovement
struct ABaseAIController_StopMovement_Params
{
	TEnumAsByte<EActionPriority>                       ActionPriority;                                           // (OptionalParm, Parm)
};

// Function BaseAI.BaseAIController.GetDesiredMoveTargetOffset
struct ABaseAIController_GetDesiredMoveTargetOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.StepAsideFor
struct ABaseAIController_StepAsideFor_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function BaseAI.BaseAIController.IsMovementLocked
struct ABaseAIController_IsMovementLocked_Params
{
	TEnumAsByte<EActionPriority>                       Priority;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.IsMoving
struct ABaseAIController_IsMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.IsPointReachable
struct ABaseAIController_IsPointReachable_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.SetupPathfinding
struct ABaseAIController_SetupPathfinding_Params
{
};

// Function BaseAI.BaseAIController.ClearNavigation
struct ABaseAIController_ClearNavigation_Params
{
	class UNavigationHandle*                           Navigation;                                               // (Parm)
	bool                                               bForced;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.SetNavigation
struct ABaseAIController_SetNavigation_Params
{
	class UNavigationHandle*                           Navigation;                                               // (Parm)
	bool                                               bForced;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.NavMeshVolumeLeft
struct ABaseAIController_NavMeshVolumeLeft_Params
{
	class UNavigationHandle*                           NavVolume;                                                // (Parm)
};

// Function BaseAI.BaseAIController.NavMeshVolumeEntered
struct ABaseAIController_NavMeshVolumeEntered_Params
{
	class UNavigationHandle*                           NavVolume;                                                // (Parm)
};

// Function BaseAI.BaseAIController.OnGlobalPauseChanged
struct ABaseAIController_OnGlobalPauseChanged_Params
{
	bool                                               bPaused;                                                  // (Parm)
};

// Function BaseAI.BaseAIController.StopLogic
struct ABaseAIController_StopLogic_Params
{
	bool                                               bByKismet;                                                // (Parm)
};

// Function BaseAI.BaseAIController.RestartLogic
struct ABaseAIController_RestartLogic_Params
{
	bool                                               bByKismet;                                                // (Parm)
};

// Function BaseAI.BaseAIController.ResumeLogic
struct ABaseAIController_ResumeLogic_Params
{
	bool                                               bByKismet;                                                // (Parm)
};

// Function BaseAI.BaseAIController.SuspendLogic
struct ABaseAIController_SuspendLogic_Params
{
	bool                                               bByKismet;                                                // (Parm)
};

// Function BaseAI.BaseAIController.BreakKismetLogicAndMovementLock
struct ABaseAIController_BreakKismetLogicAndMovementLock_Params
{
};

// Function BaseAI.BaseAIController.IsLogicSuspended
struct ABaseAIController_IsLogicSuspended_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.IsLogicRunning
struct ABaseAIController_IsLogicRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.IsControlledByKismet
struct ABaseAIController_IsControlledByKismet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.IsTargetOverwhelmed
struct ABaseAIController_IsTargetOverwhelmed_Params
{
	class APawn*                                       Target;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.SelectTarget
struct ABaseAIController_SelectTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.SelectEnemy
struct ABaseAIController_SelectEnemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.SetEnemy
struct ABaseAIController_SetEnemy_Params
{
	class APawn*                                       NewEnemy;                                                 // (Parm)
};

// Function BaseAI.BaseAIController.SelectTargetInternal
struct ABaseAIController_SelectTargetInternal_Params
{
	bool                                               bOnlyFromTargetList;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.NotifyKilled
struct ABaseAIController_NotifyKilled_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Killed;                                                   // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function BaseAI.BaseAIController.HasValidFireLaneToCurrentEnemy
struct ABaseAIController_HasValidFireLaneToCurrentEnemy_Params
{
	bool                                               bUseDefaultFireLane;                                      // (Parm)
	struct FVector                                     ExtentOfFireLane;                                         // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.NotifyEnemyBecameVisible
struct ABaseAIController_NotifyEnemyBecameVisible_Params
{
	class APawn*                                       VisibleEnemy;                                             // (Parm)
	float                                              TimeSinceLastVisible;                                     // (Parm)
};

// Function BaseAI.BaseAIController.NotifyLostEnemyVisibility
struct ABaseAIController_NotifyLostEnemyVisibility_Params
{
	class APawn*                                       LostEnemy;                                                // (Parm)
};

// Function BaseAI.BaseAIController.NoticedEnemy
struct ABaseAIController_NoticedEnemy_Params
{
	class APawn*                                       NewEnemy;                                                 // (Parm)
};

// Function BaseAI.BaseAIController.IsTargetConcealed
struct ABaseAIController_IsTargetConcealed_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.IsEnemyVisible
struct ABaseAIController_IsEnemyVisible_Params
{
	class APawn*                                       EnemyPawn;                                                // (Parm)
	int                                                EnemyIdx;                                                 // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.CanPawnBeSeenFrom
struct ABaseAIController_CanPawnBeSeenFrom_Params
{
	class ABaseAIPawn*                                 Target;                                                   // (Parm)
	struct FVector                                     FireSpot;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.UpdateEnemyPerception
struct ABaseAIController_UpdateEnemyPerception_Params
{
	bool                                               bSkipResponseDelay;                                       // (OptionalParm, Parm)
};

// Function BaseAI.BaseAIController.GetMoveMoodOverride
struct ABaseAIController_GetMoveMoodOverride_Params
{
	TEnumAsByte<EBaseMoveMood>                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.SetLogicalMoveMoodOverride
struct ABaseAIController_SetLogicalMoveMoodOverride_Params
{
	TEnumAsByte<EBaseMoveMood>                         MoveMood;                                                 // (Parm)
};

// Function BaseAI.BaseAIController.SetLogicalMoveMood
struct ABaseAIController_SetLogicalMoveMood_Params
{
	TEnumAsByte<EBaseMoveMood>                         MoveMood;                                                 // (Parm)
};

// Function BaseAI.BaseAIController.OnPostTeleport
struct ABaseAIController_OnPostTeleport_Params
{
	class USequenceAction*                             Action;                                                   // (OptionalParm, Parm)
};

// Function BaseAI.BaseAIController.OnTeleport
struct ABaseAIController_OnTeleport_Params
{
	class USeqAct_Teleport*                            Action;                                                   // (Parm)
};

// Function BaseAI.BaseAIController.OnAISetBT
struct ABaseAIController_OnAISetBT_Params
{
	class USeqAct_AISetBT*                             inAction;                                                 // (Parm)
};

// Function BaseAI.BaseAIController.OnAISetGoal
struct ABaseAIController_OnAISetGoal_Params
{
	class USeqAct_AISetGoal*                           inAction;                                                 // (Parm)
};

// Function BaseAI.BaseAIController.IsFriendly
struct ABaseAIController_IsFriendly_Params
{
	class AController*                                 TestPlayer;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.IsFriendlyPawn
struct ABaseAIController_IsFriendlyPawn_Params
{
	class APawn*                                       TestPlayer;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.RemoveAllEnemies
struct ABaseAIController_RemoveAllEnemies_Params
{
};

// Function BaseAI.BaseAIController.RemoveEnemy
struct ABaseAIController_RemoveEnemy_Params
{
	class APawn*                                       EnemyPawn;                                                // (Parm)
};

// Function BaseAI.BaseAIController.BroadcastEnemyKnowledge
struct ABaseAIController_BroadcastEnemyKnowledge_Params
{
	class APawn*                                       EnemyPawn;                                                // (Parm)
	TEnumAsByte<EWSPerceptionMode>                     Perception;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.IsSquadMember
struct ABaseAIController_IsSquadMember_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.GetSquadLeader
struct ABaseAIController_GetSquadLeader_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.SetCanCover
struct ABaseAIController_SetCanCover_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function BaseAI.BaseAIController.IsInCover
struct ABaseAIController_IsInCover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.CanCover
struct ABaseAIController_CanCover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.Cleanup
struct ABaseAIController_Cleanup_Params
{
	bool                                               bBeingDestroyed;                                          // (OptionalParm, Parm)
};

// Function BaseAI.BaseAIController.FreeBTETQQuery
struct ABaseAIController_FreeBTETQQuery_Params
{
};

// Function BaseAI.BaseAIController.IsThereValidPathToThisEnemy
struct ABaseAIController_IsThereValidPathToThisEnemy_Params
{
	class APawn*                                       NewEnemy;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.OnPreNewEnemySet
struct ABaseAIController_OnPreNewEnemySet_Params
{
	class APawn*                                       OldEnemy;                                                 // (Parm)
	class APawn*                                       NewEnemy;                                                 // (Parm)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.GetLocalEnemyIndex
struct ABaseAIController_GetLocalEnemyIndex_Params
{
	class APawn*                                       EnemyToFind;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.UpdateEnemyWeaponStates
struct ABaseAIController_UpdateEnemyWeaponStates_Params
{
};

// Function BaseAI.BaseAIController.UpdateWeaponStates
struct ABaseAIController_UpdateWeaponStates_Params
{
};

// Function BaseAI.BaseAIController.UpdateEnemyBodyState
struct ABaseAIController_UpdateEnemyBodyState_Params
{
	TEnumAsByte<EWSBodyStatus>                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.OnEnemyRangeUpdate
struct ABaseAIController_OnEnemyRangeUpdate_Params
{
	float                                              NewDistanceSquare;                                        // (Parm)
};

// Function BaseAI.BaseAIController.UpdateEnemyAngle
struct ABaseAIController_UpdateEnemyAngle_Params
{
	TEnumAsByte<EWSSymbolicAngle>                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.UpdateEnemyRange
struct ABaseAIController_UpdateEnemyRange_Params
{
	TEnumAsByte<EWSRangeClass>                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.GetBehaviorTag
struct ABaseAIController_GetBehaviorTag_Params
{
	bool                                               bNoneIfSuspended;                                         // (Parm)
	TEnumAsByte<EBehaviorTag>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.ExecuteBT
struct ABaseAIController_ExecuteBT_Params
{
	struct FName                                       TreeName;                                                 // (Parm)
	TEnumAsByte<EBTStatus>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIController.OnDeathFailsafe
struct ABaseAIController_OnDeathFailsafe_Params
{
};

// Function BaseAI.BaseAIController.Destroyed
struct ABaseAIController_Destroyed_Params
{
};

// Function BaseAI.BaseAIController.PawnDied
struct ABaseAIController_PawnDied_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
};

// Function BaseAI.BaseAIController.OnTargetChange
struct ABaseAIController_OnTargetChange_Params
{
	class AActor*                                      NewTarget;                                                // (Parm)
};

// Function BaseAI.BaseAIController.InitializeMovementStuckParams
struct ABaseAIController_InitializeMovementStuckParams_Params
{
};

// Function BaseAI.BaseAIController.InitializeDefaultBehavior
struct ABaseAIController_InitializeDefaultBehavior_Params
{
};

// Function BaseAI.BaseAIController.SetDefaultBehavior
struct ABaseAIController_SetDefaultBehavior_Params
{
	struct FName                                       NewDefaultBehavior;                                       // (Parm)
};

// Function BaseAI.BaseAIController.UnPossess
struct ABaseAIController_UnPossess_Params
{
};

// Function BaseAI.BaseAIController.Possess
struct ABaseAIController_Possess_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function BaseAI.BaseAIController.InitializeAIClass
struct ABaseAIController_InitializeAIClass_Params
{
};

// Function BaseAI.BaseAIController.InitializeBlackBoard
struct ABaseAIController_InitializeBlackBoard_Params
{
};

// Function BaseAI.BaseAIController.SetTeam
struct ABaseAIController_SetTeam_Params
{
	int                                                inTeamIdx;                                                // (Parm)
};

// Function BaseAI.BaseAIController.InitFromDef
struct ABaseAIController_InitFromDef_Params
{
};

// Function BaseAI.BaseAIController.SetDefinition
struct ABaseAIController_SetDefinition_Params
{
	class UBaseAIDefinition*                           Def;                                                      // (Parm)
};

// Function BaseAI.BaseAIController.PostBeginPlay
struct ABaseAIController_PostBeginPlay_Params
{
};

// Function BaseAI.BaseAIController.Initialize
struct ABaseAIController_Initialize_Params
{
};

// Function BaseAI.BaseAIController.GenerateAndSetNameForThisLittleKiller
struct ABaseAIController_GenerateAndSetNameForThisLittleKiller_Params
{
};

// Function BaseAI.BaseAIGame.NotifyKilled
struct ABaseAIGame_NotifyKilled_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 KilledPlayer;                                             // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function BaseAI.BaseAIPlayerController.UpdateEnemyVisibility
struct ABaseAIPlayerController_UpdateEnemyVisibility_Params
{
};

// Function BaseAI.BaseAIPlayerController.PostBeginPlay
struct ABaseAIPlayerController_PostBeginPlay_Params
{
};

// Function BaseAI.BaseAIPlayerController.GetShootingLocationAverage
struct ABaseAIPlayerController_GetShootingLocationAverage_Params
{
	struct FVector                                     VectorResult;                                             // (Parm, OutParm)
	bool                                               bGetAnyLocation;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPlayerController.GatherShootingInfo
struct ABaseAIPlayerController_GatherShootingInfo_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Weight;                                                   // (OptionalParm, Parm)
};

// Function BaseAI.BaseAISquad.UpdateEnemySelection
struct ABaseAISquad_UpdateEnemySelection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISquad.GetSquadCenterPawn
struct ABaseAISquad_GetSquadCenterPawn_Params
{
	class ABaseAIPawn*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISquad.GetSquadMembers
struct ABaseAISquad_GetSquadMembers_Params
{
	TArray<class ABaseAIPawn*>                         Members;                                                  // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISquad.GetSquadMemberCount
struct ABaseAISquad_GetSquadMemberCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISquad.UpdateLeader
struct ABaseAISquad_UpdateLeader_Params
{
	class AController*                                 inLeader;                                                 // (Parm)
};

// Function BaseAI.BaseAISquad.EnemyPerceivedBy
struct ABaseAISquad_EnemyPerceivedBy_Params
{
	class AController*                                 Member;                                                   // (Parm)
	TEnumAsByte<EWSPerceptionMode>                     PerceptionType;                                           // (Parm)
	class APawn*                                       Enemy;                                                    // (Parm)
};

// Function BaseAI.BaseAISquad.NotifyKilled
struct ABaseAISquad_NotifyKilled_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 Killed;                                                   // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISquad.Destroyed
struct ABaseAISquad_Destroyed_Params
{
};

// Function BaseAI.BaseAISquad.PostBeginPlay
struct ABaseAISquad_PostBeginPlay_Params
{
};

// Function BaseAI.BaseAISubsystem.Init
struct UBaseAISubsystem_Init_Params
{
};

// Function BaseAI.BaseAISubsystem.IsGlobalPaused
struct UBaseAISubsystem_IsGlobalPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.SetGlobalPaused
struct UBaseAISubsystem_SetGlobalPaused_Params
{
	bool                                               bPaused;                                                  // (Parm)
};

// Function BaseAI.BaseAISubsystem.NotifyPotentialTargets
struct UBaseAISubsystem_NotifyPotentialTargets_Params
{
	class ABaseAIController*                           AI;                                                       // (Parm)
};

// Function BaseAI.BaseAISubsystem.RegisterPotentialTarget
struct UBaseAISubsystem_RegisterPotentialTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function BaseAI.BaseAISubsystem.ToggleAILogging
struct UBaseAISubsystem_ToggleAILogging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.NotifyKilled
struct UBaseAISubsystem_NotifyKilled_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class AController*                                 KilledController;                                         // (Parm)
	class APawn*                                       KilledPawn;                                               // (Parm)
};

// Function BaseAI.BaseAISubsystem.SetBoolProp
struct UBaseAISubsystem_SetBoolProp_Params
{
	TEnumAsByte<EAISysBoolProps>                       Prop;                                                     // (Parm)
	bool                                               bValue;                                                   // (Parm)
};

// Function BaseAI.BaseAISubsystem.GetBoolProp
struct UBaseAISubsystem_GetBoolProp_Params
{
	TEnumAsByte<EAISysBoolProps>                       Prop;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.GetEnemyTeamsSize
struct UBaseAISubsystem_GetEnemyTeamsSize_Params
{
	unsigned char                                      TeamID;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.GetTeamSize
struct UBaseAISubsystem_GetTeamSize_Params
{
	unsigned char                                      TeamID;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.DecreaseTeamSize
struct UBaseAISubsystem_DecreaseTeamSize_Params
{
	unsigned char                                      TeamID;                                                   // (Parm)
};

// Function BaseAI.BaseAISubsystem.IncreaseTeamSize
struct UBaseAISubsystem_IncreaseTeamSize_Params
{
	unsigned char                                      TeamID;                                                   // (Parm)
};

// Function BaseAI.BaseAISubsystem.AppSeconds
struct UBaseAISubsystem_AppSeconds_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.UnRegisterSquad
struct UBaseAISubsystem_UnRegisterSquad_Params
{
	class ABaseAISquad*                                Squad;                                                    // (Parm)
};

// Function BaseAI.BaseAISubsystem.RegisterSquad
struct UBaseAISubsystem_RegisterSquad_Params
{
	class ABaseAISquad*                                Squad;                                                    // (Parm)
};

// Function BaseAI.BaseAISubsystem.UnRegisterAvoidanceComponent
struct UBaseAISubsystem_UnRegisterAvoidanceComponent_Params
{
	class UAIAvoidanceComponent*                       AvoidanceComponent;                                       // (Parm, EditInline)
};

// Function BaseAI.BaseAISubsystem.RegisterAvoidanceComponent
struct UBaseAISubsystem_RegisterAvoidanceComponent_Params
{
	class UAIAvoidanceComponent*                       AvoidanceComponent;                                       // (Parm, EditInline)
};

// Function BaseAI.BaseAISubsystem.UnRegisterSpawnedCover
struct UBaseAISubsystem_UnRegisterSpawnedCover_Params
{
	class ACoverLink*                                  Cover;                                                    // (Parm)
};

// Function BaseAI.BaseAISubsystem.RegisterSpawnedCover
struct UBaseAISubsystem_RegisterSpawnedCover_Params
{
	class ACoverLink*                                  Cover;                                                    // (Parm)
};

// Function BaseAI.BaseAISubsystem.UnRegisterSmartObject
struct UBaseAISubsystem_UnRegisterSmartObject_Params
{
	class USOHubComponent*                             SO;                                                       // (Parm, EditInline)
};

// Function BaseAI.BaseAISubsystem.RegisterSmartObject
struct UBaseAISubsystem_RegisterSmartObject_Params
{
	class USOHubComponent*                             SO;                                                       // (Parm, EditInline)
};

// Function BaseAI.BaseAISubsystem.GetAIDebugTool
struct UBaseAISubsystem_GetAIDebugTool_Params
{
	class UAIDebugTool*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.GetSightSystem
struct UBaseAISubsystem_GetSightSystem_Params
{
	class USightSystem*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.GetNavigationSystem
struct UBaseAISubsystem_GetNavigationSystem_Params
{
	class UNavigationSystem*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.GetMessageSystem
struct UBaseAISubsystem_GetMessageSystem_Params
{
	class UMessageSystem*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.GetBTManager
struct UBaseAISubsystem_GetBTManager_Params
{
	class UBTManager*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.GetETQSystem
struct UBaseAISubsystem_GetETQSystem_Params
{
	class UETQSystem*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAISubsystem.GetInstance
struct UBaseAISubsystem_GetInstance_Params
{
	class UBaseAISubsystem*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.MessageSystem.SendMessageClassClass
struct UMessageSystem_SendMessageClassClass_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	class UClass*                                      Param1;                                                   // (Parm)
	class UClass*                                      Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageClassObject
struct UMessageSystem_SendMessageClassObject_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	class UClass*                                      Param1;                                                   // (Parm)
	class UObject*                                     Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageClassFloat
struct UMessageSystem_SendMessageClassFloat_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	class UClass*                                      Param1;                                                   // (Parm)
	float                                              Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageClassInt
struct UMessageSystem_SendMessageClassInt_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	class UClass*                                      Param1;                                                   // (Parm)
	int                                                Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageObjectClass
struct UMessageSystem_SendMessageObjectClass_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	class UObject*                                     Param1;                                                   // (Parm)
	class UClass*                                      Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageObjectObject
struct UMessageSystem_SendMessageObjectObject_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	class UObject*                                     Param1;                                                   // (Parm)
	class UObject*                                     Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageObjectFloat
struct UMessageSystem_SendMessageObjectFloat_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	class UObject*                                     Param1;                                                   // (Parm)
	float                                              Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageObjectInt
struct UMessageSystem_SendMessageObjectInt_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	class UObject*                                     Param1;                                                   // (Parm)
	int                                                Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageFloatClass
struct UMessageSystem_SendMessageFloatClass_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	float                                              Param1;                                                   // (Parm)
	class UClass*                                      Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageFloatObject
struct UMessageSystem_SendMessageFloatObject_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	float                                              Param1;                                                   // (Parm)
	class UObject*                                     Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageFloatFloat
struct UMessageSystem_SendMessageFloatFloat_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	float                                              Param1;                                                   // (Parm)
	float                                              Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageFloatInt
struct UMessageSystem_SendMessageFloatInt_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	float                                              Param1;                                                   // (Parm)
	int                                                Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageIntClass
struct UMessageSystem_SendMessageIntClass_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	int                                                Param1;                                                   // (Parm)
	class UClass*                                      Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageIntObject
struct UMessageSystem_SendMessageIntObject_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	int                                                Param1;                                                   // (Parm)
	class UObject*                                     Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageIntFloat
struct UMessageSystem_SendMessageIntFloat_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	int                                                Param1;                                                   // (Parm)
	float                                              Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendMessageIntInt
struct UMessageSystem_SendMessageIntInt_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
	int                                                Param1;                                                   // (Parm)
	int                                                Param2;                                                   // (Parm)
	TEnumAsByte<EMessagePriority>                      Priority;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.DrawDebugInfo
struct UMessageSystem_DrawDebugInfo_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function BaseAI.MessageSystem.GetInstance
struct UMessageSystem_GetInstance_Params
{
	class UMessageSystem*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.MessageSystem.RemoveHooksFrom
struct UMessageSystem_RemoveHooksFrom_Params
{
	class UObject*                                     Owner;                                                    // (Parm)
};

// Function BaseAI.MessageSystem.RemoveScriptHook
struct UMessageSystem_RemoveScriptHook_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	struct FScriptDelegate                             Hook;                                                     // (Parm, NeedCtorLink)
};

// Function BaseAI.MessageSystem.AddScriptHook
struct UMessageSystem_AddScriptHook_Params
{
	TEnumAsByte<EMessageID>                            Code;                                                     // (Parm)
	struct FScriptDelegate                             Hook;                                                     // (Parm, NeedCtorLink)
};

// Function BaseAI.MessageSystem.MessageHandlerDelegate
struct UMessageSystem_MessageHandlerDelegate_Params
{
	struct FMsgData                                    Message;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.MessageSystem.MessageHookDelegate
struct UMessageSystem_MessageHookDelegate_Params
{
	struct FMsgData                                    Message;                                                  // (Parm)
};

// Function BaseAI.MessageSystem.Broadcast
struct UMessageSystem_Broadcast_Params
{
	struct FMsgData                                    Message;                                                  // (Parm)
	float                                              Radius;                                                   // (OptionalParm, Parm)
	struct FVector                                     Origin;                                                   // (OptionalParm, Parm)
};

// Function BaseAI.MessageSystem.SendFromTo
struct UMessageSystem_SendFromTo_Params
{
	struct FMsgData                                    Message;                                                  // (Parm)
	class UObject*                                     Sender;                                                   // (Parm)
	class UObject*                                     Receiver;                                                 // (Parm)
};

// Function BaseAI.MessageSystem.Send
struct UMessageSystem_Send_Params
{
	struct FMsgData                                    Message;                                                  // (Parm)
};

// Function BaseAI.MessageSystem.GetMessageReceiver
struct UMessageSystem_GetMessageReceiver_Params
{
	struct FMsgData                                    Message;                                                  // (Parm, OutParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.MessageSystem.GetMessageSender
struct UMessageSystem_GetMessageSender_Params
{
	struct FMsgData                                    Message;                                                  // (Parm, OutParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.MessageSystem.GetMessageParamClass
struct UMessageSystem_GetMessageParamClass_Params
{
	struct FMsgData                                    Message;                                                  // (Parm)
	int                                                ParamIdx;                                                 // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.MessageSystem.GetMessageParamObject
struct UMessageSystem_GetMessageParamObject_Params
{
	struct FMsgData                                    Message;                                                  // (Parm)
	int                                                ParamIdx;                                                 // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.MessageSystem.GetMessageParamFloat
struct UMessageSystem_GetMessageParamFloat_Params
{
	struct FMsgData                                    Message;                                                  // (Parm)
	int                                                ParamIdx;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.MessageSystem.GetMessageParamInt
struct UMessageSystem_GetMessageParamInt_Params
{
	struct FMsgData                                    Message;                                                  // (Parm)
	int                                                ParamIdx;                                                 // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.MessageSystem.SetMessageReceiver
struct UMessageSystem_SetMessageReceiver_Params
{
	struct FMsgData                                    Message;                                                  // (Parm, OutParm)
	class UObject*                                     Receiver;                                                 // (Parm)
};

// Function BaseAI.MessageSystem.SetMessageSender
struct UMessageSystem_SetMessageSender_Params
{
	struct FMsgData                                    Message;                                                  // (Parm, OutParm)
	class UObject*                                     Sender;                                                   // (Parm)
};

// Function BaseAI.MessageSystem.SetMessageParamClass
struct UMessageSystem_SetMessageParamClass_Params
{
	struct FMsgData                                    Message;                                                  // (Parm, OutParm)
	int                                                ParamIdx;                                                 // (Parm)
	class UClass*                                      Value;                                                    // (Parm)
};

// Function BaseAI.MessageSystem.SetMessageParamObject
struct UMessageSystem_SetMessageParamObject_Params
{
	struct FMsgData                                    Message;                                                  // (Parm, OutParm)
	int                                                ParamIdx;                                                 // (Parm)
	class UObject*                                     Value;                                                    // (Parm)
};

// Function BaseAI.MessageSystem.SetMessageParamFloat
struct UMessageSystem_SetMessageParamFloat_Params
{
	struct FMsgData                                    Message;                                                  // (Parm, OutParm)
	int                                                ParamIdx;                                                 // (Parm)
	float                                              Value;                                                    // (Parm)
};

// Function BaseAI.MessageSystem.SetMessageParamInt
struct UMessageSystem_SetMessageParamInt_Params
{
	struct FMsgData                                    Message;                                                  // (Parm, OutParm)
	int                                                ParamIdx;                                                 // (Parm)
	int                                                Value;                                                    // (Parm)
};

// Function BaseAI.SeqAct_SetLeaderFollowingMode.GetObjClassVersion
struct USeqAct_SetLeaderFollowingMode_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SightSystem.TestValidFireLane
struct USightSystem_TestValidFireLane_Params
{
	struct FVector                                     FromLocation;                                             // (Const, Parm, OutParm)
	struct FVector                                     ToLocation;                                               // (Const, Parm, OutParm)
	class AActor*                                      TraceActor;                                               // (Parm)
	bool                                               bUseDefaultFireLane;                                      // (OptionalParm, Parm)
	struct FVector                                     ExtentOfFireLane;                                         // (Const, OptionalParm, Parm, OutParm)
	struct FImpactInfo                                 HitInfo;                                                  // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SightSystem.TestVisibility
struct USightSystem_TestVisibility_Params
{
	struct FVector                                     FromLocation;                                             // (Parm)
	struct FVector                                     ToLocation;                                               // (Parm)
	class AActor*                                      TraceActor;                                               // (OptionalParm, Parm)
	struct FImpactInfo                                 HitInfo;                                                  // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIAvoidanceComponent.SetEnabled
struct UAIAvoidanceComponent_SetEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function BaseAI.AIAvoidanceConeComponent.SetConeSize
struct UAIAvoidanceConeComponent_SetConeSize_Params
{
	float                                              NewDistance;                                              // (Parm)
	float                                              NewDot;                                                   // (Parm)
};

// Function BaseAI.AIAvoidanceCylinderComponent.SetCylinderSize
struct UAIAvoidanceCylinderComponent_SetCylinderSize_Params
{
	float                                              NewRadius;                                                // (Parm)
	float                                              NewHeight;                                                // (Parm)
};

// Function BaseAI.NavigationPath.DrawPath
struct UNavigationPath_DrawPath_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	unsigned char                                      R;                                                        // (OptionalParm, Parm)
	unsigned char                                      G;                                                        // (OptionalParm, Parm)
	unsigned char                                      B;                                                        // (OptionalParm, Parm)
	bool                                               bPersistent;                                              // (OptionalParm, Parm)
};

// Function BaseAI.NavigationPath.WorldToLocal
struct UNavigationPath_WorldToLocal_Params
{
	struct FVector                                     InLocation;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationPath.SetRoute
struct UNavigationPath_SetRoute_Params
{
	TArray<struct FPathPoint>                          Route;                                                    // (Parm, NeedCtorLink)
};

// Function BaseAI.NavigationPath.GetElementPos
struct UNavigationPath_GetElementPos_Params
{
	int                                                Index;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationSystem.TestFindAnchor
struct UNavigationSystem_TestFindAnchor_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     Extent;                                                   // (Parm)
};

// Function BaseAI.NavigationSystem.TestProjectPointToNavMesh
struct UNavigationSystem_TestProjectPointToNavMesh_Params
{
	struct FVector                                     Point;                                                    // (Parm)
};

// Function BaseAI.NavigationSystem.ToggleNavExByActor
struct UNavigationSystem_ToggleNavExByActor_Params
{
	class AActor*                                      Referencer;                                               // (Parm)
	bool                                               bEnabled;                                                 // (Parm)
	float                                              AgentRadius;                                              // (Parm)
};

// Function BaseAI.NavigationSystem.MarkNavPoly
struct UNavigationSystem_MarkNavPoly_Params
{
	int                                                PolyRef;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationSystem.CycleNavMeshRendering
struct UNavigationSystem_CycleNavMeshRendering_Params
{
	class UNavigationHandle*                           ShownRecastActor;                                         // (Parm, OutParm)
	float                                              ShownRadius;                                              // (OptionalParm, Parm, OutParm)
};

// Function BaseAI.NavigationSystem.ProjectPointToNavMesh
struct UNavigationSystem_ProjectPointToNavMesh_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     ResultPos;                                                // (Parm, OutParm)
	struct FVector                                     Extent;                                                   // (Parm)
	float                                              MinWalkableZ;                                             // (Parm)
	float                                              HoverDistance;                                            // (Parm)
	bool                                               bReachable;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationSystem.GetStraightPathLength
struct UNavigationSystem_GetStraightPathLength_Params
{
	struct FVector                                     Start;                                                    // (Parm)
	struct FVector                                     End;                                                      // (Parm)
	class UNavigationHandle*                           NavOverride;                                              // (Parm)
	struct FVector                                     Extent;                                                   // (OptionalParm, Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationSystem.DoesStraightPathExist
struct UNavigationSystem_DoesStraightPathExist_Params
{
	struct FVector                                     Start;                                                    // (Parm)
	struct FVector                                     End;                                                      // (Parm)
	class UNavigationHandle*                           NavOverride;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationSystem.DoesPathExist
struct UNavigationSystem_DoesPathExist_Params
{
	struct FVector                                     Start;                                                    // (Parm)
	struct FVector                                     End;                                                      // (Parm)
	class UNavigationHandle*                           NavOverride;                                              // (Parm)
	bool                                               bIncludeDisabled;                                         // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationSystem.CreatePathForRoute
struct UNavigationSystem_CreatePathForRoute_Params
{
	class ARoute*                                      inRoute;                                                  // (Parm)
	class UNavigationHandle*                           NavOverride;                                              // (Parm)
	class UNavigationPath*                             ResultingPath;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationSystem.FindPath
struct UNavigationSystem_FindPath_Params
{
	struct FVector                                     Start;                                                    // (Parm)
	struct FVector                                     End;                                                      // (Parm)
	class UNavigationHandle*                           NavOverride;                                              // (Parm)
	class UNavigationPath*                             ResultingPath;                                            // (Parm, OutParm)
	class AActor*                                      Walker;                                                   // (OptionalParm, Parm)
	bool                                               bStickToNavmesh;                                          // (OptionalParm, Parm)
	unsigned char                                      ForbiddenNavFlags;                                        // (OptionalParm, Parm)
	struct FVector                                     ForcedMidPoint;                                           // (OptionalParm, Parm)
	class AActor*                                      AvoidedActor;                                             // (OptionalParm, Parm)
	float                                              AvoidanceRadius;                                          // (OptionalParm, Parm)
	bool                                               bGetAsCloseAsPossible;                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationSystem.GetDistanceToWall
struct UNavigationSystem_GetDistanceToWall_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	class UNavigationHandle*                           NavOverride;                                              // (Parm)
	struct FVector                                     HitPos;                                                   // (OptionalParm, Parm)
	struct FVector                                     HitNormal;                                                // (OptionalParm, Parm)
	float                                              Radius;                                                   // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationSystem.IsPointOnNavMesh
struct UNavigationSystem_IsPointOnNavMesh_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	class UNavigationHandle*                           NavOverride;                                              // (Parm)
	struct FVector                                     Extent;                                                   // (OptionalParm, Parm, OutParm)
	bool                                               bIncludeDisabled;                                         // (OptionalParm, Parm)
	struct FVector                                     PointOnNavMesh;                                           // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationSystem.GetPointInsideVolume
struct UNavigationSystem_GetPointInsideVolume_Params
{
	class AVolume*                                     Vol;                                                      // (Parm)
	class UNavigationHandle*                           NavOverride;                                              // (Parm)
	struct FVector                                     Point;                                                    // (Parm, OutParm)
	bool                                               bRandomized;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavigationSystem.UnRegisterRecastActor
struct UNavigationSystem_UnRegisterRecastActor_Params
{
	class UNavigationHandle*                           RCActor;                                                  // (Parm)
};

// Function BaseAI.NavigationSystem.RegisterRecastActor
struct UNavigationSystem_RegisterRecastActor_Params
{
	class UNavigationHandle*                           RCActor;                                                  // (Parm)
};

// Function BaseAI.NavMeshGeneratingInterface.GetAdditionalRecastRadius
struct UNavMeshGeneratingInterface_GetAdditionalRecastRadius_Params
{
	TArray<float>                                      ActorRadius;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function BaseAI.NavMeshGeneratingVolume.UnTouch
struct ANavMeshGeneratingVolume_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function BaseAI.NavMeshGeneratingVolume.Touch
struct ANavMeshGeneratingVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function BaseAI.NavMeshModifier.ShouldSaveForCheckpoint
struct ANavMeshModifier_ShouldSaveForCheckpoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavMeshModifier.ApplyCheckpointRecord
struct ANavMeshModifier_ApplyCheckpointRecord_Params
{
	struct ANavMeshModifier_FCheckpointRecord          Record;                                                   // (Const, Parm, OutParm)
};

// Function BaseAI.NavMeshModifier.CreateCheckpointRecord
struct ANavMeshModifier_CreateCheckpointRecord_Params
{
	struct ANavMeshModifier_FCheckpointRecord          Record;                                                   // (Parm, OutParm)
};

// Function BaseAI.NavMeshModifier.OnToggle
struct ANavMeshModifier_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function BaseAI.NavMeshModifier.OnToggleNavPolys
struct ANavMeshModifier_OnToggleNavPolys_Params
{
	class USeqAct_ToggleNavPolys*                      Action;                                                   // (Parm)
};

// Function BaseAI.NavMeshModifingInterface.GetNavMeshModifingAreaType
struct UNavMeshModifingInterface_GetNavMeshModifingAreaType_Params
{
	TEnumAsByte<ENavPolyArea>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.NavMeshModifingInterface.GetNavMeshModifingExtent
struct UNavMeshModifingInterface_GetNavMeshModifingExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIDebugTool.DumpNativeCallStack
struct UAIDebugTool_DumpNativeCallStack_Params
{
	class AActor*                                      Actor;                                                    // (Parm)
	struct FName                                       LogCategory;                                              // (OptionalParm, Parm)
};

// Function BaseAI.AIDebugTool.GetActorEntryLocation
struct UAIDebugTool_GetActorEntryLocation_Params
{
	class AActor*                                      inActor;                                                  // (OptionalParm, Parm)
	int                                                Index;                                                    // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIDebugTool.FlushETQHistory
struct UAIDebugTool_FlushETQHistory_Params
{
};

// Function BaseAI.AIDebugTool.AddETQLog
struct UAIDebugTool_AddETQLog_Params
{
	struct FString                                     QueryName;                                                // (Parm, NeedCtorLink)
	struct FString                                     TestName;                                                 // (Parm, NeedCtorLink)
	class AActor*                                      Querier;                                                  // (Parm)
};

// Function BaseAI.AIDebugTool.FlushUnreachableActors
struct UAIDebugTool_FlushUnreachableActors_Params
{
};

// Function BaseAI.AIDebugTool.LogUnreachableActor
struct UAIDebugTool_LogUnreachableActor_Params
{
	class AActor*                                      inActor;                                                  // (Parm)
};

// Function BaseAI.AIDebugTool.ClearHistoryColor
struct UAIDebugTool_ClearHistoryColor_Params
{
};

// Function BaseAI.AIDebugTool.ColorHistory
struct UAIDebugTool_ColorHistory_Params
{
	struct FName                                       Filter;                                                   // (Parm)
};

// Function BaseAI.AIDebugTool.ClearHistoryFilter
struct UAIDebugTool_ClearHistoryFilter_Params
{
};

// Function BaseAI.AIDebugTool.SetHistoryFilter
struct UAIDebugTool_SetHistoryFilter_Params
{
	struct FName                                       Filter;                                                   // (Parm)
	bool                                               bVal;                                                     // (Parm)
};

// Function BaseAI.AIDebugTool.ToggleLogDrawingMode
struct UAIDebugTool_ToggleLogDrawingMode_Params
{
	TEnumAsByte<ELogDrawingMode>                       Mode;                                                     // (Parm)
};

// Function BaseAI.AIDebugTool.DisplayNextEntry
struct UAIDebugTool_DisplayNextEntry_Params
{
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                Direction;                                                // (OptionalParm, Parm)
};

// Function BaseAI.AIDebugTool.SetContext
struct UAIDebugTool_SetContext_Params
{
	class AActor*                                      Actor;                                                    // (Parm)
};

// Function BaseAI.AIDebugTool.LogSpaceLine
struct UAIDebugTool_LogSpaceLine_Params
{
	class AActor*                                      Actor;                                                    // (Parm)
	struct FVector                                     Start;                                                    // (Parm)
	struct FVector                                     End;                                                      // (Parm)
	TEnumAsByte<EDebugLineType>                        Type;                                                     // (Parm)
	struct FString                                     Comment;                                                  // (OptionalParm, Parm, NeedCtorLink)
	struct FName                                       Category;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.AIDebugTool.Log
struct UAIDebugTool_Log_Params
{
	class AActor*                                      Actor;                                                    // (Parm)
	struct FString                                     LogText;                                                  // (Parm, NeedCtorLink)
	struct FName                                       LogCategory;                                              // (OptionalParm, Parm)
};

// Function BaseAI.AIDebugTool.SetDebugTarget
struct UAIDebugTool_SetDebugTarget_Params
{
	class ABaseAIController*                           NewDebugTarget;                                           // (Parm)
};

// Function BaseAI.AIDebugTool.FlushLogs
struct UAIDebugTool_FlushLogs_Params
{
	struct FString                                     DirName;                                                  // (OptionalParm, Parm, NeedCtorLink)
	class ABaseAIController*                           AI;                                                       // (OptionalParm, Parm)
};

// Function BaseAI.AIDebugTool.LoadLogFile
struct UAIDebugTool_LoadLogFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	bool                                               bAppendMapName;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIDebugTool.DrawLog
struct UAIDebugTool_DrawLog_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class AActor*                                      Actor;                                                    // (Parm)
};

// Function BaseAI.AIDebugTool.AddBTLogEntry
struct UAIDebugTool_AddBTLogEntry_Params
{
	struct FString                                     Entry;                                                    // (Parm, NeedCtorLink)
};

// Function BaseAI.BaseAIPawn.DrawCrumbs
struct ABaseAIPawn_DrawCrumbs_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
};

// Function BaseAI.BaseAIPawn.GetHoverDistance
struct ABaseAIPawn_GetHoverDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.AfterTeleport
struct ABaseAIPawn_AfterTeleport_Params
{
};

// Function BaseAI.BaseAIPawn.DebuggerUntilHelperFn
struct ABaseAIPawn_DebuggerUntilHelperFn_Params
{
};

// Function BaseAI.BaseAIPawn.GetMaxAttackerStrength
struct ABaseAIPawn_GetMaxAttackerStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.RemoveAttacker
struct ABaseAIPawn_RemoveAttacker_Params
{
	class ABaseAIPawn*                                 Attacker;                                                 // (Parm)
};

// Function BaseAI.BaseAIPawn.GetAttackerCount
struct ABaseAIPawn_GetAttackerCount_Params
{
	int                                                AIType;                                                   // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.TriggerReadability
struct ABaseAIPawn_TriggerReadability_Params
{
	TEnumAsByte<EBaseAIReadability>                    Readability;                                              // (Parm)
	class AActor*                                      MainRef;                                                  // (OptionalParm, Parm)
	TArray<class AActor*>                              References;                                               // (OptionalParm, Parm, OutParm, NeedCtorLink)
};

// Function BaseAI.BaseAIPawn.NotifyTeamChanged
struct ABaseAIPawn_NotifyTeamChanged_Params
{
};

// Function BaseAI.BaseAIPawn.MoveToward
struct ABaseAIPawn_MoveToward_Params
{
	struct FVector                                     Dest;                                                     // (Parm)
	class AActor*                                      GoalActor;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.Destroyed
struct ABaseAIPawn_Destroyed_Params
{
};

// Function BaseAI.BaseAIPawn.OnDestroyed
struct ABaseAIPawn_OnDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm)
};

// Function BaseAI.BaseAIPawn.UnPossessed
struct ABaseAIPawn_UnPossessed_Params
{
};

// Function BaseAI.BaseAIPawn.PossessedBy
struct ABaseAIPawn_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function BaseAI.BaseAIPawn.Died
struct ABaseAIPawn_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.PerformIdleShooting
struct ABaseAIPawn_PerformIdleShooting_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function BaseAI.BaseAIPawn.CanFireActiveWeapon
struct ABaseAIPawn_CanFireActiveWeapon_Params
{
	unsigned char                                      InFiringMode;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.GetDefaultAdjustedAim
struct ABaseAIPawn_GetDefaultAdjustedAim_Params
{
	class ABaseWeapon*                                 W;                                                        // (Parm)
	struct FVector                                     StartFireLoc;                                             // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.GetAdjustedAim
struct ABaseAIPawn_GetAdjustedAim_Params
{
	class ABaseWeapon*                                 W;                                                        // (Parm)
	struct FVector                                     StartFireLoc;                                             // (Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.SetWeapon
struct ABaseAIPawn_SetWeapon_Params
{
	class AWeapon*                                     NewWeapon;                                                // (Parm)
	int                                                Hand;                                                     // (Parm)
};

// Function BaseAI.BaseAIPawn.IsReloadingWeapon
struct ABaseAIPawn_IsReloadingWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.IsInCover
struct ABaseAIPawn_IsInCover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.ReplicatedEvent
struct ABaseAIPawn_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function BaseAI.BaseAIPawn.GetCurrentSOAction
struct ABaseAIPawn_GetCurrentSOAction_Params
{
	class USOAction*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.GetCurrentSOEntry
struct ABaseAIPawn_GetCurrentSOEntry_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.GetCurrentSOComponent
struct ABaseAIPawn_GetCurrentSOComponent_Params
{
	class USmartObjectComponent*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function BaseAI.BaseAIPawn.PostReplicationSOUpdate
struct ABaseAIPawn_PostReplicationSOUpdate_Params
{
};

// Function BaseAI.BaseAIPawn.FinishSOAction
struct ABaseAIPawn_FinishSOAction_Params
{
	class USOActionLatentBase*                         Action;                                                   // (Parm)
	bool                                               bAborted;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.AbortSOUsage
struct ABaseAIPawn_AbortSOUsage_Params
{
	class USmartObjectComponent*                       SO;                                                       // (OptionalParm, Parm, EditInline)
	int                                                EntryId;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.UnClaim
struct ABaseAIPawn_UnClaim_Params
{
	class USmartObjectComponent*                       SO;                                                       // (Parm, EditInline)
	int                                                EntryIdx;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.Claim
struct ABaseAIPawn_Claim_Params
{
	class USmartObjectComponent*                       SO;                                                       // (Parm, EditInline)
	int                                                EntryIdx;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.IsUsingSO
struct ABaseAIPawn_IsUsingSO_Params
{
	class USmartObjectComponent*                       SO;                                                       // (OptionalParm, Parm, EditInline)
	int                                                EntryId;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.UseSO
struct ABaseAIPawn_UseSO_Params
{
	struct FSOInfo                                     SOToUse;                                                  // (Parm)
	TScriptInterface<class USOObserver>                Observer;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.AdjustSelectionRating
struct ABaseAIPawn_AdjustSelectionRating_Params
{
	float                                              Rating;                                                   // (Parm)
	class APawn*                                       Target;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.HasPawnProp
struct ABaseAIPawn_HasPawnProp_Params
{
	TEnumAsByte<EPawnProp>                             Prop;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseAIPawn.SetPawnProp
struct ABaseAIPawn_SetPawnProp_Params
{
	TEnumAsByte<EPawnProp>                             Prop;                                                     // (Parm)
	bool                                               bValue;                                                   // (Parm)
};

// Function BaseAI.BaseAIRoute.GetPath
struct ABaseAIRoute_GetPath_Params
{
	class UNavigationPath*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BaseWeapon.UpdateFiringInfo
struct ABaseWeapon_UpdateFiringInfo_Params
{
	bool                                               bFiring;                                                  // (Parm)
};

// Function BaseAI.BaseWeapon.ForceWeaponReady
struct ABaseWeapon_ForceWeaponReady_Params
{
};

// Function BaseAI.BaseWeapon.CacheAIController
struct ABaseWeapon_CacheAIController_Params
{
};

// Function BaseAI.BaseWeapon.ReplicatedEvent
struct ABaseWeapon_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function BaseAI.LatentActionObserver.OnLatentFinished
struct ULatentActionObserver_OnLatentFinished_Params
{
	class ABaseAIController*                           Observer;                                                 // (Parm)
	class UObject*                                     Action;                                                   // (Parm)
	unsigned char                                      FinishResult;                                             // (Parm)
};

// Function BaseAI.BlackBoard.NotifyPathChanged
struct ABlackBoard_NotifyPathChanged_Params
{
};

// Function BaseAI.BlackBoard.InitNavigationHandle
struct ABlackBoard_InitNavigationHandle_Params
{
};

// Function BaseAI.BlackBoard.ScriptInit
struct ABlackBoard_ScriptInit_Params
{
};

// Function BaseAI.BlackBoard.GetPreconditionsDescriptionString
struct ABlackBoard_GetPreconditionsDescriptionString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function BaseAI.BlackBoard.Initialize
struct ABlackBoard_Initialize_Params
{
	int                                                NumProps;                                                 // (Parm)
};

// Function BaseAI.BlackBoard.GetWSPropObjectInt
struct ABlackBoard_GetWSPropObjectInt_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	class UObject*                                     Value;                                                    // (Parm, OutParm)
	int                                                Param;                                                    // (Parm, OutParm)
};

// Function BaseAI.BlackBoard.GetWSPropObjectFloat
struct ABlackBoard_GetWSPropObjectFloat_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	class UObject*                                     Value;                                                    // (Parm, OutParm)
	float                                              Param;                                                    // (Parm, OutParm)
};

// Function BaseAI.BlackBoard.GetWSPropTime
struct ABlackBoard_GetWSPropTime_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BlackBoard.GetWSPropName
struct ABlackBoard_GetWSPropName_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BlackBoard.GetWSPropObject
struct ABlackBoard_GetWSPropObject_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BlackBoard.GetWSPropVector
struct ABlackBoard_GetWSPropVector_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BlackBoard.GetWSPropFloat
struct ABlackBoard_GetWSPropFloat_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BlackBoard.GetWSPropETQ
struct ABlackBoard_GetWSPropETQ_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BlackBoard.GetWSPropInt
struct ABlackBoard_GetWSPropInt_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BlackBoard.GetWSPropBool
struct ABlackBoard_GetWSPropBool_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BlackBoard.DescribeWSProperty
struct ABlackBoard_DescribeWSProperty_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function BaseAI.BlackBoard.GetWSProperties
struct ABlackBoard_GetWSProperties_Params
{
	TArray<TEnumAsByte<EWSKProp>>                      Keys;                                                     // (Parm, OutParm, NeedCtorLink)
};

// Function BaseAI.BlackBoard.GetWSPropType
struct ABlackBoard_GetWSPropType_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	TEnumAsByte<EWorldStatePropType>                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BlackBoard.SetWSPropTime
struct ABlackBoard_SetWSPropTime_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	float                                              Value;                                                    // (Parm)
};

// Function BaseAI.BlackBoard.SetWSPropObjectInt
struct ABlackBoard_SetWSPropObjectInt_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	class UObject*                                     Value;                                                    // (Parm)
	int                                                Param;                                                    // (Parm)
};

// Function BaseAI.BlackBoard.SetWSPropObjectFloat
struct ABlackBoard_SetWSPropObjectFloat_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	class UObject*                                     Value;                                                    // (Parm)
	float                                              Param;                                                    // (Parm)
};

// Function BaseAI.BlackBoard.SetWSPropName
struct ABlackBoard_SetWSPropName_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	struct FName                                       Value;                                                    // (Parm)
};

// Function BaseAI.BlackBoard.SetWSPropObject
struct ABlackBoard_SetWSPropObject_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	class UObject*                                     Value;                                                    // (Parm)
};

// Function BaseAI.BlackBoard.SetWSPropVector
struct ABlackBoard_SetWSPropVector_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	struct FVector                                     Value;                                                    // (Parm)
};

// Function BaseAI.BlackBoard.SetWSPropFloat
struct ABlackBoard_SetWSPropFloat_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	float                                              Value;                                                    // (Parm)
};

// Function BaseAI.BlackBoard.SetWSPropETQ
struct ABlackBoard_SetWSPropETQ_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	int                                                Value;                                                    // (Parm)
};

// Function BaseAI.BlackBoard.SetWSPropInt
struct ABlackBoard_SetWSPropInt_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	int                                                Value;                                                    // (Parm)
};

// Function BaseAI.BlackBoard.SetWSPropBool
struct ABlackBoard_SetWSPropBool_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	bool                                               Value;                                                    // (Parm)
};

// Function BaseAI.BTDebugInfo.DrawDebug
struct UBTDebugInfo_DrawDebug_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
};

// Function BaseAI.BTDecorator.GetDecoratorDescription
struct UBTDecorator_GetDecoratorDescription_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function BaseAI.BTDecorator.GetDebugInfo
struct UBTDecorator_GetDebugInfo_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	struct FBTDecoratorDebugInfo                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function BaseAI.BTDecorator.OnNodeAborted
struct UBTDecorator_OnNodeAborted_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTNode*                                     AbortedNode;                                              // (Parm)
};

// Function BaseAI.BTDecorator.OnNodeExecuted
struct UBTDecorator_OnNodeExecuted_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	TEnumAsByte<EBTResult>                             _Result;                                                  // (Parm)
};

// Function BaseAI.BTDecorator.OnExecutionEnd
struct UBTDecorator_OnExecutionEnd_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	TEnumAsByte<EBTResult>                             _Result;                                                  // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTDecorator.OnExecutionStart
struct UBTDecorator_OnExecutionStart_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTDecoratorCondition.PropertyChanged
struct UBTDecoratorCondition_PropertyChanged_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	bool                                               bPreviousValue;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTDecoratorConditionBBDot.GetDecoratorDescription
struct UBTDecoratorConditionBBDot_GetDecoratorDescription_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function BaseAI.BTDecoratorConditionMovementLocked.GetDecoratorDescription
struct UBTDecoratorConditionMovementLocked_GetDecoratorDescription_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function BaseAI.BTManager.IsTimeSliced
struct UBTManager_IsTimeSliced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTManager.ToggleTimeSlicing
struct UBTManager_ToggleTimeSlicing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTManager.LoadTreeFromScript
struct UBTManager_LoadTreeFromScript_Params
{
	struct FName                                       TreeName;                                                 // (Parm)
	class UBTCompositeNode*                            TreeRoot;                                                 // (Parm)
	class UBTTemplate*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTManager.GetTree
struct UBTManager_GetTree_Params
{
	struct FName                                       TreeName;                                                 // (Parm)
	class UBTTemplate*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTManager.GetInstance
struct UBTManager_GetInstance_Params
{
	class UBTManager*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTNode.AddDebugInfo
struct UBTNode_AddDebugInfo_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	TArray<struct FBTNodeDebugInfo>                    DebugInfoList;                                            // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTNode.IsDescendantOf
struct UBTNode_IsDescendantOf_Params
{
	class UBTNode*                                     Ancestor;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTNode.Abort
struct UBTNode_Abort_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTPersonalNode*                             PersonalTask;                                             // (Parm)
	TEnumAsByte<EBTResult>                             _Result;                                                  // (OptionalParm, Parm)
};

// Function BaseAI.BTNode.Execute
struct UBTNode_Execute_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTNode.OnExecute
struct UBTNode_OnExecute_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTCompositeNode.ChildExecutionAborted
struct UBTCompositeNode_ChildExecutionAborted_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTNode*                                     Node;                                                     // (Parm)
	TEnumAsByte<EBTResult>                             ExecResult;                                               // (Parm)
	bool                                               bFinalAbort;                                              // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTCompositeNode.ChildExecutionFinished
struct UBTCompositeNode_ChildExecutionFinished_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTNode*                                     Node;                                                     // (Parm)
	TEnumAsByte<EBTResult>                             ExecResult;                                               // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTCompositeNode.GetChildCount
struct UBTCompositeNode_GetChildCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTCompositeNode.AddDecorator
struct UBTCompositeNode_AddDecorator_Params
{
	int                                                ChildIndex;                                               // (Parm)
	class UBTDecorator*                                Decorator;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTCompositeNode.AddChild
struct UBTCompositeNode_AddChild_Params
{
	class UBTNode*                                     Child;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTParallel.ChildExecutionAborted
struct UBTParallel_ChildExecutionAborted_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTNode*                                     Node;                                                     // (Parm)
	TEnumAsByte<EBTResult>                             ExecResult;                                               // (Parm)
	bool                                               bFinalAbort;                                              // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTParallel.ChildExecutionFinished
struct UBTParallel_ChildExecutionFinished_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTNode*                                     Node;                                                     // (Parm)
	TEnumAsByte<EBTResult>                             ExecResult;                                               // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTRandom.AddRandomChild
struct UBTRandom_AddRandomChild_Params
{
	class UBTNode*                                     Child;                                                    // (Parm)
	float                                              Weight;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTRandom.ChildExecutionAborted
struct UBTRandom_ChildExecutionAborted_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTNode*                                     Node;                                                     // (Parm)
	TEnumAsByte<EBTResult>                             ExecResult;                                               // (Parm)
	bool                                               bFinalAbort;                                              // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTRandom.ChildExecutionFinished
struct UBTRandom_ChildExecutionFinished_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTNode*                                     Node;                                                     // (Parm)
	TEnumAsByte<EBTResult>                             ExecResult;                                               // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTSelector.ChildExecutionAborted
struct UBTSelector_ChildExecutionAborted_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTNode*                                     Node;                                                     // (Parm)
	TEnumAsByte<EBTResult>                             ExecResult;                                               // (Parm)
	bool                                               bFinalAbort;                                              // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTSelector.ChildExecutionFinished
struct UBTSelector_ChildExecutionFinished_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTNode*                                     Node;                                                     // (Parm)
	TEnumAsByte<EBTResult>                             ExecResult;                                               // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTSequence.ChildExecutionAborted
struct UBTSequence_ChildExecutionAborted_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTNode*                                     Node;                                                     // (Parm)
	TEnumAsByte<EBTResult>                             ExecResult;                                               // (Parm)
	bool                                               bFinalAbort;                                              // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTSequence.ChildExecutionFinished
struct UBTSequence_ChildExecutionFinished_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTNode*                                     Node;                                                     // (Parm)
	TEnumAsByte<EBTResult>                             ExecResult;                                               // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTTask.OnLatentTaskFinished
struct UBTTask_OnLatentTaskFinished_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTPersonalNode*                             PersonalTask;                                             // (Parm)
	class ABaseAIController*                           Observer;                                                 // (Parm)
	class UObject*                                     Action;                                                   // (Parm)
	unsigned char                                      FinishResult;                                             // (Parm)
};

// Function BaseAI.BTTask.Finish
struct UBTTask_Finish_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	class UBTPersonalNode*                             PersonalTask;                                             // (Parm)
	TEnumAsByte<EBTResult>                             TaskResult;                                               // (Parm)
};

// Function BaseAI.BTTaskPlaySound.OnExecute
struct UBTTaskPlaySound_OnExecute_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	TEnumAsByte<EBTResult>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTTaskRunETQuery.QueryFinished
struct UBTTaskRunETQuery_QueryFinished_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTObserver.OnBTAbortedFinished
struct UBTObserver_OnBTAbortedFinished_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
};

// Function BaseAI.BTObserver.OnBTExecutionFinished
struct UBTObserver_OnBTExecutionFinished_Params
{
	class UBTPersonalInstance*                         PersonalBT;                                               // (Parm)
	TEnumAsByte<EBTResult>                             ExecutionResult;                                          // (Parm)
};

// Function BaseAI.BTPersonalInstance.AddDebugInfo
struct UBTPersonalInstance_AddDebugInfo_Params
{
	TArray<struct FBTNodeDebugInfo>                    DebugList;                                                // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.GetBehaviorTrace
struct UBTPersonalInstance_GetBehaviorTrace_Params
{
	TArray<class UBTNode*>                             TraceStack;                                               // (Parm, OutParm, NeedCtorLink)
};

// Function BaseAI.BTPersonalInstance.IsFiringAllowed
struct UBTPersonalInstance_IsFiringAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.GetTreeName
struct UBTPersonalInstance_GetTreeName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.GetACurrentNode
struct UBTPersonalInstance_GetACurrentNode_Params
{
	class UBTNode*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.GetACurrentTask
struct UBTPersonalInstance_GetACurrentTask_Params
{
	class UBTTask*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.OnEvent
struct UBTPersonalInstance_OnEvent_Params
{
	struct FName                                       EventName;                                                // (Parm)
};

// Function BaseAI.BTPersonalInstance.CreateNewPreconditions
struct UBTPersonalInstance_CreateNewPreconditions_Params
{
};

// Function BaseAI.BTPersonalInstance.ClearETQTasks
struct UBTPersonalInstance_ClearETQTasks_Params
{
};

// Function BaseAI.BTPersonalInstance.UnRegisterETQTask
struct UBTPersonalInstance_UnRegisterETQTask_Params
{
	int                                                QueryIndex;                                               // (Parm)
};

// Function BaseAI.BTPersonalInstance.RegisterETQTask
struct UBTPersonalInstance_RegisterETQTask_Params
{
	int                                                QueryIndex;                                               // (Parm)
	class UBTTaskRunETQuery*                           ETQTask;                                                  // (Parm)
};

// Function BaseAI.BTPersonalInstance.UnRegisterSubTreeTask
struct UBTPersonalInstance_UnRegisterSubTreeTask_Params
{
	class UBTPersonalNode*                             SubTreeTask;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.RegisterSubTreeTask
struct UBTPersonalInstance_RegisterSubTreeTask_Params
{
	class UBTPersonalNode*                             SubTreeTask;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.UnRegisterLatentTask
struct UBTPersonalInstance_UnRegisterLatentTask_Params
{
	class UBTPersonalNode*                             LatentTask;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.RegisterLatentTask
struct UBTPersonalInstance_RegisterLatentTask_Params
{
	class UBTPersonalNode*                             LatentTask;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.GetActiveTask
struct UBTPersonalInstance_GetActiveTask_Params
{
	class UBTNode*                                     Task;                                                     // (Parm)
	class UBTPersonalNode*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.IsActiveTask
struct UBTPersonalInstance_IsActiveTask_Params
{
	class UBTNode*                                     Task;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.UnreservePersonalNode
struct UBTPersonalInstance_UnreservePersonalNode_Params
{
	class UBTNode*                                     Node;                                                     // (Parm)
};

// Function BaseAI.BTPersonalInstance.ReservePersonalNode
struct UBTPersonalInstance_ReservePersonalNode_Params
{
	class UBTNode*                                     Node;                                                     // (Parm)
	class UObject*                                     LatentAction;                                             // (Parm)
	class UBTPersonalNode*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.TaskFinished
struct UBTPersonalInstance_TaskFinished_Params
{
	class UBTPersonalNode*                             Task;                                                     // (Parm)
	TEnumAsByte<EBTResult>                             TaskResult;                                               // (Parm)
};

// Function BaseAI.BTPersonalInstance.TaskStarted
struct UBTPersonalInstance_TaskStarted_Params
{
	class UBTNode*                                     Task;                                                     // (Parm)
	class UBTPersonalNode*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.TreeExecutionFinished
struct UBTPersonalInstance_TreeExecutionFinished_Params
{
	TEnumAsByte<EBTResult>                             EndResult;                                                // (Parm)
};

// Function BaseAI.BTPersonalInstance.OverrideSuspendedCounter
struct UBTPersonalInstance_OverrideSuspendedCounter_Params
{
	int                                                NewValue;                                                 // (Parm)
};

// Function BaseAI.BTPersonalInstance.ResumeTree
struct UBTPersonalInstance_ResumeTree_Params
{
	bool                                               bForce;                                                   // (OptionalParm, Parm)
	TEnumAsByte<EBTStatus>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.SuspendTree
struct UBTPersonalInstance_SuspendTree_Params
{
	TEnumAsByte<EBTStatus>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.SetTree
struct UBTPersonalInstance_SetTree_Params
{
	class UBTNode*                                     NewTree;                                                  // (Parm)
	int                                                MemorySize;                                               // (Parm)
	int                                                MaxIndex;                                                 // (Parm)
	struct FName                                       DebugName;                                                // (OptionalParm, Parm)
};

// Function BaseAI.BTPersonalInstance.FinishTree
struct UBTPersonalInstance_FinishTree_Params
{
};

// Function BaseAI.BTPersonalInstance.AbortTree
struct UBTPersonalInstance_AbortTree_Params
{
};

// Function BaseAI.BTPersonalInstance.StopTree
struct UBTPersonalInstance_StopTree_Params
{
	bool                                               bFinalStop;                                               // (OptionalParm, Parm)
};

// Function BaseAI.BTPersonalInstance.StartFromScratch
struct UBTPersonalInstance_StartFromScratch_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.StartTree
struct UBTPersonalInstance_StartTree_Params
{
	TEnumAsByte<EBTStatus>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPersonalInstance.ClearMemory
struct UBTPersonalInstance_ClearMemory_Params
{
};

// Function BaseAI.BTPersonalInstance.InitializeMemory
struct UBTPersonalInstance_InitializeMemory_Params
{
	int                                                MemorySize;                                               // (Parm)
	int                                                MaxIndex;                                                 // (Parm)
};

// Function BaseAI.BTPersonalNode.OnLatentFinished
struct UBTPersonalNode_OnLatentFinished_Params
{
	class ABaseAIController*                           Observer;                                                 // (Parm)
	class UObject*                                     Action;                                                   // (Parm)
	unsigned char                                      FinishResult;                                             // (Parm)
};

// Function BaseAI.BTPersonalNode.ExecutionFinished
struct UBTPersonalNode_ExecutionFinished_Params
{
};

// Function BaseAI.BTPersonalNode.AssignNode
struct UBTPersonalNode_AssignNode_Params
{
	class UBTNode*                                     NewNode;                                                  // (Parm)
};

// Function BaseAI.BTPreconditions.Initialize
struct UBTPreconditions_Initialize_Params
{
	class UBTPersonalInstance*                         inPersonalBT;                                             // (Parm)
};

// Function BaseAI.BTPreconditions.PopFromBlackBoard
struct UBTPreconditions_PopFromBlackBoard_Params
{
	class ABlackBoard*                                 BB;                                                       // (Parm)
};

// Function BaseAI.BTPreconditions.PushToBlackBoard
struct UBTPreconditions_PushToBlackBoard_Params
{
	class ABlackBoard*                                 BB;                                                       // (Parm)
};

// Function BaseAI.BTPreconditions.Clear
struct UBTPreconditions_Clear_Params
{
};

// Function BaseAI.BTPreconditions.AddMulti
struct UBTPreconditions_AddMulti_Params
{
	TArray<TEnumAsByte<EWSKProp>>                      Keys;                                                     // (Const, Parm, OutParm, NeedCtorLink)
	class UBTDecoratorCondition*                       Condition;                                                // (Parm)
	bool                                               bValue;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.BTPreconditions.Add
struct UBTPreconditions_Add_Params
{
	TEnumAsByte<EWSKProp>                              Key;                                                      // (Parm)
	class UBTDecoratorCondition*                       Condition;                                                // (Parm)
	bool                                               bValue;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQResultHandler.HandleResult
struct UETQResultHandler_HandleResult_Params
{
	class ABaseAIController*                           AI;                                                       // (Parm)
	int                                                QueryID;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.Init
struct UETQSystem_Init_Params
{
};

// Function BaseAI.ETQSystem.SetEnable
struct UETQSystem_SetEnable_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function BaseAI.ETQSystem.ResetQueryTemplate
struct UETQSystem_ResetQueryTemplate_Params
{
	struct FETQQueryTemplate                           Query;                                                    // (Parm, OutParm)
};

// Function BaseAI.ETQSystem.ResetOption
struct UETQSystem_ResetOption_Params
{
	struct FETQOption                                  Option;                                                   // (Parm, OutParm)
};

// Function BaseAI.ETQSystem.ResetCondition
struct UETQSystem_ResetCondition_Params
{
	struct FETQCondition                               Condition;                                                // (Parm, OutParm)
};

// Function BaseAI.ETQSystem.ToggleDebugModeShootingPosition
struct UETQSystem_ToggleDebugModeShootingPosition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.ToggleDebugMode
struct UETQSystem_ToggleDebugMode_Params
{
	TEnumAsByte<EETQDebugMode>                         Mode;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.DebugDrawQuery
struct UETQSystem_DebugDrawQuery_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	int                                                QueryID;                                                  // (Parm)
	class APlayerController*                           Observer;                                                 // (OptionalParm, Parm)
};

// Function BaseAI.ETQSystem.RetainQueryResults
struct UETQSystem_RetainQueryResults_Params
{
	int                                                QueryID;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.DiscardQueryResults
struct UETQSystem_DiscardQueryResults_Params
{
	int                                                QueryID;                                                  // (Parm)
	class ABaseAIController*                           Owner;                                                    // (Parm)
	bool                                               bForce;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.CancelQuery
struct UETQSystem_CancelQuery_Params
{
	int                                                QueryID;                                                  // (Parm)
	class ABaseAIController*                           Owner;                                                    // (Parm)
	bool                                               bDiscardResults;                                          // (Parm)
	bool                                               bIsCleaningUp;                                            // (OptionalParm, Parm)
};

// Function BaseAI.ETQSystem.GetQuery
struct UETQSystem_GetQuery_Params
{
	int                                                QueryID;                                                  // (Parm)
	struct FETQQuery                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.TestItemValidity
struct UETQSystem_TestItemValidity_Params
{
	struct FETQQueryItem                               Item;                                                     // (Parm, OutParm)
	int                                                QueryID;                                                  // (Parm)
	int                                                OptionIndex;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.RunQuery
struct UETQSystem_RunQuery_Params
{
	struct FName                                       QueryName;                                                // (Parm)
	class AActor*                                      context;                                                  // (Parm)
	class UObject*                                     Observer;                                                 // (Parm)
	bool                                               bInstantExecution;                                        // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.GetQueryName
struct UETQSystem_GetQueryName_Params
{
	int                                                QueryID;                                                  // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.GetQueryItemPosition
struct UETQSystem_GetQueryItemPosition_Params
{
	int                                                QueryID;                                                  // (Parm)
	int                                                ItemIndex;                                                // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.GetQueryItemActor
struct UETQSystem_GetQueryItemActor_Params
{
	int                                                QueryID;                                                  // (Parm)
	int                                                ItemIndex;                                                // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.GetQueryItemObject
struct UETQSystem_GetQueryItemObject_Params
{
	int                                                QueryID;                                                  // (Parm)
	int                                                ItemIndex;                                                // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.SetConditionValueName
struct UETQSystem_SetConditionValueName_Params
{
	struct FETQCondition                               out_Condition;                                            // (Parm, OutParm)
	struct FName                                       Value;                                                    // (Parm)
	class UETQSystem*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.SetConditionValueFloat
struct UETQSystem_SetConditionValueFloat_Params
{
	struct FETQCondition                               out_Condition;                                            // (Parm, OutParm)
	float                                              fValue;                                                   // (Parm)
	class UETQSystem*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.SetConditionValueInt
struct UETQSystem_SetConditionValueInt_Params
{
	struct FETQCondition                               out_Condition;                                            // (Parm, OutParm)
	int                                                nValue;                                                   // (Parm)
	class UETQSystem*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.SetConditionValueBool
struct UETQSystem_SetConditionValueBool_Params
{
	struct FETQCondition                               out_Condition;                                            // (Parm, OutParm)
	bool                                               bValue;                                                   // (Parm)
	class UETQSystem*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQSystem.RegisterQueryTemplate
struct UETQSystem_RegisterQueryTemplate_Params
{
	struct FETQQueryTemplate                           out_Query;                                                // (Parm, OutParm)
	class UETQTemplate*                                SourceObject;                                             // (Parm)
	class UETQSystem*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.ETQTemplate.GetQueryName
struct UETQTemplate_GetQueryName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.PluginBase.DrawDebug
struct UPluginBase_DrawDebug_Params
{
	class AHUD*                                        H;                                                        // (Parm)
	struct FName                                       Category;                                                 // (Parm)
};

// Function BaseAI.PluginBase.EnablePlugin
struct UPluginBase_EnablePlugin_Params
{
};

// Function BaseAI.PluginBase.DisablePlugin
struct UPluginBase_DisablePlugin_Params
{
};

// Function BaseAI.AITickablePlugin.Sleep
struct UAITickablePlugin_Sleep_Params
{
	float                                              Seconds;                                                  // (Parm)
};

// Function BaseAI.AIPluginMovement.GetMoveFocus
struct UAIPluginMovement_GetMoveFocus_Params
{
	class AActor*                                      MoveFocus;                                                // (Parm, OutParm)
	struct FVector                                     MoveFocalPoint;                                           // (Parm, OutParm)
	TEnumAsByte<EFocusPriority>                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.GetIfShouldWalkDurringCurrentMovementPhase
struct UAIPluginMovement_GetIfShouldWalkDurringCurrentMovementPhase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.GetOffsetForCurrentMovePhase
struct UAIPluginMovement_GetOffsetForCurrentMovePhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.GetFocusForForCurrentMovePhase
struct UAIPluginMovement_GetFocusForForCurrentMovePhase_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.GetPointMovingToForCurrentMovePhase
struct UAIPluginMovement_GetPointMovingToForCurrentMovePhase_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.TryToSpin
struct UAIPluginMovement_TryToSpin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.IsSpinning
struct UAIPluginMovement_IsSpinning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.TryToDodge
struct UAIPluginMovement_TryToDodge_Params
{
	unsigned char                                      DesiredDodgeDir;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.IsDodging
struct UAIPluginMovement_IsDodging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.IsPerformingSpecialMove
struct UAIPluginMovement_IsPerformingSpecialMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.IsMoving
struct UAIPluginMovement_IsMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.StopMovement
struct UAIPluginMovement_StopMovement_Params
{
};

// Function BaseAI.AIPluginMovement.GetDestinationType
struct UAIPluginMovement_GetDestinationType_Params
{
	TEnumAsByte<EMoveRequestDestinationType>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.GetDestination
struct UAIPluginMovement_GetDestination_Params
{
	struct FMovementRequest                            Request;                                                  // (Parm, OutParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.RePath
struct UAIPluginMovement_RePath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.Failure
struct UAIPluginMovement_Failure_Params
{
};

// Function BaseAI.AIPluginMovement.Success
struct UAIPluginMovement_Success_Params
{
};

// Function BaseAI.AIPluginMovement.SetMovementLock
struct UAIPluginMovement_SetMovementLock_Params
{
	bool                                               bLock;                                                    // (Parm)
	TEnumAsByte<EActionPriority>                       Priority;                                                 // (OptionalParm, Parm)
	bool                                               bNewRequest;                                              // (OptionalParm, Parm)
};

// Function BaseAI.AIPluginMovement.AbortMove
struct UAIPluginMovement_AbortMove_Params
{
	bool                                               bNewRequest;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.FollowSpline
struct UAIPluginMovement_FollowSpline_Params
{
	TEnumAsByte<EActionPriority>                       CommandPriority;                                          // (Parm)
	class UObject*                                     ActionObserver;                                           // (OptionalParm, Parm)
	bool                                               bInAllowedToFire;                                         // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.FollowSplineRequest
struct UAIPluginMovement_FollowSplineRequest_Params
{
	struct FMovementRequest                            Request;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.Wander
struct UAIPluginMovement_Wander_Params
{
	TEnumAsByte<EActionPriority>                       CommandPriority;                                          // (Parm)
	class UObject*                                     ActionObserver;                                           // (OptionalParm, Parm)
	bool                                               bInAllowedToFire;                                         // (OptionalParm, Parm)
	bool                                               bStopAtEnd;                                               // (OptionalParm, Parm)
	bool                                               bStickToNavmesh;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.HandleWanderRequest
struct UAIPluginMovement_HandleWanderRequest_Params
{
	struct FMovementRequest                            Request;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.MoveToFiringPositionUponEnemy
struct UAIPluginMovement_MoveToFiringPositionUponEnemy_Params
{
	struct FVector                                     InDestLocation;                                           // (Const, Parm, OutParm)
	TEnumAsByte<EActionPriority>                       CommandPriority;                                          // (Parm)
	class UObject*                                     ActionObserver;                                           // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;      // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;// (OptionalParm, Parm)
	bool                                               bInAllowedToFire;                                         // (OptionalParm, Parm)
	float                                              AcceptableDistance;                                       // (OptionalParm, Parm)
	bool                                               bStopAtEnd;                                               // (OptionalParm, Parm)
	bool                                               bStickToNavmesh;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.MoveToFiringPosition
struct UAIPluginMovement_MoveToFiringPosition_Params
{
	struct FMovementRequest                            Request;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.HideFromEnemy
struct UAIPluginMovement_HideFromEnemy_Params
{
	class AActor*                                      inPawnGoal;                                               // (Parm)
	TEnumAsByte<EActionPriority>                       CommandPriority;                                          // (Parm)
	class UObject*                                     ActionObserver;                                           // (OptionalParm, Parm)
	float                                              DistAwayFromEnemy;                                        // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;      // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;// (OptionalParm, Parm)
	bool                                               bInAllowedToFire;                                         // (OptionalParm, Parm)
	bool                                               bStopAtEnd;                                               // (OptionalParm, Parm)
	bool                                               bStickToNavmesh;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.HideFrom
struct UAIPluginMovement_HideFrom_Params
{
	struct FMovementRequest                            Request;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.FollowPath
struct UAIPluginMovement_FollowPath_Params
{
	class UNavigationPath*                             InPath;                                                   // (Parm)
	TEnumAsByte<EActionPriority>                       CommandPriority;                                          // (Parm)
	class UObject*                                     ActionObserver;                                           // (OptionalParm, Parm)
	bool                                               bInvCover;                                                // (OptionalParm, Parm)
	bool                                               bStopAtEnd;                                               // (OptionalParm, Parm)
	class AActor*                                      RotateAtEndToMatch;                                       // (OptionalParm, Parm)
	float                                              AcceptableDistance;                                       // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.MoveToActor
struct UAIPluginMovement_MoveToActor_Params
{
	class AActor*                                      inPawnGoal;                                               // (Parm)
	TEnumAsByte<EActionPriority>                       CommandPriority;                                          // (Parm)
	class UObject*                                     ActionObserver;                                           // (OptionalParm, Parm)
	bool                                               bInAllowedToFire;                                         // (OptionalParm, Parm)
	float                                              AcceptableDistance;                                       // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;      // (OptionalParm, Parm)
	float                                              MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;// (OptionalParm, Parm)
	struct FVector                                     DestOffset;                                               // (OptionalParm, Parm)
	struct FVector                                     MidPointOffset;                                           // (OptionalParm, Parm)
	bool                                               bDynamicMidPoint;                                         // (OptionalParm, Parm)
	bool                                               bStopAtEnd;                                               // (OptionalParm, Parm)
	bool                                               bStickToNavmesh;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.MoveToPoint
struct UAIPluginMovement_MoveToPoint_Params
{
	struct FVector                                     InDestLocation;                                           // (Const, Parm, OutParm)
	TEnumAsByte<EActionPriority>                       CommandPriority;                                          // (Parm)
	class UObject*                                     ActionObserver;                                           // (OptionalParm, Parm)
	bool                                               bInAllowedToFire;                                         // (OptionalParm, Parm)
	float                                              AcceptableDistance;                                       // (OptionalParm, Parm)
	struct FVector                                     DestOffset;                                               // (Const, OptionalParm, Parm, OutParm)
	struct FVector                                     MidPointOffset;                                           // (Const, OptionalParm, Parm, OutParm)
	bool                                               bDynamicMidPoint;                                         // (OptionalParm, Parm)
	bool                                               bStopAtEnd;                                               // (OptionalParm, Parm)
	bool                                               bStickToNavmesh;                                          // (OptionalParm, Parm)
	class AActor*                                      RotateAtEndToMatch;                                       // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement.MoveTo
struct UAIPluginMovement_MoveTo_Params
{
	struct FMovementRequest                            Request;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.AIPluginMovement_Simple.DrawDebug
struct UAIPluginMovement_Simple_DrawDebug_Params
{
	class AHUD*                                        H;                                                        // (Parm)
	struct FName                                       Category;                                                 // (Parm)
};

// Function BaseAI.AIPluginMovement_Simple.StopMovement
struct UAIPluginMovement_Simple_StopMovement_Params
{
};

// Function BaseAI.PluginSquad.EnemyPerceived
struct UPluginSquad_EnemyPerceived_Params
{
	TEnumAsByte<EWSPerceptionMode>                     PerceptionType;                                           // (Parm)
	class APawn*                                       PerceivedEnemy;                                           // (Parm)
};

// Function BaseAI.PawnPlugin.Init
struct UPawnPlugin_Init_Params
{
};

// Function BaseAI.SmartObjectComponent.OnSOFinished
struct USmartObjectComponent_OnSOFinished_Params
{
	class USmartObjectComponent*                       SO;                                                       // (Parm, EditInline)
	int                                                EntryIdx;                                                 // (Parm)
	class ABaseAIPawn*                                 User;                                                     // (Parm)
};

// Function BaseAI.SmartObjectComponent.UnClaim
struct USmartObjectComponent_UnClaim_Params
{
	class ABaseAIPawn*                                 User;                                                     // (Parm)
	int                                                EntryIdx;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SmartObjectComponent.Claim
struct USmartObjectComponent_Claim_Params
{
	class ABaseAIPawn*                                 User;                                                     // (Parm)
	int                                                EntryIdx;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SmartObjectComponent.CanBeUsedBy
struct USmartObjectComponent_CanBeUsedBy_Params
{
	class ABaseAIPawn*                                 User;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SmartObjectComponent.SetEntryEnabled
struct USmartObjectComponent_SetEntryEnabled_Params
{
	int                                                EntryIdx;                                                 // (Parm)
	bool                                               bEnable;                                                  // (Parm)
};

// Function BaseAI.SmartObjectComponent.SetEnabled
struct USmartObjectComponent_SetEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function BaseAI.SmartObjectComponent.IsEntryEnabled
struct USmartObjectComponent_IsEntryEnabled_Params
{
	int                                                EntryIdx;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SmartObjectComponent.IsEnabled
struct USmartObjectComponent_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SmartObjectComponent.GetAction
struct USmartObjectComponent_GetAction_Params
{
	int                                                EntryIdx;                                                 // (Parm)
	class USOAction*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SmartObjectComponent.GetEntryRotation
struct USmartObjectComponent_GetEntryRotation_Params
{
	int                                                EntryIdx;                                                 // (Parm)
	bool                                               bForceUseOffset;                                          // (OptionalParm, Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SmartObjectComponent.GetEntryLocation
struct USmartObjectComponent_GetEntryLocation_Params
{
	int                                                EntryIdx;                                                 // (Parm)
	bool                                               bForceUseOffset;                                          // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SmartObjectComponent.UseAbort
struct USmartObjectComponent_UseAbort_Params
{
	class ABaseAIPawn*                                 User;                                                     // (Parm)
	int                                                EntryIdx;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SmartObjectComponent.UseEnd
struct USmartObjectComponent_UseEnd_Params
{
	class ABaseAIPawn*                                 User;                                                     // (Parm)
	int                                                EntryIdx;                                                 // (Parm)
	bool                                               bIsAborting;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SmartObjectComponent.UseStart
struct USmartObjectComponent_UseStart_Params
{
	class ABaseAIPawn*                                 User;                                                     // (Parm)
	int                                                EntryIdx;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SmartObjectProxy.OnToggle
struct ASmartObjectProxy_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function BaseAI.SmartObjectReplicationActor.ComponentChanged
struct ASmartObjectReplicationActor_ComponentChanged_Params
{
	class USmartObjectComponent*                       SOComponent;                                              // (Parm, EditInline)
};

// Function BaseAI.SOAction.Cleanup
struct USOAction_Cleanup_Params
{
};

// Function BaseAI.SOAction.InitFor
struct USOAction_InitFor_Params
{
	class ABaseAIPawn*                                 Instigator;                                               // (Parm)
};

// Function BaseAI.SOAction.OnSOReplicated
struct USOAction_OnSOReplicated_Params
{
};

// Function BaseAI.SOAction.OnPerformOn
struct USOAction_OnPerformOn_Params
{
	class ABaseAIPawn*                                 Instigator;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SOAction.OnIsValidFor
struct USOAction_OnIsValidFor_Params
{
	class ABaseAIPawn*                                 Instigator;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SOAction.PerformOn
struct USOAction_PerformOn_Params
{
	class ABaseAIPawn*                                 Instigator;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SOAction.IsValidFor
struct USOAction_IsValidFor_Params
{
	class ABaseAIPawn*                                 Instigator;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BaseAI.SOActionLatentBase.OnLatentFinished
struct USOActionLatentBase_OnLatentFinished_Params
{
	class ABaseAIController*                           Observer;                                                 // (Parm)
	class UObject*                                     Action;                                                   // (Parm)
	unsigned char                                      FinishResult;                                             // (Parm)
};

// Function BaseAI.SOActionLatentBase.Cleanup
struct USOActionLatentBase_Cleanup_Params
{
};

// Function BaseAI.SOActionLatentBase.InitFor
struct USOActionLatentBase_InitFor_Params
{
	class ABaseAIPawn*                                 Instigator;                                               // (Parm)
};

// Function BaseAI.SOActionLatentBase.OnAbortPerforming
struct USOActionLatentBase_OnAbortPerforming_Params
{
};

// Function BaseAI.SOActionLatentBase.AbortPerforming
struct USOActionLatentBase_AbortPerforming_Params
{
};

// Function BaseAI.SOObserver.OnSOFinished
struct USOObserver_OnSOFinished_Params
{
	class USmartObjectComponent*                       SO;                                                       // (Parm, EditInline)
	int                                                EntryIndex;                                               // (Parm)
	class ABaseAIPawn*                                 User;                                                     // (Parm)
};

// Function BaseAI.SeqAct_AISetBT.Activated
struct USeqAct_AISetBT_Activated_Params
{
};

// Function BaseAI.SOProximityBroudcastComponent.OnMultiUnTouchBroudcast
struct USOProximityBroudcastComponent_OnMultiUnTouchBroudcast_Params
{
	int                                                Index;                                                    // (Parm)
	class AActor*                                      Other;                                                    // (Parm)
};

// Function BaseAI.SOProximityBroudcastComponent.OnMultiTouchBroudcast
struct USOProximityBroudcastComponent_OnMultiTouchBroudcast_Params
{
	int                                                Index;                                                    // (Parm)
	class AActor*                                      Other;                                                    // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
