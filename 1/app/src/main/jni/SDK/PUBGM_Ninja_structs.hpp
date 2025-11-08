#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Ninja.CircleMoveInfo
// 0x0024
struct FCircleMoveInfo
{
	struct FVector                                     StartCircle;                                              // 0x0000(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     EndCircle;                                                // 0x000C(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bMove;                                                    // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              EndTimestamp;                                             // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeStamp;                                           // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

