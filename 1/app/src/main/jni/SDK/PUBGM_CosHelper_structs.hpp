#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CosHelper.ECosHelperFileInfoType
enum class ECosHelperFileInfoType : uint8_t
{
	ECosHelperFileInfoType__None   = 0,
	ECosHelperFileInfoType__ContentLength = 1,
	ECosHelperFileInfoType__ETag   = 2,
	ECosHelperFileInfoType__LastModifiedUtcTimestamp = 3,
	ECosHelperFileInfoType__ECosHelperFileInfoType_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CosHelper.CosHelperInitializeInfo
// 0x0044
struct FCosHelperInitializeInfo
{
	bool                                               bUseAuthorization;                                        // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SignExpirationTime;                                       // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AppID;                                                    // 0x0008(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     BucketName;                                               // 0x0014(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Region;                                                   // 0x0020(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     SecretId;                                                 // 0x002C(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     SecretKey;                                                // 0x0038(0x000C) (BlueprintVisible, ZeroConstructor)
};

}

