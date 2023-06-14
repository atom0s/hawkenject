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

// Function BaseAI.AIEditorDataInterface.IsBeingEdit
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIEditorDataInterface::IsBeingEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIEditorDataInterface.IsBeingEdit");

	UAIEditorDataInterface_IsBeingEdit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIEditorDataInterface.SetBeingEdit
// (Native, Public)
// Parameters:
// bool                           bIsBeingEdited                 (Parm)

void UAIEditorDataInterface::SetBeingEdit(bool bIsBeingEdited)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIEditorDataInterface.SetBeingEdit");

	UAIEditorDataInterface_SetBeingEdit_Params params;
	params.bIsBeingEdited = bIsBeingEdited;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIEditorDataInterface.LoadData
// (Native, Public)
// Parameters:
// class UObject*                 TemplateOb                     (Parm)

void UAIEditorDataInterface::LoadData(class UObject* TemplateOb)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIEditorDataInterface.LoadData");

	UAIEditorDataInterface_LoadData_Params params;
	params.TemplateOb = TemplateOb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIEditorDataInterface.SaveData
// (Native, Public)
// Parameters:
// class UObject*                 TemplateOb                     (Parm)

void UAIEditorDataInterface::SaveData(class UObject* TemplateOb)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIEditorDataInterface.SaveData");

	UAIEditorDataInterface_SaveData_Params params;
	params.TemplateOb = TemplateOb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.DrawEnemyPerception
// (Native, Public)
// Parameters:
// class UCanvas*                 DrawCanvas                     (Parm)

void ABaseAIController::DrawEnemyPerception(class UCanvas* DrawCanvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.DrawEnemyPerception");

	ABaseAIController_DrawEnemyPerception_Params params;
	params.DrawCanvas = DrawCanvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.HasLOSToEnemy
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::HasLOSToEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.HasLOSToEnemy");

	ABaseAIController_HasLOSToEnemy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.GetAimPoint
// (Native, Public)
// Parameters:
// class AActor*                  Target                         (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ABaseAIController::GetAimPoint(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.GetAimPoint");

	ABaseAIController_GetAimPoint_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.AdjustAimError
// (Event, Public)
// Parameters:
// float                          TargetDist                     (Parm)
// bool                           bInstantProj                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABaseAIController::AdjustAimError(float TargetDist, bool bInstantProj)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.AdjustAimError");

	ABaseAIController_AdjustAimError_Params params;
	params.TargetDist = TargetDist;
	params.bInstantProj = bInstantProj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.IsPointInMyActionArea
// (Native, Public)
// Parameters:
// struct FVector                 pos                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsPointInMyActionArea(const struct FVector& pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsPointInMyActionArea");

	ABaseAIController_IsPointInMyActionArea_Params params;
	params.pos = pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.CreatePathForRoute
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ABaseAIRoute*            BaseRoute                      (Parm)
// class UNavigationPath*         outPath                        (Parm, OutParm)

void ABaseAIController::CreatePathForRoute(class ABaseAIRoute* BaseRoute, class UNavigationPath** outPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.CreatePathForRoute");

	ABaseAIController_CreatePathForRoute_Params params;
	params.BaseRoute = BaseRoute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outPath != nullptr)
		*outPath = params.outPath;
}


// Function BaseAI.BaseAIController.FollowRoute
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class UObject*                 MoveObserver                   (Parm)
// class ARoute*                  RouteToFollow                  (Parm)
// TEnumAsByte<EActionPriority>   ActionPriority                 (Parm)
// TEnumAsByte<EBaseMoveMood>     InMM                           (OptionalParm, Parm)
// bool                           bInvCover                      (OptionalParm, Parm)
// bool                           bStopAtEnd                     (OptionalParm, Parm)
// class AActor*                  RotateAtEndToMatch             (OptionalParm, Parm)
// float                          AcceptableDistance             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::FollowRoute(class UObject* MoveObserver, class ARoute* RouteToFollow, TEnumAsByte<EActionPriority> ActionPriority, TEnumAsByte<EBaseMoveMood> InMM, bool bInvCover, bool bStopAtEnd, class AActor* RotateAtEndToMatch, float AcceptableDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.FollowRoute");

	ABaseAIController_FollowRoute_Params params;
	params.MoveObserver = MoveObserver;
	params.RouteToFollow = RouteToFollow;
	params.ActionPriority = ActionPriority;
	params.InMM = InMM;
	params.bInvCover = bInvCover;
	params.bStopAtEnd = bStopAtEnd;
	params.RotateAtEndToMatch = RotateAtEndToMatch;
	params.AcceptableDistance = AcceptableDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.MoveToPoint
// (Defined, Event, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class UObject*                 MoveObserver                   (Parm)
// struct FVector                 InDestLocation                 (Parm)
// TEnumAsByte<EActionPriority>   ActionPriority                 (Parm)
// TEnumAsByte<EBaseMoveMood>     InMM                           (OptionalParm, Parm)
// bool                           bAllowedToFire                 (OptionalParm, Parm)
// bool                           bStopAtEnd                     (OptionalParm, Parm)
// struct FVector                 DestOffset                     (Const, OptionalParm, Parm, OutParm)
// struct FVector                 MidPointOffset                 (Const, OptionalParm, Parm, OutParm)
// bool                           bDynamicMidPoint               (OptionalParm, Parm)
// bool                           bStickToNavmesh                (OptionalParm, Parm)
// float                          AcceptableDistance             (OptionalParm, Parm)
// class AActor*                  RotateAtEndToMatch             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::MoveToPoint(class UObject* MoveObserver, const struct FVector& InDestLocation, TEnumAsByte<EActionPriority> ActionPriority, TEnumAsByte<EBaseMoveMood> InMM, bool bAllowedToFire, bool bStopAtEnd, bool bDynamicMidPoint, bool bStickToNavmesh, float AcceptableDistance, class AActor* RotateAtEndToMatch, struct FVector* DestOffset, struct FVector* MidPointOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.MoveToPoint");

	ABaseAIController_MoveToPoint_Params params;
	params.MoveObserver = MoveObserver;
	params.InDestLocation = InDestLocation;
	params.ActionPriority = ActionPriority;
	params.InMM = InMM;
	params.bAllowedToFire = bAllowedToFire;
	params.bStopAtEnd = bStopAtEnd;
	params.bDynamicMidPoint = bDynamicMidPoint;
	params.bStickToNavmesh = bStickToNavmesh;
	params.AcceptableDistance = AcceptableDistance;
	params.RotateAtEndToMatch = RotateAtEndToMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DestOffset != nullptr)
		*DestOffset = params.DestOffset;
	if (MidPointOffset != nullptr)
		*MidPointOffset = params.MidPointOffset;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.MoveToFiringPositionUponEnemy
// (Defined, Event, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class UObject*                 MoveObserver                   (Parm)
// struct FVector                 InFirePosLocation              (Const, Parm, OutParm)
// TEnumAsByte<EActionPriority>   ActionPriority                 (Parm)
// TEnumAsByte<EBaseMoveMood>     InMM                           (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded (OptionalParm, Parm)
// bool                           bAllowedToFire                 (OptionalParm, Parm)
// bool                           bStopAtEnd                     (OptionalParm, Parm)
// float                          AcceptableDistance             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::MoveToFiringPositionUponEnemy(class UObject* MoveObserver, TEnumAsByte<EActionPriority> ActionPriority, TEnumAsByte<EBaseMoveMood> InMM, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, bool bAllowedToFire, bool bStopAtEnd, float AcceptableDistance, struct FVector* InFirePosLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.MoveToFiringPositionUponEnemy");

	ABaseAIController_MoveToFiringPositionUponEnemy_Params params;
	params.MoveObserver = MoveObserver;
	params.ActionPriority = ActionPriority;
	params.InMM = InMM;
	params.MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;
	params.MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;
	params.bAllowedToFire = bAllowedToFire;
	params.bStopAtEnd = bStopAtEnd;
	params.AcceptableDistance = AcceptableDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InFirePosLocation != nullptr)
		*InFirePosLocation = params.InFirePosLocation;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.HideFromEnemy
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class UObject*                 MoveObserver                   (Parm)
// class APawn*                   MoveGoal                       (Parm)
// TEnumAsByte<EActionPriority>   ActionPriority                 (Parm)
// TEnumAsByte<EBaseMoveMood>     InMM                           (OptionalParm, Parm)
// float                          DistAwayFromEnemy              (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded (OptionalParm, Parm)
// bool                           bAllowedToFire                 (OptionalParm, Parm)
// bool                           bStopAtEnd                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::HideFromEnemy(class UObject* MoveObserver, class APawn* MoveGoal, TEnumAsByte<EActionPriority> ActionPriority, TEnumAsByte<EBaseMoveMood> InMM, float DistAwayFromEnemy, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, bool bAllowedToFire, bool bStopAtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.HideFromEnemy");

	ABaseAIController_HideFromEnemy_Params params;
	params.MoveObserver = MoveObserver;
	params.MoveGoal = MoveGoal;
	params.ActionPriority = ActionPriority;
	params.InMM = InMM;
	params.DistAwayFromEnemy = DistAwayFromEnemy;
	params.MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;
	params.MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;
	params.bAllowedToFire = bAllowedToFire;
	params.bStopAtEnd = bStopAtEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.MoveToActor
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class UObject*                 MoveObserver                   (Parm)
// class AActor*                  inActorGoal                    (Parm)
// TEnumAsByte<EActionPriority>   ActionPriority                 (Parm)
// TEnumAsByte<EBaseMoveMood>     InMM                           (OptionalParm, Parm)
// bool                           bInAllowedToFire               (OptionalParm, Parm)
// bool                           bStopAtEnd                     (OptionalParm, Parm)
// bool                           bStickToNavmesh                (OptionalParm, Parm)
// float                          AcceptableDistance             (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded (OptionalParm, Parm)
// class AActor*                  RotateAtEndToMatch             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::MoveToActor(class UObject* MoveObserver, class AActor* inActorGoal, TEnumAsByte<EActionPriority> ActionPriority, TEnumAsByte<EBaseMoveMood> InMM, bool bInAllowedToFire, bool bStopAtEnd, bool bStickToNavmesh, float AcceptableDistance, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, class AActor* RotateAtEndToMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.MoveToActor");

	ABaseAIController_MoveToActor_Params params;
	params.MoveObserver = MoveObserver;
	params.inActorGoal = inActorGoal;
	params.ActionPriority = ActionPriority;
	params.InMM = InMM;
	params.bInAllowedToFire = bInAllowedToFire;
	params.bStopAtEnd = bStopAtEnd;
	params.bStickToNavmesh = bStickToNavmesh;
	params.AcceptableDistance = AcceptableDistance;
	params.MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;
	params.MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;
	params.RotateAtEndToMatch = RotateAtEndToMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.AllowedToMove
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::AllowedToMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.AllowedToMove");

	ABaseAIController_AllowedToMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.StopMovement
// (Defined, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EActionPriority>   ActionPriority                 (OptionalParm, Parm)

void ABaseAIController::StopMovement(TEnumAsByte<EActionPriority> ActionPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.StopMovement");

	ABaseAIController_StopMovement_Params params;
	params.ActionPriority = ActionPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.GetDesiredMoveTargetOffset
// (Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ABaseAIController::GetDesiredMoveTargetOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.GetDesiredMoveTargetOffset");

	ABaseAIController_GetDesiredMoveTargetOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.StepAsideFor
// (Native, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FVector                 HitNormal                      (Parm)

void ABaseAIController::StepAsideFor(class AActor* Other, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.StepAsideFor");

	ABaseAIController_StepAsideFor_Params params;
	params.Other = Other;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.IsMovementLocked
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EActionPriority>   Priority                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsMovementLocked(TEnumAsByte<EActionPriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsMovementLocked");

	ABaseAIController_IsMovementLocked_Params params;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.IsMoving
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsMoving");

	ABaseAIController_IsMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.IsPointReachable
// (Defined, Event, Public)
// Parameters:
// struct FVector                 Point                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsPointReachable(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsPointReachable");

	ABaseAIController_IsPointReachable_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.SetupPathfinding
// (Native, Public)

void ABaseAIController::SetupPathfinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SetupPathfinding");

	ABaseAIController_SetupPathfinding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.ClearNavigation
// (Final, Native, Public)
// Parameters:
// class UNavigationHandle*       Navigation                     (Parm)
// bool                           bForced                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::ClearNavigation(class UNavigationHandle* Navigation, bool bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.ClearNavigation");

	ABaseAIController_ClearNavigation_Params params;
	params.Navigation = Navigation;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.SetNavigation
// (Final, Native, Public)
// Parameters:
// class UNavigationHandle*       Navigation                     (Parm)
// bool                           bForced                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::SetNavigation(class UNavigationHandle* Navigation, bool bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SetNavigation");

	ABaseAIController_SetNavigation_Params params;
	params.Navigation = Navigation;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.NavMeshVolumeLeft
// (Final, Native, Public)
// Parameters:
// class UNavigationHandle*       NavVolume                      (Parm)

void ABaseAIController::NavMeshVolumeLeft(class UNavigationHandle* NavVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.NavMeshVolumeLeft");

	ABaseAIController_NavMeshVolumeLeft_Params params;
	params.NavVolume = NavVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.NavMeshVolumeEntered
// (Final, Native, Public)
// Parameters:
// class UNavigationHandle*       NavVolume                      (Parm)

void ABaseAIController::NavMeshVolumeEntered(class UNavigationHandle* NavVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.NavMeshVolumeEntered");

	ABaseAIController_NavMeshVolumeEntered_Params params;
	params.NavVolume = NavVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.OnGlobalPauseChanged
// (Event, Public)
// Parameters:
// bool                           bPaused                        (Parm)

void ABaseAIController::OnGlobalPauseChanged(bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.OnGlobalPauseChanged");

	ABaseAIController_OnGlobalPauseChanged_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.StopLogic
// (Defined, Event, Public)
// Parameters:
// bool                           bByKismet                      (Parm)

void ABaseAIController::StopLogic(bool bByKismet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.StopLogic");

	ABaseAIController_StopLogic_Params params;
	params.bByKismet = bByKismet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.RestartLogic
// (Final, Native, Public)
// Parameters:
// bool                           bByKismet                      (Parm)

void ABaseAIController::RestartLogic(bool bByKismet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.RestartLogic");

	ABaseAIController_RestartLogic_Params params;
	params.bByKismet = bByKismet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.ResumeLogic
// (Defined, Event, Public)
// Parameters:
// bool                           bByKismet                      (Parm)

void ABaseAIController::ResumeLogic(bool bByKismet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.ResumeLogic");

	ABaseAIController_ResumeLogic_Params params;
	params.bByKismet = bByKismet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.SuspendLogic
// (Defined, Event, Public)
// Parameters:
// bool                           bByKismet                      (Parm)

void ABaseAIController::SuspendLogic(bool bByKismet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SuspendLogic");

	ABaseAIController_SuspendLogic_Params params;
	params.bByKismet = bByKismet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.BreakKismetLogicAndMovementLock
// (Native, Public)

void ABaseAIController::BreakKismetLogicAndMovementLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.BreakKismetLogicAndMovementLock");

	ABaseAIController_BreakKismetLogicAndMovementLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.IsLogicSuspended
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsLogicSuspended()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsLogicSuspended");

	ABaseAIController_IsLogicSuspended_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.IsLogicRunning
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsLogicRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsLogicRunning");

	ABaseAIController_IsLogicRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.IsControlledByKismet
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsControlledByKismet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsControlledByKismet");

	ABaseAIController_IsControlledByKismet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.IsTargetOverwhelmed
// (Final, Native, Public)
// Parameters:
// class APawn*                   Target                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsTargetOverwhelmed(class APawn* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsTargetOverwhelmed");

	ABaseAIController_IsTargetOverwhelmed_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.SelectTarget
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::SelectTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SelectTarget");

	ABaseAIController_SelectTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.SelectEnemy
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::SelectEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SelectEnemy");

	ABaseAIController_SelectEnemy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.SetEnemy
// (Final, Native, Public)
// Parameters:
// class APawn*                   NewEnemy                       (Parm)

void ABaseAIController::SetEnemy(class APawn* NewEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SetEnemy");

	ABaseAIController_SetEnemy_Params params;
	params.NewEnemy = NewEnemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.SelectTargetInternal
// (Native, Public)
// Parameters:
// bool                           bOnlyFromTargetList            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::SelectTargetInternal(bool bOnlyFromTargetList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SelectTargetInternal");

	ABaseAIController_SelectTargetInternal_Params params;
	params.bOnlyFromTargetList = bOnlyFromTargetList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.NotifyKilled
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             Killed                         (Parm)
// class APawn*                   KilledPawn                     (Parm)
// class UClass*                  DamageType                     (Parm)

void ABaseAIController::NotifyKilled(class AController* Killer, class AController* Killed, class APawn* KilledPawn, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.NotifyKilled");

	ABaseAIController_NotifyKilled_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.KilledPawn = KilledPawn;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.HasValidFireLaneToCurrentEnemy
// (Defined, Event, Public, HasOutParms)
// Parameters:
// bool                           bUseDefaultFireLane            (Parm)
// struct FVector                 ExtentOfFireLane               (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::HasValidFireLaneToCurrentEnemy(bool bUseDefaultFireLane, struct FVector* ExtentOfFireLane)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.HasValidFireLaneToCurrentEnemy");

	ABaseAIController_HasValidFireLaneToCurrentEnemy_Params params;
	params.bUseDefaultFireLane = bUseDefaultFireLane;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtentOfFireLane != nullptr)
		*ExtentOfFireLane = params.ExtentOfFireLane;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.NotifyEnemyBecameVisible
// (Event, Public)
// Parameters:
// class APawn*                   VisibleEnemy                   (Parm)
// float                          TimeSinceLastVisible           (Parm)

void ABaseAIController::NotifyEnemyBecameVisible(class APawn* VisibleEnemy, float TimeSinceLastVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.NotifyEnemyBecameVisible");

	ABaseAIController_NotifyEnemyBecameVisible_Params params;
	params.VisibleEnemy = VisibleEnemy;
	params.TimeSinceLastVisible = TimeSinceLastVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.NotifyLostEnemyVisibility
// (Event, Public)
// Parameters:
// class APawn*                   LostEnemy                      (Parm)

void ABaseAIController::NotifyLostEnemyVisibility(class APawn* LostEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.NotifyLostEnemyVisibility");

	ABaseAIController_NotifyLostEnemyVisibility_Params params;
	params.LostEnemy = LostEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.NoticedEnemy
// (Event, Public)
// Parameters:
// class APawn*                   NewEnemy                       (Parm)

void ABaseAIController::NoticedEnemy(class APawn* NewEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.NoticedEnemy");

	ABaseAIController_NoticedEnemy_Params params;
	params.NewEnemy = NewEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.IsTargetConcealed
// (Final, Native, Public)
// Parameters:
// class AActor*                  Target                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsTargetConcealed(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsTargetConcealed");

	ABaseAIController_IsTargetConcealed_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.IsEnemyVisible
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class APawn*                   EnemyPawn                      (Parm)
// int                            EnemyIdx                       (OptionalParm, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsEnemyVisible(class APawn* EnemyPawn, int* EnemyIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsEnemyVisible");

	ABaseAIController_IsEnemyVisible_Params params;
	params.EnemyPawn = EnemyPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyIdx != nullptr)
		*EnemyIdx = params.EnemyIdx;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.CanPawnBeSeenFrom
// (Final, Native, Public)
// Parameters:
// class ABaseAIPawn*             Target                         (Parm)
// struct FVector                 FireSpot                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::CanPawnBeSeenFrom(class ABaseAIPawn* Target, const struct FVector& FireSpot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.CanPawnBeSeenFrom");

	ABaseAIController_CanPawnBeSeenFrom_Params params;
	params.Target = Target;
	params.FireSpot = FireSpot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.UpdateEnemyPerception
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bSkipResponseDelay             (OptionalParm, Parm)

void ABaseAIController::UpdateEnemyPerception(bool bSkipResponseDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.UpdateEnemyPerception");

	ABaseAIController_UpdateEnemyPerception_Params params;
	params.bSkipResponseDelay = bSkipResponseDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.GetMoveMoodOverride
// (Final, Defined, Public)
// Parameters:
// TEnumAsByte<EBaseMoveMood>     ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBaseMoveMood> ABaseAIController::GetMoveMoodOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.GetMoveMoodOverride");

	ABaseAIController_GetMoveMoodOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.SetLogicalMoveMoodOverride
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EBaseMoveMood>     MoveMood                       (Parm)

void ABaseAIController::SetLogicalMoveMoodOverride(TEnumAsByte<EBaseMoveMood> MoveMood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SetLogicalMoveMoodOverride");

	ABaseAIController_SetLogicalMoveMoodOverride_Params params;
	params.MoveMood = MoveMood;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.SetLogicalMoveMood
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EBaseMoveMood>     MoveMood                       (Parm)

void ABaseAIController::SetLogicalMoveMood(TEnumAsByte<EBaseMoveMood> MoveMood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SetLogicalMoveMood");

	ABaseAIController_SetLogicalMoveMood_Params params;
	params.MoveMood = MoveMood;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.OnPostTeleport
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class USequenceAction*         Action                         (OptionalParm, Parm)

void ABaseAIController::OnPostTeleport(class USequenceAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.OnPostTeleport");

	ABaseAIController_OnPostTeleport_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.OnTeleport
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Teleport*        Action                         (Parm)

void ABaseAIController::OnTeleport(class USeqAct_Teleport* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.OnTeleport");

	ABaseAIController_OnTeleport_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.OnAISetBT
// (Public)
// Parameters:
// class USeqAct_AISetBT*         inAction                       (Parm)

void ABaseAIController::OnAISetBT(class USeqAct_AISetBT* inAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.OnAISetBT");

	ABaseAIController_OnAISetBT_Params params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.OnAISetGoal
// (Defined, Public)
// Parameters:
// class USeqAct_AISetGoal*       inAction                       (Parm)

void ABaseAIController::OnAISetGoal(class USeqAct_AISetGoal* inAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.OnAISetGoal");

	ABaseAIController_OnAISetGoal_Params params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.IsFriendly
// (Native, Public)
// Parameters:
// class AController*             TestPlayer                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsFriendly(class AController* TestPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsFriendly");

	ABaseAIController_IsFriendly_Params params;
	params.TestPlayer = TestPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.IsFriendlyPawn
// (Final, Native, Public)
// Parameters:
// class APawn*                   TestPlayer                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsFriendlyPawn(class APawn* TestPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsFriendlyPawn");

	ABaseAIController_IsFriendlyPawn_Params params;
	params.TestPlayer = TestPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.RemoveAllEnemies
// (Native, Public)

void ABaseAIController::RemoveAllEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.RemoveAllEnemies");

	ABaseAIController_RemoveAllEnemies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.RemoveEnemy
// (Native, Public)
// Parameters:
// class APawn*                   EnemyPawn                      (Parm)

void ABaseAIController::RemoveEnemy(class APawn* EnemyPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.RemoveEnemy");

	ABaseAIController_RemoveEnemy_Params params;
	params.EnemyPawn = EnemyPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.BroadcastEnemyKnowledge
// (Native, Public)
// Parameters:
// class APawn*                   EnemyPawn                      (Parm)
// TEnumAsByte<EWSPerceptionMode> Perception                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ABaseAIController::BroadcastEnemyKnowledge(class APawn* EnemyPawn, TEnumAsByte<EWSPerceptionMode> Perception)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.BroadcastEnemyKnowledge");

	ABaseAIController_BroadcastEnemyKnowledge_Params params;
	params.EnemyPawn = EnemyPawn;
	params.Perception = Perception;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.IsSquadMember
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsSquadMember()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsSquadMember");

	ABaseAIController_IsSquadMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.GetSquadLeader
// (Defined, Public)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ReturnParm)

class AController* ABaseAIController::GetSquadLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.GetSquadLeader");

	ABaseAIController_GetSquadLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.SetCanCover
// (Final, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void ABaseAIController::SetCanCover(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SetCanCover");

	ABaseAIController_SetCanCover_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.IsInCover
// (Final, Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsInCover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsInCover");

	ABaseAIController_IsInCover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.CanCover
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::CanCover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.CanCover");

	ABaseAIController_CanCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.Cleanup
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bBeingDestroyed                (OptionalParm, Parm)

void ABaseAIController::Cleanup(bool bBeingDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.Cleanup");

	ABaseAIController_Cleanup_Params params;
	params.bBeingDestroyed = bBeingDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.FreeBTETQQuery
// (Final, Native, Public)

void ABaseAIController::FreeBTETQQuery()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.FreeBTETQQuery");

	ABaseAIController_FreeBTETQQuery_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.IsThereValidPathToThisEnemy
// (Defined, Event, Public)
// Parameters:
// class APawn*                   NewEnemy                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIController::IsThereValidPathToThisEnemy(class APawn* NewEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.IsThereValidPathToThisEnemy");

	ABaseAIController_IsThereValidPathToThisEnemy_Params params;
	params.NewEnemy = NewEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.OnPreNewEnemySet
// (Event, Public)
// Parameters:
// class APawn*                   OldEnemy                       (Parm)
// class APawn*                   NewEnemy                       (Parm)
// class APawn*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class APawn* ABaseAIController::OnPreNewEnemySet(class APawn* OldEnemy, class APawn* NewEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.OnPreNewEnemySet");

	ABaseAIController_OnPreNewEnemySet_Params params;
	params.OldEnemy = OldEnemy;
	params.NewEnemy = NewEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.GetLocalEnemyIndex
// (Final, Native, Public)
// Parameters:
// class APawn*                   EnemyToFind                    (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ABaseAIController::GetLocalEnemyIndex(class APawn* EnemyToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.GetLocalEnemyIndex");

	ABaseAIController_GetLocalEnemyIndex_Params params;
	params.EnemyToFind = EnemyToFind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.UpdateEnemyWeaponStates
// (Native, Public)

void ABaseAIController::UpdateEnemyWeaponStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.UpdateEnemyWeaponStates");

	ABaseAIController_UpdateEnemyWeaponStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.UpdateWeaponStates
// (Native, Public)

void ABaseAIController::UpdateWeaponStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.UpdateWeaponStates");

	ABaseAIController_UpdateWeaponStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.UpdateEnemyBodyState
// (Native, Public)
// Parameters:
// TEnumAsByte<EWSBodyStatus>     ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EWSBodyStatus> ABaseAIController::UpdateEnemyBodyState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.UpdateEnemyBodyState");

	ABaseAIController_UpdateEnemyBodyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.OnEnemyRangeUpdate
// (Native, Public)
// Parameters:
// float                          NewDistanceSquare              (Parm)

void ABaseAIController::OnEnemyRangeUpdate(float NewDistanceSquare)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.OnEnemyRangeUpdate");

	ABaseAIController_OnEnemyRangeUpdate_Params params;
	params.NewDistanceSquare = NewDistanceSquare;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.UpdateEnemyAngle
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSSymbolicAngle>  ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EWSSymbolicAngle> ABaseAIController::UpdateEnemyAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.UpdateEnemyAngle");

	ABaseAIController_UpdateEnemyAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.UpdateEnemyRange
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSRangeClass>     ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EWSRangeClass> ABaseAIController::UpdateEnemyRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.UpdateEnemyRange");

	ABaseAIController_UpdateEnemyRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.GetBehaviorTag
// (Final, Native, Public)
// Parameters:
// bool                           bNoneIfSuspended               (Parm)
// TEnumAsByte<EBehaviorTag>      ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBehaviorTag> ABaseAIController::GetBehaviorTag(bool bNoneIfSuspended)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.GetBehaviorTag");

	ABaseAIController_GetBehaviorTag_Params params;
	params.bNoneIfSuspended = bNoneIfSuspended;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.ExecuteBT
// (Final, Native, Public)
// Parameters:
// struct FName                   TreeName                       (Parm)
// TEnumAsByte<EBTStatus>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTStatus> ABaseAIController::ExecuteBT(const struct FName& TreeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.ExecuteBT");

	ABaseAIController_ExecuteBT_Params params;
	params.TreeName = TreeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIController.OnDeathFailsafe
// (Defined, Public)

void ABaseAIController::OnDeathFailsafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.OnDeathFailsafe");

	ABaseAIController_OnDeathFailsafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.Destroyed
// (Defined, Event, Public)

void ABaseAIController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.Destroyed");

	ABaseAIController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.PawnDied
// (Defined, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)

void ABaseAIController::PawnDied(class APawn* inPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.PawnDied");

	ABaseAIController_PawnDied_Params params;
	params.inPawn = inPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.OnTargetChange
// (Event, Public)
// Parameters:
// class AActor*                  NewTarget                      (Parm)

void ABaseAIController::OnTargetChange(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.OnTargetChange");

	ABaseAIController_OnTargetChange_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.InitializeMovementStuckParams
// (Defined, Public)

void ABaseAIController::InitializeMovementStuckParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.InitializeMovementStuckParams");

	ABaseAIController_InitializeMovementStuckParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.InitializeDefaultBehavior
// (Defined, Public)

void ABaseAIController::InitializeDefaultBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.InitializeDefaultBehavior");

	ABaseAIController_InitializeDefaultBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.SetDefaultBehavior
// (Defined, Public)
// Parameters:
// struct FName                   NewDefaultBehavior             (Parm)

void ABaseAIController::SetDefaultBehavior(const struct FName& NewDefaultBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SetDefaultBehavior");

	ABaseAIController_SetDefaultBehavior_Params params;
	params.NewDefaultBehavior = NewDefaultBehavior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.UnPossess
// (Defined, Event, Public)

void ABaseAIController::UnPossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.UnPossess");

	ABaseAIController_UnPossess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.Possess
// (Defined, Event, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)
// bool                           bVehicleTransition             (Parm)

void ABaseAIController::Possess(class APawn* inPawn, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.Possess");

	ABaseAIController_Possess_Params params;
	params.inPawn = inPawn;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.InitializeAIClass
// (Event, Public)

void ABaseAIController::InitializeAIClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.InitializeAIClass");

	ABaseAIController_InitializeAIClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.InitializeBlackBoard
// (Defined, Event, Public)

void ABaseAIController::InitializeBlackBoard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.InitializeBlackBoard");

	ABaseAIController_InitializeBlackBoard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.SetTeam
// (Defined, Event, Public)
// Parameters:
// int                            inTeamIdx                      (Parm)

void ABaseAIController::SetTeam(int inTeamIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SetTeam");

	ABaseAIController_SetTeam_Params params;
	params.inTeamIdx = inTeamIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.InitFromDef
// (Defined, Event, Public)

void ABaseAIController::InitFromDef()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.InitFromDef");

	ABaseAIController_InitFromDef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.SetDefinition
// (Defined, Public)
// Parameters:
// class UBaseAIDefinition*       Def                            (Parm)

void ABaseAIController::SetDefinition(class UBaseAIDefinition* Def)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.SetDefinition");

	ABaseAIController_SetDefinition_Params params;
	params.Def = Def;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.PostBeginPlay
// (Defined, Event, Public)

void ABaseAIController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.PostBeginPlay");

	ABaseAIController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.Initialize
// (Native, Public)

void ABaseAIController::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.Initialize");

	ABaseAIController_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIController.GenerateAndSetNameForThisLittleKiller
// (Event, Public)

void ABaseAIController::GenerateAndSetNameForThisLittleKiller()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIController.GenerateAndSetNameForThisLittleKiller");

	ABaseAIController_GenerateAndSetNameForThisLittleKiller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIGame.NotifyKilled
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             KilledPlayer                   (Parm)
// class APawn*                   KilledPawn                     (Parm)
// class UClass*                  DamageType                     (Parm)

void ABaseAIGame::NotifyKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIGame.NotifyKilled");

	ABaseAIGame_NotifyKilled_Params params;
	params.Killer = Killer;
	params.KilledPlayer = KilledPlayer;
	params.KilledPawn = KilledPawn;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPlayerController.UpdateEnemyVisibility
// (Final, Native, Public)

void ABaseAIPlayerController::UpdateEnemyVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPlayerController.UpdateEnemyVisibility");

	ABaseAIPlayerController_UpdateEnemyVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPlayerController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void ABaseAIPlayerController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPlayerController.PostBeginPlay");

	ABaseAIPlayerController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPlayerController.GetShootingLocationAverage
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 VectorResult                   (Parm, OutParm)
// bool                           bGetAnyLocation                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPlayerController::GetShootingLocationAverage(bool bGetAnyLocation, struct FVector* VectorResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPlayerController.GetShootingLocationAverage");

	ABaseAIPlayerController_GetShootingLocationAverage_Params params;
	params.bGetAnyLocation = bGetAnyLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VectorResult != nullptr)
		*VectorResult = params.VectorResult;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPlayerController.GatherShootingInfo
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// int                            Weight                         (OptionalParm, Parm)

void ABaseAIPlayerController::GatherShootingInfo(const struct FVector& HitLocation, int Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPlayerController.GatherShootingInfo");

	ABaseAIPlayerController_GatherShootingInfo_Params params;
	params.HitLocation = HitLocation;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISquad.UpdateEnemySelection
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAISquad::UpdateEnemySelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISquad.UpdateEnemySelection");

	ABaseAISquad_UpdateEnemySelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISquad.GetSquadCenterPawn
// (Final, Native, Public)
// Parameters:
// class ABaseAIPawn*             ReturnValue                    (Parm, OutParm, ReturnParm)

class ABaseAIPawn* ABaseAISquad::GetSquadCenterPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISquad.GetSquadCenterPawn");

	ABaseAISquad_GetSquadCenterPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISquad.GetSquadMembers
// (Native, Public, HasOutParms)
// Parameters:
// TArray<class ABaseAIPawn*>     Members                        (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAISquad::GetSquadMembers(TArray<class ABaseAIPawn*>* Members)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISquad.GetSquadMembers");

	ABaseAISquad_GetSquadMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Members != nullptr)
		*Members = params.Members;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISquad.GetSquadMemberCount
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ABaseAISquad::GetSquadMemberCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISquad.GetSquadMemberCount");

	ABaseAISquad_GetSquadMemberCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISquad.UpdateLeader
// (Native, Public)
// Parameters:
// class AController*             inLeader                       (Parm)

void ABaseAISquad::UpdateLeader(class AController* inLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISquad.UpdateLeader");

	ABaseAISquad_UpdateLeader_Params params;
	params.inLeader = inLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISquad.EnemyPerceivedBy
// (Final, Native, Public)
// Parameters:
// class AController*             Member                         (Parm)
// TEnumAsByte<EWSPerceptionMode> PerceptionType                 (Parm)
// class APawn*                   Enemy                          (Parm)

void ABaseAISquad::EnemyPerceivedBy(class AController* Member, TEnumAsByte<EWSPerceptionMode> PerceptionType, class APawn* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISquad.EnemyPerceivedBy");

	ABaseAISquad_EnemyPerceivedBy_Params params;
	params.Member = Member;
	params.PerceptionType = PerceptionType;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISquad.NotifyKilled
// (Native, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             Killed                         (Parm)
// class APawn*                   KilledPawn                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAISquad::NotifyKilled(class AController* Killer, class AController* Killed, class APawn* KilledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISquad.NotifyKilled");

	ABaseAISquad_NotifyKilled_Params params;
	params.Killer = Killer;
	params.Killed = Killed;
	params.KilledPawn = KilledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISquad.Destroyed
// (Defined, Event, Public)

void ABaseAISquad::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISquad.Destroyed");

	ABaseAISquad_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISquad.PostBeginPlay
// (Defined, Event, Public)

void ABaseAISquad::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISquad.PostBeginPlay");

	ABaseAISquad_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.Init
// (Final, Defined, Event, Public)

void UBaseAISubsystem::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.Init");

	UBaseAISubsystem_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.IsGlobalPaused
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBaseAISubsystem::STATIC_IsGlobalPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.IsGlobalPaused");

	UBaseAISubsystem_IsGlobalPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.SetGlobalPaused
// (Final, Native, Static, Public)
// Parameters:
// bool                           bPaused                        (Parm)

void UBaseAISubsystem::STATIC_SetGlobalPaused(bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.SetGlobalPaused");

	UBaseAISubsystem_SetGlobalPaused_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.NotifyPotentialTargets
// (Final, Native, Static, Public)
// Parameters:
// class ABaseAIController*       AI                             (Parm)

void UBaseAISubsystem::STATIC_NotifyPotentialTargets(class ABaseAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.NotifyPotentialTargets");

	UBaseAISubsystem_NotifyPotentialTargets_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.RegisterPotentialTarget
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  Target                         (Parm)

void UBaseAISubsystem::STATIC_RegisterPotentialTarget(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.RegisterPotentialTarget");

	UBaseAISubsystem_RegisterPotentialTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.ToggleAILogging
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBaseAISubsystem::STATIC_ToggleAILogging()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.ToggleAILogging");

	UBaseAISubsystem_ToggleAILogging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.NotifyKilled
// (Final, Native, Static, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class AController*             KilledController               (Parm)
// class APawn*                   KilledPawn                     (Parm)

void UBaseAISubsystem::STATIC_NotifyKilled(class AController* Killer, class AController* KilledController, class APawn* KilledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.NotifyKilled");

	UBaseAISubsystem_NotifyKilled_Params params;
	params.Killer = Killer;
	params.KilledController = KilledController;
	params.KilledPawn = KilledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.SetBoolProp
// (Final, Native, Static, Public)
// Parameters:
// TEnumAsByte<EAISysBoolProps>   Prop                           (Parm)
// bool                           bValue                         (Parm)

void UBaseAISubsystem::STATIC_SetBoolProp(TEnumAsByte<EAISysBoolProps> Prop, bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.SetBoolProp");

	UBaseAISubsystem_SetBoolProp_Params params;
	params.Prop = Prop;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.GetBoolProp
// (Final, Native, Static, Public)
// Parameters:
// TEnumAsByte<EAISysBoolProps>   Prop                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBaseAISubsystem::STATIC_GetBoolProp(TEnumAsByte<EAISysBoolProps> Prop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.GetBoolProp");

	UBaseAISubsystem_GetBoolProp_Params params;
	params.Prop = Prop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.GetEnemyTeamsSize
// (Final, Native, Static, Public)
// Parameters:
// unsigned char                  TeamID                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UBaseAISubsystem::STATIC_GetEnemyTeamsSize(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.GetEnemyTeamsSize");

	UBaseAISubsystem_GetEnemyTeamsSize_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.GetTeamSize
// (Final, Native, Static, Public)
// Parameters:
// unsigned char                  TeamID                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UBaseAISubsystem::STATIC_GetTeamSize(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.GetTeamSize");

	UBaseAISubsystem_GetTeamSize_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.DecreaseTeamSize
// (Final, Native, Static, Public)
// Parameters:
// unsigned char                  TeamID                         (Parm)

void UBaseAISubsystem::STATIC_DecreaseTeamSize(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.DecreaseTeamSize");

	UBaseAISubsystem_DecreaseTeamSize_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.IncreaseTeamSize
// (Final, Native, Static, Public)
// Parameters:
// unsigned char                  TeamID                         (Parm)

void UBaseAISubsystem::STATIC_IncreaseTeamSize(unsigned char TeamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.IncreaseTeamSize");

	UBaseAISubsystem_IncreaseTeamSize_Params params;
	params.TeamID = TeamID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.AppSeconds
// (Final, Native, Static, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UBaseAISubsystem::STATIC_AppSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.AppSeconds");

	UBaseAISubsystem_AppSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.UnRegisterSquad
// (Final, Native, Static, Public)
// Parameters:
// class ABaseAISquad*            Squad                          (Parm)

void UBaseAISubsystem::STATIC_UnRegisterSquad(class ABaseAISquad* Squad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.UnRegisterSquad");

	UBaseAISubsystem_UnRegisterSquad_Params params;
	params.Squad = Squad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.RegisterSquad
// (Final, Native, Static, Public)
// Parameters:
// class ABaseAISquad*            Squad                          (Parm)

void UBaseAISubsystem::STATIC_RegisterSquad(class ABaseAISquad* Squad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.RegisterSquad");

	UBaseAISubsystem_RegisterSquad_Params params;
	params.Squad = Squad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.UnRegisterAvoidanceComponent
// (Final, Native, Static, Public)
// Parameters:
// class UAIAvoidanceComponent*   AvoidanceComponent             (Parm, EditInline)

void UBaseAISubsystem::STATIC_UnRegisterAvoidanceComponent(class UAIAvoidanceComponent* AvoidanceComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.UnRegisterAvoidanceComponent");

	UBaseAISubsystem_UnRegisterAvoidanceComponent_Params params;
	params.AvoidanceComponent = AvoidanceComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.RegisterAvoidanceComponent
// (Final, Native, Static, Public)
// Parameters:
// class UAIAvoidanceComponent*   AvoidanceComponent             (Parm, EditInline)

void UBaseAISubsystem::STATIC_RegisterAvoidanceComponent(class UAIAvoidanceComponent* AvoidanceComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.RegisterAvoidanceComponent");

	UBaseAISubsystem_RegisterAvoidanceComponent_Params params;
	params.AvoidanceComponent = AvoidanceComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.UnRegisterSpawnedCover
// (Final, Native, Static, Public)
// Parameters:
// class ACoverLink*              Cover                          (Parm)

void UBaseAISubsystem::STATIC_UnRegisterSpawnedCover(class ACoverLink* Cover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.UnRegisterSpawnedCover");

	UBaseAISubsystem_UnRegisterSpawnedCover_Params params;
	params.Cover = Cover;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.RegisterSpawnedCover
// (Final, Native, Static, Public)
// Parameters:
// class ACoverLink*              Cover                          (Parm)

void UBaseAISubsystem::STATIC_RegisterSpawnedCover(class ACoverLink* Cover)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.RegisterSpawnedCover");

	UBaseAISubsystem_RegisterSpawnedCover_Params params;
	params.Cover = Cover;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.UnRegisterSmartObject
// (Final, Native, Static, Public)
// Parameters:
// class USOHubComponent*         SO                             (Parm, EditInline)

void UBaseAISubsystem::STATIC_UnRegisterSmartObject(class USOHubComponent* SO)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.UnRegisterSmartObject");

	UBaseAISubsystem_UnRegisterSmartObject_Params params;
	params.SO = SO;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.RegisterSmartObject
// (Final, Native, Static, Public)
// Parameters:
// class USOHubComponent*         SO                             (Parm, EditInline)

void UBaseAISubsystem::STATIC_RegisterSmartObject(class USOHubComponent* SO)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.RegisterSmartObject");

	UBaseAISubsystem_RegisterSmartObject_Params params;
	params.SO = SO;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAISubsystem.GetAIDebugTool
// (Final, Native, Static, Public)
// Parameters:
// class UAIDebugTool*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UAIDebugTool* UBaseAISubsystem::STATIC_GetAIDebugTool()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.GetAIDebugTool");

	UBaseAISubsystem_GetAIDebugTool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.GetSightSystem
// (Final, Native, Static, Public)
// Parameters:
// class USightSystem*            ReturnValue                    (Parm, OutParm, ReturnParm)

class USightSystem* UBaseAISubsystem::STATIC_GetSightSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.GetSightSystem");

	UBaseAISubsystem_GetSightSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.GetNavigationSystem
// (Final, Native, Static, Public)
// Parameters:
// class UNavigationSystem*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UNavigationSystem* UBaseAISubsystem::STATIC_GetNavigationSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.GetNavigationSystem");

	UBaseAISubsystem_GetNavigationSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.GetMessageSystem
// (Final, Native, Static, Public)
// Parameters:
// class UMessageSystem*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UMessageSystem* UBaseAISubsystem::STATIC_GetMessageSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.GetMessageSystem");

	UBaseAISubsystem_GetMessageSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.GetBTManager
// (Final, Native, Static, Public)
// Parameters:
// class UBTManager*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UBTManager* UBaseAISubsystem::STATIC_GetBTManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.GetBTManager");

	UBaseAISubsystem_GetBTManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.GetETQSystem
// (Final, Native, Static, Public)
// Parameters:
// class UETQSystem*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UETQSystem* UBaseAISubsystem::STATIC_GetETQSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.GetETQSystem");

	UBaseAISubsystem_GetETQSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAISubsystem.GetInstance
// (Final, Native, Static, Public)
// Parameters:
// class UBaseAISubsystem*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UBaseAISubsystem* UBaseAISubsystem::STATIC_GetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAISubsystem.GetInstance");

	UBaseAISubsystem_GetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.MessageSystem.SendMessageClassClass
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// class UClass*                  Param1                         (Parm)
// class UClass*                  Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageClassClass(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UClass* Param1, class UClass* Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageClassClass");

	UMessageSystem_SendMessageClassClass_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageClassObject
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// class UClass*                  Param1                         (Parm)
// class UObject*                 Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageClassObject(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UClass* Param1, class UObject* Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageClassObject");

	UMessageSystem_SendMessageClassObject_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageClassFloat
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// class UClass*                  Param1                         (Parm)
// float                          Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageClassFloat(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UClass* Param1, float Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageClassFloat");

	UMessageSystem_SendMessageClassFloat_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageClassInt
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// class UClass*                  Param1                         (Parm)
// int                            Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageClassInt(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UClass* Param1, int Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageClassInt");

	UMessageSystem_SendMessageClassInt_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageObjectClass
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// class UObject*                 Param1                         (Parm)
// class UClass*                  Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageObjectClass(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UObject* Param1, class UClass* Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageObjectClass");

	UMessageSystem_SendMessageObjectClass_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageObjectObject
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// class UObject*                 Param1                         (Parm)
// class UObject*                 Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageObjectObject(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UObject* Param1, class UObject* Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageObjectObject");

	UMessageSystem_SendMessageObjectObject_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageObjectFloat
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// class UObject*                 Param1                         (Parm)
// float                          Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageObjectFloat(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UObject* Param1, float Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageObjectFloat");

	UMessageSystem_SendMessageObjectFloat_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageObjectInt
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// class UObject*                 Param1                         (Parm)
// int                            Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageObjectInt(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, class UObject* Param1, int Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageObjectInt");

	UMessageSystem_SendMessageObjectInt_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageFloatClass
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// float                          Param1                         (Parm)
// class UClass*                  Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageFloatClass(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, float Param1, class UClass* Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageFloatClass");

	UMessageSystem_SendMessageFloatClass_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageFloatObject
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// float                          Param1                         (Parm)
// class UObject*                 Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageFloatObject(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, float Param1, class UObject* Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageFloatObject");

	UMessageSystem_SendMessageFloatObject_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageFloatFloat
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// float                          Param1                         (Parm)
// float                          Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageFloatFloat(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, float Param1, float Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageFloatFloat");

	UMessageSystem_SendMessageFloatFloat_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageFloatInt
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// float                          Param1                         (Parm)
// int                            Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageFloatInt(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, float Param1, int Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageFloatInt");

	UMessageSystem_SendMessageFloatInt_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageIntClass
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// int                            Param1                         (Parm)
// class UClass*                  Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageIntClass(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, int Param1, class UClass* Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageIntClass");

	UMessageSystem_SendMessageIntClass_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageIntObject
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// int                            Param1                         (Parm)
// class UObject*                 Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageIntObject(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, int Param1, class UObject* Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageIntObject");

	UMessageSystem_SendMessageIntObject_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageIntFloat
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// int                            Param1                         (Parm)
// float                          Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageIntFloat(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, int Param1, float Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageIntFloat");

	UMessageSystem_SendMessageIntFloat_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendMessageIntInt
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)
// int                            Param1                         (Parm)
// int                            Param2                         (Parm)
// TEnumAsByte<EMessagePriority>  Priority                       (OptionalParm, Parm)

void UMessageSystem::SendMessageIntInt(TEnumAsByte<EMessageID> Code, class UObject* Sender, class UObject* Receiver, int Param1, int Param2, TEnumAsByte<EMessagePriority> Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendMessageIntInt");

	UMessageSystem_SendMessageIntInt_Params params;
	params.Code = Code;
	params.Sender = Sender;
	params.Receiver = Receiver;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.DrawDebugInfo
// (Final, Native, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UMessageSystem::DrawDebugInfo(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.DrawDebugInfo");

	UMessageSystem_DrawDebugInfo_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.GetInstance
// (Final, Native, Static, Public)
// Parameters:
// class UMessageSystem*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UMessageSystem* UMessageSystem::STATIC_GetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.GetInstance");

	UMessageSystem_GetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.MessageSystem.RemoveHooksFrom
// (Final, Native, Public)
// Parameters:
// class UObject*                 Owner                          (Parm)

void UMessageSystem::RemoveHooksFrom(class UObject* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.RemoveHooksFrom");

	UMessageSystem_RemoveHooksFrom_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.RemoveScriptHook
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// struct FScriptDelegate         Hook                           (Parm, NeedCtorLink)

void UMessageSystem::RemoveScriptHook(TEnumAsByte<EMessageID> Code, const struct FScriptDelegate& Hook)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.RemoveScriptHook");

	UMessageSystem_RemoveScriptHook_Params params;
	params.Code = Code;
	params.Hook = Hook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.AddScriptHook
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EMessageID>        Code                           (Parm)
// struct FScriptDelegate         Hook                           (Parm, NeedCtorLink)

void UMessageSystem::AddScriptHook(TEnumAsByte<EMessageID> Code, const struct FScriptDelegate& Hook)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.AddScriptHook");

	UMessageSystem_AddScriptHook_Params params;
	params.Code = Code;
	params.Hook = Hook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.MessageHandlerDelegate
// (Public, Delegate)
// Parameters:
// struct FMsgData                Message                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMessageSystem::MessageHandlerDelegate(const struct FMsgData& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.MessageHandlerDelegate");

	UMessageSystem_MessageHandlerDelegate_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.MessageSystem.MessageHookDelegate
// (Public, Delegate)
// Parameters:
// struct FMsgData                Message                        (Parm)

void UMessageSystem::MessageHookDelegate(const struct FMsgData& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.MessageHookDelegate");

	UMessageSystem_MessageHookDelegate_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.Broadcast
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FMsgData                Message                        (Parm)
// float                          Radius                         (OptionalParm, Parm)
// struct FVector                 Origin                         (OptionalParm, Parm)

void UMessageSystem::Broadcast(const struct FMsgData& Message, float Radius, const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.Broadcast");

	UMessageSystem_Broadcast_Params params;
	params.Message = Message;
	params.Radius = Radius;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.SendFromTo
// (Final, Native, Public)
// Parameters:
// struct FMsgData                Message                        (Parm)
// class UObject*                 Sender                         (Parm)
// class UObject*                 Receiver                       (Parm)

void UMessageSystem::SendFromTo(const struct FMsgData& Message, class UObject* Sender, class UObject* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SendFromTo");

	UMessageSystem_SendFromTo_Params params;
	params.Message = Message;
	params.Sender = Sender;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.Send
// (Final, Native, Public)
// Parameters:
// struct FMsgData                Message                        (Parm)

void UMessageSystem::Send(const struct FMsgData& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.Send");

	UMessageSystem_Send_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.MessageSystem.GetMessageReceiver
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMsgData                Message                        (Parm, OutParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UMessageSystem::GetMessageReceiver(struct FMsgData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.GetMessageReceiver");

	UMessageSystem_GetMessageReceiver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;

	return params.ReturnValue;
}


// Function BaseAI.MessageSystem.GetMessageSender
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMsgData                Message                        (Parm, OutParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UMessageSystem::GetMessageSender(struct FMsgData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.GetMessageSender");

	UMessageSystem_GetMessageSender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;

	return params.ReturnValue;
}


// Function BaseAI.MessageSystem.GetMessageParamClass
// (Final, Native, Public)
// Parameters:
// struct FMsgData                Message                        (Parm)
// int                            ParamIdx                       (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* UMessageSystem::GetMessageParamClass(const struct FMsgData& Message, int ParamIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.GetMessageParamClass");

	UMessageSystem_GetMessageParamClass_Params params;
	params.Message = Message;
	params.ParamIdx = ParamIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.MessageSystem.GetMessageParamObject
// (Final, Native, Public)
// Parameters:
// struct FMsgData                Message                        (Parm)
// int                            ParamIdx                       (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UMessageSystem::GetMessageParamObject(const struct FMsgData& Message, int ParamIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.GetMessageParamObject");

	UMessageSystem_GetMessageParamObject_Params params;
	params.Message = Message;
	params.ParamIdx = ParamIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.MessageSystem.GetMessageParamFloat
// (Final, Native, Public)
// Parameters:
// struct FMsgData                Message                        (Parm)
// int                            ParamIdx                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UMessageSystem::GetMessageParamFloat(const struct FMsgData& Message, int ParamIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.GetMessageParamFloat");

	UMessageSystem_GetMessageParamFloat_Params params;
	params.Message = Message;
	params.ParamIdx = ParamIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.MessageSystem.GetMessageParamInt
// (Final, Native, Public)
// Parameters:
// struct FMsgData                Message                        (Parm)
// int                            ParamIdx                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMessageSystem::GetMessageParamInt(const struct FMsgData& Message, int ParamIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.GetMessageParamInt");

	UMessageSystem_GetMessageParamInt_Params params;
	params.Message = Message;
	params.ParamIdx = ParamIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.MessageSystem.SetMessageReceiver
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMsgData                Message                        (Parm, OutParm)
// class UObject*                 Receiver                       (Parm)

void UMessageSystem::SetMessageReceiver(class UObject* Receiver, struct FMsgData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SetMessageReceiver");

	UMessageSystem_SetMessageReceiver_Params params;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
}


// Function BaseAI.MessageSystem.SetMessageSender
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMsgData                Message                        (Parm, OutParm)
// class UObject*                 Sender                         (Parm)

void UMessageSystem::SetMessageSender(class UObject* Sender, struct FMsgData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SetMessageSender");

	UMessageSystem_SetMessageSender_Params params;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
}


// Function BaseAI.MessageSystem.SetMessageParamClass
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMsgData                Message                        (Parm, OutParm)
// int                            ParamIdx                       (Parm)
// class UClass*                  Value                          (Parm)

void UMessageSystem::SetMessageParamClass(int ParamIdx, class UClass* Value, struct FMsgData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SetMessageParamClass");

	UMessageSystem_SetMessageParamClass_Params params;
	params.ParamIdx = ParamIdx;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
}


// Function BaseAI.MessageSystem.SetMessageParamObject
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMsgData                Message                        (Parm, OutParm)
// int                            ParamIdx                       (Parm)
// class UObject*                 Value                          (Parm)

void UMessageSystem::SetMessageParamObject(int ParamIdx, class UObject* Value, struct FMsgData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SetMessageParamObject");

	UMessageSystem_SetMessageParamObject_Params params;
	params.ParamIdx = ParamIdx;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
}


// Function BaseAI.MessageSystem.SetMessageParamFloat
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMsgData                Message                        (Parm, OutParm)
// int                            ParamIdx                       (Parm)
// float                          Value                          (Parm)

void UMessageSystem::SetMessageParamFloat(int ParamIdx, float Value, struct FMsgData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SetMessageParamFloat");

	UMessageSystem_SetMessageParamFloat_Params params;
	params.ParamIdx = ParamIdx;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
}


// Function BaseAI.MessageSystem.SetMessageParamInt
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMsgData                Message                        (Parm, OutParm)
// int                            ParamIdx                       (Parm)
// int                            Value                          (Parm)

void UMessageSystem::SetMessageParamInt(int ParamIdx, int Value, struct FMsgData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.MessageSystem.SetMessageParamInt");

	UMessageSystem_SetMessageParamInt_Params params;
	params.ParamIdx = ParamIdx;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
}


// Function BaseAI.SeqAct_SetLeaderFollowingMode.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USeqAct_SetLeaderFollowingMode::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SeqAct_SetLeaderFollowingMode.GetObjClassVersion");

	USeqAct_SetLeaderFollowingMode_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SightSystem.TestValidFireLane
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 FromLocation                   (Const, Parm, OutParm)
// struct FVector                 ToLocation                     (Const, Parm, OutParm)
// class AActor*                  TraceActor                     (Parm)
// bool                           bUseDefaultFireLane            (OptionalParm, Parm)
// struct FVector                 ExtentOfFireLane               (Const, OptionalParm, Parm, OutParm)
// struct FImpactInfo             HitInfo                        (OptionalParm, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USightSystem::TestValidFireLane(class AActor* TraceActor, bool bUseDefaultFireLane, struct FVector* FromLocation, struct FVector* ToLocation, struct FVector* ExtentOfFireLane, struct FImpactInfo* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SightSystem.TestValidFireLane");

	USightSystem_TestValidFireLane_Params params;
	params.TraceActor = TraceActor;
	params.bUseDefaultFireLane = bUseDefaultFireLane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FromLocation != nullptr)
		*FromLocation = params.FromLocation;
	if (ToLocation != nullptr)
		*ToLocation = params.ToLocation;
	if (ExtentOfFireLane != nullptr)
		*ExtentOfFireLane = params.ExtentOfFireLane;
	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function BaseAI.SightSystem.TestVisibility
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 FromLocation                   (Parm)
// struct FVector                 ToLocation                     (Parm)
// class AActor*                  TraceActor                     (OptionalParm, Parm)
// struct FImpactInfo             HitInfo                        (OptionalParm, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USightSystem::TestVisibility(const struct FVector& FromLocation, const struct FVector& ToLocation, class AActor* TraceActor, struct FImpactInfo* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SightSystem.TestVisibility");

	USightSystem_TestVisibility_Params params;
	params.FromLocation = FromLocation;
	params.ToLocation = ToLocation;
	params.TraceActor = TraceActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function BaseAI.AIAvoidanceComponent.SetEnabled
// (Final, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void UAIAvoidanceComponent::SetEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIAvoidanceComponent.SetEnabled");

	UAIAvoidanceComponent_SetEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIAvoidanceConeComponent.SetConeSize
// (Final, Native, Public)
// Parameters:
// float                          NewDistance                    (Parm)
// float                          NewDot                         (Parm)

void UAIAvoidanceConeComponent::SetConeSize(float NewDistance, float NewDot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIAvoidanceConeComponent.SetConeSize");

	UAIAvoidanceConeComponent_SetConeSize_Params params;
	params.NewDistance = NewDistance;
	params.NewDot = NewDot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIAvoidanceCylinderComponent.SetCylinderSize
// (Final, Native, Public)
// Parameters:
// float                          NewRadius                      (Parm)
// float                          NewHeight                      (Parm)

void UAIAvoidanceCylinderComponent::SetCylinderSize(float NewRadius, float NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIAvoidanceCylinderComponent.SetCylinderSize");

	UAIAvoidanceCylinderComponent_SetCylinderSize_Params params;
	params.NewRadius = NewRadius;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavigationPath.DrawPath
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// unsigned char                  R                              (OptionalParm, Parm)
// unsigned char                  G                              (OptionalParm, Parm)
// unsigned char                  B                              (OptionalParm, Parm)
// bool                           bPersistent                    (OptionalParm, Parm)

void UNavigationPath::DrawPath(class UCanvas* Canvas, unsigned char R, unsigned char G, unsigned char B, bool bPersistent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationPath.DrawPath");

	UNavigationPath_DrawPath_Params params;
	params.Canvas = Canvas;
	params.R = R;
	params.G = G;
	params.B = B;
	params.bPersistent = bPersistent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavigationPath.WorldToLocal
// (Final, Native, Public)
// Parameters:
// struct FVector                 InLocation                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UNavigationPath::WorldToLocal(const struct FVector& InLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationPath.WorldToLocal");

	UNavigationPath_WorldToLocal_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.NavigationPath.SetRoute
// (Final, Native, Public)
// Parameters:
// TArray<struct FPathPoint>      Route                          (Parm, NeedCtorLink)

void UNavigationPath::SetRoute(TArray<struct FPathPoint> Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationPath.SetRoute");

	UNavigationPath_SetRoute_Params params;
	params.Route = Route;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavigationPath.GetElementPos
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UNavigationPath::GetElementPos(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationPath.GetElementPos");

	UNavigationPath_GetElementPos_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.NavigationSystem.TestFindAnchor
// (Final, Native, Public)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 Extent                         (Parm)

void UNavigationSystem::TestFindAnchor(const struct FVector& Point, const struct FVector& Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.TestFindAnchor");

	UNavigationSystem_TestFindAnchor_Params params;
	params.Point = Point;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavigationSystem.TestProjectPointToNavMesh
// (Final, Native, Public)
// Parameters:
// struct FVector                 Point                          (Parm)

void UNavigationSystem::TestProjectPointToNavMesh(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.TestProjectPointToNavMesh");

	UNavigationSystem_TestProjectPointToNavMesh_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavigationSystem.ToggleNavExByActor
// (Final, Native, Public)
// Parameters:
// class AActor*                  Referencer                     (Parm)
// bool                           bEnabled                       (Parm)
// float                          AgentRadius                    (Parm)

void UNavigationSystem::ToggleNavExByActor(class AActor* Referencer, bool bEnabled, float AgentRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.ToggleNavExByActor");

	UNavigationSystem_ToggleNavExByActor_Params params;
	params.Referencer = Referencer;
	params.bEnabled = bEnabled;
	params.AgentRadius = AgentRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavigationSystem.MarkNavPoly
// (Final, Native, Public)
// Parameters:
// int                            PolyRef                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavigationSystem::MarkNavPoly(int PolyRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.MarkNavPoly");

	UNavigationSystem_MarkNavPoly_Params params;
	params.PolyRef = PolyRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.NavigationSystem.CycleNavMeshRendering
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class UNavigationHandle*       ShownRecastActor               (Parm, OutParm)
// float                          ShownRadius                    (OptionalParm, Parm, OutParm)

void UNavigationSystem::CycleNavMeshRendering(class UNavigationHandle** ShownRecastActor, float* ShownRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.CycleNavMeshRendering");

	UNavigationSystem_CycleNavMeshRendering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShownRecastActor != nullptr)
		*ShownRecastActor = params.ShownRecastActor;
	if (ShownRadius != nullptr)
		*ShownRadius = params.ShownRadius;
}


// Function BaseAI.NavigationSystem.ProjectPointToNavMesh
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 ResultPos                      (Parm, OutParm)
// struct FVector                 Extent                         (Parm)
// float                          MinWalkableZ                   (Parm)
// float                          HoverDistance                  (Parm)
// bool                           bReachable                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavigationSystem::STATIC_ProjectPointToNavMesh(const struct FVector& Point, const struct FVector& Extent, float MinWalkableZ, float HoverDistance, bool bReachable, struct FVector* ResultPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.ProjectPointToNavMesh");

	UNavigationSystem_ProjectPointToNavMesh_Params params;
	params.Point = Point;
	params.Extent = Extent;
	params.MinWalkableZ = MinWalkableZ;
	params.HoverDistance = HoverDistance;
	params.bReachable = bReachable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultPos != nullptr)
		*ResultPos = params.ResultPos;

	return params.ReturnValue;
}


// Function BaseAI.NavigationSystem.GetStraightPathLength
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 Start                          (Parm)
// struct FVector                 End                            (Parm)
// class UNavigationHandle*       NavOverride                    (Parm)
// struct FVector                 Extent                         (OptionalParm, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UNavigationSystem::GetStraightPathLength(const struct FVector& Start, const struct FVector& End, class UNavigationHandle* NavOverride, struct FVector* Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.GetStraightPathLength");

	UNavigationSystem_GetStraightPathLength_Params params;
	params.Start = Start;
	params.End = End;
	params.NavOverride = NavOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Extent != nullptr)
		*Extent = params.Extent;

	return params.ReturnValue;
}


// Function BaseAI.NavigationSystem.DoesStraightPathExist
// (Final, Native, Public)
// Parameters:
// struct FVector                 Start                          (Parm)
// struct FVector                 End                            (Parm)
// class UNavigationHandle*       NavOverride                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavigationSystem::DoesStraightPathExist(const struct FVector& Start, const struct FVector& End, class UNavigationHandle* NavOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.DoesStraightPathExist");

	UNavigationSystem_DoesStraightPathExist_Params params;
	params.Start = Start;
	params.End = End;
	params.NavOverride = NavOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.NavigationSystem.DoesPathExist
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FVector                 Start                          (Parm)
// struct FVector                 End                            (Parm)
// class UNavigationHandle*       NavOverride                    (Parm)
// bool                           bIncludeDisabled               (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavigationSystem::DoesPathExist(const struct FVector& Start, const struct FVector& End, class UNavigationHandle* NavOverride, bool bIncludeDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.DoesPathExist");

	UNavigationSystem_DoesPathExist_Params params;
	params.Start = Start;
	params.End = End;
	params.NavOverride = NavOverride;
	params.bIncludeDisabled = bIncludeDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.NavigationSystem.CreatePathForRoute
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ARoute*                  inRoute                        (Parm)
// class UNavigationHandle*       NavOverride                    (Parm)
// class UNavigationPath*         ResultingPath                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavigationSystem::CreatePathForRoute(class ARoute* inRoute, class UNavigationHandle* NavOverride, class UNavigationPath** ResultingPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.CreatePathForRoute");

	UNavigationSystem_CreatePathForRoute_Params params;
	params.inRoute = inRoute;
	params.NavOverride = NavOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingPath != nullptr)
		*ResultingPath = params.ResultingPath;

	return params.ReturnValue;
}


// Function BaseAI.NavigationSystem.FindPath
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 Start                          (Parm)
// struct FVector                 End                            (Parm)
// class UNavigationHandle*       NavOverride                    (Parm)
// class UNavigationPath*         ResultingPath                  (Parm, OutParm)
// class AActor*                  Walker                         (OptionalParm, Parm)
// bool                           bStickToNavmesh                (OptionalParm, Parm)
// unsigned char                  ForbiddenNavFlags              (OptionalParm, Parm)
// struct FVector                 ForcedMidPoint                 (OptionalParm, Parm)
// class AActor*                  AvoidedActor                   (OptionalParm, Parm)
// float                          AvoidanceRadius                (OptionalParm, Parm)
// bool                           bGetAsCloseAsPossible          (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavigationSystem::FindPath(const struct FVector& Start, const struct FVector& End, class UNavigationHandle* NavOverride, class AActor* Walker, bool bStickToNavmesh, unsigned char ForbiddenNavFlags, const struct FVector& ForcedMidPoint, class AActor* AvoidedActor, float AvoidanceRadius, bool bGetAsCloseAsPossible, class UNavigationPath** ResultingPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.FindPath");

	UNavigationSystem_FindPath_Params params;
	params.Start = Start;
	params.End = End;
	params.NavOverride = NavOverride;
	params.Walker = Walker;
	params.bStickToNavmesh = bStickToNavmesh;
	params.ForbiddenNavFlags = ForbiddenNavFlags;
	params.ForcedMidPoint = ForcedMidPoint;
	params.AvoidedActor = AvoidedActor;
	params.AvoidanceRadius = AvoidanceRadius;
	params.bGetAsCloseAsPossible = bGetAsCloseAsPossible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingPath != nullptr)
		*ResultingPath = params.ResultingPath;

	return params.ReturnValue;
}


// Function BaseAI.NavigationSystem.GetDistanceToWall
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FVector                 Point                          (Parm)
// class UNavigationHandle*       NavOverride                    (Parm)
// struct FVector                 HitPos                         (OptionalParm, Parm)
// struct FVector                 HitNormal                      (OptionalParm, Parm)
// float                          Radius                         (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UNavigationSystem::GetDistanceToWall(const struct FVector& Point, class UNavigationHandle* NavOverride, const struct FVector& HitPos, const struct FVector& HitNormal, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.GetDistanceToWall");

	UNavigationSystem_GetDistanceToWall_Params params;
	params.Point = Point;
	params.NavOverride = NavOverride;
	params.HitPos = HitPos;
	params.HitNormal = HitNormal;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.NavigationSystem.IsPointOnNavMesh
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 Point                          (Parm)
// class UNavigationHandle*       NavOverride                    (Parm)
// struct FVector                 Extent                         (OptionalParm, Parm, OutParm)
// bool                           bIncludeDisabled               (OptionalParm, Parm)
// struct FVector                 PointOnNavMesh                 (OptionalParm, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavigationSystem::IsPointOnNavMesh(const struct FVector& Point, class UNavigationHandle* NavOverride, bool bIncludeDisabled, struct FVector* Extent, struct FVector* PointOnNavMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.IsPointOnNavMesh");

	UNavigationSystem_IsPointOnNavMesh_Params params;
	params.Point = Point;
	params.NavOverride = NavOverride;
	params.bIncludeDisabled = bIncludeDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Extent != nullptr)
		*Extent = params.Extent;
	if (PointOnNavMesh != nullptr)
		*PointOnNavMesh = params.PointOnNavMesh;

	return params.ReturnValue;
}


// Function BaseAI.NavigationSystem.GetPointInsideVolume
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class AVolume*                 Vol                            (Parm)
// class UNavigationHandle*       NavOverride                    (Parm)
// struct FVector                 Point                          (Parm, OutParm)
// bool                           bRandomized                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavigationSystem::GetPointInsideVolume(class AVolume* Vol, class UNavigationHandle* NavOverride, bool bRandomized, struct FVector* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.GetPointInsideVolume");

	UNavigationSystem_GetPointInsideVolume_Params params;
	params.Vol = Vol;
	params.NavOverride = NavOverride;
	params.bRandomized = bRandomized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Point != nullptr)
		*Point = params.Point;

	return params.ReturnValue;
}


// Function BaseAI.NavigationSystem.UnRegisterRecastActor
// (Final, Native, Public)
// Parameters:
// class UNavigationHandle*       RCActor                        (Parm)

void UNavigationSystem::UnRegisterRecastActor(class UNavigationHandle* RCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.UnRegisterRecastActor");

	UNavigationSystem_UnRegisterRecastActor_Params params;
	params.RCActor = RCActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavigationSystem.RegisterRecastActor
// (Final, Native, Public)
// Parameters:
// class UNavigationHandle*       RCActor                        (Parm)

void UNavigationSystem::RegisterRecastActor(class UNavigationHandle* RCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavigationSystem.RegisterRecastActor");

	UNavigationSystem_RegisterRecastActor_Params params;
	params.RCActor = RCActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavMeshGeneratingInterface.GetAdditionalRecastRadius
// (Native, Public, HasOutParms)
// Parameters:
// TArray<float>                  ActorRadius                    (Parm, OutParm, NeedCtorLink)

void UNavMeshGeneratingInterface::GetAdditionalRecastRadius(TArray<float>* ActorRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavMeshGeneratingInterface.GetAdditionalRecastRadius");

	UNavMeshGeneratingInterface_GetAdditionalRecastRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorRadius != nullptr)
		*ActorRadius = params.ActorRadius;
}


// Function BaseAI.NavMeshGeneratingVolume.UnTouch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void ANavMeshGeneratingVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavMeshGeneratingVolume.UnTouch");

	ANavMeshGeneratingVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavMeshGeneratingVolume.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void ANavMeshGeneratingVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavMeshGeneratingVolume.Touch");

	ANavMeshGeneratingVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavMeshModifier.ShouldSaveForCheckpoint
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ANavMeshModifier::ShouldSaveForCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavMeshModifier.ShouldSaveForCheckpoint");

	ANavMeshModifier_ShouldSaveForCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.NavMeshModifier.ApplyCheckpointRecord
// (Defined, Public, HasOutParms)
// Parameters:
// struct ANavMeshModifier_FCheckpointRecord Record                         (Const, Parm, OutParm)

void ANavMeshModifier::ApplyCheckpointRecord(struct ANavMeshModifier_FCheckpointRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavMeshModifier.ApplyCheckpointRecord");

	ANavMeshModifier_ApplyCheckpointRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function BaseAI.NavMeshModifier.CreateCheckpointRecord
// (Defined, Public, HasOutParms)
// Parameters:
// struct ANavMeshModifier_FCheckpointRecord Record                         (Parm, OutParm)

void ANavMeshModifier::CreateCheckpointRecord(struct ANavMeshModifier_FCheckpointRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavMeshModifier.CreateCheckpointRecord");

	ANavMeshModifier_CreateCheckpointRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function BaseAI.NavMeshModifier.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void ANavMeshModifier::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavMeshModifier.OnToggle");

	ANavMeshModifier_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavMeshModifier.OnToggleNavPolys
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_ToggleNavPolys*  Action                         (Parm)

void ANavMeshModifier::OnToggleNavPolys(class USeqAct_ToggleNavPolys* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavMeshModifier.OnToggleNavPolys");

	ANavMeshModifier_OnToggleNavPolys_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.NavMeshModifingInterface.GetNavMeshModifingAreaType
// (Native, Public)
// Parameters:
// TEnumAsByte<ENavPolyArea>      ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ENavPolyArea> UNavMeshModifingInterface::GetNavMeshModifingAreaType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavMeshModifingInterface.GetNavMeshModifingAreaType");

	UNavMeshModifingInterface_GetNavMeshModifingAreaType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.NavMeshModifingInterface.GetNavMeshModifingExtent
// (Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UNavMeshModifingInterface::GetNavMeshModifingExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.NavMeshModifingInterface.GetNavMeshModifingExtent");

	UNavMeshModifingInterface_GetNavMeshModifingExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIDebugTool.DumpNativeCallStack
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  Actor                          (Parm)
// struct FName                   LogCategory                    (OptionalParm, Parm)

void UAIDebugTool::DumpNativeCallStack(class AActor* Actor, const struct FName& LogCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.DumpNativeCallStack");

	UAIDebugTool_DumpNativeCallStack_Params params;
	params.Actor = Actor;
	params.LogCategory = LogCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.GetActorEntryLocation
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  inActor                        (OptionalParm, Parm)
// int                            Index                          (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UAIDebugTool::GetActorEntryLocation(class AActor* inActor, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.GetActorEntryLocation");

	UAIDebugTool_GetActorEntryLocation_Params params;
	params.inActor = inActor;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIDebugTool.FlushETQHistory
// (Final, Native, Public)

void UAIDebugTool::FlushETQHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.FlushETQHistory");

	UAIDebugTool_FlushETQHistory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.AddETQLog
// (Final, Native, Public)
// Parameters:
// struct FString                 QueryName                      (Parm, NeedCtorLink)
// struct FString                 TestName                       (Parm, NeedCtorLink)
// class AActor*                  Querier                        (Parm)

void UAIDebugTool::AddETQLog(const struct FString& QueryName, const struct FString& TestName, class AActor* Querier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.AddETQLog");

	UAIDebugTool_AddETQLog_Params params;
	params.QueryName = QueryName;
	params.TestName = TestName;
	params.Querier = Querier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.FlushUnreachableActors
// (Final, Native, Public)

void UAIDebugTool::FlushUnreachableActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.FlushUnreachableActors");

	UAIDebugTool_FlushUnreachableActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.LogUnreachableActor
// (Final, Native, Public)
// Parameters:
// class AActor*                  inActor                        (Parm)

void UAIDebugTool::LogUnreachableActor(class AActor* inActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.LogUnreachableActor");

	UAIDebugTool_LogUnreachableActor_Params params;
	params.inActor = inActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.ClearHistoryColor
// (Final, Native, Public)

void UAIDebugTool::ClearHistoryColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.ClearHistoryColor");

	UAIDebugTool_ClearHistoryColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.ColorHistory
// (Final, Native, Public)
// Parameters:
// struct FName                   Filter                         (Parm)

void UAIDebugTool::ColorHistory(const struct FName& Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.ColorHistory");

	UAIDebugTool_ColorHistory_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.ClearHistoryFilter
// (Final, Native, Public)

void UAIDebugTool::ClearHistoryFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.ClearHistoryFilter");

	UAIDebugTool_ClearHistoryFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.SetHistoryFilter
// (Final, Native, Public)
// Parameters:
// struct FName                   Filter                         (Parm)
// bool                           bVal                           (Parm)

void UAIDebugTool::SetHistoryFilter(const struct FName& Filter, bool bVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.SetHistoryFilter");

	UAIDebugTool_SetHistoryFilter_Params params;
	params.Filter = Filter;
	params.bVal = bVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.ToggleLogDrawingMode
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<ELogDrawingMode>   Mode                           (Parm)

void UAIDebugTool::ToggleLogDrawingMode(TEnumAsByte<ELogDrawingMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.ToggleLogDrawingMode");

	UAIDebugTool_ToggleLogDrawingMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.DisplayNextEntry
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// int                            Count                          (OptionalParm, Parm)
// int                            Direction                      (OptionalParm, Parm)

void UAIDebugTool::DisplayNextEntry(int Count, int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.DisplayNextEntry");

	UAIDebugTool_DisplayNextEntry_Params params;
	params.Count = Count;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.SetContext
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm)

void UAIDebugTool::SetContext(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.SetContext");

	UAIDebugTool_SetContext_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.LogSpaceLine
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  Actor                          (Parm)
// struct FVector                 Start                          (Parm)
// struct FVector                 End                            (Parm)
// TEnumAsByte<EDebugLineType>    Type                           (Parm)
// struct FString                 Comment                        (OptionalParm, Parm, NeedCtorLink)
// struct FName                   Category                       (OptionalParm, Parm)

void UAIDebugTool::LogSpaceLine(class AActor* Actor, const struct FVector& Start, const struct FVector& End, TEnumAsByte<EDebugLineType> Type, const struct FString& Comment, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.LogSpaceLine");

	UAIDebugTool_LogSpaceLine_Params params;
	params.Actor = Actor;
	params.Start = Start;
	params.End = End;
	params.Type = Type;
	params.Comment = Comment;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.Log
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  Actor                          (Parm)
// struct FString                 LogText                        (Parm, NeedCtorLink)
// struct FName                   LogCategory                    (OptionalParm, Parm)

void UAIDebugTool::Log(class AActor* Actor, const struct FString& LogText, const struct FName& LogCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.Log");

	UAIDebugTool_Log_Params params;
	params.Actor = Actor;
	params.LogText = LogText;
	params.LogCategory = LogCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.SetDebugTarget
// (Final, Native, Public)
// Parameters:
// class ABaseAIController*       NewDebugTarget                 (Parm)

void UAIDebugTool::SetDebugTarget(class ABaseAIController* NewDebugTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.SetDebugTarget");

	UAIDebugTool_SetDebugTarget_Params params;
	params.NewDebugTarget = NewDebugTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.FlushLogs
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 DirName                        (OptionalParm, Parm, NeedCtorLink)
// class ABaseAIController*       AI                             (OptionalParm, Parm)

void UAIDebugTool::FlushLogs(const struct FString& DirName, class ABaseAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.FlushLogs");

	UAIDebugTool_FlushLogs_Params params;
	params.DirName = DirName;
	params.AI = AI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.LoadLogFile
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           bAppendMapName                 (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIDebugTool::LoadLogFile(const struct FString& Filename, bool bAppendMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.LoadLogFile");

	UAIDebugTool_LoadLogFile_Params params;
	params.Filename = Filename;
	params.bAppendMapName = bAppendMapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIDebugTool.DrawLog
// (Final, Native, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class AActor*                  Actor                          (Parm)

void UAIDebugTool::DrawLog(class UCanvas* Canvas, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.DrawLog");

	UAIDebugTool_DrawLog_Params params;
	params.Canvas = Canvas;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIDebugTool.AddBTLogEntry
// (Final, Native, Public)
// Parameters:
// struct FString                 Entry                          (Parm, NeedCtorLink)

void UAIDebugTool::AddBTLogEntry(const struct FString& Entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIDebugTool.AddBTLogEntry");

	UAIDebugTool_AddBTLogEntry_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.DrawCrumbs
// (Final, Native, Public)
// Parameters:
// class AHUD*                    HUD                            (Parm)

void ABaseAIPawn::DrawCrumbs(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.DrawCrumbs");

	ABaseAIPawn_DrawCrumbs_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.GetHoverDistance
// (Simulated, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABaseAIPawn::GetHoverDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.GetHoverDistance");

	ABaseAIPawn_GetHoverDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.AfterTeleport
// (Simulated, Native, Public)

void ABaseAIPawn::AfterTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.AfterTeleport");

	ABaseAIPawn_AfterTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.DebuggerUntilHelperFn
// (Native, Public)

void ABaseAIPawn::DebuggerUntilHelperFn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.DebuggerUntilHelperFn");

	ABaseAIPawn_DebuggerUntilHelperFn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.GetMaxAttackerStrength
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABaseAIPawn::GetMaxAttackerStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.GetMaxAttackerStrength");

	ABaseAIPawn_GetMaxAttackerStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.RemoveAttacker
// (Final, Native, Public)
// Parameters:
// class ABaseAIPawn*             Attacker                       (Parm)

void ABaseAIPawn::RemoveAttacker(class ABaseAIPawn* Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.RemoveAttacker");

	ABaseAIPawn_RemoveAttacker_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.GetAttackerCount
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// int                            AIType                         (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ABaseAIPawn::GetAttackerCount(int AIType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.GetAttackerCount");

	ABaseAIPawn_GetAttackerCount_Params params;
	params.AIType = AIType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.TriggerReadability
// (Event, HasOptionalParms, Public, HasOutParms)
// Parameters:
// TEnumAsByte<EBaseAIReadability> Readability                    (Parm)
// class AActor*                  MainRef                        (OptionalParm, Parm)
// TArray<class AActor*>          References                     (OptionalParm, Parm, OutParm, NeedCtorLink)

void ABaseAIPawn::TriggerReadability(TEnumAsByte<EBaseAIReadability> Readability, class AActor* MainRef, TArray<class AActor*>* References)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.TriggerReadability");

	ABaseAIPawn_TriggerReadability_Params params;
	params.Readability = Readability;
	params.MainRef = MainRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (References != nullptr)
		*References = params.References;
}


// Function BaseAI.BaseAIPawn.NotifyTeamChanged
// (Defined, Simulated, Public)

void ABaseAIPawn::NotifyTeamChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.NotifyTeamChanged");

	ABaseAIPawn_NotifyTeamChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.MoveToward
// (Final, Native, Public)
// Parameters:
// struct FVector                 Dest                           (Parm)
// class AActor*                  GoalActor                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::MoveToward(const struct FVector& Dest, class AActor* GoalActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.MoveToward");

	ABaseAIPawn_MoveToward_Params params;
	params.Dest = Dest;
	params.GoalActor = GoalActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.Destroyed
// (Defined, Simulated, Event, Public)

void ABaseAIPawn::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.Destroyed");

	ABaseAIPawn_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.OnDestroyed
// (Simulated, Event, Public)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm)

void ABaseAIPawn::OnDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.OnDestroyed");

	ABaseAIPawn_OnDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.UnPossessed
// (Defined, Public)

void ABaseAIPawn::UnPossessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.UnPossessed");

	ABaseAIPawn_UnPossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.PossessedBy
// (Defined, Public)
// Parameters:
// class AController*             C                              (Parm)
// bool                           bVehicleTransition             (Parm)

void ABaseAIPawn::PossessedBy(class AController* C, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.PossessedBy");

	ABaseAIPawn_PossessedBy_Params params;
	params.C = C;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.Died");

	ABaseAIPawn_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.PerformIdleShooting
// (Event, Public)
// Parameters:
// class AActor*                  Target                         (Parm)

void ABaseAIPawn::PerformIdleShooting(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.PerformIdleShooting");

	ABaseAIPawn_PerformIdleShooting_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.CanFireActiveWeapon
// (Native, Public)
// Parameters:
// unsigned char                  InFiringMode                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::CanFireActiveWeapon(unsigned char InFiringMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.CanFireActiveWeapon");

	ABaseAIPawn_CanFireActiveWeapon_Params params;
	params.InFiringMode = InFiringMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.GetDefaultAdjustedAim
// (Defined, Simulated, Event, Public)
// Parameters:
// class ABaseWeapon*             W                              (Parm)
// struct FVector                 StartFireLoc                   (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator ABaseAIPawn::GetDefaultAdjustedAim(class ABaseWeapon* W, const struct FVector& StartFireLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.GetDefaultAdjustedAim");

	ABaseAIPawn_GetDefaultAdjustedAim_Params params;
	params.W = W;
	params.StartFireLoc = StartFireLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.GetAdjustedAim
// (Final, Simulated, Native, Public)
// Parameters:
// class ABaseWeapon*             W                              (Parm)
// struct FVector                 StartFireLoc                   (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator ABaseAIPawn::GetAdjustedAim(class ABaseWeapon* W, const struct FVector& StartFireLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.GetAdjustedAim");

	ABaseAIPawn_GetAdjustedAim_Params params;
	params.W = W;
	params.StartFireLoc = StartFireLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.SetWeapon
// (Simulated, Native, Public)
// Parameters:
// class AWeapon*                 NewWeapon                      (Parm)
// int                            Hand                           (Parm)

void ABaseAIPawn::SetWeapon(class AWeapon* NewWeapon, int Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.SetWeapon");

	ABaseAIPawn_SetWeapon_Params params;
	params.NewWeapon = NewWeapon;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.IsReloadingWeapon
// (Final, Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::IsReloadingWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.IsReloadingWeapon");

	ABaseAIPawn_IsReloadingWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.IsInCover
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::IsInCover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.IsInCover");

	ABaseAIPawn_IsInCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ABaseAIPawn::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.ReplicatedEvent");

	ABaseAIPawn_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.GetCurrentSOAction
// (Defined, Simulated, Public)
// Parameters:
// class USOAction*               ReturnValue                    (Parm, OutParm, ReturnParm)

class USOAction* ABaseAIPawn::GetCurrentSOAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.GetCurrentSOAction");

	ABaseAIPawn_GetCurrentSOAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.GetCurrentSOEntry
// (Defined, Simulated, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ABaseAIPawn::GetCurrentSOEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.GetCurrentSOEntry");

	ABaseAIPawn_GetCurrentSOEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.GetCurrentSOComponent
// (Defined, Simulated, Public)
// Parameters:
// class USmartObjectComponent*   ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class USmartObjectComponent* ABaseAIPawn::GetCurrentSOComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.GetCurrentSOComponent");

	ABaseAIPawn_GetCurrentSOComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.PostReplicationSOUpdate
// (Final, Native, Private)

void ABaseAIPawn::PostReplicationSOUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.PostReplicationSOUpdate");

	ABaseAIPawn_PostReplicationSOUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIPawn.FinishSOAction
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class USOActionLatentBase*     Action                         (Parm)
// bool                           bAborted                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::FinishSOAction(class USOActionLatentBase* Action, bool bAborted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.FinishSOAction");

	ABaseAIPawn_FinishSOAction_Params params;
	params.Action = Action;
	params.bAborted = bAborted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.AbortSOUsage
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class USmartObjectComponent*   SO                             (OptionalParm, Parm, EditInline)
// int                            EntryId                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::AbortSOUsage(class USmartObjectComponent* SO, int EntryId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.AbortSOUsage");

	ABaseAIPawn_AbortSOUsage_Params params;
	params.SO = SO;
	params.EntryId = EntryId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.UnClaim
// (Final, Native, Public)
// Parameters:
// class USmartObjectComponent*   SO                             (Parm, EditInline)
// int                            EntryIdx                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::UnClaim(class USmartObjectComponent* SO, int EntryIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.UnClaim");

	ABaseAIPawn_UnClaim_Params params;
	params.SO = SO;
	params.EntryIdx = EntryIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.Claim
// (Final, Native, Public)
// Parameters:
// class USmartObjectComponent*   SO                             (Parm, EditInline)
// int                            EntryIdx                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::Claim(class USmartObjectComponent* SO, int EntryIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.Claim");

	ABaseAIPawn_Claim_Params params;
	params.SO = SO;
	params.EntryIdx = EntryIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.IsUsingSO
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class USmartObjectComponent*   SO                             (OptionalParm, Parm, EditInline)
// int                            EntryId                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::IsUsingSO(class USmartObjectComponent* SO, int EntryId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.IsUsingSO");

	ABaseAIPawn_IsUsingSO_Params params;
	params.SO = SO;
	params.EntryId = EntryId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.UseSO
// (Final, Native, Public)
// Parameters:
// struct FSOInfo                 SOToUse                        (Parm)
// TScriptInterface<class USOObserver> Observer                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::UseSO(const struct FSOInfo& SOToUse, const TScriptInterface<class USOObserver>& Observer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.UseSO");

	ABaseAIPawn_UseSO_Params params;
	params.SOToUse = SOToUse;
	params.Observer = Observer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.AdjustSelectionRating
// (Event, Public)
// Parameters:
// float                          Rating                         (Parm)
// class APawn*                   Target                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABaseAIPawn::AdjustSelectionRating(float Rating, class APawn* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.AdjustSelectionRating");

	ABaseAIPawn_AdjustSelectionRating_Params params;
	params.Rating = Rating;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.HasPawnProp
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EPawnProp>         Prop                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABaseAIPawn::HasPawnProp(TEnumAsByte<EPawnProp> Prop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.HasPawnProp");

	ABaseAIPawn_HasPawnProp_Params params;
	params.Prop = Prop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseAIPawn.SetPawnProp
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EPawnProp>         Prop                           (Parm)
// bool                           bValue                         (Parm)

void ABaseAIPawn::SetPawnProp(TEnumAsByte<EPawnProp> Prop, bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIPawn.SetPawnProp");

	ABaseAIPawn_SetPawnProp_Params params;
	params.Prop = Prop;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseAIRoute.GetPath
// (Final, Native, Public)
// Parameters:
// class UNavigationPath*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UNavigationPath* ABaseAIRoute::GetPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseAIRoute.GetPath");

	ABaseAIRoute_GetPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BaseWeapon.UpdateFiringInfo
// (Defined, Simulated, Public)
// Parameters:
// bool                           bFiring                        (Parm)

void ABaseWeapon::UpdateFiringInfo(bool bFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseWeapon.UpdateFiringInfo");

	ABaseWeapon_UpdateFiringInfo_Params params;
	params.bFiring = bFiring;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseWeapon.ForceWeaponReady
// (Event, Public)

void ABaseWeapon::ForceWeaponReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseWeapon.ForceWeaponReady");

	ABaseWeapon_ForceWeaponReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseWeapon.CacheAIController
// (Defined, Simulated, Public)

void ABaseWeapon::CacheAIController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseWeapon.CacheAIController");

	ABaseWeapon_CacheAIController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BaseWeapon.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void ABaseWeapon::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BaseWeapon.ReplicatedEvent");

	ABaseWeapon_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.LatentActionObserver.OnLatentFinished
// (Native, Public)
// Parameters:
// class ABaseAIController*       Observer                       (Parm)
// class UObject*                 Action                         (Parm)
// unsigned char                  FinishResult                   (Parm)

void ULatentActionObserver::OnLatentFinished(class ABaseAIController* Observer, class UObject* Action, unsigned char FinishResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.LatentActionObserver.OnLatentFinished");

	ULatentActionObserver_OnLatentFinished_Params params;
	params.Observer = Observer;
	params.Action = Action;
	params.FinishResult = FinishResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.NotifyPathChanged
// (Event, Public)

void ABlackBoard::NotifyPathChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.NotifyPathChanged");

	ABlackBoard_NotifyPathChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.InitNavigationHandle
// (Defined, Simulated, Public)

void ABlackBoard::InitNavigationHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.InitNavigationHandle");

	ABlackBoard_InitNavigationHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.ScriptInit
// (Defined, Event, Public)

void ABlackBoard::ScriptInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.ScriptInit");

	ABlackBoard_ScriptInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.GetPreconditionsDescriptionString
// (Final, Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ABlackBoard::GetPreconditionsDescriptionString()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetPreconditionsDescriptionString");

	ABlackBoard_GetPreconditionsDescriptionString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BlackBoard.Initialize
// (Final, Native, Public)
// Parameters:
// int                            NumProps                       (Parm)

void ABlackBoard::Initialize(int NumProps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.Initialize");

	ABlackBoard_Initialize_Params params;
	params.NumProps = NumProps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.GetWSPropObjectInt
// (Final, Native, Public, HasOutParms)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// class UObject*                 Value                          (Parm, OutParm)
// int                            Param                          (Parm, OutParm)

void ABlackBoard::GetWSPropObjectInt(TEnumAsByte<EWSKProp> Key, class UObject** Value, int* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSPropObjectInt");

	ABlackBoard_GetWSPropObjectInt_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Param != nullptr)
		*Param = params.Param;
}


// Function BaseAI.BlackBoard.GetWSPropObjectFloat
// (Final, Native, Public, HasOutParms)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// class UObject*                 Value                          (Parm, OutParm)
// float                          Param                          (Parm, OutParm)

void ABlackBoard::GetWSPropObjectFloat(TEnumAsByte<EWSKProp> Key, class UObject** Value, float* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSPropObjectFloat");

	ABlackBoard_GetWSPropObjectFloat_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Param != nullptr)
		*Param = params.Param;
}


// Function BaseAI.BlackBoard.GetWSPropTime
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABlackBoard::GetWSPropTime(TEnumAsByte<EWSKProp> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSPropTime");

	ABlackBoard_GetWSPropTime_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BlackBoard.GetWSPropName
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ABlackBoard::GetWSPropName(TEnumAsByte<EWSKProp> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSPropName");

	ABlackBoard_GetWSPropName_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BlackBoard.GetWSPropObject
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* ABlackBoard::GetWSPropObject(TEnumAsByte<EWSKProp> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSPropObject");

	ABlackBoard_GetWSPropObject_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BlackBoard.GetWSPropVector
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ABlackBoard::GetWSPropVector(TEnumAsByte<EWSKProp> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSPropVector");

	ABlackBoard_GetWSPropVector_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BlackBoard.GetWSPropFloat
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float ABlackBoard::GetWSPropFloat(TEnumAsByte<EWSKProp> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSPropFloat");

	ABlackBoard_GetWSPropFloat_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BlackBoard.GetWSPropETQ
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ABlackBoard::GetWSPropETQ(TEnumAsByte<EWSKProp> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSPropETQ");

	ABlackBoard_GetWSPropETQ_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BlackBoard.GetWSPropInt
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ABlackBoard::GetWSPropInt(TEnumAsByte<EWSKProp> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSPropInt");

	ABlackBoard_GetWSPropInt_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BlackBoard.GetWSPropBool
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ABlackBoard::GetWSPropBool(TEnumAsByte<EWSKProp> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSPropBool");

	ABlackBoard_GetWSPropBool_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BlackBoard.DescribeWSProperty
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ABlackBoard::DescribeWSProperty(TEnumAsByte<EWSKProp> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.DescribeWSProperty");

	ABlackBoard_DescribeWSProperty_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BlackBoard.GetWSProperties
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<TEnumAsByte<EWSKProp>>  Keys                           (Parm, OutParm, NeedCtorLink)

void ABlackBoard::GetWSProperties(TArray<TEnumAsByte<EWSKProp>>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSProperties");

	ABlackBoard_GetWSProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keys != nullptr)
		*Keys = params.Keys;
}


// Function BaseAI.BlackBoard.GetWSPropType
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// TEnumAsByte<EWorldStatePropType> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EWorldStatePropType> ABlackBoard::GetWSPropType(TEnumAsByte<EWSKProp> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.GetWSPropType");

	ABlackBoard_GetWSPropType_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BlackBoard.SetWSPropTime
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// float                          Value                          (Parm)

void ABlackBoard::SetWSPropTime(TEnumAsByte<EWSKProp> Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.SetWSPropTime");

	ABlackBoard_SetWSPropTime_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.SetWSPropObjectInt
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// class UObject*                 Value                          (Parm)
// int                            Param                          (Parm)

void ABlackBoard::SetWSPropObjectInt(TEnumAsByte<EWSKProp> Key, class UObject* Value, int Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.SetWSPropObjectInt");

	ABlackBoard_SetWSPropObjectInt_Params params;
	params.Key = Key;
	params.Value = Value;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.SetWSPropObjectFloat
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// class UObject*                 Value                          (Parm)
// float                          Param                          (Parm)

void ABlackBoard::SetWSPropObjectFloat(TEnumAsByte<EWSKProp> Key, class UObject* Value, float Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.SetWSPropObjectFloat");

	ABlackBoard_SetWSPropObjectFloat_Params params;
	params.Key = Key;
	params.Value = Value;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.SetWSPropName
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// struct FName                   Value                          (Parm)

void ABlackBoard::SetWSPropName(TEnumAsByte<EWSKProp> Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.SetWSPropName");

	ABlackBoard_SetWSPropName_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.SetWSPropObject
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// class UObject*                 Value                          (Parm)

void ABlackBoard::SetWSPropObject(TEnumAsByte<EWSKProp> Key, class UObject* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.SetWSPropObject");

	ABlackBoard_SetWSPropObject_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.SetWSPropVector
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// struct FVector                 Value                          (Parm)

void ABlackBoard::SetWSPropVector(TEnumAsByte<EWSKProp> Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.SetWSPropVector");

	ABlackBoard_SetWSPropVector_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.SetWSPropFloat
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// float                          Value                          (Parm)

void ABlackBoard::SetWSPropFloat(TEnumAsByte<EWSKProp> Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.SetWSPropFloat");

	ABlackBoard_SetWSPropFloat_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.SetWSPropETQ
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// int                            Value                          (Parm)

void ABlackBoard::SetWSPropETQ(TEnumAsByte<EWSKProp> Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.SetWSPropETQ");

	ABlackBoard_SetWSPropETQ_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.SetWSPropInt
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// int                            Value                          (Parm)

void ABlackBoard::SetWSPropInt(TEnumAsByte<EWSKProp> Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.SetWSPropInt");

	ABlackBoard_SetWSPropInt_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BlackBoard.SetWSPropBool
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// bool                           Value                          (Parm)

void ABlackBoard::SetWSPropBool(TEnumAsByte<EWSKProp> Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BlackBoard.SetWSPropBool");

	ABlackBoard_SetWSPropBool_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTDebugInfo.DrawDebug
// (Defined, Static, Public, HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// class UBTPersonalInstance*     PersonalBT                     (Parm)

void UBTDebugInfo::STATIC_DrawDebug(class UCanvas* Canvas, class UBTPersonalInstance* PersonalBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTDebugInfo.DrawDebug");

	UBTDebugInfo_DrawDebug_Params params;
	params.Canvas = Canvas;
	params.PersonalBT = PersonalBT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTDecorator.GetDecoratorDescription
// (Defined, Event, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UBTDecorator::GetDecoratorDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTDecorator.GetDecoratorDescription");

	UBTDecorator_GetDecoratorDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTDecorator.GetDebugInfo
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// struct FBTDecoratorDebugInfo   ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FBTDecoratorDebugInfo UBTDecorator::GetDebugInfo(class UBTPersonalInstance* PersonalBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTDecorator.GetDebugInfo");

	UBTDecorator_GetDebugInfo_Params params;
	params.PersonalBT = PersonalBT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTDecorator.OnNodeAborted
// (Native, Event, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTNode*                 AbortedNode                    (Parm)

void UBTDecorator::OnNodeAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* AbortedNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTDecorator.OnNodeAborted");

	UBTDecorator_OnNodeAborted_Params params;
	params.PersonalBT = PersonalBT;
	params.AbortedNode = AbortedNode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTDecorator.OnNodeExecuted
// (Native, Event, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// TEnumAsByte<EBTResult>         _Result                        (Parm)

void UBTDecorator::OnNodeExecuted(class UBTPersonalInstance* PersonalBT, TEnumAsByte<EBTResult> _Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTDecorator.OnNodeExecuted");

	UBTDecorator_OnNodeExecuted_Params params;
	params.PersonalBT = PersonalBT;
	params._Result = _Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTDecorator.OnExecutionEnd
// (Native, Event, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// TEnumAsByte<EBTResult>         _Result                        (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTDecorator::OnExecutionEnd(class UBTPersonalInstance* PersonalBT, TEnumAsByte<EBTResult> _Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTDecorator.OnExecutionEnd");

	UBTDecorator_OnExecutionEnd_Params params;
	params.PersonalBT = PersonalBT;
	params._Result = _Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTDecorator.OnExecutionStart
// (Native, Event, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTDecorator::OnExecutionStart(class UBTPersonalInstance* PersonalBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTDecorator.OnExecutionStart");

	UBTDecorator_OnExecutionStart_Params params;
	params.PersonalBT = PersonalBT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTDecoratorCondition.PropertyChanged
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// bool                           bPreviousValue                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTDecoratorCondition::PropertyChanged(class UBTPersonalInstance* PersonalBT, TEnumAsByte<EWSKProp> Key, bool bPreviousValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTDecoratorCondition.PropertyChanged");

	UBTDecoratorCondition_PropertyChanged_Params params;
	params.PersonalBT = PersonalBT;
	params.Key = Key;
	params.bPreviousValue = bPreviousValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTDecoratorConditionBBDot.GetDecoratorDescription
// (Defined, Event, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UBTDecoratorConditionBBDot::GetDecoratorDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTDecoratorConditionBBDot.GetDecoratorDescription");

	UBTDecoratorConditionBBDot_GetDecoratorDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTDecoratorConditionMovementLocked.GetDecoratorDescription
// (Defined, Event, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UBTDecoratorConditionMovementLocked::GetDecoratorDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTDecoratorConditionMovementLocked.GetDecoratorDescription");

	UBTDecoratorConditionMovementLocked_GetDecoratorDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTManager.IsTimeSliced
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTManager::IsTimeSliced()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTManager.IsTimeSliced");

	UBTManager_IsTimeSliced_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTManager.ToggleTimeSlicing
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTManager::ToggleTimeSlicing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTManager.ToggleTimeSlicing");

	UBTManager_ToggleTimeSlicing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTManager.LoadTreeFromScript
// (Native, Public)
// Parameters:
// struct FName                   TreeName                       (Parm)
// class UBTCompositeNode*        TreeRoot                       (Parm)
// class UBTTemplate*             ReturnValue                    (Parm, OutParm, ReturnParm)

class UBTTemplate* UBTManager::LoadTreeFromScript(const struct FName& TreeName, class UBTCompositeNode* TreeRoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTManager.LoadTreeFromScript");

	UBTManager_LoadTreeFromScript_Params params;
	params.TreeName = TreeName;
	params.TreeRoot = TreeRoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTManager.GetTree
// (Native, Public)
// Parameters:
// struct FName                   TreeName                       (Parm)
// class UBTTemplate*             ReturnValue                    (Parm, OutParm, ReturnParm)

class UBTTemplate* UBTManager::GetTree(const struct FName& TreeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTManager.GetTree");

	UBTManager_GetTree_Params params;
	params.TreeName = TreeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTManager.GetInstance
// (Native, Static, Public)
// Parameters:
// class UBTManager*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UBTManager* UBTManager::STATIC_GetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTManager.GetInstance");

	UBTManager_GetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTNode.AddDebugInfo
// (Native, Public, HasOutParms)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// TArray<struct FBTNodeDebugInfo> DebugInfoList                  (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UBTNode::AddDebugInfo(class UBTPersonalInstance* PersonalBT, TArray<struct FBTNodeDebugInfo>* DebugInfoList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTNode.AddDebugInfo");

	UBTNode_AddDebugInfo_Params params;
	params.PersonalBT = PersonalBT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugInfoList != nullptr)
		*DebugInfoList = params.DebugInfoList;

	return params.ReturnValue;
}


// Function BaseAI.BTNode.IsDescendantOf
// (Final, Native, Public)
// Parameters:
// class UBTNode*                 Ancestor                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTNode::IsDescendantOf(class UBTNode* Ancestor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTNode.IsDescendantOf");

	UBTNode_IsDescendantOf_Params params;
	params.Ancestor = Ancestor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTNode.Abort
// (Native, HasOptionalParms, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTPersonalNode*         PersonalTask                   (Parm)
// TEnumAsByte<EBTResult>         _Result                        (OptionalParm, Parm)

void UBTNode::Abort(class UBTPersonalInstance* PersonalBT, class UBTPersonalNode* PersonalTask, TEnumAsByte<EBTResult> _Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTNode.Abort");

	UBTNode_Abort_Params params;
	params.PersonalBT = PersonalBT;
	params.PersonalTask = PersonalTask;
	params._Result = _Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTNode.Execute
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTNode::Execute(class UBTPersonalInstance* PersonalBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTNode.Execute");

	UBTNode_Execute_Params params;
	params.PersonalBT = PersonalBT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTNode.OnExecute
// (Native, Event, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTNode::OnExecute(class UBTPersonalInstance* PersonalBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTNode.OnExecute");

	UBTNode_OnExecute_Params params;
	params.PersonalBT = PersonalBT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTCompositeNode.ChildExecutionAborted
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTNode*                 Node                           (Parm)
// TEnumAsByte<EBTResult>         ExecResult                     (Parm)
// bool                           bFinalAbort                    (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTCompositeNode::ChildExecutionAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult, bool bFinalAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTCompositeNode.ChildExecutionAborted");

	UBTCompositeNode_ChildExecutionAborted_Params params;
	params.PersonalBT = PersonalBT;
	params.Node = Node;
	params.ExecResult = ExecResult;
	params.bFinalAbort = bFinalAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTCompositeNode.ChildExecutionFinished
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTNode*                 Node                           (Parm)
// TEnumAsByte<EBTResult>         ExecResult                     (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTCompositeNode::ChildExecutionFinished(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTCompositeNode.ChildExecutionFinished");

	UBTCompositeNode_ChildExecutionFinished_Params params;
	params.PersonalBT = PersonalBT;
	params.Node = Node;
	params.ExecResult = ExecResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTCompositeNode.GetChildCount
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UBTCompositeNode::GetChildCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTCompositeNode.GetChildCount");

	UBTCompositeNode_GetChildCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTCompositeNode.AddDecorator
// (Final, Native, Public)
// Parameters:
// int                            ChildIndex                     (Parm)
// class UBTDecorator*            Decorator                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTCompositeNode::AddDecorator(int ChildIndex, class UBTDecorator* Decorator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTCompositeNode.AddDecorator");

	UBTCompositeNode_AddDecorator_Params params;
	params.ChildIndex = ChildIndex;
	params.Decorator = Decorator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTCompositeNode.AddChild
// (Native, Public)
// Parameters:
// class UBTNode*                 Child                          (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UBTCompositeNode::AddChild(class UBTNode* Child)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTCompositeNode.AddChild");

	UBTCompositeNode_AddChild_Params params;
	params.Child = Child;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTParallel.ChildExecutionAborted
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTNode*                 Node                           (Parm)
// TEnumAsByte<EBTResult>         ExecResult                     (Parm)
// bool                           bFinalAbort                    (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTParallel::ChildExecutionAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult, bool bFinalAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTParallel.ChildExecutionAborted");

	UBTParallel_ChildExecutionAborted_Params params;
	params.PersonalBT = PersonalBT;
	params.Node = Node;
	params.ExecResult = ExecResult;
	params.bFinalAbort = bFinalAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTParallel.ChildExecutionFinished
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTNode*                 Node                           (Parm)
// TEnumAsByte<EBTResult>         ExecResult                     (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTParallel::ChildExecutionFinished(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTParallel.ChildExecutionFinished");

	UBTParallel_ChildExecutionFinished_Params params;
	params.PersonalBT = PersonalBT;
	params.Node = Node;
	params.ExecResult = ExecResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTRandom.AddRandomChild
// (Final, Native, Public)
// Parameters:
// class UBTNode*                 Child                          (Parm)
// float                          Weight                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UBTRandom::AddRandomChild(class UBTNode* Child, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTRandom.AddRandomChild");

	UBTRandom_AddRandomChild_Params params;
	params.Child = Child;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTRandom.ChildExecutionAborted
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTNode*                 Node                           (Parm)
// TEnumAsByte<EBTResult>         ExecResult                     (Parm)
// bool                           bFinalAbort                    (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTRandom::ChildExecutionAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult, bool bFinalAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTRandom.ChildExecutionAborted");

	UBTRandom_ChildExecutionAborted_Params params;
	params.PersonalBT = PersonalBT;
	params.Node = Node;
	params.ExecResult = ExecResult;
	params.bFinalAbort = bFinalAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTRandom.ChildExecutionFinished
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTNode*                 Node                           (Parm)
// TEnumAsByte<EBTResult>         ExecResult                     (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTRandom::ChildExecutionFinished(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTRandom.ChildExecutionFinished");

	UBTRandom_ChildExecutionFinished_Params params;
	params.PersonalBT = PersonalBT;
	params.Node = Node;
	params.ExecResult = ExecResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTSelector.ChildExecutionAborted
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTNode*                 Node                           (Parm)
// TEnumAsByte<EBTResult>         ExecResult                     (Parm)
// bool                           bFinalAbort                    (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTSelector::ChildExecutionAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult, bool bFinalAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTSelector.ChildExecutionAborted");

	UBTSelector_ChildExecutionAborted_Params params;
	params.PersonalBT = PersonalBT;
	params.Node = Node;
	params.ExecResult = ExecResult;
	params.bFinalAbort = bFinalAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTSelector.ChildExecutionFinished
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTNode*                 Node                           (Parm)
// TEnumAsByte<EBTResult>         ExecResult                     (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTSelector::ChildExecutionFinished(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTSelector.ChildExecutionFinished");

	UBTSelector_ChildExecutionFinished_Params params;
	params.PersonalBT = PersonalBT;
	params.Node = Node;
	params.ExecResult = ExecResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTSequence.ChildExecutionAborted
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTNode*                 Node                           (Parm)
// TEnumAsByte<EBTResult>         ExecResult                     (Parm)
// bool                           bFinalAbort                    (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTSequence::ChildExecutionAborted(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult, bool bFinalAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTSequence.ChildExecutionAborted");

	UBTSequence_ChildExecutionAborted_Params params;
	params.PersonalBT = PersonalBT;
	params.Node = Node;
	params.ExecResult = ExecResult;
	params.bFinalAbort = bFinalAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTSequence.ChildExecutionFinished
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTNode*                 Node                           (Parm)
// TEnumAsByte<EBTResult>         ExecResult                     (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTSequence::ChildExecutionFinished(class UBTPersonalInstance* PersonalBT, class UBTNode* Node, TEnumAsByte<EBTResult> ExecResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTSequence.ChildExecutionFinished");

	UBTSequence_ChildExecutionFinished_Params params;
	params.PersonalBT = PersonalBT;
	params.Node = Node;
	params.ExecResult = ExecResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTTask.OnLatentTaskFinished
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTPersonalNode*         PersonalTask                   (Parm)
// class ABaseAIController*       Observer                       (Parm)
// class UObject*                 Action                         (Parm)
// unsigned char                  FinishResult                   (Parm)

void UBTTask::OnLatentTaskFinished(class UBTPersonalInstance* PersonalBT, class UBTPersonalNode* PersonalTask, class ABaseAIController* Observer, class UObject* Action, unsigned char FinishResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTTask.OnLatentTaskFinished");

	UBTTask_OnLatentTaskFinished_Params params;
	params.PersonalBT = PersonalBT;
	params.PersonalTask = PersonalTask;
	params.Observer = Observer;
	params.Action = Action;
	params.FinishResult = FinishResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTTask.Finish
// (Native, Protected)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// class UBTPersonalNode*         PersonalTask                   (Parm)
// TEnumAsByte<EBTResult>         TaskResult                     (Parm)

void UBTTask::Finish(class UBTPersonalInstance* PersonalBT, class UBTPersonalNode* PersonalTask, TEnumAsByte<EBTResult> TaskResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTTask.Finish");

	UBTTask_Finish_Params params;
	params.PersonalBT = PersonalBT;
	params.PersonalTask = PersonalTask;
	params.TaskResult = TaskResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTTaskPlaySound.OnExecute
// (Defined, Event, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// TEnumAsByte<EBTResult>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTResult> UBTTaskPlaySound::OnExecute(class UBTPersonalInstance* PersonalBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTTaskPlaySound.OnExecute");

	UBTTaskPlaySound_OnExecute_Params params;
	params.PersonalBT = PersonalBT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTTaskRunETQuery.QueryFinished
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UBTTaskRunETQuery::QueryFinished(class UBTPersonalInstance* PersonalBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTTaskRunETQuery.QueryFinished");

	UBTTaskRunETQuery_QueryFinished_Params params;
	params.PersonalBT = PersonalBT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTObserver.OnBTAbortedFinished
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)

void UBTObserver::OnBTAbortedFinished(class UBTPersonalInstance* PersonalBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTObserver.OnBTAbortedFinished");

	UBTObserver_OnBTAbortedFinished_Params params;
	params.PersonalBT = PersonalBT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTObserver.OnBTExecutionFinished
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     PersonalBT                     (Parm)
// TEnumAsByte<EBTResult>         ExecutionResult                (Parm)

void UBTObserver::OnBTExecutionFinished(class UBTPersonalInstance* PersonalBT, TEnumAsByte<EBTResult> ExecutionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTObserver.OnBTExecutionFinished");

	UBTObserver_OnBTExecutionFinished_Params params;
	params.PersonalBT = PersonalBT;
	params.ExecutionResult = ExecutionResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.AddDebugInfo
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FBTNodeDebugInfo> DebugList                      (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UBTPersonalInstance::AddDebugInfo(TArray<struct FBTNodeDebugInfo>* DebugList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.AddDebugInfo");

	UBTPersonalInstance_AddDebugInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugList != nullptr)
		*DebugList = params.DebugList;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.GetBehaviorTrace
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<class UBTNode*>         TraceStack                     (Parm, OutParm, NeedCtorLink)

void UBTPersonalInstance::GetBehaviorTrace(TArray<class UBTNode*>* TraceStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.GetBehaviorTrace");

	UBTPersonalInstance_GetBehaviorTrace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraceStack != nullptr)
		*TraceStack = params.TraceStack;
}


// Function BaseAI.BTPersonalInstance.IsFiringAllowed
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTPersonalInstance::IsFiringAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.IsFiringAllowed");

	UBTPersonalInstance_IsFiringAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.GetTreeName
// (Defined, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UBTPersonalInstance::GetTreeName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.GetTreeName");

	UBTPersonalInstance_GetTreeName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.GetACurrentNode
// (Final, Native, Public)
// Parameters:
// class UBTNode*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UBTNode* UBTPersonalInstance::GetACurrentNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.GetACurrentNode");

	UBTPersonalInstance_GetACurrentNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.GetACurrentTask
// (Final, Native, Public)
// Parameters:
// class UBTTask*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UBTTask* UBTPersonalInstance::GetACurrentTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.GetACurrentTask");

	UBTPersonalInstance_GetACurrentTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.OnEvent
// (Final, Native, Public)
// Parameters:
// struct FName                   EventName                      (Parm)

void UBTPersonalInstance::OnEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.OnEvent");

	UBTPersonalInstance_OnEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.CreateNewPreconditions
// (Final, Native, Public)

void UBTPersonalInstance::CreateNewPreconditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.CreateNewPreconditions");

	UBTPersonalInstance_CreateNewPreconditions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.ClearETQTasks
// (Final, Native, Public)

void UBTPersonalInstance::ClearETQTasks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.ClearETQTasks");

	UBTPersonalInstance_ClearETQTasks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.UnRegisterETQTask
// (Final, Native, Public)
// Parameters:
// int                            QueryIndex                     (Parm)

void UBTPersonalInstance::UnRegisterETQTask(int QueryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.UnRegisterETQTask");

	UBTPersonalInstance_UnRegisterETQTask_Params params;
	params.QueryIndex = QueryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.RegisterETQTask
// (Final, Native, Public)
// Parameters:
// int                            QueryIndex                     (Parm)
// class UBTTaskRunETQuery*       ETQTask                        (Parm)

void UBTPersonalInstance::RegisterETQTask(int QueryIndex, class UBTTaskRunETQuery* ETQTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.RegisterETQTask");

	UBTPersonalInstance_RegisterETQTask_Params params;
	params.QueryIndex = QueryIndex;
	params.ETQTask = ETQTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.UnRegisterSubTreeTask
// (Final, Native, Private)
// Parameters:
// class UBTPersonalNode*         SubTreeTask                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTPersonalInstance::UnRegisterSubTreeTask(class UBTPersonalNode* SubTreeTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.UnRegisterSubTreeTask");

	UBTPersonalInstance_UnRegisterSubTreeTask_Params params;
	params.SubTreeTask = SubTreeTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.RegisterSubTreeTask
// (Final, Native, Private)
// Parameters:
// class UBTPersonalNode*         SubTreeTask                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTPersonalInstance::RegisterSubTreeTask(class UBTPersonalNode* SubTreeTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.RegisterSubTreeTask");

	UBTPersonalInstance_RegisterSubTreeTask_Params params;
	params.SubTreeTask = SubTreeTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.UnRegisterLatentTask
// (Final, Native, Private)
// Parameters:
// class UBTPersonalNode*         LatentTask                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTPersonalInstance::UnRegisterLatentTask(class UBTPersonalNode* LatentTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.UnRegisterLatentTask");

	UBTPersonalInstance_UnRegisterLatentTask_Params params;
	params.LatentTask = LatentTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.RegisterLatentTask
// (Final, Native, Private)
// Parameters:
// class UBTPersonalNode*         LatentTask                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTPersonalInstance::RegisterLatentTask(class UBTPersonalNode* LatentTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.RegisterLatentTask");

	UBTPersonalInstance_RegisterLatentTask_Params params;
	params.LatentTask = LatentTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.GetActiveTask
// (Final, Native, Public)
// Parameters:
// class UBTNode*                 Task                           (Parm)
// class UBTPersonalNode*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UBTPersonalNode* UBTPersonalInstance::GetActiveTask(class UBTNode* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.GetActiveTask");

	UBTPersonalInstance_GetActiveTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.IsActiveTask
// (Final, Native, Public)
// Parameters:
// class UBTNode*                 Task                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTPersonalInstance::IsActiveTask(class UBTNode* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.IsActiveTask");

	UBTPersonalInstance_IsActiveTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.UnreservePersonalNode
// (Final, Native, Public)
// Parameters:
// class UBTNode*                 Node                           (Parm)

void UBTPersonalInstance::UnreservePersonalNode(class UBTNode* Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.UnreservePersonalNode");

	UBTPersonalInstance_UnreservePersonalNode_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.ReservePersonalNode
// (Final, Native, Public)
// Parameters:
// class UBTNode*                 Node                           (Parm)
// class UObject*                 LatentAction                   (Parm)
// class UBTPersonalNode*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UBTPersonalNode* UBTPersonalInstance::ReservePersonalNode(class UBTNode* Node, class UObject* LatentAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.ReservePersonalNode");

	UBTPersonalInstance_ReservePersonalNode_Params params;
	params.Node = Node;
	params.LatentAction = LatentAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.TaskFinished
// (Final, Native, Public)
// Parameters:
// class UBTPersonalNode*         Task                           (Parm)
// TEnumAsByte<EBTResult>         TaskResult                     (Parm)

void UBTPersonalInstance::TaskFinished(class UBTPersonalNode* Task, TEnumAsByte<EBTResult> TaskResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.TaskFinished");

	UBTPersonalInstance_TaskFinished_Params params;
	params.Task = Task;
	params.TaskResult = TaskResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.TaskStarted
// (Final, Native, Public)
// Parameters:
// class UBTNode*                 Task                           (Parm)
// class UBTPersonalNode*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UBTPersonalNode* UBTPersonalInstance::TaskStarted(class UBTNode* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.TaskStarted");

	UBTPersonalInstance_TaskStarted_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.TreeExecutionFinished
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EBTResult>         EndResult                      (Parm)

void UBTPersonalInstance::TreeExecutionFinished(TEnumAsByte<EBTResult> EndResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.TreeExecutionFinished");

	UBTPersonalInstance_TreeExecutionFinished_Params params;
	params.EndResult = EndResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.OverrideSuspendedCounter
// (Final, Native, Public)
// Parameters:
// int                            NewValue                       (Parm)

void UBTPersonalInstance::OverrideSuspendedCounter(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.OverrideSuspendedCounter");

	UBTPersonalInstance_OverrideSuspendedCounter_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.ResumeTree
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bForce                         (OptionalParm, Parm)
// TEnumAsByte<EBTStatus>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTStatus> UBTPersonalInstance::ResumeTree(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.ResumeTree");

	UBTPersonalInstance_ResumeTree_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.SuspendTree
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EBTStatus>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTStatus> UBTPersonalInstance::SuspendTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.SuspendTree");

	UBTPersonalInstance_SuspendTree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.SetTree
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class UBTNode*                 NewTree                        (Parm)
// int                            MemorySize                     (Parm)
// int                            MaxIndex                       (Parm)
// struct FName                   DebugName                      (OptionalParm, Parm)

void UBTPersonalInstance::SetTree(class UBTNode* NewTree, int MemorySize, int MaxIndex, const struct FName& DebugName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.SetTree");

	UBTPersonalInstance_SetTree_Params params;
	params.NewTree = NewTree;
	params.MemorySize = MemorySize;
	params.MaxIndex = MaxIndex;
	params.DebugName = DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.FinishTree
// (Final, Native, Public)

void UBTPersonalInstance::FinishTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.FinishTree");

	UBTPersonalInstance_FinishTree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.AbortTree
// (Final, Native, Public)

void UBTPersonalInstance::AbortTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.AbortTree");

	UBTPersonalInstance_AbortTree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.StopTree
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bFinalStop                     (OptionalParm, Parm)

void UBTPersonalInstance::StopTree(bool bFinalStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.StopTree");

	UBTPersonalInstance_StopTree_Params params;
	params.bFinalStop = bFinalStop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.StartFromScratch
// (Final, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UBTPersonalInstance::StartFromScratch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.StartFromScratch");

	UBTPersonalInstance_StartFromScratch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.StartTree
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EBTStatus>         ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EBTStatus> UBTPersonalInstance::StartTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.StartTree");

	UBTPersonalInstance_StartTree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.BTPersonalInstance.ClearMemory
// (Final, Native, Public)

void UBTPersonalInstance::ClearMemory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.ClearMemory");

	UBTPersonalInstance_ClearMemory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalInstance.InitializeMemory
// (Final, Native, Public)
// Parameters:
// int                            MemorySize                     (Parm)
// int                            MaxIndex                       (Parm)

void UBTPersonalInstance::InitializeMemory(int MemorySize, int MaxIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalInstance.InitializeMemory");

	UBTPersonalInstance_InitializeMemory_Params params;
	params.MemorySize = MemorySize;
	params.MaxIndex = MaxIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalNode.OnLatentFinished
// (Native, Public)
// Parameters:
// class ABaseAIController*       Observer                       (Parm)
// class UObject*                 Action                         (Parm)
// unsigned char                  FinishResult                   (Parm)

void UBTPersonalNode::OnLatentFinished(class ABaseAIController* Observer, class UObject* Action, unsigned char FinishResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalNode.OnLatentFinished");

	UBTPersonalNode_OnLatentFinished_Params params;
	params.Observer = Observer;
	params.Action = Action;
	params.FinishResult = FinishResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalNode.ExecutionFinished
// (Final, Native, Public)

void UBTPersonalNode::ExecutionFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalNode.ExecutionFinished");

	UBTPersonalNode_ExecutionFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPersonalNode.AssignNode
// (Final, Native, Public)
// Parameters:
// class UBTNode*                 NewNode                        (Parm)

void UBTPersonalNode::AssignNode(class UBTNode* NewNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPersonalNode.AssignNode");

	UBTPersonalNode_AssignNode_Params params;
	params.NewNode = NewNode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPreconditions.Initialize
// (Native, Public)
// Parameters:
// class UBTPersonalInstance*     inPersonalBT                   (Parm)

void UBTPreconditions::Initialize(class UBTPersonalInstance* inPersonalBT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPreconditions.Initialize");

	UBTPreconditions_Initialize_Params params;
	params.inPersonalBT = inPersonalBT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPreconditions.PopFromBlackBoard
// (Final, Native, Protected)
// Parameters:
// class ABlackBoard*             BB                             (Parm)

void UBTPreconditions::PopFromBlackBoard(class ABlackBoard* BB)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPreconditions.PopFromBlackBoard");

	UBTPreconditions_PopFromBlackBoard_Params params;
	params.BB = BB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPreconditions.PushToBlackBoard
// (Final, Native, Protected)
// Parameters:
// class ABlackBoard*             BB                             (Parm)

void UBTPreconditions::PushToBlackBoard(class ABlackBoard* BB)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPreconditions.PushToBlackBoard");

	UBTPreconditions_PushToBlackBoard_Params params;
	params.BB = BB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPreconditions.Clear
// (Final, Native, Public)

void UBTPreconditions::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPreconditions.Clear");

	UBTPreconditions_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.BTPreconditions.AddMulti
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<TEnumAsByte<EWSKProp>>  Keys                           (Const, Parm, OutParm, NeedCtorLink)
// class UBTDecoratorCondition*   Condition                      (Parm)
// bool                           bValue                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTPreconditions::AddMulti(class UBTDecoratorCondition* Condition, bool bValue, TArray<TEnumAsByte<EWSKProp>>* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPreconditions.AddMulti");

	UBTPreconditions_AddMulti_Params params;
	params.Condition = Condition;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keys != nullptr)
		*Keys = params.Keys;

	return params.ReturnValue;
}


// Function BaseAI.BTPreconditions.Add
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSKProp>          Key                            (Parm)
// class UBTDecoratorCondition*   Condition                      (Parm)
// bool                           bValue                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBTPreconditions::Add(TEnumAsByte<EWSKProp> Key, class UBTDecoratorCondition* Condition, bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.BTPreconditions.Add");

	UBTPreconditions_Add_Params params;
	params.Key = Key;
	params.Condition = Condition;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQResultHandler.HandleResult
// (Native, Public)
// Parameters:
// class ABaseAIController*       AI                             (Parm)
// int                            QueryID                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UETQResultHandler::HandleResult(class ABaseAIController* AI, int QueryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQResultHandler.HandleResult");

	UETQResultHandler_HandleResult_Params params;
	params.AI = AI;
	params.QueryID = QueryID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.Init
// (Event, Public)

void UETQSystem::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.Init");

	UETQSystem_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.ETQSystem.SetEnable
// (Final, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void UETQSystem::SetEnable(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.SetEnable");

	UETQSystem_SetEnable_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.ETQSystem.ResetQueryTemplate
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FETQQueryTemplate       Query                          (Parm, OutParm)

void UETQSystem::ResetQueryTemplate(struct FETQQueryTemplate* Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.ResetQueryTemplate");

	UETQSystem_ResetQueryTemplate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Query != nullptr)
		*Query = params.Query;
}


// Function BaseAI.ETQSystem.ResetOption
// (Final, Defined, Public, HasOutParms)
// Parameters:
// struct FETQOption              Option                         (Parm, OutParm)

void UETQSystem::ResetOption(struct FETQOption* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.ResetOption");

	UETQSystem_ResetOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Option != nullptr)
		*Option = params.Option;
}


// Function BaseAI.ETQSystem.ResetCondition
// (Final, Defined, Public, HasOutParms)
// Parameters:
// struct FETQCondition           Condition                      (Parm, OutParm)

void UETQSystem::ResetCondition(struct FETQCondition* Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.ResetCondition");

	UETQSystem_ResetCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Condition != nullptr)
		*Condition = params.Condition;
}


// Function BaseAI.ETQSystem.ToggleDebugModeShootingPosition
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UETQSystem::ToggleDebugModeShootingPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.ToggleDebugModeShootingPosition");

	UETQSystem_ToggleDebugModeShootingPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.ToggleDebugMode
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EETQDebugMode>     Mode                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UETQSystem::ToggleDebugMode(TEnumAsByte<EETQDebugMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.ToggleDebugMode");

	UETQSystem_ToggleDebugMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.DebugDrawQuery
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// int                            QueryID                        (Parm)
// class APlayerController*       Observer                       (OptionalParm, Parm)

void UETQSystem::DebugDrawQuery(class UCanvas* Canvas, int QueryID, class APlayerController* Observer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.DebugDrawQuery");

	UETQSystem_DebugDrawQuery_Params params;
	params.Canvas = Canvas;
	params.QueryID = QueryID;
	params.Observer = Observer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.ETQSystem.RetainQueryResults
// (Final, Native, Public)
// Parameters:
// int                            QueryID                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UETQSystem::RetainQueryResults(int QueryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.RetainQueryResults");

	UETQSystem_RetainQueryResults_Params params;
	params.QueryID = QueryID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.DiscardQueryResults
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// int                            QueryID                        (Parm)
// class ABaseAIController*       Owner                          (Parm)
// bool                           bForce                         (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UETQSystem::DiscardQueryResults(int QueryID, class ABaseAIController* Owner, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.DiscardQueryResults");

	UETQSystem_DiscardQueryResults_Params params;
	params.QueryID = QueryID;
	params.Owner = Owner;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.CancelQuery
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// int                            QueryID                        (Parm)
// class ABaseAIController*       Owner                          (Parm)
// bool                           bDiscardResults                (Parm)
// bool                           bIsCleaningUp                  (OptionalParm, Parm)

void UETQSystem::CancelQuery(int QueryID, class ABaseAIController* Owner, bool bDiscardResults, bool bIsCleaningUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.CancelQuery");

	UETQSystem_CancelQuery_Params params;
	params.QueryID = QueryID;
	params.Owner = Owner;
	params.bDiscardResults = bDiscardResults;
	params.bIsCleaningUp = bIsCleaningUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.ETQSystem.GetQuery
// (Final, Native, Public)
// Parameters:
// int                            QueryID                        (Parm)
// struct FETQQuery               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FETQQuery UETQSystem::GetQuery(int QueryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.GetQuery");

	UETQSystem_GetQuery_Params params;
	params.QueryID = QueryID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.TestItemValidity
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FETQQueryItem           Item                           (Parm, OutParm)
// int                            QueryID                        (Parm)
// int                            OptionIndex                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UETQSystem::TestItemValidity(int QueryID, int OptionIndex, struct FETQQueryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.TestItemValidity");

	UETQSystem_TestItemValidity_Params params;
	params.QueryID = QueryID;
	params.OptionIndex = OptionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.RunQuery
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   QueryName                      (Parm)
// class AActor*                  context                        (Parm)
// class UObject*                 Observer                       (Parm)
// bool                           bInstantExecution              (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UETQSystem::RunQuery(const struct FName& QueryName, class AActor* context, class UObject* Observer, bool bInstantExecution)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.RunQuery");

	UETQSystem_RunQuery_Params params;
	params.QueryName = QueryName;
	params.context = context;
	params.Observer = Observer;
	params.bInstantExecution = bInstantExecution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.GetQueryName
// (Final, Native, Public)
// Parameters:
// int                            QueryID                        (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UETQSystem::GetQueryName(int QueryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.GetQueryName");

	UETQSystem_GetQueryName_Params params;
	params.QueryID = QueryID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.GetQueryItemPosition
// (Final, Native, Public)
// Parameters:
// int                            QueryID                        (Parm)
// int                            ItemIndex                      (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UETQSystem::GetQueryItemPosition(int QueryID, int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.GetQueryItemPosition");

	UETQSystem_GetQueryItemPosition_Params params;
	params.QueryID = QueryID;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.GetQueryItemActor
// (Final, Native, Public)
// Parameters:
// int                            QueryID                        (Parm)
// int                            ItemIndex                      (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UETQSystem::GetQueryItemActor(int QueryID, int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.GetQueryItemActor");

	UETQSystem_GetQueryItemActor_Params params;
	params.QueryID = QueryID;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.GetQueryItemObject
// (Final, Native, Public)
// Parameters:
// int                            QueryID                        (Parm)
// int                            ItemIndex                      (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UETQSystem::GetQueryItemObject(int QueryID, int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.GetQueryItemObject");

	UETQSystem_GetQueryItemObject_Params params;
	params.QueryID = QueryID;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.SetConditionValueName
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FETQCondition           out_Condition                  (Parm, OutParm)
// struct FName                   Value                          (Parm)
// class UETQSystem*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UETQSystem* UETQSystem::SetConditionValueName(const struct FName& Value, struct FETQCondition* out_Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.SetConditionValueName");

	UETQSystem_SetConditionValueName_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Condition != nullptr)
		*out_Condition = params.out_Condition;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.SetConditionValueFloat
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FETQCondition           out_Condition                  (Parm, OutParm)
// float                          fValue                         (Parm)
// class UETQSystem*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UETQSystem* UETQSystem::SetConditionValueFloat(float fValue, struct FETQCondition* out_Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.SetConditionValueFloat");

	UETQSystem_SetConditionValueFloat_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Condition != nullptr)
		*out_Condition = params.out_Condition;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.SetConditionValueInt
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FETQCondition           out_Condition                  (Parm, OutParm)
// int                            nValue                         (Parm)
// class UETQSystem*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UETQSystem* UETQSystem::SetConditionValueInt(int nValue, struct FETQCondition* out_Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.SetConditionValueInt");

	UETQSystem_SetConditionValueInt_Params params;
	params.nValue = nValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Condition != nullptr)
		*out_Condition = params.out_Condition;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.SetConditionValueBool
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FETQCondition           out_Condition                  (Parm, OutParm)
// bool                           bValue                         (Parm)
// class UETQSystem*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UETQSystem* UETQSystem::SetConditionValueBool(bool bValue, struct FETQCondition* out_Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.SetConditionValueBool");

	UETQSystem_SetConditionValueBool_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Condition != nullptr)
		*out_Condition = params.out_Condition;

	return params.ReturnValue;
}


// Function BaseAI.ETQSystem.RegisterQueryTemplate
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FETQQueryTemplate       out_Query                      (Parm, OutParm)
// class UETQTemplate*            SourceObject                   (Parm)
// class UETQSystem*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UETQSystem* UETQSystem::RegisterQueryTemplate(class UETQTemplate* SourceObject, struct FETQQueryTemplate* out_Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQSystem.RegisterQueryTemplate");

	UETQSystem_RegisterQueryTemplate_Params params;
	params.SourceObject = SourceObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Query != nullptr)
		*out_Query = params.out_Query;

	return params.ReturnValue;
}


// Function BaseAI.ETQTemplate.GetQueryName
// (Defined, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UETQTemplate::GetQueryName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.ETQTemplate.GetQueryName");

	UETQTemplate_GetQueryName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.PluginBase.DrawDebug
// (Event, Public)
// Parameters:
// class AHUD*                    H                              (Parm)
// struct FName                   Category                       (Parm)

void UPluginBase::DrawDebug(class AHUD* H, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.PluginBase.DrawDebug");

	UPluginBase_DrawDebug_Params params;
	params.H = H;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.PluginBase.EnablePlugin
// (Native, Public)

void UPluginBase::EnablePlugin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.PluginBase.EnablePlugin");

	UPluginBase_EnablePlugin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.PluginBase.DisablePlugin
// (Native, Public)

void UPluginBase::DisablePlugin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.PluginBase.DisablePlugin");

	UPluginBase_DisablePlugin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AITickablePlugin.Sleep
// (Final, Latent, Native, Public)
// Parameters:
// float                          Seconds                        (Parm)

void UAITickablePlugin::Sleep(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AITickablePlugin.Sleep");

	UAITickablePlugin_Sleep_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIPluginMovement.GetMoveFocus
// (Defined, Event, Public, HasOutParms)
// Parameters:
// class AActor*                  MoveFocus                      (Parm, OutParm)
// struct FVector                 MoveFocalPoint                 (Parm, OutParm)
// TEnumAsByte<EFocusPriority>    ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EFocusPriority> UAIPluginMovement::GetMoveFocus(class AActor** MoveFocus, struct FVector* MoveFocalPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.GetMoveFocus");

	UAIPluginMovement_GetMoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveFocus != nullptr)
		*MoveFocus = params.MoveFocus;
	if (MoveFocalPoint != nullptr)
		*MoveFocalPoint = params.MoveFocalPoint;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.GetIfShouldWalkDurringCurrentMovementPhase
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::GetIfShouldWalkDurringCurrentMovementPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.GetIfShouldWalkDurringCurrentMovementPhase");

	UAIPluginMovement_GetIfShouldWalkDurringCurrentMovementPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.GetOffsetForCurrentMovePhase
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UAIPluginMovement::GetOffsetForCurrentMovePhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.GetOffsetForCurrentMovePhase");

	UAIPluginMovement_GetOffsetForCurrentMovePhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.GetFocusForForCurrentMovePhase
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UAIPluginMovement::GetFocusForForCurrentMovePhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.GetFocusForForCurrentMovePhase");

	UAIPluginMovement_GetFocusForForCurrentMovePhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.GetPointMovingToForCurrentMovePhase
// (Defined, Event, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UAIPluginMovement::GetPointMovingToForCurrentMovePhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.GetPointMovingToForCurrentMovePhase");

	UAIPluginMovement_GetPointMovingToForCurrentMovePhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.TryToSpin
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::TryToSpin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.TryToSpin");

	UAIPluginMovement_TryToSpin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.IsSpinning
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::IsSpinning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.IsSpinning");

	UAIPluginMovement_IsSpinning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.TryToDodge
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  DesiredDodgeDir                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::TryToDodge(unsigned char DesiredDodgeDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.TryToDodge");

	UAIPluginMovement_TryToDodge_Params params;
	params.DesiredDodgeDir = DesiredDodgeDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.IsDodging
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::IsDodging()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.IsDodging");

	UAIPluginMovement_IsDodging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.IsPerformingSpecialMove
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::IsPerformingSpecialMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.IsPerformingSpecialMove");

	UAIPluginMovement_IsPerformingSpecialMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.IsMoving
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::IsMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.IsMoving");

	UAIPluginMovement_IsMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.StopMovement
// (Public)

void UAIPluginMovement::StopMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.StopMovement");

	UAIPluginMovement_StopMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIPluginMovement.GetDestinationType
// (Final, Defined, Public)
// Parameters:
// TEnumAsByte<EMoveRequestDestinationType> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EMoveRequestDestinationType> UAIPluginMovement::GetDestinationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.GetDestinationType");

	UAIPluginMovement_GetDestinationType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.GetDestination
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMovementRequest        Request                        (Parm, OutParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UAIPluginMovement::GetDestination(struct FMovementRequest* Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.GetDestination");

	UAIPluginMovement_GetDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Request != nullptr)
		*Request = params.Request;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.RePath
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::RePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.RePath");

	UAIPluginMovement_RePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.Failure
// (Native, Protected)

void UAIPluginMovement::Failure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.Failure");

	UAIPluginMovement_Failure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIPluginMovement.Success
// (Native, Protected)

void UAIPluginMovement::Success()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.Success");

	UAIPluginMovement_Success_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIPluginMovement.SetMovementLock
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bLock                          (Parm)
// TEnumAsByte<EActionPriority>   Priority                       (OptionalParm, Parm)
// bool                           bNewRequest                    (OptionalParm, Parm)

void UAIPluginMovement::SetMovementLock(bool bLock, TEnumAsByte<EActionPriority> Priority, bool bNewRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.SetMovementLock");

	UAIPluginMovement_SetMovementLock_Params params;
	params.bLock = bLock;
	params.Priority = Priority;
	params.bNewRequest = bNewRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIPluginMovement.AbortMove
// (Native, Public)
// Parameters:
// bool                           bNewRequest                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::AbortMove(bool bNewRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.AbortMove");

	UAIPluginMovement_AbortMove_Params params;
	params.bNewRequest = bNewRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.FollowSpline
// (Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EActionPriority>   CommandPriority                (Parm)
// class UObject*                 ActionObserver                 (OptionalParm, Parm)
// bool                           bInAllowedToFire               (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::FollowSpline(TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, bool bInAllowedToFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.FollowSpline");

	UAIPluginMovement_FollowSpline_Params params;
	params.CommandPriority = CommandPriority;
	params.ActionObserver = ActionObserver;
	params.bInAllowedToFire = bInAllowedToFire;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.FollowSplineRequest
// (Native, Public, HasOutParms)
// Parameters:
// struct FMovementRequest        Request                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::FollowSplineRequest(struct FMovementRequest* Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.FollowSplineRequest");

	UAIPluginMovement_FollowSplineRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Request != nullptr)
		*Request = params.Request;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.Wander
// (Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EActionPriority>   CommandPriority                (Parm)
// class UObject*                 ActionObserver                 (OptionalParm, Parm)
// bool                           bInAllowedToFire               (OptionalParm, Parm)
// bool                           bStopAtEnd                     (OptionalParm, Parm)
// bool                           bStickToNavmesh                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::Wander(TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, bool bInAllowedToFire, bool bStopAtEnd, bool bStickToNavmesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.Wander");

	UAIPluginMovement_Wander_Params params;
	params.CommandPriority = CommandPriority;
	params.ActionObserver = ActionObserver;
	params.bInAllowedToFire = bInAllowedToFire;
	params.bStopAtEnd = bStopAtEnd;
	params.bStickToNavmesh = bStickToNavmesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.HandleWanderRequest
// (Native, Public, HasOutParms)
// Parameters:
// struct FMovementRequest        Request                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::HandleWanderRequest(struct FMovementRequest* Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.HandleWanderRequest");

	UAIPluginMovement_HandleWanderRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Request != nullptr)
		*Request = params.Request;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.MoveToFiringPositionUponEnemy
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 InDestLocation                 (Const, Parm, OutParm)
// TEnumAsByte<EActionPriority>   CommandPriority                (Parm)
// class UObject*                 ActionObserver                 (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded (OptionalParm, Parm)
// bool                           bInAllowedToFire               (OptionalParm, Parm)
// float                          AcceptableDistance             (OptionalParm, Parm)
// bool                           bStopAtEnd                     (OptionalParm, Parm)
// bool                           bStickToNavmesh                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::MoveToFiringPositionUponEnemy(TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, bool bInAllowedToFire, float AcceptableDistance, bool bStopAtEnd, bool bStickToNavmesh, struct FVector* InDestLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.MoveToFiringPositionUponEnemy");

	UAIPluginMovement_MoveToFiringPositionUponEnemy_Params params;
	params.CommandPriority = CommandPriority;
	params.ActionObserver = ActionObserver;
	params.MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;
	params.MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;
	params.bInAllowedToFire = bInAllowedToFire;
	params.AcceptableDistance = AcceptableDistance;
	params.bStopAtEnd = bStopAtEnd;
	params.bStickToNavmesh = bStickToNavmesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDestLocation != nullptr)
		*InDestLocation = params.InDestLocation;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.MoveToFiringPosition
// (Native, Public, HasOutParms)
// Parameters:
// struct FMovementRequest        Request                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::MoveToFiringPosition(struct FMovementRequest* Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.MoveToFiringPosition");

	UAIPluginMovement_MoveToFiringPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Request != nullptr)
		*Request = params.Request;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.HideFromEnemy
// (Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  inPawnGoal                     (Parm)
// TEnumAsByte<EActionPriority>   CommandPriority                (Parm)
// class UObject*                 ActionObserver                 (OptionalParm, Parm)
// float                          DistAwayFromEnemy              (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded (OptionalParm, Parm)
// bool                           bInAllowedToFire               (OptionalParm, Parm)
// bool                           bStopAtEnd                     (OptionalParm, Parm)
// bool                           bStickToNavmesh                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::HideFromEnemy(class AActor* inPawnGoal, TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, float DistAwayFromEnemy, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, bool bInAllowedToFire, bool bStopAtEnd, bool bStickToNavmesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.HideFromEnemy");

	UAIPluginMovement_HideFromEnemy_Params params;
	params.inPawnGoal = inPawnGoal;
	params.CommandPriority = CommandPriority;
	params.ActionObserver = ActionObserver;
	params.DistAwayFromEnemy = DistAwayFromEnemy;
	params.MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;
	params.MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;
	params.bInAllowedToFire = bInAllowedToFire;
	params.bStopAtEnd = bStopAtEnd;
	params.bStickToNavmesh = bStickToNavmesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.HideFrom
// (Native, Public, HasOutParms)
// Parameters:
// struct FMovementRequest        Request                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::HideFrom(struct FMovementRequest* Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.HideFrom");

	UAIPluginMovement_HideFrom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Request != nullptr)
		*Request = params.Request;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.FollowPath
// (Native, HasOptionalParms, Public)
// Parameters:
// class UNavigationPath*         InPath                         (Parm)
// TEnumAsByte<EActionPriority>   CommandPriority                (Parm)
// class UObject*                 ActionObserver                 (OptionalParm, Parm)
// bool                           bInvCover                      (OptionalParm, Parm)
// bool                           bStopAtEnd                     (OptionalParm, Parm)
// class AActor*                  RotateAtEndToMatch             (OptionalParm, Parm)
// float                          AcceptableDistance             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::FollowPath(class UNavigationPath* InPath, TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, bool bInvCover, bool bStopAtEnd, class AActor* RotateAtEndToMatch, float AcceptableDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.FollowPath");

	UAIPluginMovement_FollowPath_Params params;
	params.InPath = InPath;
	params.CommandPriority = CommandPriority;
	params.ActionObserver = ActionObserver;
	params.bInvCover = bInvCover;
	params.bStopAtEnd = bStopAtEnd;
	params.RotateAtEndToMatch = RotateAtEndToMatch;
	params.AcceptableDistance = AcceptableDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.MoveToActor
// (Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  inPawnGoal                     (Parm)
// TEnumAsByte<EActionPriority>   CommandPriority                (Parm)
// class UObject*                 ActionObserver                 (OptionalParm, Parm)
// bool                           bInAllowedToFire               (OptionalParm, Parm)
// float                          AcceptableDistance             (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded (OptionalParm, Parm)
// float                          MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded (OptionalParm, Parm)
// struct FVector                 DestOffset                     (OptionalParm, Parm)
// struct FVector                 MidPointOffset                 (OptionalParm, Parm)
// bool                           bDynamicMidPoint               (OptionalParm, Parm)
// bool                           bStopAtEnd                     (OptionalParm, Parm)
// bool                           bStickToNavmesh                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::MoveToActor(class AActor* inPawnGoal, TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, bool bInAllowedToFire, float AcceptableDistance, float MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded, float MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded, const struct FVector& DestOffset, const struct FVector& MidPointOffset, bool bDynamicMidPoint, bool bStopAtEnd, bool bStickToNavmesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.MoveToActor");

	UAIPluginMovement_MoveToActor_Params params;
	params.inPawnGoal = inPawnGoal;
	params.CommandPriority = CommandPriority;
	params.ActionObserver = ActionObserver;
	params.bInAllowedToFire = bInAllowedToFire;
	params.AcceptableDistance = AcceptableDistance;
	params.MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringBeforeRePathNeeded;
	params.MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded = MaxMovementDeltaForMoveGoalDuringFinalApprochBeforeRePathNeeded;
	params.DestOffset = DestOffset;
	params.MidPointOffset = MidPointOffset;
	params.bDynamicMidPoint = bDynamicMidPoint;
	params.bStopAtEnd = bStopAtEnd;
	params.bStickToNavmesh = bStickToNavmesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.MoveToPoint
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 InDestLocation                 (Const, Parm, OutParm)
// TEnumAsByte<EActionPriority>   CommandPriority                (Parm)
// class UObject*                 ActionObserver                 (OptionalParm, Parm)
// bool                           bInAllowedToFire               (OptionalParm, Parm)
// float                          AcceptableDistance             (OptionalParm, Parm)
// struct FVector                 DestOffset                     (Const, OptionalParm, Parm, OutParm)
// struct FVector                 MidPointOffset                 (Const, OptionalParm, Parm, OutParm)
// bool                           bDynamicMidPoint               (OptionalParm, Parm)
// bool                           bStopAtEnd                     (OptionalParm, Parm)
// bool                           bStickToNavmesh                (OptionalParm, Parm)
// class AActor*                  RotateAtEndToMatch             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::MoveToPoint(TEnumAsByte<EActionPriority> CommandPriority, class UObject* ActionObserver, bool bInAllowedToFire, float AcceptableDistance, bool bDynamicMidPoint, bool bStopAtEnd, bool bStickToNavmesh, class AActor* RotateAtEndToMatch, struct FVector* InDestLocation, struct FVector* DestOffset, struct FVector* MidPointOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.MoveToPoint");

	UAIPluginMovement_MoveToPoint_Params params;
	params.CommandPriority = CommandPriority;
	params.ActionObserver = ActionObserver;
	params.bInAllowedToFire = bInAllowedToFire;
	params.AcceptableDistance = AcceptableDistance;
	params.bDynamicMidPoint = bDynamicMidPoint;
	params.bStopAtEnd = bStopAtEnd;
	params.bStickToNavmesh = bStickToNavmesh;
	params.RotateAtEndToMatch = RotateAtEndToMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InDestLocation != nullptr)
		*InDestLocation = params.InDestLocation;
	if (DestOffset != nullptr)
		*DestOffset = params.DestOffset;
	if (MidPointOffset != nullptr)
		*MidPointOffset = params.MidPointOffset;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement.MoveTo
// (Native, Public, HasOutParms)
// Parameters:
// struct FMovementRequest        Request                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIPluginMovement::MoveTo(struct FMovementRequest* Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement.MoveTo");

	UAIPluginMovement_MoveTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Request != nullptr)
		*Request = params.Request;

	return params.ReturnValue;
}


// Function BaseAI.AIPluginMovement_Simple.DrawDebug
// (Defined, Event, Public)
// Parameters:
// class AHUD*                    H                              (Parm)
// struct FName                   Category                       (Parm)

void UAIPluginMovement_Simple::DrawDebug(class AHUD* H, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement_Simple.DrawDebug");

	UAIPluginMovement_Simple_DrawDebug_Params params;
	params.H = H;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.AIPluginMovement_Simple.StopMovement
// (Defined, Public)

void UAIPluginMovement_Simple::StopMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.AIPluginMovement_Simple.StopMovement");

	UAIPluginMovement_Simple_StopMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.PluginSquad.EnemyPerceived
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EWSPerceptionMode> PerceptionType                 (Parm)
// class APawn*                   PerceivedEnemy                 (Parm)

void UPluginSquad::EnemyPerceived(TEnumAsByte<EWSPerceptionMode> PerceptionType, class APawn* PerceivedEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.PluginSquad.EnemyPerceived");

	UPluginSquad_EnemyPerceived_Params params;
	params.PerceptionType = PerceptionType;
	params.PerceivedEnemy = PerceivedEnemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.PawnPlugin.Init
// (Simulated, Public)

void UPawnPlugin::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.PawnPlugin.Init");

	UPawnPlugin_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SmartObjectComponent.OnSOFinished
// (Native, Public)
// Parameters:
// class USmartObjectComponent*   SO                             (Parm, EditInline)
// int                            EntryIdx                       (Parm)
// class ABaseAIPawn*             User                           (Parm)

void USmartObjectComponent::OnSOFinished(class USmartObjectComponent* SO, int EntryIdx, class ABaseAIPawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.OnSOFinished");

	USmartObjectComponent_OnSOFinished_Params params;
	params.SO = SO;
	params.EntryIdx = EntryIdx;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SmartObjectComponent.UnClaim
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class ABaseAIPawn*             User                           (Parm)
// int                            EntryIdx                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USmartObjectComponent::UnClaim(class ABaseAIPawn* User, int EntryIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.UnClaim");

	USmartObjectComponent_UnClaim_Params params;
	params.User = User;
	params.EntryIdx = EntryIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SmartObjectComponent.Claim
// (Final, Native, Public)
// Parameters:
// class ABaseAIPawn*             User                           (Parm)
// int                            EntryIdx                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USmartObjectComponent::Claim(class ABaseAIPawn* User, int EntryIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.Claim");

	USmartObjectComponent_Claim_Params params;
	params.User = User;
	params.EntryIdx = EntryIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SmartObjectComponent.CanBeUsedBy
// (Final, Native, Public)
// Parameters:
// class ABaseAIPawn*             User                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USmartObjectComponent::CanBeUsedBy(class ABaseAIPawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.CanBeUsedBy");

	USmartObjectComponent_CanBeUsedBy_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SmartObjectComponent.SetEntryEnabled
// (Final, Native, Public)
// Parameters:
// int                            EntryIdx                       (Parm)
// bool                           bEnable                        (Parm)

void USmartObjectComponent::SetEntryEnabled(int EntryIdx, bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.SetEntryEnabled");

	USmartObjectComponent_SetEntryEnabled_Params params;
	params.EntryIdx = EntryIdx;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SmartObjectComponent.SetEnabled
// (Final, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void USmartObjectComponent::SetEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.SetEnabled");

	USmartObjectComponent_SetEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SmartObjectComponent.IsEntryEnabled
// (Final, Native, Public)
// Parameters:
// int                            EntryIdx                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USmartObjectComponent::IsEntryEnabled(int EntryIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.IsEntryEnabled");

	USmartObjectComponent_IsEntryEnabled_Params params;
	params.EntryIdx = EntryIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SmartObjectComponent.IsEnabled
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USmartObjectComponent::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.IsEnabled");

	USmartObjectComponent_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SmartObjectComponent.GetAction
// (Final, Native, Public)
// Parameters:
// int                            EntryIdx                       (Parm)
// class USOAction*               ReturnValue                    (Parm, OutParm, ReturnParm)

class USOAction* USmartObjectComponent::GetAction(int EntryIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.GetAction");

	USmartObjectComponent_GetAction_Params params;
	params.EntryIdx = EntryIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SmartObjectComponent.GetEntryRotation
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// int                            EntryIdx                       (Parm)
// bool                           bForceUseOffset                (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator USmartObjectComponent::GetEntryRotation(int EntryIdx, bool bForceUseOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.GetEntryRotation");

	USmartObjectComponent_GetEntryRotation_Params params;
	params.EntryIdx = EntryIdx;
	params.bForceUseOffset = bForceUseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SmartObjectComponent.GetEntryLocation
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// int                            EntryIdx                       (Parm)
// bool                           bForceUseOffset                (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector USmartObjectComponent::GetEntryLocation(int EntryIdx, bool bForceUseOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.GetEntryLocation");

	USmartObjectComponent_GetEntryLocation_Params params;
	params.EntryIdx = EntryIdx;
	params.bForceUseOffset = bForceUseOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SmartObjectComponent.UseAbort
// (Native, Public)
// Parameters:
// class ABaseAIPawn*             User                           (Parm)
// int                            EntryIdx                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USmartObjectComponent::UseAbort(class ABaseAIPawn* User, int EntryIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.UseAbort");

	USmartObjectComponent_UseAbort_Params params;
	params.User = User;
	params.EntryIdx = EntryIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SmartObjectComponent.UseEnd
// (Native, HasOptionalParms, Public)
// Parameters:
// class ABaseAIPawn*             User                           (Parm)
// int                            EntryIdx                       (Parm)
// bool                           bIsAborting                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USmartObjectComponent::UseEnd(class ABaseAIPawn* User, int EntryIdx, bool bIsAborting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.UseEnd");

	USmartObjectComponent_UseEnd_Params params;
	params.User = User;
	params.EntryIdx = EntryIdx;
	params.bIsAborting = bIsAborting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SmartObjectComponent.UseStart
// (Native, Public)
// Parameters:
// class ABaseAIPawn*             User                           (Parm)
// int                            EntryIdx                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USmartObjectComponent::UseStart(class ABaseAIPawn* User, int EntryIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectComponent.UseStart");

	USmartObjectComponent_UseStart_Params params;
	params.User = User;
	params.EntryIdx = EntryIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SmartObjectProxy.OnToggle
// (Defined, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void ASmartObjectProxy::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectProxy.OnToggle");

	ASmartObjectProxy_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SmartObjectReplicationActor.ComponentChanged
// (Final, Native, Public)
// Parameters:
// class USmartObjectComponent*   SOComponent                    (Parm, EditInline)

void ASmartObjectReplicationActor::ComponentChanged(class USmartObjectComponent* SOComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SmartObjectReplicationActor.ComponentChanged");

	ASmartObjectReplicationActor_ComponentChanged_Params params;
	params.SOComponent = SOComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SOAction.Cleanup
// (Native, Public)

void USOAction::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOAction.Cleanup");

	USOAction_Cleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SOAction.InitFor
// (Native, Public)
// Parameters:
// class ABaseAIPawn*             Instigator                     (Parm)

void USOAction::InitFor(class ABaseAIPawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOAction.InitFor");

	USOAction_InitFor_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SOAction.OnSOReplicated
// (Simulated, Event, Public)

void USOAction::OnSOReplicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOAction.OnSOReplicated");

	USOAction_OnSOReplicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SOAction.OnPerformOn
// (Event, Public)
// Parameters:
// class ABaseAIPawn*             Instigator                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USOAction::OnPerformOn(class ABaseAIPawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOAction.OnPerformOn");

	USOAction_OnPerformOn_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SOAction.OnIsValidFor
// (Defined, Event, Public)
// Parameters:
// class ABaseAIPawn*             Instigator                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USOAction::OnIsValidFor(class ABaseAIPawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOAction.OnIsValidFor");

	USOAction_OnIsValidFor_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SOAction.PerformOn
// (Native, Public)
// Parameters:
// class ABaseAIPawn*             Instigator                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USOAction::PerformOn(class ABaseAIPawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOAction.PerformOn");

	USOAction_PerformOn_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SOAction.IsValidFor
// (Native, Public)
// Parameters:
// class ABaseAIPawn*             Instigator                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USOAction::IsValidFor(class ABaseAIPawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOAction.IsValidFor");

	USOAction_IsValidFor_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BaseAI.SOActionLatentBase.OnLatentFinished
// (Native, Public)
// Parameters:
// class ABaseAIController*       Observer                       (Parm)
// class UObject*                 Action                         (Parm)
// unsigned char                  FinishResult                   (Parm)

void USOActionLatentBase::OnLatentFinished(class ABaseAIController* Observer, class UObject* Action, unsigned char FinishResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOActionLatentBase.OnLatentFinished");

	USOActionLatentBase_OnLatentFinished_Params params;
	params.Observer = Observer;
	params.Action = Action;
	params.FinishResult = FinishResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SOActionLatentBase.Cleanup
// (Native, Public)

void USOActionLatentBase::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOActionLatentBase.Cleanup");

	USOActionLatentBase_Cleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SOActionLatentBase.InitFor
// (Native, Public)
// Parameters:
// class ABaseAIPawn*             Instigator                     (Parm)

void USOActionLatentBase::InitFor(class ABaseAIPawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOActionLatentBase.InitFor");

	USOActionLatentBase_InitFor_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SOActionLatentBase.OnAbortPerforming
// (Event, Public)

void USOActionLatentBase::OnAbortPerforming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOActionLatentBase.OnAbortPerforming");

	USOActionLatentBase_OnAbortPerforming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SOActionLatentBase.AbortPerforming
// (Native, Public)

void USOActionLatentBase::AbortPerforming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOActionLatentBase.AbortPerforming");

	USOActionLatentBase_AbortPerforming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SOObserver.OnSOFinished
// (Native, Public)
// Parameters:
// class USmartObjectComponent*   SO                             (Parm, EditInline)
// int                            EntryIndex                     (Parm)
// class ABaseAIPawn*             User                           (Parm)

void USOObserver::OnSOFinished(class USmartObjectComponent* SO, int EntryIndex, class ABaseAIPawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOObserver.OnSOFinished");

	USOObserver_OnSOFinished_Params params;
	params.SO = SO;
	params.EntryIndex = EntryIndex;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SeqAct_AISetBT.Activated
// (Defined, Event, Public)

void USeqAct_AISetBT::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SeqAct_AISetBT.Activated");

	USeqAct_AISetBT_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SOProximityBroudcastComponent.OnMultiUnTouchBroudcast
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// int                            Index                          (Parm)
// class AActor*                  Other                          (Parm)

void USOProximityBroudcastComponent::OnMultiUnTouchBroudcast(int Index, class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOProximityBroudcastComponent.OnMultiUnTouchBroudcast");

	USOProximityBroudcastComponent_OnMultiUnTouchBroudcast_Params params;
	params.Index = Index;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseAI.SOProximityBroudcastComponent.OnMultiTouchBroudcast
// (Defined, Simulated, Public, HasDefaults)
// Parameters:
// int                            Index                          (Parm)
// class AActor*                  Other                          (Parm)

void USOProximityBroudcastComponent::OnMultiTouchBroudcast(int Index, class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseAI.SOProximityBroudcastComponent.OnMultiTouchBroudcast");

	USOProximityBroudcastComponent_OnMultiTouchBroudcast_Params params;
	params.Index = Index;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
