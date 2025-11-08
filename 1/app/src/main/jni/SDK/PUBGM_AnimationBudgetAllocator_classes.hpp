#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:32 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0010 (0x0C90 - 0x0C80)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0C80(0x0008) MISSED OFFSET
	unsigned char                                      bAutoRegisterWithBudgetAllocator : 1;                     // 0x0C88(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoCalculateSignificance : 1;                           // 0x0C88(0x0001) (Edit)
	unsigned char                                      bShouldUseActorRenderedFlag : 1;                          // 0x0C88(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0C89(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
        return pStaticClass;
    }


	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};


// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary");
        return pStaticClass;
    }


	static void SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
	static void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
};


}

