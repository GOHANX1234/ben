#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:39 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BigHandLayoutTools.BigHandLayoutTools_C
// 0x0000 (0x0020 - 0x0020)
class UBigHandLayoutTools_C : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BigHandLayoutTools.BigHandLayoutTools_C");
        return pStaticClass;
    }


	static TMap<int, struct FBP_STRUCT_UIElemLayoutDetail> GetDefaultBigHandLayout(class UObject* __WorldContext);
};


}

