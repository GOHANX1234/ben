#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TemBPNode.TemBPLibrary.TempUIMsgInvokeRef
struct UTemBPLibrary_TempUIMsgInvokeRef_Params
{
	class UObject*                                     ObjContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MsgName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ModuleName;                                               // (Parm, ZeroConstructor)
	TArray<struct FTemBPDataAddr>                      ParamArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TemBPNode.TemBPLibrary.TempBridgeEventInvokeRef
struct UTemBPLibrary_TempBridgeEventInvokeRef_Params
{
	class UObject*                                     ObjContext;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventType;                                                // (Parm, ZeroConstructor)
	struct FString                                     EventID;                                                  // (Parm, ZeroConstructor)
	TArray<struct FTemBPDataAddr>                      ParamArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TemBPNode.TemBPLibrary.AddrFromWild
struct UTemBPLibrary_AddrFromWild_Params
{
	struct FString                                     DataType;                                                 // (Parm, ZeroConstructor)
	struct FTemBPDataAddr                              InAny;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTemBPDataAddr                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TemBPNode.TemBPLibrary.AddrFromSet
struct UTemBPLibrary_AddrFromSet_Params
{
	struct FString                                     DataType;                                                 // (Parm, ZeroConstructor)
	struct FTemBPDataAddr                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TemBPNode.TemBPLibrary.AddrFromMap
struct UTemBPLibrary_AddrFromMap_Params
{
	struct FString                                     DataType;                                                 // (Parm, ZeroConstructor)
	TMap<int, int>                                     InAny;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTemBPDataAddr                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TemBPNode.TemBPLibrary.AddrFromArray
struct UTemBPLibrary_AddrFromArray_Params
{
	struct FString                                     DataType;                                                 // (Parm, ZeroConstructor)
	TArray<int>                                        InAny;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTemBPDataAddr                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

