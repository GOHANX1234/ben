#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:36 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Gamelet.Gamelet
// 0x001C (0x0038 - 0x001C)
class UGamelet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.Gamelet");
        return pStaticClass;
    }


	int UpdateProductConfig();
	static void StopTick();
	static void StartTick();
	static void SetTickIntervalSec(float TickIntervalSec);
	int SetScriptExternalLoadDir(const struct FString& ExternalLoadDir);
	int SetFont(const struct FString& FontName, const struct FString& FontPath);
	int SetDefaultFont(const struct FString& FontName);
	void SetBuiltinResConfig(const struct FString& ResConfig);
	int SetAppVisibility(const struct FString& AppID, bool Visible);
	int SetAppPageVisibility(const struct FString& AppID, const struct FString& AppPage, bool Visible);
	int SendMessageToSdk(const struct FString& Msg);
	int SendMessageToApp(const struct FString& AppID, const struct FString& Msg);
	int RefreshUserdata(TMap<struct FString, struct FString> UserData);
	int OpenBeforeLogin(TEnumAsByte<EGameletEnvironment> Environment);
	int OpenApp(const struct FString& AppID, const struct FString& OpenArgs);
	int Open(TEnumAsByte<EGameletEnvironment> Environment, TMap<struct FString, struct FString> UserData);
	int Initialize(class UGameletSettings* Settings);
	static struct FString GetProductConfig();
	class UGameletSettings* GetGlobalSettings();
	int GetBackTrace(struct FString* TraceInfo);
	static class UGamelet* Get();
	int ExecOnSDKMessage(const struct FString& Msg);
	int ExecOnReportData(const struct FString& EventName, const struct FString& Data);
	int ExecOnRefreshUserdata();
	void EnableLog(bool Enable);
	int Deinitialize();
	void CollectPixUILogOutput(EPxLogGroups PixUILogType, EPxLogLevels PixUILogLevel, const struct FString& logContent);
	int CloseAppPage(const struct FString& AppID, const struct FString& AppPage);
	int CloseApp(const struct FString& AppID);
	int Close();
	int AllAssetsGC();
};


// Class Gamelet.GameletMatBrush
// 0x0000 (0x0028 - 0x0028)
class UGameletMatBrush : public UPixUIBrushWrapper
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletMatBrush");
        return pStaticClass;
    }

};


// Class Gamelet.GameletEnvMgr
// 0x006C (0x0088 - 0x001C)
class UGameletEnvMgr : public UObject
{
public:
	unsigned char                                      UnknownData00[0x6C];                                      // 0x001C(0x006C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletEnvMgr");
        return pStaticClass;
    }


	int OnEnvToGameMessage(const struct FString& Msg);
	int OnEnvToEntryMessage(const struct FString& Msg);
	int OnEnvReportData(const struct FString& EventName, const struct FString& Data);
	int OnEnvRefreshUserdata();
	void OnEnvLoaded(const struct FString& URL, int ErrorCode);
	void OnEnvInternalError(int ErrorCode, const struct FString& ErrorMsg);
	struct FString GetBackTrace();
};


// Class Gamelet.GameletFile
// 0x0000 (0x0020 - 0x0020)
class UGameletFile : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletFile");
        return pStaticClass;
    }


	static bool WriteFile(const struct FString& Path, const struct FGameletArrayBuffer& ArrayBuffer);
	static bool SaveStringToFile(const struct FString& Path, const struct FString& Content);
	static struct FGameletArrayBuffer ReadFile(const struct FString& Path);
	static struct FString LoadFileToString(const struct FString& Path);
	static struct FString GetFileMd5(const struct FString& Path);
	static int64_t FileSize(const struct FString& Path);
	static bool FileExists(const struct FString& Path);
	static bool DirectoryExists(const struct FString& Path);
	static bool DeleteFile(const struct FString& Path);
	static bool DeleteDirectory(const struct FString& Path);
	static bool CreateDirectory(const struct FString& Path);
};


// Class Gamelet.GameletPaths
// 0x0000 (0x0020 - 0x0020)
class UGameletPaths : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPaths");
        return pStaticClass;
    }


	static struct FString ToAbsolutePathForWrite(const struct FString& Path);
	static struct FString ToAbsolutePathForRead(const struct FString& Path);
	static struct FString RootDir();
	static struct FString ProjectUserDir();
	static struct FString ProjectSavedDir();
	static struct FString ProjectModsDir();
	static struct FString ProjectIntermediateDir();
	static struct FString ProjectDir();
	static struct FString ProjectContentDir();
	static struct FString ProjectConfigDir();
	static struct FString LaunchDir();
	static struct FString GetPuertsScriptFolderName();
	static struct FString GetPuertsEntrancePath(const struct FString& PakName);
	static struct FString GetPuertsAppScriptPath(const struct FString& AppFolderName);
	static struct FString GetPuertsAppNameByPakName(const struct FString& PakName);
	static struct FString GetPuertsAppIndexPath(const struct FString& AppFolderName);
	static struct FString GameletSavedRoot();
	static struct FString GameletFolderName();
	static struct FString GameletContentRoot();
	static struct FString GameletAppArchiveRoot(const struct FString& AppID);
};


// Class Gamelet.GameletPuertsEnvMgr
// 0x004C (0x0068 - 0x001C)
class UGameletPuertsEnvMgr : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x001C(0x004C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPuertsEnvMgr");
        return pStaticClass;
    }


	void OnEnvMessage(const struct FString& Msg);
	void OnEnvLoaded(const struct FString& URL, bool IsSuccess);
	static class UGameletPuertsEnvMgr* Get();
};


// Class Gamelet.GameletPuertsUtilities
// 0x0000 (0x0020 - 0x0020)
class UGameletPuertsUtilities : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPuertsUtilities");
        return pStaticClass;
    }


	static void UpdateTextureResources(class UTexture2D* Texture);
	static int UnmountPak(const struct FString& pakPath);
	static void RemoveUserWidgetFromGame(class UUserWidget* UserWidget, const struct FString& PanelInfo);
	static void ReleaseTextureResource(class UTexture2D* Texture);
	static int MountPak(const struct FString& pakPath);
	static class UUserWidget* LoadUI(const struct FString& Ref, class UObject* Obj);
	static class UTexture2D* LoadImageToTexture2D(const struct FString& Path, TEnumAsByte<ETextureGroup> LODGroup, unsigned char IsSRGB);
	static bool IsWithEditor();
	static void HelloWorld();
	static class UWidgetAnimation* GetWidgetAnimationByName(class UUserWidget* Widget, const struct FString& Name);
	static struct FString GetSDKVersion();
	static struct FString GetPlatformDesc();
	static unsigned char GetNetWorkType();
	static struct FString GetHardwareInfo();
	static struct FString GetEngineVersion();
	static void FlushPuertsVMMessages();
	static void AddUserWidgetToGame(class UUserWidget* UserWidget, const struct FString& PanelInfo);
};


// Class Gamelet.GameletSettings
// 0x006C (0x0088 - 0x001C)
class UGameletSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             OnSDKMessage;                                             // 0x0020(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRefreshUserdata;                                        // 0x0030(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnViewCreated;                                            // 0x0040(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnViewAboutToDestroy;                                     // 0x0050(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnReportData;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnProfileJSSDKMessage;                                    // 0x0070(0x0010) (Edit, ZeroConstructor, InstancedReference)
	bool                                               DisableJsErrReport;                                       // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableGetBackTrace;                                      // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DelayWndCallMsg;                                          // 0x0082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SupportUseEngineFont;                                     // 0x0083(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseSRGB;                                                  // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0085(0x0003) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletSettings");
        return pStaticClass;
    }


	bool IsValidSetting();
	static class UGameletSettings* Get();
};


// Class Gamelet.GameletWidget
// 0x0020 (0x0110 - 0x00F0)
class UGameletWidget : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletWidget");
        return pStaticClass;
    }

};


// Class Gamelet.GameletWindow
// 0x011C (0x0138 - 0x001C)
class UGameletWindow : public UObject
{
public:
	unsigned char                                      UnknownData00[0x11C];                                     // 0x001C(0x011C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletWindow");
        return pStaticClass;
    }


	void OnPxWidgetScriptStateInit();
	void OnPxWidgetScriptStateDone();
	bool OnPxWidgetRequestOpen(const struct FString& URL, const struct FString& Name, const struct FString& Features, bool bReplace);
	void OnPxWidgetMessage(const struct FString& Msg);
	void OnPxWidgetLoaded(const struct FString& URL, int ErrorCode);
	void OnPxWidgetInternalError(int ErrorCode, const struct FString& ErrorMsg);
	void OnPxWidgetClose();
};


}

