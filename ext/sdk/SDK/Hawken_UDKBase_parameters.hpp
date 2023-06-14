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

// Function UDKBase.SimpleGame.SetGameType
struct ASimpleGame_SetGameType_Params
{
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Portal;                                                   // (Parm, NeedCtorLink)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.SimpleGame.StripPlayOnPrefix
struct ASimpleGame_StripPlayOnPrefix_Params
{
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UDKBase.SimpleGame.HasPlayOnPrefix
struct ASimpleGame_HasPlayOnPrefix_Params
{
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
	int                                                PrefixLength;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKBot.DelayedLeaveVehicle
struct AUDKBot_DelayedLeaveVehicle_Params
{
};

// Function UDKBase.UDKBot.DelayedWarning
struct AUDKBot_DelayedWarning_Params
{
};

// Function UDKBase.UDKBot.MissedDodge
struct AUDKBot_MissedDodge_Params
{
};

// Function UDKBase.UDKBot.AdjustAimError
struct AUDKBot_AdjustAimError_Params
{
	float                                              TargetDist;                                               // (Parm)
	bool                                               bInstantProj;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKBot.SuperDesireability
struct AUDKBot_SuperDesireability_Params
{
	class APickupFactory*                              P;                                                        // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKBot.SpecialJumpCost
struct AUDKBot_SpecialJumpCost_Params
{
	float                                              RequiredJumpZ;                                            // (Parm)
	float                                              Cost;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKBot.MayDodgeToMoveTarget
struct AUDKBot_MayDodgeToMoveTarget_Params
{
};

// Function UDKBase.UDKBot.TimeDJReset
struct AUDKBot_TimeDJReset_Params
{
};

// Function UDKBase.UDKBot.MonitoredPawnAlert
struct AUDKBot_MonitoredPawnAlert_Params
{
};

// Function UDKBase.UDKBot.WhatToDoNext
struct AUDKBot_WhatToDoNext_Params
{
};

// Function UDKBase.UDKBot.FindBestSuperPickup
struct AUDKBot_FindBestSuperPickup_Params
{
	float                                              MaxDist;                                                  // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKBot.BuildSquadRoute
struct AUDKBot_BuildSquadRoute_Params
{
};

// Function UDKBase.UDKBot.FindPathToSquadRoute
struct AUDKBot_FindPathToSquadRoute_Params
{
	bool                                               bWeightDetours;                                           // (OptionalParm, Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKBot.FindBestInventoryPath
struct AUDKBot_FindBestInventoryPath_Params
{
	float                                              MinWeight;                                                // (Parm, OutParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKBot.CanMakePathTo
struct AUDKBot_CanMakePathTo_Params
{
	class AActor*                                      A;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKBot.LatentWhatToDoNext
struct AUDKBot_LatentWhatToDoNext_Params
{
};

// Function UDKBase.UDKBot.WaitToSeeEnemy
struct AUDKBot_WaitToSeeEnemy_Params
{
};

// Function UDKBase.UDKBot.ReceiveRunOverWarning
struct AUDKBot_ReceiveRunOverWarning_Params
{
	class AUDKVehicle*                                 V;                                                        // (Parm)
	float                                              projSpeed;                                                // (Parm)
	struct FVector                                     VehicleDir;                                               // (Parm)
};

// Function UDKBase.UDKBot.ExecuteWhatToDoNext
struct AUDKBot_ExecuteWhatToDoNext_Params
{
};

// Function UDKBase.UDKBot.FaceActor
struct AUDKBot_FaceActor_Params
{
	float                                              StrafingModifier;                                         // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKCarriedObject.GetTeamNum
struct AUDKCarriedObject_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKCarriedObject.OnBaseChainChanged
struct AUDKCarriedObject_OnBaseChainChanged_Params
{
};

// Function UDKBase.UDKCarriedObject.NotReachableBy
struct AUDKCarriedObject_NotReachableBy_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UDKBase.UDKCarriedObject.SetHUDLocation
struct AUDKCarriedObject_SetHUDLocation_Params
{
	struct FVector                                     NewHUDLocation;                                           // (Parm)
};

// Function UDKBase.UDKDataStore_GameSearchBase.HasExistingSearchResults
struct UUDKDataStore_GameSearchBase_HasExistingSearchResults_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKDataStore_GameSearchBase.HasOutstandingQueries
struct UUDKDataStore_GameSearchBase_HasOutstandingQueries_Params
{
	bool                                               bRestrictCheckToSelf;                                     // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKDataStore_GameSearchBase.OnSearchComplete
struct UUDKDataStore_GameSearchBase_OnSearchComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function UDKBase.UDKDataStore_GameSearchBase.SubmitGameSearch
struct UUDKDataStore_GameSearchBase_SubmitGameSearch_Params
{
	unsigned char                                      ControllerIndex;                                          // (Parm)
	bool                                               bInvalidateExistingSearchResults;                         // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKDataStore_GameSearchBase.Init
struct UUDKDataStore_GameSearchBase_Init_Params
{
};

// Function UDKBase.UDKEmitCameraEffect.UpdateLocation
struct AUDKEmitCameraEffect_UpdateLocation_Params
{
	struct FVector                                     CamLoc;                                                   // (Const, Parm, OutParm)
	struct FRotator                                    CamRot;                                                   // (Const, Parm, OutParm)
	float                                              CamFOVDeg;                                                // (Parm)
};

// Function UDKBase.UDKEmitCameraEffect.RegisterCamera
struct AUDKEmitCameraEffect_RegisterCamera_Params
{
	class AUDKPlayerController*                        inCam;                                                    // (Parm)
};

// Function UDKBase.UDKEmitCameraEffect.Destroyed
struct AUDKEmitCameraEffect_Destroyed_Params
{
};

// Function UDKBase.UDKEmitCameraEffect.PostBeginPlay
struct AUDKEmitCameraEffect_PostBeginPlay_Params
{
};

// Function UDKBase.UDKEmitterPool.SpawnExplosionLight
struct AUDKEmitterPool_SpawnExplosionLight_Params
{
	class UClass*                                      LightClass;                                               // (Parm)
	struct FVector                                     SpawnLocation;                                            // (Parm)
	class AActor*                                      AttachToActor;                                            // (OptionalParm, Parm)
	class UUDKExplosionLight*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function UDKBase.UDKEmitterPool.OnExplosionLightFinished
struct AUDKEmitterPool_OnExplosionLightFinished_Params
{
	class UUDKExplosionLight*                          Light;                                                    // (Parm, EditInline)
};

// Function UDKBase.UDKEmitterPool.SpawnEmitter
struct AUDKEmitterPool_SpawnEmitter_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm)
	struct FVector                                     SpawnLocation;                                            // (Parm)
	struct FRotator                                    SpawnRotation;                                            // (OptionalParm, Parm)
	class AActor*                                      AttachToActor;                                            // (OptionalParm, Parm)
	class AActor*                                      InInstigator;                                             // (OptionalParm, Parm)
	int                                                MaxDLEPooledReuses;                                       // (OptionalParm, Parm)
	bool                                               bInheritScaleFromBase;                                    // (OptionalParm, Parm)
	class UParticleSystemComponent*                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, EditInline)
};

// Function UDKBase.UDKExplosionLight.OnLightFinished
struct UUDKExplosionLight_OnLightFinished_Params
{
	class UUDKExplosionLight*                          Light;                                                    // (Parm, EditInline)
};

// Function UDKBase.UDKExplosionLight.ResetLight
struct UUDKExplosionLight_ResetLight_Params
{
};

// Function UDKBase.UDKForcedDirectionVolume.StopsProjectile
struct AUDKForcedDirectionVolume_StopsProjectile_Params
{
	class AProjectile*                                 P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKForcedDirectionVolume.UnTouch
struct AUDKForcedDirectionVolume_UnTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UDKBase.UDKForcedDirectionVolume.Touch
struct AUDKForcedDirectionVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UDKBase.UDKForcedDirectionVolume.ActorEnteredVolume
struct AUDKForcedDirectionVolume_ActorEnteredVolume_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UDKBase.UDKForcedDirectionVolume.PostBeginPlay
struct AUDKForcedDirectionVolume_PostBeginPlay_Params
{
};

// Function UDKBase.UDKGameInteraction.NotifyGameSessionEnded
struct UUDKGameInteraction_NotifyGameSessionEnded_Params
{
};

// Function UDKBase.UDKGameInteraction.BlockUIInput
struct UUDKGameInteraction_BlockUIInput_Params
{
	bool                                               bBlock;                                                   // (Parm)
};

// Function UDKBase.UDKGameInteraction.ClearUIInputBlocks
struct UUDKGameInteraction_ClearUIInputBlocks_Params
{
};

// Function UDKBase.UDKGameInteraction.ShouldProcessUIInput
struct UUDKGameInteraction_ShouldProcessUIInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKGameObjective.GetTeamNum
struct AUDKGameObjective_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKGameObjective.DrawIcon
struct AUDKGameObjective_DrawIcon_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector                                     IconLocation;                                             // (Parm)
	float                                              IconWidth;                                                // (Parm)
	float                                              IconAlpha;                                                // (Parm)
	class AUDKPlayerController*                        PlayerOwner;                                              // (Parm)
	struct FLinearColor                                DrawColor;                                                // (Parm)
};

// Function UDKBase.UDKGameObjective.SetHUDLocation
struct AUDKGameObjective_SetHUDLocation_Params
{
	struct FVector                                     NewHUDLocation;                                           // (Parm)
};

// Function UDKBase.UDKGameObjective.TriggerFlagEvent
struct AUDKGameObjective_TriggerFlagEvent_Params
{
	struct FName                                       EventType;                                                // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
};

// Function UDKBase.UDKGameObjective.BotNearObjective
struct AUDKGameObjective_BotNearObjective_Params
{
	class AAIController*                               C;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKGameObjective.GetBestViewTarget
struct AUDKGameObjective_GetBestViewTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKGameObjective.ObjectiveChanged
struct AUDKGameObjective_ObjectiveChanged_Params
{
};

// Function UDKBase.UDKGameSettingsCommon.BlobToString
struct UUDKGameSettingsCommon_BlobToString_Params
{
	struct FString                                     InBlob;                                                   // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UDKBase.UDKGameSettingsCommon.StringToBlob
struct UUDKGameSettingsCommon_StringToBlob_Params
{
	struct FString                                     InString;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     OutBlob;                                                  // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKGameViewportClient.LoadRandomLocalizedHintMessage
struct UUDKGameViewportClient_LoadRandomLocalizedHintMessage_Params
{
	struct FString                                     Category1Name;                                            // (Parm, NeedCtorLink)
	struct FString                                     Category2Name;                                            // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UDKBase.UDKHUD.TranslateBindToFont
struct AUDKHUD_TranslateBindToFont_Params
{
	struct FString                                     InBindStr;                                                // (Parm, NeedCtorLink)
	class UFont*                                       DrawFont;                                                 // (Parm, OutParm)
	struct FString                                     OutBindStr;                                               // (Parm, OutParm, NeedCtorLink)
};

// Function UDKBase.UDKHUD.DrawGlowText
struct AUDKHUD_DrawGlowText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              MaxHeightInPixels;                                        // (OptionalParm, Parm)
	float                                              PulseTime;                                                // (OptionalParm, Parm)
	bool                                               bRightJustified;                                          // (OptionalParm, Parm)
};

// Function UDKBase.UDKJumpPad.SuggestMovePreparation
struct AUDKJumpPad_SuggestMovePreparation_Params
{
	class APawn*                                       Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKJumpPad.PostTouch
struct AUDKJumpPad_PostTouch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function UDKBase.UDKJumpPad.Touch
struct AUDKJumpPad_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function UDKBase.UDKKActorBreakable.ReplicatedEvent
struct AUDKKActorBreakable_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (Parm)
};

// Function UDKBase.UDKKActorBreakable.BreakApart
struct AUDKKActorBreakable_BreakApart_Params
{
};

// Function UDKBase.UDKKActorBreakable.EncroachingOn
struct AUDKKActorBreakable_EncroachingOn_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKKActorBreakable.TakeDamage
struct AUDKKActorBreakable_TakeDamage_Params
{
	float                                              Damage;                                                   // (Parm)
	class AController*                                 EventInstigator;                                          // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function UDKBase.UDKKActorBreakable.OnEncroach
struct AUDKKActorBreakable_OnEncroach_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKKActorBreakable.OnBreakApart
struct AUDKKActorBreakable_OnBreakApart_Params
{
};

// Function UDKBase.UDKParticleSystemComponent.SetFOV
struct UUDKParticleSystemComponent_SetFOV_Params
{
	float                                              NewFOV;                                                   // (Parm)
};

// Function UDKBase.UDKPawn.PostBeginPlay
struct AUDKPawn_PostBeginPlay_Params
{
};

// Function UDKBase.UDKPawn.StuckFalling
struct AUDKPawn_StuckFalling_Params
{
};

// Function UDKBase.UDKPawn.UpdateEyeHeight
struct AUDKPawn_UpdateEyeHeight_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UDKBase.UDKPawn.TakeHitBlendedOut
struct AUDKPawn_TakeHitBlendedOut_Params
{
};

// Function UDKBase.UDKPawn.StartFeignDeathRecoveryAnim
struct AUDKPawn_StartFeignDeathRecoveryAnim_Params
{
};

// Function UDKBase.UDKPawn.SetHandIKEnabled
struct AUDKPawn_SetHandIKEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm)
};

// Function UDKBase.UDKPawn.SetWeaponAttachmentVisibility
struct AUDKPawn_SetWeaponAttachmentVisibility_Params
{
	bool                                               bAttachmentVisible;                                       // (Parm)
};

// Function UDKBase.UDKPawn.NativePostRenderFor
struct AUDKPawn_NativePostRenderFor_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector                                     CameraPosition;                                           // (Parm)
	struct FVector                                     CameraDir;                                                // (Parm)
};

// Function UDKBase.UDKPawn.SetHUDLocation
struct AUDKPawn_SetHUDLocation_Params
{
	struct FVector                                     NewHUDLocation;                                           // (Parm)
};

// Function UDKBase.UDKPawn.SuggestJumpVelocity
struct AUDKPawn_SuggestJumpVelocity_Params
{
	struct FVector                                     JumpVelocity;                                             // (Parm, OutParm)
	struct FVector                                     Destination;                                              // (Parm)
	struct FVector                                     Start;                                                    // (Parm)
	bool                                               bRequireFallLanding;                                      // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKPawn.StartCrouch
struct AUDKPawn_StartCrouch_Params
{
	float                                              HeightAdjust;                                             // (Parm)
};

// Function UDKBase.UDKPawn.EndCrouch
struct AUDKPawn_EndCrouch_Params
{
	float                                              HeightAdjust;                                             // (Parm)
};

// Function UDKBase.UDKPawn.StoppedFalling
struct AUDKPawn_StoppedFalling_Params
{
};

// Function UDKBase.UDKPawn.HoldGameObject
struct AUDKPawn_HoldGameObject_Params
{
	class AUDKCarriedObject*                           UDKGameObj;                                               // (Parm)
};

// Function UDKBase.UDKPawn.IsInvisible
struct AUDKPawn_IsInvisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKPawn.GetTargetLocation
struct AUDKPawn_GetTargetLocation_Params
{
	class AActor*                                      RequestedBy;                                              // (OptionalParm, Parm)
	bool                                               bRequestAlternateLoc;                                     // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKPawn.EnsureOverlayComponentLast
struct AUDKPawn_EnsureOverlayComponentLast_Params
{
};

// Function UDKBase.UDKPawn.RestorePreRagdollCollisionComponent
struct AUDKPawn_RestorePreRagdollCollisionComponent_Params
{
};

// Function UDKBase.UDKPawn.GetBoundingCylinder
struct AUDKPawn_GetBoundingCylinder_Params
{
	float                                              CollisionRadius;                                          // (Parm, OutParm)
	float                                              CollisionHeight;                                          // (Parm, OutParm)
};

// Function UDKBase.UDKPickupFactory.SetPickupHidden
struct AUDKPickupFactory_SetPickupHidden_Params
{
};

// Function UDKBase.UDKPickupFactory.SetPickupVisible
struct AUDKPickupFactory_SetPickupVisible_Params
{
};

// Function UDKBase.UDKPlayerController.GetTargetAdhesionFrictionTarget
struct AUDKPlayerController_GetTargetAdhesionFrictionTarget_Params
{
	float                                              MaxDistance;                                              // (Parm)
	struct FVector                                     CamLoc;                                                   // (Const, Parm, OutParm)
	struct FRotator                                    CamRot;                                                   // (Const, Parm, OutParm)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKPlayerController.ClearCameraEffect
struct AUDKPlayerController_ClearCameraEffect_Params
{
};

// Function UDKBase.UDKPlayerController.ClientSpawnCameraEffect
struct AUDKPlayerController_ClientSpawnCameraEffect_Params
{
	class UClass*                                      CameraEffectClass;                                        // (Parm)
};

// Function UDKBase.UDKPlayerController.RemoveCameraEffect
struct AUDKPlayerController_RemoveCameraEffect_Params
{
	class AUDKEmitCameraEffect*                        CamEmitter;                                               // (Parm)
};

// Function UDKBase.UDKPlayerController.IsMouseAvailable
struct AUDKPlayerController_IsMouseAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKPlayerController.IsKeyboardAvailable
struct AUDKPlayerController_IsKeyboardAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKPlayerController.SetGamma
struct AUDKPlayerController_SetGamma_Params
{
	float                                              GammaValue;                                               // (Parm)
};

// Function UDKBase.UDKPlayerInput.GetUDKBindNameFromCommand
struct UUDKPlayerInput_GetUDKBindNameFromCommand_Params
{
	struct FString                                     BindCommand;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UDKBase.UDKProfileSettings.ResetKeysToDefault
struct UUDKProfileSettings_ResetKeysToDefault_Params
{
	class ULocalPlayer*                                InPlayerOwner;                                            // (OptionalParm, Parm)
};

// Function UDKBase.UDKProfileSettings.ResetToDefault
struct UUDKProfileSettings_ResetToDefault_Params
{
	int                                                ProfileId;                                                // (Parm)
};

// Function UDKBase.UDKProjectile.CreateProjectileLight
struct AUDKProjectile_CreateProjectileLight_Params
{
};

// Function UDKBase.UDKProjectile.GetTerminalVelocity
struct AUDKProjectile_GetTerminalVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKScout.SuggestJumpVelocity
struct AUDKScout_SuggestJumpVelocity_Params
{
	struct FVector                                     JumpVelocity;                                             // (Parm, OutParm)
	struct FVector                                     Destination;                                              // (Parm)
	struct FVector                                     Start;                                                    // (Parm)
	bool                                               bRequireFallLanding;                                      // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKScriptedNavigationPoint.NotifyAnchorFindingResult
struct AUDKScriptedNavigationPoint_NotifyAnchorFindingResult_Params
{
	class ANavigationPoint*                            EndAnchor;                                                // (Parm)
	class APawn*                                       RouteFinder;                                              // (Parm)
};

// Function UDKBase.UDKScriptedNavigationPoint.SpecifyEndAnchor
struct AUDKScriptedNavigationPoint_SpecifyEndAnchor_Params
{
	class APawn*                                       RouteFinder;                                              // (Parm)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKSkeletalMeshComponent.SetFOV
struct UUDKSkeletalMeshComponent_SetFOV_Params
{
	float                                              NewFOV;                                                   // (Parm)
};

// Function UDKBase.UDKSkeletalMeshComponent.PreloadTextures
struct UUDKSkeletalMeshComponent_PreloadTextures_Params
{
	bool                                               bForcePreload;                                            // (Parm)
	float                                              ClearTime;                                                // (Parm)
};

// Function UDKBase.UDKTeamOwnedInfo.GetTeamNum
struct AUDKTeamOwnedInfo_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKTeleporterBase.Accept
struct AUDKTeleporterBase_Accept_Params
{
	class AActor*                                      Incoming;                                                 // (Parm)
	class AActor*                                      Source;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKTeleporterBase.InitializePortalEffect
struct AUDKTeleporterBase_InitializePortalEffect_Params
{
	class AActor*                                      Dest;                                                     // (Parm)
};

// Function UDKBase.UDKTeleporterBase.PostBeginPlay
struct AUDKTeleporterBase_PostBeginPlay_Params
{
};

// Function UDKBase.UDKUIDataProvider_SearchResult.IsPrivateServer
struct UUDKUIDataProvider_SearchResult_IsPrivateServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_MenuItems.AddListElementProvidersKey
struct UUDKUIDataStore_MenuItems_AddListElementProvidersKey_Params
{
	struct FName                                       KeyName;                                                  // (Parm)
	class UUDKUIResourceDataProvider*                  Provider;                                                 // (Parm)
};

// Function UDKBase.UDKUIDataStore_MenuItems.RemoveListElementProvidersKey
struct UUDKUIDataStore_MenuItems_RemoveListElementProvidersKey_Params
{
	struct FName                                       KeyName;                                                  // (Parm)
};

// Function UDKBase.UDKUIDataStore_MenuItems.InitializeListElementProviders
struct UUDKUIDataStore_MenuItems_InitializeListElementProviders_Params
{
};

// Function UDKBase.UDKUIDataStore_MenuItems.GetProviderSet
struct UUDKUIDataStore_MenuItems_GetProviderSet_Params
{
	struct FName                                       ProviderFieldName;                                        // (Parm)
	TArray<class UUDKUIResourceDataProvider*>          OutProviders;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_MenuItems.GetAllResourceDataProviders
struct UUDKUIDataStore_MenuItems_GetAllResourceDataProviders_Params
{
	class UClass*                                      ProviderClass;                                            // (Parm)
	TArray<class UUDKUIResourceDataProvider*>          Providers;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.ClearBoundKeyCache
struct UUDKUIDataStore_StringAliasBindingMap_ClearBoundKeyCache_Params
{
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.AddMappingToBoundKeyCache
struct UUDKUIDataStore_StringAliasBindingMap_AddMappingToBoundKeyCache_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	struct FString                                     MappingStr;                                               // (Parm, NeedCtorLink)
	int                                                FieldIndex;                                               // (Parm)
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.FindMappingInBoundKeyCache
struct UUDKUIDataStore_StringAliasBindingMap_FindMappingInBoundKeyCache_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	struct FString                                     MappingStr;                                               // (Parm, OutParm, NeedCtorLink)
	int                                                FieldIndex;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetBoundStringWithFieldName
struct UUDKUIDataStore_StringAliasBindingMap_GetBoundStringWithFieldName_Params
{
	struct FString                                     FieldName;                                                // (Parm, NeedCtorLink)
	struct FString                                     MappedString;                                             // (Parm, OutParm, NeedCtorLink)
	int                                                StartIndex;                                               // (OptionalParm, Parm, OutParm)
	struct FString                                     BindString;                                               // (OptionalParm, Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetStringWithFieldName
struct UUDKUIDataStore_StringAliasBindingMap_GetStringWithFieldName_Params
{
	struct FString                                     FieldName;                                                // (Parm, NeedCtorLink)
	struct FString                                     MappedString;                                             // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringAliasMap.GetStringWithFieldName
struct UUDKUIDataStore_StringAliasMap_GetStringWithFieldName_Params
{
	struct FString                                     FieldName;                                                // (Parm, NeedCtorLink)
	struct FString                                     MappedString;                                             // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringList.Num
struct UUDKUIDataStore_StringList_Num_Params
{
	struct FName                                       FieldName;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringList.SetCurrentValueIndex
struct UUDKUIDataStore_StringList_SetCurrentValueIndex_Params
{
	struct FName                                       FieldName;                                                // (Parm)
	int                                                NewValueIndex;                                            // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValueIndex
struct UUDKUIDataStore_StringList_GetCurrentValueIndex_Params
{
	struct FName                                       FieldName;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValue
struct UUDKUIDataStore_StringList_GetCurrentValue_Params
{
	struct FName                                       FieldName;                                                // (Parm)
	struct FString                                     out_Value;                                                // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringList.GetStr
struct UUDKUIDataStore_StringList_GetStr_Params
{
	struct FName                                       FieldName;                                                // (Parm)
	int                                                StrIndex;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function UDKBase.UDKUIDataStore_StringList.FindStr
struct UUDKUIDataStore_StringList_FindStr_Params
{
	struct FName                                       FieldName;                                                // (Parm)
	struct FString                                     SearchString;                                             // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringList.Empty
struct UUDKUIDataStore_StringList_Empty_Params
{
	struct FName                                       FieldName;                                                // (Parm)
	bool                                               bBatchOp;                                                 // (OptionalParm, Parm)
};

// Function UDKBase.UDKUIDataStore_StringList.RemoveStrByIndex
struct UUDKUIDataStore_StringList_RemoveStrByIndex_Params
{
	struct FName                                       FieldName;                                                // (Parm)
	int                                                Index;                                                    // (Parm)
	int                                                Count;                                                    // (OptionalParm, Parm)
	bool                                               bBatchOp;                                                 // (OptionalParm, Parm)
};

// Function UDKBase.UDKUIDataStore_StringList.RemoveStr
struct UUDKUIDataStore_StringList_RemoveStr_Params
{
	struct FName                                       FieldName;                                                // (Parm)
	struct FString                                     StringToRemove;                                           // (Parm, NeedCtorLink)
	bool                                               bBatchOp;                                                 // (OptionalParm, Parm)
};

// Function UDKBase.UDKUIDataStore_StringList.GetFieldIndex
struct UUDKUIDataStore_StringList_GetFieldIndex_Params
{
	struct FName                                       FieldName;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKUIDataStore_StringList.Registered
struct UUDKUIDataStore_StringList_Registered_Params
{
	class ULocalPlayer*                                PlayerOwner;                                              // (Parm)
};

// Function UDKBase.UDKUIResourceDataProvider.ShouldBeFiltered
struct UUDKUIResourceDataProvider_ShouldBeFiltered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicleBase.HandleDeadVehicleDriver
struct AUDKVehicleBase_HandleDeadVehicleDriver_Params
{
};

// Function UDKBase.UDKVehicleBase.DriverLeft
struct AUDKVehicleBase_DriverLeft_Params
{
};

// Function UDKBase.UDKVehicleBase.StopFiringWeapon
struct AUDKVehicleBase_StopFiringWeapon_Params
{
};

// Function UDKBase.UDKVehicleBase.BotFire
struct AUDKVehicleBase_BotFire_Params
{
	bool                                               bFinished;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicleBase.ChooseFireMode
struct AUDKVehicleBase_ChooseFireMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicleBase.DetachDriver
struct AUDKVehicleBase_DetachDriver_Params
{
	class APawn*                                       P;                                                        // (Parm)
};

// Function UDKBase.UDKVehicleBase.EjectDriver
struct AUDKVehicleBase_EjectDriver_Params
{
};

// Function UDKBase.UDKVehicleBase.GetVehicleDrivingStatName
struct AUDKVehicleBase_GetVehicleDrivingStatName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicleBase.ApplyWeaponEffects
struct AUDKVehicleBase_ApplyWeaponEffects_Params
{
	int                                                OverlayFlags;                                             // (Parm)
	int                                                SeatIndex;                                                // (OptionalParm, Parm)
};

// Function UDKBase.UDKVehicleBase.DriverEnter
struct AUDKVehicleBase_DriverEnter_Params
{
	class APawn*                                       P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicleBase.DrivingStatusChanged
struct AUDKVehicleBase_DrivingStatusChanged_Params
{
};

// Function UDKBase.UDKVehicleBase.NeedToTurn
struct AUDKVehicleBase_NeedToTurn_Params
{
	struct FVector                                     targ;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicleBase.GetDamageScaling
struct AUDKVehicleBase_GetDamageScaling_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicleBase.ServerChangeSeat
struct AUDKVehicleBase_ServerChangeSeat_Params
{
	int                                                RequestedSeat;                                            // (Parm)
};

// Function UDKBase.UDKVehicleBase.ServerAdjacentSeat
struct AUDKVehicleBase_ServerAdjacentSeat_Params
{
	int                                                Direction;                                                // (Parm)
	class AController*                                 C;                                                        // (Parm)
};

// Function UDKBase.UDKVehicleBase.AdjacentSeat
struct AUDKVehicleBase_AdjacentSeat_Params
{
	int                                                Direction;                                                // (Parm)
	class AController*                                 C;                                                        // (Parm)
};

// Function UDKBase.UDKVehicleBase.SwitchWeapon
struct AUDKVehicleBase_SwitchWeapon_Params
{
	unsigned char                                      NewGroup;                                                 // (Parm)
};

// Function UDKBase.UDKVehicleBase.HoldGameObject
struct AUDKVehicleBase_HoldGameObject_Params
{
	class AUDKCarriedObject*                           GameObj;                                                  // (Parm)
};

// Function UDKBase.UDKVehicle.UpdateHoverboardDustEffect
struct AUDKVehicle_UpdateHoverboardDustEffect_Params
{
	float                                              DustHeight;                                               // (Parm)
};

// Function UDKBase.UDKVehicle.PostInitRigidBody
struct AUDKVehicle_PostInitRigidBody_Params
{
	class UPrimitiveComponent*                         PrimComp;                                                 // (Parm, EditInline)
};

// Function UDKBase.UDKVehicle.TakeFireDamage
struct AUDKVehicle_TakeFireDamage_Params
{
};

// Function UDKBase.UDKVehicle.CheckReset
struct AUDKVehicle_CheckReset_Params
{
};

// Function UDKBase.UDKVehicle.TakeWaterDamage
struct AUDKVehicle_TakeWaterDamage_Params
{
};

// Function UDKBase.UDKVehicle.RBPenetrationDestroy
struct AUDKVehicle_RBPenetrationDestroy_Params
{
};

// Function UDKBase.UDKVehicle.MorphTargetDestroyed
struct AUDKVehicle_MorphTargetDestroyed_Params
{
	int                                                MorphNodeIndex;                                           // (Parm)
};

// Function UDKBase.UDKVehicle.ApplyMorphDamage
struct AUDKVehicle_ApplyMorphDamage_Params
{
	struct FVector                                     HitLocation;                                              // (Parm)
	int                                                Damage;                                                   // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
};

// Function UDKBase.UDKVehicle.UpdateDamageMaterial
struct AUDKVehicle_UpdateDamageMaterial_Params
{
};

// Function UDKBase.UDKVehicle.InitDamageSkel
struct AUDKVehicle_InitDamageSkel_Params
{
};

// Function UDKBase.UDKVehicle.SetHUDLocation
struct AUDKVehicle_SetHUDLocation_Params
{
	struct FVector                                     NewHUDLocation;                                           // (Parm)
};

// Function UDKBase.UDKVehicle.InUseableRange
struct AUDKVehicle_InUseableRange_Params
{
	class AUDKPlayerController*                        PC;                                                       // (Parm)
	float                                              Dist;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.NativePostRenderFor
struct AUDKVehicle_NativePostRenderFor_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	class UCanvas*                                     Canvas;                                                   // (Parm)
	struct FVector                                     CameraPosition;                                           // (Parm)
	struct FVector                                     CameraDir;                                                // (Parm)
};

// Function UDKBase.UDKVehicle.GetTeamNum
struct AUDKVehicle_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.SelfDestruct
struct AUDKVehicle_SelfDestruct_Params
{
	class AActor*                                      ImpactedActor;                                            // (Parm)
};

// Function UDKBase.UDKVehicle.CheckAutoDestruct
struct AUDKVehicle_CheckAutoDestruct_Params
{
	class ATeamInfo*                                   InstigatorTeam;                                           // (Parm)
	float                                              CheckRadius;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.GetMaxRiseForce
struct AUDKVehicle_GetMaxRiseForce_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.JumpOutCheck
struct AUDKVehicle_JumpOutCheck_Params
{
};

// Function UDKBase.UDKVehicle.ReceivedHealthChange
struct AUDKVehicle_ReceivedHealthChange_Params
{
};

// Function UDKBase.UDKVehicle.PlayTakeHitEffects
struct AUDKVehicle_PlayTakeHitEffects_Params
{
};

// Function UDKBase.UDKVehicle.OnTouchForcedDirVolume
struct AUDKVehicle_OnTouchForcedDirVolume_Params
{
	class AUDKForcedDirectionVolume*                   Vol;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.GetGravityZ
struct AUDKVehicle_GetGravityZ_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.OnPropertyChange
struct AUDKVehicle_OnPropertyChange_Params
{
	struct FName                                       PropName;                                                 // (Parm)
};

// Function UDKBase.UDKVehicle.LockOnWarning
struct AUDKVehicle_LockOnWarning_Params
{
	class AUDKProjectile*                              IncomingMissile;                                          // (Parm)
};

// Function UDKBase.UDKVehicle.GetRanOverDamageType
struct AUDKVehicle_GetRanOverDamageType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.IsSeatControllerReplicationViewer
struct AUDKVehicle_IsSeatControllerReplicationViewer_Params
{
	int                                                SeatIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.GetBarrelIndex
struct AUDKVehicle_GetBarrelIndex_Params
{
	int                                                SeatIndex;                                                // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.GetSeatPivotPoint
struct AUDKVehicle_GetSeatPivotPoint_Params
{
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.ForceWeaponRotation
struct AUDKVehicle_ForceWeaponRotation_Params
{
	int                                                SeatIndex;                                                // (Parm)
	struct FRotator                                    NewRotation;                                              // (Parm)
};

// Function UDKBase.UDKVehicle.SeatFiringMode
struct AUDKVehicle_SeatFiringMode_Params
{
	int                                                SeatIndex;                                                // (Parm)
	unsigned char                                      NewFireMode;                                              // (OptionalParm, Parm)
	bool                                               bReadValue;                                               // (OptionalParm, Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.SeatFlashCount
struct AUDKVehicle_SeatFlashCount_Params
{
	int                                                SeatIndex;                                                // (Parm)
	unsigned char                                      NewCount;                                                 // (OptionalParm, Parm)
	bool                                               bReadValue;                                               // (OptionalParm, Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.SeatFlashLocation
struct AUDKVehicle_SeatFlashLocation_Params
{
	int                                                SeatIndex;                                                // (Parm)
	struct FVector                                     NewLoc;                                                   // (OptionalParm, Parm)
	bool                                               bReadValue;                                               // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicle.SeatWeaponRotation
struct AUDKVehicle_SeatWeaponRotation_Params
{
	int                                                SeatIndex;                                                // (Parm)
	struct FRotator                                    NewRot;                                                   // (OptionalParm, Parm)
	bool                                               bReadValue;                                               // (OptionalParm, Parm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKWeaponPawn.GetTargetLocation
struct AUDKWeaponPawn_GetTargetLocation_Params
{
	class AActor*                                      RequestedBy;                                              // (OptionalParm, Parm)
	bool                                               bRequestAlternateLoc;                                     // (OptionalParm, Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicleFactory.GetTeamNum
struct AUDKVehicleFactory_GetTeamNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKVehicleFactory.SetHUDLocation
struct AUDKVehicleFactory_SetHUDLocation_Params
{
	struct FVector                                     NewHUDLocation;                                           // (Parm)
};

// Function UDKBase.UDKVehicleFactory.SpawnVehicle
struct AUDKVehicleFactory_SpawnVehicle_Params
{
};

// Function UDKBase.UDKVehicleSimHoverboard.UpdateLeanConstraint
struct UUDKVehicleSimHoverboard_UpdateLeanConstraint_Params
{
	class URB_ConstraintInstance*                      LeanUprightConstraintInstance;                            // (Parm)
	struct FVector                                     LeanY;                                                    // (Parm)
	struct FVector                                     LeanZ;                                                    // (Parm)
};

// Function UDKBase.UDKVehicleSimHoverboard.InitWheels
struct UUDKVehicleSimHoverboard_InitWheels_Params
{
	class AUDKVehicle*                                 Vehicle;                                                  // (Parm)
};

// Function UDKBase.UDKVehicleWheel.OldEffectFinished
struct UUDKVehicleWheel_OldEffectFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (Parm, EditInline)
};

// Function UDKBase.UDKVehicleWheel.SetParticleEffect
struct UUDKVehicleWheel_SetParticleEffect_Params
{
	class AUDKVehicle*                                 OwnerVehicle;                                             // (Parm)
	class UParticleSystem*                             NewTemplate;                                              // (Parm)
};

// Function UDKBase.UDKWeapon.SetPosition
struct AUDKWeapon_SetPosition_Params
{
	class AUDKPawn*                                    Holder;                                                   // (Parm)
};

// Function UDKBase.UDKWeapon.EnsureWeaponOverlayComponentLast
struct AUDKWeapon_EnsureWeaponOverlayComponentLast_Params
{
};

// Function UDKBase.UDKWeapon.BestMode
struct AUDKWeapon_BestMode_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKWeapon.IsAimCorrect
struct AUDKWeapon_IsAimCorrect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKWeapon.PostBeginPlay
struct AUDKWeapon_PostBeginPlay_Params
{
};

// Function UDKBase.UDKAnimBlendBase.TickAnim
struct UUDKAnimBlendBase_TickAnim_Params
{
	float                                              DeltaSeconds;                                             // (Parm)
};

// Function UDKBase.UDKAnimBlendBase.GetAnimDuration
struct UUDKAnimBlendBase_GetAnimDuration_Params
{
	int                                                ChildIndex;                                               // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKAnimBlendBase.GetBlendTime
struct UUDKAnimBlendBase_GetBlendTime_Params
{
	int                                                ChildIndex;                                               // (Parm)
	bool                                               bGetDefault;                                              // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKAnimBlendByFlying.UpdateFlyingState
struct UUDKAnimBlendByFlying_UpdateFlyingState_Params
{
};

// Function UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeChanged
struct UUDKAnimBlendByPhysicsVolume_PhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm)
};

// Function UDKBase.UDKAnimBlendByVehicle.UpdateVehicleState
struct UUDKAnimBlendByVehicle_UpdateVehicleState_Params
{
};

// Function UDKBase.UDKAnimBlendByDriving.UpdateDrivingState
struct UUDKAnimBlendByDriving_UpdateDrivingState_Params
{
};

// Function UDKBase.UDKAnimBlendByWeapon.AnimStopFire
struct UUDKAnimBlendByWeapon_AnimStopFire_Params
{
	float                                              SpecialBlendTime;                                         // (OptionalParm, Parm)
};

// Function UDKBase.UDKAnimBlendByWeapon.AnimFire
struct UUDKAnimBlendByWeapon_AnimFire_Params
{
	struct FName                                       FireSequence;                                             // (Parm)
	bool                                               bAutoFire;                                                // (Parm)
	float                                              AnimRate;                                                 // (OptionalParm, Parm)
	float                                              SpecialBlendTime;                                         // (OptionalParm, Parm)
	struct FName                                       LoopSequence;                                             // (OptionalParm, Parm)
};

// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimPosition
struct UUDKAnimNodeFramePlayer_SetAnimPosition_Params
{
	float                                              Perc;                                                     // (Parm)
};

// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimation
struct UUDKAnimNodeFramePlayer_SetAnimation_Params
{
	struct FName                                       Sequence;                                                 // (Parm)
	float                                              RateScale;                                                // (Parm)
};

// Function UDKBase.UDKAnimNodeJumpLeanOffset.SetLeanWeight
struct UUDKAnimNodeJumpLeanOffset_SetLeanWeight_Params
{
	float                                              WeightTarget;                                             // (Parm)
	float                                              BlendTime;                                                // (Parm)
};

// Function UDKBase.UDKAnimNodeSequence.OnInit
struct UUDKAnimNodeSequence_OnInit_Params
{
};

// Function UDKBase.UDKAnimNodeSequence.PlayAnimationSet
struct UUDKAnimNodeSequence_PlayAnimationSet_Params
{
	TArray<struct FName>                               Sequences;                                                // (Parm, NeedCtorLink)
	float                                              SeqRate;                                                  // (Parm)
	bool                                               bLoopLast;                                                // (Parm)
};

// Function UDKBase.UDKAnimNodeSequence.PlayAnimation
struct UUDKAnimNodeSequence_PlayAnimation_Params
{
	struct FName                                       Sequence;                                                 // (Parm)
	float                                              SeqRate;                                                  // (Parm)
	bool                                               bSeqLoop;                                                 // (Parm)
};

// Function UDKBase.UDKSkelControl_CantileverBeam.EntireBeamVelocity
struct UUDKSkelControl_CantileverBeam_EntireBeamVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKSkelControl_Damage.RestorePart
struct UUDKSkelControl_Damage_RestorePart_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKSkelControl_Damage.BreakApartOnDeath
struct UUDKSkelControl_Damage_BreakApartOnDeath_Params
{
	struct FVector                                     PartLocation;                                             // (Parm)
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UDKBase.UDKSkelControl_Damage.BreakApart
struct UUDKSkelControl_Damage_BreakApart_Params
{
	struct FVector                                     PartLocation;                                             // (Parm)
	bool                                               bIsVisible;                                               // (Parm)
};

// Function UDKBase.UDKSkelControl_MassBoneScaling.GetBoneScale
struct UUDKSkelControl_MassBoneScaling_GetBoneScale_Params
{
	struct FName                                       BoneName;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKSkelControl_MassBoneScaling.SetBoneScale
struct UUDKSkelControl_MassBoneScaling_SetBoneScale_Params
{
	struct FName                                       BoneName;                                                 // (Parm)
	float                                              Scale;                                                    // (Parm)
};

// Function UDKBase.UDKSkelControl_TurretConstrained.WouldConstrainPitch
struct UUDKSkelControl_TurretConstrained_WouldConstrainPitch_Params
{
	int                                                TestPitch;                                                // (Parm)
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.UDKSkelControl_TurretConstrained.InitTurret
struct UUDKSkelControl_TurretConstrained_InitTurret_Params
{
	struct FRotator                                    InitRot;                                                  // (Parm)
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function UDKBase.UDKSkelControl_TurretConstrained.OnTurretStatusChange
struct UUDKSkelControl_TurretConstrained_OnTurretStatusChange_Params
{
	bool                                               bIsMoving;                                                // (Parm)
};

// Function UDKBase.SimplePawn.GetPawnViewLocation
struct ASimplePawn_GetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.SimplePawn.TickSpecial
struct ASimplePawn_TickSpecial_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UDKBase.SimplePawn.CalcCamera
struct ASimplePawn_CalcCamera_Params
{
	float                                              fDeltaTime;                                               // (Parm)
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.SimplePawn.FixedView
struct ASimplePawn_FixedView_Params
{
};

// Function UDKBase.SimplePawn.PostBeginPlay
struct ASimplePawn_PostBeginPlay_Params
{
};

// Function UDKBase.SimplePC.SetFootstepsToSnow
struct ASimplePC_SetFootstepsToSnow_Params
{
};

// Function UDKBase.SimplePC.SetFootstepsToStone
struct ASimplePC_SetFootstepsToStone_Params
{
};

// Function UDKBase.SimplePC.PlayerTick
struct ASimplePC_PlayerTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UDKBase.SimplePC.GetPlayerViewPoint
struct ASimplePC_GetPlayerViewPoint_Params
{
	struct FVector                                     out_Location;                                             // (Parm, OutParm)
	struct FRotator                                    out_Rotation;                                             // (Parm, OutParm)
};

// Function UDKBase.SimplePC.NotifyDirectorControl
struct ASimplePC_NotifyDirectorControl_Params
{
	bool                                               bNowControlling;                                          // (Parm)
	class USeqAct_Interp*                              CurrentMatinee;                                           // (Parm)
};

// Function UDKBase.SimplePC.OffsetMatineeTouch
struct ASimplePC_OffsetMatineeTouch_Params
{
	int                                                Handle;                                                   // (Parm)
	TEnumAsByte<ETouchType>                            Type;                                                     // (Parm)
	struct FVector2D                                   TouchLocation;                                            // (Parm)
	float                                              DeviceTimestamp;                                          // (Parm)
	int                                                TouchpadIndex;                                            // (Parm)
};

// Function UDKBase.SimplePC.ActivateControlGroup
struct ASimplePC_ActivateControlGroup_Params
{
};

// Function UDKBase.SimplePC.UpdateCameraBreathing
struct ASimplePC_UpdateCameraBreathing_Params
{
};

// Function UDKBase.SimplePC.CheckDistanceToDestination
struct ASimplePC_CheckDistanceToDestination_Params
{
	float                                              DistToDestination;                                        // (Parm)
};

// Function UDKBase.SimplePC.ProcessViewRotation
struct ASimplePC_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FRotator                                    out_ViewRotation;                                         // (Parm, OutParm)
	struct FRotator                                    DeltaRot;                                                 // (Parm)
};

// Function UDKBase.SimplePC.UpdateRotation
struct ASimplePC_UpdateRotation_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UDKBase.SimplePC.PlayerMove
struct ASimplePC_PlayerMove_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function UDKBase.SimplePC.SetNextFootstepDistance
struct ASimplePC_SetNextFootstepDistance_Params
{
};

// Function UDKBase.SimplePC.IsStickMoveActive
struct ASimplePC_IsStickMoveActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UDKBase.SimplePC.PostBeginPlay
struct ASimplePC_PostBeginPlay_Params
{
};

// Function UDKBase.SimplePC.SetupZones
struct ASimplePC_SetupZones_Params
{
};

// Function UDKBase.SimplePC.ReceivedGameClass
struct ASimplePC_ReceivedGameClass_Params
{
	class UClass*                                      GameClass;                                                // (Parm)
};

// Function UDKBase.SimplePC.OnConsoleCommand
struct ASimplePC_OnConsoleCommand_Params
{
	class USeqAct_ConsoleCommand*                      inAction;                                                 // (Parm)
};

// Function UDKBase.SimplePC.InitInputSystem
struct ASimplePC_InitInputSystem_Params
{
};

// Function UDKBase.UDKAnimNodeSequenceByBoneRotation.OnBecomeRelevant
struct UUDKAnimNodeSequenceByBoneRotation_OnBecomeRelevant_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
