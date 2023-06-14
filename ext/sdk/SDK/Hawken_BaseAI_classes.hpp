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

// Class BaseAI.ActionArea
// 0x000C (0x020C - 0x0200)
class AActionArea : public AVolume
{
public:
	TArray<class AFireSpot*>                           FireSpots;                                                // 0x0200(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.ActionArea");
		return ptr;
	}

};


// Class BaseAI.AIEditorDataInterface
// 0x0000 (0x003C - 0x003C)
class UAIEditorDataInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.AIEditorDataInterface");
		return ptr;
	}


	bool IsBeingEdit();
	void SetBeingEdit(bool bIsBeingEdited);
	void LoadData(class UObject* TemplateOb);
	void SaveData(class UObject* TemplateOb);
};


// Class BaseAI.BaseAIController
// 0x01EC (0x0594 - 0x03A8)
class ABaseAIController : public AGameAIController
{
public:
	class UBTManager*                                  BehTreeMgr;                                               // 0x03A8(0x0004) (Const, Transient)
	class ABlackBoard*                                 MyBlackBoard;                                             // 0x03AC(0x0004) (Const, Transient)
	struct FName                                       DefaultBehavior;                                          // 0x03B0(0x0008)
	struct FName                                       DefaultBehaviorMP;                                        // 0x03B8(0x0008) (Const)
	class UBTTemplate*                                 DefaultBehaviorTreeTemplate;                              // 0x03C0(0x0004)
	class UBaseAIDefinition*                           BaseDef;                                                  // 0x03C4(0x0004) (Edit)
	TArray<float>                                      RangeDistance;                                            // 0x03C8(0x000C) (Transient, NeedCtorLink)
	unsigned long                                      bEnemyRange2D : 1;                                        // 0x03D4(0x0004)
	unsigned long                                      bHandleEnemyRangeUpdate : 1;                              // 0x03D4(0x0004)
	unsigned long                                      bSquadBasedEnemySelection : 1;                            // 0x03D4(0x0004)
	unsigned long                                      bEventOnTargetChange : 1;                                 // 0x03D4(0x0004)
	unsigned long                                      bAlwaysAssignEnemy : 1;                                   // 0x03D4(0x0004)
	unsigned long                                      bNavigationForced : 1;                                    // 0x03D4(0x0004) (Const)
	unsigned long                                      bAlwaysFaceTarget : 1;                                    // 0x03D4(0x0004)
	unsigned long                                      bAlwaysFaceWithChest : 1;                                 // 0x03D4(0x0004)
	unsigned long                                      bWantsToBeLeader : 1;                                     // 0x03D4(0x0004)
	unsigned long                                      bTargetAlternateLoc : 1;                                  // 0x03D4(0x0004)
	unsigned long                                      bLeadTarget : 1;                                          // 0x03D4(0x0004)
	unsigned long                                      bEnemyInfoValid : 1;                                      // 0x03D4(0x0004)
	unsigned long                                      bEnemyIsVisible : 1;                                      // 0x03D4(0x0004)
	unsigned long                                      bUsePerceptionHearing : 1;                                // 0x03D4(0x0004)
	unsigned long                                      bUseAimAttractors : 1;                                    // 0x03D4(0x0004)
	unsigned long                                      bForceFire : 1;                                           // 0x03D4(0x0004) (Edit)
	unsigned long                                      bForceFireWhenNoLOS : 1;                                  // 0x03D4(0x0004) (Edit)
	unsigned long                                      bForceDisableFire : 1;                                    // 0x03D4(0x0004) (Edit)
	unsigned long                                      bKismetLogicPause : 1;                                    // 0x03D4(0x0004)
	unsigned long                                      bKismetActionRunning : 1;                                 // 0x03D4(0x0004)
	unsigned long                                      bFallingBackToFormation : 1;                              // 0x03D4(0x0004) (Const)
	unsigned long                                      bCallOnPreNewEnemySet : 1;                                // 0x03D4(0x0004)
	unsigned long                                      bAllwaysCheckForPathToEnemyWhenNewEnemySet : 1;           // 0x03D4(0x0004)
	unsigned long                                      bDebugGunAim : 1;                                         // 0x03D4(0x0004) (Transient)
	float                                              NextAllowedSquadTargetAssignment;                         // 0x03D8(0x0004) (Transient)
	class ABaseAIPawn*                                 SquadAssignedTarget;                                      // 0x03DC(0x0004) (Transient)
	class UBTPersonalInstance*                         CurrentBT;                                                // 0x03E0(0x0004) (Transient)
	TArray<class UBTPersonalInstance*>                 SuspendedTreesStack;                                      // 0x03E4(0x000C) (Transient, NeedCtorLink)
	struct FName                                       UsedETQQueries[0x4];                                      // 0x03F0(0x0008)
	int                                                FailedQueryId;                                            // 0x0410(0x0004)
	float                                              CoverComfort;                                             // 0x0414(0x0004) (Transient)
	class ABaseAIPawn*                                 MyBaseAIPawn;                                             // 0x0418(0x0004)
	unsigned char                                      ForbiddenNavFlags;                                        // 0x041C(0x0001)
	TEnumAsByte<ETargetingRequest>                     PreferedTargetingMode;                                    // 0x041D(0x0001)
	TEnumAsByte<EBaseMoveMood>                         LogicalMoveMood;                                          // 0x041E(0x0001) (Const)
	TEnumAsByte<ELeaderFollowingMode>                  LeaderFollowingMode;                                      // 0x041F(0x0001)
	TEnumAsByte<EDistanceClass>                        TetherDistanceWhileFollowingLeader;                       // 0x0420(0x0001) (Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	TArray<class UAITickablePlugin*>                   TickablePlugins;                                          // 0x0424(0x000C) (Const, NeedCtorLink)
	class UPluginSquad*                                SquadPlugin;                                              // 0x0430(0x0004) (ExportObject, NeedCtorLink, EditInline)
	class UAIPluginMovement*                           MovementPlugin;                                           // 0x0434(0x0004) (ExportObject, NeedCtorLink, EditInline)
	class UClass*                                      MovementPluginClass;                                      // 0x0438(0x0004)
	class AActor*                                      AvoidedActor;                                             // 0x043C(0x0004) (Transient)
	class AActor*                                      TemporaryFocus;                                           // 0x0440(0x0004)
	struct FVector                                     LastSeenPos;                                              // 0x0444(0x000C)
	struct FVector                                     LastSeeingPos;                                            // 0x0450(0x000C)
	float                                              LastSeenTime;                                             // 0x045C(0x0004)
	float                                              TrackingReactionTime;                                     // 0x0460(0x0004)
	float                                              BaseTrackingReactionTime;                                 // 0x0464(0x0004)
	struct FVector                                     TrackedVelocity;                                          // 0x0468(0x000C)
	class APawn*                                       CurrentlyTrackedEnemy;                                    // 0x0474(0x0004)
	class APawn*                                       BlockedAimTarget;                                         // 0x0478(0x0004)
	float                                              LastIterativeCheck;                                       // 0x047C(0x0004)
	float                                              AimUpdateFrequency;                                       // 0x0480(0x0004)
	float                                              LastAimUpdateTime;                                        // 0x0484(0x0004)
	float                                              ErrorUpdateFrequency;                                     // 0x0488(0x0004)
	float                                              LastErrorUpdateTime;                                      // 0x048C(0x0004)
	float                                              CurrentAimError;                                          // 0x0490(0x0004)
	TArray<struct FEnemyPosition>                      SavedPositions;                                           // 0x0494(0x000C) (NeedCtorLink)
	float                                              DefaultStuckAdjustingMinMovementDeltaRequired;            // 0x04A0(0x0004) (Config)
	float                                              DefaultStuckAdjustingMinMovementDeltaRequiredSq;          // 0x04A4(0x0004)
	float                                              DefaultMinTimeDeltaInSecsBetweenStuckAdjustingTests;      // 0x04A8(0x0004) (Config)
	float                                              DefaultStuckMinNormalMovementDeltaRequired;               // 0x04AC(0x0004) (Config)
	float                                              DefaultStuckMinNormalMovementDeltaRequiredSq;             // 0x04B0(0x0004)
	float                                              DefaultMinTimeDeltaInSecsBetweenNormalMovementStuckTests; // 0x04B4(0x0004) (Config)
	float                                              MovingToEnemyStuckAdjustingMinMovementDeltaRequired;      // 0x04B8(0x0004) (Config)
	float                                              MovingToEnemyStuckAdjustingMinMovementDeltaRequiredSq;    // 0x04BC(0x0004)
	float                                              MovingToEnemyMinTimeDeltaInSecsBetweenStuckAdjustingTests;// 0x04C0(0x0004) (Config)
	float                                              MovingToEnemyStuckMinNormalMovementDeltaRequired;         // 0x04C4(0x0004) (Config)
	float                                              MovingToEnemyStuckMinNormalMovementDeltaRequiredSq;       // 0x04C8(0x0004)
	float                                              MovingToEnemyMinTimeDeltaInSecsBetweenNormalMovementStuckTests;// 0x04CC(0x0004) (Config)
	float                                              HidingFromEnemyStuckAdjustingMinMovementDeltaRequired;    // 0x04D0(0x0004) (Config)
	float                                              HidingFromEnemyStuckAdjustingMinMovementDeltaRequiredSq;  // 0x04D4(0x0004)
	float                                              HidingFromEnemyMinTimeDeltaInSecsBetweenStuckAdjustingTests;// 0x04D8(0x0004) (Config)
	float                                              HidingFromEnemyStuckMinNormalMovementDeltaRequired;       // 0x04DC(0x0004) (Config)
	float                                              HidingFromEnemyStuckMinNormalMovementDeltaRequiredSq;     // 0x04E0(0x0004)
	float                                              HidingFromEnemyMinTimeDeltaInSecsBetweenNormalMovementStuckTests;// 0x04E4(0x0004) (Config)
	float                                              MoveToFiringPositionStuckAdjustingMinMovementDeltaRequired;// 0x04E8(0x0004) (Config)
	float                                              MoveToFiringPositionStuckAdjustingMinMovementDeltaRequiredSq;// 0x04EC(0x0004)
	float                                              MoveToFiringPositionMinTimeDeltaInSecsBetweenStuckAdjustingTests;// 0x04F0(0x0004) (Config)
	float                                              MoveToFiringPositionStuckMinNormalMovementDeltaRequired;  // 0x04F4(0x0004) (Config)
	float                                              MoveToFiringPositionStuckMinNormalMovementDeltaRequiredSq;// 0x04F8(0x0004)
	float                                              MoveToFiringPositionMinTimeDeltaInSecsBetweenNormalMovementStuckTests;// 0x04FC(0x0004) (Config)
	float                                              WadneringStuckAdjustingMinMovementDeltaRequired;          // 0x0500(0x0004) (Config)
	float                                              WadneringStuckAdjustingMinMovementDeltaRequiredSq;        // 0x0504(0x0004)
	float                                              WadneringMinTimeDeltaInSecsBetweenStuckAdjustingTests;    // 0x0508(0x0004) (Config)
	float                                              WadneringStuckMinNormalMovementDeltaRequired;             // 0x050C(0x0004) (Config)
	float                                              WadneringStuckMinNormalMovementDeltaRequiredSq;           // 0x0510(0x0004)
	float                                              WadneringMinTimeDeltaInSecsBetweenNormalMovementStuckTests;// 0x0514(0x0004) (Config)
	float                                              Response_MinEnemySeenTime;                                // 0x0518(0x0004) (Config)
	float                                              Response_MinEnemyMemoryTime;                              // 0x051C(0x0004) (Config)
	float                                              Response_MinEnemyHearTime;                                // 0x0520(0x0004) (Config)
	float                                              Response_MinEnemyBeliefTime;                              // 0x0524(0x0004) (Config)
	float                                              Response_EnemyTooLongNoSeeTime;                           // 0x0528(0x0004) (Config)
	float                                              Response_MinEnemyDetectStartTime;                         // 0x052C(0x0004) (Config)
	float                                              Response_MinEnemyDetectFinishTime;                        // 0x0530(0x0004) (Config)
	float                                              Response_HearingLostTime;                                 // 0x0534(0x0004) (Config)
	float                                              NextTargetSelectionTime;                                  // 0x0538(0x0004) (Transient)
	float                                              TargetSelectionInterval;                                  // 0x053C(0x0004)
	class AActor*                                      FireTarget;                                               // 0x0540(0x0004)
	TArray<float>                                      AimHitChance;                                             // 0x0544(0x000C) (Config, NeedCtorLink)
	float                                              AimModBase;                                               // 0x0550(0x0004) (Config)
	float                                              AimModEvading;                                            // 0x0554(0x0004) (Config)
	struct FVector                                     AimOffset;                                                // 0x0558(0x000C)
	float                                              LastLOSUpdateTime;                                        // 0x0564(0x0004) (Transient)
	TArray<class AActor*>                              TargetList;                                               // 0x0568(0x000C) (NeedCtorLink)
	TArray<class AActor*>                              ProhibitedTargetList;                                     // 0x0574(0x000C) (NeedCtorLink)
	class ABaseAISquad*                                BaseSquad;                                                // 0x0580(0x0004) (Transient)
	TArray<struct FLocalEnemyInfo>                     LocalEnemyList;                                           // 0x0584(0x000C) (NeedCtorLink)
	float                                              NextPathToEnemyCheckTime;                                 // 0x0590(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseAIController");
		return ptr;
	}


	void DrawEnemyPerception(class UCanvas* DrawCanvas);
	bool HasLOSToEnemy();
	struct FVector GetAimPoint(class AActor* Target);
	float AdjustAimError(float TargetDist, bool bInstantProj);
	bool IsPointInMyActionArea(const struct FVector& pos);
	void CreatePathForRoute(class ABaseAIRoute* BaseRoute, class UNavigationPath** outPath);
	bool FollowRoute(class UObject* MoveObserver, class ARoute* RouteToFollow, TEnumAsByte<EActionPriority> ActionPriority, TEnumAsByte<EBaseMoveMood> InMM, bool bInvCover, bool bStopAtEnd, class AActor* RotateAtEndToMatch, float AcceptableDistance);
	bool MoveToPoint(class UObject* MoveObserver, const struct FVector& InDestLocation, TEnumAsByte<EActionPriority> ActionPriority, TEnumAsByte<EBaseMoveMood> InMM, bool bAllowedToFire, bool bStopAtEnd, bool bDynamicMidPoint, bool bStickToNavmesh, float AcceptableDistance, class AActor* RotateAtEndToMatch, struct FVector* DestOffset, struct FVector* MidPointOffset);
	bool MoveToFiringPositionUponEnemy(class UObject* MoveObserver, TEnumAsByte<EActionPriority> ActionPriority, TEnumAsByte<EBaseMoveMood> InMM, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, bool bAllowedToFire, bool bStopAtEnd, float AcceptableDistance, struct FVector* InFirePosLocation);
	bool HideFromEnemy(class UObject* MoveObserver, class APawn* MoveGoal, TEnumAsByte<EActionPriority> ActionPriority, TEnumAsByte<EBaseMoveMood> InMM, float DistAwayFromEnemy, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, bool bAllowedToFire, bool bStopAtEnd);
	bool MoveToActor(class UObject* MoveObserver, class AActor* inActorGoal, TEnumAsByte<EActionPriority> ActionPriority, TEnumAsByte<EBaseMoveMood> InMM, bool bInAllowedToFire, bool bStopAtEnd, bool bStickToNavmesh, float AcceptableDistance, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, class AActor* RotateAtEndToMatch);
	bool AllowedToMove();
	void StopMovement(TEnumAsByte<EActionPriority> ActionPriority);
	struct FVector GetDesiredMoveTargetOffset();
	void StepAsideFor(class AActor* Other, const struct FVector& HitNormal);
	bool IsMovementLocked(TEnumAsByte<EActionPriority> Priority);
	bool IsMoving();
	bool IsPointReachable(const struct FVector& Point);
	void SetupPathfinding();
	bool ClearNavigation(class UNavigationHandle* Navigation, bool bForced);
	bool SetNavigation(class UNavigationHandle* Navigation, bool bForced);
	void NavMeshVolumeLeft(class UNavigationHandle* NavVolume);
	void NavMeshVolumeEntered(class UNavigationHandle* NavVolume);
	void OnGlobalPauseChanged(bool bPaused);
	void StopLogic(bool bByKismet);
	void RestartLogic(bool bByKismet);
	void ResumeLogic(bool bByKismet);
	void SuspendLogic(bool bByKismet);
	void BreakKismetLogicAndMovementLock();
	bool IsLogicSuspended();
	bool IsLogicRunning();
	bool IsControlledByKismet();
	bool IsTargetOverwhelmed(class APawn* Target);
	bool SelectTarget();
	bool SelectEnemy();
	void SetEnemy(class APawn* NewEnemy);
	bool SelectTargetInternal(bool bOnlyFromTargetList);
	void NotifyKilled(class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType);
	bool HasValidFireLaneToCurrentEnemy(bool bUseDefaultFireLane, struct FVector* ExtentOfFireLane);
	void NotifyEnemyBecameVisible(class APawn* VisibleEnemy, float TimeSinceLastVisible);
	void NotifyLostEnemyVisibility(class APawn* LostEnemy);
	void NoticedEnemy(class APawn* NewEnemy);
	bool IsTargetConcealed(class AActor* Target);
	bool IsEnemyVisible(class APawn* EnemyPawn, int* EnemyIdx);
	bool CanPawnBeSeenFrom(class ABaseAIPawn* Target, const struct FVector& FireSpot);
	void UpdateEnemyPerception(bool bSkipResponseDelay);
	TEnumAsByte<EBaseMoveMood> GetMoveMoodOverride();
	void SetLogicalMoveMoodOverride(TEnumAsByte<EBaseMoveMood> MoveMood);
	void SetLogicalMoveMood(TEnumAsByte<EBaseMoveMood> MoveMood);
	void OnPostTeleport(class USequenceAction* Action);
	void OnTeleport(class USeqAct_Teleport* Action);
	void OnAISetBT(class USeqAct_AISetBT* inAction);
	void OnAISetGoal(class USeqAct_AISetGoal* inAction);
	bool IsFriendly(class AController* TestPlayer);
	bool IsFriendlyPawn(class APawn* TestPlayer);
	void RemoveAllEnemies();
	void RemoveEnemy(class APawn* EnemyPawn);
	int BroadcastEnemyKnowledge(class APawn* EnemyPawn, TEnumAsByte<EWSPerceptionMode> Perception);
	bool IsSquadMember();
	class AController* GetSquadLeader();
	void SetCanCover(bool bEnable);
	bool IsInCover();
	bool CanCover();
	void Cleanup(bool bBeingDestroyed);
	void FreeBTETQQuery();
	bool IsThereValidPathToThisEnemy(class APawn* NewEnemy);
	class APawn* OnPreNewEnemySet(class APawn* OldEnemy, class APawn* NewEnemy);
	int GetLocalEnemyIndex(class APawn* EnemyToFind);
	void UpdateEnemyWeaponStates();
	void UpdateWeaponStates();
	TEnumAsByte<EWSBodyStatus> UpdateEnemyBodyState();
	void OnEnemyRangeUpdate(float NewDistanceSquare);
	TEnumAsByte<EWSSymbolicAngle> UpdateEnemyAngle();
	TEnumAsByte<EWSRangeClass> UpdateEnemyRange();
	TEnumAsByte<EBehaviorTag> GetBehaviorTag(bool bNoneIfSuspended);
	TEnumAsByte<EBTStatus> ExecuteBT(const struct FName& TreeName);
	void OnDeathFailsafe();
	void Destroyed();
	void PawnDied(class APawn* inPawn);
	void OnTargetChange(class AActor* NewTarget);
	void InitializeMovementStuckParams();
	void InitializeDefaultBehavior();
	void SetDefaultBehavior(const struct FName& NewDefaultBehavior);
	void UnPossess();
	void Possess(class APawn* inPawn, bool bVehicleTransition);
	void InitializeAIClass();
	void InitializeBlackBoard();
	void SetTeam(int inTeamIdx);
	void InitFromDef();
	void SetDefinition(class UBaseAIDefinition* Def);
	void PostBeginPlay();
	void Initialize();
	void GenerateAndSetNameForThisLittleKiller();
};


// Class BaseAI.BaseAIDefinition
// 0x000C (0x0048 - 0x003C)
class UBaseAIDefinition : public UObject
{
public:
	TArray<struct FETQNamedQueryOverride>              QueryOverrides;                                           // 0x003C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseAIDefinition");
		return ptr;
	}

};


// Class BaseAI.BaseAIGame
// 0x0000 (0x039C - 0x039C)
class ABaseAIGame : public AGameInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseAIGame");
		return ptr;
	}


	void NotifyKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType);
};


// Class BaseAI.BaseAINativeTypes
// 0x0000 (0x003C - 0x003C)
class UBaseAINativeTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseAINativeTypes");
		return ptr;
	}

};


// Class BaseAI.BaseAITypes
// 0x0000 (0x003C - 0x003C)
class UBaseAITypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseAITypes");
		return ptr;
	}

};


// Class BaseAI.BaseAIPlayerController
// 0x0120 (0x0728 - 0x0608)
class ABaseAIPlayerController : public APlayerController
{
public:
	float                                              MaxVisibleEnemyDistance;                                  // 0x0608(0x0004) (Config)
	unsigned char                                      VisibleEnemiesUsed;                                       // 0x060C(0x0001) (Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x060D(0x0003) MISSED OFFSET
	struct FShootingInfo                               GatheredShootingInfo;                                     // 0x0610(0x00FC) (Transient)
	class ABaseAISquad*                                BaseSquad;                                                // 0x070C(0x0004) (Transient)
	TArray<struct FPCVisibleEnemy>                     LastVisibleEnemies;                                       // 0x0710(0x000C) (Transient, AlwaysInit, NeedCtorLink)
	struct FVector                                     AverageVisibleEnemyLocation;                              // 0x071C(0x000C) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseAIPlayerController");
		return ptr;
	}


	void UpdateEnemyVisibility();
	void PostBeginPlay();
	bool GetShootingLocationAverage(bool bGetAnyLocation, struct FVector* VectorResult);
	void GatherShootingInfo(const struct FVector& HitLocation, int Weight);
};


// Class BaseAI.BaseAISquad
// 0x0014 (0x01E8 - 0x01D4)
class ABaseAISquad : public AInfo
{
public:
	class AController*                                 Leader;                                                   // 0x01D4(0x0004) (Edit, EditConst)
	class AActor*                                      FormationCenter;                                          // 0x01D8(0x0004) (Edit, EditConst)
	unsigned long                                      bPlayerSquad : 1;                                         // 0x01DC(0x0004)
	unsigned long                                      bIsMP : 1;                                                // 0x01DC(0x0004)
	unsigned long                                      bSquadInCombat : 1;                                       // 0x01DC(0x0004) (Transient)
	float                                              NextEnemySelectionTimestamp;                              // 0x01E0(0x0004) (Transient)
	float                                              EnemySelectionInterval;                                   // 0x01E4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseAISquad");
		return ptr;
	}


	bool UpdateEnemySelection();
	class ABaseAIPawn* GetSquadCenterPawn();
	bool GetSquadMembers(TArray<class ABaseAIPawn*>* Members);
	int GetSquadMemberCount();
	void UpdateLeader(class AController* inLeader);
	void EnemyPerceivedBy(class AController* Member, TEnumAsByte<EWSPerceptionMode> PerceptionType, class APawn* Enemy);
	bool NotifyKilled(class AController* Killer, class AController* Killed, class APawn* KilledPawn);
	void Destroyed();
	void PostBeginPlay();
};


// Class BaseAI.BaseAISubsystem
// 0x0080 (0x00C4 - 0x0044)
class UBaseAISubsystem : public UAISubsystem
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x0044(0x0004) (Const, Native, NoExport)
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0048(0x0004) (Const, Native, NoExport)
	int                                                BoolPropFlags;                                            // 0x004C(0x0004) (Const)
	class UETQSystem*                                  ETQSys;                                                   // 0x0050(0x0004)
	class UBTManager*                                  BTMgr;                                                    // 0x0054(0x0004)
	class UMessageSystem*                              MsgSys;                                                   // 0x0058(0x0004)
	class UNavigationSystem*                           NavSys;                                                   // 0x005C(0x0004)
	class USightSystem*                                SightSys;                                                 // 0x0060(0x0004)
	class UAIDebugTool*                                AIDebug;                                                  // 0x0064(0x0004)
	class ASmartObjectReplicationActor*                SmartObjectReplication;                                   // 0x0068(0x0004) (Const)
	TArray<class USOHubComponent*>                     SmartObjects;                                             // 0x006C(0x000C) (Const, ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class USOHubComponent*>                     InitPendingSmartObjects;                                  // 0x0078(0x000C) (Const, ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class ACoverLink*>                          SpawnedCovers;                                            // 0x0084(0x000C) (Const, NeedCtorLink)
	TArray<class UAIAvoidanceComponent*>               AvoidanceComponents;                                      // 0x0090(0x000C) (Const, ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class ABaseAISquad*>                        Squads;                                                   // 0x009C(0x000C) (Const, NeedCtorLink)
	TArray<int>                                        TeamSizes;                                                // 0x00A8(0x000C) (Const, NeedCtorLink)
	TArray<class AActor*>                              PotentialTargets;                                         // 0x00B4(0x000C) (Const, NeedCtorLink)
	unsigned long                                      bGlobalPaused : 1;                                        // 0x00C0(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseAISubsystem");
		return ptr;
	}


	void Init();
	bool STATIC_IsGlobalPaused();
	void STATIC_SetGlobalPaused(bool bPaused);
	void STATIC_NotifyPotentialTargets(class ABaseAIController* AI);
	void STATIC_RegisterPotentialTarget(class AActor* Target);
	bool STATIC_ToggleAILogging();
	void STATIC_NotifyKilled(class AController* Killer, class AController* KilledController, class APawn* KilledPawn);
	void STATIC_SetBoolProp(TEnumAsByte<EAISysBoolProps> Prop, bool bValue);
	bool STATIC_GetBoolProp(TEnumAsByte<EAISysBoolProps> Prop);
	int STATIC_GetEnemyTeamsSize(unsigned char TeamID);
	int STATIC_GetTeamSize(unsigned char TeamID);
	void STATIC_DecreaseTeamSize(unsigned char TeamID);
	void STATIC_IncreaseTeamSize(unsigned char TeamID);
	float STATIC_AppSeconds();
	void STATIC_UnRegisterSquad(class ABaseAISquad* Squad);
	void STATIC_RegisterSquad(class ABaseAISquad* Squad);
	void STATIC_UnRegisterAvoidanceComponent(class UAIAvoidanceComponent* AvoidanceComponent);
	void STATIC_RegisterAvoidanceComponent(class UAIAvoidanceComponent* AvoidanceComponent);
	void STATIC_UnRegisterSpawnedCover(class ACoverLink* Cover);
	void STATIC_RegisterSpawnedCover(class ACoverLink* Cover);
	void STATIC_UnRegisterSmartObject(class USOHubComponent* SO);
	void STATIC_RegisterSmartObject(class USOHubComponent* SO);
	class UAIDebugTool* STATIC_GetAIDebugTool();
	class USightSystem* STATIC_GetSightSystem();
	class UNavigationSystem* STATIC_GetNavigationSystem();
	class UMessageSystem* STATIC_GetMessageSystem();
	class UBTManager* STATIC_GetBTManager();
	class UETQSystem* STATIC_GetETQSystem();
	class UBaseAISubsystem* STATIC_GetInstance();
};


// Class BaseAI.MessageSystem
// 0x005C (0x0098 - 0x003C)
class UMessageSystem : public UObject
{
public:
	struct FMultiMap_Mirror                            GlobalHooks;                                              // 0x003C(0x003C) (Native, Transient)
	struct FPointer                                    QueueHeads;                                               // 0x0078(0x0004) (Const, Native, Transient)
	struct FPointer                                    QueueTails;                                               // 0x007C(0x0004) (Const, Native, Transient)
	struct FScriptDelegate                             __MessageHookDelegate__Delegate;                          // 0x0080(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __MessageHandlerDelegate__Delegate;                       // 0x008C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.MessageSystem");
		return ptr;
	}


	void SendMessageClassClass(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UClass* Param1, class UClass* Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageClassObject(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UClass* Param1, class UObject* Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageClassFloat(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UClass* Param1, float Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageClassInt(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UClass* Param1, int Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageObjectClass(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UObject* Param1, class UClass* Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageObjectObject(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UObject* Param1, class UObject* Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageObjectFloat(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UObject* Param1, float Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageObjectInt(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UObject* Param1, int Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageFloatClass(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, float Param1, class UClass* Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageFloatObject(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, float Param1, class UObject* Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageFloatFloat(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, float Param1, float Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageFloatInt(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, float Param1, int Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageIntClass(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, int Param1, class UClass* Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageIntObject(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, int Param1, class UObject* Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageIntFloat(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, int Param1, float Param2, TEnumAsByte<EMessagePriority> Priority);
	void SendMessageIntInt(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, int Param1, int Param2, TEnumAsByte<EMessagePriority> Priority);
	void DrawDebugInfo(class UCanvas* Canvas);
	class UMessageSystem* STATIC_GetInstance();
	void RemoveHooksFrom(class UObject* Owner);
	void RemoveScriptHook(TEnumAsByte<EMessageID> Code, const struct FScriptDelegate& Hook);
	void AddScriptHook(TEnumAsByte<EMessageID> Code, const struct FScriptDelegate& Hook);
	bool MessageHandlerDelegate(const struct FMsgData& Message);
	void MessageHookDelegate(const struct FMsgData& Message);
	void Broadcast(const struct FMsgData& Message, float Radius, const struct FVector& Origin);
	void SendFromTo(const struct FMsgData& Message, class UObject* Sender, class UObject* Receiver);
	void Send(const struct FMsgData& Message);
	class UObject* GetMessageReceiver(struct FMsgData* Message);
	class UObject* GetMessageSender(struct FMsgData* Message);
	class UClass* GetMessageParamClass(const struct FMsgData& Message, int ParamIdx);
	class UObject* GetMessageParamObject(const struct FMsgData& Message, int ParamIdx);
	float GetMessageParamFloat(const struct FMsgData& Message, int ParamIdx);
	int GetMessageParamInt(const struct FMsgData& Message, int ParamIdx);
	void SetMessageReceiver(class UObject* Receiver, struct FMsgData* Message);
	void SetMessageSender(class UObject* Sender, struct FMsgData* Message);
	void SetMessageParamClass(int ParamIdx, class UClass* Value, struct FMsgData* Message);
	void SetMessageParamObject(int ParamIdx, class UObject* Value, struct FMsgData* Message);
	void SetMessageParamFloat(int ParamIdx, float Value, struct FMsgData* Message);
	void SetMessageParamInt(int ParamIdx, int Value, struct FMsgData* Message);
};


// Class BaseAI.SeqAct_SetLeaderFollowingMode
// 0x000C (0x0108 - 0x00FC)
class USeqAct_SetLeaderFollowingMode : public USequenceAction
{
public:
	class AActor*                                      Leader;                                                   // 0x00FC(0x0004)
	TEnumAsByte<ELeaderFollowingMode>                  Mode;                                                     // 0x0100(0x0001) (Edit)
	TEnumAsByte<EDistanceClass>                        TetherDistance;                                           // 0x0101(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	unsigned long                                      bSetAsLeader : 1;                                         // 0x0104(0x0004)
	unsigned long                                      bBreakKismetMovementAndLogicLock : 1;                     // 0x0104(0x0004) (Edit)
	unsigned long                                      bAbortKismetMovementRequest : 1;                          // 0x0104(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SeqAct_SetLeaderFollowingMode");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
};


// Class BaseAI.SightSystem
// 0x0070 (0x00AC - 0x003C)
class USightSystem : public UObject
{
public:
	int                                                MaxPendingTests;                                          // 0x003C(0x0004)
	int                                                MaxSightTests;                                            // 0x0040(0x0004)
	TArray<struct FPendingSightInfo>                   PendingChecks;                                            // 0x0044(0x000C) (NeedCtorLink)
	class ABaseAIController*                           LastTestFrom;                                             // 0x0050(0x0004)
	struct FMap_Mirror                                 VisCache;                                                 // 0x0054(0x003C) (Const, Native)
	int                                                RemovalIndex;                                             // 0x0090(0x0004) (Const, Native, Transient)
	float                                              VisCleanupTime;                                           // 0x0094(0x0004) (Transient)
	float                                              VisCleanupInterval;                                       // 0x0098(0x0004) (Const)
	float                                              VisValidDuration;                                         // 0x009C(0x0004) (Const)
	int                                                VisCacheStatsFrame;                                       // 0x00A0(0x0004) (Transient)
	float                                              TickTimeLimit;                                            // 0x00A4(0x0004)
	int                                                VisCacheSize;                                             // 0x00A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SightSystem");
		return ptr;
	}


	bool TestValidFireLane(class AActor* TraceActor, bool bUseDefaultFireLane, struct FVector* FromLocation, struct FVector* ToLocation, struct FVector* ExtentOfFireLane, struct FImpactInfo* HitInfo);
	bool TestVisibility(const struct FVector& FromLocation, const struct FVector& ToLocation, class AActor* TraceActor, struct FImpactInfo* HitInfo);
};


// Class BaseAI.AIAvoidanceComponent
// 0x0004 (0x01DC - 0x01D8)
class UAIAvoidanceComponent : public UPrimitiveComponent
{
public:
	unsigned long                                      bEnabled : 1;                                             // 0x01D8(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.AIAvoidanceComponent");
		return ptr;
	}


	void SetEnabled(bool bEnable);
};


// Class BaseAI.AIAvoidanceConeComponent
// 0x0010 (0x01EC - 0x01DC)
class UAIAvoidanceConeComponent : public UAIAvoidanceComponent
{
public:
	float                                              ConeDistance;                                             // 0x01DC(0x0004) (Const)
	float                                              ConeDOT;                                                  // 0x01E0(0x0004) (Const)
	struct FColor                                      ConeColor;                                                // 0x01E4(0x0004) (Const)
	int                                                ConeSides;                                                // 0x01E8(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.AIAvoidanceConeComponent");
		return ptr;
	}


	void SetConeSize(float NewDistance, float NewDot);
};


// Class BaseAI.AIAvoidanceCylinderComponent
// 0x0008 (0x01E4 - 0x01DC)
class UAIAvoidanceCylinderComponent : public UAIAvoidanceComponent
{
public:
	float                                              CylinderHeight;                                           // 0x01DC(0x0004) (Const)
	float                                              CylinderRadius;                                           // 0x01E0(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.AIAvoidanceCylinderComponent");
		return ptr;
	}


	void SetCylinderSize(float NewRadius, float NewHeight);
};


// Class BaseAI.BaseAIVolume
// 0x0004 (0x0204 - 0x0200)
class ABaseAIVolume : public AVolume
{
public:
	unsigned long                                      bEnabled : 1;                                             // 0x0200(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseAIVolume");
		return ptr;
	}

};


// Class BaseAI.NavigationPath
// 0x0138 (0x0174 - 0x003C)
class UNavigationPath : public UObject
{
public:
	TArray<struct FPathPoint>                          PathPoints;                                               // 0x003C(0x000C) (Const, AlwaysInit, NeedCtorLink)
	struct FPolyArray_Mirror                           PolysUsed;                                                // 0x0048(0x000C) (Const, Native)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FBaseTransform                              Base;                                                     // 0x0060(0x0100) (Const)
	struct FVector                                     LocalDestination;                                         // 0x0160(0x000C) (Const)
	unsigned long                                      bDynamic : 1;                                             // 0x016C(0x0004) (Const)
	int                                                Version;                                                  // 0x0170(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.NavigationPath");
		return ptr;
	}


	void DrawPath(class UCanvas* Canvas, unsigned char R, unsigned char G, unsigned char B, bool bPersistent);
	struct FVector WorldToLocal(const struct FVector& InLocation);
	void SetRoute(TArray<struct FPathPoint> Route);
	struct FVector GetElementPos(int Index);
};


// Class BaseAI.NavigationSystem
// 0x0010 (0x004C - 0x003C)
class UNavigationSystem : public UObject
{
public:
	TArray<class UNavigationHandle*>                   NavigationHandles;                                        // 0x003C(0x000C) (NeedCtorLink)
	class UNavigationHandle*                           MainNavigationHandle;                                     // 0x0048(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.NavigationSystem");
		return ptr;
	}


	void TestFindAnchor(const struct FVector& Point, const struct FVector& Extent);
	void TestProjectPointToNavMesh(const struct FVector& Point);
	void ToggleNavExByActor(class AActor* Referencer, bool bEnabled, float AgentRadius);
	bool MarkNavPoly(int PolyRef);
	void CycleNavMeshRendering(class UNavigationHandle** ShownRecastActor, float* ShownRadius);
	bool STATIC_ProjectPointToNavMesh(const struct FVector& Point, const struct FVector& Extent, float MinWalkableZ, float HoverDistance, bool bReachable, struct FVector* ResultPos);
	float GetStraightPathLength(const struct FVector& Start, const struct FVector& End, class UNavigationHandle* NavOverride, struct FVector* Extent);
	bool DoesStraightPathExist(const struct FVector& Start, const struct FVector& End, class UNavigationHandle* NavOverride);
	bool DoesPathExist(const struct FVector& Start, const struct FVector& End, class UNavigationHandle* NavOverride, bool bIncludeDisabled);
	bool CreatePathForRoute(class ARoute* inRoute, class UNavigationHandle* NavOverride, class UNavigationPath** ResultingPath);
	bool FindPath(const struct FVector& Start, const struct FVector& End, class UNavigationHandle* NavOverride, class AActor* Walker, bool bStickToNavmesh, unsigned char ForbiddenNavFlags, const struct FVector& ForcedMidPoint, class AActor* AvoidedActor, float AvoidanceRadius, bool bGetAsCloseAsPossible, class UNavigationPath** ResultingPath);
	float GetDistanceToWall(const struct FVector& Point, class UNavigationHandle* NavOverride, const struct FVector& HitPos, const struct FVector& HitNormal, float Radius);
	bool IsPointOnNavMesh(const struct FVector& Point, class UNavigationHandle* NavOverride, bool bIncludeDisabled, struct FVector* Extent, struct FVector* PointOnNavMesh);
	bool GetPointInsideVolume(class AVolume* Vol, class UNavigationHandle* NavOverride, bool bRandomized, struct FVector* Point);
	void UnRegisterRecastActor(class UNavigationHandle* RCActor);
	void RegisterRecastActor(class UNavigationHandle* RCActor);
};


// Class BaseAI.NavLocation
// 0x0001 (0x01D9 - 0x01D8)
class ANavLocation : public AKeypoint
{
public:
	TEnumAsByte<ENavLocationMovementType>              MovementType;                                             // 0x01D8(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.NavLocation");
		return ptr;
	}

};


// Class BaseAI.FireSpot
// 0x0007 (0x01E0 - 0x01D9)
class AFireSpot : public ANavLocation
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D9(0x0003) MISSED OFFSET
	float                                              LastUsageTimeStamp;                                       // 0x01DC(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.FireSpot");
		return ptr;
	}

};


// Class BaseAI.NavLocationLinked
// 0x0027 (0x0200 - 0x01D9)
class ANavLocationLinked : public ANavLocation
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D9(0x0003) MISSED OFFSET
	struct FPointer                                    VfTable_IEditorLinkSelectionInterface;                    // 0x01DC(0x0004) (Const, Native, NoExport)
	TArray<class ANavLocationLinked*>                  NextDestinations;                                         // 0x01E0(0x000C) (Edit, DuplicateTransient, NeedCtorLink)
	TEnumAsByte<ENavLinkType>                          NavFlag;                                                  // 0x01EC(0x0001) (Edit)
	unsigned char                                      RealNavFlag;                                              // 0x01ED(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01EE(0x0002) MISSED OFFSET
	unsigned long                                      bPlayersOnly : 1;                                         // 0x01F0(0x0004) (Edit)
	TArray<class ANavLocationLinked*>                  ConnectionsAlreadyAdded;                                  // 0x01F4(0x000C) (Transient, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.NavLocationLinked");
		return ptr;
	}

};


// Class BaseAI.NavLocationRenderingComponent
// 0x0000 (0x01D8 - 0x01D8)
class UNavLocationRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.NavLocationRenderingComponent");
		return ptr;
	}

};


// Class BaseAI.NavMeshGeneratingInterface
// 0x0000 (0x003C - 0x003C)
class UNavMeshGeneratingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.NavMeshGeneratingInterface");
		return ptr;
	}


	void GetAdditionalRecastRadius(TArray<float>* ActorRadius);
};


// Class BaseAI.NavMeshGeneratingVolume
// 0x0010 (0x0210 - 0x0200)
class ANavMeshGeneratingVolume : public AVolume
{
public:
	class UNavigationHandle*                           NavOwner;                                                 // 0x0200(0x0004) (Edit, Const, EditConst)
	TArray<float>                                      SupportedActorRadii;                                      // 0x0204(0x000C) (Edit, Const, Transient, EditConst, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.NavMeshGeneratingVolume");
		return ptr;
	}


	void UnTouch(class AActor* Other);
	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};


// Class BaseAI.NavMeshModifier
// 0x000C (0x020C - 0x0200)
class ANavMeshModifier : public AVolume
{
public:
	class UNavigationHandle*                           ExclusiveOwner;                                           // 0x0200(0x0004) (Edit)
	TEnumAsByte<ENavPolyArea>                          PolyAreaType;                                             // 0x0204(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0205(0x0003) MISSED OFFSET
	unsigned long                                      bInfluenceAllNavigation : 1;                              // 0x0208(0x0004) (Edit)
	unsigned long                                      bEnabled : 1;                                             // 0x0208(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.NavMeshModifier");
		return ptr;
	}


	bool ShouldSaveForCheckpoint();
	void ApplyCheckpointRecord(struct ANavMeshModifier_FCheckpointRecord* Record);
	void CreateCheckpointRecord(struct ANavMeshModifier_FCheckpointRecord* Record);
	void OnToggle(class USeqAct_Toggle* Action);
	void OnToggleNavPolys(class USeqAct_ToggleNavPolys* Action);
};


// Class BaseAI.NavMeshModifingInterface
// 0x0000 (0x003C - 0x003C)
class UNavMeshModifingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.NavMeshModifingInterface");
		return ptr;
	}


	TEnumAsByte<ENavPolyArea> GetNavMeshModifingAreaType();
	struct FVector GetNavMeshModifingExtent();
};


// Class BaseAI.SeqAct_RePath
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_RePath : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SeqAct_RePath");
		return ptr;
	}

};


// Class BaseAI.SeqAct_ToggleNavPolys
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_ToggleNavPolys : public USeqAct_Toggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SeqAct_ToggleNavPolys");
		return ptr;
	}

};


// Class BaseAI.AIDebugTool
// 0x00BC (0x00F8 - 0x003C)
class UAIDebugTool : public UObject
{
public:
	int                                                Version;                                                  // 0x003C(0x0004) (Const)
	float                                              GameFrameTime;                                            // 0x0040(0x0004) (Transient)
	int                                                BTPersonalLogSize;                                        // 0x0044(0x0004)
	TArray<struct FString>                             BTPersonalLog;                                            // 0x0048(0x000C) (NeedCtorLink)
	struct FString                                     DebugDrawMode;                                            // 0x0054(0x000C) (Config, NeedCtorLink)
	class ABaseAIController*                           DebugTarget;                                              // 0x0060(0x0004)
	int                                                EntryToDisplay;                                           // 0x0064(0x0004)
	TArray<struct FName>                               Filters;                                                  // 0x0068(0x000C) (Transient, AlwaysInit, NeedCtorLink)
	TArray<struct FName>                               ColorCategories;                                          // 0x0074(0x000C) (NeedCtorLink)
	TArray<class AActor*>                              UnreachableActors;                                        // 0x0080(0x000C) (NeedCtorLink)
	int                                                DrawingFlags;                                             // 0x008C(0x0004)
	struct FETQDebugEntry                              CurrentETQLog;                                            // 0x0090(0x0010) (Transient, NeedCtorLink)
	TArray<struct FETQDebugEntry>                      ETQLogHistory;                                            // 0x00A0(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bLogETQ : 1;                                              // 0x00AC(0x0004)
	unsigned long                                      bLoadOldLogs : 1;                                         // 0x00AC(0x0004)
	class ABaseAIPawn*                                 PawnUnderCrosshair;                                       // 0x00B0(0x0004) (Transient)
	class AActor*                                      LoggingContext;                                           // 0x00B4(0x0004) (Transient)
	struct FMap_Mirror                                 Logs;                                                     // 0x00B8(0x003C) (Const, Native)
	float                                              TestBotsAccuracy;                                         // 0x00F4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.AIDebugTool");
		return ptr;
	}


	void DumpNativeCallStack(class AActor* Actor, const struct FName& LogCategory);
	struct FVector GetActorEntryLocation(class AActor* inActor, int Index);
	void FlushETQHistory();
	void AddETQLog(const struct FString& QueryName, const struct FString& TestName, class AActor* Querier);
	void FlushUnreachableActors();
	void LogUnreachableActor(class AActor* inActor);
	void ClearHistoryColor();
	void ColorHistory(const struct FName& Filter);
	void ClearHistoryFilter();
	void SetHistoryFilter(const struct FName& Filter, bool bVal);
	void ToggleLogDrawingMode(TEnumAsByte<ELogDrawingMode> Mode);
	void DisplayNextEntry(int Count, int Direction);
	void SetContext(class AActor* Actor);
	void LogSpaceLine(class AActor* Actor, const struct FVector& Start, const struct FVector& End, TEnumAsByte<EDebugLineType> Type, const struct FString& Comment, const struct FName& Category);
	void Log(class AActor* Actor, const struct FString& LogText, const struct FName& LogCategory);
	void SetDebugTarget(class ABaseAIController* NewDebugTarget);
	void FlushLogs(const struct FString& DirName, class ABaseAIController* AI);
	bool LoadLogFile(const struct FString& Filename, bool bAppendMapName);
	void DrawLog(class UCanvas* Canvas, class AActor* Actor);
	void AddBTLogEntry(const struct FString& Entry);
};


// Class BaseAI.SeqAct_FlushAILog
// 0x0018 (0x0114 - 0x00FC)
class USeqAct_FlushAILog : public USequenceAction
{
public:
	struct FString                                     Reason;                                                   // 0x00FC(0x000C) (Edit, NeedCtorLink)
	struct FString                                     FolderName;                                               // 0x0108(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SeqAct_FlushAILog");
		return ptr;
	}

};


// Class BaseAI.SeqAct_SRand
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_SRand : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SeqAct_SRand");
		return ptr;
	}

};


// Class BaseAI.BaseAIPawn
// 0x0114 (0x0758 - 0x0644)
class ABaseAIPawn : public AUDKPawn
{
public:
	class ABaseWeapon*                                 BaseWeapon;                                               // 0x0644(0x0004) (Transient)
	class ABaseAIController*                           MyBaseAI;                                                 // 0x0648(0x0004) (Transient)
	TArray<struct FName>                               AimAttractors;                                            // 0x064C(0x000C) (NeedCtorLink)
	int                                                CurrentAimAttractor;                                      // 0x0658(0x0004) (Transient)
	struct FMovementProperties                         MovementProps;                                            // 0x065C(0x0004)
	TEnumAsByte<EAccuracyType>                         AimAccuracy;                                              // 0x0660(0x0001) (Edit)
	unsigned char                                      MyAIType;                                                 // 0x0661(0x0001) (Transient)
	unsigned char                                      LastTeamNum;                                              // 0x0662(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0663(0x0001) MISSED OFFSET
	float                                              AimSpread_Miss;                                           // 0x0664(0x0004) (Config)
	float                                              AimSpread_Hit;                                            // 0x0668(0x0004) (Config)
	float                                              AimSpread_ModifierWhileNotRendered;                       // 0x066C(0x0004) (Config)
	unsigned long                                      bMakeWeaponSelfFiring : 1;                                // 0x0670(0x0004) (Transient)
	unsigned long                                      bIsEvading : 1;                                           // 0x0670(0x0004)
	unsigned long                                      bSuppressWeaponDamage : 1;                                // 0x0670(0x0004)
	unsigned long                                      bCallGetAttackersMax : 1;                                 // 0x0670(0x0004)
	unsigned long                                      bHasAISelectionModifierPerTeam : 1;                       // 0x0670(0x0004)
	float                                              LastTimeFired;                                            // 0x0674(0x0004) (Transient)
	float                                              LastTimeCharged;                                          // 0x0678(0x0004) (Transient)
	struct FBreadcrumbs                                MyBreadCrumbs;                                            // 0x067C(0x0080) (Transient)
	float                                              FireTicketMax;                                            // 0x06FC(0x0004) (Config)
	float                                              TotalAttackersMax;                                        // 0x0700(0x0004) (Config)
	class ABaseAIPawn*                                 AttackTarget;                                             // 0x0704(0x0004) (Transient)
	TArray<class ABaseAIPawn*>                         Attackers;                                                // 0x0708(0x000C) (NeedCtorLink)
	TArray<int>                                        AttackersPerTypeCount;                                    // 0x0714(0x000C) (NeedCtorLink)
	float                                              AttackerStrength;                                         // 0x0720(0x0004)
	float                                              MaxAttackerStrengh;                                       // 0x0724(0x0004)
	float                                              CombatStrength;                                           // 0x0728(0x0004)
	float                                              AISelectionModifier;                                      // 0x072C(0x0004)
	int                                                PawnProps;                                                // 0x0730(0x0004) (Const, Net)
	struct FSOExecInfo                                 SOExecutionInfo;                                          // 0x0734(0x0018) (Net, Transient, Component)
	TArray<struct FSOInfo>                             ClaimedSOs;                                               // 0x074C(0x000C) (Transient, Component, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseAIPawn");
		return ptr;
	}


	void DrawCrumbs(class AHUD* HUD);
	float GetHoverDistance();
	void AfterTeleport();
	void DebuggerUntilHelperFn();
	float GetMaxAttackerStrength();
	void RemoveAttacker(class ABaseAIPawn* Attacker);
	int GetAttackerCount(int AIType);
	void TriggerReadability(TEnumAsByte<EBaseAIReadability> Readability, class AActor* MainRef, TArray<class AActor*>* References);
	void NotifyTeamChanged();
	bool MoveToward(const struct FVector& Dest, class AActor* GoalActor);
	void Destroyed();
	void OnDestroyed(class AActor* DestroyedActor);
	void UnPossessed();
	void PossessedBy(class AController* C, bool bVehicleTransition);
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void PerformIdleShooting(class AActor* Target);
	bool CanFireActiveWeapon(unsigned char InFiringMode);
	struct FRotator GetDefaultAdjustedAim(class ABaseWeapon* W, const struct FVector& StartFireLoc);
	struct FRotator GetAdjustedAim(class ABaseWeapon* W, const struct FVector& StartFireLoc);
	void SetWeapon(class AWeapon* NewWeapon, int Hand);
	bool IsReloadingWeapon();
	bool IsInCover();
	void ReplicatedEvent(const struct FName& VarName);
	class USOAction* GetCurrentSOAction();
	int GetCurrentSOEntry();
	class USmartObjectComponent* GetCurrentSOComponent();
	void PostReplicationSOUpdate();
	bool FinishSOAction(class USOActionLatentBase* Action, bool bAborted);
	bool AbortSOUsage(class USmartObjectComponent* SO, int EntryId);
	bool UnClaim(class USmartObjectComponent* SO, int EntryIdx);
	bool Claim(class USmartObjectComponent* SO, int EntryIdx);
	bool IsUsingSO(class USmartObjectComponent* SO, int EntryId);
	bool UseSO(const struct FSOInfo& SOToUse, const TScriptInterface<class USOObserver>& Observer);
	float AdjustSelectionRating(float Rating, class APawn* Target);
	bool HasPawnProp(TEnumAsByte<EPawnProp> Prop);
	void SetPawnProp(TEnumAsByte<EPawnProp> Prop, bool bValue);
};


// Class BaseAI.BaseAIRoute
// 0x0004 (0x01F4 - 0x01F0)
class ABaseAIRoute : public ARoute
{
public:
	class UNavigationPath*                             Path;                                                     // 0x01F0(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseAIRoute");
		return ptr;
	}


	class UNavigationPath* GetPath();
};


// Class BaseAI.RecastRenderingComponent
// 0x0004 (0x01DC - 0x01D8)
class URecastRenderingComponent : public UPrimitiveComponent
{
public:
	class UMaterial*                                   MeshMaterial;                                             // 0x01D8(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.RecastRenderingComponent");
		return ptr;
	}

};


// Class BaseAI.BaseWeapon
// 0x0008 (0x02EC - 0x02E4)
class ABaseWeapon : public AUDKWeapon
{
public:
	class ABaseAIController*                           BaseAI;                                                   // 0x02E4(0x0004) (Transient)
	unsigned long                                      bIsBeingReloaded : 1;                                     // 0x02E8(0x0004) (Transient)
	unsigned long                                      bFiringRepInfo : 1;                                       // 0x02E8(0x0004) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BaseWeapon");
		return ptr;
	}


	void UpdateFiringInfo(bool bFiring);
	void ForceWeaponReady();
	void CacheAIController();
	void ReplicatedEvent(const struct FName& VarName);
};


// Class BaseAI.LatentActionObserver
// 0x0000 (0x003C - 0x003C)
class ULatentActionObserver : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.LatentActionObserver");
		return ptr;
	}


	void OnLatentFinished(class ABaseAIController* Observer, class UObject* Action, unsigned char FinishResult);
};


// Class BaseAI.BlackBoard
// 0x0034 (0x0208 - 0x01D4)
class ABlackBoard : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavigationHandle;                      // 0x01D4(0x0004) (Const, Native, NoExport)
	class ABaseAIController*                           Controller;                                               // 0x01D8(0x0004)
	class UClass*                                      NavigationHandleClass;                                    // 0x01DC(0x0004)
	class UNavigationHandle*                           NavigationHandle;                                         // 0x01E0(0x0004) (EditInline)
	TArray<struct FWorldStateProp>                     WSProps;                                                  // 0x01E4(0x000C) (Const, Native)
	TArray<struct FWSPropObserver>                     ObserversPool;                                            // 0x01F0(0x000C) (Const, Native)
	TArray<int>                                        RecycledObservers;                                        // 0x01FC(0x000C) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BlackBoard");
		return ptr;
	}


	void NotifyPathChanged();
	void InitNavigationHandle();
	void ScriptInit();
	struct FString GetPreconditionsDescriptionString();
	void Initialize(int NumProps);
	void GetWSPropObjectInt(TEnumAsByte<EWSKProp> Key, class UObject** Value, int* Param);
	void GetWSPropObjectFloat(TEnumAsByte<EWSKProp> Key, class UObject** Value, float* Param);
	float GetWSPropTime(TEnumAsByte<EWSKProp> Key);
	struct FName GetWSPropName(TEnumAsByte<EWSKProp> Key);
	class UObject* GetWSPropObject(TEnumAsByte<EWSKProp> Key);
	struct FVector GetWSPropVector(TEnumAsByte<EWSKProp> Key);
	float GetWSPropFloat(TEnumAsByte<EWSKProp> Key);
	int GetWSPropETQ(TEnumAsByte<EWSKProp> Key);
	int GetWSPropInt(TEnumAsByte<EWSKProp> Key);
	bool GetWSPropBool(TEnumAsByte<EWSKProp> Key);
	struct FString DescribeWSProperty(TEnumAsByte<EWSKProp> Key);
	void GetWSProperties(TArray<TEnumAsByte<EWSKProp>>* Keys);
	TEnumAsByte<EWorldStatePropType> GetWSPropType(TEnumAsByte<EWSKProp> Key);
	void SetWSPropTime(TEnumAsByte<EWSKProp> Key, float Value);
	void SetWSPropObjectInt(TEnumAsByte<EWSKProp> Key, class UObject* Value, int Param);
	void SetWSPropObjectFloat(TEnumAsByte<EWSKProp> Key, class UObject* Value, float Param);
	void SetWSPropName(TEnumAsByte<EWSKProp> Key, const struct FName& Value);
	void SetWSPropObject(TEnumAsByte<EWSKProp> Key, class UObject* Value);
	void SetWSPropVector(TEnumAsByte<EWSKProp> Key, const struct FVector& Value);
	void SetWSPropFloat(TEnumAsByte<EWSKProp> Key, float Value);
	void SetWSPropETQ(TEnumAsByte<EWSKProp> Key, int Value);
	void SetWSPropInt(TEnumAsByte<EWSKProp> Key, int Value);
	void SetWSPropBool(TEnumAsByte<EWSKProp> Key, bool Value);
};


// Class BaseAI.BTDebugInfo
// 0x0000 (0x003C - 0x003C)
class UBTDebugInfo : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDebugInfo");
		return ptr;
	}


	void STATIC_DrawDebug(class UCanvas* Canvas, class UBTPersonalInstance* PersonalBT);
};


// Class BaseAI.BTDecorator
// 0x0010 (0x004C - 0x003C)
class UBTDecorator : public UObject
{
public:
	int                                                InstanceID;                                               // 0x003C(0x0004) (Const)
	int                                                InstanceSize;                                             // 0x0040(0x0004) (Const)
	class UTexture2D*                                  NodeIcon;                                                 // 0x0044(0x0004) (Const, EditConst)
	unsigned long                                      bNotifyExecution : 1;                                     // 0x0048(0x0004) (Const)
	unsigned long                                      bNotifyAbortion : 1;                                      // 0x0048(0x0004) (Const)
	unsigned long                                      bUsePrecondition : 1;                                     // 0x0048(0x0004) (Const, Transient)
	unsigned long                                      bIsAPrecondition : 1;                                     // 0x0048(0x0004) (Edit)
	unsigned long                                      bGuardOnlyEntry : 1;                                      // 0x0048(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecorator");
		return ptr;
	}


	struct FString GetDecoratorDescription();
	struct FBTDecoratorDebugInfo GetDebugInfo(class UBTPersonalInstance* PersonalBT);
	void OnNodeAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* AbortedNode);
	void OnNodeExecuted(class UBTPersonalInstance* PersonalBT, TEnumAsByte<EBTResult> _Result);
	TEnumAsByte<EBTResult> OnExecutionEnd(class UBTPersonalInstance* PersonalBT, TEnumAsByte<EBTResult> _Result);
	TEnumAsByte<EBTResult> OnExecutionStart(class UBTPersonalInstance* PersonalBT);
};


// Class BaseAI.BTDecoratorAccumulator
// 0x0010 (0x005C - 0x004C)
class UBTDecoratorAccumulator : public UBTDecorator
{
public:
	TEnumAsByte<EAccumulatorAccessType>                AccessBeforeThreshold;                                    // 0x004C(0x0001) (Edit)
	TEnumAsByte<EAccumulatorAccessType>                AccessAfterThreshold;                                     // 0x004D(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FVector2D                                   Threshold;                                                // 0x0050(0x0008) (Edit)
	unsigned long                                      bResetOnAccess : 1;                                       // 0x0058(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorAccumulator");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorEvent
// 0x0010 (0x005C - 0x004C)
class UBTDecoratorEvent : public UBTDecorator
{
public:
	unsigned long                                      bEventOnly : 1;                                           // 0x004C(0x0004) (Edit)
	struct FName                                       EventName;                                                // 0x0050(0x0008) (Edit)
	class UBTNode*                                     ChildNode;                                                // 0x0058(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorEvent");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorExecutionBreakerBase
// 0x0004 (0x0050 - 0x004C)
class UBTDecoratorExecutionBreakerBase : public UBTDecorator
{
public:
	class UBTCompositeNode*                            ParentNode;                                               // 0x004C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorExecutionBreakerBase");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorTimeObserverBase
// 0x0000 (0x0050 - 0x0050)
class UBTDecoratorTimeObserverBase : public UBTDecoratorExecutionBreakerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorTimeObserverBase");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorCondition
// 0x001C (0x006C - 0x0050)
class UBTDecoratorCondition : public UBTDecoratorTimeObserverBase
{
public:
	float                                              Delay;                                                    // 0x0050(0x0004) (Edit)
	unsigned long                                      bOnFinish : 1;                                            // 0x0054(0x0004) (Edit)
	unsigned long                                      bBiDirectional : 1;                                       // 0x0054(0x0004) (Edit)
	TEnumAsByte<EWSKProp>                              PropertyKey;                                              // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	TArray<TEnumAsByte<EWSKProp>>                      UsedKeys;                                                 // 0x005C(0x000C) (NeedCtorLink)
	int                                                UsedKeysCount;                                            // 0x0068(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorCondition");
		return ptr;
	}


	bool PropertyChanged(class UBTPersonalInstance* PersonalBT, TEnumAsByte<EWSKProp> Key, bool bPreviousValue);
};


// Class BaseAI.BTDecoratorConditionBBDot
// 0x0008 (0x0074 - 0x006C)
class UBTDecoratorConditionBBDot : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EArithmeticOperation>                  Operation;                                                // 0x006C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionBBDot");
		return ptr;
	}


	struct FString GetDecoratorDescription();
};


// Class BaseAI.BTDecoratorConditionBodyStatus
// 0x0002 (0x006E - 0x006C)
class UBTDecoratorConditionBodyStatus : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EArithmeticOperation>                  Operation;                                                // 0x006C(0x0001) (Edit)
	TEnumAsByte<EWSBodyStatus>                         Value;                                                    // 0x006D(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionBodyStatus");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionEnemyStatus
// 0x0002 (0x0070 - 0x006E)
class UBTDecoratorConditionEnemyStatus : public UBTDecoratorConditionBodyStatus
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionEnemyStatus");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionBool
// 0x0004 (0x0070 - 0x006C)
class UBTDecoratorConditionBool : public UBTDecoratorCondition
{
public:
	unsigned long                                      Value : 1;                                                // 0x006C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionBool");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionComposite
// 0x0010 (0x007C - 0x006C)
class UBTDecoratorConditionComposite : public UBTDecoratorCondition
{
public:
	TEnumAsByte<ELogicOperation>                       Operation;                                                // 0x006C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	TArray<class UBTDecoratorCondition*>               SubConditions;                                            // 0x0070(0x000C) (Edit, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionComposite");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionDamageMemory
// 0x0002 (0x006E - 0x006C)
class UBTDecoratorConditionDamageMemory : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EArithmeticOperation>                  Operation;                                                // 0x006C(0x0001) (Edit)
	TEnumAsByte<EWSDamageMemory>                       Value;                                                    // 0x006D(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionDamageMemory");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionDPSTaken
// 0x0002 (0x006E - 0x006C)
class UBTDecoratorConditionDPSTaken : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EArithmeticOperation>                  Operation;                                                // 0x006C(0x0001) (Edit)
	TEnumAsByte<EWSDamagePerSecTaken>                  Value;                                                    // 0x006D(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionDPSTaken");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionEnemyCanPathTo
// 0x0004 (0x0070 - 0x006C)
class UBTDecoratorConditionEnemyCanPathTo : public UBTDecoratorCondition
{
public:
	unsigned long                                      bFoundValidPath : 1;                                      // 0x006C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionEnemyCanPathTo");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionEnemyClearFireLaneTo
// 0x0010 (0x007C - 0x006C)
class UBTDecoratorConditionEnemyClearFireLaneTo : public UBTDecoratorCondition
{
public:
	unsigned long                                      bHadClearFireLane : 1;                                    // 0x006C(0x0004) (Edit)
	unsigned long                                      bUseDefaultFireLane : 1;                                  // 0x006C(0x0004) (Edit, Deprecated)
	struct FVector                                     ExtentOfFireLane;                                         // 0x0070(0x000C) (Edit, Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionEnemyClearFireLaneTo");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionEnemyDistance
// 0x0002 (0x006E - 0x006C)
class UBTDecoratorConditionEnemyDistance : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EArithmeticOperation>                  Operation;                                                // 0x006C(0x0001) (Edit)
	TEnumAsByte<EWSRangeClass>                         Value;                                                    // 0x006D(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionEnemyDistance");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionEnemyDistanceEx
// 0x0004 (0x0070 - 0x006C)
class UBTDecoratorConditionEnemyDistanceEx : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EWSRangeClass>                         EntryValue;                                               // 0x006C(0x0001) (Edit)
	TEnumAsByte<EArithmeticOperation>                  EntryOp;                                                  // 0x006D(0x0001) (Edit)
	TEnumAsByte<EWSRangeClass>                         LeaveValue;                                               // 0x006E(0x0001) (Edit)
	TEnumAsByte<EArithmeticOperation>                  LeaveOp;                                                  // 0x006F(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionEnemyDistanceEx");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionEnemyDot
// 0x0002 (0x006E - 0x006C)
class UBTDecoratorConditionEnemyDot : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EArithmeticOperation>                  Operation;                                                // 0x006C(0x0001) (Edit)
	TEnumAsByte<EWSSymbolicAngle>                      Value;                                                    // 0x006D(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionEnemyDot");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionEnemyPerception
// 0x0002 (0x006E - 0x006C)
class UBTDecoratorConditionEnemyPerception : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EArithmeticOperation>                  Operation;                                                // 0x006C(0x0001) (Edit)
	TEnumAsByte<EWSPerceptionMode>                     Value;                                                    // 0x006D(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionEnemyPerception");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionEnemyType
// 0x0010 (0x007C - 0x006C)
class UBTDecoratorConditionEnemyType : public UBTDecoratorCondition
{
public:
	TArray<TEnumAsByte<EPawnProp>>                     Props;                                                    // 0x006C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bNot : 1;                                                 // 0x0078(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionEnemyType");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionMovementLocked
// 0x0004 (0x0070 - 0x006C)
class UBTDecoratorConditionMovementLocked : public UBTDecoratorCondition
{
public:
	unsigned long                                      bIsLocked : 1;                                            // 0x006C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionMovementLocked");
		return ptr;
	}


	struct FString GetDecoratorDescription();
};


// Class BaseAI.BTDecoratorConditionNumber
// 0x0008 (0x0074 - 0x006C)
class UBTDecoratorConditionNumber : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EArithmeticOperation>                  Operation;                                                // 0x006C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionNumber");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionObject
// 0x0001 (0x006D - 0x006C)
class UBTDecoratorConditionObject : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EObjectOperation>                      Operation;                                                // 0x006C(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionObject");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionSpecialDistance
// 0x0002 (0x006E - 0x006C)
class UBTDecoratorConditionSpecialDistance : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EArithmeticOperation>                  Operation;                                                // 0x006C(0x0001) (Edit)
	TEnumAsByte<EWSSpecialDistance>                    Value;                                                    // 0x006D(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionSpecialDistance");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionText
// 0x000C (0x0078 - 0x006C)
class UBTDecoratorConditionText : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EStringOperation>                      Operation;                                                // 0x006C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	struct FName                                       Value;                                                    // 0x0070(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionText");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionTime
// 0x0008 (0x0074 - 0x006C)
class UBTDecoratorConditionTime : public UBTDecoratorCondition
{
public:
	TEnumAsByte<EArithmeticOperation>                  Operation;                                                // 0x006C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionTime");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorConditionWeaponStatus
// 0x0009 (0x0075 - 0x006C)
class UBTDecoratorConditionWeaponStatus : public UBTDecoratorCondition
{
public:
	unsigned long                                      bCheckEnemy : 1;                                          // 0x006C(0x0004) (Edit)
	unsigned long                                      bCheckPrimaryWeapon : 1;                                  // 0x006C(0x0004) (Edit)
	unsigned long                                      bCheckSecondaryWeapon : 1;                                // 0x006C(0x0004) (Edit)
	TEnumAsByte<EArithmeticOperation>                  PrimaryWeaponOperation;                                   // 0x0070(0x0001) (Edit)
	TEnumAsByte<EWSWeaponStatus>                       PrimaryWeaponValue;                                       // 0x0071(0x0001) (Edit)
	TEnumAsByte<ELogicOperation>                       OperationForDualWeaponToCheck;                            // 0x0072(0x0001) (Edit)
	TEnumAsByte<EArithmeticOperation>                  SecondaryWeaponOperation;                                 // 0x0073(0x0001) (Edit)
	TEnumAsByte<EWSWeaponStatus>                       SecondaryWeaponValue;                                     // 0x0074(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorConditionWeaponStatus");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorSemaphore
// 0x0020 (0x008C - 0x006C)
class UBTDecoratorSemaphore : public UBTDecoratorCondition
{
public:
	int                                                ConcurrentLimit;                                          // 0x006C(0x0004) (Edit)
	float                                              UnlockDelay;                                              // 0x0070(0x0004) (Edit)
	int                                                GroupID;                                                  // 0x0074(0x0004) (Edit)
	TArray<class UBTNode*>                             ConcurrentTasks;                                          // 0x0078(0x000C) (Const, NeedCtorLink)
	float                                              UnlockTimestamp;                                          // 0x0084(0x0004) (Const, Transient)
	class UBTDecorator*                                GroupParent;                                              // 0x0088(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorSemaphore");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorTimeSince
// 0x0008 (0x0074 - 0x006C)
class UBTDecoratorTimeSince : public UBTDecoratorCondition
{
public:
	TEnumAsByte<ETimeSince>                            PointInTime;                                              // 0x006C(0x0001) (Edit)
	TEnumAsByte<EArithmeticOperation>                  Operation;                                                // 0x006D(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	float                                              Value;                                                    // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorTimeSince");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorTimeLimit
// 0x0005 (0x0055 - 0x0050)
class UBTDecoratorTimeLimit : public UBTDecoratorTimeObserverBase
{
public:
	float                                              TimeLimit;                                                // 0x0050(0x0004) (Edit)
	TEnumAsByte<EBTResult>                             ResultOnTimePassed;                                       // 0x0054(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorTimeLimit");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorTimeLoop
// 0x0009 (0x0059 - 0x0050)
class UBTDecoratorTimeLoop : public UBTDecoratorTimeObserverBase
{
public:
	float                                              TimeLimit;                                                // 0x0050(0x0004) (Edit)
	unsigned long                                      bWaitForSubtreeFinish : 1;                                // 0x0054(0x0004) (Edit)
	TEnumAsByte<EBTResult>                             ResultOnBreak;                                            // 0x0058(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorTimeLoop");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorFail
// 0x0000 (0x004C - 0x004C)
class UBTDecoratorFail : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorFail");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorFailOnFinish
// 0x0000 (0x004C - 0x004C)
class UBTDecoratorFailOnFinish : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorFailOnFinish");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorLoop
// 0x000C (0x0058 - 0x004C)
class UBTDecoratorLoop : public UBTDecorator
{
public:
	int                                                Iterations;                                               // 0x004C(0x0004) (Edit)
	int                                                IterationsMax;                                            // 0x0050(0x0004) (Edit)
	unsigned long                                      bRepeatOnFail : 1;                                        // 0x0054(0x0004) (Edit)
	unsigned long                                      bStopOnSucceed : 1;                                       // 0x0054(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorLoop");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorRandomFail
// 0x0004 (0x0050 - 0x004C)
class UBTDecoratorRandomFail : public UBTDecorator
{
public:
	float                                              Probability;                                              // 0x004C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorRandomFail");
		return ptr;
	}

};


// Class BaseAI.BTDecoratorTimeOut
// 0x000C (0x0058 - 0x004C)
class UBTDecoratorTimeOut : public UBTDecorator
{
public:
	float                                              TimeOut;                                                  // 0x004C(0x0004) (Edit)
	unsigned long                                      bGlobal : 1;                                              // 0x0050(0x0004) (Edit)
	float                                              fGlobalTimeOut;                                           // 0x0054(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTDecoratorTimeOut");
		return ptr;
	}

};


// Class BaseAI.BTManager
// 0x0044 (0x0080 - 0x003C)
class UBTManager : public UObject
{
public:
	struct FMap_Mirror                                 TreeHash;                                                 // 0x003C(0x003C) (Const, Native)
	int                                                CurrInstance;                                             // 0x0078(0x0004) (Const)
	unsigned long                                      bTimeSliced : 1;                                          // 0x007C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTManager");
		return ptr;
	}


	bool IsTimeSliced();
	bool ToggleTimeSlicing();
	class UBTTemplate* LoadTreeFromScript(const struct FName& TreeName, class UBTCompositeNode* TreeRoot);
	class UBTTemplate* GetTree(const struct FName& TreeName);
	class UBTManager* STATIC_GetInstance();
};


// Class BaseAI.BTNode
// 0x002C (0x0068 - 0x003C)
class UBTNode : public UObject
{
public:
	class UBTCompositeNode*                            Parent;                                                   // 0x003C(0x0004) (Edit, Const, EditConst)
	struct FName                                       DescriptiveName;                                          // 0x0040(0x0008) (Edit)
	unsigned long                                      bBreakable : 1;                                           // 0x0048(0x0004) (Edit)
	unsigned long                                      bShouldBeBrokenOnResume : 1;                              // 0x0048(0x0004) (Edit)
	unsigned long                                      bTask : 1;                                                // 0x0048(0x0004) (Const)
	unsigned long                                      bCoTaskExecution : 1;                                     // 0x0048(0x0004) (Const, Transient)
	unsigned long                                      bSkipPreconditions : 1;                                   // 0x0048(0x0004) (Const, Transient)
	unsigned long                                      bOptional : 1;                                            // 0x0048(0x0004) (Edit)
	int                                                InstanceID;                                               // 0x004C(0x0004) (Const, Transient)
	int                                                InstanceSize;                                             // 0x0050(0x0004) (Const, Transient)
	int                                                TreeDepth;                                                // 0x0054(0x0004) (Const)
	class UTexture2D*                                  NodeIcon;                                                 // 0x0058(0x0004) (Const, EditConst)
	struct FString                                     Comment;                                                  // 0x005C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTNode");
		return ptr;
	}


	int AddDebugInfo(class UBTPersonalInstance* PersonalBT, TArray<struct FBTNodeDebugInfo>* DebugInfoList);
	bool IsDescendantOf(class UBTNode* Ancestor);
	void Abort(class UBTPersonalInstance* PersonalBT, class UBTPersonalNode* PersonalTask, TEnumAsByte<EBTResult> _Result);
	TEnumAsByte<EBTResult> Execute(class UBTPersonalInstance* PersonalBT);
	TEnumAsByte<EBTResult> OnExecute(class UBTPersonalInstance* PersonalBT);
};


// Class BaseAI.BTCompositeNode
// 0x000C (0x0074 - 0x0068)
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTLink>                             Children;                                                 // 0x0068(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTCompositeNode");
		return ptr;
	}


	TEnumAsByte<EBTResult> ChildExecutionAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult, bool bFinalAbort);
	TEnumAsByte<EBTResult> ChildExecutionFinished(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult);
	int GetChildCount();
	bool AddDecorator(int ChildIndex, class UBTDecorator* Decorator);
	int AddChild(class UBTNode* Child);
};


// Class BaseAI.BTParallel
// 0x0018 (0x008C - 0x0074)
class UBTParallel : public UBTCompositeNode
{
public:
	TEnumAsByte<EParellelismMode>                      WaitForFinish;                                            // 0x0074(0x0001) (Edit)
	TEnumAsByte<EParellelismMode>                      RequireSuccessOn;                                         // 0x0075(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	unsigned long                                      bRepeatFinished : 1;                                      // 0x0078(0x0004) (Edit)
	class UTexture2D*                                  NodeIcons[0x4];                                           // 0x007C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTParallel");
		return ptr;
	}


	TEnumAsByte<EBTResult> ChildExecutionAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult, bool bFinalAbort);
	TEnumAsByte<EBTResult> ChildExecutionFinished(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult);
};


// Class BaseAI.BTRandom
// 0x0010 (0x0084 - 0x0074)
class UBTRandom : public UBTCompositeNode
{
public:
	unsigned long                                      bRetryOnFail : 1;                                         // 0x0074(0x0004) (Edit)
	TArray<float>                                      ChildrenWeights;                                          // 0x0078(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTRandom");
		return ptr;
	}


	int AddRandomChild(class UBTNode* Child, float Weight);
	TEnumAsByte<EBTResult> ChildExecutionAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult, bool bFinalAbort);
	TEnumAsByte<EBTResult> ChildExecutionFinished(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult);
};


// Class BaseAI.BTSelector
// 0x0000 (0x0074 - 0x0074)
class UBTSelector : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTSelector");
		return ptr;
	}


	TEnumAsByte<EBTResult> ChildExecutionAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult, bool bFinalAbort);
	TEnumAsByte<EBTResult> ChildExecutionFinished(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult);
};


// Class BaseAI.BTSequence
// 0x0000 (0x0074 - 0x0074)
class UBTSequence : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTSequence");
		return ptr;
	}


	TEnumAsByte<EBTResult> ChildExecutionAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult, bool bFinalAbort);
	TEnumAsByte<EBTResult> ChildExecutionFinished(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult);
};


// Class BaseAI.BTCondition
// 0x0000 (0x0068 - 0x0068)
class UBTCondition : public UBTNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTCondition");
		return ptr;
	}

};


// Class BaseAI.BTTask
// 0x0008 (0x0070 - 0x0068)
class UBTTask : public UBTNode
{
public:
	TEnumAsByte<EBehaviorTag>                          BehaviorTag;                                              // 0x0068(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	unsigned long                                      bNotifyLatentActionFinished : 1;                          // 0x006C(0x0004)
	unsigned long                                      bAllowReload : 1;                                         // 0x006C(0x0004) (Edit)
	unsigned long                                      bAllowFire : 1;                                           // 0x006C(0x0004) (Edit)
	unsigned long                                      bAbortMovementOnStart : 1;                                // 0x006C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTask");
		return ptr;
	}


	void OnLatentTaskFinished(class UBTPersonalInstance* PersonalBT, class UBTPersonalNode* PersonalTask, class ABaseAIController* Observer, class UObject* Action, unsigned char FinishResult);
	void Finish(class UBTPersonalInstance* PersonalBT, class UBTPersonalNode* PersonalTask, TEnumAsByte<EBTResult> TaskResult);
};


// Class BaseAI.BTTaskFail
// 0x0000 (0x0070 - 0x0070)
class UBTTaskFail : public UBTTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskFail");
		return ptr;
	}

};


// Class BaseAI.BTTaskFire
// 0x0000 (0x0070 - 0x0070)
class UBTTaskFire : public UBTTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskFire");
		return ptr;
	}

};


// Class BaseAI.BTTaskLatentBase
// 0x0004 (0x0074 - 0x0070)
class UBTTaskLatentBase : public UBTTask
{
public:
	unsigned long                                      bNeedsTick : 1;                                           // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskLatentBase");
		return ptr;
	}

};


// Class BaseAI.BTTaskFace
// 0x0001 (0x0075 - 0x0074)
class UBTTaskFace : public UBTTaskLatentBase
{
public:
	TEnumAsByte<EWSKProp>                              PropertyKey;                                              // 0x0074(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskFace");
		return ptr;
	}

};


// Class BaseAI.BTTaskRunSubtree
// 0x0004 (0x0078 - 0x0074)
class UBTTaskRunSubtree : public UBTTaskLatentBase
{
public:
	class UBTTemplate*                                 TreeTemplate;                                             // 0x0074(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskRunSubtree");
		return ptr;
	}

};


// Class BaseAI.BTTaskWait
// 0x000C (0x0080 - 0x0074)
class UBTTaskWait : public UBTTaskLatentBase
{
public:
	float                                              MinTimeout;                                               // 0x0074(0x0004) (Edit)
	float                                              MaxTimeout;                                               // 0x0078(0x0004) (Edit)
	unsigned long                                      bScaleWithSquadSize : 1;                                  // 0x007C(0x0004) (Edit)
	unsigned long                                      bZeroAllMovementVarsDuringWait : 1;                       // 0x007C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskWait");
		return ptr;
	}

};


// Class BaseAI.BTTaskLog
// 0x000C (0x007C - 0x0070)
class UBTTaskLog : public UBTTask
{
public:
	struct FString                                     LogText;                                                  // 0x0070(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskLog");
		return ptr;
	}

};


// Class BaseAI.BTTaskPlaySound
// 0x0008 (0x0078 - 0x0070)
class UBTTaskPlaySound : public UBTTask
{
public:
	class USoundCue*                                   Sound;                                                    // 0x0070(0x0004) (Edit)
	unsigned long                                      bNoSoundError : 1;                                        // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskPlaySound");
		return ptr;
	}


	TEnumAsByte<EBTResult> OnExecute(class UBTPersonalInstance* PersonalBT);
};


// Class BaseAI.BTTaskResult
// 0x0001 (0x0071 - 0x0070)
class UBTTaskResult : public UBTTask
{
public:
	TEnumAsByte<EBTResult>                             Result;                                                   // 0x0070(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskResult");
		return ptr;
	}

};


// Class BaseAI.BTTaskRunETQuery
// 0x0014 (0x0084 - 0x0070)
class UBTTaskRunETQuery : public UBTTask
{
public:
	struct FName                                       QueryName;                                                // 0x0070(0x0008) (Edit)
	TEnumAsByte<EETQNamedQuery>                        ContextSpecificQuery;                                     // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	unsigned long                                      bInstantExecution : 1;                                    // 0x007C(0x0004) (Edit)
	class UETQResultHandler*                           ResultHandler;                                            // 0x0080(0x0004) (Edit, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskRunETQuery");
		return ptr;
	}


	int QueryFinished(class UBTPersonalInstance* PersonalBT);
};


// Class BaseAI.BTTaskSetBBProp
// 0x0002 (0x0072 - 0x0070)
class UBTTaskSetBBProp : public UBTTask
{
public:
	TEnumAsByte<EWSKProp>                              PropToChange;                                             // 0x0070(0x0001) (Edit)
	TEnumAsByte<EWSKProp>                              BBValueToUse;                                             // 0x0071(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskSetBBProp");
		return ptr;
	}

};


// Class BaseAI.BTTaskSetGoal
// 0x0008 (0x0078 - 0x0070)
class UBTTaskSetGoal : public UBTTask
{
public:
	struct FName                                       NewGoal;                                                  // 0x0070(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskSetGoal");
		return ptr;
	}

};


// Class BaseAI.BTTaskStopFacing
// 0x0000 (0x0070 - 0x0070)
class UBTTaskStopFacing : public UBTTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTaskStopFacing");
		return ptr;
	}

};


// Class BaseAI.BTObserver
// 0x0000 (0x003C - 0x003C)
class UBTObserver : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTObserver");
		return ptr;
	}


	void OnBTAbortedFinished(class UBTPersonalInstance* PersonalBT);
	void OnBTExecutionFinished(class UBTPersonalInstance* PersonalBT, TEnumAsByte<EBTResult> ExecutionResult);
};


// Class BaseAI.BTPersonalInstance
// 0x0100 (0x013C - 0x003C)
class UBTPersonalInstance : public UObject
{
public:
	class ABaseAIController*                           Controller;                                               // 0x003C(0x0004)
	class UBTPreconditions*                            Preconditions;                                            // 0x0040(0x0004)
	struct FPointer                                    InstanceMemory;                                           // 0x0044(0x0004) (Native)
	struct FPointer                                    InstanceOffsets;                                          // 0x0048(0x0004) (Native)
	class UBTNode*                                     TreeRoot;                                                 // 0x004C(0x0004)
	struct FName                                       TreeName;                                                 // 0x0050(0x0008)
	unsigned long                                      bLoop : 1;                                                // 0x0058(0x0004)
	unsigned long                                      bTimeSliced : 1;                                          // 0x0058(0x0004)
	unsigned long                                      bIsSubtree : 1;                                           // 0x0058(0x0004) (Const)
	unsigned long                                      bLastFireAllowed : 1;                                     // 0x0058(0x0004) (Transient)
	class UBTPersonalInstance*                         ParentTree;                                               // 0x005C(0x0004) (Const)
	TArray<class UBTPersonalInstance*>                 SubTrees;                                                 // 0x0060(0x000C) (Const, NeedCtorLink)
	class UBTPersonalNode*                             ParentNode;                                               // 0x006C(0x0004)
	int                                                SuspendedCounter;                                         // 0x0070(0x0004) (Const)
	TEnumAsByte<EBTStatus>                             Status;                                                   // 0x0074(0x0001)
	TEnumAsByte<EBTResult>                             ExecutionResult;                                          // 0x0075(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
	TArray<struct FExecutionTimeObserver>              ExecTimeObservers;                                        // 0x0078(0x000C) (NeedCtorLink)
	TArray<class UBTPersonalNode*>                     LatentTasks;                                              // 0x0084(0x000C) (NeedCtorLink)
	TArray<class UBTPersonalNode*>                     SubTreeTasks;                                             // 0x0090(0x000C) (NeedCtorLink)
	struct FMap_Mirror                                 ETQTasks;                                                 // 0x009C(0x003C) (Const, Native)
	struct FMap_Mirror                                 EventDecorators;                                          // 0x00D8(0x003C) (Const, Native)
	TArray<struct FName>                               ReceivedEvents;                                           // 0x0114(0x000C) (Const, NeedCtorLink)
	TScriptInterface<class UBTObserver>                CurrentObserver;                                          // 0x0120(0x0008) (Transient)
	TArray<class UBTPersonalNode*>                     PersonalNodes;                                            // 0x0128(0x000C) (Transient, NeedCtorLink)
	int                                                NumActiveTasks;                                           // 0x0134(0x0004) (Transient)
	int                                                NumFinishedNodes;                                         // 0x0138(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTPersonalInstance");
		return ptr;
	}


	int AddDebugInfo(TArray<struct FBTNodeDebugInfo>* DebugList);
	void GetBehaviorTrace(TArray<class UBTNode*>* TraceStack);
	bool IsFiringAllowed();
	struct FName GetTreeName();
	class UBTNode* GetACurrentNode();
	class UBTTask* GetACurrentTask();
	void OnEvent(const struct FName& EventName);
	void CreateNewPreconditions();
	void ClearETQTasks();
	void UnRegisterETQTask(int QueryIndex);
	void RegisterETQTask(int QueryIndex, class UBTTaskRunETQuery* ETQTask);
	bool UnRegisterSubTreeTask(class UBTPersonalNode* SubTreeTask);
	bool RegisterSubTreeTask(class UBTPersonalNode* SubTreeTask);
	bool UnRegisterLatentTask(class UBTPersonalNode* LatentTask);
	bool RegisterLatentTask(class UBTPersonalNode* LatentTask);
	class UBTPersonalNode* GetActiveTask(class UBTNode* Task);
	bool IsActiveTask(class UBTNode* Task);
	void UnreservePersonalNode(class UBTNode* Node);
	class UBTPersonalNode* ReservePersonalNode(class UBTNode* Node, class UObject* LatentAction);
	void TaskFinished(class UBTPersonalNode* Task, TEnumAsByte<EBTResult> TaskResult);
	class UBTPersonalNode* TaskStarted(class UBTNode* Task);
	void TreeExecutionFinished(TEnumAsByte<EBTResult> EndResult);
	void OverrideSuspendedCounter(int NewValue);
	TEnumAsByte<EBTStatus> ResumeTree(bool bForce);
	TEnumAsByte<EBTStatus> SuspendTree();
	void SetTree(class UBTNode* NewTree, int MemorySize, int MaxIndex, const struct FName& DebugName);
	void FinishTree();
	void AbortTree();
	void StopTree(bool bFinalStop);
	unsigned char StartFromScratch();
	TEnumAsByte<EBTStatus> StartTree();
	void ClearMemory();
	void InitializeMemory(int MemorySize, int MaxIndex);
};


// Class BaseAI.BTPersonalNode
// 0x0030 (0x006C - 0x003C)
class UBTPersonalNode : public UObject
{
public:
	struct FPointer                                    VfTable_ILatentActionObserver;                            // 0x003C(0x0004) (Const, Native, NoExport)
	class UBTPersonalInstance*                         PersonalBT;                                               // 0x0040(0x0004) (Transient)
	int                                                Index;                                                    // 0x0044(0x0004) (Transient)
	class UBTNode*                                     Node;                                                     // 0x0048(0x0004) (Transient)
	class UBTTask*                                     Task;                                                     // 0x004C(0x0004) (Transient)
	class UBTTaskLatentBase*                           LatentTask;                                               // 0x0050(0x0004) (Transient)
	class UBTTaskRunSubtree*                           SubTreeTask;                                              // 0x0054(0x0004) (Transient)
	class UBTPersonalInstance*                         SubTree;                                                  // 0x0058(0x0004) (Transient)
	TEnumAsByte<EBTExecutionStatus>                    Status;                                                   // 0x005C(0x0001) (Transient)
	TEnumAsByte<EBTResult>                             ExecutionResult;                                          // 0x005D(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	class UBTCompositeNode*                            AbortedBranch;                                            // 0x0060(0x0004) (Transient)
	unsigned long                                      bReserved : 1;                                            // 0x0064(0x0004) (Transient)
	class UObject*                                     LatentAction;                                             // 0x0068(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTPersonalNode");
		return ptr;
	}


	void OnLatentFinished(class ABaseAIController* Observer, class UObject* Action, unsigned char FinishResult);
	void ExecutionFinished();
	void AssignNode(class UBTNode* NewNode);
};


// Class BaseAI.BTPreconditions
// 0x0018 (0x0054 - 0x003C)
class UBTPreconditions : public UObject
{
public:
	class UBTPersonalInstance*                         PersonalBT;                                               // 0x003C(0x0004) (Const)
	class ABlackBoard*                                 MyBlackBoard;                                             // 0x0040(0x0004) (Const)
	struct FPointer                                    CurrentPrecondition;                                      // 0x0044(0x0004) (Const, Native)
	TArray<struct FPointer>                            PreconditionStack;                                        // 0x0048(0x000C) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTPreconditions");
		return ptr;
	}


	void Initialize(class UBTPersonalInstance* inPersonalBT);
	void PopFromBlackBoard(class ABlackBoard* BB);
	void PushToBlackBoard(class ABlackBoard* BB);
	void Clear();
	bool AddMulti(class UBTDecoratorCondition* Condition, bool bValue, TArray<TEnumAsByte<EWSKProp>>* Keys);
	bool Add(TEnumAsByte<EWSKProp> Key, class UBTDecoratorCondition* Condition, bool bValue);
};


// Class BaseAI.BTTemplate
// 0x004C (0x0088 - 0x003C)
class UBTTemplate : public UObject
{
public:
	unsigned long                                      bBeingEdited : 1;                                         // 0x003C(0x0004) (Transient)
	class UBTCompositeNode*                            RootNode;                                                 // 0x0040(0x0004) (Edit, Const, EditConst)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0044(0x003C) UNKNOWN PROPERTY: MapProperty BaseAI.BTTemplate.EditorNodesMap
	int                                                InstanceMemorySize;                                       // 0x0080(0x0004) (Const, Transient)
	int                                                InstanceMaxIndex;                                         // 0x0084(0x0004) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.BTTemplate");
		return ptr;
	}

};


// Class BaseAI.ETQResultHandler
// 0x0000 (0x003C - 0x003C)
class UETQResultHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.ETQResultHandler");
		return ptr;
	}


	bool HandleResult(class ABaseAIController* AI, int QueryID);
};


// Class BaseAI.ETQResultHandler_SetCoverDestination
// 0x0001 (0x003D - 0x003C)
class UETQResultHandler_SetCoverDestination : public UETQResultHandler
{
public:
	TEnumAsByte<EDestinationSelectionMethod>           SelectionMethod;                                          // 0x003C(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.ETQResultHandler_SetCoverDestination");
		return ptr;
	}

};


// Class BaseAI.ETQSystem
// 0x00C0 (0x00FC - 0x003C)
class UETQSystem : public UObject
{
public:
	unsigned long                                      bEnabled : 1;                                             // 0x003C(0x0004) (Const)
	float                                              GameFrameTime;                                            // 0x0040(0x0004) (Const)
	struct FDouble                                     FrameStartTime;                                           // 0x0044(0x0008) (Transient)
	float                                              TimeSliceLength;                                          // 0x004C(0x0004) (Const)
	int                                                DebugMode;                                                // 0x0050(0x0004) (Const)
	struct FMultiMap_Mirror                            LevelDependency;                                          // 0x0054(0x003C) (Const, Native)
	struct FMap_Mirror                                 QueryHash;                                                // 0x0090(0x003C) (Const, Native)
	TArray<struct FETQQueryTemplate>                   QueryTemplates;                                           // 0x00CC(0x000C) (Const, Native)
	TArray<class UETQTemplate*>                        RegisteredTemplateObjects;                                // 0x00D8(0x000C) (Transient, NeedCtorLink)
	TArray<int>                                        ActiveQueries;                                            // 0x00E4(0x000C) (Const, Native)
	TArray<struct FGeneratorSupportedTest>             SupportedTests;                                           // 0x00F0(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.ETQSystem");
		return ptr;
	}


	void Init();
	void SetEnable(bool bEnable);
	void ResetQueryTemplate(struct FETQQueryTemplate* Query);
	void ResetOption(struct FETQOption* Option);
	void ResetCondition(struct FETQCondition* Condition);
	bool ToggleDebugModeShootingPosition();
	bool ToggleDebugMode(TEnumAsByte<EETQDebugMode> Mode);
	void DebugDrawQuery(class UCanvas* Canvas, int QueryID, class APlayerController* Observer);
	bool RetainQueryResults(int QueryID);
	bool DiscardQueryResults(int QueryID, class ABaseAIController* Owner, bool bForce);
	void CancelQuery(int QueryID, class ABaseAIController* Owner, bool bDiscardResults, bool bIsCleaningUp);
	struct FETQQuery GetQuery(int QueryID);
	bool TestItemValidity(int QueryID, int OptionIndex, struct FETQQueryItem* Item);
	int RunQuery(const struct FName& QueryName, class AActor* context, class UObject* Observer, bool bInstantExecution);
	struct FName GetQueryName(int QueryID);
	struct FVector GetQueryItemPosition(int QueryID, int ItemIndex);
	class AActor* GetQueryItemActor(int QueryID, int ItemIndex);
	class UObject* GetQueryItemObject(int QueryID, int ItemIndex);
	class UETQSystem* SetConditionValueName(const struct FName& Value, struct FETQCondition* out_Condition);
	class UETQSystem* SetConditionValueFloat(float fValue, struct FETQCondition* out_Condition);
	class UETQSystem* SetConditionValueInt(int nValue, struct FETQCondition* out_Condition);
	class UETQSystem* SetConditionValueBool(bool bValue, struct FETQCondition* out_Condition);
	class UETQSystem* RegisterQueryTemplate(class UETQTemplate* SourceObject, struct FETQQueryTemplate* out_Query);
};


// Class BaseAI.ETQTemplate
// 0x0024 (0x0060 - 0x003C)
class UETQTemplate : public UObject
{
public:
	class UObject*                                     DataObject;                                               // 0x003C(0x0004) (Transient)
	struct FString                                     DataClassName;                                            // 0x0040(0x000C) (Config, NeedCtorLink)
	struct FETQQueryTemplate                           QueryTemplate;                                            // 0x004C(0x0014)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.ETQTemplate");
		return ptr;
	}


	struct FName GetQueryName();
};


// Class BaseAI.PluginBase
// 0x0004 (0x0040 - 0x003C)
class UPluginBase : public UObject
{
public:
	unsigned long                                      bIsPluginEnabled : 1;                                     // 0x003C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.PluginBase");
		return ptr;
	}


	void DrawDebug(class AHUD* H, const struct FName& Category);
	void EnablePlugin();
	void DisablePlugin();
};


// Class BaseAI.AIPlugin
// 0x0008 (0x0048 - 0x0040)
class UAIPlugin : public UPluginBase
{
public:
	class ABaseAIController*                           MyBaseAIController;                                       // 0x0040(0x0004) (Const)
	unsigned long                                      bCustomSetupController : 1;                               // 0x0044(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.AIPlugin");
		return ptr;
	}

};


// Class BaseAI.AITickablePlugin
// 0x0008 (0x0050 - 0x0048)
class UAITickablePlugin : public UAIPlugin
{
public:
	float                                              LatentTime;                                               // 0x0048(0x0004) (Const)
	unsigned long                                      bTickingEnabled : 1;                                      // 0x004C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.AITickablePlugin");
		return ptr;
	}


	void Sleep(float Seconds);
};


// Class BaseAI.AIPluginMovement
// 0x0080 (0x00D0 - 0x0050)
class UAIPluginMovement : public UAITickablePlugin
{
public:
	struct FMovementRequest                            MoveRequest;                                              // 0x0050(0x006C)
	float                                              GoalDistanceSq;                                           // 0x00BC(0x0004) (Transient)
	float                                              CloseEnoughToNavPointDistanceSq;                          // 0x00C0(0x0004) (Transient)
	TEnumAsByte<EActionPriority>                       ActionPriority;                                           // 0x00C4(0x0001) (Const)
	TEnumAsByte<EActionPriority>                       MovementLock;                                             // 0x00C5(0x0001) (Const)
	TEnumAsByte<ECtrlMovementMonitorResult>            CurrentMonitorResults;                                    // 0x00C6(0x0001) (Transient)
	TEnumAsByte<ECtrlMovementMonitorResult>            LastMonitorResults;                                       // 0x00C7(0x0001) (Transient)
	unsigned long                                      bObserverNotified : 1;                                    // 0x00C8(0x0004) (Const, Transient)
	unsigned long                                      bDontNotifyObserver : 1;                                  // 0x00C8(0x0004) (Const, Transient)
	unsigned long                                      bDontRestartByKismet : 1;                                 // 0x00C8(0x0004) (Transient)
	float                                              MinimumSuccessDistance;                                   // 0x00CC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.AIPluginMovement");
		return ptr;
	}


	TEnumAsByte<EFocusPriority> GetMoveFocus(class AActor** MoveFocus, struct FVector* MoveFocalPoint);
	bool GetIfShouldWalkDurringCurrentMovementPhase();
	float GetOffsetForCurrentMovePhase();
	class AActor* GetFocusForForCurrentMovePhase();
	struct FVector GetPointMovingToForCurrentMovePhase();
	bool TryToSpin();
	bool IsSpinning();
	bool TryToDodge(unsigned char DesiredDodgeDir);
	bool IsDodging();
	bool IsPerformingSpecialMove();
	bool IsMoving();
	void StopMovement();
	TEnumAsByte<EMoveRequestDestinationType> GetDestinationType();
	struct FVector GetDestination(struct FMovementRequest* Request);
	bool RePath();
	void Failure();
	void Success();
	void SetMovementLock(bool bLock, TEnumAsByte<EActionPriority> Priority, bool bNewRequest);
	bool AbortMove(bool bNewRequest);
	bool FollowSpline(TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, bool bInAllowedToFire);
	bool FollowSplineRequest(struct FMovementRequest* Request);
	bool Wander(TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, bool bInAllowedToFire, bool bStopAtEnd, bool bStickToNavmesh);
	bool HandleWanderRequest(struct FMovementRequest* Request);
	bool MoveToFiringPositionUponEnemy(TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, bool bInAllowedToFire, float AcceptableDistance, bool bStopAtEnd, bool bStickToNavmesh, struct FVector* InDestLocation);
	bool MoveToFiringPosition(struct FMovementRequest* Request);
	bool HideFromEnemy(class AActor* inPawnGoal, TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, float DistAwayFromEnemy, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, bool bInAllowedToFire, bool bStopAtEnd, bool bStickToNavmesh);
	bool HideFrom(struct FMovementRequest* Request);
	bool FollowPath(class UNavigationPath* InPath, TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, bool bInvCover, bool bStopAtEnd, class AActor* RotateAtEndToMatch, float AcceptableDistance);
	bool MoveToActor(class AActor* inPawnGoal, TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, bool bInAllowedToFire, float AcceptableDistance, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, const struct FVector& DestOffset, const struct FVector& MidPointOffset, bool bDynamicMidPoint, bool bStopAtEnd, bool bStickToNavmesh);
	bool MoveToPoint(TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, bool bInAllowedToFire, float AcceptableDistance, bool bDynamicMidPoint, bool bStopAtEnd, bool bStickToNavmesh, class AActor* RotateAtEndToMatch, struct FVector* InDestLocation, struct FVector* DestOffset, struct FVector* MidPointOffset);
	bool MoveTo(struct FMovementRequest* Request);
};


// Class BaseAI.AIPluginMovement_Simple
// 0x000C (0x00DC - 0x00D0)
class UAIPluginMovement_Simple : public UAIPluginMovement
{
public:
	struct FVector                                     DestLocation;                                             // 0x00D0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.AIPluginMovement_Simple");
		return ptr;
	}


	void DrawDebug(class AHUD* H, const struct FName& Category);
	void StopMovement();
};


// Class BaseAI.PluginSquad
// 0x0004 (0x004C - 0x0048)
class UPluginSquad : public UAIPlugin
{
public:
	class ABaseAISquad*                                Squad;                                                    // 0x0048(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.PluginSquad");
		return ptr;
	}


	void EnemyPerceived(TEnumAsByte<EWSPerceptionMode> PerceptionType, class APawn* PerceivedEnemy);
};


// Class BaseAI.PawnPlugin
// 0x0000 (0x0040 - 0x0040)
class UPawnPlugin : public UPluginBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.PawnPlugin");
		return ptr;
	}


	void Init();
};


// Class BaseAI.SeqAct_ToggleSO
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_ToggleSO : public USeqAct_Toggle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SeqAct_ToggleSO");
		return ptr;
	}

};


// Class BaseAI.SeqEvent_SOAction
// 0x0004 (0x0118 - 0x0114)
class USeqEvent_SOAction : public USequenceEvent
{
public:
	unsigned long                                      bSkipProxyActions : 1;                                    // 0x0114(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SeqEvent_SOAction");
		return ptr;
	}

};


// Class BaseAI.SmartObjectComponent
// 0x0024 (0x0244 - 0x0220)
class USmartObjectComponent : public UProximityDetectorComponent
{
public:
	struct FPointer                                    VfTable_ISOObserver;                                      // 0x0220(0x0004) (Const, Native, NoExport)
	TArray<struct FEntryPoint>                         EntryPoints;                                              // 0x0224(0x000C) (Edit, NeedCtorLink, EditInline)
	unsigned long                                      bEnabled : 1;                                             // 0x0230(0x0004) (Edit)
	unsigned long                                      bCurrentlyEnabled : 1;                                    // 0x0230(0x0004) (Transient)
	unsigned long                                      bInitialized : 1;                                         // 0x0230(0x0004) (Transient)
	float                                              TriggerChance;                                            // 0x0234(0x0004) (Edit)
	class USOExecutionParams*                          ExecParams;                                               // 0x0238(0x0004) (Edit, ExportObject, NeedCtorLink, EditInline)
	class UStaticMesh*                                 RenderEntry;                                              // 0x023C(0x0004)
	class UStaticMesh*                                 RenderDisabledComponent;                                  // 0x0240(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SmartObjectComponent");
		return ptr;
	}


	void OnSOFinished(class USmartObjectComponent* SO, int EntryIdx, class ABaseAIPawn* User);
	bool UnClaim(class ABaseAIPawn* User, int EntryIdx);
	bool Claim(class ABaseAIPawn* User, int EntryIdx);
	bool CanBeUsedBy(class ABaseAIPawn* User);
	void SetEntryEnabled(int EntryIdx, bool bEnable);
	void SetEnabled(bool bEnable);
	bool IsEntryEnabled(int EntryIdx);
	bool IsEnabled();
	class USOAction* GetAction(int EntryIdx);
	struct FRotator GetEntryRotation(int EntryIdx, bool bForceUseOffset);
	struct FVector GetEntryLocation(int EntryIdx, bool bForceUseOffset);
	bool UseAbort(class ABaseAIPawn* User, int EntryIdx);
	bool UseEnd(class ABaseAIPawn* User, int EntryIdx, bool bIsAborting);
	bool UseStart(class ABaseAIPawn* User, int EntryIdx);
};


// Class BaseAI.SmartObjectProxy
// 0x000C (0x01E0 - 0x01D4)
class ASmartObjectProxy : public AActor
{
public:
	class UActorComponent*                             VisibleComponent;                                         // 0x01D4(0x0004) (Edit, ExportObject, Component, EditInline)
	class USOHubComponent*                             MySOHub;                                                  // 0x01D8(0x0004) (Const, ExportObject, Component, EditInline)
	class UActorComponent*                             PreEditVisibleComponent;                                  // 0x01DC(0x0004) (Const, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SmartObjectProxy");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class BaseAI.SmartObjectReplicationActor
// 0x0194 (0x0368 - 0x01D4)
class ASmartObjectReplicationActor : public AActor
{
public:
	struct FSOComponentRepInfo                         ReplicationQueue[0x14];                                   // 0x01D4(0x0008) (Net, Transient)
	struct FSOComponentRepInfo                         LocalQueue[0x14];                                         // 0x0274(0x0008) (Transient)
	float                                              ReplicationTimestamps[0x14];                              // 0x0314(0x0004) (Transient)
	float                                              MinTimeout;                                               // 0x0364(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SmartObjectReplicationActor");
		return ptr;
	}


	void ComponentChanged(class USmartObjectComponent* SOComponent);
};


// Class BaseAI.SOAction
// 0x0010 (0x004C - 0x003C)
class USOAction : public UObject
{
public:
	class ABaseAIPawn*                                 MyPawn;                                                   // 0x003C(0x0004) (Transient)
	class USmartObjectComponent*                       MyComponent;                                              // 0x0040(0x0004) (ExportObject, Transient, Component, EditInline)
	int                                                EntryIndex;                                               // 0x0044(0x0004) (Transient)
	unsigned long                                      bActive : 1;                                              // 0x0048(0x0004) (Transient)
	unsigned long                                      bUseReplicatedEvent : 1;                                  // 0x0048(0x0004) (Const)
	unsigned long                                      bIsProxyAction : 1;                                       // 0x0048(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SOAction");
		return ptr;
	}


	void Cleanup();
	void InitFor(class ABaseAIPawn* Instigator);
	void OnSOReplicated();
	bool OnPerformOn(class ABaseAIPawn* Instigator);
	bool OnIsValidFor(class ABaseAIPawn* Instigator);
	bool PerformOn(class ABaseAIPawn* Instigator);
	bool IsValidFor(class ABaseAIPawn* Instigator);
};


// Class BaseAI.SOActionLatentBase
// 0x000C (0x0058 - 0x004C)
class USOActionLatentBase : public USOAction
{
public:
	struct FPointer                                    VfTable_ILatentActionObserver;                            // 0x004C(0x0004) (Const, Native, NoExport)
	class UBTTask*                                     MyLatentTask;                                             // 0x0050(0x0004) (Transient)
	unsigned long                                      bIsAborting : 1;                                          // 0x0054(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SOActionLatentBase");
		return ptr;
	}


	void OnLatentFinished(class ABaseAIController* Observer, class UObject* Action, unsigned char FinishResult);
	void Cleanup();
	void InitFor(class ABaseAIPawn* Instigator);
	void OnAbortPerforming();
	void AbortPerforming();
};


// Class BaseAI.SOEntryDataBase
// 0x0000 (0x003C - 0x003C)
class USOEntryDataBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SOEntryDataBase");
		return ptr;
	}

};


// Class BaseAI.SOExecutionParams
// 0x0024 (0x0060 - 0x003C)
class USOExecutionParams : public UObject
{
public:
	unsigned long                                      bExclusive : 1;                                           // 0x003C(0x0004) (Edit, Const)
	unsigned long                                      bDisableAll : 1;                                          // 0x003C(0x0004) (Edit, Const)
	int                                                UsesCount;                                                // 0x0040(0x0004) (Edit, Const)
	TArray<struct FName>                               TagsDisabledOnStart;                                      // 0x0044(0x000C) (Edit, Const, NeedCtorLink)
	TArray<struct FName>                               TagsDisabledOnFinish;                                     // 0x0050(0x000C) (Edit, Const, NeedCtorLink)
	int                                                TimesUsed;                                                // 0x005C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SOExecutionParams");
		return ptr;
	}

};


// Class BaseAI.SOHubComponent
// 0x001C (0x0218 - 0x01FC)
class USOHubComponent : public USOHubComponentBase
{
public:
	TArray<class USmartObjectComponent*>               SOComponents;                                             // 0x01FC(0x000C) (Edit, ExportObject, Component, NeedCtorLink, EditInline)
	TArray<class USmartObjectComponent*>               UsedSOComponents;                                         // 0x0208(0x000C) (Const, ExportObject, Transient, Component, NeedCtorLink, EditInline)
	class USmartObjectComponent*                       ExclusiveSO;                                              // 0x0214(0x0004) (Const, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SOHubComponent");
		return ptr;
	}

};


// Class BaseAI.SOObserver
// 0x0000 (0x003C - 0x003C)
class USOObserver : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SOObserver");
		return ptr;
	}


	void OnSOFinished(class USmartObjectComponent* SO, int EntryIndex, class ABaseAIPawn* User);
};


// Class BaseAI.SeqAct_AISetGoal
// 0x0008 (0x0104 - 0x00FC)
class USeqAct_AISetGoal : public USequenceAction
{
public:
	struct FName                                       GoalName;                                                 // 0x00FC(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SeqAct_AISetGoal");
		return ptr;
	}

};


// Class BaseAI.SeqAct_AISetBT
// 0x0004 (0x0100 - 0x00FC)
class USeqAct_AISetBT : public USequenceAction
{
public:
	class UBTTemplate*                                 TemplateToExecute;                                        // 0x00FC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SeqAct_AISetBT");
		return ptr;
	}


	void Activated();
};


// Class BaseAI.SOProximityBroudcastComponent
// 0x0000 (0x0244 - 0x0244)
class USOProximityBroudcastComponent : public USmartObjectComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BaseAI.SOProximityBroudcastComponent");
		return ptr;
	}


	void OnMultiUnTouchBroudcast(int Index, class AActor* Other);
	void OnMultiTouchBroudcast(int Index, class AActor* Other);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
