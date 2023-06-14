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

// Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete
// (Final, Defined, Private, HasDefaults)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bDidSucceed                    (Parm)

void UFacebookWindows::OnFacebookFriendsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.OnFacebookFriendsRequestComplete");

	UFacebookWindows_OnFacebookFriendsRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.RequestFacebookFriends
// (Final, Defined, Event, Private)

void UFacebookWindows::RequestFacebookFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.RequestFacebookFriends");

	UFacebookWindows_RequestFacebookFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete
// (Final, Defined, Private, HasDefaults)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bDidSucceed                    (Parm)

void UFacebookWindows::OnFacebookMeRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.OnFacebookMeRequestComplete");

	UFacebookWindows_OnFacebookMeRequestComplete_Params params;
	params.OriginalRequest = OriginalRequest;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.RequestFacebookMeInfo
// (Final, Defined, Event, Private)

void UFacebookWindows::RequestFacebookMeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.RequestFacebookMeInfo");

	UFacebookWindows_RequestFacebookMeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.FacebookRequestCallback
// (Defined, Public)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (Parm)
// class UHttpResponseInterface*  Response                       (Parm)
// bool                           bDidSucceed                    (Parm)

void UFacebookWindows::FacebookRequestCallback(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.FacebookRequestCallback");

	UFacebookWindows_FacebookRequestCallback_Params params;
	params.OriginalRequest = OriginalRequest;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.ProcessFacebookRequest
// (Native, Public)
// Parameters:
// struct FString                 Payload                        (Parm, NeedCtorLink)
// int                            ResponseCode                   (Parm)

void UFacebookWindows::ProcessFacebookRequest(const struct FString& Payload, int ResponseCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.ProcessFacebookRequest");

	UFacebookWindows_ProcessFacebookRequest_Params params;
	params.Payload = Payload;
	params.ResponseCode = ResponseCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.FacebookRequest
// (Defined, Public)
// Parameters:
// struct FString                 GraphRequest                   (Parm, NeedCtorLink)

void UFacebookWindows::FacebookRequest(const struct FString& GraphRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.FacebookRequest");

	UFacebookWindows_FacebookRequest_Params params;
	params.GraphRequest = GraphRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.Disconnect
// (Native, Public)

void UFacebookWindows::Disconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.Disconnect");

	UFacebookWindows_Disconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinDrv.FacebookWindows.IsAuthorized
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UFacebookWindows::IsAuthorized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.IsAuthorized");

	UFacebookWindows_IsAuthorized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.FacebookWindows.Authorize
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UFacebookWindows::Authorize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.Authorize");

	UFacebookWindows_Authorize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.FacebookWindows.Init
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UFacebookWindows::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.FacebookWindows.Init");

	UFacebookWindows_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.ProcessRequest
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHttpRequestWindows::ProcessRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.ProcessRequest");

	UHttpRequestWindows_ProcessRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.SetHeader
// (Native, Public)
// Parameters:
// struct FString                 HeaderName                     (Parm, NeedCtorLink)
// struct FString                 HeaderValue                    (Parm, NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UHttpRequestInterface* UHttpRequestWindows::SetHeader(const struct FString& HeaderName, const struct FString& HeaderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.SetHeader");

	UHttpRequestWindows_SetHeader_Params params;
	params.HeaderName = HeaderName;
	params.HeaderValue = HeaderValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.SetContentAsString
// (Native, Public)
// Parameters:
// struct FString                 ContentString                  (Parm, NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UHttpRequestInterface* UHttpRequestWindows::SetContentAsString(const struct FString& ContentString)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.SetContentAsString");

	UHttpRequestWindows_SetContentAsString_Params params;
	params.ContentString = ContentString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.SetContent
// (Native, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          ContentPayload                 (Const, Parm, OutParm, NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UHttpRequestInterface* UHttpRequestWindows::SetContent(TArray<unsigned char>* ContentPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.SetContent");

	UHttpRequestWindows_SetContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentPayload != nullptr)
		*ContentPayload = params.ContentPayload;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.SetURL
// (Native, Public)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UHttpRequestInterface* UHttpRequestWindows::SetURL(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.SetURL");

	UHttpRequestWindows_SetURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.SetVerb
// (Native, Public)
// Parameters:
// struct FString                 Verb                           (Parm, NeedCtorLink)
// class UHttpRequestInterface*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UHttpRequestInterface* UHttpRequestWindows::SetVerb(const struct FString& Verb)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.SetVerb");

	UHttpRequestWindows_SetVerb_Params params;
	params.Verb = Verb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetVerb
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UHttpRequestWindows::GetVerb()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetVerb");

	UHttpRequestWindows_GetVerb_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetContent
// (Native, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          Content                        (Parm, OutParm, NeedCtorLink)

void UHttpRequestWindows::GetContent(TArray<unsigned char>* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetContent");

	UHttpRequestWindows_GetContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function WinDrv.HttpRequestWindows.GetURL
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UHttpRequestWindows::GetURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetURL");

	UHttpRequestWindows_GetURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetContentLength
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHttpRequestWindows::GetContentLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetContentLength");

	UHttpRequestWindows_GetContentLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetContentType
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UHttpRequestWindows::GetContentType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetContentType");

	UHttpRequestWindows_GetContentType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetURLParameter
// (Native, Public)
// Parameters:
// struct FString                 ParameterName                  (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UHttpRequestWindows::GetURLParameter(const struct FString& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetURLParameter");

	UHttpRequestWindows_GetURLParameter_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetHeaders
// (Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UHttpRequestWindows::GetHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetHeaders");

	UHttpRequestWindows_GetHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindows.GetHeader
// (Native, Public)
// Parameters:
// struct FString                 HeaderName                     (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UHttpRequestWindows::GetHeader(const struct FString& HeaderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindows.GetHeader");

	UHttpRequestWindows_GetHeader_Params params;
	params.HeaderName = HeaderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetResponseCode
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHttpResponseWindows::GetResponseCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetResponseCode");

	UHttpResponseWindows_GetResponseCode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetContentAsString
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UHttpResponseWindows::GetContentAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetContentAsString");

	UHttpResponseWindows_GetContentAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetContent
// (Native, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          Content                        (Parm, OutParm, NeedCtorLink)

void UHttpResponseWindows::GetContent(TArray<unsigned char>* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetContent");

	UHttpResponseWindows_GetContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function WinDrv.HttpResponseWindows.GetURL
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UHttpResponseWindows::GetURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetURL");

	UHttpResponseWindows_GetURL_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetContentLength
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UHttpResponseWindows::GetContentLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetContentLength");

	UHttpResponseWindows_GetContentLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetContentType
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UHttpResponseWindows::GetContentType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetContentType");

	UHttpResponseWindows_GetContentType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetURLParameter
// (Native, Public)
// Parameters:
// struct FString                 ParameterName                  (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UHttpResponseWindows::GetURLParameter(const struct FString& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetURLParameter");

	UHttpResponseWindows_GetURLParameter_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetHeaders
// (Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UHttpResponseWindows::GetHeaders()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetHeaders");

	UHttpResponseWindows_GetHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpResponseWindows.GetHeader
// (Native, Public)
// Parameters:
// struct FString                 HeaderName                     (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UHttpResponseWindows::GetHeader(const struct FString& HeaderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpResponseWindows.GetHeader");

	UHttpResponseWindows_GetHeader_Params params;
	params.HeaderName = HeaderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WinDrv.HttpRequestWindowsMcp.ProcessRequest
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UHttpRequestWindowsMcp::ProcessRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinDrv.HttpRequestWindowsMcp.ProcessRequest");

	UHttpRequestWindowsMcp_ProcessRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
