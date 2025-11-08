#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:38 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraPostProcessActor.CameraPostProcessActor_C
// 0x0570 (0x08B0 - 0x0340)
class ACameraPostProcessActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0004) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0344(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_104_7E99B53D425173C51E1B2D83BB82148A;// 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_103_7E99B53D425173C51E1B2D83BB82148A;// 0x034C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_102_7E99B53D425173C51E1B2D83BB82148A;// 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_LerpPPSettings_101_7E99B53D425173C51E1B2D83BB82148A;// 0x0354(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_LerpPPSettings__Direction_7E99B53D425173C51E1B2D83BB82148A;// 0x0358(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_LerpPPSettings;                                  // 0x035C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          currentPostProcessVolumn;                                 // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                isLerp;                                                   // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EDepthOfFieldMethod>>           depthOfFieldMethodArray;                                  // 0x0368(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LerpAlpha;                                                // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isReverse;                                                // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	struct FPostProcessSettings                        previousPPSettingsStruct;                                 // 0x0380(0x0530) (Edit, BlueprintVisible, DisableEditOnInstance)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass CameraPostProcessActor.CameraPostProcessActor_C");
        return pStaticClass;
    }


	void UserConstructionScript();
	void Timeline_LerpPPSettings__FinishedFunc();
	void Timeline_LerpPPSettings__UpdateFunc();
	void Event_LerpPostProcessSettings(class APostProcessVolume* currentPPVolumn, const struct FBP_STRUCT_CameraPostProcessSettings_type& targetPPSettingsStruct, float Time, int ID, bool isReverse);
	void ExecuteUbergraph_CameraPostProcessActor(int EntryPoint);
};


}

