#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:36 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PixUILog.EPxLogLevels
enum class EPxLogLevels : uint8_t
{
	EPxLogLevels__Log              = 0,
	EPxLogLevels__Warning          = 1,
	EPxLogLevels__Error            = 2,
	EPxLogLevels__Debug            = 3,
	EPxLogLevels__Count            = 4,
	EPxLogLevels__EPxLogLevels_MAX = 5
};


// Enum PixUILog.EPxLogGroups
enum class EPxLogGroups : uint8_t
{
	EPxLogGroups__Core             = 0,
	EPxLogGroups__Plugin           = 1,
	EPxLogGroups__Script           = 2,
	EPxLogGroups__Profiler         = 3,
	EPxLogGroups__Count            = 4,
	EPxLogGroups__EPxLogGroups_MAX = 5
};



}

