// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Receiver                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameFrameworkComponentManager::RemoveReceiver(class AActor* Receiver)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver");

	UGameFrameworkComponentManager_RemoveReceiver_Params params;
	params.Receiver = Receiver;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Receiver                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddOnlyInGameWorlds           (Parm, ZeroConstructor, IsPlainOldData)

void UGameFrameworkComponentManager::AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ModularGameplay.GameFrameworkComponentManager.AddReceiver");

	UGameFrameworkComponentManager_AddReceiver_Params params;
	params.Receiver = Receiver;
	params.bAddOnlyInGameWorlds = bAddOnlyInGameWorlds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

