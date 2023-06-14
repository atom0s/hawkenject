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

// Class GFxUI.GFxEngine
// 0x0010 (0x004C - 0x003C)
class UGFxEngine : public UObject
{
public:
	TArray<struct FGCReference>                        GCReferences;                                             // 0x003C(0x000C) (Transient, NeedCtorLink)
	int                                                RefCount;                                                 // 0x0048(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxEngine");
		return ptr;
	}

};


// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxFSCmdHandler");
		return ptr;
	}


	bool FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg);
};


// Class GFxUI.GFxInteraction
// 0x0008 (0x0080 - 0x0078)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                             // 0x0078(0x0004) (Const, Native, NoExport)
	unsigned long                                      bFakeMobileTouches : 1;                                   // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxInteraction");
		return ptr;
	}


	void CloseAllMoviePlayers();
	void NotifySplitscreenLayoutChanged();
	void NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer);
	void NotifyGameSessionEnded();
	class UGFxMoviePlayer* GetFocusMovie(int ControllerId);
};


// Class GFxUI.GFxMoviePlayer
// 0x0130 (0x016C - 0x003C)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                                   // 0x003C(0x0004) (Const, Native, Transient)
	struct FPointer                                    pCaptureKeys;                                             // 0x0040(0x0004) (Const, Native, Transient)
	struct FPointer                                    pFocusIgnoreKeys;                                         // 0x0044(0x0004) (Const, Native, Transient)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0048(0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUClasses
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0084(0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUObjects
	int                                                NextASUObject;                                            // 0x00C0(0x0004) (Const, Transient)
	class USwfMovie*                                   MovieInfo;                                                // 0x00C4(0x0004)
	unsigned long                                      bMovieIsOpen : 1;                                         // 0x00C8(0x0004) (Const)
	unsigned long                                      bDisplayWithHudOff : 1;                                   // 0x00C8(0x0004)
	unsigned long                                      bEnableGammaCorrection : 1;                               // 0x00C8(0x0004)
	unsigned long                                      bWidgetsInitializedThisFrame : 1;                         // 0x00C8(0x0004) (Const, Transient)
	unsigned long                                      bLogUnhandedWidgetInitializations : 1;                    // 0x00C8(0x0004)
	unsigned long                                      bAllowInput : 1;                                          // 0x00C8(0x0004)
	unsigned long                                      bAllowFocus : 1;                                          // 0x00C8(0x0004)
	unsigned long                                      bAutoPlay : 1;                                            // 0x00C8(0x0004)
	unsigned long                                      bPauseGameWhileActive : 1;                                // 0x00C8(0x0004)
	unsigned long                                      bDisableWorldRendering : 1;                               // 0x00C8(0x0004)
	unsigned long                                      bCaptureWorldRendering : 1;                               // 0x00C8(0x0004)
	unsigned long                                      bCloseOnLevelChange : 1;                                  // 0x00C8(0x0004)
	unsigned long                                      bOnlyOwnerFocusable : 1;                                  // 0x00C8(0x0004)
	unsigned long                                      bForceFullViewport : 1;                                   // 0x00C8(0x0004)
	unsigned long                                      bDiscardNonOwnerInput : 1;                                // 0x00C8(0x0004)
	unsigned long                                      bCaptureInput : 1;                                        // 0x00C8(0x0004)
	unsigned long                                      bCaptureMouseInput : 1;                                   // 0x00C8(0x0004)
	unsigned long                                      bIgnoreMouseInput : 1;                                    // 0x00C8(0x0004)
	unsigned long                                      bIsSplitscreenLayoutModified : 1;                         // 0x00C8(0x0004) (Transient)
	unsigned long                                      bShowHardwareMouseCursor : 1;                             // 0x00C8(0x0004)
	unsigned long                                      bFollowHmdRotation : 1;                                   // 0x00C8(0x0004)
	unsigned long                                      bAdjustAspectRatioForStereo : 1;                          // 0x00C8(0x0004)
	unsigned long                                      bBlurLesserMovies : 1;                                    // 0x00C8(0x0004)
	unsigned long                                      bHideLesserMovies : 1;                                    // 0x00C8(0x0004)
	unsigned long                                      bIsPriorityBlurred : 1;                                   // 0x00C8(0x0004)
	unsigned long                                      bIsPriorityHidden : 1;                                    // 0x00C8(0x0004)
	unsigned long                                      bIgnoreVisibilityEffect : 1;                              // 0x00C8(0x0004)
	unsigned long                                      bIgnoreBlurEffect : 1;                                    // 0x00C8(0x0004)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x00CC(0x0004) (Edit)
	int                                                LocalPlayerOwnerIndex;                                    // 0x00D0(0x0004) (Transient)
	class UObject*                                     ExternalInterface;                                        // 0x00D4(0x0004)
	TArray<struct FName>                               CaptureKeys;                                              // 0x00D8(0x000C) (NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                                          // 0x00E4(0x000C) (NeedCtorLink)
	TArray<struct FExternalTexture>                    ExternalTextures;                                         // 0x00F0(0x000C) (NeedCtorLink)
	TArray<struct FSoundThemeBinding>                  SoundThemes;                                              // 0x00FC(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EGFxTimingMode>                        TimingMode;                                               // 0x0108(0x0001)
	TEnumAsByte<EGFxRenderTextureMode>                 RenderTextureMode;                                        // 0x0109(0x0001)
	unsigned char                                      Priority;                                                 // 0x010A(0x0001)
	unsigned char                                      UnknownData02[0x1];                                       // 0x010B(0x0001) MISSED OFFSET
	TArray<struct FGFxWidgetBinding>                   WidgetBindings;                                           // 0x010C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x3C];                                      // 0x0118(0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.WidgetPathBindings
	class UGFxObject*                                  SplitscreenLayoutObject;                                  // 0x0154(0x0004) (Transient)
	int                                                SplitscreenLayoutYAdjust;                                 // 0x0158(0x0004) (Config)
	float                                              HmdExtraDepth;                                            // 0x015C(0x0004)
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                                // 0x0160(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxMoviePlayer");
		return ptr;
	}


	unsigned char GetPriority();
	void DrawVisibleFrameRect(class UCanvas* C, const struct FColor& OutlineColor, const struct FColor& TextColor);
	void DrawMovieViewportOutline(class UCanvas* C, const struct FColor& OutlineColor, const struct FColor& TextColor);
	void LogVisibleFrameInfo(const struct FString& LogDebugName);
	void LogMovieViewportInfo(const struct FString& LogDebugName);
	void UpdateSplitscreenLayout();
	void ApplyPriorityVisibilityEffect(bool bRemoveEffect);
	void ApplyPriorityBlurEffect(bool bRemoveEffect);
	void ApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState);
	void PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName);
	void OnFocusLost(int LocalPlayerIndex);
	void OnFocusGained(int LocalPlayerIndex);
	void ConsoleCommand(const struct FString& Command);
	class APlayerController* GetPC();
	class ULocalPlayer* GetLP();
	void Init(class ULocalPlayer* LocPlay);
	void SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path);
	void PostWidgetInit();
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	class UGFxObject* ActionScriptConstructor(const struct FString& ClassName);
	class UGFxObject* ActionScriptObject(const struct FString& Path);
	struct FString ActionScriptString(const struct FString& Path);
	float ActionScriptFloat(const struct FString& Path);
	int ActionScriptInt(const struct FString& Path);
	void ActionScriptVoid(const struct FString& Path);
	struct FASValue Invoke(const struct FString& method, TArray<struct FASValue> args);
	void ActionScriptSetFunction(class UGFxObject* Object, const struct FString& Member);
	class UGFxObject* CreateArray();
	class UGFxObject* CreateObject(const struct FString& ASClass, class UClass* Type, TArray<struct FASValue> args);
	bool SetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString> Arg);
	bool SetVariableFloatArray(const struct FString& Path, int Index, TArray<float> Arg);
	bool SetVariableIntArray(const struct FString& Path, int Index, TArray<int> Arg);
	bool SetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue> Arg);
	bool GetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString>* Arg);
	bool GetVariableFloatArray(const struct FString& Path, int Index, TArray<float>* Arg);
	bool GetVariableIntArray(const struct FString& Path, int Index, TArray<int>* Arg);
	bool GetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue>* Arg);
	void SetVariableObject(const struct FString& Path, class UGFxObject* Object);
	void SetVariableString(const struct FString& Path, const struct FString& S);
	void SetVariableInt(const struct FString& Path, int I);
	void SetVariableNumber(const struct FString& Path, float F);
	void SetVariableBool(const struct FString& Path, bool B);
	void SetVariable(const struct FString& Path, const struct FASValue& Arg);
	class UGFxObject* GetVariableObject(const struct FString& Path, class UClass* Type);
	struct FString GetVariableString(const struct FString& Path);
	int GetVariableInt(const struct FString& Path);
	float GetVariableNumber(const struct FString& Path);
	bool GetVariableBool(const struct FString& Path);
	struct FASValue GetVariable(const struct FString& Path);
	int GetAVMVersion();
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	void FlushPlayerInput(bool capturekeysonly);
	void ClearFocusIgnoreKeys();
	void AddFocusIgnoreKey(const struct FName& Key);
	void ClearCaptureKeys();
	void AddCaptureKey(const struct FName& Key);
	void SetMovieCanReceiveInput(bool bCanReceiveInput);
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
	TEnumAsByte<EGFxScaleMode> GetViewScaleMode();
	TEnumAsByte<EGFxAlign> GetAlignment();
	void GetPerspective3D(struct FMatrix* matPersp);
	void GetView3D(struct FMatrix* matView);
	void SetPerspective3D(struct FMatrix* matPersp);
	void SetView3D(struct FMatrix* matView);
	void GetVisibleFrameRect(float* x0, float* y0, float* X1, float* Y1);
	void SetAlignment(TEnumAsByte<EGFxAlign> A);
	void SetViewScaleMode(TEnumAsByte<EGFxScaleMode> SM);
	bool GetViewport(struct FMovieViewportMirror* out_Viewport);
	void SetViewport(int X, int Y, int Width, int Height);
	class UGameViewportClient* GetGameViewportClient();
	void SetPriority(unsigned char NewPriority);
	bool SetExternalTexture(const struct FString& Resource, class UTexture* Texture);
	void SetExternalInterface(class UObject* H);
	void SetTimingMode(TEnumAsByte<EGFxTimingMode> Mode);
	void SetMovieInfo(class USwfMovie* Data);
	void ConditionalClearPause();
	void OnCleanup(bool bUnload);
	void OnClose();
	void Close(bool Unload);
	void SetPause(bool bPausePlayback);
	void OnPostAdvance(float DeltaTime);
	void PostAdvance(float DeltaTime);
	void Advance(float Time);
	bool Start(bool StartPaused);
	bool ScreenResized(int ViewportSizeX, int ViewportSizeY, int* RenderTargetSizeX, int* RenderTargetSizeY);
};


// Class GFxUI.GFxObject
// 0x003C (0x0078 - 0x003C)
class UGFxObject : public UObject
{
public:
	int                                                Value[0xC];                                               // 0x003C(0x0004) (Const, Native)
	TArray<struct FGFxWidgetBinding>                   SubWidgetBindings;                                        // 0x006C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxObject");
		return ptr;
	}


	void FixStereoFOV(bool bStereoEnabledNow);
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	class UGFxObject* AttachMovie(const struct FString& symbolname, const struct FString& instancename, int Depth, class UClass* Type);
	class UGFxObject* CreateEmptyMovieClip(const struct FString& instancename, int Depth, class UClass* Type);
	void GotoAndStopI(int frame);
	void GotoAndStop(const struct FString& frame);
	void GotoAndPlayI(int frame);
	void GotoAndPlay(const struct FString& frame);
	TArray<class UGFxObject*> ActionScriptArray(const struct FString& Path);
	class UGFxObject* ActionScriptObject(const struct FString& Path);
	struct FString ActionScriptString(const struct FString& method);
	float ActionScriptFloat(const struct FString& method);
	int ActionScriptInt(const struct FString& method);
	void ActionScriptVoid(const struct FString& method);
	struct FASValue Invoke(const struct FString& Member, TArray<struct FASValue> args);
	void ActionScriptSetFunctionOn(class UGFxObject* Target, const struct FString& Member);
	void ActionScriptSetFunction(const struct FString& Member);
	void SetElementMemberString(int Index, const struct FString& Member, const struct FString& S);
	void SetElementMemberInt(int Index, const struct FString& Member, int I);
	void SetElementMemberFloat(int Index, const struct FString& Member, float F);
	void SetElementMemberBool(int Index, const struct FString& Member, bool B);
	void SetElementMemberObject(int Index, const struct FString& Member, class UGFxObject* val);
	void SetElementMember(int Index, const struct FString& Member, const struct FASValue& Arg);
	struct FString GetElementMemberString(int Index, const struct FString& Member);
	int GetElementMemberInt(int Index, const struct FString& Member);
	float GetElementMemberFloat(int Index, const struct FString& Member);
	bool GetElementMemberBool(int Index, const struct FString& Member);
	class UGFxObject* GetElementMemberObject(int Index, const struct FString& Member, class UClass* Type);
	struct FASValue GetElementMember(int Index, const struct FString& Member);
	void SetElementColorTransform(int Index, const struct FASColorTransform& cxform);
	void SetElementPosition(int Index, float X, float Y);
	void SetElementVisible(int Index, bool Visible);
	void SetElementDisplayMatrix(int Index, const struct FMatrix& M);
	void SetElementDisplayInfo(int Index, struct FASDisplayInfo* D);
	struct FMatrix GetElementDisplayMatrix(int Index);
	struct FASDisplayInfo GetElementDisplayInfo(int Index);
	void SetElementString(int Index, const struct FString& S);
	void SetElementInt(int Index, int I);
	void SetElementFloat(int Index, float F);
	void SetElementBool(int Index, bool B);
	void SetElementObject(int Index, class UGFxObject* val);
	void SetElement(int Index, const struct FASValue& Arg);
	struct FString GetElementString(int Index);
	int GetElementInt(int Index);
	float GetElementFloat(int Index);
	bool GetElementBool(int Index);
	class UGFxObject* GetElementObject(int Index, class UClass* Type);
	struct FASValue GetElement(int Index);
	void SetText(const struct FString& Text, class UTranslationContext* InContext);
	struct FString GetText();
	void SetVisible(bool Visible);
	void SetDisplayMatrix3D(const struct FMatrix& M);
	void SetDisplayMatrix(const struct FMatrix& M);
	void SetColorTransform(const struct FASColorTransform& cxform);
	void SetPosition(float X, float Y);
	void SetDisplayInfo(struct FASDisplayInfo* D);
	struct FMatrix GetDisplayMatrix3D();
	struct FMatrix GetDisplayMatrix();
	struct FASColorTransform GetColorTransform();
	bool GetPosition(float* X, float* Y);
	struct FASDisplayInfo GetDisplayInfo();
	struct FString STATIC_TranslateString(const struct FString& StringToTranslate, class UTranslationContext* InContext);
	void SetFunction(const struct FString& Member, class UObject* context, const struct FName& fname);
	void SetObject(const struct FString& Member, class UGFxObject* val);
	void SetString(const struct FString& Member, const struct FString& S, class UTranslationContext* InContext);
	void SetInt(const struct FString& Member, int I);
	void SetFloat(const struct FString& Member, float F);
	void SetBool(const struct FString& Member, bool B);
	void Set(const struct FString& Member, const struct FASValue& Arg);
	class UGFxObject* GetObject(const struct FString& Member, class UClass* Type);
	struct FString GetString(const struct FString& Member);
	int GetInt(const struct FString& Member);
	float GetFloat(const struct FString& Member);
	bool GetBool(const struct FString& Member);
	struct FASValue Get(const struct FString& Member);
};


// Class GFxUI.GFxRawData
// 0x0030 (0x006C - 0x003C)
class UGFxRawData : public UObject
{
public:
	TArray<unsigned char>                              RawData;                                                  // 0x003C(0x000C) (Const, NeedCtorLink)
	TArray<struct FString>                             ReferencedSwfs;                                           // 0x0048(0x000C) (Edit, EditConst, NeedCtorLink)
	TArray<class UObject*>                             References;                                               // 0x0054(0x000C) (Edit, EditConst, NeedCtorLink)
	TArray<class UObject*>                             UserReferences;                                           // 0x0060(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxRawData");
		return ptr;
	}

};


// Class GFxUI.SwfMovie
// 0x0040 (0x00AC - 0x006C)
class USwfMovie : public UGFxRawData
{
public:
	unsigned long                                      bUsesFontlib : 1;                                         // 0x006C(0x0004) (Edit)
	unsigned long                                      bSetSRGBOnImportedTextures : 1;                           // 0x006C(0x0004) (Edit, EditConst)
	unsigned long                                      bPackTextures : 1;                                        // 0x006C(0x0004) (Edit)
	unsigned long                                      bForceSquarePacking : 1;                                  // 0x006C(0x0004) (Edit)
	struct FString                                     SourceFile;                                               // 0x0070(0x000C) (Edit, NeedCtorLink)
	int                                                PackTextureSize;                                          // 0x007C(0x0004) (Edit)
	TEnumAsByte<EFlashTextureRescale>                  TextureRescale;                                           // 0x0080(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FString                                     TextureFormat;                                            // 0x0084(0x000C) (Edit, EditConst, NeedCtorLink)
	struct FString                                     SourceFileTimestamp;                                      // 0x0090(0x000C) (Edit, EditConst, NeedCtorLink)
	int                                                RTTextures;                                               // 0x009C(0x0004)
	int                                                RTVideoTextures;                                          // 0x00A0(0x0004)
	struct FQWord                                      ImportTimeStamp;                                          // 0x00A4(0x0008) (Const, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.SwfMovie");
		return ptr;
	}

};


// Class GFxUI.FlashMovie
// 0x0000 (0x00AC - 0x00AC)
class UFlashMovie : public USwfMovie
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.FlashMovie");
		return ptr;
	}

};


// Class GFxUI.GFxAction_CloseMovie
// 0x0008 (0x0104 - 0x00FC)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x00FC(0x0004)
	unsigned long                                      bUnload : 1;                                              // 0x0100(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_CloseMovie");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_GetVariable
// 0x0010 (0x010C - 0x00FC)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x00FC(0x0004)
	struct FString                                     Variable;                                                 // 0x0100(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_GetVariable");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_Invoke
// 0x001C (0x0118 - 0x00FC)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x00FC(0x0004)
	struct FString                                     MethodName;                                               // 0x0100(0x000C) (Edit, NeedCtorLink)
	TArray<struct FASValue>                            Arguments;                                                // 0x010C(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_Invoke");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_OpenMovie
// 0x0030 (0x012C - 0x00FC)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                                    // 0x00FC(0x0004) (Edit)
	class UClass*                                      MoviePlayerClass;                                         // 0x0100(0x0004) (Edit)
	class UGFxMoviePlayer*                             MoviePlayer;                                              // 0x0104(0x0004)
	unsigned long                                      bTakeFocus : 1;                                           // 0x0108(0x0004) (Edit)
	unsigned long                                      bCaptureInput : 1;                                        // 0x0108(0x0004) (Edit)
	unsigned long                                      bStartPaused : 1;                                         // 0x0108(0x0004) (Edit)
	unsigned long                                      bEnableGammaCorrection : 1;                               // 0x0108(0x0004)
	unsigned long                                      bDisplayWithHudOff : 1;                                   // 0x0108(0x0004) (Edit)
	TEnumAsByte<EGFxRenderTextureMode>                 RenderTextureMode;                                        // 0x010C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTexture;                                            // 0x0110(0x0004) (Edit)
	TArray<struct FName>                               CaptureKeys;                                              // 0x0114(0x000C) (Edit, NeedCtorLink)
	TArray<struct FName>                               FocusIgnoreKeys;                                          // 0x0120(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_OpenMovie");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0010 (0x010C - 0x00FC)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x00FC(0x0004)
	TArray<struct FName>                               CaptureKeys;                                              // 0x0100(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_SetCaptureKeys");
		return ptr;
	}

};


// Class GFxUI.GFxAction_SetVariable
// 0x0010 (0x010C - 0x00FC)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                                    // 0x00FC(0x0004)
	struct FString                                     Variable;                                                 // 0x0100(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxAction_SetVariable");
		return ptr;
	}


	bool IsValidLevelSequenceObject();
};


// Class GFxUI.GFxEvent_FSCommand
// 0x0014 (0x0128 - 0x0114)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                                    // 0x0114(0x0004) (Edit)
	struct FString                                     FSCommand;                                                // 0x0118(0x000C) (Edit, NeedCtorLink)
	class UGFxFSCmdHandler_Kismet*                     Handler;                                                  // 0x0124(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxEvent_FSCommand");
		return ptr;
	}

};


// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxFSCmdHandler_Kismet");
		return ptr;
	}


	bool FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg);
};


// Class GFxUI.GFxClikWidget
// 0x000C (0x0084 - 0x0078)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                                // 0x0078(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GFxUI.GFxClikWidget");
		return ptr;
	}


	void ASRemoveAllEventListeners(const struct FString& Event);
	void AS3AddEventListener(const struct FString& Type, class UGFxObject* O, bool useCapture, int listenerPriority, bool useWeakReference);
	void ASAddEventListener(const struct FString& Type, class UGFxObject* O, const struct FString& func);
	void SetListener(class UGFxObject* O, const struct FString& Member, const struct FScriptDelegate& Listener);
	struct FString GetEventStringFromTypename(const struct FName& Typename);
	void RemoveAllEventListeners(const struct FString& Event);
	void AddEventListener(const struct FName& Type, const struct FScriptDelegate& Listener, bool useCapture, int listenerPriority, bool useWeakReference);
	void EventListener(const struct FEventData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
