#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Creative.CameraDeviceSpringArmComponent
// 0x0010 (0x0B90 - 0x0B80)
class UCameraDeviceSpringArmComponent : public UCustomSpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B80(0x0008) MISSED OFFSET
	float                                              DebugAngle;                                               // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B8C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CameraDeviceSpringArmComponent");
        return pStaticClass;
    }

};


// Class Creative.CreativeAbilitySystemComponent
// 0x0140 (0x0E70 - 0x0D30)
class UCreativeAbilitySystemComponent : public USAbilitySystemComponent
{
public:
	class ASTExtraPlayerCharacter*                     PlayerCharacter;                                          // 0x0D30(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0D34(0x000C) MISSED OFFSET
	struct FTransform                                  GhostBuildingTransform;                                   // 0x0D40(0x0030) (IsPlainOldData)
	TArray<class AActor*>                              GetLocationActorsToIgnore;                                // 0x0D70(0x000C) (ZeroConstructor)
	float                                              LandOnOffsetZ;                                            // 0x0D7C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LandHitPointZ;                                            // 0x0D80(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LandHitDeltaZ;                                            // 0x0D84(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaterHeight;                                              // 0x0D88(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceLandOnGround;                                       // 0x0D8C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D8D(0x0003) MISSED OFFSET
	int                                                LandGroundType;                                           // 0x0D90(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandOnOffsetZ;                                        // 0x0D94(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapTransValid;                                          // 0x0D95(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSnapGridEnable;                                          // 0x0D96(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0D97(0x0001) MISSED OFFSET
	class AActor*                                      SnapGrid;                                                 // 0x0D98(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreLandOn;                                            // 0x0D9C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreWaterHeightCheck;                                  // 0x0D9D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreCameraRotate;                                      // 0x0D9E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0D9F(0x0001) MISSED OFFSET
	struct FRotator                                    ModifiedRotation;                                         // 0x0DA0(0x000C) (IsPlainOldData)
	struct FVector                                     ModifiedScale;                                            // 0x0DAC(0x000C) (IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x0DB8(0x000C) (IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x0DC4(0x000C) (IsPlainOldData)
	struct FVector                                     RelativeScale;                                            // 0x0DD0(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0DDC(0x0004) MISSED OFFSET
	struct FTransform                                  SnapBaseTransform;                                        // 0x0DE0(0x0030) (IsPlainOldData)
	struct FVector                                     DeviceLocationOffset;                                     // 0x0E10(0x000C) (IsPlainOldData)
	struct FVector                                     InstanceBoxCenter;                                        // 0x0E1C(0x000C) (IsPlainOldData)
	struct FVector                                     InstanceBoxExtent;                                        // 0x0E28(0x000C) (IsPlainOldData)
	bool                                               bSpecificPlaceStartEnd;                                   // 0x0E34(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0E35(0x0003) MISSED OFFSET
	struct FVector                                     PlaceRayStart;                                            // 0x0E38(0x000C) (IsPlainOldData)
	struct FVector                                     PlaceRayEnd;                                              // 0x0E44(0x000C) (IsPlainOldData)
	bool                                               bNeedGetBuildDistance;                                    // 0x0E50(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOpenLandPosCheckDebug;                                   // 0x0E51(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0E52(0x0002) MISSED OFFSET
	struct FVector                                     OverridePos;                                              // 0x0E54(0x000C) (IsPlainOldData)
	struct FRotator                                    OverrideRot;                                              // 0x0E60(0x000C) (IsPlainOldData)
	bool                                               bOverrideBuild;                                           // 0x0E6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0E6D(0x0003) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAbilitySystemComponent");
        return pStaticClass;
    }


	void UpdateGridGhostBuildingLocation(float X, float Y, float Z);
	void UpdateGhostBuildingTransform();
	void SetSnapTargetTransform(const struct FTransform& SnapTargetTransform);
	void SetOverrideBuild(const struct FVector& Position, const struct FRotator& Rotation);
	void SetLuaGhostBuildingTransformScale(float X, float Y, float Z);
	void SetLuaGhostBuildingTransformRotation(float Roll, float Yaw, float Pitch);
	void SetLuaGhostBuildingTransformLocation(float X, float Y, float Z);
	void LuaGhostBuildingInstaUpdate();
	float GetSnappedLocAxisZ(float Loc, float Base);
	float GetSnappedLocAxis(float Value, int AxisType);
	int GetSetupBuildingID();
	class ASTExtraPlayerController* GetPlayerController();
	bool GetLuaSnapTargetTransform();
	float GetLuaInstanceBoundingBox();
	struct FTransform GetGhostBuildingTransform();
	struct FString GetBuildingInstanceID();
	float GetBuildDistance();
	void ClearOverrideBuild();
};


// Class Creative.CreativeModeActorInteractionComponent
// 0x0070 (0x01C0 - 0x0150)
class UCreativeModeActorInteractionComponent : public ULuaActorComponent
{
public:
	float                                              CrossHairCheckCD;                                         // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     HitComponentName;                                         // 0x0154(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bSectorCheckEnabled;                                      // 0x0160(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	float                                              SectorCheckCD;                                            // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTransformCrossHairCheckEnabled;                          // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	float                                              TransformCrossHairCheckCD;                                // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPickCrossHairCheckEnabled;                               // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	float                                              PickCrossHairCheckCD;                                     // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0178(0x000C) MISSED OFFSET
	class APawn*                                       PlayerCharacter;                                          // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerController*                    PlayerController;                                         // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              CrossHairCheckIgnoreActorArray;                           // 0x018C(0x000C) (ZeroConstructor)
	TArray<class AActor*>                              uTransformCrossHairCheckIgnoreActorArray;                 // 0x0198(0x000C) (ZeroConstructor)
	TArray<class AActor*>                              PickCrossHairCheckIgnoreActorArray;                       // 0x01A4(0x000C) (ZeroConstructor)
	TArray<class UClass*>                              PickActorClassArray;                                      // 0x01B0(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeActorInteractionComponent");
        return pStaticClass;
    }


	void SortCanEditParamsObjs();
	void SetCrossHairTransformObjInstanceID(const struct FString& InstanceID);
	void SetCrossHairSelectedObjInstanceID(const struct FString& InstanceID);
	void SetCrossHairPickActor(class AActor* PickActor);
	float GetSectorCheckIntervalCfg();
	float GetSectorCheckDistance();
	float GetSectorCheckAngle();
	float GetPlayerHalfHeight();
	class ASTExtraPlayerController* GetPlayerController();
	float GetCrossHairTransformDistanceCfg();
	float GetCrossHairPickDistanceCfg();
	float GetCrossHairCheckIntervalCfg();
	float GetCrossHairCheckDistanceCfg();
	void ClearCanEditParamsObjs();
	void AddCanEditObject(class UObject* uCanEditObject, float Angle, float Distance);
};


// Class Creative.CreativeModeManagerBase
// 0x0000 (0x00C0 - 0x00C0)
class UCreativeModeManagerBase : public USTExtraManagerBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeManagerBase");
        return pStaticClass;
    }

};


// Class Creative.CreativeAdaptiveSchedulManager
// 0x00C0 (0x0180 - 0x00C0)
class UCreativeAdaptiveSchedulManager : public UCreativeModeManagerBase
{
public:
	bool                                               bOpenLuaProfile;                                          // 0x00C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenProfile;                                             // 0x00C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenFuncCPUProfile;                                      // 0x00C2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x41];                                      // 0x00C3(0x0041) MISSED OFFSET
	TMap<struct FString, int>                          ProjectTagMap;                                            // 0x0104(0x0050) (BlueprintVisible, ZeroConstructor)
	TMap<struct FString, int>                          LuaPathTagMap;                                            // 0x0140(0x0050) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x017C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAdaptiveSchedulManager");
        return pStaticClass;
    }


	void SetObjectProfile(bool bOpen);
	void SetLuaProfile(bool bOpen);
	int RecordFunctionStart(const struct FString& ClassName, const struct FString& FunctionName);
	void RecordFunctionEnd(const struct FString& ClassName, const struct FString& FunctionName, int Cycles);
	int LuaPath2Tag(const struct FString& luaPath, const struct FString& FunctionName);
	void LogOutputObjectMemoryInfo(bool bClear);
	void LogOutputLuaFunctionCallInfo(bool bClear);
	TMap<int, int64_t> LogoutLuaRecord();
	static bool LLMEnabled();
	int InitTagIfNotExist(const struct FString& TagName);
	int InitNewLuaPath2Tag(const struct FString& luaPath, const struct FString& FunctionName);
	static uint64_t GetPureLuaUsedBytes();
	static uint64_t GetLuaUsedBytes();
	static class UCreativeAdaptiveSchedulManager* Get(class UObject* WorldContext);
	void AfterDead(int SpecType);
};


// Class Creative.CreativeLuaSignalObjectBase
// 0x0094 (0x00B0 - 0x001C)
class UCreativeLuaSignalObjectBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x001C(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x005C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0068(0x0004) MISSED OFFSET
	class UGameLuaAPI*                                 GameLuaAPI;                                               // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<int, struct FCreativeSignalEventInfo>         SignalEventInfoMap;                                       // 0x0070(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaSignalObjectBase");
        return pStaticClass;
    }


	void TryBeginPlay();
	void SetLuaFilePath(const struct FString& FilePath);
	void RemoveCommonEvent(int EventHandle);
	void ReceivePostBeginPlay();
	void ReceiveBeginPlay();
	void ClearAllCommonEvent();
	void AddCommonEvent(const struct FString& EventType, const struct FString& EventID, const struct FString& FunctionName);
};


// Class Creative.CreativeApiObject
// 0x0070 (0x0120 - 0x00B0)
class UCreativeApiObject : public UCreativeLuaSignalObjectBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET
	struct FString                                     ModuleName;                                               // 0x00E8(0x000C) (BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             CrossVMAPIs;                                              // 0x00F4(0x000C) (ZeroConstructor)
	TArray<struct FString>                             UGCVMAPIs;                                                // 0x0100(0x000C) (ZeroConstructor)
	struct FString                                     UGCVMAPILuaFilePath;                                      // 0x010C(0x000C) (ZeroConstructor)
	bool                                               bEnableRegisterCClosureApi;                               // 0x0118(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeApiObject");
        return pStaticClass;
    }


	void SetModuleName(const struct FString& NewName);
	struct FString GetModuleName();
};


// Class Creative.CreativeAssetManager
// 0x00A0 (0x0160 - 0x00C0)
class UCreativeAssetManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00C0(0x00A0) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAssetManager");
        return pStaticClass;
    }


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void ReceiveInitAssetInfo(int AssetId);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	struct FString GetObbyMeshPath(int AssetId);
	struct FString GetMaterialPath(int MaterialID);
	static class UCreativeAssetManager* Get(class UObject* WorldContext);
	void AddAssetInfo(int AssetId, const struct FCreativeAssetInfo& AssetInfo);
};


// Class Creative.CreativeAudioApiObject
// 0x0000 (0x0120 - 0x0120)
class UCreativeAudioApiObject : public UCreativeApiObject
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAudioApiObject");
        return pStaticClass;
    }

};


// Class Creative.CreativeAutoGenComponent
// 0x0000 (0x0150 - 0x0150)
class UCreativeAutoGenComponent : public ULuaActorComponent
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeAutoGenComponent");
        return pStaticClass;
    }


	TArray<unsigned char> GetNodeSegmentContent(struct FCreativeAutoGenItemDataSegment* Segment);
	bool AddInstanceDataContent(TArray<unsigned char> Content, struct FCreativeAutoGenDataSegment* Segment);
};


// Class Creative.CreativeModeBackpackUtils
// 0x0000 (0x0020 - 0x0020)
class UCreativeModeBackpackUtils : public UBackpackUtilsClassical
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeBackpackUtils");
        return pStaticClass;
    }


	static int ResCanAddToBackpackNum(class UBackpackComponent* BackpackComponent, int resID, int AddNum);
	static int GetItemMaxCount(class UBackpackComponent* BackpackComponent, int resID);
	static void AddAIAvatarItem(class UBackpackComponent* BackpackComponent, int ID, int Color, int Pattern, int Num);
};


// Class Creative.CreativeBaseWidget
// 0x0000 (0x0250 - 0x0250)
class UCreativeBaseWidget : public ULuaUserWidget
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeBaseWidget");
        return pStaticClass;
    }

};


// Class Creative.CreativeBinaryDataManager
// 0x0020 (0x00E0 - 0x00C0)
class UCreativeBinaryDataManager : public USTExtraManagerBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C0(0x0018) MISSED OFFSET
	uint32_t                                           InitBinaryDataSize;                                       // 0x00D8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeBinaryDataManager");
        return pStaticClass;
    }


	void SetInitBinaryDataSize(uint32_t DataSize);
	void ReceiveOnPreLoadMap(const struct FString& MapName);
	void ReceiveOnPostSetLuaEventBridgeInstance();
	void ReceiveOnPostLoadMapWithWorld(class UWorld* World);
	void OnRep_InitBinaryDataSize();
	void OnPreLoadMap(const struct FString& MapName);
	void OnPostSetLuaEventBridgeInstance();
	void OnPostLoadMapWithWorld(class UWorld* World);
	uint32_t GetInitBinaryDataSize();
	static class UCreativeBinaryDataManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeBlockyLuaManager
// 0x0178 (0x0238 - 0x00C0)
class UCreativeBlockyLuaManager : public UCreativeModeManagerBase
{
public:
	TMap<struct FString, struct FString>               BindStubFuncMap;                                          // 0x00C0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00FC(0x0001) MISSED OFFSET
	bool                                               bConfigInited;                                            // 0x00FD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicConfigInited;                                     // 0x00FE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00FF(0x0001) MISSED OFFSET
	TArray<class UPresetDesc*>                         DynamicAddPresetDescList;                                 // 0x0100(0x000C) (ZeroConstructor)
	TArray<class UPresetDesc*>                         CachePresetDescList;                                      // 0x010C(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0118(0x003C) MISSED OFFSET
	TArray<class UPresetDesc*>                         BatchRemovePresetDescList;                                // 0x0154(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x3C];                                      // 0x0160(0x003C) MISSED OFFSET
	struct FString                                     AllTypesJsonPath;                                         // 0x019C(0x000C) (ZeroConstructor)
	struct FString                                     FunctionJsonPath;                                         // 0x01A8(0x000C) (ZeroConstructor)
	struct FString                                     FunctionFolderPath;                                       // 0x01B4(0x000C) (ZeroConstructor)
	struct FString                                     VariableJsonPath;                                         // 0x01C0(0x000C) (ZeroConstructor)
	struct FString                                     PresetsJsonPath;                                          // 0x01CC(0x000C) (ZeroConstructor)
	struct FString                                     PresetsFolderPath;                                        // 0x01D8(0x000C) (ZeroConstructor)
	struct FString                                     TextrueRectParamJsonPath;                                 // 0x01E4(0x000C) (ZeroConstructor)
	struct FString                                     ProjectTextrueRectParamJsonPath;                          // 0x01F0(0x000C) (ZeroConstructor)
	struct FString                                     ProjectAtlasRectParamJsonPath;                            // 0x01FC(0x000C) (ZeroConstructor)
	struct FString                                     TipsJsonPath;                                             // 0x0208(0x000C) (ZeroConstructor)
	struct FString                                     SequenceJsonPath;                                         // 0x0214(0x000C) (ZeroConstructor)
	struct FString                                     UAssetConfigDataPath;                                     // 0x0220(0x000C) (ZeroConstructor)
	bool                                               ClearCacheCallBeginDestroy;                               // 0x022C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	class UBlockyGraphData*                            GraphDataObject;                                          // 0x0230(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0234(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeBlockyLuaManager");
        return pStaticClass;
    }


	void SetRTLOffsetY(float Offset);
	void SetLTROffsetY(float Offset);
	void SetFontSize(int FontSize);
	void SetBlockIdFromSlotString(const struct FString& BlockID, struct FBlockySlotString* SlotString);
	void ReturnPresetDescsToCache(TArray<class UPresetDesc*> ReturnDescs);
	void RemoveDynamicPresetDescs(TArray<class UPresetDesc*> PresetDescs);
	void RegisterNameCache(class UBlockyGraphData* GraphData);
	void RefreshBlockyFont(struct FSlateFontInfo* DefaultFont);
	void ReceivePresetFromCustomSelection(class UObjectDesc* Desc);
	void ReceiveOpenGuide();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	struct FString ReceivedGetLocalizeResStrHandleFailed(const struct FString& IdOrStr);
	void ReceiveCheckStringValidFunction(const struct FString& CheckString, const struct FCheckStringHandleData& Data);
	void ReceiveCheckStringResult(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OnReceiveMessageData(TArray<struct FMessageDataWrapper> MessageDatas);
	void OnReceiveInitDisableFunc();
	void OnInitBlockyLuaConfig();
	void OnGameTypePreChanged(unsigned char LastGameType, unsigned char CurrentGameType);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool IsLTRLanguage();
	bool IsLTR();
	void InitDisableFunction(TArray<struct FString> funcs);
	TArray<class UPresetDesc*> GetPresetDescs(int GetCount, struct FString* TypeName);
	class UPresetDesc* GetPresetDesc(struct FString* TypeName);
	class UBlockyGraphData* GetGraphDataObjectFormContent(TArray<unsigned char> GrapbAstContent, TArray<unsigned char> GlobalVarAstContent, bool CallLoadFinish);
	class UPresetDesc* GetDynamicPresetDescsByKey(const struct FString& KeyName);
	class UBlockyLuaConfig* GetBlockyLuaConfig();
	struct FString GetBlockNameByStr(const struct FString& BlockyId);
	struct FString GetBlockIdFromSlotString(struct FBlockySlotString* SlotString);
	static class UCreativeBlockyLuaManager* Get(class UObject* WorldContext);
	TArray<struct FString> GenerateLuaCodeFormJson(const struct FString& JsonText, const struct FString& GlobalVarJsonText, bool GenGlobalVarLua);
	TArray<struct FString> GenerateLuaCodeFormContent(TArray<unsigned char> GrapbAstContent, TArray<unsigned char> GlobalVarAstContent, bool GenGlobalVarLua, bool CallLoadFinish);
	void ClearNameIndexCache();
	TArray<class UPresetDesc*> ClearDynamicPresetDescs();
	void ClearCacheObjects(bool CallBeginDestroy);
	void ClearBlockyLuaHotfixUtility();
	void BlockyluaPresetSoundFunctionHandle(const struct FString& SoundPath);
	struct FText BlockyluaModifyTipHandle(const struct FText& OriginalTip);
	void BlockyluaMessageDataHandle(TArray<struct FMessageDataStruct> MessageDatas);
	struct FString BlockyluaGetLocalizeResStrHandle(const struct FString& IdOrStr);
	void BlockyluaCustomInputHandle(const struct FString& CustomClickType, class UObjectDesc* Desc, TArray<class UObjectDesc*> followers);
	bool BlockyluaCheckShowPresetFitlerBtnHandle(const struct FString& TypeName);
	bool BlockyluaCheckShowCustomInputHandle(const struct FString& CustomClickType, class UObjectDesc* Desc, TArray<class UObjectDesc*> followers);
	void BindBlockyLuaStubFunc(const struct FString& BindFuncName, const struct FString& OverrdeFuncName);
	void AddDynamicPresetDescs(TArray<class UPresetDesc*> PresetDescs);
};


// Class Creative.CreativeModeBlueprintLibrary
// 0x0000 (0x0020 - 0x0020)
class UCreativeModeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeBlueprintLibrary");
        return pStaticClass;
    }


	static bool ZSTDDecompressData(TArray<unsigned char> CompressedData, TArray<unsigned char>* DecompressedData);
	static bool ZSTDCompressData(TArray<unsigned char> UncompressedData, int CompressionLevel, TArray<unsigned char>* CompressedData);
	static struct FVector2D WidgetAbsoluteSizeToLocalSize(class UWidget* Widget, const struct FVector2D& AbsoluteSize);
	static void UObjSnapshot(class UWorld* MyWorld);
	static struct FTransform TransformRevert(const struct FTransform& TransformB, struct FTransform* TransformRelative);
	static void TransformMultiplyBy(const struct FTransform& M, struct FTransform* Source);
	static void TransformBounds(const struct FTransform& M, struct FBoxSphereBounds* Bounds);
	static double ToMilliseconds64(uint64_t Cycles);
	struct FString TakeSnapshot(class UWidget* WindowWidget, int X1, int Y1, int x2, int y2, const struct FString& Filename, bool bUseCrop, bool bFillRect);
	static bool SynchronizePropertiesWidget(class UWidget* TargetWidget);
	static bool ShouldCreatePhysicsState(class UPrimitiveComponent* Component);
	static float SetWorldGravityZ(float GravityZ, class UObject* WorldContext);
	static void SetWidgetVisiblePass(class UWidget* Widget, bool bVisiblePass);
	static void SetStaticMeshMobility(class UStaticMeshComponent* StaticMeshComponent, TEnumAsByte<EComponentMobility> NewMobility);
	static void SetSpeedOverLimit(class AActor* Actor);
	static void SetRelativeCamRotation(class APlayerController* PlayerController, class USceneComponent* Component);
	static void SetParticleCullingDistance(class UParticleSystemComponent* ParticleSystemComponent, float Distance);
	static void SetInstanceValue(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	static void SetCommandLineValue(const struct FString& Key, const struct FString& NewValue);
	static void SetCollisionMobility(class UShapeComponent* Component, TEnumAsByte<EComponentMobility> NewMobility);
	static void SaveStringToFile(const struct FString& String, const struct FString& Filename);
	static void SaveAssetStringToFile(const struct FString& String, const struct FString& Filename);
	struct FRotator RotatorCrossInverse(const struct FRotator& Rot1, const struct FRotator& Rot2);
	struct FRotator RotatorCross(const struct FRotator& Rot1, const struct FRotator& Rot2);
	static struct FVector Rotation2Vector(const struct FRotator& Rotator, int Axis);
	void RenameObject(class UObject* Object, const struct FString& NewName);
	static void RecreatePhysicsState(class UPrimitiveComponent* Component);
	struct FQuat QuatCrossInverse(const struct FQuat& Quat1, const struct FQuat& Quat2);
	static struct FQuat QuatCross(const struct FQuat& Quat1, const struct FQuat& Quat2);
	static struct FString ProjectSavedDir();
	static struct FString ProjectContentDir();
	static void PopulateParticleProperties(class UParticleSystemComponent* ParticleSystemComponent);
	static void MinAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InPoints, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FRotator* OutRectRotation, float* OutRectLengthX, float* OutRectLengthY, struct FVector* OutRectCenter, TArray<int>* PolyVertIndices);
	static struct FString MD5HashByteArray(TArray<unsigned char> inArray);
	static struct FString MD5HashAnsiString(const struct FString& str);
	static bool Lz4DecompressData(TArray<unsigned char> CompressedData, TArray<unsigned char>* DecompressedData);
	static bool Lz4CompressData(TArray<unsigned char> UncompressedData, TArray<unsigned char>* CompressedData);
	static struct FString LoadFileToStringByFullPath(const struct FString& FullPathName);
	static TArray<unsigned char> LoadFileToArrayByFullPath(const struct FString& FullPathName);
	static struct FString LoadAssetFileToString(const struct FString& Filename);
	static class USceneComponent* LineTraceTouchComponent(const struct FVector2D& TouchPos, class APlayerController* PlayerController, TArray<class AActor*> IgnoreActors, struct FVector* TouchHitLoc);
	static int LineTraceTouchAxis(const struct FVector2D& TouchPos, class APlayerController* PlayerController, TArray<class AActor*> IgnoreActors, struct FVector* TouchHitLoc);
	static struct FString LineTraceInstance(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<class AActor*> IgnoreActors);
	static bool IsPointWithinRotatedBounds(const struct FVector& BoxCenter, const struct FVector& BoxExtent, float YawDegrees, const struct FVector& Point);
	static bool IsPhysicsStateCreated(class UPrimitiveComponent* Component);
	static bool IsPersistentModeEnabled();
	static bool IsOfflineBuild();
	static bool IsMCPModeEnabled();
	static bool IsLLMEnabled();
	static bool IsCreativeMode(class UWorld* World);
	static bool IsBoxOverlapWithRotatedBox(const struct FVector& StaticBoxCenter, const struct FVector& StaticBoxExtent, const struct FVector& RotatedBoxCenter, const struct FVector& RotatedBoxExtent, float RotatedBoxYaw);
	static void IgnoreClientMovementErrorChecksAndCorrection(class ACharacter* Charcter, bool bIsIgnore);
	void GetWidgetRect(class UWidget* Widget, int* X1, int* Y1, int* x2, int* y2);
	static struct FString GetUrlValue(class UObject* WorldContext, const struct FString& Key);
	static struct FString GetUObjAssetPath(class UObject* Level);
	int GetRTValidMaxArea(class UTextureRenderTarget2D* TextureTarget);
	static int GetReplicateAddDataArrayVaildNum(class UObject* WorldContextObject, const struct FReplicateAddDataArray& ReplicateAddDataArray, int StartIndex);
	static float GetPlatformSeconds();
	static void GetObjectScreenPos(class UObject* WorldContextObject, const struct FString& InstanceID, struct FVector2D* Pos);
	static TMap<struct FString, class UObject*> GetObjectMap(class UObject* WorldContextObject);
	static float GetLastInteractionElapsedTime();
	static void GetInstanceSpaceBoundingBox(const struct FString& InstanceID, float Yaw, class UCreativeAbilitySystemComponent* Component);
	static void GetGroupInstanceSpaceBoundingBox(const struct FString& GroupID, TArray<struct FString> ChildrenIds, TMap<struct FString, struct FTransform> ChildrenTransforms, float Yaw, class UCreativeAbilitySystemComponent* Component);
	static class UWorld* GetGameWorld(class UObject* WorldContextObject);
	static struct FString GetGameTypeAsString(ECreativeModeGameType GameType);
	static TArray<unsigned char> GetDataConttentByInstanceDataContent(struct FCreativeInstanceDataContent* InstanceDataContent);
	static uint32_t GetCurFrameNumber();
	static uint32_t GetCurFrameCounter();
	static int GetCubeTouchAxisFace(class UWidget* Widget, float Width, float Distance, struct FVector2D* ScreenPosition, struct FVector* OffsetLocation);
	static bool GetContentPatchData(TArray<unsigned char> OldData, TArray<unsigned char> DiffData, TArray<unsigned char>* outNewData);
	static bool GetContentDiffData(TArray<unsigned char> OldData, TArray<unsigned char> NewData, TArray<unsigned char>* outDiffData);
	static struct FString GetCommandLineValue(const struct FString& Key);
	static void GetBoundingBoxOfInstances(class UObject* WorldContext, TArray<struct FString> Ids, float Yaw, struct FVector* Center, struct FVector* BoxExtent);
	static void GetBoundingBoxOfActors(TArray<class AActor*> Actors, float Yaw, struct FVector* Center, struct FVector* BoxExtent);
	static struct FString GetBigUObject(int MaxN);
	struct FString GetBigLuaValue(class UObject* WorldContext);
	static TArray<struct FString> GetAllInstanceInScreenBox(class UObject* WorldContext, const struct FVector2D& Start, const struct FVector2D& End, int CheckDistance, int CountLimit);
	static TArray<struct FString> GetAllInstanceInBox(class UObject* WorldContext, const struct FVector& Center, const struct FVector& Extent, const struct FRotator& Rotator);
	static void GetActorMeshBoundsByTag(class AActor* Actor, const struct FString& IgnoreTag, const struct FString& IncludeTag, struct FVector* Origin, struct FVector* BoxExtent);
	static uint32_t GenerateUIntGuid();
	static struct FString GenerateGuid();
	static class AActor* FindAttachedActorByName(class AActor* ParentActor, const struct FString& PartialName);
	static class AActor* FindActorByName(class UWorld* World, const struct FString& PartialName);
	struct FString EncryptToBase64(TArray<unsigned char> inArray);
	static void DumpActorNetReplicate(class UObject* WorldContext, const struct FString& Name);
	static void DrawLine(const struct FPaintContext& InContext, const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& LineColor, int LayerOffset, float LineThickness, bool bAntiAlias);
	static void DrawGrids(const struct FPaintContext& InContext, float CellSize, int CellCountX, int CellCountY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, float LineThickness, bool bAntiAlias, int LayerOffset);
	static void DrawGridCell(const struct FPaintContext& InContext, float CellSize, int CellIndexX, int CellIndexY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, int LayerOffset);
	static struct FString DestroyInstance(class UObject* WorldContextObject, const struct FString& InstanceID);
	TArray<unsigned char> DecryptFromBase64(const struct FString& inString);
	static struct FCreativeInstanceDataContent CreativeInstanceDataContent(TArray<unsigned char> DataContent);
	static struct FCreativeMovingAudio CreateCreativeMovingAudio(class AActor* Actor, int Sequence, int ConfigId, bool bShowMark, int Duration, float Volume);
	void ClearGrassByMaskTexture(class UObject* WorldContextObject, class UTexture2D* MaskTexture, const struct FVector2D& WorldStart, const struct FVector2D& WorldEnd);
	static bool CaptureWidget(class UObject* WorldContext, class UClass* WidgetClass, struct FString* Path, int* X, int* Y, bool* FlipY);
	static bool BoxOverlapComponents(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* CompClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComps);
	static bool BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors);
	static class AActor* BeginDeferredActorSpawnWithName(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FName& Name, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
	static void AttachOutlineBox(class AActor* AttachedActor, float Yaw, class AActor* OutlineBox);
	static void AttachInstanceOutlineBox(const struct FString& AttachedId, bool bGridEnable, float Yaw, class AActor* OutlineBox);
	static void AttachGroupOutlineBox(class AActor* GroupObject, TArray<class AActor*> AttachedActors, float Yaw, class AActor* OutlineBox);
	static void AttachGroupInstanceOutlineBox(const struct FString& GroupID, TArray<struct FString> ChildrenIds, TMap<struct FString, struct FTransform> ChildrenTransforms, bool bGridEnable, float Yaw, class AActor* OutlineBox);
	static void AddOnScreenDebugMessage(const struct FString& Msg);
};


// Class Creative.CreativeModeLuaSpectatorPawn
// 0x0098 (0x0430 - 0x0398)
class ACreativeModeLuaSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0398(0x0040) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x03D8(0x003C) (Net)
	bool                                               IsTopView;                                                // 0x0414(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	int                                                TopViewRotateAngle;                                       // 0x0418(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FString                                     LuaFilePath;                                              // 0x041C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeLuaSpectatorPawn");
        return pStaticClass;
    }


	void UnRegistLuaTick();
	void SetController(class APlayerController* InController);
	void SetAbilitySystemComponentAvatar();
	void RegistLuaTick(float TickInterval);
	void MoveRight(float Val);
	void MoveForward(float Val);
	class USpringArmComponent* GetActiveSpringArm();
};


// Class Creative.CreativeCameraDeviceActor
// 0x00B8 (0x04E8 - 0x0430)
class ACreativeCameraDeviceActor : public ACreativeModeLuaSpectatorPawn
{
public:
	bool                                               bIsFollowing;                                             // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                FollowType;                                               // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLerping;                                               // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	float                                              LerpTime;                                                 // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendExp;                                                 // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendTimeToGo;                                            // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // 0x044C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotatorOffset;                                            // 0x0458(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       FollowTarget;                                             // 0x0464(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	struct FRotator                                    ActorStartRot;                                            // 0x0470(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    ActorTargetRot;                                           // 0x047C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     targetPos;                                                // 0x0488(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    TargetRot;                                                // 0x0494(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // 0x04A0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    StartRot;                                                 // 0x04AC(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              StartFOV;                                                 // 0x04B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartArmLength;                                           // 0x04BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    EndRot;                                                   // 0x04C0(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              EndFOV;                                                   // 0x04CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndArmLength;                                             // 0x04D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPilotDist;                                             // 0x04E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPilotPosition;                                           // 0x04E4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCameraDeviceActor");
        return pStaticClass;
    }


	void UpdateFollowStatus();
	void UpdateFollowPos();
	void RotCamera(float Yaw, float Pitch);
	void OnEndViewTarget(class APlayerController* PC);
	void OnBecomeViewTarget(class APlayerController* PC);
	void MoveUp(float Val);
	void MoveRight(float Val);
	void MoveForward(float Val);
	void LerpToTarget(float DeltaSeconds);
	void LerpActor(float BlendPct);
	bool IsVecInvalid(const struct FVector& Vect);
	bool IsRotInvalid(const struct FRotator& Rot);
	void InterpolateToSpringRotation(float LerpValue);
	bool InitStartPoint();
	class USpringArmComponent* GetSpringArmForCamera(class UCameraComponent* Camera);
	float GetLerpTime(float BlendTimeToGo);
	struct FVector GetCameraPointPosition();
	class UCameraComponent* GetActiveCamera();
};


// Class Creative.CreativeCameraGetter
// 0x0000 (0x0020 - 0x0020)
class UCreativeCameraGetter : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCameraGetter");
        return pStaticClass;
    }


	struct FVector GetCameraLocation();
};


// Class Creative.CreativeCustomCameraComponent
// 0x0020 (0x08B0 - 0x0890)
class UCreativeCustomCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0890(0x0004) MISSED OFFSET
	float                                              ConfigFOV;                                                // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ConfigRotation;                                           // 0x0898(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x08A4(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomCameraComponent");
        return pStaticClass;
    }


	void InterpolateToTargetRotation(float LerpValue);
	void InterpolateToTargetFOV(float LerpValue);
};


// Class Creative.CreativeCustomParameterManager
// 0x00A8 (0x0168 - 0x00C0)
class UCreativeCustomParameterManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeCustomParameterDataContainer       ReplicatedCustomParameterDataContainer;                   // 0x00C0(0x0098) (Net, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0158(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomParameterManager");
        return pStaticClass;
    }


	void RemoveCustomParameter(uint32_t ParameterID, uint32_t PlayerKey);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	void GetCustomParameterDataNodes(uint32_t ParameterID, TArray<struct FCreativeCustomParameterDataNode>* OutCustomParameterDataNodes);
	static class UCreativeCustomParameterManager* Get(class UObject* WorldContext);
	void ChangeCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent);
	void AddCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent, bool bPropagateToChildren);
};


// Class Creative.CreativeCustomPrefabComponent
// 0x0000 (0x0150 - 0x0150)
class UCreativeCustomPrefabComponent : public ULuaActorComponent
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeCustomPrefabComponent");
        return pStaticClass;
    }


	TArray<unsigned char> GetNodeSegmentContent(struct FCreativePrefabDataSegment* Segment);
	bool AddInstanceDataContent(TArray<unsigned char> Content, struct FCreativeCustomPrefabDataSegment* Segment);
};


// Class Creative.CreativeDestructibleMeshActor
// 0x0008 (0x0350 - 0x0348)
class ACreativeDestructibleMeshActor : public APhotonDestructibleMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeDestructibleMeshActor");
        return pStaticClass;
    }


	void SetDamageEnable(bool bEnable);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void InitHP(float fHP);
	class UPhotonDestructibleMeshComponent* GetFracturedComponent();
	void AddCanDamageWeapon(const struct FString& Weapon);
};


// Class Creative.CreativeDestructibleMeshBatchActor
// 0x00C8 (0x0490 - 0x03C8)
class ACreativeDestructibleMeshBatchActor : public ALuaActor
{
public:
	int                                                MinNumHISMRequired;                                       // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AtLeastLengthHISMRequired;                                // 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TickUpdateBatchInterval;                                  // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CellWidth;                                                // 0x03D4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x03D8(0x00B8) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeDestructibleMeshBatchActor");
        return pStaticClass;
    }


	void RemoveAllCacheReplicationData();
};


// Class Creative.CreativeModeLiteComponent
// 0x00D0 (0x00F8 - 0x0028)
class UCreativeModeLiteComponent : public ULiteComponent
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0028(0x004C) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0074(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x00B0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      // 0x00BC(0x0050) (ZeroConstructor)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeLiteComponent");
        return pStaticClass;
    }


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
};


// Class Creative.CreativeModeGameModeBaseComponent
// 0x0008 (0x0100 - 0x00F8)
class UCreativeModeGameModeBaseComponent : public UCreativeModeLiteComponent
{
public:
	ECreativeModeGameType                              GameType;                                                 // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	class UCreativeModeGameStateBaseComponent*         GameStateComponent;                                       // 0x00FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameModeBaseComponent");
        return pStaticClass;
    }


	void SetGameStateComponent(class UCreativeModeGameStateBaseComponent* NewGameStateComponent);
	void ReceivePostInitializeComponents();
	ECreativeModeGameType GetGameType();
	class ACreativeModeGameMode* GetGameMode();
	class AActor* FindPlayerStartOverride(class AController* Player, const struct FString& IncomingName, bool bIsRevive);
};


// Class Creative.CreativeModeEditorModeComponent
// 0x0000 (0x0100 - 0x0100)
class UCreativeModeEditorModeComponent : public UCreativeModeGameModeBaseComponent
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorModeComponent");
        return pStaticClass;
    }

};


// Class Creative.CreativeModeEditorObject
// 0x0118 (0x04E0 - 0x03C8)
class ACreativeModeEditorObject : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x03C8(0x0078) MISSED OFFSET
	ECreativeModeActorState                            ActorState;                                               // 0x0440(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      // 0x0444(0x0050) (ZeroConstructor)
	int8_t                                             CanEditFlag;                                              // 0x0480(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreCollisionCheck;                                    // 0x0481(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0482(0x0002) MISSED OFFSET
	TArray<class AActor*>                              IgnoreActors;                                             // 0x0484(0x000C) (ZeroConstructor)
	struct FEditorObjectLiteComponentTickFunction      LiteComponentActorTick;                                   // 0x0490(0x003C) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x04CC(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorObject");
        return pStaticClass;
    }


	void UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy);
	void ShowSelectedEffect(bool ShowEff, const struct FLinearColor& OutlineColor, float OutlineThickness);
	void ShowOutlineEffect(bool ShowEff, class UMaterialInstance* Material, const struct FString& IgnoreTag);
	void SetPhotographyMode(bool bIsCapturing);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetActorState(ECreativeModeActorState NewState);
	void ReturnObjectToPool(class UObject* Obj);
	void ReturnObjectsToPool(TArray<class UObject*> Objs);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	bool ReceiveIsDedicatedServer();
	void ReceiveInitializeLiteComponent();
	void ReceiveInitCanEditFlag();
	bool ReceiveHasAuthority();
	void OnRepActorStateOverride(ECreativeModeActorState NewState);
	void OnRep_ActorState(ECreativeModeActorState LastState);
	bool InCollisionState();
	TArray<class UObject*> GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
	ECreativeModeActorState GetActorState();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
};


// Class Creative.CreativeModeGameStateBaseComponent
// 0x0008 (0x0100 - 0x00F8)
class UCreativeModeGameStateBaseComponent : public UCreativeModeLiteComponent
{
public:
	ECreativeModeGameType                              GameType;                                                 // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameStateBaseComponent");
        return pStaticClass;
    }


	void ReceivePostInitializeComponents();
	ECreativeModePlayState GetPlayState();
	ECreativeModeGameType GetGameType();
	class ACreativeModeGameState* GetGameState();
};


// Class Creative.CreativeModeEditorStateComponent
// 0x0000 (0x0100 - 0x0100)
class UCreativeModeEditorStateComponent : public UCreativeModeGameStateBaseComponent
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeEditorStateComponent");
        return pStaticClass;
    }

};


// Class Creative.CreativeEventObject
// 0x0000 (0x00B0 - 0x00B0)
class UCreativeEventObject : public UCreativeLuaSignalObjectBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeEventObject");
        return pStaticClass;
    }


	void ReHookObject();
	void EventObjectConditionalBeginDestroy();
};


// Class Creative.CreativeGameAPIObject
// 0x0000 (0x0120 - 0x0120)
class UCreativeGameAPIObject : public UCreativeApiObject
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGameAPIObject");
        return pStaticClass;
    }


	TArray<int64_t> GetPlayersInSphere(const struct FVector& SphereCenter, float SphereRadius, int TeamID, bool FilterNonPlayable);
	TArray<int64_t> GetPlayersInRectangle(const struct FVector& RectangleCenter, float RectangleX, float RectangleY, float RectangleZ, int TeamID, bool FilterNonPlayable);
};


// Class Creative.CreativeModeGameMode
// 0x00D8 (0x19A0 - 0x18C8)
class ACreativeModeGameMode : public ABattleRoyaleGameModeTeam
{
public:
	TArray<class UClass*>                              GameModeComponentClassArray;                              // 0x18C8(0x000C) (ZeroConstructor, Transient)
	class UClass*                                      GameModeComponentClass;                                   // 0x18D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FGameModeParam>        MapPlaneRouteConfigs;                                     // 0x18D8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FString>               MapVehicleClassPathConfigs;                               // 0x1914(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	ECreativeModeGameType                              EditorStartupGameType;                                    // 0x1950(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x1951(0x0001) MISSED OFFSET
	bool                                               bIsCreativeWoW;                                           // 0x1952(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x1953(0x0001) MISSED OFFSET
	struct FGameModeLiteComponentTickFunction          LiteComponentActorTick;                                   // 0x1954(0x003C) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x1990(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x4];                                       // 0x199C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameMode");
        return pStaticClass;
    }


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetItemGenerate(bool bIsOpen);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void ReInitItemGenerate(struct FString* NewItemClassPath);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceiveInitializeLiteComponent();
	bool IsStandAloneGameMode();
	bool IsRestartPlayerUsePawnRotation();
	class UCreativeModeGameModeBaseComponent* GetCurrentModeComponent();
	int GetCreativeModeRealTeamNum();
	TArray<int> GetCreativeModeRealTeamIDs();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
	class AActor* CreativeModeFindPlayerStart(class AController* Player, const struct FString& IncomingName, bool bIsRevive);
};


// Class Creative.CreativeModeGameModeComponent
// 0x0018 (0x0118 - 0x0100)
class UCreativeModeGameModeComponent : public UCreativeModeGameModeBaseComponent
{
public:
	class UClass*                                      RaceCheckPointComponentClass;                             // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeModeRaceCheckPointLiteComponent*    RaceCheckPointComponent;                                  // 0x0104(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      OccupationAreaComponentClass;                             // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeOccupationAreaLiteComponent*        OccupationAreaComponent;                                  // 0x010C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      TeleporterComponentClass;                                 // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCreativeModeLiteComponent*                  TeleporterComponent;                                      // 0x0114(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameModeComponent");
        return pStaticClass;
    }


	void ReceiveCallPlayStateFunction();
};


// Class Creative.CreativeModeGameObject
// 0x0114 (0x0130 - 0x001C)
class UCreativeModeGameObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x001C(0x00B4) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x00D0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      // 0x00E0(0x0050) (ZeroConstructor)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x011C(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameObject");
        return pStaticClass;
    }


	void UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy);
	void ReturnObjectToPool(class UObject* Obj);
	void ReturnObjectsToPool(TArray<class UObject*> Objs);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	bool ReceiveIsDedicatedServer();
	bool ReceiveHasAuthority();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	TArray<class UObject*> GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
};


// Class Creative.CreativeGameParameterManager
// 0x01A0 (0x0260 - 0x00C0)
class UCreativeGameParameterManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeGameParameterContainer             GameParameterContainer;                                   // 0x00C0(0x0098) (Net, Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0158(0x0004) MISSED OFFSET
	int                                                SingleSerializeNum;                                       // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SingleSerializeBytes;                                     // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bGameParameterResumeEnable;                               // 0x0164(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0165(0x0003) MISSED OFFSET
	struct FCreativeGameParameterResumeContainer       GameParameterResumeContainer;                             // 0x0168(0x0098) (Net, Transient)
	unsigned char                                      UnknownData02[0x4C];                                      // 0x0200(0x004C) MISSED OFFSET
	float                                              ResumeNodePullInterval;                                   // 0x024C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SinglePullResumeNodeNum;                                  // 0x0250(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPullResumeNodeNum;                                   // 0x0254(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResumeNodePullTimeroutInterval;                           // 0x0258(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x025C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGameParameterManager");
        return pStaticClass;
    }


	void SetGameParameterResumeNodes(TArray<struct FCreativeGameParameter> GameParameterNodes);
	void RemoveGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID);
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnReceivePreGameParameterRemove(const struct FString& ParameterKey, const struct FString& TemplateID);
	void OnReceivePostGameParameterChange(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
	void OnReceivePostGameParameterAdd(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	TArray<struct FCreativeGameParameter> GetGameParameterResumeNodes(TArray<uint32_t> ParameterHeadHashs);
	bool GetGameParameterContent(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char>* OutContent);
	static class UCreativeGameParameterManager* Get(class UObject* WorldContext);
	void ChangeGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
	void AddGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content);
};


// Class Creative.CreativeModeGameState
// 0x0090 (0x1080 - 0x0FF0)
class ACreativeModeGameState : public ASTExtraGameStateBase
{
public:
	ECreativeModeGameType                              InitializeGameType;                                       // 0x0FF0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0FF1(0x0003) MISSED OFFSET
	int                                                CreativeModID;                                            // 0x0FF4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CreativeModTemplateId;                                    // 0x0FF8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	class UCreativeModeGameStateBaseComponent*         CurrentStateComponent;                                    // 0x0FFC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UCreativeModeGameStateBaseComponent*         LastStateComponent;                                       // 0x1000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              GameStateComponentClassArray;                             // 0x1004(0x000C) (ZeroConstructor, Transient)
	class UClass*                                      GameStateComponentClass;                                  // 0x1010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCreativeWoW;                                           // 0x1014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13];                                      // 0x1015(0x0013) MISSED OFFSET
	TArray<struct FBlockySlotString>                   BlockySlotStrings;                                        // 0x1028(0x000C) (Net, ZeroConstructor, Transient)
	struct FGameStateLiteComponentTickFunction         LiteComponentActorTick;                                   // 0x1034(0x003C) (Edit, DisableEditOnInstance)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x1070(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x4];                                       // 0x107C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameState");
        return pStaticClass;
    }


	void UnregisterLiteComponent(class ULiteComponent* Component);
	void SetLiteComponentTickEnable(bool bEnabled);
	void SetCurrentGameType(ECreativeModeGameType NewGameType);
	void RPC_Replay_SetInstanceDataContent(uint32_t InstanceID, const struct FCreativeInstanceDataContent& InstanceDataContent);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceiveInitializeLiteComponent();
	void ReceiveCreativeCollectGarbage();
	void ReceiveAddContextDataToCrashKit();
	void OnViewportSizeChanged(const struct FVector2D& OldViewportSize, const struct FVector2D& NewViewportSize);
	void OnRep_InitializeGameType(ECreativeModeGameType LastInitializeGameType);
	void OnRep_CurrentStateComponent(class UCreativeModeGameStateBaseComponent* LastComponent);
	void OnRep_CreativeModTemplateId(int LastCreativeModTemplateId);
	void OnRep_CreativeModID(int LastCreativeModID);
	void OnRep_BlockySlotStrings(TArray<struct FBlockySlotString>* BlockySlotStrings);
	void OnClientRecordingStateChange(EClientRecordingType Type);
	bool IsOfficialGame();
	bool IsEditorMode();
	bool IsDemoGame();
	bool IsCreativeMode();
	bool IsCreativeEditor();
	void InitCreativeModID(int ModID, int TemplateID);
	ECreativeModePlayState GetPlayState();
	ECreativeModeGameType GetInitializeGameType();
	TArray<struct FString> GetDisableDistanceLevelsOutsideBox(float X, float Y, int W, int L, float RotationAngle, bool bUseFilter);
	class UCreativeModeGameStateBaseComponent* GetCurrentStateComponent();
	ECreativeModeGameType GetCurrentGameType();
	int GetCurCreativeType();
	struct FString GetCurCreativeModResList();
	struct FString GetCurCreativeModMapID();
	int GetCreativeModTemplateId();
	int GetCreativeModID();
	class ULiteComponent* FindLiteComponentByClass(class UClass* ComponentClass);
	bool FilterLevelByName(const struct FName& LevelName);
	void ClearInstance();
	void ClearAndReImportInstance();
};


// Class Creative.CreativeModeGameStateComponent
// 0x0010 (0x0110 - 0x0100)
class UCreativeModeGameStateComponent : public UCreativeModeGameStateBaseComponent
{
public:
	class UCreativeModeIntegralMechanismLiteComponent* IntegralMechanismComponent;                               // 0x0100(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RuntimePlayerBattleDataObjectClass;                       // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ACreativeRuntimePlayerBattleDataObject*      RuntimePlayerBattleDataObject;                            // 0x0108(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	ECreativeModePlayState                             CurPlayState;                                             // 0x010C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x010D(0x0003) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGameStateComponent");
        return pStaticClass;
    }


	void SetPlayState(ECreativeModePlayState newPlayState);
	void OnRep_RuntimePlayerBattleDataObject();
	void OnRep_IntegralMechanismComponent();
	void OnRep_CurPlayState();
	ECreativeModePlayState GetPlayState();
};


// Class Creative.CreativeGlobalApiObject
// 0x0000 (0x0120 - 0x0120)
class UCreativeGlobalApiObject : public UCreativeApiObject
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGlobalApiObject");
        return pStaticClass;
    }


	void Print(const struct FString& LogText);
	float CPPExecutionConsumptionTest(int A, float B, double C);
};


// Class Creative.CreativeGridLevelsManager
// 0x0360 (0x0420 - 0x00C0)
class UCreativeGridLevelsManager : public UCreativeModeManagerBase
{
public:
	bool                                               bDestructibleMeshForceHISM;                               // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDestructibleMeshEnableBrokenEffect;                      // 0x00C1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00C2(0x0006) MISSED OFFSET
	TArray<struct FString>                             GridLevelList;                                            // 0x00C8(0x000C) (ZeroConstructor)
	TMap<struct FString, struct FCreativeModeGridLevelConfig> GridLevelConfigs;                                         // 0x00D4(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCreativeModeGridLevelInfo> GridLevelsMap;                                            // 0x0110(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FIntVector>            ObjectCellIndexMap;                                       // 0x014C(0x0050) (ZeroConstructor)
	TArray<struct FString>                             AlwaysLoadLevel;                                          // 0x0188(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0194(0x000C) MISSED OFFSET
	TArray<struct FString>                             RefreshBatchDataInstances;                                // 0x01A0(0x000C) (ZeroConstructor)
	bool                                               bStaticMeshObjectBatchSwitch;                             // 0x01AC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAroundRelieveBatchSwitch;                                // 0x01AD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x01AE(0x0002) MISSED OFFSET
	float                                              EditorModeUpdateTime;                                     // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DelayUpdateBatchTime;                                     // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TickUpdateBatchInterval;                                  // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReBatchDistance;                                          // 0x01BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RelieveBatchDistance;                                     // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelieveBatchDelayUpdateSwitch;                           // 0x01C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01C5(0x0003) MISSED OFFSET
	float                                              RelieveBatchDelayTime;                                    // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIncrementalRefreshEnable;                                // 0x01CC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHISMBatchForceSwitch;                                    // 0x01CD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bFineBatchSwitch;                                         // 0x01CE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicChangeHISMSwitch;                                 // 0x01CF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPostUpdateISMBufferCompleteEventFlag;                    // 0x01D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01D1(0x0003) MISSED OFFSET
	int                                                UpdateIsmNumPerFrame;                                     // 0x01D4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x144];                                     // 0x01D8(0x0144) MISSED OFFSET
	TMap<struct FString, class ACreativeModeStaticMeshBatchActor*> SingleBatchActorMap;                                      // 0x031C(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData06[0xB4];                                      // 0x0358(0x00B4) MISSED OFFSET
	TArray<struct FString>                             ChangeMaterialIdInstanceIDs;                              // 0x040C(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0418(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGridLevelsManager");
        return pStaticClass;
    }


	void UpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll);
	void UnLoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex);
	void StaticMeshObjectRelieveBatch(struct FString* InstanceID);
	void StaticMeshObjectReBatch(struct FString* InstanceID);
	bool RemoveObject(const struct FString& InstanceID);
	void ReceiveRegistInstanceValueListener();
	void ReceiveDelayUpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll, float MoveForwardTimeStamp);
	void ReceiveClearAllData();
	bool ReceiveCheckObjectCanBatch(const struct FString& InstanceID);
	void ObjectAddToGridCellMap(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID);
	void LoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex);
	bool IsCreativeEidtMode();
	void GridCellMapRemoveObject(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID);
	struct FString GetStaticMeshBatchActorPath();
	class ACreativeDestructibleMeshBatchActor* GetSingleDestructibleMeshBatchActor();
	class ACreativeModeStaticMeshBatchActor* GetSingleBatchActor(const struct FString& GridName);
	float GetRelieveBatchDistance();
	float GetReBatchDistance();
	struct FIntVector GetOnCellIndex(const struct FString& GridName, const struct FVector& Location);
	struct FTransform GetObjectTransform(const struct FString& ID);
	ECreativeModeActorStreamingType GetObjectStreamingType(const struct FString& ID);
	struct FString GetObjectRuntimeGrid(const struct FString& ID);
	struct FIntVector GetObjectOnCellIndexByLocation(const struct FString& InstanceID, const struct FString& GridName, const struct FVector& Location);
	struct FIntVector GetObjectOnCellIndex(const struct FString& InstanceID);
	bool GetObjectIsPrefab(const struct FString& ID);
	int GetObjectAssetID(const struct FString& ID);
	float GetGridLoadingRange(const struct FString& GridName);
	TArray<struct FString> GetGridList();
	struct FString GetDestructibleMeshBatchActorPath();
	struct FString GetDefaultGridName();
	struct FVector2D GetCellWidthHeight(const struct FString& GridName);
	struct FVector GetCellCenterLocation(const struct FString& GridName, const struct FIntVector& CellIndex);
	int GetAxisIndex(float Pos, float BlockLenght);
	static class UCreativeGridLevelsManager* Get(class UObject* WorldContext);
	bool CheckObjectBeRelieveBatch(const struct FString& ID);
	bool CheckObjectBeBatch(const struct FString& ID);
	bool CheckAndRemoveObjectForBatchData(const struct FString& ID);
	bool CheckAndAddObjectToBatchData(const struct FString& ID);
	bool ChangeObjectTransform(const struct FString& InstanceID);
	bool ChangeObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType);
	bool ChangeObjectMaterialIds();
	bool ChangeObjectMaterialId(const struct FString& InstanceID);
	bool ChangeObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab);
	bool AddObjectToGridLevels(struct FString* InstanceID);
	void ActivateAllAlwaysLoadCellIndex();
};


// Class Creative.CreativeGroupManager
// 0x0000 (0x00C0 - 0x00C0)
class UCreativeGroupManager : public UCreativeModeManagerBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGroupManager");
        return pStaticClass;
    }


	static class UCreativeGroupManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeGuideComponent
// 0x0060 (0x07E0 - 0x0780)
class UCreativeGuideComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0780(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x07C0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class USplineMeshComponent*>                SplineMeshes;                                             // 0x07CC(0x000C) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07D8(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGuideComponent");
        return pStaticClass;
    }


	bool SweepSingleByChannel(const struct FVector& Start, const struct FVector& End, TArray<class AActor*> IgnoreActors, struct FHitResult* OutHit);
	void GenereateSplineMeshes(TArray<struct FVector> Points);
};


// Class Creative.CreativeGuideMeshComponent
// 0x0000 (0x08D0 - 0x08D0)
class UCreativeGuideMeshComponent : public USplineMeshComponent
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeGuideMeshComponent");
        return pStaticClass;
    }


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
};


// Class Creative.CreativeModeInGameManagerCenter
// 0x0030 (0x0370 - 0x0340)
class ACreativeModeInGameManagerCenter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0340(0x0004) MISSED OFFSET
	TArray<class USTExtraManagerBase*>                 ManagerArray;                                             // 0x0344(0x000C) (ZeroConstructor, Transient)
	TArray<class UClass*>                              ManagerClassArray;                                        // 0x0350(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x14];                                      // 0x035C(0x0014) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeInGameManagerCenter");
        return pStaticClass;
    }


	bool GetIsBeginPlayEnded();
};


// Class Creative.CreativeInstanceManager
// 0x0450 (0x0510 - 0x00C0)
class UCreativeInstanceManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x00C0(0x004C) MISSED OFFSET
	TMap<struct FString, struct FCreativeInstanceDataNode> InstanceTreeData;                                         // 0x010C(0x0050) (ZeroConstructor)
	TMap<uint16_t, struct FCreativeBatchPullDataNode>  DataRequestMap;                                           // 0x0148(0x0050) (ZeroConstructor)
	TArray<struct FCreativePullDataNode>               DataWaitingRquestQueue;                                   // 0x0184(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0190(0x000C) MISSED OFFSET
	struct FCreativeNodeContainer                      InstanceContainer;                                        // 0x019C(0x00DC) (Net, Transient)
	struct FCreativeNodeContainer                      RPCReplicatedInstanceContainer;                           // 0x0278(0x00DC) (Transient)
	bool                                               bRPCReplicatInstanceContainerEnable;                      // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	int                                                CacheCacheHistoryContainerMaxCount;                       // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3C];                                      // 0x035C(0x003C) MISSED OFFSET
	int                                                ModBinInstanceCount;                                      // 0x0398(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	int                                                SingleSerializeNum;                                       // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SinglePullDataNodeNum;                                    // 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPullDataNodeNum;                                     // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DataNodePullInterval;                                     // 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DataPullTimeroutInterval;                                 // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FetchesPerFrame;                                          // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaitInstanceReplicatTreeTimeout;                          // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuildingResTime;                                          // 0x03BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClientPreAddBuildingResTime;                              // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuildingTimeoutCheckInterval;                             // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DefaultDestructibleMeshObjectPath;                        // 0x03C8(0x000C) (ZeroConstructor)
	struct FString                                     ExpiredAssetEditorPath;                                   // 0x03D4(0x000C) (ZeroConstructor)
	struct FString                                     DebugObjectPath;                                          // 0x03E0(0x000C) (ZeroConstructor)
	float                                              StartDownloadMapTimeStamp;                                // 0x03EC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CompleteDownloadReplicatTreeTimeStamp;                    // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CompleteDownloadDataNodeTreeTimeStamp;                    // 0x03F4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03F8(0x0004) MISSED OFFSET
	TMap<struct FString, struct FCreativeInstanceNode> CppInstanceTree;                                          // 0x03FC(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x3C];                                      // 0x0438(0x003C) MISSED OFFSET
	unsigned char                                      UnknownData07[0x3C];                                      // 0x0438(0x003C) UNKNOWN PROPERTY: SetProperty Creative.CreativeInstanceManager.ExpiredAssetID
	unsigned char                                      UnknownData08[0x3C];                                      // 0x04B0(0x003C) UNKNOWN PROPERTY: SetProperty Creative.CreativeInstanceManager.DebugAssetID
	uint32_t                                           RPCReplicatedInstanceContainerSeq;                        // 0x04EC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              ReqInstanceContainerContentTimeoutTimeStamp;              // 0x04F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReqInstanceContainerContentTimeroutInterval;              // 0x04F4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRPCReplicatInstanceContainerTickCheckEnable;             // 0x04F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	float                                              RPCReplicatInstanceContainerTickCheckCD;                  // 0x04FC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRPCReplicatInstanceContainerReqing : 1;                  // 0x0500(0x0001)
	unsigned char                                      UnknownData10[0xF];                                       // 0x0501(0x000F) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeInstanceManager");
        return pStaticClass;
    }


	void UpdateModBinInstanceCount();
	void SetModBinInstanceCount(int Count);
	bool SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value);
	void SetInstanceDataContents(uint16_t Seq, TArray<struct FCreativeInstanceDataContent> InstanceDataContents);
	void SetInstanceContainerContent(TArray<unsigned char> ContainerContent, uint32_t NewSeq);
	void SendModBinaryDataToReplay(TArray<unsigned char>* InBinaryData);
	void ReqInstanceContainerContentTimeoutCheck();
	void ReqInstanceContainerContentEnd(bool IsTimeout);
	void RemoveInstance(const struct FString& ID, bool bSkipCheck);
	bool RemoveCppInstanceNode(const struct FString& ID);
	void RecordAllInstanceDataByRPC();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnRep_RPCReplicatedInstanceContainerSeq();
	void OnRep_ModBinInstanceCount();
	void OnReceivePreInstanceRemove(const struct FString& ID, bool IsRollback);
	void OnReceivePostInstanceChange(const struct FString& ID, TArray<unsigned char> Content, bool IsRollback);
	void OnReceivePostInstanceAdd(const struct FString& ID, TArray<unsigned char> Content, bool IsRollback);
	void OnReceiveClearNotReplicatedData();
	void OnReadyToAddInstance();
	void OnPlayerControllerBeginPlay(class APlayerController* PlayerController);
	void OnGameTypeChanged(unsigned char LastGameType, unsigned char CurrentGameType);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	bool IsInstanceReplicatTreeReplicateComplete();
	bool IsInstanceDataTreeReplicateComplete();
	bool IsAssetRuntimeObjectBox(const struct FString& ID);
	void InitExpiredAndDebugAssetID(TArray<int>* ExpiredAssets, TArray<int>* DebugAssets);
	bool HasReadyToAddInstance();
	bool HasAuthorityOrReplay();
	struct FString GetObjectAssetPath(const struct FString& ID);
	int GetModBinInstanceCount();
	bool GetModBinaryDataFromReplay(TArray<unsigned char> InBinaryData);
	bool GetInstanceIsDestructible(const struct FString& ID);
	bool GetInstanceIsCustomUI(const struct FString& ID);
	int GetInstanceDataTreeCount();
	TArray<struct FCreativeInstanceRespondPullDataSegment> GetInstanceDataContents(TArray<uint32_t> InstanceIDs);
	TArray<unsigned char> GetInstanceDataContent(const struct FString& InstanceID);
	int GetInstanceContainerCount();
	TArray<unsigned char> GetInstanceContainerContent(uint32_t BaseSeq, uint32_t* OutSeq);
	struct FBox GetInstanceBox(const struct FString& ID);
	struct FCreativeInstanceNode GetCppInstanceNode(const struct FString& ID);
	struct FBox GetAssetBox(const struct FString& ID);
	static class UCreativeInstanceManager* Get(class UObject* WorldContext);
	uint32_t GenerateDestructionUniqueID(uint32_t ID);
	struct FString DestroyInstance(const struct FString& InstanceID);
	void ClientPreAddInstance(const struct FString& ID, TArray<unsigned char> Content);
	void ClearInstanceTree();
	void CheckAndReqRPCReplicatedInstanceContainerContent();
	void ChangeInstance(const struct FString& ID, TArray<unsigned char> Content, bool bCallReceiveChange);
	void ChangeCppInstanceNode(const struct FString& ID, const struct FString& Key, struct FCreativeInstanceNode* Node);
	void AddInstance(const struct FString& ID, TArray<unsigned char> Content);
	void AddCppInstanceNode(const struct FString& ID, struct FCreativeInstanceNode* Node);
	void AddBuildingFlag(const struct FString& ID);
};


// Class Creative.CreativeInstanceStaticMeshComponent
// 0x0030 (0x0960 - 0x0930)
class UCreativeInstanceStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0930(0x0008) MISSED OFFSET
	struct FSoftObjectPath                             SoftStaticMeshPath;                                       // 0x0938(0x0018)
	class UMaterialInterface*                          WaitSetMaterial;                                          // 0x0950(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          WaitSetAddInstanceTransforms;                             // 0x0954(0x000C) (ZeroConstructor)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeInstanceStaticMeshComponent");
        return pStaticClass;
    }


	void UpdateAllInstanceByRelativeLocation(TArray<struct FVector> RelativeLocations, const struct FVector& Scale);
	void UnInitInstancedStaticMeshComponntByGroupBuild();
	void SetISMMaterial(class UMaterialInterface* NewMaterial);
	void OnStaticMeshAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath);
	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
	void InitInstancedStaticMeshComponntByGroupBuild(class USceneComponent* Parent, TArray<struct FTransform> InstanceTransforms, const struct FString& MeshPath, class UMaterialInterface* Material);
};


// Class Creative.CreativeModeIntegralMechanismComponent
// 0x0010 (0x0160 - 0x0150)
class UCreativeModeIntegralMechanismComponent : public ULuaActorComponent
{
public:
	TArray<struct FPlayerIntegralInfo>                 PlayerIntegrals;                                          // 0x0150(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x015C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeIntegralMechanismComponent");
        return pStaticClass;
    }


	bool SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq);
	void OnRepPlayerIntegralsOverride();
	void OnRep_PlayerIntegrals();
	void ClearPlayerIntegrals();
};


// Class Creative.CreativeModeIntegralMechanismLiteComponent
// 0x0010 (0x0108 - 0x00F8)
class UCreativeModeIntegralMechanismLiteComponent : public UCreativeModeLiteComponent
{
public:
	TArray<struct FPlayerIntegralInfo>                 PlayerIntegrals;                                          // 0x00F8(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                TestIndex;                                                // 0x0104(0x0004) (Net, ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeIntegralMechanismLiteComponent");
        return pStaticClass;
    }


	bool SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq);
	bool PlayerIntegralContains(const struct FString& UID);
	void OnRepPlayerIntegralsOverride();
	void OnRep_TestIndex(int LastIndex);
	void OnRep_PlayerIntegrals();
	void ClearPlayerIntegrals();
};


// Class Creative.CreativeItemGeneratorComponent
// 0x0040 (0x0768 - 0x0728)
class UCreativeItemGeneratorComponent : public UItemGeneratorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0728(0x0040) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeItemGeneratorComponent");
        return pStaticClass;
    }


	void SetWeightMul(TMap<struct FString, int> Weight);
	void SetAddSpotPercentMul(float percent);
	void ClearWeightMul();
};


// Class Creative.CreativeLoadManager
// 0x0050 (0x0110 - 0x00C0)
class UCreativeLoadManager : public UCreativeModeManagerBase
{
public:
	uint32_t                                           MaxLoadCountPerFrame;                                     // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x00C4(0x004C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLoadManager");
        return pStaticClass;
    }


	void UnloadSomeObjects(TArray<struct FString> InstanceIDs, bool bRemovePhysicsObject);
	void UnloadObject(const struct FString& InstanceID, bool bRemovePhysicsObject);
	void LoadSomeObjects(TArray<struct FString> InstanceIDs, bool bLoadImmediately);
	void LoadObject(const struct FString& InstanceID);
	static class UCreativeLoadManager* Get(class UObject* WorldContext);
	void AddObject(const struct FString& InstanceID, const struct FCreativeInstanceNode& InstanceNode);
};


// Class Creative.CreativeLuaCodeManager
// 0x0040 (0x0100 - 0x00C0)
class UCreativeLuaCodeManager : public UCreativeModeManagerBase
{
public:
	TMap<unsigned char, struct FString>                CodeMap;                                                  // 0x00C0(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaCodeManager");
        return pStaticClass;
    }


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnPreCreativeLuaVMUnLoad();
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnCreativeLuaInitialized();
	static class UCreativeLuaCodeManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeLuaEntityManager
// 0x00B8 (0x0178 - 0x00C0)
class UCreativeLuaEntityManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET
	TMap<int64_t, TWeakObjectPtr<class UObject>>       CacheMap;                                                 // 0x00C4(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0100(0x003C) MISSED OFFSET
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0100(0x003C) UNKNOWN PROPERTY: SetProperty Creative.CreativeLuaEntityManager.UsedUUIDSet

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaEntityManager");
        return pStaticClass;
    }


	class UObject* UUID2UObject(int64_t* UUID);
	bool UUID2Type(int64_t* UUID, EEntityType* Type, unsigned char* SubType);
	uint32_t UUID2Key(int64_t* UUID);
	void ResetAll();
	void RemoveUUID(int64_t* UUID);
	class UObject* LuaUUID2UObject(struct FString* UUID);
	bool LuaUUID2Type(struct FString* UUID, EEntityType* Type, unsigned char* SubType);
	struct FString LuaUUID2Key(struct FString* UUID, EEntityType* Type, unsigned char* SubType);
	void LuaRemoveUUID(struct FString* UUID);
	struct FString LuaCreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType);
	int64_t GetInstanceObjectUUID(int64_t* UUID);
	static class UCreativeLuaEntityManager* Get(class UObject* WorldContext);
	int64_t GenUUID(struct FString* Key, EEntityType* Type, unsigned char* SubType);
	int64_t CreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType);
	int64_t CreateEntityIfNotExistsFromKey(uint32_t* Key, EEntityType* Type, unsigned char* SubType);
};


// Class Creative.CreativeLuaSignalManager
// 0x0040 (0x0100 - 0x00C0)
class UCreativeLuaSignalManager : public UCreativeModeManagerBase
{
public:
	TMap<struct FString, class UCreativeApiObject*>    ObjectMap;                                                // 0x00C0(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaSignalManager");
        return pStaticClass;
    }


	void SpawnApiObjectsByConfig();
	void RegisterObject(class UCreativeApiObject* NewObject);
	void OnPreCreativeLuaVMUnLoad();
	void OnCreativeLuaVMLoaded();
	class UCreativeApiObject* GetObject(const struct FString& ModuleName);
	class UCreativeBridgeLuaVM* GetCreativeLuaVM();
	static class UCreativeLuaSignalManager* Get(class UObject* WorldContext);
	int ExecuteAPI(class UCreativeBridgeLuaVM* VM, struct FString* ModuleName, struct FString* FuncName);
	void ClearAllObjects();
};


// Class Creative.CreativeLuaTraitManager
// 0x0000 (0x00C0 - 0x00C0)
class UCreativeLuaTraitManager : public UCreativeModeManagerBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaTraitManager");
        return pStaticClass;
    }


	TArray<struct FString> GetSupportEntitiesByTraits(TArray<struct FString> TraitNames);
	TArray<struct FString> GetSupportEntitiesByTrait(const struct FString& TraitName);
	static class UCreativeLuaTraitManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeLuaVMManager
// 0x0008 (0x00C8 - 0x00C0)
class UCreativeLuaVMManager : public UCreativeModeManagerBase
{
public:
	class UCreativeBridgeLuaVM*                        LuaVM;                                                    // 0x00C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeLuaVMManager");
        return pStaticClass;
    }


	void UnRegisterGameTypePreChangedDelegate();
	void RegisterGameTypePreChangedDelegate();
	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void ReceiveCheckAndLoadLuaVM();
	void OnLuaVMAtPanic(const struct FString& ErrMsg);
	void OnGameTypePreChanged(unsigned char LastGameType, unsigned char CurrentGameType);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	void LoadLuaVM();
	class UCreativeBridgeLuaVM* GetCreativeLuaVM();
	static class UCreativeLuaVMManager* Get(class UObject* WorldContext);
	bool CreativeLuaVMLoaded();
	bool CreativeLuaInitialized();
};


// Class Creative.CreativeManagerCenterInterface
// 0x0000 (0x0020 - 0x0020)
class UCreativeManagerCenterInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeManagerCenterInterface");
        return pStaticClass;
    }

};


// Class Creative.CreativeModeModDataCheckManager
// 0x0000 (0x00C0 - 0x00C0)
class UCreativeModeModDataCheckManager : public UCreativeModeManagerBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeModDataCheckManager");
        return pStaticClass;
    }


	void ReceiveOnPreAddInstance();
	void ReceiveOnPostAddInstance();
	void OnPreAddInstance();
	void OnPostAddInstance();
	static class UCreativeModeModDataCheckManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeModeChatBubbleUI
// 0x0038 (0x0240 - 0x0208)
class UCreativeModeChatBubbleUI : public UUserWidget
{
public:
	struct FName                                       SocketName;                                               // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMoveWithPawn;                                            // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	struct FVector                                     TargetOffset;                                             // 0x0214(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       CurTargetActor;                                           // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasPanelSlot*                            ChildSlot;                                                // 0x0228(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	struct FVector                                     CurrentTargetPosition;                                    // 0x0230(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x023C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeChatBubbleUI");
        return pStaticClass;
    }


	void TickLua();
	void ForceUpdatePosition();
};


// Class Creative.CreativeModeGlobalManagerCenter
// 0x0020 (0x0040 - 0x0020)
class UCreativeModeGlobalManagerCenter : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	TArray<class USTExtraManagerBase*>                 ManagerArray;                                             // 0x0028(0x000C) (ZeroConstructor, Transient)
	TArray<class UClass*>                              ManagerClassArray;                                        // 0x0034(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeGlobalManagerCenter");
        return pStaticClass;
    }


	void OnCreativeDelegateCreated();
};


// Class Creative.CreativeModeStaticMeshBatchActor
// 0x00C8 (0x0490 - 0x03C8)
class ACreativeModeStaticMeshBatchActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03C8(0x0048) MISSED OFFSET
	struct FCreativeBatchInstancedStaticMesh           InstancedStaticMeshInfo;                                  // 0x0410(0x0044)
	struct FCreativeFineBatchInstancedStaticMesh       BatchInstancedStaticMeshInfo;                             // 0x0454(0x003C)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeStaticMeshBatchActor");
        return pStaticClass;
    }


	void SetISMStaticMeshAndMaterials(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int AssetId, int StaticMeshIndex, int MaterialID);
};


// Class Creative.CreativeModeTouchWidget
// 0x0000 (0x0250 - 0x0250)
class UCreativeModeTouchWidget : public ULuaUserWidget
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeTouchWidget");
        return pStaticClass;
    }


	struct FEventReply OnHandleTouchStart(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnHandleTouchMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnHandleTouchEnd(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool OnHandleTouch(int Type, int FingerIndex, const struct FVector2D& Pos);
};


// Class Creative.CreativeModeNavigationManager
// 0x0040 (0x0100 - 0x00C0)
class UCreativeModeNavigationManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00C0(0x003C) UNKNOWN PROPERTY: SetProperty Creative.CreativeModeNavigationManager.CachedActors
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeNavigationManager");
        return pStaticClass;
    }


	void SetTimeSliceConfig(int MaxTaskPerSlice, int SliceTimeLen);
	void SetNavmeshBuildPolicy(int PolicyVal);
	void SetDynamicModeEnable(bool bEnable);
	void SetDebugOutputEnable(bool bEnable);
	void SetConcurrentTaskNum(int Num);
	TArray<unsigned char> SerializeDynamicTileToByteArr(int MaxFileSize, int MaxTileToAdd);
	void RevokePendingBuildingTasks();
	void ReceiveOnUnInit();
	void ReceiveOnInit();
	void RebuildDynamicTilesByCoord(TArray<struct FIntPoint>* DynamicTiles);
	void RebuildDynamicTiles(TArray<class AActor*>* Actors);
	bool IsBuildingInProgress();
	void ImportDynamicTile(struct FString* Path);
	int GetDynamicTilesCount();
	bool GetDynamicTileMemCost(int* Total, int* OctTree, int* TileCache, int* DynamicTile, int* DynamicTileCount);
	struct FIntPoint GetDynamicTileCoordByPos(const struct FVector& Pos);
	TArray<class AActor*> GetAllAssociateActors();
	static class UCreativeModeNavigationManager* Get(class UObject* WorldContext);
	void ExportDynamicTile(struct FString* Path);
	void DeserializeDynamicTileFromByteArr(TArray<unsigned char>* ByteArr);
	void ClearNavCollision();
	void ClearDynamicOctreeData();
	void ClearDynamicNavMesh();
	void ClearAssociateActors();
	TArray<struct FVector> CalSamplePointsInBoxLegacy(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints);
	TArray<struct FVector> CalSamplePointsInBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints);
	TArray<struct FVector> CalSamplePoints(const struct FVector& StartPos, float StepSize, int MaxPoints);
	void AddNavAffectedObjects(TArray<class AActor*> Actors);
	void AddNavAffectedObject(class AActor* Actor);
};


// Class Creative.CreativeObjectEditAxisActor
// 0x00B8 (0x0480 - 0x03C8)
class ACreativeObjectEditAxisActor : public ALuaActor
{
public:
	int                                                SizeScaleBase;                                            // 0x03C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03CC(0x0010) MISSED OFFSET
	struct FVector                                     AxisState;                                                // 0x03DC(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ForceHideAxis;                                            // 0x03E8(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x03F4(0x000C) MISSED OFFSET
	struct FTransform                                  WorldBaseTransform;                                       // 0x0400(0x0030) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x44];                                      // 0x0430(0x0044) MISSED OFFSET
	class APlayerCameraManager*                        PlayerCameraManager;                                      // 0x0474(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0478(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectEditAxisActor");
        return pStaticClass;
    }


	void StartEdit(int Axis, const struct FVector2D& Pos, const struct FVector& HitPos);
	void SetForceHideAxis(const struct FVector& State);
	void SetFixedAxisSize(float FixedSize);
	void SetEditType(int InEditType, int InEditSubType);
	void SetComponentVisible(class USceneComponent* comp, bool bVisible);
	void SetAxisState(const struct FVector& State);
	void MarkEditing(bool bDoing);
	void CalScale(const struct FVector2D& Pos, struct FVector* OutScale);
	float CalRotation(const struct FVector2D& Pos, struct FRotator* OutRot);
	void CalLocation(const struct FVector2D& Pos, struct FVector* OutLoc);
};


// Class Creative.CreativeModeObjectFuncComponent
// 0x0000 (0x00F8 - 0x00F8)
class UCreativeModeObjectFuncComponent : public UCreativeModeLiteComponent
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectFuncComponent");
        return pStaticClass;
    }

};


// Class Creative.CreativeModeObjectInterface
// 0x0000 (0x0020 - 0x0020)
class UCreativeModeObjectInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeObjectInterface");
        return pStaticClass;
    }


	void ReceiveOnPostSetInstanceId(const struct FString& InstanceID);
};


// Class Creative.CreativeObjectLocalAxisActor
// 0x00A8 (0x0470 - 0x03C8)
class ACreativeObjectLocalAxisActor : public ALuaActor
{
public:
	class AActor*                                      AttachActor;                                              // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AttachOffsetZ;                                            // 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AxisComponent;                                            // 0x03D0(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GridComponent;                                            // 0x03D4(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FTransform                                  BaseTransform;                                            // 0x03E0(0x0030) (IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0410(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	struct FTransform                                  AttachTransform;                                          // 0x0420(0x0030) (IsPlainOldData)
	bool                                               bAttach;                                                  // 0x0450(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoRotate;                                                // 0x0451(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoZClamp;                                                // 0x0452(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0453(0x0001) MISSED OFFSET
	float                                              SnapUnit;                                                 // 0x0454(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SnapAxisConfig;                                           // 0x0458(0x000C) (IsPlainOldData)
	float                                              HideDelayInterval;                                        // 0x0464(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectLocalAxisActor");
        return pStaticClass;
    }


	void SetAxisComponents(class USceneComponent* Axis, class USceneComponent* Grid);
	void NeedUpdate();
};


// Class Creative.CreativeObjectManager
// 0x00F0 (0x01B0 - 0x00C0)
class UCreativeObjectManager : public UCreativeModeManagerBase
{
public:
	TMap<struct FString, class UObject*>               ObjectMap;                                                // 0x00C0(0x0050) (ZeroConstructor, Transient)
	TMap<struct FString, bool>                         ObjectActiveMap;                                          // 0x00FC(0x0050) (ZeroConstructor)
	bool                                               bContainsSpawnCompleteCallback;                           // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReordering;                                              // 0x0139(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	int                                                Client_FrameSpawnNum;                                     // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ds_FrameSpawnNum;                                         // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFrameDestroyObjectEnable;                                // 0x0144(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	int                                                Client_FrameDestroyNum;                                   // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ds_FrameDestroyNum;                                       // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPostSpawnCompleteEventFlag;                              // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5F];                                      // 0x0151(0x005F) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectManager");
        return pStaticClass;
    }


	void SpawnObjectForStreaming(const struct FString& InstanceID);
	class UObject* SpawnObject(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform);
	bool SetObjectTempStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType TempStreamingType);
	bool ResetObjectStreamingType(const struct FString& InstanceID);
	bool RemoveSpawnObjectInfoFormQueue(struct FString* InstanceID);
	void RemovePhysicsObject(const struct FString& InstanceID);
	bool RemoveObject(const struct FString& InstanceID, bool bRemovePhysicsObject);
	bool RemoveDestroyObjectInfoFormQueue(struct FString* InstanceID);
	void ReceiveUnregisterObject(const struct FString& InstanceID, class UObject* NewObject);
	void ReceiveRegisterObject(const struct FString& InstanceID, class UObject* NewObject);
	void ReceiveOnPostLoadMapWithWorld(class UWorld* World);
	void ReceiveClearAllObjects();
	void OnPostLoadMapWithWorld(class UWorld* World);
	void OnObjectSpawnComplete(const struct FString& ID);
	bool IsLogicObject(const struct FString& ID);
	bool IsGroupObject(const struct FString& ID);
	bool IsCanBatchObject(const struct FString& ID);
	struct FTransform GetObjectTransform(const struct FString& ID);
	uint32_t GetObjectNum();
	struct FString GetObjectAssetPath(const struct FString& ID);
	int GetObjectAssetID(const struct FString& ID);
	class UObject* GetObject(const struct FString& InstanceID);
	uint32_t GetActiveObjectNum();
	static class UCreativeObjectManager* Get(class UObject* WorldContext);
	void DestroyObjectForStreaming(const struct FString& InstanceID);
	bool DestroyObject(const struct FString& InstanceID);
	bool CheckObjectBeBatch(const struct FString& ID);
	bool ChangeObjectTransform(const struct FString& InstanceID, const struct FTransform& Transform);
	void AddSpawnObjectToQueue(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform);
	bool AddObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters);
	void AddDestroyObjectToQueue(const struct FString& InstanceID);
};


// Class Creative.CreativeObjectStateManager
// 0x0008 (0x00C8 - 0x00C0)
class UCreativeObjectStateManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeObjectStateManager");
        return pStaticClass;
    }


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	static class UCreativeObjectStateManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeOccupationAreaLiteComponent
// 0x0000 (0x00F8 - 0x00F8)
class UCreativeOccupationAreaLiteComponent : public UCreativeModeLiteComponent
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOccupationAreaLiteComponent");
        return pStaticClass;
    }

};


// Class Creative.CreativeOfflineBuildManager
// 0x0000 (0x00C0 - 0x00C0)
class UCreativeOfflineBuildManager : public USTExtraManagerBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeOfflineBuildManager");
        return pStaticClass;
    }


	void ReceiveOnPostSetLuaEventBridgeInstance();
	void OnPostSetLuaEventBridgeInstance();
	static class UCreativeOfflineBuildManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativePerfManager
// 0x0060 (0x0120 - 0x00C0)
class UCreativePerfManager : public UCreativeModeManagerBase
{
public:
	TMap<class AActor*, struct FCreaitvePerfDataMap>   ActorPerfData;                                            // 0x00C0(0x0050) (ZeroConstructor)
	struct FCreativeNetData                            BeginSampleNetData;                                       // 0x00FC(0x0008)
	float                                              FPSStatInterval;                                          // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0108(0x0018) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePerfManager");
        return pStaticClass;
    }


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	TMap<struct FName, float> GetUObjectMemoryUsage();
	TArray<struct FCreaitvePerfDataMap> GetResult();
	struct FCreativeNetData GetNetData();
	struct FCreativeMemoryData GetMemoryData();
	void GetCPUUsage(int Type, float* OutCPUTimePct, float* OutCPUTimePctRelative);
	static class UCreativePerfManager* Get(class UObject* WorldContext);
	void EndSample();
	void BeginSample();
	void AddActorToRecord(class AActor* Actor, int AssetId, const struct FName& ScopeName);
};


// Class Creative.CreativePhotonDestructibleMeshComponent
// 0x0040 (0x0B00 - 0x0AC0)
class UCreativePhotonDestructibleMeshComponent : public UPhotonDestructibleMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0AC0(0x0018) MISSED OFFSET
	struct FPhotonDestructionParam                     DestructionParam;                                         // 0x0AD8(0x0018)
	int                                                MaxFXFragmentNumber;                                      // 0x0AF0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0AF4(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhotonDestructibleMeshComponent");
        return pStaticClass;
    }


	void SetInstanceActive(bool bActive);
	void SetDestructionParam(const struct FPhotonDestructionParam& Param);
	void SetCreativeServerDamagedDelegate(const struct FScriptDelegate& del);
	void SetCreativeClientFragmentStateChangedDelegate(const struct FScriptDelegate& del);
	bool RebornOneFragment(int FragmentIndex);
	bool RebornInstance();
	bool RandomRecoverOneFragment();
	void RandomDestroyOneFragment();
	void DestroyInstance();
	bool CheckFragmentOverlap(int FragmentIndex);
};


// Class Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent
// 0x00B0 (0x0C80 - 0x0BD0)
class UCreativePhotonHierarchicalInstancedDestructibleMeshComponent : public UPhotonHierarchicalInstancedDestructibleMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0BD0(0x0010) MISSED OFFSET
	struct FString                                     MinClusterInstanceID;                                     // 0x0BE0(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   InstanceReplicationIndex;                                 // 0x0BEC(0x000C) (ZeroConstructor)
	TMap<int, struct FPhotonDestructionParam>          InstanceToDestructionParams;                              // 0x0BF8(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          UGCInstanceIDToInstanceIndex;                             // 0x0C34(0x0050) (ZeroConstructor)
	int                                                MaxFXFragmentNumber;                                      // 0x0C70(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0C74(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent");
        return pStaticClass;
    }


	void SetServerDamagedInstancedDelegate(const struct FScriptDelegate& InDelegate);
	void SetInstanceMaxHp(int InstanceIndex, float MaxHP);
	void SetInstanceActive(const struct FString& InstanceID, bool bActive);
	void SetDestructionParam(TArray<int> InstanceIndex, TArray<struct FPhotonDestructionParam> DestructionParams);
	bool RebornOneFragment(const struct FString& InstanceID, int FragmentIndex);
	bool RebornInstance(const struct FString& InstanceID);
	bool RandomRecoverOneFragment(const struct FString& InstanceID);
	void RandomDestroyOneFragment(const struct FString& InstanceID);
	void OnClientInitial(int InstanceIndex, TArray<int> ImpactFragmentItemIndex);
	void OnClientDamaged(int InstanceIndex, TArray<int> ImpactFragmentItemIndex, const struct FVector& LocalImpactPoint, const struct FVector& LocalVelocity, int HitType);
	struct FString GetUGCInstanceID(int InstanceIndex);
	void DestroyInstance(const struct FString& InstanceID);
	bool CheckFragmentOverlap(int InstanceIndex, int FragmentIndex);
};


// Class Creative.CreativePhotonInstancedDestructibleMeshComponent
// 0x00A0 (0x0BC0 - 0x0B20)
class UCreativePhotonInstancedDestructibleMeshComponent : public UPhotonInstancedDestructibleMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B20(0x0008) MISSED OFFSET
	struct FString                                     MinClusterInstanceID;                                     // 0x0B28(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   InstanceReplicationIndex;                                 // 0x0B34(0x000C) (ZeroConstructor)
	TMap<int, struct FPhotonDestructionParam>          InstanceToDestructionParams;                              // 0x0B40(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          UGCInstanceIDToInstanceIndex;                             // 0x0B7C(0x0050) (ZeroConstructor)
	int                                                MaxFXFragmentNumber;                                      // 0x0BB8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0BBC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhotonInstancedDestructibleMeshComponent");
        return pStaticClass;
    }


	void SetServerDamagedInstancedDelegate(const struct FScriptDelegate& InDelegate);
	void SetInstanceMaxHp(int InstanceIndex, float MaxHP);
	void SetInstanceActive(const struct FString& InstanceID, bool bActive);
	void SetDestructionParam(TArray<int> InstanceIndex, TArray<struct FPhotonDestructionParam> DestructionParams);
	bool RebornOneFragment(const struct FString& InstanceID, int FragmentIndex);
	bool RebornInstance(const struct FString& InstanceID);
	bool RandomRecoverOneFragment(const struct FString& InstanceID);
	void RandomDestroyOneFragment(const struct FString& InstanceID);
	void OnClientInitial(int InstanceIndex, TArray<int> ImpactFragmentItemIndex);
	void OnClientDamaged(int InstanceIndex, TArray<int> ImpactFragmentItemIndex, const struct FVector& LocalImpactPoint, const struct FVector& LocalVelocity, int HitType);
	struct FString GetUGCInstanceID(int InstanceIndex);
	void DestroyInstance(const struct FString& InstanceID);
	bool CheckFragmentOverlap(int InstanceIndex, int FragmentIndex);
};


// Class Creative.CreativePhysicsBatchActor
// 0x0108 (0x04D0 - 0x03C8)
class ACreativePhysicsBatchActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	TMap<struct FString, class UCreativePhysicsComponent*> InstancePhysicsComponentMap;                              // 0x03D0(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x54];                                      // 0x040C(0x0054) MISSED OFFSET
	int                                                TickRegisterMaxNum;                                       // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	struct FScriptDelegate                             MeshLoadSuccessDelegate;                                  // 0x0468(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             MeshLoadSuccessByPathDelegate;                            // 0x0478(0x0010) (ZeroConstructor, InstancedReference)
	TMap<struct FString, struct FPhysicsComponentData> ComponentTempData;                                        // 0x0488(0x0050) (ZeroConstructor)
	int                                                ReplicateLimit;                                           // 0x04C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsBatchActor");
        return pStaticClass;
    }


	void UpdatePhysicsComponentMaterial(struct FString* ComponentID, struct FString* MaterialPath);
	void UpdatePhysicsComponent(const struct FTransform& Transform, TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID);
	bool UnRegisterPhysicsComponent(struct FString* ComponentID);
	void SetPhysicsComponentEnabled(TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID);
	void RegisterPhysicsComponentByMesh(const struct FString& InstanceID, const struct FString& ComponentID, const struct FTransform& Transform, const struct FString& MeshPath, const struct FName& CollisionProfileName);
	void OnLoadMeshSuccessByPath(class UObject* Obj, const struct FString& ComponentID);
	void OnLoadMeshSuccess(class UObject* Obj, const struct FString& ComponentID);
	bool IsLoadFinish();
	int GetRegisterNum();
	class UCreativePhysicsComponent* GetPhysicsComponent(struct FString* ComponentID);
	void ClearAllPhysicsComponent();
};


// Class Creative.CreativePhysicsComponent
// 0x0060 (0x0750 - 0x06F0)
class UCreativePhysicsComponent : public UMeshComponent
{
public:
	class UStaticMesh*                                 InStaticMesh;                                             // 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceID;                                               // 0x06F4(0x000C) (ZeroConstructor)
	struct FName                                       CollisionProfileName;                                     // 0x0700(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0708(0x0030) MISSED OFFSET
	struct FScriptDelegate                             MatLoadSuccessDelegate;                                   // 0x0738(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0748(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsComponent");
        return pStaticClass;
    }


	void SetIsReplicatedOnly(bool ShouldReplicate);
	void OnLoadMaterialSuccess(class UObject* Obj, const struct FString& Path);
};


// Class Creative.CreativePhysicsManager
// 0x0188 (0x0248 - 0x00C0)
class UCreativePhysicsManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
	TMap<struct FString, class UBodySetup*>            BodySetupMap;                                             // 0x00D0(0x0050) (ZeroConstructor, Transient)
	TMap<struct FString, class UMaterialInterface*>    MaterialInterfaceMap;                                     // 0x010C(0x0050) (ZeroConstructor, Transient)
	TMap<struct FString, struct FCreativeInstanceGridCellInfo> InstanceCellMap;                                          // 0x0148(0x0050) (ZeroConstructor, Transient)
	TMap<int, class ACreativePhysicsBatchActor*>       PhysicsBatchActorMap;                                     // 0x0184(0x0050) (ZeroConstructor, Transient)
	bool                                               StreamingEnable;                                          // 0x01C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	TMap<struct FIntVector, bool>                      VisiblePhysicsBatchActors;                                // 0x01C4(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0200(0x0038) MISSED OFFSET
	TArray<class ACreativePhysicsBatchActor*>          OutAllBatchActorArray;                                    // 0x0238(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0244(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePhysicsManager");
        return pStaticClass;
    }


	void UpdatePhysicsObjectCellInfo(const struct FString& InstanceID, const struct FString& GridName, const struct FIntVector& CellIndex);
	void SetStreamingEnable(bool Enable);
	void SetPhysicsActorVisible(const struct FString& GridName, const struct FIntVector& CellIndex, bool Visible);
	void RemovePhysicsObject(const struct FString& InstanceID);
	bool PreAddPhysicsObjectCheck(const struct FString& InstanceID);
	void OnPhysicsBatchActorLoadFinish();
	bool IsPhysicsActorVisible(const struct FString& GridName, const struct FIntVector& CellIndex);
	class ACreativePhysicsBatchActor* GetPhysicsBatchActorByInstanceID(const struct FString& InstanceID);
	class ACreativePhysicsBatchActor* GetPhysicsBatchActor(const struct FString& GridName, const struct FIntVector& Index);
	class ACreativePhysicsBatchActor* GetGlobalPhysicsBatchActor();
	TArray<class ACreativePhysicsBatchActor*> GetAllPhysicsActor();
	static class UCreativePhysicsManager* Get(class UObject* WorldContext);
	void ClearAllPhysicsBatchActor();
	void ChangePhysicsObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab);
	void AddPhysicsObject(const struct FString& InstanceID, const struct FString& GridName, const struct FIntVector& CellIndex);
};


// Class Creative.CreativePlayerAPIObject
// 0x0000 (0x0120 - 0x0120)
class UCreativePlayerAPIObject : public UCreativeApiObject
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePlayerAPIObject");
        return pStaticClass;
    }


	bool SetPlayerDirection(int64_t PlayerUUID, const struct FVector& Direction);
	int GetPlayerTeamIndex(int64_t PlayerUUID);
	void GetPlayerTeamIDAndTeamIndexFromCPP(int64_t PlayerUUID, int* OutTeamID, int* OutTeamIndex);
	int GetPlayerTeamID(int64_t PlayerUUID);
	float GetPlayerMaxHealth(int64_t PlayerUUID);
	struct FVector GetPlayerLocation(int64_t PlayerUUID);
	float GetPlayerHealth(int64_t PlayerUUID);
	struct FVector GetPlayerDirection(int64_t PlayerUUID);
	float AddPlayerHealth(int64_t PlayerUUID, float AddHealth);
};


// Class Creative.CreativeModePlayerState
// 0x0008 (0x1650 - 0x1648)
class ACreativeModePlayerState : public ASTExtraPlayerState
{
public:
	bool                                               bEnableAutoPickUp;                                        // 0x1648(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1649(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModePlayerState");
        return pStaticClass;
    }


	void ServerRemoveInstance(const struct FString& InstanceID);
	TArray<unsigned char> ServerReceiveModifyContent(TArray<unsigned char> Content, int idx);
	void ServerAddInstanceAdvance(const struct FString& InstanceID, TArray<unsigned char> Content, int idx);
	void ServerAddInstance(const struct FString& InstanceID, TArray<unsigned char> Content);
};


// Class Creative.CreativePoolInterface
// 0x0000 (0x0020 - 0x0020)
class UCreativePoolInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePoolInterface");
        return pStaticClass;
    }


	void SetRecycleTime(float RecycleTime);
	void SetIsRecycled(bool IsRecycled);
	void ReceiveOnReturnToPool(class UObject* NewOuter, int RecycledSeq);
	void ReceiveOnPickFromPool(class UObject* NewOuter, const struct FString& InName);
	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
	struct FString GetUnusedComponentName(class UObject* InOuter, struct FString* NamePrefix);
	float GetRecycleTime();
	bool CheckIsRecycled();
};


// Class Creative.CreativePoolManager
// 0x0048 (0x0108 - 0x00C0)
class UCreativePoolManager : public UCreativeModeManagerBase
{
public:
	bool                                               bPoolManagerEnable;                                       // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00C1(0x000B) MISSED OFFSET
	TMap<int, struct FCreativeObjectPool>              CreativePools;                                            // 0x00CC(0x0050) (ZeroConstructor, Transient)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativePoolManager");
        return pStaticClass;
    }


	void SetPoolManagerEnable(bool bPoolManagerEnable);
	void ReturnObject(int PoolId, class UObject* Obj);
	void OnReceivePickObjectHandle(int ID, class UObject* InObj);
	void OnReceiveObjectReturnHandle(int ID, class UObject* InObj);
	bool OnReceiveDestroyHandle(int ID, class UObject* InObj);
	class UObject* OnReceiveCreateHandle(int ID);
	bool InitPool(int PoolId, bool bPoolEnable, struct FCreativeObjectPoolClassConfig* PoolConfig);
	struct FString GetUnusedComponentName(class UObject* InOuter, struct FString* NamePrefix);
	class UObject* GetObject(int PoolId, class UObject* NewOuter, const struct FString& InName);
	static class UCreativePoolManager* Get(class UObject* WorldContext);
	void ClearPoolObject();
};


// Class Creative.CreativeModeRaceCheckPointComponent
// 0x0000 (0x0150 - 0x0150)
class UCreativeModeRaceCheckPointComponent : public ULuaActorComponent
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeRaceCheckPointComponent");
        return pStaticClass;
    }

};


// Class Creative.CreativeModeRaceCheckPointLiteComponent
// 0x0000 (0x00F8 - 0x00F8)
class UCreativeModeRaceCheckPointLiteComponent : public UCreativeModeLiteComponent
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeRaceCheckPointLiteComponent");
        return pStaticClass;
    }

};


// Class Creative.CreativeRuntimePlayerBattleDataObject
// 0x0268 (0x0630 - 0x03C8)
class ACreativeRuntimePlayerBattleDataObject : public ALuaActor
{
public:
	struct FRuntimePlayerBattleDataInfo                DefaultPlayerBattleDataInfo;                              // 0x03C8(0x0068)
	struct FRuntimeTeamGameOutcomeConditionInfo        DefaultTeamGameOutcomeCondition;                          // 0x0430(0x001C)
	struct FRuntimeCacheRoundBattleDataInfoContainer   RuntimeOldCacheRoundBattleDataContainer;                  // 0x044C(0x0098) (Net, Transient)
	struct FRuntimeBattleDataInfoContainer             RuntimeCurRoundBattleDataInfoContainer;                   // 0x04E4(0x0098) (Net, Transient)
	struct FRuntimeTeamGameOutcomeConditionContainer   RuntimeTeamGameOutcomeConditionContainer;                 // 0x057C(0x0098) (Net, Transient)
	struct FRuntimeCacheRoundBattleDataInfo            DefaultCacheRoundBattleDataInfo;                          // 0x0614(0x001C)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeRuntimePlayerBattleDataObject");
        return pStaticClass;
    }


	bool SetTeamGameOutcomeCondition(int TeamID, bool bPropagateToChildren, struct FRuntimeTeamGameOutcomeConditionInfo* TeamGameOutcomeCondition);
	bool SetPlayerBattleData(uint64_t UID, uint32_t PlayerKey, bool bPropagateToChildren, struct FRuntimePlayerBattleDataInfo* PlayerBattleData);
	bool ResetCurRoundPlayerBattleDataList();
	void OnRepTeamGameOutcomeConditionInfo(int TeamID);
	void OnRepCurRoundPlayerBattleDataInfo(uint64_t PlayerUID, uint64_t PlayerKey, int ChangeTeamID);
	struct FRuntimeTeamGameOutcomeConditionInfo GetTeamGameOutcomeCondition(int TeamID);
	struct FRuntimePlayerBattleDataInfo GetCurRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey);
	TArray<struct FRuntimePlayerBattleDataInfo> GetCurRoundAllPlayerBattleData();
	struct FRuntimePlayerBattleDataInfo GetCacheRoundPlayerBattleData(int RoundIndex, uint64_t PlayerUID, uint32_t PlayerKey);
	struct FRuntimeCacheRoundBattleDataInfo GetCacheRoundBattleData(int RoundIndex);
	struct FRuntimePlayerBattleDataInfo GetAllRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey);
	void CacheCurRoundBattleData(int RoundIndex);
};


// Class Creative.CreativeSceneQueryManager
// 0x00D8 (0x0198 - 0x00C0)
class UCreativeSceneQueryManager : public UCreativeModeManagerBase
{
public:
	struct FCreativeReplicatedDataContainer            ReplicatedDataContainer;                                  // 0x00C0(0x0098) (Net, Transient)
	TMap<struct FString, struct FCreativeReplicatedObjectsInfo> MapReplicatedObjects;                                     // 0x0158(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0194(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSceneQueryManager");
        return pStaticClass;
    }


	void RemoveReplicateObject(const struct FString& InstanceID, class UObject* Object);
	void RemoveReplicateData(const struct FString& InstanceID);
	void OnReceivePreReplicateDataRemove(const struct FString& ID);
	void OnReceivePostReplicateDataChange(const struct FString& ID, TArray<class UObject*> Objects);
	void OnReceivePostReplicateDataAdd(const struct FString& ID, TArray<class UObject*> Objects);
	TArray<class UObject*> GetReplicatedObjects(const struct FString& InstanceID);
	static class UCreativeSceneQueryManager* Get(class UObject* WorldContext);
	void AddReplicateObjectPostDeferred(const struct FString& InstanceID, const struct FTransform& SpawnTransform, class UObject* ReplicatedObject);
	class UObject* AddReplicateObjectDeferred(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
	class UObject* AddReplicateObject(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
};


// Class Creative.CreativeScreenCaptureWidget
// 0x0008 (0x0258 - 0x0250)
class UCreativeScreenCaptureWidget : public ULuaUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0250(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeScreenCaptureWidget");
        return pStaticClass;
    }


	void OnPanelInitialized();
};


// Class Creative.CreativeModeSoftComponentManager
// 0x0040 (0x0100 - 0x00C0)
class UCreativeModeSoftComponentManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00C0(0x0040) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeModeSoftComponentManager");
        return pStaticClass;
    }


	static class UCreativeModeSoftComponentManager* Get(class UObject* WorldContext);
	void ClearAllLoading();
};


// Class Creative.SoftStaticMeshComponent
// 0x0050 (0x0890 - 0x0840)
class USoftStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0840(0x0004) MISSED OFFSET
	unsigned char                                      bOnlyRender : 1;                                          // 0x0844(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0845(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Creative.SoftStaticMeshComponent.SoftStaticMesh
	struct FSoftObjectPath                             SoftStaticMeshPath;                                       // 0x0870(0x0018)
	unsigned char                                      bAsyncLoad : 1;                                           // 0x0888(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0889(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.SoftStaticMeshComponent");
        return pStaticClass;
    }


	bool SetSoftStaticMeshAsync(struct FString* NewMeshPath);
	bool SetSoftStaticMesh(class UStaticMesh* NewMesh, bool bSetStaticMesh);
	void SetComponentOnlyRender(bool bOnlyRender);
	void OnClientAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath);
	void LoadSoftStaticMeshImmediately();
};


// Class Creative.CreativeSoftStaticMeshComponent
// 0x0010 (0x08A0 - 0x0890)
class UCreativeSoftStaticMeshComponent : public USoftStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0890(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSoftStaticMeshComponent");
        return pStaticClass;
    }


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
};


// Class Creative.CreativeSpawnManager
// 0x0000 (0x00C0 - 0x00C0)
class UCreativeSpawnManager : public UCreativeModeManagerBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeSpawnManager");
        return pStaticClass;
    }


	class AActor* SpawnTower(int ConfigId, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID);
	class AActor* SpawnHumanBot(int ConfigId, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID);
	class AActor* SpawnAIPlayer(int ConfigId, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID);
	void OnUnitSpawned(class AActor* NewUnit, ESpecType SpecType);
	void OnOwnedTowerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	void OnOwnedFakePlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	void OnOwnedAIPlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	void OnMonsterUnitDead(class ASTExtraSimpleCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType);
	void OnDeadWithCategory(ESpecType Category, class APawn* DeadCharacter);
	static class UCreativeSpawnManager* Get(class UObject* WorldContext);
};


// Class Creative.CreativeStaticMeshComponent
// 0x0010 (0x0850 - 0x0840)
class UCreativeStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0840(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeStaticMeshComponent");
        return pStaticClass;
    }


	bool OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq);
	void OnPickFromPool(class UObject* NewOuter, const struct FString& InName);
};


// Class Creative.CreativeStreamingManager
// 0x0180 (0x0240 - 0x00C0)
class UCreativeStreamingManager : public UCreativeModeManagerBase
{
public:
	bool                                               bStreamingManagerEnable;                                  // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bStreamingStateCheckStartup;                              // 0x00C1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseChildThreads;                                         // 0x00C2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00C3(0x0001) MISSED OFFSET
	float                                              StreamingTickFrequency;                                   // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DestroyExtendDistance;                                    // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DelayDestroyTime;                                         // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NeedTickStreamingDistanceScale;                           // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               ChildThreadsReduceTickFrequency;                          // 0x00D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D5(0x0007) MISSED OFFSET
	TMap<struct FString, struct FCreativeModeStreamingParameters> ObjectStreamingStateMap;                                  // 0x00DC(0x0050) (ZeroConstructor, Transient)
	TArray<struct FString>                             ObjectStreamingStateKeyList;                              // 0x0118(0x000C) (ZeroConstructor, Transient)
	TMap<struct FString, bool>                         ObjectSpawnStateChangeMaps;                               // 0x0124(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0160(0x003C) MISSED OFFSET
	TArray<TWeakObjectPtr<class AActor>>               OuterStreamingSources;                                    // 0x019C(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x98];                                      // 0x01A8(0x0098) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeStreamingManager");
        return pStaticClass;
    }


	void UnregisterStreamingSource(class AActor* Source);
	bool StreamingManagerEnable();
	bool RemoveStreamingObject(const struct FString& InstanceID);
	void RegisterStreamingSource(class AActor* Source);
	struct FIntVector GetOnGridCellIndex(const struct FString& GridName, const struct FVector& Location);
	float GetGridLoadingRange(const struct FString& GridName);
	TArray<struct FString> GetGridList();
	struct FVector2D GetGridCellWidthHeight(const struct FString& GridName);
	TArray<struct FVector> GetCreativeModeStreamingSourceList();
	static class UCreativeStreamingManager* Get(class UObject* WorldContext);
	ECreativeModeActorStreamingType ChangeStreamingObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType);
	bool AddStreamingObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters);
};


// Class Creative.CreativeTimerApiObject
// 0x0038 (0x0158 - 0x0120)
class UCreativeTimerApiObject : public UCreativeApiObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0120(0x0038) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeTimerApiObject");
        return pStaticClass;
    }


	void Clear();
};


// Class Creative.CreativeTriggerAreaActor
// 0x0050 (0x0418 - 0x03C8)
class ACreativeTriggerAreaActor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03C8(0x0050) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeTriggerAreaActor");
        return pStaticClass;
    }


	void OnTakeDamage(class AActor* DamageCauser);
};


// Class Creative.CreativeWebSocketManager
// 0x0028 (0x00E8 - 0x00C0)
class UCreativeWebSocketManager : public USTExtraManagerBase
{
public:
	TArray<struct FString>                             SendList;                                                 // 0x00C0(0x000C) (ZeroConstructor)
	TArray<struct FString>                             ReceivedList;                                             // 0x00CC(0x000C) (ZeroConstructor)
	float                                              LastTickSeconds;                                          // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MessageTickFrequency;                                     // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TickTimerHandle;                                          // 0x00E0(0x0008)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWebSocketManager");
        return pStaticClass;
    }


	void SendMessage(const struct FString& Message);
	void ReceiveOnPostSetLuaEventBridgeInstance();
	void OnTickTimer();
	void OnReceiveConnected();
	void OnPostSetLuaEventBridgeInstance();
	bool OnMessageSent(const struct FString& Message);
	bool OnMessageReceived(const struct FString& Message);
	bool IsConnected();
	static class UCreativeWebSocketManager* Get(class UObject* WorldContext);
	void ConnectServer(const struct FString& ServerURL, const struct FString& ServerProtocol);
};


// Class Creative.CreativeWidgetComponent
// 0x0000 (0x07F0 - 0x07F0)
class UCreativeWidgetComponent : public UWidgetComponent
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWidgetComponent");
        return pStaticClass;
    }

};


// Class Creative.CreativeWidgetObject
// 0x0114 (0x0130 - 0x001C)
class UCreativeWidgetObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x001C(0x00B4) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x00D0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TMap<class UObject*, struct FCreativePoolObjectRecordInfo> PoolObjectRecordMap;                                      // 0x00E0(0x0050) (ZeroConstructor)
	TArray<class ULiteComponent*>                      LiteComponents;                                           // 0x011C(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWidgetObject");
        return pStaticClass;
    }


	void UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy);
	void ReturnObjectToPool(class UObject* Obj);
	void ReturnObjectsToPool(TArray<class UObject*> Objs);
	void RegisterLiteComponent(class ULiteComponent* Component);
	void ReceivePostBeginPlay();
	bool ReceiveIsDedicatedServer();
	bool ReceiveHasAuthority();
	void ReceiveEndPlay();
	void ReceiveBeginPlay();
	TArray<class UObject*> GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams);
	class UObject* GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName);
};


// Class Creative.CreativeWorldSubSystem
// 0x0008 (0x0028 - 0x0020)
class UCreativeWorldSubSystem : public UWorldSubsystem
{
public:
	class AActor*                                      ManagerCenter;                                            // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWorldSubSystem");
        return pStaticClass;
    }


	class AActor* GetManagerCenter();
};


// Class Creative.CreativeWoWInactiveCheckComponent
// 0x0040 (0x0190 - 0x0150)
class UCreativeWoWInactiveCheckComponent : public ULuaActorComponent
{
public:
	float                                              ComponentTickInterval;                                    // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InactivePlayerKickoutTime;                                // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InactiveCheckGap;                                         // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InactiveTimeForTipPreTime;                                // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreActiveTime;                                            // 0x0160(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClientSendActiveRPCGap;                                   // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsClientActive;                                          // 0x0168(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESCWOWActiveType                                   CWOWActiveType;                                           // 0x0169(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x016A(0x0002) MISSED OFFSET
	struct FVector                                     PrePawnLoc;                                               // 0x016C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    PreControllerRotation;                                    // 0x0178(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0184(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWoWInactiveCheckComponent");
        return pStaticClass;
    }


	void ServerMarkPlayerActive();
	void MarkPlayerActive();
	void KickOutPlayer();
	void ClientShowKickOutTip(float RemainTime);
	void ClientCachedActiveState();
	bool CheckForMovement();
	void CheckForInactive();
};


// Class Creative.CreativeWoWManager
// 0x0008 (0x00C8 - 0x00C0)
class UCreativeWoWManager : public UCreativeModeManagerBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.CreativeWoWManager");
        return pStaticClass;
    }


	void ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState);
	void OnGameStateBeginPlay(class AGameStateBase* GameState);
	static class UCreativeWoWManager* Get(class UObject* WorldContext);
};


// Class Creative.DancerDeviceActor
// 0x0010 (0x03D8 - 0x03C8)
class ADancerDeviceActor : public ALuaActor
{
public:
	class APawn*                                       SyncPlayerCharacter;                                      // 0x03C8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        TempAvatarItemIDList;                                     // 0x03CC(0x000C) (ZeroConstructor)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.DancerDeviceActor");
        return pStaticClass;
    }


	void OnRep_SyncPlayerCharacter();
};


// Class Creative.GameModeStateActive_CreativeMode
// 0x0000 (0x0088 - 0x0088)
class UGameModeStateActive_CreativeMode : public UGameModeStateActive
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateActive_CreativeMode");
        return pStaticClass;
    }

};


// Class Creative.GameModeStateFighting_CreativeMode
// 0x0000 (0x0090 - 0x0090)
class UGameModeStateFighting_CreativeMode : public UGameModeStateFightingTeam
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateFighting_CreativeMode");
        return pStaticClass;
    }


	void SetToInfinityTime();
	void PlayersInfoRecord();
};


// Class Creative.GameModeStateFinished_CreativeMode
// 0x0000 (0x0088 - 0x0088)
class UGameModeStateFinished_CreativeMode : public UGameModeStateFinishedTeam
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateFinished_CreativeMode");
        return pStaticClass;
    }

};


// Class Creative.GameModeStateReady_CreativeMode
// 0x0000 (0x00C8 - 0x00C8)
class UGameModeStateReady_CreativeMode : public UGameModeStateReady
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameModeStateReady_CreativeMode");
        return pStaticClass;
    }

};


// Class Creative.GameProcessEventObject
// 0x0000 (0x00B0 - 0x00B0)
class UGameProcessEventObject : public UCreativeEventObject
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.GameProcessEventObject");
        return pStaticClass;
    }


	void ReceivePostEvent(int ProcessType, int Round);
	void OnEnterPlayProcess();
};


// Class Creative.PlayerListenerEventObject
// 0x0000 (0x00B0 - 0x00B0)
class UPlayerListenerEventObject : public UCreativeEventObject
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.PlayerListenerEventObject");
        return pStaticClass;
    }


	void OnCppRemovePlayerListener(class UObject* Content, uint32_t PlayerKey);
	void OnCppAddPlayerListener(class UObject* Content, uint32_t PlayerKey);
};


// Class Creative.PlayerAttachedToVehicleEventObject
// 0x0040 (0x00F0 - 0x00B0)
class UPlayerAttachedToVehicleEventObject : public UPlayerListenerEventObject
{
public:
	TMap<uint32_t, class UPlayerAttachedProxy*>        LambdaDelegateMap;                                        // 0x00B0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.PlayerAttachedToVehicleEventObject");
        return pStaticClass;
    }


	void OnOwnerAttachedToVehicle(class ASTExtraVehicleBase* InVehicle, uint32_t PlayerKey);
	void OnCppRemovePlayerListener(class UObject* Content, uint32_t PlayerKey);
	void OnCppAddPlayerListener(class UObject* Content, uint32_t PlayerKey);
};


// Class Creative.PlayerAttachedProxy
// 0x000C (0x0028 - 0x001C)
class UPlayerAttachedProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPlayerAttachedToVehicleEventObject*         Owner;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       PlayerCharacter;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.PlayerAttachedProxy");
        return pStaticClass;
    }


	void OnProxyAttachedToVehicle(class ASTExtraVehicleBase* InVehicle);
};


// Class Creative.ShowAllPlayerManagerActor
// 0x0090 (0x0458 - 0x03C8)
class AShowAllPlayerManagerActor : public ALuaActor
{
public:
	float                                              RefreshInterval;                                          // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MapMarkID;                                                // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableRefresh;                                           // 0x03D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	int                                                BatchNum;                                                 // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurBatchID;                                               // 0x03D8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CurBatchNum;                                              // 0x03DC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x03E0(0x001C) MISSED OFFSET
	TArray<struct FVector_NetQuantize>                 TeamPosData;                                              // 0x03FC(0x000C) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0408(0x003C) UNKNOWN PROPERTY: SetProperty Creative.ShowAllPlayerManagerActor.TriggerPlayerKeySet
	TArray<struct FMarkDispatchAction>                 MapMarkActionList;                                        // 0x0444(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0450(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Creative.ShowAllPlayerManagerActor");
        return pStaticClass;
    }


	void TriggerRefresh(class ASTExtraBaseCharacter* Character, bool bEnable);
	void RefreshTeamPoseData();
	void RefreshMapMarkData();
	void OnTeamPosDataChange();
	void OnRep_TeamPosData();
	bool IsCharacterValidForShow(class ASTExtraBaseCharacter* Character);
	void FlushBatchData(int BatchSize, int CurExtraSize);
	void EnableRefresh(bool bEnable);
	void ClearAllMark();
};


}

