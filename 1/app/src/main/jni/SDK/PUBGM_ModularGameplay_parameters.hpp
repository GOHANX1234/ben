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

// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
struct UGameFrameworkComponentManager_RemoveReceiver_Params
{
	class AActor*                                      Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
struct UGameFrameworkComponentManager_AddReceiver_Params
{
	class AActor*                                      Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddOnlyInGameWorlds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

