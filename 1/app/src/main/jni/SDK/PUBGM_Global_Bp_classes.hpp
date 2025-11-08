#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:38 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C
// 0x0018 (0x0370 - 0x0358)
class UGlobal_Bp_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0004) (Transient, DuplicateTransient)
	class USettingConfig_C*                            SettingConfigObject;                                      // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Abp_global_C*                                bp_global;                                                // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isPostProcessVolumeInit;                                  // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	class APostProcessVolume*                          postProcessClassic;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACameraPostProcessActor_C*                   cameraPostProcessActor;                                   // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C");
        return pStaticClass;
    }


	void InitOBSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitCustomizeSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitFireGyroSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void MapFromCBToESBH(class USettingConfig_C* SettingConfig);
	void InitMirrorObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitThrowObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitDrugMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitBasicSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitPickupSettingData_XT(class USettingConfig_C* SettingConfig);
	void InitPickupSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void SetGrenadeDefaultPickValue();
	void InitMapFromCBToES();
	void MapFromCBToESGlobal(class USettingConfig_C* SettingConfig);
	void MapFromCBToESJK(class USettingConfig_C* SettingConfig);
	void MapFromCBToESVN(class USettingConfig_C* SettingConfig);
	void LoadSettingConfigFromSlot();
	void SetPostProcessSettings(int ID, float Time, bool isReverse, bool isClosing);
	void EventAndroidQuitGame();
	void Construct();
	void RecoverMaxFps();
	void ExecuteUbergraph_Global_Bp(int EntryPoint);
};


}

