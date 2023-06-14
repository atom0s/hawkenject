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

// Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete
struct UFacebookWindows_OnFacebookFriendsRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (Parm)
	class UHttpResponseInterface*                      Response;                                                 // (Parm)
	bool                                               bDidSucceed;                                              // (Parm)
};

// Function WinDrv.FacebookWindows.RequestFacebookFriends
struct UFacebookWindows_RequestFacebookFriends_Params
{
};

// Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete
struct UFacebookWindows_OnFacebookMeRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (Parm)
	class UHttpResponseInterface*                      Response;                                                 // (Parm)
	bool                                               bDidSucceed;                                              // (Parm)
};

// Function WinDrv.FacebookWindows.RequestFacebookMeInfo
struct UFacebookWindows_RequestFacebookMeInfo_Params
{
};

// Function WinDrv.FacebookWindows.FacebookRequestCallback
struct UFacebookWindows_FacebookRequestCallback_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (Parm)
	class UHttpResponseInterface*                      Response;                                                 // (Parm)
	bool                                               bDidSucceed;                                              // (Parm)
};

// Function WinDrv.FacebookWindows.ProcessFacebookRequest
struct UFacebookWindows_ProcessFacebookRequest_Params
{
	struct FString                                     Payload;                                                  // (Parm, NeedCtorLink)
	int                                                ResponseCode;                                             // (Parm)
};

// Function WinDrv.FacebookWindows.FacebookRequest
struct UFacebookWindows_FacebookRequest_Params
{
	struct FString                                     GraphRequest;                                             // (Parm, NeedCtorLink)
};

// Function WinDrv.FacebookWindows.Disconnect
struct UFacebookWindows_Disconnect_Params
{
};

// Function WinDrv.FacebookWindows.IsAuthorized
struct UFacebookWindows_IsAuthorized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.FacebookWindows.Authorize
struct UFacebookWindows_Authorize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.FacebookWindows.Init
struct UFacebookWindows_Init_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.HttpRequestWindows.ProcessRequest
struct UHttpRequestWindows_ProcessRequest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.HttpRequestWindows.SetHeader
struct UHttpRequestWindows_SetHeader_Params
{
	struct FString                                     HeaderName;                                               // (Parm, NeedCtorLink)
	struct FString                                     HeaderValue;                                              // (Parm, NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.HttpRequestWindows.SetContentAsString
struct UHttpRequestWindows_SetContentAsString_Params
{
	struct FString                                     ContentString;                                            // (Parm, NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.HttpRequestWindows.SetContent
struct UHttpRequestWindows_SetContent_Params
{
	TArray<unsigned char>                              ContentPayload;                                           // (Const, Parm, OutParm, NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.HttpRequestWindows.SetURL
struct UHttpRequestWindows_SetURL_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.HttpRequestWindows.SetVerb
struct UHttpRequestWindows_SetVerb_Params
{
	struct FString                                     Verb;                                                     // (Parm, NeedCtorLink)
	class UHttpRequestInterface*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.HttpRequestWindows.GetVerb
struct UHttpRequestWindows_GetVerb_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetContent
struct UHttpRequestWindows_GetContent_Params
{
	TArray<unsigned char>                              Content;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetURL
struct UHttpRequestWindows_GetURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetContentLength
struct UHttpRequestWindows_GetContentLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.HttpRequestWindows.GetContentType
struct UHttpRequestWindows_GetContentType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetURLParameter
struct UHttpRequestWindows_GetURLParameter_Params
{
	struct FString                                     ParameterName;                                            // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetHeaders
struct UHttpRequestWindows_GetHeaders_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpRequestWindows.GetHeader
struct UHttpRequestWindows_GetHeader_Params
{
	struct FString                                     HeaderName;                                               // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetResponseCode
struct UHttpResponseWindows_GetResponseCode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.HttpResponseWindows.GetContentAsString
struct UHttpResponseWindows_GetContentAsString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetContent
struct UHttpResponseWindows_GetContent_Params
{
	TArray<unsigned char>                              Content;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetURL
struct UHttpResponseWindows_GetURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetContentLength
struct UHttpResponseWindows_GetContentLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WinDrv.HttpResponseWindows.GetContentType
struct UHttpResponseWindows_GetContentType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetURLParameter
struct UHttpResponseWindows_GetURLParameter_Params
{
	struct FString                                     ParameterName;                                            // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetHeaders
struct UHttpResponseWindows_GetHeaders_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpResponseWindows.GetHeader
struct UHttpResponseWindows_GetHeader_Params
{
	struct FString                                     HeaderName;                                               // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function WinDrv.HttpRequestWindowsMcp.ProcessRequest
struct UHttpRequestWindowsMcp_ProcessRequest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
