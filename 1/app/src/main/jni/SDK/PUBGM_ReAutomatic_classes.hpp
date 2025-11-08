#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ReAutomatic.AutomaticCommonHelper
// 0x0000 (0x0020 - 0x0020)
class UAutomaticCommonHelper : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticCommonHelper");
        return pStaticClass;
    }


	static bool IsClassOf(class UObject* Object, class UClass* Class);
};


// Class ReAutomatic.AutomaticPlatformHelper
// 0x0000 (0x0020 - 0x0020)
class UAutomaticPlatformHelper : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticPlatformHelper");
        return pStaticClass;
    }


	static struct FString GetDeviceName();
};


// Class ReAutomatic.AutomaticUIHelper
// 0x0000 (0x0020 - 0x0020)
class UAutomaticUIHelper : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticUIHelper");
        return pStaticClass;
    }


	static bool IsWidgetVisibleWithUICondition(const struct FFindUICondition& Condition, int Index);
	static bool IsWidgetVisible(class UWidget* Widget);
	static bool IsWidgetTextMatchRegex(class UWidget* Widget, const struct FString& Text);
	static bool IsWidgetMatchType(class UWidget* Widget, EUIType Type);
	static class UWidget* FindWidgetObjectWithUICondition(const struct FFindUICondition& Condition, int Index);
	static class UWidget* FindUWidgetObject(const struct FString& Name, int Index);
};


}

