#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:36 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AndroidPermission.AndroidPermissionCallbackProxy
// 0x0014 (0x0030 - 0x001C)
class UAndroidPermissionCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidPermission.AndroidPermissionCallbackProxy");
        return pStaticClass;
    }

};


// Class AndroidPermission.AndroidPermissionFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidPermission.AndroidPermissionFunctionLibrary");
        return pStaticClass;
    }


	static bool CheckPermission(const struct FString& permission);
	static class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<struct FString> Permissions);
};


}

