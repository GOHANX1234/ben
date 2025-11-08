#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:36 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameletJsEnv.GameletDynamicDelegateProxy
// 0x0034 (0x0050 - 0x001C)
class UGameletDynamicDelegateProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x001C(0x0034) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletDynamicDelegateProxy");
        return pStaticClass;
    }


	void Fire();
};


// Class GameletJsEnv.GameletExtensionMethods
// 0x0000 (0x0020 - 0x0020)
class UGameletExtensionMethods : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletExtensionMethods");
        return pStaticClass;
    }

};


// Class GameletJsEnv.GameletJSAnimGeneratedClass
// 0x0038 (0x0280 - 0x0248)
class UGameletJSAnimGeneratedClass : public UAnimBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0248(0x0038) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletJSAnimGeneratedClass");
        return pStaticClass;
    }

};


// Class GameletJsEnv.GameletJSGeneratedClass
// 0x0038 (0x0238 - 0x0200)
class UGameletJSGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0200(0x0038) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletJSGeneratedClass");
        return pStaticClass;
    }

};


// Class GameletJsEnv.GameletJSGeneratedFunction
// 0x0038 (0x00B8 - 0x0080)
class UGameletJSGeneratedFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0080(0x0038) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletJSGeneratedFunction");
        return pStaticClass;
    }

};


// Class GameletJsEnv.GameletJSWidgetGeneratedClass
// 0x0038 (0x0290 - 0x0258)
class UGameletJSWidgetGeneratedClass : public UWidgetBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0258(0x0038) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletJSWidgetGeneratedClass");
        return pStaticClass;
    }

};


// Class GameletJsEnv.GameletTypeScriptBlueprint
// 0x0000 (0x0098 - 0x0098)
class UGameletTypeScriptBlueprint : public UBlueprint
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletTypeScriptBlueprint");
        return pStaticClass;
    }

};


// Class GameletJsEnv.GameletTypeScriptGeneratedClass
// 0x0058 (0x0258 - 0x0200)
class UGameletTypeScriptGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x51];                                      // 0x0200(0x0051) MISSED OFFSET
	bool                                               HasConstructor;                                           // 0x0251(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0252(0x0006) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletTypeScriptGeneratedClass");
        return pStaticClass;
    }

};


// Class GameletJsEnv.GameletTypeScriptObject
// 0x0000 (0x0020 - 0x0020)
class UGameletTypeScriptObject : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletTypeScriptObject");
        return pStaticClass;
    }

};


}

