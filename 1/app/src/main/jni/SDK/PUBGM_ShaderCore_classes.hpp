#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:33 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ShaderCore.PrecompileShaderGameConfig
// 0x0034 (0x0050 - 0x001C)
class UPrecompileShaderGameConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<struct FDeviceRenderConfig>                 DeviceRenderConfigs;                                      // 0x0028(0x000C) (ZeroConstructor, Config)
	TArray<struct FMapRenderConfig>                    MapRenderConfigs;                                         // 0x0034(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ShaderCore.PrecompileShaderGameConfig");
        return pStaticClass;
    }

};


// Class ShaderCore.ShaderGroupSettings
// 0x005C (0x0078 - 0x001C)
class UShaderGroupSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<struct FShaderLevel>                        Levels_AOS;                                               // 0x0028(0x000C) (ZeroConstructor, Config)
	TArray<struct FShaderPak>                          Paks_IOS;                                                 // 0x0034(0x000C) (ZeroConstructor, Config)
	TArray<struct FShaderPak>                          Paks_AOS;                                                 // 0x0040(0x000C) (ZeroConstructor, Config)
	TArray<struct FShaderPak>                          Paks_PC;                                                  // 0x004C(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ShaderCore.ShaderGroupSettings");
        return pStaticClass;
    }

};


}

