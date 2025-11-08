#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:36 2025
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PixUILog.PxLogMgr.PxLogToggleSwitchLevel
struct UPxLogMgr_PxLogToggleSwitchLevel_Params
{
	EPxLogLevels                                       eLogLevel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               beOpen;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUILog.PxLogMgr.PxLogToggleSwitchGroup
struct UPxLogMgr_PxLogToggleSwitchGroup_Params
{
	EPxLogGroups                                       eLogGroup;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               beOpen;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUILog.PxLogMgr.PxLogEnable
struct UPxLogMgr_PxLogEnable_Params
{
	bool                                               beEnable;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PixUILog.PxLogMgr.Get
struct UPxLogMgr_Get_Params
{
	class UPxLogMgr*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PixUILog.PxLogMgr.DispatchLog
struct UPxLogMgr_DispatchLog_Params
{
	EPxLogGroups                                       eLogGroup;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EPxLogLevels                                       eLogLevel;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strLogContent;                                            // (Parm, ZeroConstructor)
};

}

