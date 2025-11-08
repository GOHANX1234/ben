#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:36 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PixUI.PixUIBrushWrapper
// 0x000C (0x0028 - 0x001C)
class UPixUIBrushWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIBrushWrapper");
        return pStaticClass;
    }

};


// Class PixUI.PixUIBPLibrary
// 0x0000 (0x0020 - 0x0020)
class UPixUIBPLibrary : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIBPLibrary");
        return pStaticClass;
    }


	static struct FString PixUI_Version();
	static void PixUI_Tick(float fDeltaTime);
	static bool PixUI_StartupEx(const struct FString& strCachePathForWrite, bool bSupportAsyncModel);
	static bool PixUI_Startup(const struct FString& strCachePathForWrite);
	static bool PixUI_Shutdown();
	static void PixUI_SetTickIntervalSec(float fTickIntervalSec);
	static void PixUI_SetSupportTextShape(bool beSupportTextShape);
	static void PixUI_SetSupportEngineFont(bool bSupportEngineFont);
	static void PixUI_SetSecretKey(const struct FString& strSecretKey);
	static void PixUI_SetPxLibDefaultVersionTag(int nNewPxLibVersionTag);
	static void PixUI_SetPixUIMaxLayerId(int nMaxLayerId);
	static void PixUI_SetPixUIMaxDynamicTextureTotalSize(int nMaxDynamicTextureTotalSize);
	static void PixUI_SetPixUIMaxDynamicTextureGCSize(int nMaxDynamicTextureGCSize);
	static void PixUI_SetPixUIMaxDynamicTextureGCRate(float fMaxGCRate);
	static void PixUI_SetMobileUseTouchEvent(bool bUseTouchEvent);
	static void PixUI_SetMatRootPath(const struct FString& strMatRootPath);
	static void PixUI_SetMatBasePath(const struct FString& strMatBasePath);
	static void PixUI_SetMatAsyncLoad(bool bMatAsyncLoad);
	static void PixUI_SetFontTypeFaceName(const struct FString& strFontName, EPxFontFaceType ePxFontTypeFace, const struct FString& strFontTypeFaceName);
	static void PixUI_SetExternalInterface(const TScriptInterface<class UPixUIExternalInterface>& scriptInterfaceExternal);
	static void PixUI_SetExtBpCallSupportThrowException(bool bSupportThrowExceptio);
	static void PixUI_SetDynamicTextureUpdateMode(EPxDynamicTextureUpdateMode eUpdateMode);
	static void PixUI_SetDynamicTextureFilter(TEnumAsByte<ETextureFilter> eTextureFilter);
	static void PixUI_SetDynamicFixFontSize(bool bOpenDynamicFix);
	static void PixUI_SetDrawEffectNoPixelSnapping(bool bNoPixelSnapping);
	static void PixUI_SetDefaultFontSize(int nFontSize);
	static void PixUI_SetDefaultFont(const struct FString& strFontName);
	static void PixUI_SetCoreTickDuration(int nDurationCount);
	static void PixUI_SetAutoTick(bool bAutoTick);
	static void PixUI_SetAsyncMode(bool beRunAsyncMode);
	static void PixUI_SetAsyncBpCallWaitOutTime(float fTimeOutSecond);
	static int PixUI_RHIShaderPlatform();
	static int PixUI_RHIShaderLevel();
	static void PixUI_RemoveSystemFont(const struct FString& strFontName);
	static void PixUI_PrintProfilerInfo();
	static float PixUI_PlatformOSVersionCode();
	static struct FString PixUI_PlatformOSVersion();
	static int PixUI_PlatformCode();
	static struct FString PixUI_Platform();
	static bool PixUI_IsSupportTextShape();
	static bool PixUI_IsStartUp();
	static bool PixUI_IsRHIShaderVulkan();
	static bool PixUI_IsRHIShaderOpenGLES2();
	static bool PixUI_IsRHIShaderOpenGL();
	static bool PixUI_IsRHIShaderMetal();
	static bool PixUI_IsRHIShaderDX();
	static bool PixUI_IsOsBit64();
	static bool PixUI_IsOsBit32();
	static bool PixUI_IsMobileUseTouchEvent();
	static bool PixUI_IsDynamicFixFontSize();
	static bool PixUI_IsAutoTick();
	static class UObject* PixUI_GetWindowSlotObject(int nWindowID, const struct FString& strTagId);
	static int PixUI_GetTotalFontCount();
	static float PixUI_GetTickIntervalSec();
	static void PixUI_GetSupportPxLibVersionTagArray(TArray<int>* arraySupportPxLibVersionTag);
	static bool PixUI_GetSupportEngineFont();
	static int PixUI_GetPxLibDefaultVersionTag();
	static class UObject* PixUI_GetPixUIWidgetSlotObject(int nPxWidgetID, const struct FString& strSlotTagId);
	static class UPixUIWidget* PixUI_GetPixUIWidgetByID(int nPxWidgetID);
	static int PixUI_GetPixUIMaxLayerId();
	static int PixUI_GetPixUIMaxDynamicTextureTotalSize();
	static int PixUI_GetPixUIMaxDynamicTextureGCSize();
	static float PixUI_GetPixUIMaxDynamicTextureGCRate();
	static struct FString PixUI_GetMatRootPath();
	static struct FString PixUI_GetMatBasePath();
	static bool PixUI_GetMatAsyncLoad();
	static struct FString PixUI_GetFontTypeFaceName(const struct FString& strFontName, EPxFontFaceType ePxFontTypeFace);
	static struct FString PixUI_GetFontPathByIndex(int nIndex);
	static bool PixUI_GetFontPath(const struct FString& strFontName, struct FString* strOutFontPath);
	static struct FString PixUI_GetFontNameByIndex(int nIndex);
	static bool PixUI_GetExtBpCallSupportThrowException();
	static EPxDynamicTextureUpdateMode PixUI_GetDynamicTextureUpdateMode();
	static TEnumAsByte<ETextureFilter> PixUI_GetDynamicTextureFilter();
	static bool PixUI_GetDrawEffectNoPixelSnapping();
	static void PixUI_GetDefaultFontSize(int* nOutFontSize);
	static void PixUI_GetDefaultFont(struct FString* strFontName);
	static int PixUI_GetCoreTickDuration();
	static void PixUI_GetCachePath(struct FString* strOutCachePath);
	static bool PixUI_GetAsyncMode();
	static float PixUI_GetAsyncBpCallWaitOutTime();
	static class UPixUIWidget* PixUI_FindByWindowID(int nWindowID);
	static void PixUI_DebugInfoSwitch(EPxDebugInfo EPxDebugInfo, bool bOpen);
	static class UPixUIWidget* PixUI_CreateWidget();
	static class UPixUIViewPortWidget* PixUI_CreateViewPortWidget();
	static class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvasEx(class UCanvasPanel* pParentCanvas);
	static class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvas(class UCanvasPanel* pParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);
	static class UPixUIScriptVM* PixUI_CreateScriptVM();
	static class UPixUIWidget* PixUI_CreateAddToCanvasEx(class UCanvasPanel* pParentCanvas);
	static class UPixUIWidget* PixUI_CreateAddToCanvas(class UCanvasPanel* p_ParentCanvas, const struct FAnchors& Anchors, const struct FMargin& Margin);
	static void PixUI_ClearCacheFile();
	static bool PixUI_CallPixUIAssetGC(int nViewId);
	static bool PixUI_BeDebugInfoOpen(EPxDebugInfo EPxDebugInfo);
	static void PixUI_AddSystemFont(const struct FString& strFontName, const struct FString& strFontPath);
};


// Class PixUI.PixUIExternalInterface
// 0x0000 (0x0020 - 0x0020)
class UPixUIExternalInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIExternalInterface");
        return pStaticClass;
    }


	class UWidget* OnWidgetLoad(const struct FString& strWidgetPath, const struct FString& strWidgetTag);
	class UPixUIBrushWrapper* OnSlateBrushLoad(const struct FString& strBrushPath);
	bool OnFileLoad(const struct FString& StrFilePath, const struct FScriptDelegate& callDelegate);
};


// Class PixUI.PixUIInput
// 0x0034 (0x0050 - 0x001C)
class UPixUIInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             DelegateActivateInput;                                    // 0x0020(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DelegateDeactivateInput;                                  // 0x0030(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIInput");
        return pStaticClass;
    }


	static void OnInputText(const struct FString& strInsert, bool bEndInput, bool bLostFocus, bool bReplace);
	static class UPixUIInput* Get();
};


// Class PixUI.PixUIRenderTarget
// 0x00FC (0x0118 - 0x001C)
class UPixUIRenderTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    DelegateOnClose;                                          // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnDestroy;                                        // 0x0034(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnLoaded;                                         // 0x0040(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnScriptStateInit;                                // 0x004C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnScriptStateDone;                                // 0x0058(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnInternalError;                                  // 0x0064(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             DelegateOnExternalOpen;                                   // 0x0070(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    DelegateOnExternalClose;                                  // 0x0080(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnMessage;                                        // 0x008C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnAlert;                                          // 0x0098(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FScriptDelegate                             DelegateOnConfirm;                                        // 0x00A8(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DelegateOnPrompt;                                         // 0x00B8(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    DelegateOnAppForeground;                                  // 0x00C8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnAppBackground;                                  // 0x00D4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                pxLibVersionTag;                                          // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x34];                                      // 0x00E4(0x0034) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIRenderTarget");
        return pStaticClass;
    }


	void SetExternalRenderTarget2D(class UTextureRenderTarget2D* pTextureRenderTarget);
	void SetBeSupportEventCallNested(bool bSupportEventCallNested);
	void SetBeDelayCallMessage(bool bDelayMessage);
	struct FString SendPxMessage(const struct FString& strMessage);
	void ReSize(int nNewWidth, int nNewHeight);
	void ReScale(float fScale);
	int PostPxMessage(const struct FString& strMessage);
	void OnExternalTouchEvent(const struct FVector2D& v2dPosTouch, int nPointerIndex, EPxTouchType ETouchType);
	void OnExternalTextInput(const struct FString& strNewInput, bool beEndInput, bool beLostFocus, bool beReplace);
	void OnExternalMouseEvent(const struct FVector2D& v2dPosMouse, const struct FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent);
	void OnExternalKeyBoardEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType eEventType);
	int LoadPageFromUrl(const struct FString& strUrl);
	int LoadPageFromGameAssetPath(const struct FString& strAssetPath);
	int LoadPageFromData(const struct FString& strBasePath, TArray<unsigned char>* arrayData);
	void HistoryGo(int nStep);
	int GetRenderTarget2DWidth();
	int GetRenderTarget2DHeight();
	class UTextureRenderTarget2D* GetRenderTarget2D();
	void DestroyPage();
	int Create(int nWidth, int nHeight, float fScale, bool bAsyncMode, bool bGammaSpace, bool bAntiAliasing);
	void ClosePage();
};


// Class PixUI.PixUIScriptVM
// 0x00A4 (0x00C0 - 0x001C)
class UPixUIScriptVM : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    DelegateOnClose;                                          // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnDestroy;                                        // 0x0034(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnLoaded;                                         // 0x0040(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnScriptStateInit;                                // 0x004C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnScriptStateDone;                                // 0x0058(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnInternalError;                                  // 0x0064(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             DelegateOnExternalOpen;                                   // 0x0070(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    DelegateOnExternalClose;                                  // 0x0080(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnMessage;                                        // 0x008C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnAppForeground;                                  // 0x0098(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnAppBackground;                                  // 0x00A4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                pxLibVersionTag;                                          // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIScriptVM");
        return pStaticClass;
    }


	void SetScriptGlobalString(const struct FString& StrName, const struct FString& strKey, const struct FString& strValue);
	void SetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey, float fValue);
	void SetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey, bool bValue);
	void SetBeSupportEventCallNested(bool bSupportEventCallNested);
	void SetBeDelayCallMessage(bool bDelayMessage);
	struct FString SendPxMessage(const struct FString& strMessage, int nWaitMS);
	int PostPxMessage(const struct FString& strMessage, int nWaitMS);
	int LoadURL(const struct FString& strUrl, int nWaitMS);
	bool IsValid();
	struct FString GetScriptGlobalString(const struct FString& StrName, const struct FString& strKey);
	float GetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey);
	bool GetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey);
	int GetPxVMId();
	int DoFile(const struct FString& StrFilePath, int nWaitMS);
	int DoBufferByAssetPath(const struct FString& strAssetPath, const struct FString& StrName, const struct FString& strModuleName, int nWaitMS);
	int DoBuffer(TArray<unsigned char> arrayData, const struct FString& strBasePath, const struct FString& StrName, const struct FString& strModuleName, int nWaitMS);
	int DestroyVM(int nWaitMS);
	void CreateScriptGlobal(const struct FString& StrName);
	int Create(bool bAsyncMode, int nWaitMS);
	int CloseVM(int nWaitMS);
};


// Class PixUI.PixUIViewPortWidget
// 0x0038 (0x0240 - 0x0208)
class UPixUIViewPortWidget : public UUserWidget
{
public:
	struct FScriptDelegate                             PixUIWidgetOpenDelegate;                                  // 0x0208(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             PixUIWidgetConfirmDelegate;                               // 0x0218(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             PixUIWidgetPromptDelegate;                                // 0x0228(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIViewPortWidget");
        return pStaticClass;
    }


	struct FString SendPxMessage(const struct FString& strMessage);
	void PostPxViewMessage(const struct FString& strMessage);
	int PostPxMessage(const struct FString& strMessage);
	void OnPixUITransformDelegate(EPxWidgetTransformType EPxWidgetTransformType, int nParam1, int nParam2);
	struct FString OnPixUIPromptDelegate(const struct FString& strTip, const struct FString& strDefault);
	int OnPixUIOpenDelegate(const struct FString& strUrl, const struct FString& StrName, const struct FString& strFeatures, bool bReplace);
	bool OnPixUIConfirmDelegate(const struct FString& strConfirmMsg);
	int LoadPxViewFromUrl(const struct FString& strUrl);
	int LoadPxViewFromGameAssetPath(const struct FString& strAssetPath);
	int LoadPxViewFromData(const struct FString& strRootPath, TArray<unsigned char>* arrayData);
	int LoadPageFromUrl(const struct FString& strUrl);
	int LoadPageFromGameAssetPath(const struct FString& strAssetPath);
	int LoadPageFromData(const struct FString& strRootPath, TArray<unsigned char>* arrayData);
	class UPixUIWidget* GetPixUIWidget();
	void ClosePxView();
	void ClosePage();
};


// Class PixUI.PixUIWidget
// 0x0198 (0x0288 - 0x00F0)
class UPixUIWidget : public UCanvasPanel
{
public:
	struct FScriptMulticastDelegate                    DelegateOnCreate;                                         // 0x00F0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnClose;                                          // 0x00FC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnDestroy;                                        // 0x0108(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnLoaded;                                         // 0x0114(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnScriptStateInit;                                // 0x0120(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnScriptStateDone;                                // 0x012C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnInternalError;                                  // 0x0138(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	struct FScriptDelegate                             DelegateOnExternalOpen;                                   // 0x0148(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    DelegateOnExternalClose;                                  // 0x0158(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnMessage;                                        // 0x0164(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnAlert;                                          // 0x0170(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x017C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             DelegateOnConfirm;                                        // 0x0180(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DelegateOnPrompt;                                         // 0x0190(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    DelegateOnTransform;                                      // 0x01A0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnAppForeground;                                  // 0x01AC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DelegateOnAppBackground;                                  // 0x01B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	struct FScriptDelegate                             DelegateHookKeyEvent;                                     // 0x01C8(0x0010) (Edit, ZeroConstructor, InstancedReference)
	bool                                               bIsAsync;                                                 // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsForcePaint;                                            // 0x01D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLazyReleaseMode;                                       // 0x01DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPxWidgetBatchType                                 BatchType;                                                // 0x01DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       TextDefaultUrl;                                           // 0x01DC(0x000C) (Edit, BlueprintVisible)
	bool                                               bIsStateNodeMode;                                         // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRHIRender;                                             // 0x01E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRHIRenderAntiAliasing;                                 // 0x01EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPxSlotTopHit;                                            // 0x01EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRetainMode;                                            // 0x01EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoPixelSnapping;                                         // 0x01ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x01EE(0x0002) MISSED OFFSET
	int                                                pxLibVersionTag;                                          // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x94];                                      // 0x01F4(0x0094) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PixUIWidget");
        return pStaticClass;
    }


	void ShowNextDrawItem();
	void ShowNextDrawBatch();
	void ShowAllDrawItem();
	void ShowAllDrawBatch();
	void SetScriptGlobalString(const struct FString& StrName, const struct FString& strKey, const struct FString& strValue);
	void SetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey, float fValue);
	void SetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey, bool bValue);
	void SetBeSupportEventCallNested(bool bSupportEventCallNested);
	void SetBeDelayCallMessage(bool bDelayMessage);
	void SetBackgroundBlur(float fBlurStrength);
	void SetAutoTransform(bool bAutoTransform);
	struct FString SendPxMessage(const struct FString& strMessage);
	int PostPxMessage(const struct FString& strMessage);
	int OpenPageFromUrl(const struct FString& strUrl);
	int OpenPageFromGameAssetPath(const struct FString& strAssetPath);
	int OpenPageFromData(const struct FString& strBasePath, TArray<unsigned char>* arrayData);
	void OnExternalTouchEvent(const struct FVector2D& v2dPosTouch, int nPointerIndex, EPxTouchType ETouchType);
	void OnExternalTextInput(const struct FString& strNewInput, bool beEndInput, bool beLostFocus, bool beReplace);
	void OnExternalMouseEvent(const struct FVector2D& v2dPosMouse, const struct FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent);
	void OnExternalKeyBoardEvent(const struct FKeyEvent& KeyEvent, EPxKeyEventType eEventType);
	int LoadPageFromUrl(const struct FString& strUrl);
	int LoadPageFromGameAssetPath(const struct FString& strAssetPath);
	int LoadPageFromData(const struct FString& strBasePath, TArray<unsigned char>* arrayData);
	void HistoryGo(int nStep);
	class UObject* GetSlotObjectByTagId(const struct FString& strSlotTagId);
	struct FString GetScriptGlobalString(const struct FString& StrName, const struct FString& strKey);
	float GetScriptGlobalNumber(const struct FString& StrName, const struct FString& strKey);
	bool GetScriptGlobalBoolean(const struct FString& StrName, const struct FString& strKey);
	int GetPxWinId();
	class UWidget* GetCtrlWidget();
	void DestroyPage();
	void CreateScriptGlobal(const struct FString& StrName);
	void ClosePage();
};


// Class PixUI.PxCustomDelegate
// 0x004C (0x0068 - 0x001C)
class UPxCustomDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x001C(0x004C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxCustomDelegate");
        return pStaticClass;
    }


	void OnPxCustomDelegate();
	static class UPxCustomDelegate* MakeCustomDelegate(const struct FString& strCustomDelegateName);
};


// Class PixUI.PxCustomInterfaceDyImp
// 0x00A4 (0x00C0 - 0x001C)
class UPxCustomInterfaceDyImp : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA4];                                      // 0x001C(0x00A4) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxCustomInterfaceDyImp");
        return pStaticClass;
    }


	static class UPxCustomInterfaceDyImp* MakeCustomInterface(const struct FString& strCustomInterfaceName, class UClass* pOverrideBaseClass);
};


// Class PixUI.PxFileLoad
// 0x0074 (0x0090 - 0x001C)
class UPxFileLoad : public UObject
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x001C(0x0074) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxFileLoad");
        return pStaticClass;
    }


	void OnFileLoad(TArray<unsigned char> arrayFileData);
};


// Class PixUI.PxSubLayerWidget
// 0x0018 (0x00E8 - 0x00D0)
class UPxSubLayerWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubLayerWidget");
        return pStaticClass;
    }

};


// Class PixUI.PxSubCtrlWidget
// 0x0008 (0x00F0 - 0x00E8)
class UPxSubCtrlWidget : public UPxSubLayerWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubCtrlWidget");
        return pStaticClass;
    }

};


// Class PixUI.PxSubNodeWidget
// 0x0010 (0x00E0 - 0x00D0)
class UPxSubNodeWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUI.PxSubNodeWidget");
        return pStaticClass;
    }

};


}

