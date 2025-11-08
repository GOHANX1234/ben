#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:36 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Gamelet.EGameletEnvironment
enum class EGameletEnvironment : uint8_t
{
	Gamelet_Test                   = 0,
	Gamelet_Product                = 1,
	Gamelet_Tyf_Test               = 2,
	Gamelet_Tyf_Product            = 3,
	Gamelet_MAX                    = 4
};


// Enum Gamelet.ECmd
enum class ECmd : uint8_t
{
	ECmdGSendMessageToApp          = 0,
	ECmdS2ESDKInitialized          = 1,
	ECmdS2EOnCgiProcessComplete    = 2,
	ECmdS2EStartPuertsVM           = 3,
	ECmdS2EPrepareGcrpRes          = 4,
	ECmdS2PMin                     = 5,
	ECmdS2PMax                     = 6,
	ECmd_MAX                       = 7
};



}

