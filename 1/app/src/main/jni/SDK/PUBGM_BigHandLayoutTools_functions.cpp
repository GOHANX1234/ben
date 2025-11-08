// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:39 2025
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BigHandLayoutTools.BigHandLayoutTools_C.GetDefaultBigHandLayout
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<int, struct FBP_STRUCT_UIElemLayoutDetail> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, struct FBP_STRUCT_UIElemLayoutDetail> UBigHandLayoutTools_C::GetDefaultBigHandLayout(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BigHandLayoutTools.BigHandLayoutTools_C.GetDefaultBigHandLayout");

	UBigHandLayoutTools_C_GetDefaultBigHandLayout_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

