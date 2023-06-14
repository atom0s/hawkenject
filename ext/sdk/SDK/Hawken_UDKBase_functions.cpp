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

// Function UDKBase.SimpleGame.SetGameType
// (Defined, Event, Static, Public)
// Parameters:
// struct FString                 MapName                        (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 Portal                         (Parm, NeedCtorLink)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* ASimpleGame::STATIC_SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimpleGame.SetGameType");

	ASimpleGame_SetGameType_Params params;
	params.MapName = MapName;
	params.Options = Options;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.SimpleGame.StripPlayOnPrefix
// (Defined, Static, Public)
// Parameters:
// struct FString                 MapName                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString ASimpleGame::STATIC_StripPlayOnPrefix(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimpleGame.StripPlayOnPrefix");

	ASimpleGame_StripPlayOnPrefix_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.SimpleGame.HasPlayOnPrefix
// (Defined, Static, Public, HasOutParms)
// Parameters:
// struct FString                 MapName                        (Parm, NeedCtorLink)
// int                            PrefixLength                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ASimpleGame::STATIC_HasPlayOnPrefix(const struct FString& MapName, int* PrefixLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimpleGame.HasPlayOnPrefix");

	ASimpleGame_HasPlayOnPrefix_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrefixLength != nullptr)
		*PrefixLength = params.PrefixLength;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.DelayedLeaveVehicle
// (Event, Public)

void AUDKBot::DelayedLeaveVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.DelayedLeaveVehicle");

	AUDKBot_DelayedLeaveVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.DelayedWarning
// (Event, Public)

void AUDKBot::DelayedWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.DelayedWarning");

	AUDKBot_DelayedWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.MissedDodge
// (Event, Public)

void AUDKBot::MissedDodge()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.MissedDodge");

	AUDKBot_MissedDodge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.AdjustAimError
// (Event, Public)
// Parameters:
// float                          TargetDist                     (Parm)
// bool                           bInstantProj                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKBot::AdjustAimError(float TargetDist, bool bInstantProj)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.AdjustAimError");

	AUDKBot_AdjustAimError_Params params;
	params.TargetDist = TargetDist;
	params.bInstantProj = bInstantProj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.SuperDesireability
// (Event, Public)
// Parameters:
// class APickupFactory*          P                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKBot::SuperDesireability(class APickupFactory* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.SuperDesireability");

	AUDKBot_SuperDesireability_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.SpecialJumpCost
// (Event, Public, HasOutParms)
// Parameters:
// float                          RequiredJumpZ                  (Parm)
// float                          Cost                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKBot::SpecialJumpCost(float RequiredJumpZ, float* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.SpecialJumpCost");

	AUDKBot_SpecialJumpCost_Params params;
	params.RequiredJumpZ = RequiredJumpZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.MayDodgeToMoveTarget
// (Event, Public)

void AUDKBot::MayDodgeToMoveTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.MayDodgeToMoveTarget");

	AUDKBot_MayDodgeToMoveTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.TimeDJReset
// (Event, Public)

void AUDKBot::TimeDJReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.TimeDJReset");

	AUDKBot_TimeDJReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.MonitoredPawnAlert
// (Event, Public)

void AUDKBot::MonitoredPawnAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.MonitoredPawnAlert");

	AUDKBot_MonitoredPawnAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.WhatToDoNext
// (Event, Public)

void AUDKBot::WhatToDoNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.WhatToDoNext");

	AUDKBot_WhatToDoNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.FindBestSuperPickup
// (Native, Public)
// Parameters:
// float                          MaxDist                        (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FindBestSuperPickup(float MaxDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FindBestSuperPickup");

	AUDKBot_FindBestSuperPickup_Params params;
	params.MaxDist = MaxDist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.BuildSquadRoute
// (Final, Native, Public)

void AUDKBot::BuildSquadRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.BuildSquadRoute");

	AUDKBot_BuildSquadRoute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.FindPathToSquadRoute
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bWeightDetours                 (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FindPathToSquadRoute(bool bWeightDetours)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FindPathToSquadRoute");

	AUDKBot_FindPathToSquadRoute_Params params;
	params.bWeightDetours = bWeightDetours;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.FindBestInventoryPath
// (Final, Native, Public, HasOutParms)
// Parameters:
// float                          MinWeight                      (Parm, OutParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FindBestInventoryPath(float* MinWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FindBestInventoryPath");

	AUDKBot_FindBestInventoryPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinWeight != nullptr)
		*MinWeight = params.MinWeight;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.CanMakePathTo
// (Final, Native, Public)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKBot::CanMakePathTo(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.CanMakePathTo");

	AUDKBot_CanMakePathTo_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKBot.LatentWhatToDoNext
// (Final, Latent, Native, Public)

void AUDKBot::LatentWhatToDoNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.LatentWhatToDoNext");

	AUDKBot_LatentWhatToDoNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.WaitToSeeEnemy
// (Final, Latent, Native, Public)

void AUDKBot::WaitToSeeEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.WaitToSeeEnemy");

	AUDKBot_WaitToSeeEnemy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.ReceiveRunOverWarning
// (Event, Public)
// Parameters:
// class AUDKVehicle*             V                              (Parm)
// float                          projSpeed                      (Parm)
// struct FVector                 VehicleDir                     (Parm)

void AUDKBot::ReceiveRunOverWarning(class AUDKVehicle* V, float projSpeed, const struct FVector& VehicleDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.ReceiveRunOverWarning");

	AUDKBot_ReceiveRunOverWarning_Params params;
	params.V = V;
	params.projSpeed = projSpeed;
	params.VehicleDir = VehicleDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.ExecuteWhatToDoNext
// (Event, Protected)

void AUDKBot::ExecuteWhatToDoNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.ExecuteWhatToDoNext");

	AUDKBot_ExecuteWhatToDoNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKBot.FaceActor
// (Public)
// Parameters:
// float                          StrafingModifier               (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKBot::FaceActor(float StrafingModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKBot.FaceActor");

	AUDKBot_FaceActor_Params params;
	params.StrafingModifier = StrafingModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKCarriedObject.GetTeamNum
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKCarriedObject::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.GetTeamNum");

	AUDKCarriedObject_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKCarriedObject.OnBaseChainChanged
// (Simulated, Event, Public)

void AUDKCarriedObject::OnBaseChainChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.OnBaseChainChanged");

	AUDKCarriedObject_OnBaseChainChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKCarriedObject.NotReachableBy
// (Event, Public)
// Parameters:
// class APawn*                   P                              (Parm)

void AUDKCarriedObject::NotReachableBy(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.NotReachableBy");

	AUDKCarriedObject_NotReachableBy_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKCarriedObject.SetHUDLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKCarriedObject::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKCarriedObject.SetHUDLocation");

	AUDKCarriedObject_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKDataStore_GameSearchBase.HasExistingSearchResults
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKDataStore_GameSearchBase::HasExistingSearchResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.HasExistingSearchResults");

	UUDKDataStore_GameSearchBase_HasExistingSearchResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKDataStore_GameSearchBase.HasOutstandingQueries
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bRestrictCheckToSelf           (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKDataStore_GameSearchBase::HasOutstandingQueries(bool bRestrictCheckToSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.HasOutstandingQueries");

	UUDKDataStore_GameSearchBase_HasOutstandingQueries_Params params;
	params.bRestrictCheckToSelf = bRestrictCheckToSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKDataStore_GameSearchBase.OnSearchComplete
// (Defined, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UUDKDataStore_GameSearchBase::OnSearchComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.OnSearchComplete");

	UUDKDataStore_GameSearchBase_OnSearchComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKDataStore_GameSearchBase.SubmitGameSearch
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// unsigned char                  ControllerIndex                (Parm)
// bool                           bInvalidateExistingSearchResults (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKDataStore_GameSearchBase::SubmitGameSearch(unsigned char ControllerIndex, bool bInvalidateExistingSearchResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.SubmitGameSearch");

	UUDKDataStore_GameSearchBase_SubmitGameSearch_Params params;
	params.ControllerIndex = ControllerIndex;
	params.bInvalidateExistingSearchResults = bInvalidateExistingSearchResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKDataStore_GameSearchBase.Init
// (Defined, Event, Public)

void UUDKDataStore_GameSearchBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKDataStore_GameSearchBase.Init");

	UUDKDataStore_GameSearchBase_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitCameraEffect.UpdateLocation
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 CamLoc                         (Const, Parm, OutParm)
// struct FRotator                CamRot                         (Const, Parm, OutParm)
// float                          CamFOVDeg                      (Parm)

void AUDKEmitCameraEffect::UpdateLocation(float CamFOVDeg, struct FVector* CamLoc, struct FRotator* CamRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.UpdateLocation");

	AUDKEmitCameraEffect_UpdateLocation_Params params;
	params.CamFOVDeg = CamFOVDeg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CamLoc != nullptr)
		*CamLoc = params.CamLoc;
	if (CamRot != nullptr)
		*CamRot = params.CamRot;
}


// Function UDKBase.UDKEmitCameraEffect.RegisterCamera
// (Defined, Public)
// Parameters:
// class AUDKPlayerController*    inCam                          (Parm)

void AUDKEmitCameraEffect::RegisterCamera(class AUDKPlayerController* inCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.RegisterCamera");

	AUDKEmitCameraEffect_RegisterCamera_Params params;
	params.inCam = inCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitCameraEffect.Destroyed
// (Defined, Public)

void AUDKEmitCameraEffect::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.Destroyed");

	AUDKEmitCameraEffect_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitCameraEffect.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AUDKEmitCameraEffect::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitCameraEffect.PostBeginPlay");

	AUDKEmitCameraEffect_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitterPool.SpawnExplosionLight
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UClass*                  LightClass                     (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// class AActor*                  AttachToActor                  (OptionalParm, Parm)
// class UUDKExplosionLight*      ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UUDKExplosionLight* AUDKEmitterPool::SpawnExplosionLight(class UClass* LightClass, const struct FVector& SpawnLocation, class AActor* AttachToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitterPool.SpawnExplosionLight");

	AUDKEmitterPool_SpawnExplosionLight_Params params;
	params.LightClass = LightClass;
	params.SpawnLocation = SpawnLocation;
	params.AttachToActor = AttachToActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKEmitterPool.OnExplosionLightFinished
// (Defined, Public)
// Parameters:
// class UUDKExplosionLight*      Light                          (Parm, EditInline)

void AUDKEmitterPool::OnExplosionLightFinished(class UUDKExplosionLight* Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitterPool.OnExplosionLightFinished");

	AUDKEmitterPool_OnExplosionLightFinished_Params params;
	params.Light = Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKEmitterPool.SpawnEmitter
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// struct FRotator                SpawnRotation                  (OptionalParm, Parm)
// class AActor*                  AttachToActor                  (OptionalParm, Parm)
// class AActor*                  InInstigator                   (OptionalParm, Parm)
// int                            MaxDLEPooledReuses             (OptionalParm, Parm)
// bool                           bInheritScaleFromBase          (OptionalParm, Parm)
// class UParticleSystemComponent* ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UParticleSystemComponent* AUDKEmitterPool::SpawnEmitter(class UParticleSystem* EmitterTemplate, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class AActor* AttachToActor, class AActor* InInstigator, int MaxDLEPooledReuses, bool bInheritScaleFromBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKEmitterPool.SpawnEmitter");

	AUDKEmitterPool_SpawnEmitter_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.AttachToActor = AttachToActor;
	params.InInstigator = InInstigator;
	params.MaxDLEPooledReuses = MaxDLEPooledReuses;
	params.bInheritScaleFromBase = bInheritScaleFromBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKExplosionLight.OnLightFinished
// (Public, Delegate)
// Parameters:
// class UUDKExplosionLight*      Light                          (Parm, EditInline)

void UUDKExplosionLight::OnLightFinished(class UUDKExplosionLight* Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKExplosionLight.OnLightFinished");

	UUDKExplosionLight_OnLightFinished_Params params;
	params.Light = Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKExplosionLight.ResetLight
// (Final, Native, Public)

void UUDKExplosionLight::ResetLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKExplosionLight.ResetLight");

	UUDKExplosionLight_ResetLight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.StopsProjectile
// (Defined, Simulated, Public)
// Parameters:
// class AProjectile*             P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKForcedDirectionVolume::StopsProjectile(class AProjectile* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.StopsProjectile");

	AUDKForcedDirectionVolume_StopsProjectile_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKForcedDirectionVolume.UnTouch
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AUDKForcedDirectionVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.UnTouch");

	AUDKForcedDirectionVolume_UnTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.Touch
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AUDKForcedDirectionVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.Touch");

	AUDKForcedDirectionVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.ActorEnteredVolume
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AUDKForcedDirectionVolume::ActorEnteredVolume(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.ActorEnteredVolume");

	AUDKForcedDirectionVolume_ActorEnteredVolume_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKForcedDirectionVolume.PostBeginPlay
// (Defined, Simulated, Public)

void AUDKForcedDirectionVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKForcedDirectionVolume.PostBeginPlay");

	AUDKForcedDirectionVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.NotifyGameSessionEnded
// (Defined, Public)

void UUDKGameInteraction::NotifyGameSessionEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.NotifyGameSessionEnded");

	UUDKGameInteraction_NotifyGameSessionEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.BlockUIInput
// (Defined, Event, Public)
// Parameters:
// bool                           bBlock                         (Parm)

void UUDKGameInteraction::BlockUIInput(bool bBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.BlockUIInput");

	UUDKGameInteraction_BlockUIInput_Params params;
	params.bBlock = bBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.ClearUIInputBlocks
// (Defined, Event, Public)

void UUDKGameInteraction::ClearUIInputBlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.ClearUIInputBlocks");

	UUDKGameInteraction_ClearUIInputBlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameInteraction.ShouldProcessUIInput
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKGameInteraction::ShouldProcessUIInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameInteraction.ShouldProcessUIInput");

	UUDKGameInteraction_ShouldProcessUIInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.GetTeamNum
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKGameObjective::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.GetTeamNum");

	AUDKGameObjective_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.DrawIcon
// (Simulated, Native, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 IconLocation                   (Parm)
// float                          IconWidth                      (Parm)
// float                          IconAlpha                      (Parm)
// class AUDKPlayerController*    PlayerOwner                    (Parm)
// struct FLinearColor            DrawColor                      (Parm)

void AUDKGameObjective::DrawIcon(class UCanvas* Canvas, const struct FVector& IconLocation, float IconWidth, float IconAlpha, class AUDKPlayerController* PlayerOwner, const struct FLinearColor& DrawColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.DrawIcon");

	AUDKGameObjective_DrawIcon_Params params;
	params.Canvas = Canvas;
	params.IconLocation = IconLocation;
	params.IconWidth = IconWidth;
	params.IconAlpha = IconAlpha;
	params.PlayerOwner = PlayerOwner;
	params.DrawColor = DrawColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameObjective.SetHUDLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKGameObjective::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.SetHUDLocation");

	AUDKGameObjective_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameObjective.TriggerFlagEvent
// (Public)
// Parameters:
// struct FName                   EventType                      (Parm)
// class AController*             EventInstigator                (Parm)

void AUDKGameObjective::TriggerFlagEvent(const struct FName& EventType, class AController* EventInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.TriggerFlagEvent");

	AUDKGameObjective_TriggerFlagEvent_Params params;
	params.EventType = EventType;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameObjective.BotNearObjective
// (Public)
// Parameters:
// class AAIController*           C                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKGameObjective::BotNearObjective(class AAIController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.BotNearObjective");

	AUDKGameObjective_BotNearObjective_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.GetBestViewTarget
// (Defined, Event, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AUDKGameObjective::GetBestViewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.GetBestViewTarget");

	AUDKGameObjective_GetBestViewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameObjective.ObjectiveChanged
// (Public)

void AUDKGameObjective::ObjectiveChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameObjective.ObjectiveChanged");

	AUDKGameObjective_ObjectiveChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKGameSettingsCommon.BlobToString
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 InBlob                         (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKGameSettingsCommon::STATIC_BlobToString(struct FString* InBlob)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameSettingsCommon.BlobToString");

	UUDKGameSettingsCommon_BlobToString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBlob != nullptr)
		*InBlob = params.InBlob;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameSettingsCommon.StringToBlob
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 InString                       (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 OutBlob                        (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKGameSettingsCommon::STATIC_StringToBlob(struct FString* InString, struct FString* OutBlob)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameSettingsCommon.StringToBlob");

	UUDKGameSettingsCommon_StringToBlob_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InString != nullptr)
		*InString = params.InString;
	if (OutBlob != nullptr)
		*OutBlob = params.OutBlob;

	return params.ReturnValue;
}


// Function UDKBase.UDKGameViewportClient.LoadRandomLocalizedHintMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 Category1Name                  (Parm, NeedCtorLink)
// struct FString                 Category2Name                  (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKGameViewportClient::LoadRandomLocalizedHintMessage(const struct FString& Category1Name, const struct FString& Category2Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKGameViewportClient.LoadRandomLocalizedHintMessage");

	UUDKGameViewportClient_LoadRandomLocalizedHintMessage_Params params;
	params.Category1Name = Category1Name;
	params.Category2Name = Category2Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKHUD.TranslateBindToFont
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 InBindStr                      (Parm, NeedCtorLink)
// class UFont*                   DrawFont                       (Parm, OutParm)
// struct FString                 OutBindStr                     (Parm, OutParm, NeedCtorLink)

void AUDKHUD::STATIC_TranslateBindToFont(const struct FString& InBindStr, class UFont** DrawFont, struct FString* OutBindStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKHUD.TranslateBindToFont");

	AUDKHUD_TranslateBindToFont_Params params;
	params.InBindStr = InBindStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DrawFont != nullptr)
		*DrawFont = params.DrawFont;
	if (OutBindStr != nullptr)
		*OutBindStr = params.OutBindStr;
}


// Function UDKBase.UDKHUD.DrawGlowText
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          MaxHeightInPixels              (OptionalParm, Parm)
// float                          PulseTime                      (OptionalParm, Parm)
// bool                           bRightJustified                (OptionalParm, Parm)

void AUDKHUD::DrawGlowText(const struct FString& Text, float X, float Y, float MaxHeightInPixels, float PulseTime, bool bRightJustified)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKHUD.DrawGlowText");

	AUDKHUD_DrawGlowText_Params params;
	params.Text = Text;
	params.X = X;
	params.Y = Y;
	params.MaxHeightInPixels = MaxHeightInPixels;
	params.PulseTime = PulseTime;
	params.bRightJustified = bRightJustified;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKJumpPad.SuggestMovePreparation
// (Defined, Event, Public)
// Parameters:
// class APawn*                   Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKJumpPad::SuggestMovePreparation(class APawn* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKJumpPad.SuggestMovePreparation");

	AUDKJumpPad_SuggestMovePreparation_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKJumpPad.PostTouch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AUDKJumpPad::PostTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKJumpPad.PostTouch");

	AUDKJumpPad_PostTouch_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKJumpPad.Touch
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AUDKJumpPad::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKJumpPad.Touch");

	AUDKJumpPad_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKKActorBreakable.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void AUDKKActorBreakable::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.ReplicatedEvent");

	AUDKKActorBreakable_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKKActorBreakable.BreakApart
// (Defined, Public)

void AUDKKActorBreakable::BreakApart()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.BreakApart");

	AUDKKActorBreakable_BreakApart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKKActorBreakable.EncroachingOn
// (Defined, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKKActorBreakable::EncroachingOn(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.EncroachingOn");

	AUDKKActorBreakable_EncroachingOn_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKKActorBreakable.TakeDamage
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// float                          Damage                         (Parm)
// class AController*             EventInstigator                (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AUDKKActorBreakable::TakeDamage(float Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.TakeDamage");

	AUDKKActorBreakable_TakeDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKKActorBreakable.OnEncroach
// (Public, Delegate)
// Parameters:
// class AActor*                  Other                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKKActorBreakable::OnEncroach(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.OnEncroach");

	AUDKKActorBreakable_OnEncroach_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKKActorBreakable.OnBreakApart
// (Public, Delegate)

void AUDKKActorBreakable::OnBreakApart()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKKActorBreakable.OnBreakApart");

	AUDKKActorBreakable_OnBreakApart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKParticleSystemComponent.SetFOV
// (Final, Native, Public)
// Parameters:
// float                          NewFOV                         (Parm)

void UUDKParticleSystemComponent::SetFOV(float NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKParticleSystemComponent.SetFOV");

	UUDKParticleSystemComponent_SetFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AUDKPawn::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.PostBeginPlay");

	AUDKPawn_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.StuckFalling
// (Event, Public)

void AUDKPawn::StuckFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StuckFalling");

	AUDKPawn_StuckFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.UpdateEyeHeight
// (Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AUDKPawn::UpdateEyeHeight(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.UpdateEyeHeight");

	AUDKPawn_UpdateEyeHeight_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.TakeHitBlendedOut
// (Simulated, Event, Public)

void AUDKPawn::TakeHitBlendedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.TakeHitBlendedOut");

	AUDKPawn_TakeHitBlendedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.StartFeignDeathRecoveryAnim
// (Simulated, Event, Public)

void AUDKPawn::StartFeignDeathRecoveryAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StartFeignDeathRecoveryAnim");

	AUDKPawn_StartFeignDeathRecoveryAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SetHandIKEnabled
// (Simulated, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void AUDKPawn::SetHandIKEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SetHandIKEnabled");

	AUDKPawn_SetHandIKEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SetWeaponAttachmentVisibility
// (Simulated, Public)
// Parameters:
// bool                           bAttachmentVisible             (Parm)

void AUDKPawn::SetWeaponAttachmentVisibility(bool bAttachmentVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SetWeaponAttachmentVisibility");

	AUDKPawn_SetWeaponAttachmentVisibility_Params params;
	params.bAttachmentVisible = bAttachmentVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.NativePostRenderFor
// (Simulated, Native, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AUDKPawn::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.NativePostRenderFor");

	AUDKPawn_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SetHUDLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKPawn::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SetHUDLocation");

	AUDKPawn_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.SuggestJumpVelocity
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 JumpVelocity                   (Parm, OutParm)
// struct FVector                 Destination                    (Parm)
// struct FVector                 Start                          (Parm)
// bool                           bRequireFallLanding            (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPawn::SuggestJumpVelocity(const struct FVector& Destination, const struct FVector& Start, bool bRequireFallLanding, struct FVector* JumpVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.SuggestJumpVelocity");

	AUDKPawn_SuggestJumpVelocity_Params params;
	params.Destination = Destination;
	params.Start = Start;
	params.bRequireFallLanding = bRequireFallLanding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpVelocity != nullptr)
		*JumpVelocity = params.JumpVelocity;

	return params.ReturnValue;
}


// Function UDKBase.UDKPawn.StartCrouch
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          HeightAdjust                   (Parm)

void AUDKPawn::StartCrouch(float HeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StartCrouch");

	AUDKPawn_StartCrouch_Params params;
	params.HeightAdjust = HeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.EndCrouch
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          HeightAdjust                   (Parm)

void AUDKPawn::EndCrouch(float HeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.EndCrouch");

	AUDKPawn_EndCrouch_Params params;
	params.HeightAdjust = HeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.StoppedFalling
// (Defined, Event, Public)

void AUDKPawn::StoppedFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.StoppedFalling");

	AUDKPawn_StoppedFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.HoldGameObject
// (Simulated, Event, Public)
// Parameters:
// class AUDKCarriedObject*       UDKGameObj                     (Parm)

void AUDKPawn::HoldGameObject(class AUDKCarriedObject* UDKGameObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.HoldGameObject");

	AUDKPawn_HoldGameObject_Params params;
	params.UDKGameObj = UDKGameObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.IsInvisible
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPawn::IsInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.IsInvisible");

	AUDKPawn_IsInvisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPawn.GetTargetLocation
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// bool                           bRequestAlternateLoc           (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKPawn::GetTargetLocation(class AActor* RequestedBy, bool bRequestAlternateLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.GetTargetLocation");

	AUDKPawn_GetTargetLocation_Params params;
	params.RequestedBy = RequestedBy;
	params.bRequestAlternateLoc = bRequestAlternateLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPawn.EnsureOverlayComponentLast
// (Native, Public)

void AUDKPawn::EnsureOverlayComponentLast()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.EnsureOverlayComponentLast");

	AUDKPawn_EnsureOverlayComponentLast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.RestorePreRagdollCollisionComponent
// (Native, Public)

void AUDKPawn::RestorePreRagdollCollisionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.RestorePreRagdollCollisionComponent");

	AUDKPawn_RestorePreRagdollCollisionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPawn.GetBoundingCylinder
// (Native, Public, HasOutParms)
// Parameters:
// float                          CollisionRadius                (Parm, OutParm)
// float                          CollisionHeight                (Parm, OutParm)

void AUDKPawn::GetBoundingCylinder(float* CollisionRadius, float* CollisionHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPawn.GetBoundingCylinder");

	AUDKPawn_GetBoundingCylinder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CollisionRadius != nullptr)
		*CollisionRadius = params.CollisionRadius;
	if (CollisionHeight != nullptr)
		*CollisionHeight = params.CollisionHeight;
}


// Function UDKBase.UDKPickupFactory.SetPickupHidden
// (Defined, Simulated, Public)

void AUDKPickupFactory::SetPickupHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPickupFactory.SetPickupHidden");

	AUDKPickupFactory_SetPickupHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPickupFactory.SetPickupVisible
// (Defined, Simulated, Public)

void AUDKPickupFactory::SetPickupVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPickupFactory.SetPickupVisible");

	AUDKPickupFactory_SetPickupVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.GetTargetAdhesionFrictionTarget
// (Native, Public, HasOutParms)
// Parameters:
// float                          MaxDistance                    (Parm)
// struct FVector                 CamLoc                         (Const, Parm, OutParm)
// struct FRotator                CamRot                         (Const, Parm, OutParm)
// class APawn*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class APawn* AUDKPlayerController::GetTargetAdhesionFrictionTarget(float MaxDistance, struct FVector* CamLoc, struct FRotator* CamRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.GetTargetAdhesionFrictionTarget");

	AUDKPlayerController_GetTargetAdhesionFrictionTarget_Params params;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CamLoc != nullptr)
		*CamLoc = params.CamLoc;
	if (CamRot != nullptr)
		*CamRot = params.CamRot;

	return params.ReturnValue;
}


// Function UDKBase.UDKPlayerController.ClearCameraEffect
// (Defined, Public)

void AUDKPlayerController::ClearCameraEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.ClearCameraEffect");

	AUDKPlayerController_ClearCameraEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.ClientSpawnCameraEffect
// (Defined, Net, Simulated, Public, HasDefaults, NetClient)
// Parameters:
// class UClass*                  CameraEffectClass              (Parm)

void AUDKPlayerController::ClientSpawnCameraEffect(class UClass* CameraEffectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.ClientSpawnCameraEffect");

	AUDKPlayerController_ClientSpawnCameraEffect_Params params;
	params.CameraEffectClass = CameraEffectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.RemoveCameraEffect
// (Defined, Public)
// Parameters:
// class AUDKEmitCameraEffect*    CamEmitter                     (Parm)

void AUDKPlayerController::RemoveCameraEffect(class AUDKEmitCameraEffect* CamEmitter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.RemoveCameraEffect");

	AUDKPlayerController_RemoveCameraEffect_Params params;
	params.CamEmitter = CamEmitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerController.IsMouseAvailable
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPlayerController::IsMouseAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.IsMouseAvailable");

	AUDKPlayerController_IsMouseAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPlayerController.IsKeyboardAvailable
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKPlayerController::IsKeyboardAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.IsKeyboardAvailable");

	AUDKPlayerController_IsKeyboardAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKPlayerController.SetGamma
// (Native, Public)
// Parameters:
// float                          GammaValue                     (Parm)

void AUDKPlayerController::SetGamma(float GammaValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerController.SetGamma");

	AUDKPlayerController_SetGamma_Params params;
	params.GammaValue = GammaValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKPlayerInput.GetUDKBindNameFromCommand
// (Native, Public)
// Parameters:
// struct FString                 BindCommand                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKPlayerInput::GetUDKBindNameFromCommand(const struct FString& BindCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKPlayerInput.GetUDKBindNameFromCommand");

	UUDKPlayerInput_GetUDKBindNameFromCommand_Params params;
	params.BindCommand = BindCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKProfileSettings.ResetKeysToDefault
// (Native, Static, HasOptionalParms, Public)
// Parameters:
// class ULocalPlayer*            InPlayerOwner                  (OptionalParm, Parm)

void UUDKProfileSettings::STATIC_ResetKeysToDefault(class ULocalPlayer* InPlayerOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProfileSettings.ResetKeysToDefault");

	UUDKProfileSettings_ResetKeysToDefault_Params params;
	params.InPlayerOwner = InPlayerOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKProfileSettings.ResetToDefault
// (Native, Public)
// Parameters:
// int                            ProfileId                      (Parm)

void UUDKProfileSettings::ResetToDefault(int ProfileId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProfileSettings.ResetToDefault");

	UUDKProfileSettings_ResetToDefault_Params params;
	params.ProfileId = ProfileId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKProjectile.CreateProjectileLight
// (Simulated, Event, Public)

void AUDKProjectile::CreateProjectileLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProjectile.CreateProjectileLight");

	AUDKProjectile_CreateProjectileLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKProjectile.GetTerminalVelocity
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKProjectile::GetTerminalVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKProjectile.GetTerminalVelocity");

	AUDKProjectile_GetTerminalVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKScout.SuggestJumpVelocity
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 JumpVelocity                   (Parm, OutParm)
// struct FVector                 Destination                    (Parm)
// struct FVector                 Start                          (Parm)
// bool                           bRequireFallLanding            (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKScout::SuggestJumpVelocity(const struct FVector& Destination, const struct FVector& Start, bool bRequireFallLanding, struct FVector* JumpVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKScout.SuggestJumpVelocity");

	AUDKScout_SuggestJumpVelocity_Params params;
	params.Destination = Destination;
	params.Start = Start;
	params.bRequireFallLanding = bRequireFallLanding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpVelocity != nullptr)
		*JumpVelocity = params.JumpVelocity;

	return params.ReturnValue;
}


// Function UDKBase.UDKScriptedNavigationPoint.NotifyAnchorFindingResult
// (Event, Public)
// Parameters:
// class ANavigationPoint*        EndAnchor                      (Parm)
// class APawn*                   RouteFinder                    (Parm)

void AUDKScriptedNavigationPoint::NotifyAnchorFindingResult(class ANavigationPoint* EndAnchor, class APawn* RouteFinder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKScriptedNavigationPoint.NotifyAnchorFindingResult");

	AUDKScriptedNavigationPoint_NotifyAnchorFindingResult_Params params;
	params.EndAnchor = EndAnchor;
	params.RouteFinder = RouteFinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKScriptedNavigationPoint.SpecifyEndAnchor
// (Event, Public)
// Parameters:
// class APawn*                   RouteFinder                    (Parm)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* AUDKScriptedNavigationPoint::SpecifyEndAnchor(class APawn* RouteFinder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKScriptedNavigationPoint.SpecifyEndAnchor");

	AUDKScriptedNavigationPoint_SpecifyEndAnchor_Params params;
	params.RouteFinder = RouteFinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkeletalMeshComponent.SetFOV
// (Final, Native, Public)
// Parameters:
// float                          NewFOV                         (Parm)

void UUDKSkeletalMeshComponent::SetFOV(float NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkeletalMeshComponent.SetFOV");

	UUDKSkeletalMeshComponent_SetFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkeletalMeshComponent.PreloadTextures
// (Defined, Simulated, Event, Public)
// Parameters:
// bool                           bForcePreload                  (Parm)
// float                          ClearTime                      (Parm)

void UUDKSkeletalMeshComponent::PreloadTextures(bool bForcePreload, float ClearTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkeletalMeshComponent.PreloadTextures");

	UUDKSkeletalMeshComponent_PreloadTextures_Params params;
	params.bForcePreload = bForcePreload;
	params.ClearTime = ClearTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKTeamOwnedInfo.GetTeamNum
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKTeamOwnedInfo::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeamOwnedInfo.GetTeamNum");

	AUDKTeamOwnedInfo_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKTeleporterBase.Accept
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Incoming                       (Parm)
// class AActor*                  Source                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKTeleporterBase::Accept(class AActor* Incoming, class AActor* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeleporterBase.Accept");

	AUDKTeleporterBase_Accept_Params params;
	params.Incoming = Incoming;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKTeleporterBase.InitializePortalEffect
// (Defined, Simulated, Public)
// Parameters:
// class AActor*                  Dest                           (Parm)

void AUDKTeleporterBase::InitializePortalEffect(class AActor* Dest)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeleporterBase.InitializePortalEffect");

	AUDKTeleporterBase_InitializePortalEffect_Params params;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKTeleporterBase.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AUDKTeleporterBase::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKTeleporterBase.PostBeginPlay");

	AUDKTeleporterBase_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataProvider_SearchResult.IsPrivateServer
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataProvider_SearchResult::IsPrivateServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataProvider_SearchResult.IsPrivateServer");

	UUDKUIDataProvider_SearchResult_IsPrivateServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_MenuItems.AddListElementProvidersKey
// (Native, Public)
// Parameters:
// struct FName                   KeyName                        (Parm)
// class UUDKUIResourceDataProvider* Provider                       (Parm)

void UUDKUIDataStore_MenuItems::AddListElementProvidersKey(const struct FName& KeyName, class UUDKUIResourceDataProvider* Provider)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.AddListElementProvidersKey");

	UUDKUIDataStore_MenuItems_AddListElementProvidersKey_Params params;
	params.KeyName = KeyName;
	params.Provider = Provider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_MenuItems.RemoveListElementProvidersKey
// (Native, Public)
// Parameters:
// struct FName                   KeyName                        (Parm)

void UUDKUIDataStore_MenuItems::RemoveListElementProvidersKey(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.RemoveListElementProvidersKey");

	UUDKUIDataStore_MenuItems_RemoveListElementProvidersKey_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_MenuItems.InitializeListElementProviders
// (Defined, Event, Public)

void UUDKUIDataStore_MenuItems::InitializeListElementProviders()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.InitializeListElementProviders");

	UUDKUIDataStore_MenuItems_InitializeListElementProviders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_MenuItems.GetProviderSet
// (Native, Public, HasOutParms)
// Parameters:
// struct FName                   ProviderFieldName              (Parm)
// TArray<class UUDKUIResourceDataProvider*> OutProviders                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataStore_MenuItems::GetProviderSet(const struct FName& ProviderFieldName, TArray<class UUDKUIResourceDataProvider*>* OutProviders)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.GetProviderSet");

	UUDKUIDataStore_MenuItems_GetProviderSet_Params params;
	params.ProviderFieldName = ProviderFieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProviders != nullptr)
		*OutProviders = params.OutProviders;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_MenuItems.GetAllResourceDataProviders
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UClass*                  ProviderClass                  (Parm)
// TArray<class UUDKUIResourceDataProvider*> Providers                      (Parm, OutParm, NeedCtorLink)

void UUDKUIDataStore_MenuItems::STATIC_GetAllResourceDataProviders(class UClass* ProviderClass, TArray<class UUDKUIResourceDataProvider*>* Providers)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_MenuItems.GetAllResourceDataProviders");

	UUDKUIDataStore_MenuItems_GetAllResourceDataProviders_Params params;
	params.ProviderClass = ProviderClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Providers != nullptr)
		*Providers = params.Providers;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.ClearBoundKeyCache
// (Final, Native, Public)

void UUDKUIDataStore_StringAliasBindingMap::ClearBoundKeyCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.ClearBoundKeyCache");

	UUDKUIDataStore_StringAliasBindingMap_ClearBoundKeyCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.AddMappingToBoundKeyCache
// (Final, Native, Protected)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// struct FString                 MappingStr                     (Parm, NeedCtorLink)
// int                            FieldIndex                     (Parm)

void UUDKUIDataStore_StringAliasBindingMap::AddMappingToBoundKeyCache(const struct FString& Command, const struct FString& MappingStr, int FieldIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.AddMappingToBoundKeyCache");

	UUDKUIDataStore_StringAliasBindingMap_AddMappingToBoundKeyCache_Params params;
	params.Command = Command;
	params.MappingStr = MappingStr;
	params.FieldIndex = FieldIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.FindMappingInBoundKeyCache
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// struct FString                 MappingStr                     (Parm, OutParm, NeedCtorLink)
// int                            FieldIndex                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataStore_StringAliasBindingMap::FindMappingInBoundKeyCache(const struct FString& Command, struct FString* MappingStr, int* FieldIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.FindMappingInBoundKeyCache");

	UUDKUIDataStore_StringAliasBindingMap_FindMappingInBoundKeyCache_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappingStr != nullptr)
		*MappingStr = params.MappingStr;
	if (FieldIndex != nullptr)
		*FieldIndex = params.FieldIndex;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetBoundStringWithFieldName
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FString                 MappedString                   (Parm, OutParm, NeedCtorLink)
// int                            StartIndex                     (OptionalParm, Parm, OutParm)
// struct FString                 BindString                     (OptionalParm, Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringAliasBindingMap::GetBoundStringWithFieldName(const struct FString& FieldName, struct FString* MappedString, int* StartIndex, struct FString* BindString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetBoundStringWithFieldName");

	UUDKUIDataStore_StringAliasBindingMap_GetBoundStringWithFieldName_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappedString != nullptr)
		*MappedString = params.MappedString;
	if (StartIndex != nullptr)
		*StartIndex = params.StartIndex;
	if (BindString != nullptr)
		*BindString = params.BindString;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetStringWithFieldName
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FString                 MappedString                   (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringAliasBindingMap::GetStringWithFieldName(const struct FString& FieldName, struct FString* MappedString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetStringWithFieldName");

	UUDKUIDataStore_StringAliasBindingMap_GetStringWithFieldName_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappedString != nullptr)
		*MappedString = params.MappedString;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringAliasMap.GetStringWithFieldName
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FString                 MappedString                   (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringAliasMap::GetStringWithFieldName(const struct FString& FieldName, struct FString* MappedString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringAliasMap.GetStringWithFieldName");

	UUDKUIDataStore_StringAliasMap_GetStringWithFieldName_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MappedString != nullptr)
		*MappedString = params.MappedString;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.Num
// (Defined, Event, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::Num(const struct FName& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.Num");

	UUDKUIDataStore_StringList_Num_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.SetCurrentValueIndex
// (Defined, Event, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            NewValueIndex                  (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::SetCurrentValueIndex(const struct FName& FieldName, int NewValueIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.SetCurrentValueIndex");

	UUDKUIDataStore_StringList_SetCurrentValueIndex_Params params;
	params.FieldName = FieldName;
	params.NewValueIndex = NewValueIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValueIndex
// (Defined, Event, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::GetCurrentValueIndex(const struct FName& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetCurrentValueIndex");

	UUDKUIDataStore_StringList_GetCurrentValueIndex_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValue
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FName                   FieldName                      (Parm)
// struct FString                 out_Value                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIDataStore_StringList::GetCurrentValue(const struct FName& FieldName, struct FString* out_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetCurrentValue");

	UUDKUIDataStore_StringList_GetCurrentValue_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Value != nullptr)
		*out_Value = params.out_Value;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.GetStr
// (Native, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            StrIndex                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUDKUIDataStore_StringList::GetStr(const struct FName& FieldName, int StrIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetStr");

	UUDKUIDataStore_StringList_GetStr_Params params;
	params.FieldName = FieldName;
	params.StrIndex = StrIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.FindStr
// (Native, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// struct FString                 SearchString                   (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::FindStr(const struct FName& FieldName, const struct FString& SearchString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.FindStr");

	UUDKUIDataStore_StringList_FindStr_Params params;
	params.FieldName = FieldName;
	params.SearchString = SearchString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.Empty
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// bool                           bBatchOp                       (OptionalParm, Parm)

void UUDKUIDataStore_StringList::Empty(const struct FName& FieldName, bool bBatchOp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.Empty");

	UUDKUIDataStore_StringList_Empty_Params params;
	params.FieldName = FieldName;
	params.bBatchOp = bBatchOp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringList.RemoveStrByIndex
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            Index                          (Parm)
// int                            Count                          (OptionalParm, Parm)
// bool                           bBatchOp                       (OptionalParm, Parm)

void UUDKUIDataStore_StringList::RemoveStrByIndex(const struct FName& FieldName, int Index, int Count, bool bBatchOp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.RemoveStrByIndex");

	UUDKUIDataStore_StringList_RemoveStrByIndex_Params params;
	params.FieldName = FieldName;
	params.Index = Index;
	params.Count = Count;
	params.bBatchOp = bBatchOp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringList.RemoveStr
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// struct FString                 StringToRemove                 (Parm, NeedCtorLink)
// bool                           bBatchOp                       (OptionalParm, Parm)

void UUDKUIDataStore_StringList::RemoveStr(const struct FName& FieldName, const struct FString& StringToRemove, bool bBatchOp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.RemoveStr");

	UUDKUIDataStore_StringList_RemoveStr_Params params;
	params.FieldName = FieldName;
	params.StringToRemove = StringToRemove;
	params.bBatchOp = bBatchOp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIDataStore_StringList.GetFieldIndex
// (Native, Public)
// Parameters:
// struct FName                   FieldName                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUDKUIDataStore_StringList::GetFieldIndex(const struct FName& FieldName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.GetFieldIndex");

	UUDKUIDataStore_StringList_GetFieldIndex_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKUIDataStore_StringList.Registered
// (Defined, Event, Public)
// Parameters:
// class ULocalPlayer*            PlayerOwner                    (Parm)

void UUDKUIDataStore_StringList::Registered(class ULocalPlayer* PlayerOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIDataStore_StringList.Registered");

	UUDKUIDataStore_StringList_Registered_Params params;
	params.PlayerOwner = PlayerOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKUIResourceDataProvider.ShouldBeFiltered
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKUIResourceDataProvider::ShouldBeFiltered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKUIResourceDataProvider.ShouldBeFiltered");

	UUDKUIResourceDataProvider_ShouldBeFiltered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.HandleDeadVehicleDriver
// (Defined, Public)

void AUDKVehicleBase::HandleDeadVehicleDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.HandleDeadVehicleDriver");

	AUDKVehicleBase_HandleDeadVehicleDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.DriverLeft
// (Defined, Public)

void AUDKVehicleBase::DriverLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DriverLeft");

	AUDKVehicleBase_DriverLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.StopFiringWeapon
// (Defined, Simulated, Public)

void AUDKVehicleBase::StopFiringWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.StopFiringWeapon");

	AUDKVehicleBase_StopFiringWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.BotFire
// (Defined, Public)
// Parameters:
// bool                           bFinished                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicleBase::BotFire(bool bFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.BotFire");

	AUDKVehicleBase_BotFire_Params params;
	params.bFinished = bFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.ChooseFireMode
// (Defined, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicleBase::ChooseFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ChooseFireMode");

	AUDKVehicleBase_ChooseFireMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.DetachDriver
// (Defined, Simulated, Public)
// Parameters:
// class APawn*                   P                              (Parm)

void AUDKVehicleBase::DetachDriver(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DetachDriver");

	AUDKVehicleBase_DetachDriver_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.EjectDriver
// (Defined, Public, HasDefaults)

void AUDKVehicleBase::EjectDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.EjectDriver");

	AUDKVehicleBase_EjectDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.GetVehicleDrivingStatName
// (Defined, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName AUDKVehicleBase::GetVehicleDrivingStatName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.GetVehicleDrivingStatName");

	AUDKVehicleBase_GetVehicleDrivingStatName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.ApplyWeaponEffects
// (Simulated, HasOptionalParms, Public)
// Parameters:
// int                            OverlayFlags                   (Parm)
// int                            SeatIndex                      (OptionalParm, Parm)

void AUDKVehicleBase::ApplyWeaponEffects(int OverlayFlags, int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ApplyWeaponEffects");

	AUDKVehicleBase_ApplyWeaponEffects_Params params;
	params.OverlayFlags = OverlayFlags;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.DriverEnter
// (Defined, Public)
// Parameters:
// class APawn*                   P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicleBase::DriverEnter(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DriverEnter");

	AUDKVehicleBase_DriverEnter_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.DrivingStatusChanged
// (Defined, Simulated, Public)

void AUDKVehicleBase::DrivingStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.DrivingStatusChanged");

	AUDKVehicleBase_DrivingStatusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.NeedToTurn
// (Defined, Public)
// Parameters:
// struct FVector                 targ                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicleBase::NeedToTurn(const struct FVector& targ)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.NeedToTurn");

	AUDKVehicleBase_NeedToTurn_Params params;
	params.targ = targ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.GetDamageScaling
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKVehicleBase::GetDamageScaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.GetDamageScaling");

	AUDKVehicleBase_GetDamageScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleBase.ServerChangeSeat
// (Net, NetReliable, Public, NetServer)
// Parameters:
// int                            RequestedSeat                  (Parm)

void AUDKVehicleBase::ServerChangeSeat(int RequestedSeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ServerChangeSeat");

	AUDKVehicleBase_ServerChangeSeat_Params params;
	params.RequestedSeat = RequestedSeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.ServerAdjacentSeat
// (Net, NetReliable, Public, NetServer)
// Parameters:
// int                            Direction                      (Parm)
// class AController*             C                              (Parm)

void AUDKVehicleBase::ServerAdjacentSeat(int Direction, class AController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.ServerAdjacentSeat");

	AUDKVehicleBase_ServerAdjacentSeat_Params params;
	params.Direction = Direction;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.AdjacentSeat
// (Defined, Simulated, Public)
// Parameters:
// int                            Direction                      (Parm)
// class AController*             C                              (Parm)

void AUDKVehicleBase::AdjacentSeat(int Direction, class AController* C)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.AdjacentSeat");

	AUDKVehicleBase_AdjacentSeat_Params params;
	params.Direction = Direction;
	params.C = C;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.SwitchWeapon
// (Defined, Simulated, Public)
// Parameters:
// unsigned char                  NewGroup                       (Parm)

void AUDKVehicleBase::SwitchWeapon(unsigned char NewGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.SwitchWeapon");

	AUDKVehicleBase_SwitchWeapon_Params params;
	params.NewGroup = NewGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleBase.HoldGameObject
// (Simulated, Event, Public)
// Parameters:
// class AUDKCarriedObject*       GameObj                        (Parm)

void AUDKVehicleBase::HoldGameObject(class AUDKCarriedObject* GameObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleBase.HoldGameObject");

	AUDKVehicleBase_HoldGameObject_Params params;
	params.GameObj = GameObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.UpdateHoverboardDustEffect
// (Event, Public)
// Parameters:
// float                          DustHeight                     (Parm)

void AUDKVehicle::UpdateHoverboardDustEffect(float DustHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.UpdateHoverboardDustEffect");

	AUDKVehicle_UpdateHoverboardDustEffect_Params params;
	params.DustHeight = DustHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.PostInitRigidBody
// (Event, Public)
// Parameters:
// class UPrimitiveComponent*     PrimComp                       (Parm, EditInline)

void AUDKVehicle::PostInitRigidBody(class UPrimitiveComponent* PrimComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.PostInitRigidBody");

	AUDKVehicle_PostInitRigidBody_Params params;
	params.PrimComp = PrimComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.TakeFireDamage
// (Event, Public)

void AUDKVehicle::TakeFireDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.TakeFireDamage");

	AUDKVehicle_TakeFireDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.CheckReset
// (Defined, Event, Public)

void AUDKVehicle::CheckReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.CheckReset");

	AUDKVehicle_CheckReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.TakeWaterDamage
// (Event, Public)

void AUDKVehicle::TakeWaterDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.TakeWaterDamage");

	AUDKVehicle_TakeWaterDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.RBPenetrationDestroy
// (Defined, Event, Public)

void AUDKVehicle::RBPenetrationDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.RBPenetrationDestroy");

	AUDKVehicle_RBPenetrationDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.MorphTargetDestroyed
// (Simulated, Event, Public)
// Parameters:
// int                            MorphNodeIndex                 (Parm)

void AUDKVehicle::MorphTargetDestroyed(int MorphNodeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.MorphTargetDestroyed");

	AUDKVehicle_MorphTargetDestroyed_Params params;
	params.MorphNodeIndex = MorphNodeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.ApplyMorphDamage
// (Native, Public)
// Parameters:
// struct FVector                 HitLocation                    (Parm)
// int                            Damage                         (Parm)
// struct FVector                 Momentum                       (Parm)

void AUDKVehicle::ApplyMorphDamage(const struct FVector& HitLocation, int Damage, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.ApplyMorphDamage");

	AUDKVehicle_ApplyMorphDamage_Params params;
	params.HitLocation = HitLocation;
	params.Damage = Damage;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.UpdateDamageMaterial
// (Simulated, Native, Public)

void AUDKVehicle::UpdateDamageMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.UpdateDamageMaterial");

	AUDKVehicle_UpdateDamageMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.InitDamageSkel
// (Simulated, Native, Public)

void AUDKVehicle::InitDamageSkel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.InitDamageSkel");

	AUDKVehicle_InitDamageSkel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.SetHUDLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKVehicle::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SetHUDLocation");

	AUDKVehicle_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.InUseableRange
// (Simulated, Native, Public)
// Parameters:
// class AUDKPlayerController*    PC                             (Parm)
// float                          Dist                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::InUseableRange(class AUDKPlayerController* PC, float Dist)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.InUseableRange");

	AUDKVehicle_InUseableRange_Params params;
	params.PC = PC;
	params.Dist = Dist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.NativePostRenderFor
// (Simulated, Native, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void AUDKVehicle::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.NativePostRenderFor");

	AUDKVehicle_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.GetTeamNum
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicle::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetTeamNum");

	AUDKVehicle_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SelfDestruct
// (Event, Public)
// Parameters:
// class AActor*                  ImpactedActor                  (Parm)

void AUDKVehicle::SelfDestruct(class AActor* ImpactedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SelfDestruct");

	AUDKVehicle_SelfDestruct_Params params;
	params.ImpactedActor = ImpactedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.CheckAutoDestruct
// (Simulated, Native, Public)
// Parameters:
// class ATeamInfo*               InstigatorTeam                 (Parm)
// float                          CheckRadius                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::CheckAutoDestruct(class ATeamInfo* InstigatorTeam, float CheckRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.CheckAutoDestruct");

	AUDKVehicle_CheckAutoDestruct_Params params;
	params.InstigatorTeam = InstigatorTeam;
	params.CheckRadius = CheckRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetMaxRiseForce
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKVehicle::GetMaxRiseForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetMaxRiseForce");

	AUDKVehicle_GetMaxRiseForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.JumpOutCheck
// (Event, Public)

void AUDKVehicle::JumpOutCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.JumpOutCheck");

	AUDKVehicle_JumpOutCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.ReceivedHealthChange
// (Simulated, Event, Public)

void AUDKVehicle::ReceivedHealthChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.ReceivedHealthChange");

	AUDKVehicle_ReceivedHealthChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.PlayTakeHitEffects
// (Simulated, Event, Public)

void AUDKVehicle::PlayTakeHitEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.PlayTakeHitEffects");

	AUDKVehicle_PlayTakeHitEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.OnTouchForcedDirVolume
// (Defined, Public)
// Parameters:
// class AUDKForcedDirectionVolume* Vol                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::OnTouchForcedDirVolume(class AUDKForcedDirectionVolume* Vol)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.OnTouchForcedDirVolume");

	AUDKVehicle_OnTouchForcedDirVolume_Params params;
	params.Vol = Vol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetGravityZ
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AUDKVehicle::GetGravityZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetGravityZ");

	AUDKVehicle_GetGravityZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.OnPropertyChange
// (Event, Public)
// Parameters:
// struct FName                   PropName                       (Parm)

void AUDKVehicle::OnPropertyChange(const struct FName& PropName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.OnPropertyChange");

	AUDKVehicle_OnPropertyChange_Params params;
	params.PropName = PropName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.LockOnWarning
// (Simulated, Event, Public)
// Parameters:
// class AUDKProjectile*          IncomingMissile                (Parm)

void AUDKVehicle::LockOnWarning(class AUDKProjectile* IncomingMissile)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.LockOnWarning");

	AUDKVehicle_LockOnWarning_Params params;
	params.IncomingMissile = IncomingMissile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.GetRanOverDamageType
// (Defined, Public)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* AUDKVehicle::GetRanOverDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetRanOverDamageType");

	AUDKVehicle_GetRanOverDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.IsSeatControllerReplicationViewer
// (Final, Native, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKVehicle::IsSeatControllerReplicationViewer(int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.IsSeatControllerReplicationViewer");

	AUDKVehicle_IsSeatControllerReplicationViewer_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetBarrelIndex
// (Simulated, Native, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AUDKVehicle::GetBarrelIndex(int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetBarrelIndex");

	AUDKVehicle_GetBarrelIndex_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.GetSeatPivotPoint
// (Simulated, Native, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKVehicle::GetSeatPivotPoint(int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.GetSeatPivotPoint");

	AUDKVehicle_GetSeatPivotPoint_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.ForceWeaponRotation
// (Simulated, Native, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FRotator                NewRotation                    (Parm)

void AUDKVehicle::ForceWeaponRotation(int SeatIndex, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.ForceWeaponRotation");

	AUDKVehicle_ForceWeaponRotation_Params params;
	params.SeatIndex = SeatIndex;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicle.SeatFiringMode
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// unsigned char                  NewFireMode                    (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicle::SeatFiringMode(int SeatIndex, unsigned char NewFireMode, bool bReadValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatFiringMode");

	AUDKVehicle_SeatFiringMode_Params params;
	params.SeatIndex = SeatIndex;
	params.NewFireMode = NewFireMode;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SeatFlashCount
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// unsigned char                  NewCount                       (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicle::SeatFlashCount(int SeatIndex, unsigned char NewCount, bool bReadValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatFlashCount");

	AUDKVehicle_SeatFlashCount_Params params;
	params.SeatIndex = SeatIndex;
	params.NewCount = NewCount;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SeatFlashLocation
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FVector                 NewLoc                         (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKVehicle::SeatFlashLocation(int SeatIndex, const struct FVector& NewLoc, bool bReadValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatFlashLocation");

	AUDKVehicle_SeatFlashLocation_Params params;
	params.SeatIndex = SeatIndex;
	params.NewLoc = NewLoc;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicle.SeatWeaponRotation
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// int                            SeatIndex                      (Parm)
// struct FRotator                NewRot                         (OptionalParm, Parm)
// bool                           bReadValue                     (OptionalParm, Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator AUDKVehicle::SeatWeaponRotation(int SeatIndex, const struct FRotator& NewRot, bool bReadValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicle.SeatWeaponRotation");

	AUDKVehicle_SeatWeaponRotation_Params params;
	params.SeatIndex = SeatIndex;
	params.NewRot = NewRot;
	params.bReadValue = bReadValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKWeaponPawn.GetTargetLocation
// (Simulated, Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  RequestedBy                    (OptionalParm, Parm)
// bool                           bRequestAlternateLoc           (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AUDKWeaponPawn::GetTargetLocation(class AActor* RequestedBy, bool bRequestAlternateLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeaponPawn.GetTargetLocation");

	AUDKWeaponPawn_GetTargetLocation_Params params;
	params.RequestedBy = RequestedBy;
	params.bRequestAlternateLoc = bRequestAlternateLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleFactory.GetTeamNum
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKVehicleFactory::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleFactory.GetTeamNum");

	AUDKVehicleFactory_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKVehicleFactory.SetHUDLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 NewHUDLocation                 (Parm)

void AUDKVehicleFactory::SetHUDLocation(const struct FVector& NewHUDLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleFactory.SetHUDLocation");

	AUDKVehicleFactory_SetHUDLocation_Params params;
	params.NewHUDLocation = NewHUDLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleFactory.SpawnVehicle
// (Event, Public)

void AUDKVehicleFactory::SpawnVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleFactory.SpawnVehicle");

	AUDKVehicleFactory_SpawnVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleSimHoverboard.UpdateLeanConstraint
// (Native, Public)
// Parameters:
// class URB_ConstraintInstance*  LeanUprightConstraintInstance  (Parm)
// struct FVector                 LeanY                          (Parm)
// struct FVector                 LeanZ                          (Parm)

void UUDKVehicleSimHoverboard::UpdateLeanConstraint(class URB_ConstraintInstance* LeanUprightConstraintInstance, const struct FVector& LeanY, const struct FVector& LeanZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleSimHoverboard.UpdateLeanConstraint");

	UUDKVehicleSimHoverboard_UpdateLeanConstraint_Params params;
	params.LeanUprightConstraintInstance = LeanUprightConstraintInstance;
	params.LeanY = LeanY;
	params.LeanZ = LeanZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleSimHoverboard.InitWheels
// (Native, Public)
// Parameters:
// class AUDKVehicle*             Vehicle                        (Parm)

void UUDKVehicleSimHoverboard::InitWheels(class AUDKVehicle* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleSimHoverboard.InitWheels");

	UUDKVehicleSimHoverboard_InitWheels_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleWheel.OldEffectFinished
// (Defined, Public)
// Parameters:
// class UParticleSystemComponent* PSystem                        (Parm, EditInline)

void UUDKVehicleWheel::OldEffectFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleWheel.OldEffectFinished");

	UUDKVehicleWheel_OldEffectFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKVehicleWheel.SetParticleEffect
// (Defined, Event, Public)
// Parameters:
// class AUDKVehicle*             OwnerVehicle                   (Parm)
// class UParticleSystem*         NewTemplate                    (Parm)

void UUDKVehicleWheel::SetParticleEffect(class AUDKVehicle* OwnerVehicle, class UParticleSystem* NewTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKVehicleWheel.SetParticleEffect");

	UUDKVehicleWheel_SetParticleEffect_Params params;
	params.OwnerVehicle = OwnerVehicle;
	params.NewTemplate = NewTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKWeapon.SetPosition
// (Simulated, Event, Public)
// Parameters:
// class AUDKPawn*                Holder                         (Parm)

void AUDKWeapon::SetPosition(class AUDKPawn* Holder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.SetPosition");

	AUDKWeapon_SetPosition_Params params;
	params.Holder = Holder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKWeapon.EnsureWeaponOverlayComponentLast
// (Native, Public)

void AUDKWeapon::EnsureWeaponOverlayComponentLast()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.EnsureWeaponOverlayComponentLast");

	AUDKWeapon_EnsureWeaponOverlayComponentLast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKWeapon.BestMode
// (Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AUDKWeapon::BestMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.BestMode");

	AUDKWeapon_BestMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKWeapon.IsAimCorrect
// (Simulated, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AUDKWeapon::IsAimCorrect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.IsAimCorrect");

	AUDKWeapon_IsAimCorrect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKWeapon.PostBeginPlay
// (Defined, Simulated, Public)

void AUDKWeapon::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKWeapon.PostBeginPlay");

	AUDKWeapon_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendBase.TickAnim
// (Event, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)

void UUDKAnimBlendBase::TickAnim(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendBase.TickAnim");

	UUDKAnimBlendBase_TickAnim_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendBase.GetAnimDuration
// (Final, Native, Public)
// Parameters:
// int                            ChildIndex                     (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKAnimBlendBase::GetAnimDuration(int ChildIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendBase.GetAnimDuration");

	UUDKAnimBlendBase_GetAnimDuration_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKAnimBlendBase.GetBlendTime
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// int                            ChildIndex                     (Parm)
// bool                           bGetDefault                    (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKAnimBlendBase::GetBlendTime(int ChildIndex, bool bGetDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendBase.GetBlendTime");

	UUDKAnimBlendBase_GetBlendTime_Params params;
	params.ChildIndex = ChildIndex;
	params.bGetDefault = bGetDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKAnimBlendByFlying.UpdateFlyingState
// (Native, Public)

void UUDKAnimBlendByFlying::UpdateFlyingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByFlying.UpdateFlyingState");

	UUDKAnimBlendByFlying_UpdateFlyingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeChanged
// (Defined, Event, Public)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm)

void UUDKAnimBlendByPhysicsVolume::PhysicsVolumeChanged(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeChanged");

	UUDKAnimBlendByPhysicsVolume_PhysicsVolumeChanged_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByVehicle.UpdateVehicleState
// (Native, Public)

void UUDKAnimBlendByVehicle::UpdateVehicleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByVehicle.UpdateVehicleState");

	UUDKAnimBlendByVehicle_UpdateVehicleState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByDriving.UpdateDrivingState
// (Native, Public)

void UUDKAnimBlendByDriving::UpdateDrivingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByDriving.UpdateDrivingState");

	UUDKAnimBlendByDriving_UpdateDrivingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByWeapon.AnimStopFire
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// float                          SpecialBlendTime               (OptionalParm, Parm)

void UUDKAnimBlendByWeapon::AnimStopFire(float SpecialBlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByWeapon.AnimStopFire");

	UUDKAnimBlendByWeapon_AnimStopFire_Params params;
	params.SpecialBlendTime = SpecialBlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimBlendByWeapon.AnimFire
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FName                   FireSequence                   (Parm)
// bool                           bAutoFire                      (Parm)
// float                          AnimRate                       (OptionalParm, Parm)
// float                          SpecialBlendTime               (OptionalParm, Parm)
// struct FName                   LoopSequence                   (OptionalParm, Parm)

void UUDKAnimBlendByWeapon::AnimFire(const struct FName& FireSequence, bool bAutoFire, float AnimRate, float SpecialBlendTime, const struct FName& LoopSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimBlendByWeapon.AnimFire");

	UUDKAnimBlendByWeapon_AnimFire_Params params;
	params.FireSequence = FireSequence;
	params.bAutoFire = bAutoFire;
	params.AnimRate = AnimRate;
	params.SpecialBlendTime = SpecialBlendTime;
	params.LoopSequence = LoopSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimPosition
// (Native, Public)
// Parameters:
// float                          Perc                           (Parm)

void UUDKAnimNodeFramePlayer::SetAnimPosition(float Perc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeFramePlayer.SetAnimPosition");

	UUDKAnimNodeFramePlayer_SetAnimPosition_Params params;
	params.Perc = Perc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimation
// (Native, Public)
// Parameters:
// struct FName                   Sequence                       (Parm)
// float                          RateScale                      (Parm)

void UUDKAnimNodeFramePlayer::SetAnimation(const struct FName& Sequence, float RateScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeFramePlayer.SetAnimation");

	UUDKAnimNodeFramePlayer_SetAnimation_Params params;
	params.Sequence = Sequence;
	params.RateScale = RateScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeJumpLeanOffset.SetLeanWeight
// (Final, Native, Public)
// Parameters:
// float                          WeightTarget                   (Parm)
// float                          BlendTime                      (Parm)

void UUDKAnimNodeJumpLeanOffset::SetLeanWeight(float WeightTarget, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeJumpLeanOffset.SetLeanWeight");

	UUDKAnimNodeJumpLeanOffset_SetLeanWeight_Params params;
	params.WeightTarget = WeightTarget;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequence.OnInit
// (Defined, Event, Public)

void UUDKAnimNodeSequence::OnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequence.OnInit");

	UUDKAnimNodeSequence_OnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequence.PlayAnimationSet
// (Native, Public)
// Parameters:
// TArray<struct FName>           Sequences                      (Parm, NeedCtorLink)
// float                          SeqRate                        (Parm)
// bool                           bLoopLast                      (Parm)

void UUDKAnimNodeSequence::PlayAnimationSet(TArray<struct FName> Sequences, float SeqRate, bool bLoopLast)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequence.PlayAnimationSet");

	UUDKAnimNodeSequence_PlayAnimationSet_Params params;
	params.Sequences = Sequences;
	params.SeqRate = SeqRate;
	params.bLoopLast = bLoopLast;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequence.PlayAnimation
// (Native, Public)
// Parameters:
// struct FName                   Sequence                       (Parm)
// float                          SeqRate                        (Parm)
// bool                           bSeqLoop                       (Parm)

void UUDKAnimNodeSequence::PlayAnimation(const struct FName& Sequence, float SeqRate, bool bSeqLoop)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequence.PlayAnimation");

	UUDKAnimNodeSequence_PlayAnimation_Params params;
	params.Sequence = Sequence;
	params.SeqRate = SeqRate;
	params.bSeqLoop = bSeqLoop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_CantileverBeam.EntireBeamVelocity
// (Defined, Public, Delegate)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UUDKSkelControl_CantileverBeam::EntireBeamVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_CantileverBeam.EntireBeamVelocity");

	UUDKSkelControl_CantileverBeam_EntireBeamVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_Damage.RestorePart
// (Defined, Simulated, Event, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKSkelControl_Damage::RestorePart()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_Damage.RestorePart");

	UUDKSkelControl_Damage_RestorePart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_Damage.BreakApartOnDeath
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FVector                 PartLocation                   (Parm)
// bool                           bIsVisible                     (Parm)

void UUDKSkelControl_Damage::BreakApartOnDeath(const struct FVector& PartLocation, bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_Damage.BreakApartOnDeath");

	UUDKSkelControl_Damage_BreakApartOnDeath_Params params;
	params.PartLocation = PartLocation;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_Damage.BreakApart
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FVector                 PartLocation                   (Parm)
// bool                           bIsVisible                     (Parm)

void UUDKSkelControl_Damage::BreakApart(const struct FVector& PartLocation, bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_Damage.BreakApart");

	UUDKSkelControl_Damage_BreakApart_Params params;
	params.PartLocation = PartLocation;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_MassBoneScaling.GetBoneScale
// (Final, Native, Public)
// Parameters:
// struct FName                   BoneName                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUDKSkelControl_MassBoneScaling::GetBoneScale(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_MassBoneScaling.GetBoneScale");

	UUDKSkelControl_MassBoneScaling_GetBoneScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_MassBoneScaling.SetBoneScale
// (Final, Native, Public)
// Parameters:
// struct FName                   BoneName                       (Parm)
// float                          Scale                          (Parm)

void UUDKSkelControl_MassBoneScaling::SetBoneScale(const struct FName& BoneName, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_MassBoneScaling.SetBoneScale");

	UUDKSkelControl_MassBoneScaling_SetBoneScale_Params params;
	params.BoneName = BoneName;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_TurretConstrained.WouldConstrainPitch
// (Final, Native, Public)
// Parameters:
// int                            TestPitch                      (Parm)
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUDKSkelControl_TurretConstrained::WouldConstrainPitch(int TestPitch, class USkeletalMeshComponent* SkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_TurretConstrained.WouldConstrainPitch");

	UUDKSkelControl_TurretConstrained_WouldConstrainPitch_Params params;
	params.TestPitch = TestPitch;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.UDKSkelControl_TurretConstrained.InitTurret
// (Final, Native, Public)
// Parameters:
// struct FRotator                InitRot                        (Parm)
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)

void UUDKSkelControl_TurretConstrained::InitTurret(const struct FRotator& InitRot, class USkeletalMeshComponent* SkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_TurretConstrained.InitTurret");

	UUDKSkelControl_TurretConstrained_InitTurret_Params params;
	params.InitRot = InitRot;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKSkelControl_TurretConstrained.OnTurretStatusChange
// (Public, Delegate)
// Parameters:
// bool                           bIsMoving                      (Parm)

void UUDKSkelControl_TurretConstrained::OnTurretStatusChange(bool bIsMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKSkelControl_TurretConstrained.OnTurretStatusChange");

	UUDKSkelControl_TurretConstrained_OnTurretStatusChange_Params params;
	params.bIsMoving = bIsMoving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePawn.GetPawnViewLocation
// (Defined, Simulated, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector ASimplePawn::GetPawnViewLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePawn.GetPawnViewLocation");

	ASimplePawn_GetPawnViewLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.SimplePawn.TickSpecial
// (Defined, Event, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ASimplePawn::TickSpecial(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePawn.TickSpecial");

	ASimplePawn_TickSpecial_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePawn.CalcCamera
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// float                          fDeltaTime                     (Parm)
// struct FVector                 out_CamLoc                     (Parm, OutParm)
// struct FRotator                out_CamRot                     (Parm, OutParm)
// float                          out_FOV                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ASimplePawn::CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePawn.CalcCamera");

	ASimplePawn_CalcCamera_Params params;
	params.fDeltaTime = fDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_CamLoc != nullptr)
		*out_CamLoc = params.out_CamLoc;
	if (out_CamRot != nullptr)
		*out_CamRot = params.out_CamRot;
	if (out_FOV != nullptr)
		*out_FOV = params.out_FOV;

	return params.ReturnValue;
}


// Function UDKBase.SimplePawn.FixedView
// (Defined, Exec, Public)

void ASimplePawn::FixedView()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePawn.FixedView");

	ASimplePawn_FixedView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePawn.PostBeginPlay
// (Defined, Simulated, Public)

void ASimplePawn::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePawn.PostBeginPlay");

	ASimplePawn_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.SetFootstepsToSnow
// (Exec, Public)

void ASimplePC::SetFootstepsToSnow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.SetFootstepsToSnow");

	ASimplePC_SetFootstepsToSnow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.SetFootstepsToStone
// (Exec, Public)

void ASimplePC::SetFootstepsToStone()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.SetFootstepsToStone");

	ASimplePC_SetFootstepsToStone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.PlayerTick
// (Defined, Public, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)

void ASimplePC::PlayerTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.PlayerTick");

	ASimplePC_PlayerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.GetPlayerViewPoint
// (Defined, Simulated, Event, Public, HasOutParms)
// Parameters:
// struct FVector                 out_Location                   (Parm, OutParm)
// struct FRotator                out_Rotation                   (Parm, OutParm)

void ASimplePC::GetPlayerViewPoint(struct FVector* out_Location, struct FRotator* out_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.GetPlayerViewPoint");

	ASimplePC_GetPlayerViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Location != nullptr)
		*out_Location = params.out_Location;
	if (out_Rotation != nullptr)
		*out_Rotation = params.out_Rotation;
}


// Function UDKBase.SimplePC.NotifyDirectorControl
// (Defined, Event, Public)
// Parameters:
// bool                           bNowControlling                (Parm)
// class USeqAct_Interp*          CurrentMatinee                 (Parm)

void ASimplePC::NotifyDirectorControl(bool bNowControlling, class USeqAct_Interp* CurrentMatinee)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.NotifyDirectorControl");

	ASimplePC_NotifyDirectorControl_Params params;
	params.bNowControlling = bNowControlling;
	params.CurrentMatinee = CurrentMatinee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.OffsetMatineeTouch
// (Defined, Public)
// Parameters:
// int                            Handle                         (Parm)
// TEnumAsByte<ETouchType>        Type                           (Parm)
// struct FVector2D               TouchLocation                  (Parm)
// float                          DeviceTimestamp                (Parm)
// int                            TouchpadIndex                  (Parm)

void ASimplePC::OffsetMatineeTouch(int Handle, TEnumAsByte<ETouchType> Type, const struct FVector2D& TouchLocation, float DeviceTimestamp, int TouchpadIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.OffsetMatineeTouch");

	ASimplePC_OffsetMatineeTouch_Params params;
	params.Handle = Handle;
	params.Type = Type;
	params.TouchLocation = TouchLocation;
	params.DeviceTimestamp = DeviceTimestamp;
	params.TouchpadIndex = TouchpadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.ActivateControlGroup
// (Defined, Public)

void ASimplePC::ActivateControlGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.ActivateControlGroup");

	ASimplePC_ActivateControlGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.UpdateCameraBreathing
// (Defined, Simulated, Public, HasDefaults)

void ASimplePC::UpdateCameraBreathing()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.UpdateCameraBreathing");

	ASimplePC_UpdateCameraBreathing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.CheckDistanceToDestination
// (Simulated, Public)
// Parameters:
// float                          DistToDestination              (Parm)

void ASimplePC::CheckDistanceToDestination(float DistToDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.CheckDistanceToDestination");

	ASimplePC_CheckDistanceToDestination_Params params;
	params.DistToDestination = DistToDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.ProcessViewRotation
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FRotator                out_ViewRotation               (Parm, OutParm)
// struct FRotator                DeltaRot                       (Parm)

void ASimplePC::ProcessViewRotation(float DeltaTime, const struct FRotator& DeltaRot, struct FRotator* out_ViewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.ProcessViewRotation");

	ASimplePC_ProcessViewRotation_Params params;
	params.DeltaTime = DeltaTime;
	params.DeltaRot = DeltaRot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
}


// Function UDKBase.SimplePC.UpdateRotation
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ASimplePC::UpdateRotation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.UpdateRotation");

	ASimplePC_UpdateRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.PlayerMove
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void ASimplePC::PlayerMove(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.PlayerMove");

	ASimplePC_PlayerMove_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.SetNextFootstepDistance
// (Defined, Public)

void ASimplePC::SetNextFootstepDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.SetNextFootstepDistance");

	ASimplePC_SetNextFootstepDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.IsStickMoveActive
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ASimplePC::IsStickMoveActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.IsStickMoveActive");

	ASimplePC_IsStickMoveActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UDKBase.SimplePC.PostBeginPlay
// (Defined, Simulated, Public)

void ASimplePC::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.PostBeginPlay");

	ASimplePC_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.SetupZones
// (Defined, Public)

void ASimplePC::SetupZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.SetupZones");

	ASimplePC_SetupZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.ReceivedGameClass
// (Defined, Simulated, Public)
// Parameters:
// class UClass*                  GameClass                      (Parm)

void ASimplePC::ReceivedGameClass(class UClass* GameClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.ReceivedGameClass");

	ASimplePC_ReceivedGameClass_Params params;
	params.GameClass = GameClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.OnConsoleCommand
// (Defined, Public)
// Parameters:
// class USeqAct_ConsoleCommand*  inAction                       (Parm)

void ASimplePC::OnConsoleCommand(class USeqAct_ConsoleCommand* inAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.OnConsoleCommand");

	ASimplePC_OnConsoleCommand_Params params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.SimplePC.InitInputSystem
// (Defined, Event, Public)

void ASimplePC::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.SimplePC.InitInputSystem");

	ASimplePC_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UDKBase.UDKAnimNodeSequenceByBoneRotation.OnBecomeRelevant
// (Defined, Event, Public, HasDefaults)

void UUDKAnimNodeSequenceByBoneRotation::OnBecomeRelevant()
{
	static auto fn = UObject::FindObject<UFunction>("Function UDKBase.UDKAnimNodeSequenceByBoneRotation.OnBecomeRelevant");

	UUDKAnimNodeSequenceByBoneRotation_OnBecomeRelevant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
