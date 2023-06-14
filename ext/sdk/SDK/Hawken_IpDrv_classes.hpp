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

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x0048 - 0x003C)
class UClientBeaconAddressResolver : public UObject
{
public:
	int                                                BeaconPort;                                               // 0x003C(0x0004)
	struct FName                                       BeaconName;                                               // 0x0040(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.ClientBeaconAddressResolver");
		return ptr;
	}

};


// Class IpDrv.HTTPDownload
// 0x0100 (0x0B70 - 0x0A70)
class UHTTPDownload : public UDownload
{
public:
	struct FString                                     ProxyServerHost;                                          // 0x0A70(0x000C) (Config, NeedCtorLink)
	int                                                ProxyServerPort;                                          // 0x0A7C(0x0004) (Config)
	unsigned long                                      MaxRedirection : 1;                                       // 0x0A80(0x0004) (Config)
	float                                              ConnectionTimeout;                                        // 0x0A84(0x0004) (Config)
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0A88(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HTTPDownload");
		return ptr;
	}

};


// Class IpDrv.InternetLink
// 0x0018 (0x01EC - 0x01D4)
class AInternetLink : public AInfo
{
public:
	TEnumAsByte<ELinkMode>                             LinkMode;                                                 // 0x01D4(0x0001)
	TEnumAsByte<ELineMode>                             InLineMode;                                               // 0x01D5(0x0001)
	TEnumAsByte<ELineMode>                             OutLineMode;                                              // 0x01D6(0x0001)
	TEnumAsByte<EReceiveMode>                          ReceiveMode;                                              // 0x01D7(0x0001)
	struct FPointer                                    Socket;                                                   // 0x01D8(0x0004) (Const)
	int                                                Port;                                                     // 0x01DC(0x0004) (Const)
	struct FPointer                                    RemoteSocket;                                             // 0x01E0(0x0004) (Const)
	struct FPointer                                    PrivateResolveInfo;                                       // 0x01E4(0x0004) (Const, Native)
	int                                                DataPending;                                              // 0x01E8(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.InternetLink");
		return ptr;
	}


	void ResolveFailed();
	void Resolved(const struct FIpAddr& Addr);
	void GetLocalIP(struct FIpAddr* Arg);
	bool StringToIpAddr(const struct FString& Str, struct FIpAddr* Addr);
	struct FString IpAddrToString(const struct FIpAddr& Arg);
	int GetLastError();
	void Resolve(const struct FString& Domain);
	bool ParseURL(const struct FString& URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName);
	bool IsDataPending();
};


// Class IpDrv.TcpLink
// 0x0028 (0x0214 - 0x01EC)
class ATcpLink : public AInternetLink
{
public:
	TEnumAsByte<ELinkState>                            LinkState;                                                // 0x01EC(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01ED(0x0003) MISSED OFFSET
	struct FIpAddr                                     RemoteAddr;                                               // 0x01F0(0x0008)
	class UClass*                                      AcceptClass;                                              // 0x01F8(0x0004)
	TArray<unsigned char>                              SendFIFO;                                                 // 0x01FC(0x000C) (Const, NeedCtorLink)
	struct FString                                     RecvBuf;                                                  // 0x0208(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpLink");
		return ptr;
	}


	void ReceivedBinary(int Count, unsigned char B);
	void ReceivedLine(const struct FString& Line);
	void ReceivedText(const struct FString& Text);
	void Closed();
	void Opened();
	void Accepted();
	int ReadBinary(int Count, unsigned char* B);
	int ReadText(struct FString* Str);
	int SendBinary(int Count, unsigned char B);
	int SendText(const struct FString& Str);
	bool IsConnected();
	bool Close();
	bool Open(const struct FIpAddr& Addr);
	bool Listen();
	int BindPort(int PortNum, bool bUseNextAvailable);
};


// Class IpDrv.McpServiceBase
// 0x0010 (0x004C - 0x003C)
class UMcpServiceBase : public UObject
{
public:
	struct FString                                     McpConfigClassName;                                       // 0x003C(0x000C) (Config, NeedCtorLink)
	class UMcpServiceConfig*                           McpConfig;                                                // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServiceBase");
		return ptr;
	}


	struct FString GetUserAuthURL(const struct FString& McpId);
	struct FString GetAppAccessURL();
	struct FString GetBaseURL();
	void Init();
};


// Class IpDrv.MCPBase
// 0x0004 (0x0050 - 0x004C)
class UMCPBase : public UMcpServiceBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x004C(0x0004) (Const, Native, NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MCPBase");
		return ptr;
	}

};


// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0028 (0x0078 - 0x0050)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FEventUploadConfig>                  EventUploadConfigs;                                       // 0x0050(0x000C) (Const, Config, NeedCtorLink)
	TArray<struct FPointer>                            MCPEventPostObjects;                                      // 0x005C(0x000C) (Const, Native)
	TArray<TEnumAsByte<EEventUploadType>>              DisabledUploadTypes;                                      // 0x0068(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bBinaryStats : 1;                                         // 0x0074(0x0004) (Const, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineEventsInterfaceMcp");
		return ptr;
	}


	bool UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats);
	bool UpdatePlaylistPopulation(int PlaylistId, int NumPlayers);
	bool UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, TArray<unsigned char>* Payload);
	bool UploadPlayerData(const struct FUniqueNetId& UniqueId, const struct FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage);
};


// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0028 (0x0078 - 0x0050)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FNewsCacheEntry>                     NewsItems;                                                // 0x0050(0x000C) (Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadNewsDelegates;                                        // 0x005C(0x000C) (NeedCtorLink)
	unsigned long                                      bNeedsTicking : 1;                                        // 0x0068(0x0004) (Transient)
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;                          // 0x006C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineNewsInterfaceMcp");
		return ptr;
	}


	struct FString GetNews(unsigned char LocalUserNum, TEnumAsByte<EOnlineNewsType> NewsType);
	void ClearReadNewsCompletedDelegate(const struct FScriptDelegate& ReadGameNewsDelegate);
	void AddReadNewsCompletedDelegate(const struct FScriptDelegate& ReadNewsDelegate);
	void OnReadNewsCompleted(bool bWasSuccessful, TEnumAsByte<EOnlineNewsType> NewsType);
	bool ReadNews(unsigned char LocalUserNum, TEnumAsByte<EOnlineNewsType> NewsType);
};


// Class IpDrv.OnlineTitleFileDownloadBase
// 0x0064 (0x00B4 - 0x0050)
class UOnlineTitleFileDownloadBase : public UMCPBase
{
public:
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                           // 0x0050(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RequestTitleFileListCompleteDelegates;                    // 0x005C(0x000C) (NeedCtorLink)
	struct FString                                     BaseUrl;                                                  // 0x0068(0x000C) (Config, NeedCtorLink)
	struct FString                                     RequestFileListURL;                                       // 0x0074(0x000C) (Config, NeedCtorLink)
	struct FString                                     RequestFileURL;                                           // 0x0080(0x000C) (Config, NeedCtorLink)
	float                                              TimeOut;                                                  // 0x008C(0x0004) (Config)
	TArray<struct FFileNameToURLMapping>               FilesToUrls;                                              // 0x0090(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x009C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRequestTitleFileListComplete__Delegate;               // 0x00A8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadBase");
		return ptr;
	}


	struct FString GetUrlForFile(const struct FString& Filename);
	void ClearRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void AddRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void OnRequestTitleFileListComplete(bool bWasSuccessful, const struct FString& ResultStr);
	void RequestTitleFileList();
	bool ClearDownloadedFile(const struct FString& Filename);
	bool ClearDownloadedFiles();
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const struct FString& FileToRead);
	void OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
};


// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0010 (0x00C4 - 0x00B4)
class UOnlineTitleFileDownloadMcp : public UOnlineTitleFileDownloadBase
{
public:
	TArray<struct FTitleFileMcp>                       TitleFiles;                                               // 0x00B4(0x000C) (NeedCtorLink)
	int                                                DownloadCount;                                            // 0x00C0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadMcp");
		return ptr;
	}


	bool ClearDownloadedFile(const struct FString& Filename);
	bool ClearDownloadedFiles();
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	bool ReadTitleFile(const struct FString& FileToRead);
};


// Class IpDrv.OnlineTitleFileDownloadWeb
// 0x000C (0x00C0 - 0x00B4)
class UOnlineTitleFileDownloadWeb : public UOnlineTitleFileDownloadBase
{
public:
	TArray<struct FTitleFileWeb>                       TitleFiles;                                               // 0x00B4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadWeb");
		return ptr;
	}


	struct FString GetUrlForFile(const struct FString& Filename);
	void OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	void RequestTitleFileList();
	bool ClearDownloadedFile(const struct FString& Filename);
	bool ClearDownloadedFiles();
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void TriggerDelegates(bool bSuccess, const struct FString& FileRead);
	void OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	bool ReadTitleFile(const struct FString& FileToRead);
	bool UncompressTitleFileContents(TEnumAsByte<EMcpFileCompressionType> FileCompressionType, TArray<unsigned char>* CompressedFileContents, TArray<unsigned char>* UncompressedFileContents);
};


// Class IpDrv.TitleFileDownloadCache
// 0x003C (0x008C - 0x0050)
class UTitleFileDownloadCache : public UMCPBase
{
public:
	TArray<struct FTitleFileCacheEntry>                TitleFiles;                                               // 0x0050(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoadCompleteDelegates;                                    // 0x005C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SaveCompleteDelegates;                                    // 0x0068(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnLoadTitleFileComplete__Delegate;                      // 0x0074(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSaveTitleFileComplete__Delegate;                      // 0x0080(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TitleFileDownloadCache");
		return ptr;
	}


	bool DeleteTitleFile(const struct FString& Filename);
	bool DeleteTitleFiles(float MaxAgeSeconds);
	bool ClearCachedFile(const struct FString& Filename);
	bool ClearCachedFiles();
	struct FString GetTitleFileLogicalName(const struct FString& Filename);
	struct FString GetTitleFileHash(const struct FString& Filename);
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void AddSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void OnSaveTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	bool SaveTitleFile(const struct FString& Filename, const struct FString& LogicalName, TArray<unsigned char> FileContents);
	void ClearLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void AddLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void OnLoadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	bool LoadTitleFile(const struct FString& Filename);
};


// Class IpDrv.McpMessageBase
// 0x0058 (0x00A4 - 0x004C)
class UMcpMessageBase : public UMcpServiceBase
{
public:
	struct FString                                     McpMessageManagerClassName;                               // 0x004C(0x000C) (Config, NeedCtorLink)
	TEnumAsByte<EMcpMessageCompressionType>            CompressionType;                                          // 0x0058(0x0001) (Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	TArray<struct FMcpMessageContents>                 MessageContentsList;                                      // 0x005C(0x000C) (NeedCtorLink)
	TArray<struct FMcpMessageList>                     MessageLists;                                             // 0x0068(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateMessageComplete__Delegate;                      // 0x0074(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteMessageComplete__Delegate;                      // 0x0080(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMessagesComplete__Delegate;                      // 0x008C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMessageContentsComplete__Delegate;               // 0x0098(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpMessageBase");
		return ptr;
	}


	bool CacheMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents);
	void CacheMessage(const struct FMcpMessage& Message);
	bool GetMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents);
	void OnQueryMessageContentsComplete(const struct FString& MessageId, bool bWasSuccessful, const struct FString& Error);
	void QueryMessageContents(const struct FString& MessageId);
	void GetMessageList(const struct FString& ToUniqueUserId, struct FMcpMessageList* MessageList);
	void OnQueryMessagesComplete(const struct FString& UserId, bool bWasSuccessful, const struct FString& Error);
	void QueryMessages(const struct FString& ToUniqueUserId);
	void OnDeleteMessageComplete(const struct FString& MessageId, bool bWasSuccessful, const struct FString& Error);
	void DeleteMessage(const struct FString& MessageId);
	void OnCreateMessageComplete(const struct FMcpMessage& Message, bool bWasSuccessful, const struct FString& Error);
	void CreateMessage(const struct FString& FromUniqueUserId, const struct FString& FromFriendlyName, const struct FString& MessageType, const struct FString& PushMessage, const struct FString& ValidUntil, TArray<struct FString>* ToUniqueUserIds, TArray<unsigned char>* MessageContents);
	class UMcpMessageBase* STATIC_CreateInstance();
};


// Class IpDrv.McpMessageManager
// 0x0058 (0x00FC - 0x00A4)
class UMcpMessageManager : public UMcpMessageBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x00A4(0x0004) (Const, Native, NoExport)
	struct FString                                     CreateMessageUrl;                                         // 0x00A8(0x000C) (Config, NeedCtorLink)
	struct FString                                     DeleteMessageUrl;                                         // 0x00B4(0x000C) (Config, NeedCtorLink)
	struct FString                                     QueryMessagesUrl;                                         // 0x00C0(0x000C) (Config, NeedCtorLink)
	struct FString                                     QueryMessageContentsUrl;                                  // 0x00CC(0x000C) (Config, NeedCtorLink)
	struct FString                                     DeleteAllMessagesUrl;                                     // 0x00D8(0x000C) (Config, NeedCtorLink)
	TArray<struct FMcpCompressMessageRequest>          CompressMessageRequests;                                  // 0x00E4(0x000C) (Native)
	TArray<struct FMcpUncompressMessageRequest>        UncompressMessageRequests;                                // 0x00F0(0x000C) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpMessageManager");
		return ptr;
	}


	bool CacheMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents);
	bool GetMessageById(const struct FString& MessageId, struct FMcpMessage* Message);
	void CacheMessage(const struct FMcpMessage& Message);
	bool GetMessageContents(const struct FString& MessageId, TArray<unsigned char>* MessageContents);
	void OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryMessageContents(const struct FString& MessageId);
	void GetMessageList(const struct FString& ToUniqueUserId, struct FMcpMessageList* MessageList);
	void OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryMessages(const struct FString& ToUniqueUserId);
	void OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteMessage(const struct FString& MessageId);
	void OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void CreateMessage(const struct FString& FromUniqueUserId, const struct FString& FromFriendlyName, const struct FString& MessageType, const struct FString& PushMessage, const struct FString& ValidUntil, TArray<struct FString>* ToUniqueUserIds, TArray<unsigned char>* MessageContents);
	void FinishedAsyncUncompression(bool bWasSuccessful, const struct FString& MessageId, TArray<unsigned char>* UncompressedMessageContents);
	bool StartAsyncUncompression(const struct FString& MessageId, TEnumAsByte<EMcpMessageCompressionType> MessageCompressionType, TArray<unsigned char>* MessageContent);
	bool StartAsyncCompression(TEnumAsByte<EMcpMessageCompressionType> MessageCompressionType, class UHttpRequestInterface* Request, TArray<unsigned char>* MessageContent);
};


// Class IpDrv.McpUserCloudFileDownload
// 0x009C (0x00E8 - 0x004C)
class UMcpUserCloudFileDownload : public UMcpServiceBase
{
public:
	struct FString                                     EnumerateCloudFilesUrl;                                   // 0x004C(0x000C) (Config, NeedCtorLink)
	struct FString                                     ReadCloudFileUrl;                                         // 0x0058(0x000C) (Config, NeedCtorLink)
	struct FString                                     WriteCloudFileUrl;                                        // 0x0064(0x000C) (Config, NeedCtorLink)
	struct FString                                     DeleteCloudFileUrl;                                       // 0x0070(0x000C) (Config, NeedCtorLink)
	TArray<struct FMcpUserCloudFilesEntry>             UserCloudFileRequests;                                    // 0x007C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EnumerateUserFilesCompleteDelegates;                      // 0x0088(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                            // 0x0094(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                           // 0x00A0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;                          // 0x00AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;                 // 0x00B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;                       // 0x00C4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;                      // 0x00D0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;                     // 0x00DC(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserCloudFileDownload");
		return ptr;
	}


	void ClearAllDelegates();
	void ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void CallDeleteUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	bool DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void CallWriteUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int* UserIdx, int* FileIdx);
	bool WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void CallReadUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	bool ReadUserFile(const struct FString& UserId, const struct FString& Filename);
	void GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles);
	void ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void CallEnumerateUserFileCompleteDelegates(bool bWasSuccessful, const struct FString& UserId);
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId);
	void OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void EnumerateUserFiles(const struct FString& UserId);
	bool ClearFile(const struct FString& UserId, const struct FString& Filename);
	bool ClearFiles(const struct FString& UserId);
	bool GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
};


// Class IpDrv.MeshBeacon
// 0x003C (0x0078 - 0x003C)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	int                                                MeshBeaconPort;                                           // 0x0040(0x0004) (Config)
	struct FPointer                                    Socket;                                                   // 0x0044(0x0004) (Native, Transient)
	unsigned long                                      bIsInTick : 1;                                            // 0x0048(0x0004) (Transient)
	unsigned long                                      bWantsDeferredDestroy : 1;                                // 0x0048(0x0004) (Transient)
	unsigned long                                      bShouldTick : 1;                                          // 0x0048(0x0004)
	float                                              HeartbeatTimeout;                                         // 0x004C(0x0004) (Config)
	float                                              ElapsedHeartbeatTime;                                     // 0x0050(0x0004)
	struct FName                                       BeaconName;                                               // 0x0054(0x0008)
	int                                                SocketSendBufferSize;                                     // 0x005C(0x0004) (Config)
	int                                                SocketReceiveBufferSize;                                  // 0x0060(0x0004) (Config)
	int                                                MaxBandwidthTestBufferSize;                               // 0x0064(0x0004) (Config)
	int                                                MinBandwidthTestBufferSize;                               // 0x0068(0x0004) (Config)
	float                                              MaxBandwidthTestSendTime;                                 // 0x006C(0x0004) (Config)
	float                                              MaxBandwidthTestReceiveTime;                              // 0x0070(0x0004) (Config)
	int                                                MaxBandwidthHistoryEntries;                               // 0x0074(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeacon");
		return ptr;
	}


	void DestroyBeacon();
};


// Class IpDrv.MeshBeaconClient
// 0x00A8 (0x0120 - 0x0078)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                       // 0x0078(0x0008) (Const)
	struct FClientConnectionRequest                    ClientPendingRequest;                                     // 0x0080(0x002C) (Const, NeedCtorLink)
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                                     // 0x00AC(0x0014)
	TEnumAsByte<EMeshBeaconClientState>                ClientBeaconState;                                        // 0x00C0(0x0001)
	TEnumAsByte<EMeshBeaconPacketType>                 ClientBeaconRequestType;                                  // 0x00C1(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	float                                              ConnectionRequestTimeout;                                 // 0x00C4(0x0004) (Config)
	float                                              ConnectionRequestElapsedTime;                             // 0x00C8(0x0004)
	struct FString                                     ResolverClassName;                                        // 0x00CC(0x000C) (Config, NeedCtorLink)
	class UClass*                                      ResolverClass;                                            // 0x00D8(0x0004)
	class UClientBeaconAddressResolver*                Resolver;                                                 // 0x00DC(0x0004)
	unsigned long                                      bUsingRegisteredAddr : 1;                                 // 0x00E0(0x0004) (Transient)
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;                    // 0x00E4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;               // 0x00F0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;               // 0x00FC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                      // 0x0108(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate;            // 0x0114(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeaconClient");
		return ptr;
	}


	bool SendHostNewGameSessionResponse(bool bSuccess, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnCreateNewSessionRequestReceived(const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players);
	void OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnReceivedBandwidthTestResults(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnReceivedBandwidthTestRequest(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType);
	void OnConnectionRequestResult(TEnumAsByte<EMeshBeaconConnectionResult> ConnectionResult);
	bool BeginBandwidthTest(TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, int TestBufferSize);
	bool RequestConnection(bool bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest);
	void DestroyBeacon();
};


// Class IpDrv.MeshBeaconHost
// 0x006C (0x00E4 - 0x0078)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	TArray<struct FClientMeshBeaconConnection>         ClientConnections;                                        // 0x0078(0x000C) (Const, NeedCtorLink)
	TArray<struct FUniqueNetId>                        PendingPlayerConnections;                                 // 0x0084(0x000C) (NeedCtorLink)
	struct FUniqueNetId                                OwningPlayerId;                                           // 0x0090(0x0010) (Const)
	unsigned long                                      bAllowBandwidthTesting : 1;                               // 0x00A0(0x0004)
	int                                                ConnectionBacklog;                                        // 0x00A4(0x0004) (Config)
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate;            // 0x00A8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;                       // 0x00B4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;                      // 0x00C0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;                 // 0x00CC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;       // 0x00D8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.MeshBeaconHost");
		return ptr;
	}


	void OnReceivedClientCreateNewSessionResult(bool bSucceeded, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	bool RequestClientCreateNewSession(const struct FUniqueNetId& PlayerNetId, const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players);
	void TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnAllPendingPlayersConnected();
	bool AllPlayersConnected(TArray<struct FUniqueNetId>* Players);
	int GetConnectionIndexForPlayer(const struct FUniqueNetId& PlayerNetId);
	void SetPendingPlayerConnections(TArray<struct FUniqueNetId>* Players);
	void OnFinishedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, TEnumAsByte<EMeshBeaconBandwidthTestResult> TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnStartedBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType);
	void OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection* NewClientConnection);
	void AllowBandwidthTesting(bool bEnabled);
	void CancelPendingBandwidthTests();
	bool HasPendingBandwidthTest();
	void CancelInProgressBandwidthTests();
	bool HasInProgressBandwidthTest();
	bool RequestClientBandwidthTest(const struct FUniqueNetId& PlayerNetId, TEnumAsByte<EMeshBeaconBandwidthTestType> TestType, int TestBufferSize);
	void DestroyBeacon();
	bool InitHostBeacon(const struct FUniqueNetId& InOwningPlayerId);
};


// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0018 (0x0120 - 0x0108)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                              // 0x0108(0x0004) (Const, Native, Transient)
	int                                                MaxLocalTalkers;                                          // 0x010C(0x0004) (Config)
	int                                                MaxRemoteTalkers;                                         // 0x0110(0x0004) (Config)
	unsigned long                                      bIsUsingSpeechRecognition : 1;                            // 0x0114(0x0004) (Config)
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                        // 0x0118(0x0004)
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                                        // 0x011C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		return ptr;
	}


	void GetRegisteredPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* OutRegisteredPlayers);
	bool IsPlayerInSession(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
};


// Class IpDrv.OnlineAuthInterfaceImpl
// 0x0234 (0x0270 - 0x003C)
class UOnlineAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineAuthInterface;                             // 0x003C(0x0004) (Const, Native, NoExport)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                          // 0x0040(0x0004)
	unsigned long                                      bAuthReady : 1;                                           // 0x0044(0x0004) (Const)
	struct FSparseArray_Mirror                         ClientAuthSessions;                                       // 0x0048(0x0030) (Const, Native)
	struct FSparseArray_Mirror                         ServerAuthSessions;                                       // 0x0078(0x0030) (Const, Native)
	struct FSparseArray_Mirror                         PeerAuthSessions;                                         // 0x00A8(0x0030) (Const, Native)
	struct FSparseArray_Mirror                         LocalClientAuthSessions;                                  // 0x00D8(0x0030) (Const, Native)
	struct FSparseArray_Mirror                         LocalServerAuthSessions;                                  // 0x0108(0x0030) (Const, Native)
	struct FSparseArray_Mirror                         LocalPeerAuthSessions;                                    // 0x0138(0x0030) (Const, Native)
	TArray<struct FScriptDelegate>                     AuthReadyDelegates;                                       // 0x0168(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthRequestDelegates;                               // 0x0174(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthRequestDelegates;                               // 0x0180(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthResponseDelegates;                              // 0x018C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthResponseDelegates;                              // 0x0198(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthCompleteDelegates;                              // 0x01A4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthCompleteDelegates;                              // 0x01B0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthEndSessionRequestDelegates;                     // 0x01BC(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthRetryRequestDelegates;                          // 0x01C8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientConnectionCloseDelegates;                           // 0x01D4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerConnectionCloseDelegates;                           // 0x01E0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAuthReady__Delegate;                                  // 0x01EC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthRequest__Delegate;                          // 0x01F8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRequest__Delegate;                          // 0x0204(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthResponse__Delegate;                         // 0x0210(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthResponse__Delegate;                         // 0x021C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthComplete__Delegate;                         // 0x0228(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthComplete__Delegate;                         // 0x0234(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthEndSessionRequest__Delegate;                // 0x0240(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRetryRequest__Delegate;                     // 0x024C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnClientConnectionClose__Delegate;                      // 0x0258(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnServerConnectionClose__Delegate;                      // 0x0264(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineAuthInterfaceImpl");
		return ptr;
	}


	bool GetServerAddr(int* OutServerIP, int* OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId* OutServerUID);
	bool FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession* OutSessionInfo);
	bool FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession* OutSessionInfo);
	bool FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession* OutSessionInfo);
	bool FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession* OutSessionInfo);
	void AllLocalServerAuthSessions(struct FLocalAuthSession* OutSessionInfo);
	void AllServerAuthSessions(struct FAuthSession* OutSessionInfo);
	void AllLocalClientAuthSessions(struct FLocalAuthSession* OutSessionInfo);
	void AllClientAuthSessions(struct FAuthSession* OutSessionInfo);
	void EndAllRemoteServerAuthSessions();
	void EndAllLocalServerAuthSessions();
	void EndRemoteServerAuthSession(const struct FUniqueNetId& ServerUID, int ServerIP);
	void EndLocalServerAuthSession(const struct FUniqueNetId& ClientUID, int ClientIP);
	bool VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, int ServerIP, int AuthTicketUID);
	bool CreateServerAuthSession(const struct FUniqueNetId& ClientUID, int ClientIP, int ClientPort, int* OutAuthTicketUID);
	void EndAllRemoteClientAuthSessions();
	void EndAllLocalClientAuthSessions();
	void EndRemoteClientAuthSession(const struct FUniqueNetId& ClientUID, int ClientIP);
	void EndLocalClientAuthSession(const struct FUniqueNetId& ServerUID, int ServerIP, int ServerPort);
	bool VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, int ClientIP, int ClientPort, int AuthTicketUID);
	bool CreateClientAuthSession(const struct FUniqueNetId& ServerUID, int ServerIP, int ServerPort, bool bSecure, int* OutAuthTicketUID);
	bool SendServerAuthRetryRequest();
	bool SendClientAuthEndSessionRequest(class UPlayer* ClientConnection);
	bool SendServerAuthResponse(class UPlayer* ClientConnection, int AuthTicketUID);
	bool SendClientAuthResponse(int AuthTicketUID);
	bool SendServerAuthRequest(const struct FUniqueNetId& ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID);
	void ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void OnServerConnectionClose(class UPlayer* ServerConnection);
	void ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void OnClientConnectionClose(class UPlayer* ClientConnection);
	void ClearServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void AddServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void OnServerAuthRetryRequest(class UPlayer* ClientConnection);
	void ClearClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void AddClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void OnClientAuthEndSessionRequest(class UPlayer* ServerConnection);
	void ClearServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void AddServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void OnServerAuthComplete(bool bSuccess, const struct FUniqueNetId& ServerUID, class UPlayer* ServerConnection, const struct FString& ExtraInfo);
	void ClearClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void AddClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void OnClientAuthComplete(bool bSuccess, const struct FUniqueNetId& ClientUID, class UPlayer* ClientConnection, const struct FString& ExtraInfo);
	void ClearServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void AddServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void OnServerAuthResponse(const struct FUniqueNetId& ServerUID, int ServerIP, int AuthTicketUID);
	void ClearClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void AddClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void OnClientAuthResponse(const struct FUniqueNetId& ClientUID, int ClientIP, int AuthTicketUID);
	void ClearServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void AddServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void OnServerAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID, int ClientIP, int ClientPort);
	void ClearClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void AddClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void OnClientAuthRequest(const struct FUniqueNetId& ServerUID, int ServerIP, int ServerPort, bool bSecure);
	void ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void OnAuthReady();
	bool IsReady();
};


// Class IpDrv.OnlineGameInterfaceImpl
// 0x0178 (0x01B4 - 0x003C)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                          // 0x003C(0x0004)
	class UOnlineGameSettings*                         GameSettings;                                             // 0x0040(0x0004) (Const)
	class UOnlineGameSearch*                           GameSearch;                                               // 0x0044(0x0004) (Const)
	TArray<struct FScriptDelegate>                     CreateOnlineGameCompleteDelegates;                        // 0x0048(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UpdateOnlineGameCompleteDelegates;                        // 0x0054(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DestroyOnlineGameCompleteDelegates;                       // 0x0060(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinOnlineGameCompleteDelegates;                          // 0x006C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MigrateOnlineGameCompleteDelegates;                       // 0x0078(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinMigratedOnlineGameCompleteDelegates;                  // 0x0084(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RecalculateSkillRatingCompleteDelegates;                  // 0x0090(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     StartOnlineGameCompleteDelegates;                         // 0x009C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EndOnlineGameCompleteDelegates;                           // 0x00A8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindOnlineGamesCompleteDelegates;                         // 0x00B4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     CancelFindOnlineGamesCompleteDelegates;                   // 0x00C0(0x000C) (NeedCtorLink)
	TEnumAsByte<ELanBeaconState>                       LanBeaconState;                                           // 0x00CC(0x0001) (Const)
	unsigned char                                      LanNonce[0x8];                                            // 0x00CD(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	int                                                LanAnnouncePort;                                          // 0x00D8(0x0004) (Const, Config)
	int                                                LanGameUniqueId;                                          // 0x00DC(0x0004) (Const, Config)
	int                                                LanPacketPlatformMask;                                    // 0x00E0(0x0004) (Const, Config)
	float                                              LanQueryTimeLeft;                                         // 0x00E4(0x0004)
	float                                              LanQueryTimeout;                                          // 0x00E8(0x0004) (Config)
	struct FPointer                                    LanBeacon;                                                // 0x00EC(0x0004) (Const, Native, Transient)
	struct FPointer                                    SessionInfo;                                              // 0x00F0(0x0004) (Const, Native, Transient)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;                    // 0x00F4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;                   // 0x0100(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;                   // 0x010C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;                  // 0x0118(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;              // 0x0124(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;                     // 0x0130(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x013C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x0148(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;                    // 0x0154(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;                      // 0x0160(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;            // 0x016C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x0178(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;             // 0x0184(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;                  // 0x0190(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;             // 0x019C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                           // 0x01A8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		return ptr;
	}


	void ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void OnQosStatusChanged(int NumComplete, int NumTotal);
	bool BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfoBySessionName(const struct FName& SessionName, unsigned char* PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void OnJoinMigratedOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool JoinMigratedOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame);
	void ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void OnMigrateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool MigrateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName);
	void ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate);
	void AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate);
	void OnRecalculateSkillRatingComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool RecalculateSkillRating(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName);
	void ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult);
	TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers(const struct FName& SessionName);
	void ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool RegisterForArbitration(const struct FName& SessionName);
	void ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool EndOnlineGame(const struct FName& SessionName);
	void ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool StartOnlineGame(const struct FName& SessionName);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo);
	void ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool JoinOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(bool bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	bool FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool DestroyOnlineGame(const struct FName& SessionName);
	void ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void OnUpdateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
	void ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings(const struct FName& SessionName);
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
};


// Class IpDrv.OnlinePlaylistManager
// 0x00A4 (0x00E0 - 0x003C)
class UOnlinePlaylistManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	TArray<struct FPlaylist>                           Playlists;                                                // 0x0040(0x000C) (Config, NeedCtorLink)
	TArray<struct FString>                             PlaylistFileNames;                                        // 0x004C(0x000C) (NeedCtorLink)
	TArray<struct FName>                               DatastoresToRefresh;                                      // 0x0058(0x000C) (Config, NeedCtorLink)
	int                                                DownloadCount;                                            // 0x0064(0x0004)
	int                                                SuccessfulCount;                                          // 0x0068(0x0004)
	int                                                VersionNumber;                                            // 0x006C(0x0004) (Config)
	TArray<struct FPlaylistPopulation>                 PopulationData;                                           // 0x0070(0x000C) (Config, NeedCtorLink)
	int                                                WorldwideTotalPlayers;                                    // 0x007C(0x0004)
	int                                                RegionTotalPlayers;                                       // 0x0080(0x0004)
	TScriptInterface<class UOnlineTitleFileInterface>  TitleFileInterface;                                       // 0x0084(0x0008) (Transient)
	struct FString                                     PopulationFileName;                                       // 0x008C(0x000C) (NeedCtorLink)
	float                                              NextPlaylistPopulationUpdateTime;                         // 0x0098(0x0004) (Transient)
	float                                              PlaylistPopulationUpdateInterval;                         // 0x009C(0x0004) (Config)
	int                                                MinPlaylistIdToReport;                                    // 0x00A0(0x0004) (Config)
	int                                                CurrentPlaylistId;                                        // 0x00A4(0x0004) (Transient)
	struct FName                                       EventsInterfaceName;                                      // 0x00A8(0x0008) (Config)
	int                                                DataCenterId;                                             // 0x00B0(0x0004) (Config)
	struct FString                                     DataCenterFileName;                                       // 0x00B4(0x000C) (NeedCtorLink)
	float                                              LastPlaylistDownloadTime;                                 // 0x00C0(0x0004) (Transient)
	float                                              PlaylistRefreshInterval;                                  // 0x00C4(0x0004) (Config)
	struct FScriptDelegate                             __OnReadPlaylistComplete__Delegate;                       // 0x00C8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlaylistPopulationDataUpdated__Delegate;              // 0x00D4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlinePlaylistManager");
		return ptr;
	}


	void ParseDataCenterId(TArray<unsigned char>* Data);
	void OnReadDataCenterIdComplete(bool bWasSuccessful, const struct FString& Filename);
	void ReadDataCenterId();
	void SendPlaylistPopulationUpdate(int NumPlayers);
	void GetPopulationInfoFromPlaylist(int PlaylistId, int* WorldwideTotal, int* RegionTotal);
	void ParsePlaylistPopulationData(TArray<unsigned char>* Data);
	void OnPlaylistPopulationDataUpdated();
	void OnReadPlaylistPopulationComplete(bool bWasSuccessful, const struct FString& Filename);
	void ReadPlaylistPopulation();
	void Reset();
	void GetContentIdsFromPlaylist(int PlaylistId, TArray<int>* ContentIds);
	class UClass* GetInventorySwapFromPlaylist(int PlaylistId, class UClass* SourceInventory);
	void GetMapCycleFromPlaylist(int PlaylistId, TArray<struct FName>* MapCycle);
	struct FString GetUrlFromPlaylist(int PlaylistId);
	int GetMatchType(int PlaylistId);
	bool IsPlaylistArbitrated(int PlaylistId);
	void GetLoadBalanceIdFromPlaylist(int PlaylistId, int* LoadBalanceId);
	void GetTeamInfoFromPlaylist(int PlaylistId, int* TeamSize, int* TeamCount, int* MaxPartySize);
	bool PlaylistSupportsDedicatedServers(int PlaylistId);
	bool HasAnyGameSettings(int PlaylistId);
	class UOnlineGameSettings* GetGameSettings(int PlaylistId, int GameSettingsId);
	void FinalizePlaylistObjects();
	void OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	bool ShouldRefreshPlaylists();
	void DetermineFilesToDownload();
	void DownloadPlaylist();
	void OnReadPlaylistComplete(bool bWasSuccessful);
};


// Class IpDrv.OnlineStreamingInterfaceTwitch
// 0x0038 (0x0074 - 0x003C)
class UOnlineStreamingInterfaceTwitch : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	struct FPointer                                    TwitchTV;                                                 // 0x0040(0x0004) (Const, Native, Transient)
	TArray<struct FScriptDelegate>                     StreamingStatusChangedDelegates;                          // 0x0044(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     StreamingChatMessageReceivedDelegates;                    // 0x0050(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStreamingStatusChanged__Delegate;                     // 0x005C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStreamingChatMessageReceived__Delegate;               // 0x0068(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineStreamingInterfaceTwitch");
		return ptr;
	}


	void ReceiveChatMessage(const struct FString& Message);
	void UpdateStreamingStatus(TEnumAsByte<EStreamState> SS);
	TEnumAsByte<EStreamState> GetStreamingStatus();
	void ClearStreamingChatMessageReceivedDelegate(const struct FScriptDelegate& Delegate);
	void AddStreamingChatMessageReceivedDelegate(const struct FScriptDelegate& Delegate);
	void OnStreamingChatMessageReceived(const struct FString& Message);
	void ClearStreamingStatusChangedDelegate(const struct FScriptDelegate& Delegate);
	void AddStreamingStatusChangedDelegate(const struct FScriptDelegate& Delegate);
	void OnStreamingStatusChanged(TEnumAsByte<EStreamState> NewState);
	bool RunCommercial();
	bool StopStreaming();
	bool PauseStreaming();
	bool StartStreaming(int Width, int Height);
	bool StreamingLogin(const struct FString& UserName, const struct FString& Password);
	bool ShutDown();
	bool Initialize();
};


// Class IpDrv.PartyBeacon
// 0x002C (0x0068 - 0x003C)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	int                                                PartyBeaconPort;                                          // 0x0040(0x0004) (Config)
	struct FPointer                                    Socket;                                                   // 0x0044(0x0004) (Native, Transient)
	unsigned long                                      bIsInTick : 1;                                            // 0x0048(0x0004)
	unsigned long                                      bWantsDeferredDestroy : 1;                                // 0x0048(0x0004)
	unsigned long                                      bShouldTick : 1;                                          // 0x0048(0x0004)
	float                                              HeartbeatTimeout;                                         // 0x004C(0x0004) (Config)
	float                                              ElapsedHeartbeatTime;                                     // 0x0050(0x0004)
	struct FName                                       BeaconName;                                               // 0x0054(0x0008)
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                            // 0x005C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeacon");
		return ptr;
	}


	void OnDestroyComplete();
	void DestroyBeacon();
};


// Class IpDrv.PartyBeaconClient
// 0x0084 (0x00EC - 0x0068)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                       // 0x0068(0x0008) (Const)
	struct FPartyReservation                           PendingRequest;                                           // 0x0070(0x0020) (NeedCtorLink)
	TEnumAsByte<EPartyBeaconClientState>               ClientBeaconState;                                        // 0x0090(0x0001)
	TEnumAsByte<EPartyBeaconClientRequest>             ClientBeaconRequestType;                                  // 0x0091(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	float                                              ReservationRequestTimeout;                                // 0x0094(0x0004) (Config)
	float                                              ReservationRequestElapsedTime;                            // 0x0098(0x0004)
	struct FString                                     ResolverClassName;                                        // 0x009C(0x000C) (Config, NeedCtorLink)
	class UClass*                                      ResolverClass;                                            // 0x00A8(0x0004)
	class UClientBeaconAddressResolver*                Resolver;                                                 // 0x00AC(0x0004)
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;                 // 0x00B0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;                    // 0x00BC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                      // 0x00C8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                                // 0x00D4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                           // 0x00E0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeaconClient");
		return ptr;
	}


	void DestroyBeacon();
	bool CancelReservation(const struct FUniqueNetId& CancellingPartyLeader);
	bool RequestReservationUpdate(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* PlayersToAdd);
	bool RequestReservation(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* Players);
	void OnHostHasCancelled();
	void OnHostIsReady();
	void OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo);
	void OnReservationCountUpdated(int ReservationRemaining);
	void OnReservationRequestComplete(TEnumAsByte<EPartyReservationResult> ReservationResult);
};


// Class IpDrv.PartyBeaconHost
// 0x0068 (0x00D0 - 0x0068)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray<struct FClientBeaconConnection>             Clients;                                                  // 0x0068(0x000C) (Const, NeedCtorLink)
	int                                                NumTeams;                                                 // 0x0074(0x0004) (Const)
	int                                                NumPlayersPerTeam;                                        // 0x0078(0x0004) (Const)
	int                                                NumReservations;                                          // 0x007C(0x0004) (Const)
	int                                                NumConsumedReservations;                                  // 0x0080(0x0004) (Const)
	TArray<struct FPartyReservation>                   Reservations;                                             // 0x0084(0x000C) (Const, NeedCtorLink)
	struct FName                                       OnlineSessionName;                                        // 0x0090(0x0008)
	int                                                ConnectionBacklog;                                        // 0x0098(0x0004) (Config)
	int                                                ForceTeamNum;                                             // 0x009C(0x0004) (Const)
	int                                                ReservedHostTeamNum;                                      // 0x00A0(0x0004) (Const)
	unsigned long                                      bBestFitTeamAssignment : 1;                               // 0x00A4(0x0004)
	TEnumAsByte<EPartyBeaconHostState>                 BeaconState;                                              // 0x00A8(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	struct FScriptDelegate                             __OnReservationChange__Delegate;                          // 0x00AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                           // 0x00B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;                 // 0x00C4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.PartyBeaconHost");
		return ptr;
	}


	int GetMaxAvailableTeamSize();
	void GetPartyLeaders(TArray<struct FUniqueNetId>* PartyLeaders);
	void GetPlayers(TArray<struct FUniqueNetId>* Players);
	void AppendReservationSkillsToSearch(class UOnlineGameSearch* Search);
	void UnregisterParty(const struct FUniqueNetId& PartyLeader);
	void UnregisterPartyMembers();
	void RegisterPartyMembers();
	bool AreReservationsFull();
	void TellClientsHostHasCancelled();
	void TellClientsHostIsReady();
	void TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo);
	void DestroyBeacon();
	void OnClientCancellationReceived(const struct FUniqueNetId& PartyLeader);
	void OnReservationsFull();
	void OnReservationChange();
	void HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty);
	int GetExistingReservation(struct FUniqueNetId* PartyLeader);
	TEnumAsByte<EPartyReservationResult> UpdatePartyReservationEntry(const struct FUniqueNetId& PartyLeader, TArray<struct FPlayerReservation>* PlayerMembers);
	TEnumAsByte<EPartyReservationResult> AddPartyReservationEntry(const struct FUniqueNetId& PartyLeader, int TeamNum, bool bIsHost, TArray<struct FPlayerReservation>* PlayerMembers);
	bool InitHostBeacon(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, const struct FName& InSessionName, int InForceTeamNum);
	void PauseReservationRequests(bool bPause);
};


// Class IpDrv.TcpipConnection
// 0x001C (0x902C - 0x9010)
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x9010(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpipConnection");
		return ptr;
	}

};


// Class IpDrv.TcpNetDriver
// 0x001C (0x01B0 - 0x0194)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                               // 0x0194(0x0004) (Config)
	unsigned long                                      UnknownData00 : 31;                                       // 0x0194(0x0001)
	unsigned long                                      LogPortUnreach : 1;                                       // 0x0198(0x0004) (Config)
	unsigned char                                      UnknownData01[0x14];                                      // 0x019C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.TcpNetDriver");
		return ptr;
	}

};


// Class IpDrv.WebRequest
// 0x00BC (0x00F8 - 0x003C)
class UWebRequest : public UObject
{
public:
	struct FString                                     RemoteAddr;                                               // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     URI;                                                      // 0x0048(0x000C) (NeedCtorLink)
	struct FString                                     UserName;                                                 // 0x0054(0x000C) (NeedCtorLink)
	struct FString                                     Password;                                                 // 0x0060(0x000C) (NeedCtorLink)
	int                                                ContentLength;                                            // 0x006C(0x0004)
	struct FString                                     ContentType;                                              // 0x0070(0x000C) (NeedCtorLink)
	TEnumAsByte<ERequestType>                          RequestType;                                              // 0x007C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FMap_Mirror                                 HeaderMap;                                                // 0x0080(0x003C) (Const, Native)
	struct FMap_Mirror                                 VariableMap;                                              // 0x00BC(0x003C) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebRequest");
		return ptr;
	}


	int GetHexDigit(const struct FString& D);
	void DecodeFormData(const struct FString& Data);
	void ProcessHeaderString(const struct FString& S);
	void Dump();
	void GetVariables(TArray<struct FString>* varNames);
	struct FString GetVariableNumber(const struct FString& VariableName, int Number, const struct FString& DefaultValue);
	int GetVariableCount(const struct FString& VariableName);
	struct FString GetVariable(const struct FString& VariableName, const struct FString& DefaultValue);
	void AddVariable(const struct FString& VariableName, const struct FString& Value);
	void GetHeaders(TArray<struct FString>* Headers);
	struct FString GetHeader(const struct FString& HeaderName, const struct FString& DefaultValue);
	void AddHeader(const struct FString& HeaderName, const struct FString& Value);
	struct FString EncodeBase64(const struct FString& Decoded);
	struct FString DecodeBase64(const struct FString& Encoded);
};


// Class IpDrv.WebResponse
// 0x0068 (0x00A4 - 0x003C)
class UWebResponse : public UObject
{
public:
	TArray<struct FString>                             Headers;                                                  // 0x003C(0x000C) (NeedCtorLink)
	struct FMap_Mirror                                 ReplacementMap;                                           // 0x0048(0x003C) (Const, Native)
	struct FString                                     IncludePath;                                              // 0x0084(0x000C) (Const, Config, NeedCtorLink)
	struct FString                                     CharSet;                                                  // 0x0090(0x000C) (Const, Localized, NeedCtorLink)
	class AWebConnection*                              Connection;                                               // 0x009C(0x0004)
	unsigned long                                      bSentText : 1;                                            // 0x00A0(0x0004)
	unsigned long                                      bSentResponse : 1;                                        // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebResponse");
		return ptr;
	}


	bool SentResponse();
	bool SentText();
	void Redirect(const struct FString& URL);
	void SendStandardHeaders(const struct FString& ContentType, bool bCache);
	void HTTPError(int ErrorNum, const struct FString& Data);
	void SendHeaders();
	void AddHeader(const struct FString& Header, bool bReplace);
	void HTTPHeader(const struct FString& Header);
	void HttpResponse(const struct FString& Header);
	void FailAuthentication(const struct FString& Realm);
	bool SendCachedFile(const struct FString& Filename, const struct FString& ContentType);
	void SendBinary(int Count, unsigned char B);
	void SendText(const struct FString& Text, bool bNoCRLF);
	void Dump();
	struct FString GetHTTPExpiration(int OffsetSeconds);
	struct FString LoadParsedUHTM(const struct FString& Filename);
	bool IncludeBinaryFile(const struct FString& Filename);
	bool IncludeUHTM(const struct FString& Filename);
	void ClearSubst();
	void Subst(const struct FString& Variable, const struct FString& Value, bool bClear);
	bool FileExists(const struct FString& Filename);
};


// Class IpDrv.OnlinePlaylistProvider
// 0x0020 (0x0084 - 0x0064)
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:
	int                                                PlaylistId;                                               // 0x0064(0x0004) (Config)
	TArray<struct FName>                               PlaylistGameTypeNames;                                    // 0x0068(0x000C) (Config, NeedCtorLink)
	struct FString                                     DisplayName;                                              // 0x0074(0x000C) (Const, Config, Localized, NeedCtorLink)
	int                                                Priority;                                                 // 0x0080(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlinePlaylistProvider");
		return ptr;
	}

};


// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0044 (0x00AC - 0x0068)
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:
	struct FString                                     ProviderClassName;                                        // 0x0068(0x000C) (Config, NeedCtorLink)
	class UClass*                                      ProviderClass;                                            // 0x0074(0x0004) (Transient)
	TArray<class UUIResourceDataProvider*>             RankedDataProviders;                                      // 0x0078(0x000C) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             UnrankedDataProviders;                                    // 0x0084(0x000C) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             RecModeDataProviders;                                     // 0x0090(0x000C) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             PrivateDataProviders;                                     // 0x009C(0x000C) (Const, NeedCtorLink)
	class UOnlinePlaylistManager*                      PlaylistMan;                                              // 0x00A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.UIDataStore_OnlinePlaylists");
		return ptr;
	}


	int GetMatchTypeForPlaylistId(int PlaylistId);
	class UOnlinePlaylistProvider* STATIC_GetOnlinePlaylistProvider(const struct FName& ProviderTag, int PlaylistId, int* ProviderIndex);
	bool GetPlaylistProvider(const struct FName& ProviderTag, int ProviderIndex, class UUIResourceDataProvider** out_Provider);
	bool GetResourceProviders(const struct FName& ProviderTag, TArray<class UUIResourceDataProvider*>* out_Providers);
	void Init();
};


// Class IpDrv.WebApplication
// 0x0014 (0x0050 - 0x003C)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                                // 0x003C(0x0004)
	class AWebServer*                                  WebServer;                                                // 0x0040(0x0004)
	struct FString                                     Path;                                                     // 0x0044(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebApplication");
		return ptr;
	}


	void PostQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Query(class UWebRequest* Request, class UWebResponse* Response);
	bool PreQuery(class UWebRequest* Request, class UWebResponse* Response);
	void CleanupApp();
	void Cleanup();
	void Init();
};


// Class IpDrv.WebServer
// 0x014C (0x0360 - 0x0214)
class AWebServer : public ATcpLink
{
public:
	struct FString                                     ServerName;                                               // 0x0214(0x000C) (Config, NeedCtorLink)
	struct FString                                     Applications[0xA];                                        // 0x0220(0x000C) (Config, NeedCtorLink)
	struct FString                                     ApplicationPaths[0xA];                                    // 0x0298(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bEnabled : 1;                                             // 0x0310(0x0004) (Config)
	int                                                ListenPort;                                               // 0x0314(0x0004) (Config)
	int                                                MaxConnections;                                           // 0x0318(0x0004) (Config)
	int                                                DefaultApplication;                                       // 0x031C(0x0004) (Config)
	int                                                ExpirationSeconds;                                        // 0x0320(0x0004) (Config)
	struct FString                                     ServerURL;                                                // 0x0324(0x000C) (NeedCtorLink)
	class UWebApplication*                             ApplicationObjects[0xA];                                  // 0x0330(0x0004)
	int                                                ConnectionCount;                                          // 0x0358(0x0004)
	int                                                ConnID;                                                   // 0x035C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebServer");
		return ptr;
	}


	class UWebApplication* GetApplication(const struct FString& URI, struct FString* SubURI);
	void LostChild(class AActor* C);
	void GainedChild(class AActor* C);
	void Destroyed();
	void PostBeginPlay();
};


// Class IpDrv.HelloWeb
// 0x0000 (0x0050 - 0x0050)
class UHelloWeb : public UWebApplication
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.HelloWeb");
		return ptr;
	}


	void Query(class UWebRequest* Request, class UWebResponse* Response);
	void Init();
};


// Class IpDrv.ImageServer
// 0x0000 (0x0050 - 0x0050)
class UImageServer : public UWebApplication
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.ImageServer");
		return ptr;
	}


	void Query(class UWebRequest* Request, class UWebResponse* Response);
};


// Class IpDrv.McpServiceConfig
// 0x0030 (0x006C - 0x003C)
class UMcpServiceConfig : public UObject
{
public:
	struct FString                                     Protocol;                                                 // 0x003C(0x000C) (Config, NeedCtorLink)
	struct FString                                     Domain;                                                   // 0x0048(0x000C) (Config, NeedCtorLink)
	struct FString                                     AppKey;                                                   // 0x0054(0x000C) (NeedCtorLink)
	struct FString                                     AppSecret;                                                // 0x0060(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServiceConfig");
		return ptr;
	}


	struct FString GetUserAuthTicket(const struct FString& McpId);
};


// Class IpDrv.McpClashMobBase
// 0x0054 (0x00A0 - 0x004C)
class UMcpClashMobBase : public UMcpServiceBase
{
public:
	struct FString                                     McpClashMobClassName;                                     // 0x004C(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnQueryChallengeListComplete__Delegate;                 // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDownloadChallengeFileComplete__Delegate;              // 0x0064(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptChallengeComplete__Delegate;                    // 0x0070(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQueryChallengeUserStatusComplete__Delegate;           // 0x007C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateChallengeUserProgressComplete__Delegate;        // 0x0088(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateChallengeUserRewardComplete__Delegate;          // 0x0094(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpClashMobBase");
		return ptr;
	}


	void UpdateChallengeUserReward(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, int UserReward);
	void OnUpdateChallengeUserRewardComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void UpdateChallengeUserProgress(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, bool bDidComplete, int GoalProgress);
	void OnUpdateChallengeUserProgressComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void GetChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus);
	void QueryChallengeMultiUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, TArray<struct FString>* UserIdsToRead);
	void QueryChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void OnQueryChallengeUserStatusComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void AcceptChallenge(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void OnAcceptChallengeComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, const struct FString& Error);
	void DeleteCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void ClearCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void GetChallengeFileContents(const struct FString& UniqueChallengeId, const struct FString& DLName, TArray<unsigned char>* OutFileContents);
	void DownloadChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void GetChallengeFileList(const struct FString& UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>* OutChallengeFiles);
	void OnDownloadChallengeFileComplete(bool bWasSuccessful, const struct FString& UniqueChallengeId, const struct FString& DLName, const struct FString& Filename, const struct FString& Error);
	void GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>* OutChallengeEvents);
	void QueryChallengeList();
	void OnQueryChallengeListComplete(bool bWasSuccessful, const struct FString& Error);
	class UMcpClashMobBase* STATIC_CreateInstance();
};


// Class IpDrv.McpClashMobFileDownload
// 0x0000 (0x00C0 - 0x00C0)
class UMcpClashMobFileDownload : public UOnlineTitleFileDownloadWeb
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpClashMobFileDownload");
		return ptr;
	}


	struct FString GetUrlForFile(const struct FString& Filename);
};


// Class IpDrv.McpClashMobManager
// 0x00F0 (0x0190 - 0x00A0)
class UMcpClashMobManager : public UMcpClashMobBase
{
public:
	struct FString                                     ChallengeListUrl;                                         // 0x00A0(0x000C) (Config, NeedCtorLink)
	struct FString                                     ChallengeStatusUrl;                                       // 0x00AC(0x000C) (Config, NeedCtorLink)
	struct FString                                     ChallengeMultiStatusUrl;                                  // 0x00B8(0x000C) (Config, NeedCtorLink)
	struct FString                                     AcceptChallengeUrl;                                       // 0x00C4(0x000C) (Config, NeedCtorLink)
	struct FString                                     UpdateChallengeProgressUrl;                               // 0x00D0(0x000C) (Config, NeedCtorLink)
	struct FString                                     UpdateRewardProgressUrl;                                  // 0x00DC(0x000C) (Config, NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestChallengeList;                                 // 0x00E8(0x0004)
	TArray<struct FMcpChallengeUserRequest>            ChallengeUserRequests;                                    // 0x00EC(0x000C) (NeedCtorLink)
	TArray<struct FMcpClashMobChallengeEvent>          ChallengeEvents;                                          // 0x00F8(0x000C) (NeedCtorLink)
	TArray<struct FMcpClashMobChallengeUserStatus>     ChallengeUserStatus;                                      // 0x0104(0x000C) (NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             TempChallengeUserStatus;                                  // 0x0110(0x0068) (NeedCtorLink)
	TArray<struct FMcpClashMobChallengeUserStatus>     TempChallengeUserStatusArray;                             // 0x0178(0x000C) (NeedCtorLink)
	TScriptInterface<class UOnlineTitleFileCacheInterface> FileCache;                                                // 0x0184(0x0008)
	class UMcpClashMobFileDownload*                    FileDownloader;                                           // 0x018C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpClashMobManager");
		return ptr;
	}


	void OnUpdateChallengeUserRewardHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateChallengeUserReward(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, int UserReward);
	void OnUpdateChallengeUserProgressHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateChallengeUserProgress(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, bool bDidComplete, int GoalProgress);
	void GetChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus);
	void OnQueryChallengeMultiStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeMultiUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId, TArray<struct FString>* UserIdsToRead);
	void OnQueryChallengeStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeUserStatus(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void OnAcceptChallengeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AcceptChallenge(const struct FString& UniqueChallengeId, const struct FString& UniqueUserId);
	void DeleteCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void ClearCachedChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void GetChallengeFileContents(const struct FString& UniqueChallengeId, const struct FString& DLName, TArray<unsigned char>* OutFileContents);
	void OnDownloadMcpFileComplete(bool bWasSuccessful, const struct FString& DLName);
	void OnLoadCachedFileComplete(bool bWasSuccessful, const struct FString& DLName);
	void DownloadChallengeFile(const struct FString& UniqueChallengeId, const struct FString& DLName);
	void GetChallengeFileList(const struct FString& UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>* OutChallengeFiles);
	void GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>* OutChallengeEvents);
	void OnQueryChallengeListHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeList();
	void Init();
};


// Class IpDrv.McpGroupsBase
// 0x0084 (0x00D0 - 0x004C)
class UMcpGroupsBase : public UMcpServiceBase
{
public:
	struct FString                                     McpGroupsManagerClassName;                                // 0x004C(0x000C) (Config, NeedCtorLink)
	TArray<struct FMcpGroupList>                       GroupLists;                                               // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateGroupComplete__Delegate;                        // 0x0064(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteGroupComplete__Delegate;                        // 0x0070(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsComplete__Delegate;                        // 0x007C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupMembersComplete__Delegate;                  // 0x0088(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAddGroupMembersComplete__Delegate;                    // 0x0094(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRemoveGroupMembersComplete__Delegate;                 // 0x00A0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteAllGroupsComplete__Delegate;                    // 0x00AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupInvitesComplete__Delegate;                  // 0x00B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptGroupInviteComplete__Delegate;                  // 0x00C4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpGroupsBase");
		return ptr;
	}


	void OnAcceptGroupInviteComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error);
	void AcceptGroupInvite(const struct FString& UniqueUserId, const struct FString& GroupID, bool bShouldAccept);
	void GetGroupInviteList(const struct FString& UserId, struct FMcpGroupList* InviteList);
	void OnQueryGroupInvitesComplete(bool bWasSuccessful, const struct FString& Error);
	void QueryGroupInvites(const struct FString& UniqueUserId);
	void OnDeleteAllGroupsComplete(const struct FString& RequesterId, bool bWasSuccessful, const struct FString& Error);
	void DeleteAllGroups(const struct FString& OwnerId);
	void OnRemoveGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error);
	void RemoveGroupMembers(const struct FString& OwnerId, const struct FString& GroupID, TArray<struct FString>* MemberIds);
	void OnAddGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error);
	void AddGroupMembers(const struct FString& OwnerId, const struct FString& GroupID, bool bRequiresAcceptance, TArray<struct FString>* MemberIds);
	void GetGroupMembers(const struct FString& GroupID, TArray<struct FMcpGroupMember>* GroupMembers);
	void OnQueryGroupMembersComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error);
	void QueryGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID);
	void GetGroupList(const struct FString& UserId, struct FMcpGroupList* GroupList);
	void OnQueryGroupsComplete(const struct FString& UserId, bool bWasSuccessful, const struct FString& Error);
	void QueryGroups(const struct FString& RequesterId);
	void OnDeleteGroupComplete(const struct FString& GroupID, bool bWasSuccessful, const struct FString& Error);
	void DeleteGroup(const struct FString& UniqueUserId, const struct FString& GroupID);
	void OnCreateGroupComplete(const struct FMcpGroup& Group, bool bWasSuccessful, const struct FString& Error);
	void CreateGroup(const struct FString& OwnerId, const struct FString& GroupName);
	class UMcpGroupsBase* STATIC_CreateInstance();
};


// Class IpDrv.McpGroupsManager
// 0x009C (0x016C - 0x00D0)
class UMcpGroupsManager : public UMcpGroupsBase
{
public:
	struct FString                                     CreateGroupUrl;                                           // 0x00D0(0x000C) (Config, NeedCtorLink)
	struct FString                                     DeleteGroupUrl;                                           // 0x00DC(0x000C) (Config, NeedCtorLink)
	struct FString                                     QueryGroupsUrl;                                           // 0x00E8(0x000C) (Config, NeedCtorLink)
	struct FString                                     QueryGroupMembersUrl;                                     // 0x00F4(0x000C) (Config, NeedCtorLink)
	struct FString                                     AddGroupMembersUrl;                                       // 0x0100(0x000C) (Config, NeedCtorLink)
	struct FString                                     RemoveGroupMembersUrl;                                    // 0x010C(0x000C) (Config, NeedCtorLink)
	struct FString                                     DeleteAllGroupsUrl;                                       // 0x0118(0x000C) (Config, NeedCtorLink)
	struct FString                                     AcceptGroupInviteUrl;                                     // 0x0124(0x000C) (Config, NeedCtorLink)
	struct FString                                     RejectGroupInviteUrl;                                     // 0x0130(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsRequestComplete__Delegate;                 // 0x013C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupMembersRequestComplete__Delegate;           // 0x0148(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAddGroupMembersRequestComplete__Delegate;             // 0x0154(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptGroupInviteRequestComplete__Delegate;           // 0x0160(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpGroupsManager");
		return ptr;
	}


	void CacheGroupMember(const struct FString& MemberId, const struct FString& GroupID, TEnumAsByte<EMcpGroupAcceptState> AcceptState);
	void CacheGroup(const struct FString& RequesterId, const struct FMcpGroup& Group);
	void OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void AcceptGroupInvite(const struct FString& UniqueUserId, const struct FString& GroupID, bool bShouldAccept);
	void OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteAllGroups(const struct FString& UniqueUserId);
	void OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void RemoveGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID, TArray<struct FString>* MemberIds);
	void OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void AddGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID, bool bRequiresAcceptance, TArray<struct FString>* MemberIds);
	void GetGroupMembers(const struct FString& GroupID, TArray<struct FMcpGroupMember>* GroupMembers);
	void OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryGroupMembers(const struct FString& UniqueUserId, const struct FString& GroupID);
	void GetGroupList(const struct FString& UserId, struct FMcpGroupList* GroupList);
	void OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryGroups(const struct FString& RequesterId);
	void OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteGroup(const struct FString& UniqueUserId, const struct FString& GroupID);
	void OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void CreateGroup(const struct FString& UniqueUserId, const struct FString& GroupName);
};


// Class IpDrv.McpIdMappingBase
// 0x0024 (0x0070 - 0x004C)
class UMcpIdMappingBase : public UMcpServiceBase
{
public:
	struct FString                                     McpIdMappingClassName;                                    // 0x004C(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnAddMappingComplete__Delegate;                         // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMappingsComplete__Delegate;                      // 0x0064(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpIdMappingBase");
		return ptr;
	}


	void GetIdMappings(const struct FString& ExternalType, TArray<struct FMcpIdMapping>* IDMappings);
	void OnQueryMappingsComplete(const struct FString& ExternalType, bool bWasSuccessful, const struct FString& Error);
	void QueryMappings(const struct FString& ExternalType, TArray<struct FString>* ExternalIds);
	void OnAddMappingComplete(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType, bool bWasSuccessful, const struct FString& Error);
	void AddMapping(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType);
	class UMcpIdMappingBase* STATIC_CreateInstance();
};


// Class IpDrv.McpIdMappingManager
// 0x003C (0x00AC - 0x0070)
class UMcpIdMappingManager : public UMcpIdMappingBase
{
public:
	TArray<struct FMcpIdMapping>                       AccountMappings;                                          // 0x0070(0x000C) (NeedCtorLink)
	struct FString                                     AddMappingUrl;                                            // 0x007C(0x000C) (Config, NeedCtorLink)
	struct FString                                     QueryMappingUrl;                                          // 0x0088(0x000C) (Config, NeedCtorLink)
	TArray<struct FAddMappingRequest>                  AddMappingRequests;                                       // 0x0094(0x000C) (NeedCtorLink)
	TArray<struct FQueryMappingRequest>                QueryMappingRequests;                                     // 0x00A0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpIdMappingManager");
		return ptr;
	}


	void GetIdMappings(const struct FString& ExternalType, TArray<struct FMcpIdMapping>* IDMappings);
	void OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryMappings(const struct FString& ExternalType, TArray<struct FString>* ExternalIds);
	void OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AddMapping(const struct FString& McpId, const struct FString& ExternalId, const struct FString& ExternalType);
};


// Class IpDrv.McpManagedValueManagerBase
// 0x003C (0x0088 - 0x004C)
class UMcpManagedValueManagerBase : public UMcpServiceBase
{
public:
	struct FString                                     McpManagedValueManagerClassName;                          // 0x004C(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;                     // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReadSaveSlotComplete__Delegate;                       // 0x0064(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateValueComplete__Delegate;                        // 0x0070(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteValueComplete__Delegate;                        // 0x007C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpManagedValueManagerBase");
		return ptr;
	}


	void OnDeleteValueComplete(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, bool bWasSuccessful, const struct FString& Error);
	void DeleteValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	void OnUpdateValueComplete(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value, bool bWasSuccessful, const struct FString& Error);
	void UpdateValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value);
	int GetValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	TArray<struct FManagedValue> GetValues(const struct FString& McpId, const struct FString& SaveSlot);
	void OnReadSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlot, bool bWasSuccessful, const struct FString& Error);
	void ReadSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
	void OnCreateSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlot, bool bWasSuccessful, const struct FString& Error);
	void CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
	class UMcpManagedValueManagerBase* STATIC_CreateInstance();
};


// Class IpDrv.McpManagedValueManager
// 0x006C (0x00F4 - 0x0088)
class UMcpManagedValueManager : public UMcpManagedValueManagerBase
{
public:
	struct FString                                     CreateSaveSlotUrl;                                        // 0x0088(0x000C) (Config, NeedCtorLink)
	struct FString                                     ReadSaveSlotUrl;                                          // 0x0094(0x000C) (Config, NeedCtorLink)
	struct FString                                     UpdateValueUrl;                                           // 0x00A0(0x000C) (Config, NeedCtorLink)
	struct FString                                     DeleteValueUrl;                                           // 0x00AC(0x000C) (Config, NeedCtorLink)
	TArray<struct FManagedValueSaveSlot>               SaveSlots;                                                // 0x00B8(0x000C) (NeedCtorLink)
	TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> CreateSaveSlotRequests;                                   // 0x00C4(0x000C) (NeedCtorLink)
	TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> ReadSaveSlotRequests;                                     // 0x00D0(0x000C) (NeedCtorLink)
	TArray<struct FValueRequestState>                  UpdateValueRequests;                                      // 0x00DC(0x000C) (NeedCtorLink)
	TArray<struct FValueRequestState>                  DeleteValueRequests;                                      // 0x00E8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpManagedValueManager");
		return ptr;
	}


	void OnDeleteValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	void OnUpdateValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId, int Value);
	int GetValue(const struct FString& McpId, const struct FString& SaveSlot, const struct FName& ValueId);
	TArray<struct FManagedValue> GetValues(const struct FString& McpId, const struct FString& SaveSlot);
	void OnReadSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ReadSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
	void ParseValuesForSaveSlot(const struct FString& McpId, const struct FString& SaveSlot, const struct FString& JsonPayload);
	int FindSaveSlotIndex(const struct FString& McpId, const struct FString& SaveSlot);
	void OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlot);
};


// Class IpDrv.McpServerTimeBase
// 0x0018 (0x0064 - 0x004C)
class UMcpServerTimeBase : public UMcpServiceBase
{
public:
	struct FString                                     McpServerTimeClassName;                                   // 0x004C(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnQueryServerTimeComplete__Delegate;                    // 0x0058(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServerTimeBase");
		return ptr;
	}


	struct FString GetLastServerTime();
	void OnQueryServerTimeComplete(bool bWasSuccessful, const struct FString& DateTimeStr, const struct FString& Error);
	void QueryServerTime();
	class UMcpServerTimeBase* STATIC_CreateInstance();
};


// Class IpDrv.McpServerTimeManager
// 0x001C (0x0080 - 0x0064)
class UMcpServerTimeManager : public UMcpServerTimeBase
{
public:
	struct FString                                     TimeStampUrl;                                             // 0x0064(0x000C) (Config, NeedCtorLink)
	struct FString                                     LastTimeStamp;                                            // 0x0070(0x000C) (NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestServerTime;                                    // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpServerTimeManager");
		return ptr;
	}


	struct FString GetLastServerTime();
	void OnQueryServerTimeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryServerTime();
};


// Class IpDrv.McpUserInventoryBase
// 0x0084 (0x00D0 - 0x004C)
class UMcpUserInventoryBase : public UMcpServiceBase
{
public:
	struct FString                                     McpUserInventoryClassName;                                // 0x004C(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;                     // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteSaveSlotComplete__Delegate;                     // 0x0064(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQuerySaveSlotListComplete__Delegate;                  // 0x0070(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQueryInventoryItemsComplete__Delegate;                // 0x007C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPurchaseItemComplete__Delegate;                       // 0x0088(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnSellItemComplete__Delegate;                           // 0x0094(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnEarnItemComplete__Delegate;                           // 0x00A0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnConsumeItemComplete__Delegate;                        // 0x00AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteItemComplete__Delegate;                         // 0x00B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRecordIapComplete__Delegate;                          // 0x00C4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserInventoryBase");
		return ptr;
	}


	void OnRecordIapComplete(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void RecordIap(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& Receipt);
	void OnDeleteItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, bool bWasSuccessful, const struct FString& Error);
	void DeleteItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int StoreVersion);
	void OnConsumeItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void ConsumeItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion);
	void OnEarnItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void EarnItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, int Quantity, int StoreVersion);
	void OnSellItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void SellItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>* ExpectedResultItems);
	void OnPurchaseItemComplete(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> UpdatedItemIds, bool bWasSuccessful, const struct FString& Error);
	void PurchaseItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar);
	bool GetInventoryItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, struct FMcpInventoryItem* OutInventoryItem);
	void GetInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FMcpInventoryItem>* OutInventoryItems);
	void OnQueryInventoryItemsComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error);
	void QueryInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId);
	void OnQuerySaveSlotListComplete(const struct FString& McpId, bool bWasSuccessful, const struct FString& Error);
	TArray<struct FString> GetSaveSlotList(const struct FString& McpId);
	void QuerySaveSlotList(const struct FString& McpId);
	void OnDeleteSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error);
	void DeleteSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId);
	void OnCreateSaveSlotComplete(const struct FString& McpId, const struct FString& SaveSlotId, bool bWasSuccessful, const struct FString& Error);
	void CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ParentSaveSlotId);
	class UMcpUserInventoryBase* STATIC_CreateInstance();
};


// Class IpDrv.McpUserInventoryManager
// 0x00B4 (0x0184 - 0x00D0)
class UMcpUserInventoryManager : public UMcpUserInventoryBase
{
public:
	struct FString                                     CreateSaveSlotUrl;                                        // 0x00D0(0x000C) (Config, NeedCtorLink)
	struct FString                                     DeleteSaveSlotUrl;                                        // 0x00DC(0x000C) (Config, NeedCtorLink)
	struct FString                                     ListSaveSlotUrl;                                          // 0x00E8(0x000C) (Config, NeedCtorLink)
	struct FString                                     ListItemsUrl;                                             // 0x00F4(0x000C) (Config, NeedCtorLink)
	struct FString                                     PurchaseItemUrl;                                          // 0x0100(0x000C) (Config, NeedCtorLink)
	struct FString                                     SellItemUrl;                                              // 0x010C(0x000C) (Config, NeedCtorLink)
	struct FString                                     EarnItemUrl;                                              // 0x0118(0x000C) (Config, NeedCtorLink)
	struct FString                                     ConsumeItemUrl;                                           // 0x0124(0x000C) (Config, NeedCtorLink)
	struct FString                                     DeleteItemUrl;                                            // 0x0130(0x000C) (Config, NeedCtorLink)
	struct FString                                     IapRecordUrl;                                             // 0x013C(0x000C) (Config, NeedCtorLink)
	TArray<struct FMcpInventorySaveSlot>               SaveSlots;                                                // 0x0148(0x000C) (NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> SaveSlotRequests;                                         // 0x0154(0x000C) (NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListSaveSlotRequests;                                     // 0x0160(0x000C) (NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListItemsRequests;                                        // 0x016C(0x000C) (NeedCtorLink)
	TArray<struct FInventoryItemRequestState>          ItemRequests;                                             // 0x0178(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserInventoryManager");
		return ptr;
	}


	void OnRecordIapRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void RecordIap(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& Receipt);
	void OnDeleteItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int StoreVersion);
	void OnConsumeItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ConsumeItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion);
	void OnEarnItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void EarnItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, int Quantity, int StoreVersion);
	void OnSellItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void SellItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, int Quantity, int StoreVersion, TArray<struct FMcpInventoryItemContainer>* ExpectedResultItems);
	void OnPurchaseItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void PurchaseItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& GlobalItemId, TArray<struct FString> PurchaseItemIds, int Quantity, int StoreVersion, float Scalar);
	int FindItemRequest(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ItemId, TArray<struct FInventoryItemRequestState>* InItemRequests);
	int FindSaveSlotRequest(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState>* InSaveSlotRequests);
	int FindSaveSlotIndex(const struct FString& McpId, const struct FString& SaveSlotId);
	void ParseSaveSlotList(const struct FString& McpId, const struct FString& JsonPayload);
	TArray<struct FString> ParseInventoryForSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& JsonPayload);
	bool GetInventoryItem(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& InstanceItemId, struct FMcpInventoryItem* OutInventoryItem);
	void GetInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId, TArray<struct FMcpInventoryItem>* OutInventoryItems);
	void OnQueryInventoryItemsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryInventoryItems(const struct FString& McpId, const struct FString& SaveSlotId);
	TArray<struct FString> GetSaveSlotList(const struct FString& McpId);
	void OnQuerySaveSlotListRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QuerySaveSlotList(const struct FString& McpId);
	void OnDeleteSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId);
	void OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void CreateSaveSlot(const struct FString& McpId, const struct FString& SaveSlotId, const struct FString& ParentSaveSlotId);
};


// Class IpDrv.McpUserManagerBase
// 0x003C (0x0088 - 0x004C)
class UMcpUserManagerBase : public UMcpServiceBase
{
public:
	struct FString                                     McpUserManagerClassName;                                  // 0x004C(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterUserComplete__Delegate;                       // 0x0058(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAuthenticateUserComplete__Delegate;                   // 0x0064(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQueryUsersComplete__Delegate;                         // 0x0070(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserComplete__Delegate;                         // 0x007C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserManagerBase");
		return ptr;
	}


	void OnDeleteUserComplete(bool bWasSuccessful, const struct FString& Error);
	void DeleteUser(const struct FString& McpId);
	bool GetUser(const struct FString& McpId, struct FMcpUserStatus* User);
	void GetUsers(TArray<struct FMcpUserStatus>* Users);
	void OnQueryUsersComplete(bool bWasSuccessful, const struct FString& Error);
	void QueryUsers(TArray<struct FString>* McpIds);
	void QueryUser(const struct FString& McpId, bool bShouldUpdateLastActive);
	void OnAuthenticateUserComplete(const struct FString& McpId, const struct FString& Token, bool bWasSuccessful, const struct FString& Error);
	void AuthenticateUserMcp(const struct FString& McpId, const struct FString& ClientSecret, const struct FString& UDID);
	void AuthenticateUserFacebook(const struct FString& FacebookId, const struct FString& FacebookToken, const struct FString& UDID);
	void OnRegisterUserComplete(const struct FString& McpId, bool bWasSuccessful, const struct FString& Error);
	void RegisterUserFacebook(const struct FString& FacebookId, const struct FString& FacebookAuthToken);
	void RegisterUserGenerated();
	class UMcpUserManagerBase* STATIC_CreateInstance();
};


// Class IpDrv.McpUserManager
// 0x0090 (0x0118 - 0x0088)
class UMcpUserManager : public UMcpUserManagerBase
{
public:
	TArray<struct FMcpUserStatus>                      UserStatuses;                                             // 0x0088(0x000C) (NeedCtorLink)
	struct FString                                     RegisterUserMcpUrl;                                       // 0x0094(0x000C) (Config, NeedCtorLink)
	struct FString                                     RegisterUserFacebookUrl;                                  // 0x00A0(0x000C) (Config, NeedCtorLink)
	struct FString                                     QueryUserUrl;                                             // 0x00AC(0x000C) (Config, NeedCtorLink)
	struct FString                                     QueryUsersUrl;                                            // 0x00B8(0x000C) (Config, NeedCtorLink)
	struct FString                                     DeleteUserUrl;                                            // 0x00C4(0x000C) (Config, NeedCtorLink)
	struct FString                                     FacebookAuthUrl;                                          // 0x00D0(0x000C) (Config, NeedCtorLink)
	struct FString                                     McpAuthUrl;                                               // 0x00DC(0x000C) (Config, NeedCtorLink)
	TArray<class UHttpRequestInterface*>               RegisterUserRequests;                                     // 0x00E8(0x000C) (NeedCtorLink)
	TArray<class UHttpRequestInterface*>               QueryUsersRequests;                                       // 0x00F4(0x000C) (NeedCtorLink)
	TArray<struct FUserRequest>                        DeleteUserRequests;                                       // 0x0100(0x000C) (NeedCtorLink)
	TArray<class UHttpRequestInterface*>               AuthUserRequests;                                         // 0x010C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.McpUserManager");
		return ptr;
	}


	void OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteUser(const struct FString& McpId);
	bool GetUser(const struct FString& McpId, struct FMcpUserStatus* User);
	void GetUsers(TArray<struct FMcpUserStatus>* Users);
	void OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ParseUsers(const struct FString& JsonPayload);
	void QueryUsers(TArray<struct FString>* McpIds);
	void OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryUser(const struct FString& McpId, bool bShouldUpdateLastActive);
	void OnAuthenticateUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AuthenticateUserMcp(const struct FString& McpId, const struct FString& ClientSecret, const struct FString& UDID);
	void AuthenticateUserFacebook(const struct FString& FacebookId, const struct FString& FacebookToken, const struct FString& UDID);
	void OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	int ParseUser(const struct FString& JsonPayload);
	void RegisterUserFacebook(const struct FString& FacebookId, const struct FString& FacebookAuthToken);
	void RegisterUserGenerated();
};


// Class IpDrv.OnlineImageDownloaderWeb
// 0x001C (0x0058 - 0x003C)
class UOnlineImageDownloaderWeb : public UObject
{
public:
	TArray<struct FOnlineImageDownload>                DownloadImages;                                           // 0x003C(0x000C) (NeedCtorLink)
	int                                                MaxSimultaneousDownloads;                                 // 0x0048(0x0004) (Config)
	struct FScriptDelegate                             __OnOnlineImageDownloaded__Delegate;                      // 0x004C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.OnlineImageDownloaderWeb");
		return ptr;
	}


	void DebugDraw(class UCanvas* Canvas);
	void OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void DownloadNextImage();
	void ClearAllDownloads();
	void ClearDownloads(TArray<struct FString> URLs);
	int GetNumPendingDownloads();
	void RequestOnlineImages(TArray<struct FString> URLs);
	class UTexture* GetOnlineImageTexture(const struct FString& URL);
	void OnOnlineImageDownloaded(const struct FOnlineImageDownload& CachedEntry);
};


// Class IpDrv.WebConnection
// 0x0030 (0x0244 - 0x0214)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                                // 0x0214(0x0004)
	struct FString                                     ReceivedData;                                             // 0x0218(0x000C) (NeedCtorLink)
	class UWebRequest*                                 Request;                                                  // 0x0224(0x0004)
	class UWebResponse*                                Response;                                                 // 0x0228(0x0004)
	class UWebApplication*                             Application;                                              // 0x022C(0x0004)
	unsigned long                                      bDelayCleanup : 1;                                        // 0x0230(0x0004)
	int                                                RawBytesExpecting;                                        // 0x0234(0x0004)
	int                                                MaxValueLength;                                           // 0x0238(0x0004) (Config)
	int                                                MaxLineLength;                                            // 0x023C(0x0004) (Config)
	int                                                ConnID;                                                   // 0x0240(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class IpDrv.WebConnection");
		return ptr;
	}


	bool IsHanging();
	void Cleanup();
	void CheckRawBytes();
	void EndOfHeaders();
	void CreateResponseObject();
	void ProcessPost(const struct FString& S);
	void ProcessGet(const struct FString& S);
	void ProcessHead(const struct FString& S);
	void ReceivedLine(const struct FString& S);
	void ReceivedText(const struct FString& Text);
	void Timer();
	void Closed();
	void Accepted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
