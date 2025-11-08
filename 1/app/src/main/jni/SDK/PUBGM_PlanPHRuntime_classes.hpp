#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlanPHRuntime.BinFileHelper
// 0x0004 (0x0020 - 0x001C)
class UBinFileHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.BinFileHelper");
        return pStaticClass;
    }


	int Init(int z4BufferSize, int zeroListSize);
};


// Class PlanPHRuntime.MapBarrierWidget
// 0x0028 (0x00F8 - 0x00D0)
class UMapBarrierWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D0(0x0028) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.MapBarrierWidget");
        return pStaticClass;
    }


	void SetMapStructureData(TArray<struct FStructureData> InMapStructureData);
	void SetMapMidPoint(struct FVector2D* InMapMidPoint);
	void SetLevelBoundExtent(int InLevelBoundExtent);
	void SetGridSize(float InGridSize);
};


// Class PlanPHRuntime.PlanPH_GameMode
// 0x0000 (0x1810 - 0x1810)
class APlanPH_GameMode : public ABattleRoyaleGameMode
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameMode");
        return pStaticClass;
    }


	void HandleNavigationInfo(class AController* Controller);
	class ASTExtraPlayerStart* GetPlayerStart(int LandId);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
};


// Class PlanPHRuntime.PlanPH_GameModeState_Active
// 0x0000 (0x0088 - 0x0088)
class UPlanPH_GameModeState_Active : public UGameModeStateActive
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Active");
        return pStaticClass;
    }

};


// Class PlanPHRuntime.PlanPH_GameModeState_Fighting
// 0x0000 (0x0090 - 0x0090)
class UPlanPH_GameModeState_Fighting : public UGameModeStateFightingTeam
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Fighting");
        return pStaticClass;
    }

};


// Class PlanPHRuntime.PlanPH_GameState
// 0x0078 (0x1068 - 0x0FF0)
class APlanPH_GameState : public ASTExtraGameStateBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0FF0(0x0008) MISSED OFFSET
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_2;                                     // 0x0FF8(0x001C) (Net)
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_3;                                     // 0x1014(0x001C) (Net)
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_4;                                     // 0x1030(0x001C) (Net)
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_5;                                     // 0x104C(0x001C) (Net)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameState");
        return pStaticClass;
    }


	void OnRep_PartyDanceLeadInfo_5();
	void OnRep_PartyDanceLeadInfo_4();
	void OnRep_PartyDanceLeadInfo_3();
	void OnRep_PartyDanceLeadInfo_2();
	void LuaOnRep_PartyDanceLeadInfo(int LandId);
	void ChangePartyLeadInfo(int LandId, bool bOccupied, int BeginTime, int EndTime, const struct FString& PlayerUID);
};


// Class PlanPHRuntime.PlanPH_PlayerState
// 0x0008 (0x1650 - 0x1648)
class APlanPH_PlayerState : public ASTExtraPlayerState
{
public:
	int                                                LandId;                                                   // 0x1648(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x164C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_PlayerState");
        return pStaticClass;
    }


	void RequestPaintDecal(int DecalId, const struct FTransform& TargetTransform);
	void OnRep_LandId();
	void InitLandId();
	bool CanPaintDecal(int DecalId);
};


// Class PlanPHRuntime.PlanPHDoor
// 0x0018 (0x03E0 - 0x03C8)
class APlanPHDoor : public ALuaActor
{
public:
	struct FVector                                     WrapExtentsOffset;                                        // 0x03C8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TransformDirVector;                                       // 0x03D4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHDoor");
        return pStaticClass;
    }


	void Refresh_DoorCollisionChanel(class UStaticMeshComponent* StaticMeshComponent, bool bEnableCollision);
	void DoorAniFinish(class UStaticMeshComponent* InDoorCheckBox, bool Bright);
};


// Class PlanPHRuntime.PlanPHGameplayStatics
// 0x0000 (0x0020 - 0x0020)
class UPlanPHGameplayStatics : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHGameplayStatics");
        return pStaticClass;
    }


	float SpinEvaluate(float S, float T);
	bool SetPlayerMovementBlendTime(class ASTExtraPlayerCharacter* PlayerChar, int nType, float BlendTime);
	void GetActorBound(class AActor* Actor, struct FVector* Size);
	void ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask);
};


// Class PlanPHRuntime.PlanPHHomeArea
// 0x0038 (0x0400 - 0x03C8)
class APlanPHHomeArea : public ALuaActor
{
public:
	struct FVector                                     BlockDimension;                                           // 0x03C8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  BlockNumXYZ;                                              // 0x03D4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  MinGridIndexXYZ;                                          // 0x03E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntVector                                  MaxGridIndexXYZ;                                          // 0x03EC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UPlanPHHomeAreaVisualizationComponent*       VisComponent;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeArea");
        return pStaticClass;
    }


	void UpdateEditableArea(const struct FIntVector& InMinGridIndexXYZ, const struct FIntVector& InMaxGridIndexXYZ);
};


// Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent
// 0x0010 (0x06D0 - 0x06C0)
class UPlanPHHomeAreaVisualizationComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06C0(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent");
        return pStaticClass;
    }


	void ShowGrids(bool InBShow);
};


// Class PlanPHRuntime.PlanPHMapData
// 0x0018 (0x0088 - 0x0070)
class UPlanPHMapData : public UMapDataBase
{
public:
	TArray<class ASTExtraPlayerCharacter*>             PlayerCharacterArrayC;                                    // 0x0070(0x000C) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             OffsetLocations;                                          // 0x007C(0x000C) (BlueprintVisible, ZeroConstructor)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHMapData");
        return pStaticClass;
    }


	bool RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem);
	bool AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation);
};


// Class PlanPHRuntime.PlanPHSpectatorPawn
// 0x0058 (0x03F0 - 0x0398)
class APlanPHSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0398(0x0040) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x03D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              PlaneMoveMaxSpeed;                                        // 0x03E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMoveMaxSpeed;                                     // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHSpectatorPawn");
        return pStaticClass;
    }


	void OnSpectatorRestart();
	void MoveRight(float Val);
	void MoveForward(float Val);
};


// Class PlanPHRuntime.PlanPHVisualGridComponent
// 0x0050 (0x0710 - 0x06C0)
class UPlanPHVisualGridComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06C0(0x0004) MISSED OFFSET
	struct FIntVector                                  BlockNumXYZ;                                              // 0x06C4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                XColor;                                                   // 0x06D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                YColor;                                                   // 0x06E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ZColor;                                                   // 0x06F0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LineThickness;                                            // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0704(0x0004) MISSED OFFSET
	bool                                               bShouldShowGrids;                                         // 0x0708(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0709(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHVisualGridComponent");
        return pStaticClass;
    }


	void ShowGrids(bool InBShow);
	void RefreshGrids();
};


}

