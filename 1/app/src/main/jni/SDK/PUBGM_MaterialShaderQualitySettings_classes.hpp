#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:33 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// 0x003C (0x0058 - 0x001C)
class UMaterialShaderQualitySettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings");
        return pStaticClass;
    }

};


// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// 0x001C (0x0038 - 0x001C)
class UShaderPlatformQualitySettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
        return pStaticClass;
    }

};


}

