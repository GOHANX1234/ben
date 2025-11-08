#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:36 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Pandora.BulletScreen
// 0x00B0 (0x01A0 - 0x00F0)
class UBulletScreen : public UCanvasPanel
{
public:
	int                                                MaxBulletLines;                                           // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BulletSpeed;                                              // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineHeight;                                               // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalInterval;                                       // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCachedBulletCount;                                     // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9C];                                      // 0x0104(0x009C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.BulletScreen");
        return pStaticClass;
    }


	void Stop();
	void Start();
	void Resume();
	void Pause();
	void AddBullets(TArray<struct FString> Content);
	void AddBullet(const struct FString& Content);
};


// Class Pandora.BulletScreenItem
// 0x0008 (0x0210 - 0x0208)
class UBulletScreenItem : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.BulletScreenItem");
        return pStaticClass;
    }

};


// Class Pandora.GameletSDKDelegateHandler
// 0x0014 (0x0030 - 0x001C)
class UGameletSDKDelegateHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.GameletSDKDelegateHandler");
        return pStaticClass;
    }


	void ExecOnViewCreated(class UUserWidget* Widget, const struct FString& WinInfo);
	void ExecOnViewAboutToDestroy(class UUserWidget* Widget, const struct FString& WinInfo);
	int ExecOnSDKMessage(const struct FString& Msg);
	int ExecOnRefreshUserdata();
};


// Class Pandora.PLatentDelegate
// 0x0004 (0x0020 - 0x001C)
class UPLatentDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLatentDelegate");
        return pStaticClass;
    }


	void OnLatentCallback(int threadRef);
};


// Class Pandora.PLuaActor
// 0x0060 (0x03A0 - 0x0340)
class APLuaActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0340(0x0048) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0388(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0394(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaActor");
        return pStaticClass;
    }


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaPawn
// 0x0068 (0x03E8 - 0x0380)
class APLuaPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0380(0x004C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x03CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x03D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaPawn");
        return pStaticClass;
    }


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaCharacter
// 0x0060 (0x06C0 - 0x0660)
class APLuaCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0660(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x06A0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x06AC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x06B8(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaCharacter");
        return pStaticClass;
    }


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaController
// 0x0068 (0x03F0 - 0x0388)
class APLuaController : public AController
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0388(0x004C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x03D4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x03E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaController");
        return pStaticClass;
    }


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaPlayerController
// 0x0060 (0x0648 - 0x05E8)
class APLuaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x05E8(0x0048) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0630(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x063C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaPlayerController");
        return pStaticClass;
    }


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaActorComponent
// 0x0070 (0x0138 - 0x00C8)
class UPLuaActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x54];                                      // 0x00C8(0x0054) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x011C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0128(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaActorComponent");
        return pStaticClass;
    }


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaGameModeBase
// 0x0060 (0x03F0 - 0x0390)
class APLuaGameModeBase : public AGameModeBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0390(0x0048) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x03D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x03E4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaGameModeBase");
        return pStaticClass;
    }


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaHUD
// 0x0068 (0x0448 - 0x03E0)
class APLuaHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x03E0(0x004C) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x042C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x0438(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0444(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaHUD");
        return pStaticClass;
    }


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PLuaTableObjectInterface
// 0x0000 (0x0020 - 0x0020)
class UPLuaTableObjectInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaTableObjectInterface");
        return pStaticClass;
    }

};


// Class Pandora.PLuaBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class UPLuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaBlueprintLibrary");
        return pStaticClass;
    }


	static struct FString GetStringFromVar(const struct FPLuaBPVar& Value, int Index);
	static class UObject* GetObjectFromVar(const struct FPLuaBPVar& Value, int Index);
	static float GetNumberFromVar(const struct FPLuaBPVar& Value, int Index);
	static int GetIntFromVar(const struct FPLuaBPVar& Value, int Index);
	static bool GetBoolFromVar(const struct FPLuaBPVar& Value, int Index);
	static struct FPLuaBPVar CreateVarFromString(const struct FString& Value);
	static struct FPLuaBPVar CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value);
	static struct FPLuaBPVar CreateVarFromNumber(float Value);
	static struct FPLuaBPVar CreateVarFromInt(int Value);
	static struct FPLuaBPVar CreateVarFromBool(bool Value);
	static struct FPLuaBPVar CallToLuaWithArgs(class UObject* WorldContextObject, const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args, const struct FString& StateName);
	static struct FPLuaBPVar CallToLua(class UObject* WorldContextObject, const struct FString& FunctionName, const struct FString& StateName);
};


// Class Pandora.PLuaDelegate
// 0x000C (0x0028 - 0x001C)
class UPLuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaDelegate");
        return pStaticClass;
    }


	void EventTrigger();
};


// Class Pandora.PLuaUserWidget
// 0x0098 (0x02A0 - 0x0208)
class UPLuaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0208(0x0048) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0250(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaStateName;                                             // 0x025C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0268(0x0038) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaUserWidget");
        return pStaticClass;
    }


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};


// Class Pandora.PPixUILogAdapter
// 0x0014 (0x0030 - 0x001C)
class UPPixUILogAdapter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PPixUILogAdapter");
        return pStaticClass;
    }


	void OnPixUILog(int InLogType, int InLogLevel, const struct FString& InLogContent);
};


// Class Pandora.PRichText
// 0x0280 (0x0350 - 0x00D0)
class UPRichText : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x00D0(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FScriptDelegate                             TextDelegate;                                             // 0x00E0(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x00F0(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x0141(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0142(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x015C(0x000C) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x1E8];                                     // 0x0168(0x01E8) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PRichText");
        return pStaticClass;
    }


	void SetText(const struct FText& InText);
	struct FText GetText();
};


// Class Pandora.Scale9Grid
// 0x0040 (0x0250 - 0x0210)
class UScale9Grid : public UImage
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0210(0x0040) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.Scale9Grid");
        return pStaticClass;
    }

};


// Class Pandora.WaterfallScrollView
// 0x0378 (0x0458 - 0x00E0)
class UWaterfallScrollView : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x00E0(0x0268) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0348(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UClass*                                      TemplateWidget;                                           // 0x034C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0350(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ColumnCount;                                              // 0x0354(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    onReachTop;                                               // 0x0358(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    onReachBottom;                                            // 0x0364(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowOverscroll;                                          // 0x0371(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE6];                                      // 0x0372(0x00E6) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.WaterfallScrollView");
        return pStaticClass;
    }


	void ScrollToStart();
	void RefreshLayout(int Index);
	void Fill();
	void Clear();
};


}

