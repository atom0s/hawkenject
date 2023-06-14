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

// Class WinDrv.FacebookWindows
// 0x0008 (0x00A4 - 0x009C)
class UFacebookWindows : public UFacebookIntegration
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x009C(0x0004) (Const, Native, NoExport)
	struct FPointer                                    ChildProcHandle;                                          // 0x00A0(0x0004) (Const, Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.FacebookWindows");
		return ptr;
	}


	void OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void RequestFacebookFriends();
	void OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void RequestFacebookMeInfo();
	void FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void ProcessFacebookRequest(const struct FString& Payload, int ResponseCode);
	void FacebookRequest(const struct FString& GraphRequest);
	void Disconnect();
	bool IsAuthorized();
	bool Authorize();
	bool Init();
};


// Class WinDrv.HttpRequestWindows
// 0x0020 (0x0068 - 0x0048)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                                  // 0x0048(0x0004) (Const, Native, Transient)
	struct FString                                     RequestVerb;                                              // 0x004C(0x000C) (Const, Native)
	struct FPointer                                    RequestURL;                                               // 0x0058(0x0004) (Const, Native, Transient)
	TArray<unsigned char>                              Payload;                                                  // 0x005C(0x000C) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpRequestWindows");
		return ptr;
	}


	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue);
	class UHttpRequestInterface* SetContentAsString(const struct FString& ContentString);
	class UHttpRequestInterface* SetContent(TArray<unsigned char>* ContentPayload);
	class UHttpRequestInterface* SetURL(const struct FString& URL);
	class UHttpRequestInterface* SetVerb(const struct FString& Verb);
	struct FString GetVerb();
	void GetContent(TArray<unsigned char>* Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(const struct FString& ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(const struct FString& HeaderName);
};


// Class WinDrv.HttpResponseWindows
// 0x0010 (0x004C - 0x003C)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                                 // 0x003C(0x0004) (Const, Native, Transient)
	TArray<unsigned char>                              Payload;                                                  // 0x0040(0x000C) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpResponseWindows");
		return ptr;
	}


	int GetResponseCode();
	struct FString GetContentAsString();
	void GetContent(TArray<unsigned char>* Content);
	struct FString GetURL();
	int GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(const struct FString& ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(const struct FString& HeaderName);
};


// Class WinDrv.SwrveAnalyticsWindows
// 0x0038 (0x00A0 - 0x0068)
class USwrveAnalyticsWindows : public UAnalyticEventsBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.SwrveAnalyticsWindows");
		return ptr;
	}

};


// Class WinDrv.WindowsClient
// 0x018C (0x01DC - 0x0050)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[0x14C];                                     // 0x0050(0x014C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                         // 0x019C(0x0004) (Config)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x01A0(0x002C) MISSED OFFSET
	int                                                AllowJoystickInput;                                       // 0x01CC(0x0004) (Config)
	unsigned char                                      UnknownData02[0xC];                                       // 0x01D0(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.WindowsClient");
		return ptr;
	}

};


// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0054 - 0x0054)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		return ptr;
	}

};


// Class WinDrv.HttpRequestWindowsMcp
// 0x0018 (0x0080 - 0x0068)
class UHttpRequestWindowsMcp : public UHttpRequestWindows
{
public:
	struct FString                                     AppID;                                                    // 0x0068(0x000C) (Const, Config, NeedCtorLink)
	struct FString                                     AppSecret;                                                // 0x0074(0x000C) (Const, Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WinDrv.HttpRequestWindowsMcp");
		return ptr;
	}


	bool ProcessRequest();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
