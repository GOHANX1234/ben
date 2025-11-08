#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:39 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CustomLayoutProxy.BP_CustomLayoutProxy_C
// 0x0000 (0x0190 - 0x0190)
class UBP_CustomLayoutProxy_C : public UCustomLayoutProxy
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_CustomLayoutProxy.BP_CustomLayoutProxy_C");
        return pStaticClass;
    }


	void AddLayoutDetailCache(struct FBP_STRUCT_UIElemLayoutDetail* BPStruct);
};


}

