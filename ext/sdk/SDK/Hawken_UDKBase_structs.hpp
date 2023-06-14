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

#define CONST_SABM_FIND_FIRST_BIND                               -2
#define CONST_INVALIDFIELD                                       -1

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UDKBase.UDKAnimBlendByFall.EBlendFallTypes
enum class EBlendFallTypes : uint8_t
{
	FBT_Up                         = 0,
	FBT_Down                       = 1,
	FBT_PreLand                    = 2,
	FBT_Land                       = 3,
	FBT_DblJumpUp                  = 4,
	FBT_DblJumpDown                = 5,
	FBT_DblJumpPreLand             = 6,
	FBT_DblJumpLand                = 7,
	FBT_None                       = 8,
	FBT_MAX                        = 9
};


// Enum UDKBase.UDKAnimBlendByFlying.EFlyingState
enum class EFlyingState : uint8_t
{
	Flying_NotFlying               = 0,
	Flying_OpeningWings            = 1,
	Flying_Flying                  = 2,
	Flying_ClosingWings            = 3,
	Flying_MAX                     = 4
};


// Enum UDKBase.UDKMapMusicInfo.ECrossfadeType
enum class ECrossfadeType : uint8_t
{
	CFT_BeginningOfMeasure         = 0,
	CFT_EndOfMeasure               = 1,
	CFT_MAX                        = 2
};


// Enum UDKBase.UDKUIDataProvider_MenuOption.EUTOptionType
enum class EUTOptionType : uint8_t
{
	UTOT_ComboReadOnly             = 0,
	UTOT_ComboNumeric              = 1,
	UTOT_CheckBox                  = 2,
	UTOT_Slider                    = 3,
	UTOT_Spinner                   = 4,
	UTOT_EditBox                   = 5,
	UTOT_CollectionCheckBox        = 6,
	UTOT_MAX                       = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UDKBase.UDKBot.EnemyPosition
// 0x001C
struct FEnemyPosition
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C)
	float                                              Time;                                                     // 0x0018(0x0004)
};

// ScriptStruct UDKBase.UDKEmitterPool.AttachedExplosionLight
// 0x0014
struct FAttachedExplosionLight
{
	class UUDKExplosionLight*                          Light;                                                    // 0x0000(0x0004) (ExportObject, Component, EditInline)
	class AActor*                                      Base;                                                     // 0x0004(0x0004)
	struct FVector                                     RelativeLocation;                                         // 0x0008(0x000C)
};

// ScriptStruct UDKBase.UDKExplosionLight.LightValues
// 0x0010
struct FLightValues
{
	float                                              StartTime;                                                // 0x0000(0x0004)
	float                                              Radius;                                                   // 0x0004(0x0004)
	float                                              Brightness;                                               // 0x0008(0x0004)
	struct FColor                                      LightColor;                                               // 0x000C(0x0004)
};

// ScriptStruct UDKBase.UDKMapMusicInfo.MusicSegment
// 0x0010
struct FMusicSegment
{
	float                                              TempoOverride;                                            // 0x0000(0x0004) (Edit)
	TEnumAsByte<ECrossfadeType>                        CrossfadeRule;                                            // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                CrossfadeToMeNumMeasuresDuration;                         // 0x0008(0x0004) (Edit)
	class USoundCue*                                   TheCue;                                                   // 0x000C(0x0004) (Edit)
};

// ScriptStruct UDKBase.UDKMapMusicInfo.MusicForAMap
// 0x0064
struct FMusicForAMap
{
	float                                              Tempo;                                                    // 0x0000(0x0004) (Edit)
	struct FMusicSegment                               Action;                                                   // 0x0004(0x0010) (Edit)
	struct FMusicSegment                               Ambient;                                                  // 0x0014(0x0010) (Edit)
	struct FMusicSegment                               Intro;                                                    // 0x0024(0x0010) (Edit)
	struct FMusicSegment                               Suspense;                                                 // 0x0034(0x0010) (Edit)
	struct FMusicSegment                               Tension;                                                  // 0x0044(0x0010) (Edit)
	struct FMusicSegment                               Victory;                                                  // 0x0054(0x0010) (Edit)
};

// ScriptStruct UDKBase.UDKMapMusicInfo.StingersForAMap
// 0x003C
struct FStingersForAMap
{
	class USoundCue*                                   Died;                                                     // 0x0000(0x0004) (Edit)
	class USoundCue*                                   DoubleKill;                                               // 0x0004(0x0004) (Edit)
	class USoundCue*                                   EnemyGrabFlag;                                            // 0x0008(0x0004) (Edit)
	class USoundCue*                                   FirstKillingSpree;                                        // 0x000C(0x0004) (Edit)
	class USoundCue*                                   FlagReturned;                                             // 0x0010(0x0004) (Edit)
	class USoundCue*                                   GrabFlag;                                                 // 0x0014(0x0004) (Edit)
	class USoundCue*                                   Kill;                                                     // 0x0018(0x0004) (Edit)
	class USoundCue*                                   LongKillingSpree;                                         // 0x001C(0x0004) (Edit)
	class USoundCue*                                   MajorKill;                                                // 0x0020(0x0004) (Edit)
	class USoundCue*                                   MonsterKill;                                              // 0x0024(0x0004) (Edit)
	class USoundCue*                                   MultiKill;                                                // 0x0028(0x0004) (Edit)
	class USoundCue*                                   ReturnFlag;                                               // 0x002C(0x0004) (Edit)
	class USoundCue*                                   ScoreLosing;                                              // 0x0030(0x0004) (Edit)
	class USoundCue*                                   ScoreTie;                                                 // 0x0034(0x0004) (Edit)
	class USoundCue*                                   ScoreWinning;                                             // 0x0038(0x0004) (Edit)
};

// ScriptStruct UDKBase.UDKPawn.PlayEmoteInfo
// 0x0010
struct FPlayEmoteInfo
{
	struct FName                                       EmoteTag;                                                 // 0x0000(0x0008)
	int                                                EmoteID;                                                  // 0x0008(0x0004)
	unsigned long                                      bNewData : 1;                                             // 0x000C(0x0004)
};

// ScriptStruct UDKBase.UDKPawn.UTTakeHitInfo
// 0x0028
struct FUTTakeHitInfo
{
	int                                                Damage;                                                   // 0x0000(0x0004)
	struct FVector                                     HitLocation;                                              // 0x0004(0x000C)
	struct FVector                                     Momentum;                                                 // 0x0010(0x000C)
	class UClass*                                      DamageType;                                               // 0x001C(0x0004)
	struct FName                                       HitBone;                                                  // 0x0020(0x0008)
};

// ScriptStruct UDKBase.UDKPawn.DrivenWeaponPawnInfo
// 0x000C
struct FDrivenWeaponPawnInfo
{
	class AUDKVehicle*                                 BaseVehicle;                                              // 0x0000(0x0004)
	unsigned char                                      SeatIndex;                                                // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class APlayerReplicationInfo*                      PRI;                                                      // 0x0008(0x0004)
};

// ScriptStruct UDKBase.UDKSquadAI.AlternateRoute
// 0x000C
struct FAlternateRoute
{
	TArray<class ANavigationPoint*>                    RouteCache;                                               // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKBase.UDKUIDataStore_StringAliasBindingMap.ControllerMap
// 0x0020
struct FControllerMap
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008)
	struct FString                                     XBoxMapping;                                              // 0x0008(0x000C) (NeedCtorLink)
	struct FString                                     PS3Mapping;                                               // 0x0014(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKBase.UDKUIDataStore_StringList.EStringListData
// 0x0034
struct FEStringListData
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008)
	struct FString                                     ColumnHeaderText;                                         // 0x0008(0x000C) (Const, Localized, NeedCtorLink)
	struct FString                                     CurrentValue;                                             // 0x0014(0x000C) (NeedCtorLink)
	int                                                DefaultValueIndex;                                        // 0x0020(0x0004)
	TArray<struct FString>                             Strings;                                                  // 0x0024(0x000C) (Const, Localized, NeedCtorLink)
	class UUDKUIDataProvider_StringArray*              DataProvider;                                             // 0x0030(0x0004) (Transient)
};

// ScriptStruct UDKBase.UDKVehicle.BurnOutDatum
// 0x0008
struct FBurnOutDatum
{
	class UMaterialInstanceTimeVarying*                MITV;                                                     // 0x0000(0x0004)
	float                                              CurrValue;                                                // 0x0004(0x0004)
};

// ScriptStruct UDKBase.UDKPawn.MaterialSoundEffect
// 0x000C
struct FMaterialSoundEffect
{
	struct FName                                       MaterialType;                                             // 0x0000(0x0008)
	class USoundCue*                                   Sound;                                                    // 0x0008(0x0004)
};

// ScriptStruct UDKBase.UDKPawn.MaterialParticleEffect
// 0x000C
struct FMaterialParticleEffect
{
	struct FName                                       MaterialType;                                             // 0x0000(0x0008)
	class UParticleSystem*                             ParticleTemplate;                                         // 0x0008(0x0004)
};

// ScriptStruct UDKBase.UDKVehicle.WeaponEffectInfo
// 0x0024
struct FWeaponEffectInfo
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008)
	struct FVector                                     offset;                                                   // 0x0008(0x000C)
	struct FVector                                     Scale3D;                                                  // 0x0014(0x000C)
	class UStaticMeshComponent*                        Effect;                                                   // 0x0020(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct UDKBase.UDKVehicle.VehicleSeat
// 0x012C
struct FVehicleSeat
{
	class APawn*                                       StoragePawn;                                              // 0x0000(0x0004) (Edit, EditInline)
	class AVehicle*                                    SeatPawn;                                                 // 0x0004(0x0004) (Edit, EditInline)
	class UClass*                                      GunClass;                                                 // 0x0008(0x0004) (Edit)
	class AUDKWeapon*                                  Gun;                                                      // 0x000C(0x0004) (Edit, EditInline)
	TArray<struct FName>                               GunSocket;                                                // 0x0010(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               GunPivotPoints;                                           // 0x001C(0x000C) (Edit, NeedCtorLink)
	int                                                BarrelIndex;                                              // 0x0028(0x0004)
	struct FString                                     TurretVarPrefix;                                          // 0x002C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FWeaponEffectInfo>                   WeaponEffects;                                            // 0x0038(0x000C) (Component, NeedCtorLink)
	struct FName                                       WeaponRotationName;                                       // 0x0044(0x0008)
	struct FName                                       FlashLocationName;                                        // 0x004C(0x0008)
	struct FName                                       FlashCountName;                                           // 0x0054(0x0008)
	struct FName                                       FiringModeName;                                           // 0x005C(0x0008)
	struct FPointer                                    WeaponRotationProperty;                                   // 0x0064(0x0004) (Const)
	struct FPointer                                    FlashLocationProperty;                                    // 0x0068(0x0004) (Const)
	struct FPointer                                    FlashCountProperty;                                       // 0x006C(0x0004) (Const)
	struct FPointer                                    FiringModeProperty;                                       // 0x0070(0x0004) (Const)
	struct FRotator                                    LastWeaponRotation;                                       // 0x0074(0x000C)
	TArray<struct FName>                               TurretControls;                                           // 0x0080(0x000C) (Edit, NeedCtorLink)
	TArray<class UUDKSkelControl_TurretConstrained*>   TurretControllers;                                        // 0x008C(0x000C) (Edit, NeedCtorLink, EditInline)
	struct FVector                                     AimPoint;                                                 // 0x0098(0x000C)
	class AActor*                                      AimTarget;                                                // 0x00A4(0x0004)
	float                                              PivotFireOffsetZ;                                         // 0x00A8(0x0004)
	unsigned long                                      bDisableOffsetZAdjust : 1;                                // 0x00AC(0x0004)
	struct FName                                       CameraTag;                                                // 0x00B0(0x0008) (Edit)
	struct FVector                                     CameraBaseOffset;                                         // 0x00B8(0x000C) (Edit)
	struct FVector                                     CameraSafeOffset;                                         // 0x00C4(0x000C) (Edit)
	float                                              CameraOffset;                                             // 0x00D0(0x0004) (Edit)
	float                                              CameraEyeHeight;                                          // 0x00D4(0x0004) (Edit)
	float                                              ViewPitchMin;                                             // 0x00D8(0x0004) (Edit)
	float                                              ViewPitchMax;                                             // 0x00DC(0x0004) (Edit)
	unsigned long                                      bSeatVisible : 1;                                         // 0x00E0(0x0004) (Edit)
	struct FName                                       SeatBone;                                                 // 0x00E4(0x0008) (Edit)
	struct FVector                                     SeatOffset;                                               // 0x00EC(0x000C) (Edit)
	struct FRotator                                    SeatRotation;                                             // 0x00F8(0x000C) (Edit)
	struct FName                                       SeatSocket;                                               // 0x0104(0x0008) (Edit)
	class UClass*                                      MuzzleFlashLightClass;                                    // 0x010C(0x0004)
	class UUDKExplosionLight*                          MuzzleFlashLight;                                         // 0x0110(0x0004) (ExportObject, Component, EditInline)
	class UClass*                                      ImpactFlashLightClass;                                    // 0x0114(0x0004)
	float                                              DriverDamageMult;                                         // 0x0118(0x0004) (Edit)
	class UAudioComponent*                             SeatMotionAudio;                                          // 0x011C(0x0004) (ExportObject, Component, EditInline)
	class AUDKVehicleMovementEffect*                   SeatMovementEffect;                                       // 0x0120(0x0004)
	struct FVector2D                                   SeatIconPOS;                                              // 0x0124(0x0008)
};

// ScriptStruct UDKBase.UDKVehicle.VehicleAnim
// 0x0024
struct FVehicleAnim
{
	struct FName                                       AnimTag;                                                  // 0x0000(0x0008) (Edit)
	TArray<struct FName>                               AnimSeqs;                                                 // 0x0008(0x000C) (Edit, NeedCtorLink)
	float                                              AnimRate;                                                 // 0x0014(0x0004) (Edit)
	unsigned long                                      bAnimLoopLastSeq : 1;                                     // 0x0018(0x0004) (Edit)
	struct FName                                       AnimPlayerName;                                           // 0x001C(0x0008) (Edit)
};

// ScriptStruct UDKBase.UDKVehicle.VehicleSound
// 0x0018
struct FVehicleSound
{
	struct FName                                       SoundStartTag;                                            // 0x0000(0x0008) (Edit)
	struct FName                                       SoundEndTag;                                              // 0x0008(0x0008) (Edit)
	class USoundCue*                                   SoundTemplate;                                            // 0x0010(0x0004) (Edit)
	class UAudioComponent*                             SoundRef;                                                 // 0x0014(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct UDKBase.UDKVehicle.DamageParamScales
// 0x000C
struct FDamageParamScales
{
	struct FName                                       DamageParamName;                                          // 0x0000(0x0008)
	float                                              Scale;                                                    // 0x0008(0x0004)
};

// ScriptStruct UDKBase.UDKVehicle.FDamageMorphTargets
// 0x0030
struct FFDamageMorphTargets
{
	struct FName                                       MorphNodeName;                                            // 0x0000(0x0008)
	class UMorphNodeWeight*                            MorphNode;                                                // 0x0008(0x0004)
	struct FName                                       LinkedMorphNodeName;                                      // 0x000C(0x0008)
	int                                                LinkedMorphNodeIndex;                                     // 0x0014(0x0004)
	struct FName                                       InfluenceBone;                                            // 0x0018(0x0008)
	int                                                Health;                                                   // 0x0020(0x0004)
	TArray<struct FName>                               DamagePropNames;                                          // 0x0024(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKBase.UDKVehicle.VehicleEffect
// 0x0028
struct FVehicleEffect
{
	struct FName                                       EffectStartTag;                                           // 0x0000(0x0008) (Edit)
	struct FName                                       EffectEndTag;                                             // 0x0008(0x0008) (Edit)
	unsigned long                                      bRestartRunning : 1;                                      // 0x0010(0x0004) (Edit)
	unsigned long                                      bHighDetailOnly : 1;                                      // 0x0010(0x0004) (Edit)
	class UParticleSystem*                             EffectTemplate;                                           // 0x0014(0x0004) (Edit)
	class UParticleSystem*                             EffectTemplate_Blue;                                      // 0x0018(0x0004) (Edit)
	struct FName                                       EffectSocket;                                             // 0x001C(0x0008) (Edit)
	class UParticleSystemComponent*                    EffectRef;                                                // 0x0024(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeParams
// 0x0010
struct FPhysicsVolumeParams
{
	int                                                ChildIndex;                                               // 0x0000(0x0004) (Edit)
	unsigned long                                      bWaterVolume : 1;                                         // 0x0004(0x0004) (Edit)
	unsigned long                                      bCheckGravity : 1;                                        // 0x0004(0x0004) (Edit)
	float                                              MinGravity;                                               // 0x0008(0x0004) (Edit)
	float                                              MaxGravity;                                               // 0x000C(0x0004) (Edit)
};

// ScriptStruct UDKBase.UDKAnimNodeCopyBoneTranslation.BoneCopyInfo
// 0x0018
struct FBoneCopyInfo
{
	struct FName                                       SrcBoneName;                                              // 0x0000(0x0008) (Edit)
	struct FName                                       DstBoneName;                                              // 0x0008(0x0008) (Edit)
	int                                                SrcBoneIndex;                                             // 0x0010(0x0004) (Const)
	int                                                DstBoneIndex;                                             // 0x0014(0x0004) (Const)
};

// ScriptStruct UDKBase.UDKSkelControl_TurretConstrained.TurretConstraintData
// 0x000C
struct FTurretConstraintData
{
	int                                                PitchConstraint;                                          // 0x0000(0x0004) (Edit)
	int                                                YawConstraint;                                            // 0x0004(0x0004) (Edit)
	int                                                RollConstraint;                                           // 0x0008(0x0004) (Edit)
};

// ScriptStruct UDKBase.UDKSkelControl_TurretConstrained.TurretStepData
// 0x0020
struct FTurretStepData
{
	int                                                StepStartAngle;                                           // 0x0000(0x0004) (Edit)
	int                                                StepEndAngle;                                             // 0x0004(0x0004) (Edit)
	struct FTurretConstraintData                       MaxAngle;                                                 // 0x0008(0x000C) (Edit)
	struct FTurretConstraintData                       MinAngle;                                                 // 0x0014(0x000C) (Edit)
};

// ScriptStruct UDKBase.UDKAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0014
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                          // 0x0000(0x000C) (Edit)
	struct FName                                       AnimName;                                                 // 0x000C(0x0008) (Edit)
};

// ScriptStruct UDKBase.UDKPawn.MaterialImpactEffect
// 0x0030
struct FMaterialImpactEffect
{
	struct FName                                       MaterialType;                                             // 0x0000(0x0008)
	class USoundCue*                                   Sound;                                                    // 0x0008(0x0004)
	TArray<class UMaterialInterface*>                  DecalMaterials;                                           // 0x000C(0x000C) (NeedCtorLink)
	float                                              DurationOfDecal;                                          // 0x0018(0x0004)
	struct FName                                       DecalDissolveParamName;                                   // 0x001C(0x0008)
	float                                              DecalWidth;                                               // 0x0024(0x0004)
	float                                              DecalHeight;                                              // 0x0028(0x0004)
	class UParticleSystem*                             ParticleTemplate;                                         // 0x002C(0x0004)
};

// ScriptStruct UDKBase.UDKPawn.DistanceBasedParticleTemplate
// 0x0008
struct FDistanceBasedParticleTemplate
{
	class UParticleSystem*                             Template;                                                 // 0x0000(0x0004)
	float                                              MinDistance;                                              // 0x0004(0x0004)
};

// ScriptStruct UDKBase.UDKPawn.EmoteInfo
// 0x0034
struct FEmoteInfo
{
	struct FName                                       CategoryName;                                             // 0x0000(0x0008)
	struct FName                                       EmoteTag;                                                 // 0x0008(0x0008)
	struct FString                                     EmoteName;                                                // 0x0010(0x000C) (Const, Localized, NeedCtorLink)
	struct FName                                       EmoteAnim;                                                // 0x001C(0x0008)
	unsigned long                                      bVictoryEmote : 1;                                        // 0x0024(0x0004)
	unsigned long                                      bTopHalfEmote : 1;                                        // 0x0024(0x0004)
	struct FName                                       Command;                                                  // 0x0028(0x0008)
	unsigned long                                      bRequiresPlayer : 1;                                      // 0x0030(0x0004)
};

// ScriptStruct UDKBase.UDKPlayerController.ObjectiveAnnouncementInfo
// 0x0010
struct FObjectiveAnnouncementInfo
{
	class USoundNodeWave*                              AnnouncementSound;                                        // 0x0000(0x0004) (Edit)
	struct FString                                     AnnouncementText;                                         // 0x0004(0x000C) (Edit, Const, Localized, NeedCtorLink)
};

// ScriptStruct UDKBase.UDKUIDataStore_StringAliasBindingMap.BindCacheElement
// 0x0018
struct FBindCacheElement
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008)
	struct FString                                     MappingString;                                            // 0x0008(0x000C) (NeedCtorLink)
	int                                                FieldIndex;                                               // 0x0014(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
