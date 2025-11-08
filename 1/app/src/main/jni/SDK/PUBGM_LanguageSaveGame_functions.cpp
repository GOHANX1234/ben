// PUBG MOBILE (3.6.0) TELEGRAM MALIK:-@K_Y_2  
// GENERATE ON Thu Jan 16 09:04:50 2025
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanguageSaveGame.LanguageSaveGame_C.LoadData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USaveGame* ULanguageSaveGame_C::LoadData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LanguageSaveGame.LanguageSaveGame_C.LoadData");

	ULanguageSaveGame_C_LoadData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LanguageSaveGame.LanguageSaveGame_C.SaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SaveDataState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULanguageSaveGame_C::SaveData(bool* SaveDataState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LanguageSaveGame.LanguageSaveGame_C.SaveData");

	ULanguageSaveGame_C_SaveData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveDataState != nullptr)
		*SaveDataState = params.SaveDataState;
}


}

