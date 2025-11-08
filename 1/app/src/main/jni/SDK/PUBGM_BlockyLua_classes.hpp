#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:34 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BlockyLua.Blocky3DVarWidget
// 0x0048 (0x0250 - 0x0208)
class UBlocky3DVarWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0208(0x0014) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBPInit;                                                 // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	struct FString                                     X;                                                        // 0x0224(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Y;                                                        // 0x0230(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Z;                                                        // 0x023C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                StartSlotIdx;                                             // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x024C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.Blocky3DVarWidget");
        return pStaticClass;
    }


	void SetResult();
	void InitText(float X, float Y, float Z);
	struct FString CleanNumber(const struct FString& Input);
};


// Class BlockyLua.BlockyBlockDisplayWidget
// 0x0020 (0x0228 - 0x0208)
class UBlockyBlockDisplayWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0208(0x000C) MISSED OFFSET
	class UBlockyGraphData*                            BlockyGraphData;                                          // 0x0214(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BlockSize;                                                // 0x0218(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               Movable;                                                  // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0221(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockDisplayWidget");
        return pStaticClass;
    }

};


// Class BlockyLua.BlockyBlockDisplayWidget_Custom
// 0x0018 (0x0240 - 0x0228)
class UBlockyBlockDisplayWidget_Custom : public UBlockyBlockDisplayWidget
{
public:
	struct FString                                     BlockName;                                                // 0x0228(0x000C) (ZeroConstructor)
	TArray<struct FString>                             ParamName;                                                // 0x0234(0x000C) (ZeroConstructor)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockDisplayWidget_Custom");
        return pStaticClass;
    }


	void UpdateName(const struct FString& Name);
	void Init(TEnumAsByte<ECustomBlockType> Type);
};


// Class BlockyLua.BlockyBlockDisplayWidget_Variable
// 0x0008 (0x0230 - 0x0228)
class UBlockyBlockDisplayWidget_Variable : public UBlockyBlockDisplayWidget
{
public:
	bool                                               HasSettingIcon;                                           // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasCopyIcon;                                              // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsEditingDisplay;                                         // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x022B(0x0005) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockDisplayWidget_Variable");
        return pStaticClass;
    }


	void Init();
	struct FVector2D CalculateDrawSize();
};


// Class BlockyLua.BlockyBlockListWidget
// 0x0038 (0x0240 - 0x0208)
class UBlockyBlockListWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0208(0x0020) MISSED OFFSET
	class UBlockyBlockWindowWidget*                    HostWindow;                                               // 0x0228(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HorizontalMoveCheckDelta;                                 // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMoveCheckDelta;                                   // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOpenComment;                                            // 0x0234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	class UBlockyBlockListItemObject*                  PointAtListItem;                                          // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x023C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockListWidget");
        return pStaticClass;
    }

};


// Class BlockyLua.BlockyBlockWindowWidget
// 0x0008 (0x0210 - 0x0208)
class UBlockyBlockWindowWidget : public UUserWidget
{
public:
	class UBlockyBlockListWidget*                      WidgetToPaint;                                            // 0x0208(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x020C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockWindowWidget");
        return pStaticClass;
    }


	void SetWidgetVariableToShow(class UBlockyMenuItemObject_Variable* item_Variable);
	void SetWidgetCustomToShow(class UBlockyMenuItemObject_Custom* item_Custom);
	void SetWidgetCommonToShow(class UBlockyMenuItemObject* MenuItem);
	void SetWidgetBPToShow(class UUserWidget* Widget);
};


// Class BlockyLua.BlockyBooleanWidget
// 0x0018 (0x0220 - 0x0208)
class UBlockyBooleanWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0208(0x0014) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBooleanWidget");
        return pStaticClass;
    }


	void SetText(const struct FString& Value);
	void SetResult(const struct FString& displayValue, const struct FString& Value);
};


// Class BlockyLua.BlockyCategoryItemWidget
// 0x0028 (0x0230 - 0x0208)
class UBlockyCategoryItemWidget : public UUserWidget
{
public:
	struct FText                                       Name;                                                     // 0x0208(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               IsScrolling;                                              // 0x0214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0215(0x000B) MISSED OFFSET
	class UBlockyCategoryWidget*                       HostWidget;                                               // 0x0220(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  SubScrollBox;                                             // 0x0224(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0228(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyCategoryItemWidget");
        return pStaticClass;
    }


	void SetSelected(bool IsSelected);
	void OnScroll();
	void OnClick();
	void InitWithItemObject(class UBlockyCategoryItemObject* Item);
};


// Class BlockyLua.BlockyCategoryWidget
// 0x0020 (0x0228 - 0x0208)
class UBlockyCategoryWidget : public UUserWidget
{
public:
	class UClass*                                      CategoryItemWidgetType;                                   // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       CategoryName;                                             // 0x020C(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0218(0x0004) MISSED OFFSET
	class UScrollBox*                                  SubScrollBox;                                             // 0x021C(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CurrentScrollOffset;                                      // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0224(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyCategoryWidget");
        return pStaticClass;
    }


	class UPanelWidget* GetCategoryContainer();
};


// Class BlockyLua.BlockyColorPickerWidget
// 0x0030 (0x0238 - 0x0208)
class UBlockyColorPickerWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0208(0x0014) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        RecommendedColors;                                        // 0x0220(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        StoredColors;                                             // 0x022C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyColorPickerWidget");
        return pStaticClass;
    }


	void SetResult(const struct FLinearColor& Value);
	void SetColor(const struct FLinearColor& Value);
	void LoadColors();
};


// Class BlockyLua.BlockyEditor
// 0x0128 (0x0330 - 0x0208)
class UBlockyEditor : public UUserWidget
{
public:
	class UBlockyGraphData*                            GraphData;                                                // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     MainPanel;                                                // 0x020C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyEnumWidget*                           EnumWidget;                                               // 0x0210(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyStringWidget*                         StringWidget;                                             // 0x0214(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyBooleanWidget*                        BooleanWidget;                                            // 0x0218(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyFloatWidget*                          FloatWidget;                                              // 0x021C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlocky3DVarWidget*                          Var3DWidget;                                              // 0x0220(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyIntegerWidget*                        IntegerWidget;                                            // 0x0224(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyColorPickerWidget*                    ColorWidget;                                              // 0x0228(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyPresetWidget*                         PresetWidget;                                             // 0x022C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockySelectFromSceneWidget*                SelectFromSceneWidget;                                    // 0x0230(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UBlockyMenuItemObject*>               CurrentMenuItems;                                         // 0x0234(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UBlockyMenuItemObject*                       CurrentSerchMenuItem;                                     // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlockyBlockListItemObject*                  ListItemSerchAtPoint;                                     // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   AnimateMaterial;                                          // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DeleteUIDockingMaterial;                                  // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DeleteRangeUIDockingMaterial;                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           DeleteUIBgDockingMaterial;                                // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlockyMenuWidget*                           MenuWidget;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyCategoryWidget*                       CategoryWidget;                                           // 0x025C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyBlockWindowWidget*                    BlockWindowWidget;                                        // 0x0260(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyLogWidget*                            BlockyLogWidget;                                          // 0x0264(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyMenuItemWidget*                       CurrentMenuItemWidget;                                    // 0x0268(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<struct FString, class UBlockyBlockListItemObject*> TypeFilterItems;                                          // 0x026C(0x0050) (ZeroConstructor)
	TMap<struct FString, class UBlockyBlockListItemObject*> TypeFilterArrayItems;                                     // 0x02A8(0x0050) (ZeroConstructor)
	TArray<class UBlockyMenuItemObject_TypeFilter*>    TypeFilterMenus;                                          // 0x02E4(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x02F0(0x0040) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyEditor");
        return pStaticClass;
    }


	void UpdateTriggerGroups();
	bool TryBackToVariableOrCustomPanel();
	void ShowPresetAnimation(class UPresetDesc* PresetDesc);
	void SetWidgetBPToShow(class UUserWidget* Widget, bool HideCategory);
	void SetMenuWidget(class UBlockyMenuWidget* Widget);
	void SetCategoryWidget(class UBlockyCategoryWidget* Widget);
	void SetBlockLogWidget(class UBlockyLogWidget* Widget);
	void SetBlockListWidget(class UBlockyBlockWindowWidget* Widget);
	void ResetAsyncWidgetHandleMap();
	void OnUpdateUndoRedoState(bool HasUndoCommands, bool HasRedoCommands);
	void OnShowTips(const struct FText& Tips);
	void LoadWidgetAsync(const struct FString& WidgetName, const struct FString& WidgetPath, const struct FScriptDelegate& Delegate);
	class UMaterialInterface* LoadMaterialInterface(const struct FString& AnimationPath);
	void IsShowExplain(bool bFlag);
	void IsCloseComment(bool bFlag);
	float GetSaveCooldownDuration();
	struct FString GetLocaleString(const struct FString& KeyString);
	class UBlockyMenuItemObject* GetCurrentMenuItem();
	void CollectListItem(bool bCollect);
	void BP_OnShowTools(TArray<EBlockyBPToolButtonType> ButtonTypes);
	void AddChildBluckyWidget(class UUserWidget* Widget);
};


// Class BlockyLua.BlockyEnumWidget
// 0x0018 (0x0220 - 0x0208)
class UBlockyEnumWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0208(0x0014) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyEnumWidget");
        return pStaticClass;
    }


	void SetShowDisplayItems(TMap<struct FName, struct FText> Names);
	void SetResultWithName(const struct FName& Name);
};


// Class BlockyLua.BlockyFloatWidget
// 0x0018 (0x0220 - 0x0208)
class UBlockyFloatWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0208(0x0014) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyFloatWidget");
        return pStaticClass;
    }


	void SetText(const struct FString& Value);
	void SetResult(const struct FString& Value);
	struct FString CleanNumber(const struct FString& Input);
};


// Class BlockyLua.BlockyGraphWidget
// 0x0010 (0x0218 - 0x0208)
class UBlockyGraphWidget : public UUserWidget
{
public:
	class UBlockyGraphData*                            BlockyGraphData;                                          // 0x0208(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlockyEditor*                               HostEditor;                                               // 0x020C(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsOnTouch;                                                // 0x0210(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	class UDeleteBlockUI*                              DeleteBlockUI;                                            // 0x0214(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyGraphWidget");
        return pStaticClass;
    }


	struct FVector2D ViewPosToCanvasPos(const struct FVector2D& Postion);
	TArray<struct FText> UpdateVariableItemNames();
	void UpdateTriggerGroups();
	TArray<struct FText> UpdateCustomItemNames();
	void Undo();
	bool TryBackToVariableOrCustomPanel();
	void ShowTips(const struct FText& Tips);
	void ShowPresetParamPop();
	void SetViewScale(float inScale);
	void SetViewPosition(const struct FVector2D& ViewPosition);
	void SetMenuWidget(class UBlockyMenuWidget* Widget);
	void SetCurrentSubGraph(const struct FString& InName);
	void SetCategoryWidget(class UBlockyCategoryWidget* Widget);
	void SetBlockLogWidget(class UBlockyLogWidget* Widget);
	void SetBlockListWidget(class UBlockyBlockWindowWidget* Widget);
	struct FString SaveGraphToJsonText();
	TArray<unsigned char> SaveGraphToBin();
	struct FString SaveGlobalVarToJsonText();
	TArray<unsigned char> SaveGlobalVarToBin();
	void SaveCustom();
	TArray<unsigned char> SaveBlockyGraphToTemplate(class UBlockyGraph* BlockyGraph);
	void Save();
	void ReturnToPreviewGraph();
	void ReturnToMainGraph();
	void ResetJsonChangedFlag();
	void ResetGraph();
	void RemoveSubGraph(const struct FString& InName);
	void RefreshFont();
	void ReEditVariable(int Index);
	void Redo();
	void QuoteCustom();
	void Quote();
	void Paste();
	void OnCloseItemList();
	void LoadTemplateToBlockyGraph(bool IsCreateNewGraph, TArray<unsigned char>* TemplateAst);
	void LoadGraphFromJsonText(const struct FString& JsonStr);
	void LoadGraphFromBin(TArray<unsigned char> JsonStr);
	void LoadGlobalVarFromJsonText(const struct FString& JsonStr);
	void LoadGlobalVarFromBin(TArray<unsigned char> JsonStr);
	void Load();
	bool IsViewOverlap(const struct FVector2D& Position, const struct FVector2D& Size);
	bool IsFirstGraph();
	void GM_GenerateAllBlocks(int CombinedBlocksNum, int GraphBlocksNum, bool bNeedResetGraph);
	void GM_AddBlocks(TArray<struct FString> typeNames, int X, int Y);
	struct FVector2D GetViewSize();
	float GetViewScale();
	struct FVector2D GetViewPosition();
	bool GetJsonChangedFlag();
	void GetDeleteBlockUIRect(float InRectWidth);
	class UBlockyGraph* GetCurrentGraph();
	void FocusTo(class UBlockBase* TargetBlock);
	void FinishVariableEdit(bool bSaveVar, bool bReEdit);
	void FinishCustomEdit(bool bSave);
	void FinishBlockSetting(bool bSave);
	void Eject();
	void EditCustumBlockGraph();
	void EditCustom();
	void Disable();
	void DeleteVariableListItem(int Index);
	void DeleteSelected();
	void DeleteCustom();
	void DefineCustom();
	void Define();
	void Copy();
	void Comment();
	void CollectListItem(bool bCollect);
	void Clone();
	void ClearUndoRedoDatas();
	void ClearTextSizeCache();
	void ClearLog();
	struct FVector2D CanvasPosToViewPos(const struct FVector2D& Postion);
	void BlockyLog_Show(EBlockyLogMsgMode Mode, class UBlockBase* BlockSource, const struct FString& SlotID, const struct FString& Info);
	void AddSubGraph(const struct FString& InName, const struct FString& InType);
	class UBlockyGraph* AddGraph(const struct FString& InName, const struct FString& InType);
	void AddGlobalComment();
};


// Class BlockyLua.BlockyGroupItemWidget
// 0x0000 (0x0208 - 0x0208)
class UBlockyGroupItemWidget : public UUserWidget
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyGroupItemWidget");
        return pStaticClass;
    }

};


// Class BlockyLua.BlockyGroupWidget
// 0x0010 (0x0218 - 0x0208)
class UBlockyGroupWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0208(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyGroupWidget");
        return pStaticClass;
    }


	class UPanelWidget* GetGroupContainer();
	void AddGroupItem();
};


// Class BlockyLua.BlockyIntegerWidget
// 0x0020 (0x0228 - 0x0208)
class UBlockyIntegerWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0208(0x0014) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NegativeEnable;                                           // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0221(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyIntegerWidget");
        return pStaticClass;
    }


	void SetText(const struct FString& Value);
	void SetResult(const struct FString& Value);
	void SetNegativeEnable(bool Enable);
};


// Class BlockyLua.BlockyLogItemWidget
// 0x0028 (0x0230 - 0x0208)
class UBlockyLogItemWidget : public UUserWidget
{
public:
	class UBlockyLogWidget*                            LogWidget;                                                // 0x0208(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockBase*                                  BlockBase;                                                // 0x020C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BlockSlotId;                                              // 0x0210(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x14];                                      // 0x021C(0x0014) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLogItemWidget");
        return pStaticClass;
    }


	void SetShowWarn(const struct FString& Warn);
	void SetShowInfo(const struct FString& Info);
	void SetShowError(const struct FString& Error);
	void SetActiveWidgetIndex(int Index);
	void OnClickBtnToBlock();
	class UTextBlock* GetTextBlockWarn();
	class UTextBlock* GetTextBlockInfo();
	class UTextBlock* GetTextBlockError();
	int GetActiveWidgetIndex();
};


// Class BlockyLua.BlockyLogWidget
// 0x0020 (0x0228 - 0x0208)
class UBlockyLogWidget : public UUserWidget
{
public:
	class UClass*                                      LogItemWidgetType;                                        // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x020C(0x001C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLogWidget");
        return pStaticClass;
    }


	void ShowLog();
	void SetBtnWarnText(const struct FString& Warn);
	void SetBtnInfoText(const struct FString& Info);
	void SetBtnErrorText(const struct FString& Error);
	void OnClickWarnShow();
	void OnClickInfoShow();
	void OnClickErrorShow();
	void OnClickAllShow();
	class UPanelWidget* GetLogContainer();
	float GetItemTextWidth();
	struct FString GetBtnWarnText();
	struct FString GetBtnInfoText();
	struct FString GetBtnErrorText();
};


// Class BlockyLua.BlockyLuaLoopScrollBase
// 0x00F0 (0x0A10 - 0x0920)
class UBlockyLuaLoopScrollBase : public UScrollBox
{
public:
	bool                                               bDelayLoad;                                               // 0x0920(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0921(0x0003) MISSED OFFSET
	float                                              BlockyLuaEdgePadding;                                     // 0x0924(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            // 0x0928(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x0934(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeData;                                             // 0x0940(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xA4];                                      // 0x094C(0x00A4) MISSED OFFSET
	class UClass*                                      itemType;                                                 // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x09F4(0x0014) MISSED OFFSET
	class UCanvasPanel*                                CanvasPanel;                                              // 0x0A08(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBase");
        return pStaticClass;
    }


	void UserScrolled(float Offset);
	void SetItemType(class UClass* _ItemType);
	bool SetItemCount(int Count);
	void RemoveItem(int Index);
	bool RefreshItem(int Index);
	void RefreshAllItems();
	void Push();
	void Pop();
	void OnRefreshItem__DelegateSignature(class UWidget* Item, int Index);
	void OnItemCreated__DelegateSignature(class UWidget* Item, int Index);
	void OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key);
	void InsertItem(int Index);
	int GetWidgetIndex(class UWidget* Item);
	int GetItemCount();
	class UWidget* GetIndexOfWidget(int Index);
	bool ChangeData(int Index, const struct FString& Key);
	void CallTick(float DeltaTime);
	void AutoSize(bool bAutoSize);
};


// Class BlockyLua.BlockyLuaLoopScrollBase_MultiItem
// 0x0128 (0x0A48 - 0x0920)
class UBlockyLuaLoopScrollBase_MultiItem : public UScrollBox
{
public:
	bool                                               bDelayLoad;                                               // 0x0920(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0921(0x0003) MISSED OFFSET
	float                                              BlockyLuaEdgePadding;                                     // 0x0924(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            // 0x0928(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x0934(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChangeData;                                             // 0x0940(0x000C) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF4];                                      // 0x094C(0x00F4) MISSED OFFSET
	class UCanvasPanel*                                CanvasPanel;                                              // 0x0A40(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A44(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBase_MultiItem");
        return pStaticClass;
    }


	void UserScrolled(float Offset);
	void SetItemType(TArray<class UClass*> TypeArray);
	bool SetItemCount(int Count);
	void RemoveItem(int Index);
	bool RefreshItem(int Index);
	void RefreshAllItems();
	void Push(class UClass* Type);
	void Pop();
	void OnRefreshItem__DelegateSignature(class UWidget* Item, int Index);
	void OnItemCreated__DelegateSignature(class UWidget* Item, int Index);
	void OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key);
	void InsertItem(int Index, class UClass* Type);
	int GetWidgetIndex(class UWidget* Item);
	int GetItemCount();
	class UWidget* GetIndexOfWidget(int Index);
	void ClearItems();
	bool ChangeData(int Index, const struct FString& Key);
	void CallTick(float DeltaTime);
	void AutoSize(bool bAutoSize);
};


// Class BlockyLua.BlockyLuaLoopScrollBox
// 0x0008 (0x0A18 - 0x0A10)
class UBlockyLuaLoopScrollBox : public UBlockyLuaLoopScrollBase
{
public:
	float                                              Padding;                                                  // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignMagnetic;                                           // 0x0A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBox");
        return pStaticClass;
    }


	void ScrollToItem(int Index);
};


// Class BlockyLua.BlockyLuaLoopScrollBox_MultiItem
// 0x0078 (0x0AC0 - 0x0A48)
class UBlockyLuaLoopScrollBox_MultiItem : public UBlockyLuaLoopScrollBase_MultiItem
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0A48(0x0038) MISSED OFFSET
	TMap<class UClass*, float>                         WidgetPaddingMap;                                         // 0x0A80(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAlignMagnetic;                                           // 0x0ABC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0ABD(0x0003) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBox_MultiItem");
        return pStaticClass;
    }


	void ScrollToItem(int Index);
	void BP_UserScrolled(float Offset);
	bool BP_PreventScrollOutOfSize(bool bScroll);
	float BP_GetContentSize();
};


// Class BlockyLua.BlockyLuaLoopScrollGrid
// 0x0020 (0x0A30 - 0x0A10)
class UBlockyLuaLoopScrollGrid : public UBlockyLuaLoopScrollBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A10(0x0004) MISSED OFFSET
	struct FVector2D                                   Padding;                                                  // 0x0A14(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bAlignGrid;                                               // 0x0A1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignAnimation;                                          // 0x0A1D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x12];                                      // 0x0A1E(0x0012) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollGrid");
        return pStaticClass;
    }


	void ScrollToItem(int Index);
};


// Class BlockyLua.BlockyMenuItemWidget
// 0x0018 (0x0220 - 0x0208)
class UBlockyMenuItemWidget : public UUserWidget
{
public:
	struct FText                                       Name;                                                     // 0x0208(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UBlockyMenuWidget*                           HostWidget;                                               // 0x0214(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBlockyCategoryItemWidget*                   CurrentCategoryItemWidget;                                // 0x0218(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x021C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyMenuItemWidget");
        return pStaticClass;
    }


	void SetSelected(bool IsSelected);
	void OnClick();
	void InitWithItemObject(class UBlockyMenuItemObject* Item);
};


// Class BlockyLua.BlockyMenuWidget
// 0x0008 (0x0210 - 0x0208)
class UBlockyMenuWidget : public UUserWidget
{
public:
	class UBlockyGraphData*                            GraphWidget;                                              // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x020C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyMenuWidget");
        return pStaticClass;
    }


	bool SelectMenu(class UBlockyMenuItemWidget* MenuItemWidget);
	void OnAddMenuItemWidget(class UBlockyMenuItemWidget* MenuItemWidget);
	class UPanelWidget* GetMenuContainer();
};


// Class BlockyLua.BlockyPresetItemWidget
// 0x0008 (0x0210 - 0x0208)
class UBlockyPresetItemWidget : public UUserWidget
{
public:
	class UBlockyPresetWidget*                         Host;                                                     // 0x0208(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  SubScrollBox;                                             // 0x020C(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyPresetItemWidget");
        return pStaticClass;
    }


	void SetPresetDesc_BP(class UPresetDesc* PresetDesc);
	void SetImageShowIcon(class UImage* Image);
};


// Class BlockyLua.BlockyPresetWidget
// 0x0028 (0x0230 - 0x0208)
class UBlockyPresetWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0208(0x0014) MISSED OFFSET
	class UBlockyEditor*                               HostWidget;                                               // 0x021C(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UButton*                                     Button_FilterAction;                                      // 0x0220(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     SlotTypeName;                                             // 0x0224(0x000C) (ZeroConstructor)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyPresetWidget");
        return pStaticClass;
    }


	void SetResult(class UPresetDesc* Value);
	void SetPresets(TArray<class UPresetDesc*> Presets);
	void ResetMenuItem();
	struct FString OnFilterBtnClick();
	void LoopScrollBoxFilterStr(const struct FString& filter);
	void LoopScrollBoxFilterByTag(TMap<int, struct FIntArrayWrapper> Tags);
	void InitPresets();
	class UScrollBox* GetLoopScrollBox();
	bool GetIsIconWidget();
	void ClearSearchText();
};


// Class BlockyLua.BlockyRichTextBlock
// 0x0260 (0x0358 - 0x00F8)
class UBlockyRichTextBlock : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	struct FScriptDelegate                             TextDelegate;                                             // 0x0100(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0110(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x0150(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x0160(0x000C) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x1EC];                                     // 0x016C(0x01EC) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyRichTextBlock");
        return pStaticClass;
    }


	void SetText(const struct FText& InText);
	struct FText GetText();
};


// Class BlockyLua.BlockySearchResultPanel
// 0x0098 (0x02A0 - 0x0208)
class UBlockySearchResultPanel : public UUserWidget
{
public:
	float                                              HorizontalMoveCheckDelta;                                 // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalMoveCheckDelta;                                   // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhileRefreshBlockSizeY;                                   // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDragging;                                               // 0x0214(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHorizontalMove;                                         // 0x0215(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0216(0x0002) MISSED OFFSET
	struct FVector2D                                   TouchStartPosition;                                       // 0x0218(0x0008) (BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   PointAtOffset;                                            // 0x0220(0x0008) (BlueprintVisible, IsPlainOldData)
	int                                                CurrentCategoryIndex;                                     // 0x0228(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                YOffset;                                                  // 0x022C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalHeight_Blocks;                                       // 0x0230(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalHeight_Graphs;                                       // 0x0234(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalHeight_GraphsTitle;                                  // 0x0238(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ViewHeight;                                               // 0x023C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                totalHeight;                                              // 0x0240(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedUpdateTotalHeight_Graphs;                            // 0x0244(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0245(0x0003) MISSED OFFSET
	class UBlockyBlockListItemObject*                  ListItemAtPoint;                                          // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UBlockyMenuItemObject_Search> FoundResults;                                             // 0x024C(0x0008) (ZeroConstructor, IsPlainOldData)
	class USpacer*                                     BlocksContainer;                                          // 0x0254(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBlockyLuaLoopScrollBox_MultiItem*           GraphBlocksContainer;                                     // 0x0258(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      GraphBlocksWidgetType;                                    // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GraphItemBlockWidgetType;                                 // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlockyGraphData*                            GraphData;                                                // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UScrollBox*                                  TabContainer;                                             // 0x0268(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShowComment;                                             // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UBlockyGraph>                 LastSelectedGraph;                                        // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UBlockBase>                   LastSelectedBlock;                                        // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBlockyGraph*>                        CollapsedGraphs;                                          // 0x0280(0x000C) (ZeroConstructor)
	TArray<class UObject*>                             ItemObjectList;                                           // 0x028C(0x000C) (ZeroConstructor)
	ESearchResultVisibleType                           SearchResultVisibleType;                                  // 0x0298(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0299(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResultPanel");
        return pStaticClass;
    }


	void UpdateGraphContentSize();
	void ToggleGraphResults(class UBlockyGraph* InGraph);
	void ScrollToCategory(int CategoryIndex, bool GraphCategory);
	void RefreshGraphBlocksWidgets();
	void OnGraphBlocksCreated(class UWidget* Widget, int Index);
	void FocusToBlock(class UBlockyGraph* InGraph, class UBlockBase* InBlock);
	void FilterOutSearchResultToShow(ESearchResultVisibleType VisibleType);
	bool BP_ScrollYOffset(int DeltaY);
};


// Class BlockyLua.BlockySearchResults_GraphItemWidget
// 0x0040 (0x0248 - 0x0208)
class UBlockySearchResults_GraphItemWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0208(0x0004) MISSED OFFSET
	struct FString                                     SearchingStr;                                             // 0x020C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     BlockDisplayString;                                       // 0x0218(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TWeakObjectPtr<class UBlockyGraph>                 BlockGraph;                                               // 0x0224(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TWeakObjectPtr<class UBlockBase>                   bLock;                                                    // 0x022C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlockySearchResultPanel*                    HostResultPanel;                                          // 0x0234(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsDragging;                                              // 0x0238(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	class UImage*                                      BlockIcon;                                                // 0x023C(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBlockyRichTextBlock*                        TextBlock_BlockDisplay;                                   // 0x0240(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0244(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResults_GraphItemWidget");
        return pStaticClass;
    }


	void OnClickedBlock();
	void OnBlockWidgetSelected(bool bSelected);
	struct FString MarkSearchingStringWithColor(const struct FString& InputString, const struct FString& Target, const struct FString& ColorString);
	bool IsSearchUseCase();
	struct FString GetKeyWordColor();
};


// Class BlockyLua.BlockySearchResults_GraphWidget
// 0x0020 (0x0228 - 0x0208)
class UBlockySearchResults_GraphWidget : public UUserWidget
{
public:
	struct FString                                     GraphDisplayName;                                         // 0x0208(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UBlockySearchResultPanel*                    HostResultPanel;                                          // 0x0214(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UBlockyGraph>                 BlockGraph;                                               // 0x0218(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDragging;                                              // 0x0220(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResults_GraphWidget");
        return pStaticClass;
    }


	void ToggleGraphResultsCollapse();
	void OnSetGraphResultsCollapse(bool InCollapse);
	void OnRefreshDisplayNameView(const struct FString& InGraphDisplayName);
};


// Class BlockyLua.BlockySearchResultsTab
// 0x0018 (0x0220 - 0x0208)
class UBlockySearchResultsTab : public UUserWidget
{
public:
	int                                                TabIndex;                                                 // 0x0208(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FText                                       TabDisplayName;                                           // 0x020C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	class UBlockySearchWidget*                         SearchWidget;                                             // 0x0218(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x021C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResultsTab");
        return pStaticClass;
    }


	void OnSetSelected(bool bSelected);
};


// Class BlockyLua.BlockySearchWidget
// 0x00E8 (0x02F0 - 0x0208)
class UBlockySearchWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0208(0x0038) MISSED OFFSET
	TMap<class UBlockyCategoryItemObject*, bool>       CategoriesVisibility;                                     // 0x0240(0x0050) (ZeroConstructor)
	TMap<class UBlockyBlockListItemObject*, bool>      BlockItemsVisibility;                                     // 0x027C(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02B8(0x0004) MISSED OFFSET
	class UScrollBox*                                  TabContainer;                                             // 0x02BC(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBlockySearchResultPanel*                    SearchResultPanel;                                        // 0x02C0(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FText                                       ContentTabText;                                           // 0x02C4(0x000C) (Edit)
	class UClass*                                      SearchResultsTabType;                                     // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlockyMenuItemObject_Search*                SearchResults;                                            // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UBlockyGraphWidget*                          HostGraphWidget;                                          // 0x02D8(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESearchResultVisibleType                           SearchResultVisibleType;                                  // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	TArray<struct FString>                             SearchHistories;                                          // 0x02E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchWidget");
        return pStaticClass;
    }


	void StoreLastSelectedMenuItems(bool OverrideLastData);
	bool ShouldCommitString(const struct FText& Value);
	void SetGraphWidget(class UBlockyGraphWidget* InGraphWidget);
	bool SearchMatchingResults(const struct FString& SearchStr);
	void ScrollToTabContent(class UBlockySearchResultsTab* NewSelectedTab);
	void SaveSearchHistories();
	void RevertLastSelectedMenuItem();
	void RefreshTabContainerView();
	void RefreshSearchResultsView();
	void LoadSearchHistories();
	bool IsSearchUseCase();
	bool HasMenuSelected();
	bool HasAnySearchResults();
	bool HasAnyHistory();
	int GetTotalSearchedNums();
	TArray<struct FString> GetSearchHistories();
	int GetHistoryStoreNum();
	int GetHistoryNums();
	int GetGraphSearchedNums();
	int GetBlockSearchedNums();
	void FilterSearchResultVisible(ESearchResultVisibleType InSearchResultVisibleType);
	void EmptyListItemSeleceted();
	void DoSearching(const struct FString& SearchStr);
	void ClearSearchHistories();
	void ClearMenuSelectionStore();
	void AddSearchHistory(const struct FString& NewHistory);
};


// Class BlockyLua.BlockySelectFromSceneWidget
// 0x0038 (0x0240 - 0x0208)
class UBlockySelectFromSceneWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0208(0x0014) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPresetDesc*                                 PresetDesc;                                               // 0x0220(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UObjectDesc*>                         OtherPresetDescs;                                         // 0x0224(0x000C) (ZeroConstructor)
	struct FText                                       DefaultShowName;                                          // 0x0230(0x000C) (Edit, BlueprintVisible)
	class UObjectDesc*                                 ObjectDesc;                                               // 0x023C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySelectFromSceneWidget");
        return pStaticClass;
    }


	void SetPreset(class UPresetDesc* Value);
	void SetObjectDesc(class UObjectDesc* Value);
	bool SetImageShowIcon(class UImage* Image);
	void OnReceiveCustomSelectionResult(class UObjectDesc* Value);
	void CallSelectScenePreset();
};


// Class BlockyLua.BlockyStringWidget
// 0x0060 (0x0268 - 0x0208)
class UBlockyStringWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0208(0x0038) MISSED OFFSET
	class UBlockBase*                                  LinkedSlotHost;                                           // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0244(0x0014) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TextBoxSize;                                              // 0x025C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               IsFinishedInput;                                          // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0265(0x0003) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyStringWidget");
        return pStaticClass;
    }


	struct FText StrDelEnt(const struct FText& Value);
	void StoreSlotDataWithSerialId(int SerialId);
	void SetText(const struct FString& Value);
	void SetResult(const struct FString& Value, int SerialId);
};


// Class BlockyLua.CustomizeEditableText
// 0x0088 (0x0470 - 0x03E8)
class UCustomizeEditableText : public UEditableText
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03E8(0x0060) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextPreCommitted;                                       // 0x0448(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextReceiveCommitted;                                   // 0x0454(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                TextCountLimit;                                           // 0x0460(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SerialId;                                                 // 0x0464(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               LimitEmojiInput;                                          // 0x0468(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsReceiveCheckStringResult;                               // 0x0469(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x046A(0x0006) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.CustomizeEditableText");
        return pStaticClass;
    }


	void SetNewText(const struct FText& InText);
	void ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OpenKeyBoard();
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId);
	struct FText GetValidText();
};


// Class BlockyLua.CustomizeEditableTextBox
// 0x0088 (0x0AF0 - 0x0A68)
class UCustomizeEditableTextBox : public UEditableTextBox
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x0A68(0x0064) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextPreCommitted;                                       // 0x0ACC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextReceiveCommitted;                                   // 0x0AD8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                TextCountLimit;                                           // 0x0AE4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SerialId;                                                 // 0x0AE8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               LimitEmojiInput;                                          // 0x0AEC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsReceiveCheckStringResult;                               // 0x0AED(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0AEE(0x0002) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.CustomizeEditableTextBox");
        return pStaticClass;
    }


	void SetNewText(const struct FText& InText);
	void ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId);
	struct FText GetValidText();
};


// Class BlockyLua.CustomizeMultiLineEditableTextBox
// 0x0088 (0x0CB0 - 0x0C28)
class UCustomizeMultiLineEditableTextBox : public UMultiLineEditableTextBox
{
public:
	unsigned char                                      UnknownData00[0x64];                                      // 0x0C28(0x0064) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextPreCommitted;                                       // 0x0C8C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextReceiveCommitted;                                   // 0x0C98(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                TextCountLimit;                                           // 0x0CA4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SerialId;                                                 // 0x0CA8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               LimitEmojiInput;                                          // 0x0CAC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsReceiveCheckStringResult;                               // 0x0CAD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0CAE(0x0002) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.CustomizeMultiLineEditableTextBox");
        return pStaticClass;
    }


	void SetNewText(const struct FText& InText);
	void ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId);
	struct FText GetValidText();
	void CheckStringValidProcess(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
};


// Class BlockyLua.DeleteBlockUI
// 0x003C (0x0058 - 0x001C)
class UDeleteBlockUI : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x001C(0x0020) MISSED OFFSET
	class UBrushData*                                  BrushBG;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0040(0x000C) MISSED OFFSET
	bool                                               IsInArrange;                                              // 0x004C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x004D(0x000B) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.DeleteBlockUI");
        return pStaticClass;
    }

};


// Class BlockyLua.BlockyAutoScrollBox
// 0x0020 (0x0940 - 0x0920)
class UBlockyAutoScrollBox : public UScrollBox
{
public:
	EBLOCKYLUA_AUTO_SCROLL_TYPE                        AutoScrollType;                                           // 0x0920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0921(0x0003) MISSED OFFSET
	float                                              RollSpeed;                                                // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayTimeWhenStart;                                        // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StayTimeWhenEnd;                                          // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0930(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyAutoScrollBox");
        return pStaticClass;
    }


	void Tick(float DeltaTime);
	void SetTextPadding(class UTextBlock* Text, class UScrollBoxSlot* boxSlot, float totalLength);
};


// Class BlockyLua.BlockyLoopScrollBase
// 0x0120 (0x0A40 - 0x0920)
class UBlockyLoopScrollBase : public UScrollBox
{
public:
	bool                                               bDelayLoad;                                               // 0x0920(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0921(0x0003) MISSED OFFSET
	float                                              BlockyLuaEdgePadding;                                     // 0x0924(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            // 0x0928(0x000C) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x0934(0x000C) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnChangeData;                                             // 0x0940(0x000C) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0xCC];                                      // 0x094C(0x00CC) MISSED OFFSET
	class UBlockyPresetWidget*                         Host;                                                     // 0x0A18(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A1C(0x0004) MISSED OFFSET
	class UClass*                                      ItemString;                                               // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemIcon;                                                 // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0A28(0x0010) MISSED OFFSET
	class UCanvasPanel*                                CanvasPanel;                                              // 0x0A38(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0A3C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLoopScrollBase");
        return pStaticClass;
    }


	void UserScrolled(float Offset);
	void SetItemType(class UClass* _ItemType);
	bool SetItemCount(int Count);
	void RemoveItem(int Index);
	bool RefreshItem(int Index);
	void RefreshAllItems();
	void OnRefreshItem__DelegateSignature(class UWidget* Item, int Index);
	void OnItemCreated__DelegateSignature(class UWidget* Item, int Index);
	void OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key);
	void LoopScrollBoxFilterStr(const struct FString& filter);
	void LoopScrollBoxFilterByTag(TMap<int, struct FIntArrayWrapper> Tags);
	void InsertItem(int Index);
	int GetWidgetIndex(class UWidget* Item);
	TArray<class UWidget*> GetItems();
	int GetItemCount();
	class UWidget* GetIndexOfWidget(int Index);
	bool ChangeData(int Index, const struct FString& Key);
	void AutoSize(bool bAutoSize);
};


// Class BlockyLua.BlockyLoopScrollBox
// 0x0030 (0x0A70 - 0x0A40)
class UBlockyLoopScrollBox : public UBlockyLoopScrollBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A40(0x0004) MISSED OFFSET
	struct FVector2D                                   IconItemSize;                                             // 0x0A44(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StringItemPadding;                                        // 0x0A4C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   IconItemPadding;                                          // 0x0A54(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bAlignMagnetic;                                           // 0x0A5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0A5D(0x0013) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLoopScrollBox");
        return pStaticClass;
    }


	void ScrollToItem(int Index);
};


// Class BlockyLua.BlockyLoopScrollGrid
// 0x0020 (0x0A60 - 0x0A40)
class UBlockyLoopScrollGrid : public UBlockyLoopScrollBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A40(0x0004) MISSED OFFSET
	struct FVector2D                                   Padding;                                                  // 0x0A44(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bAlignGrid;                                               // 0x0A4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignAnimation;                                          // 0x0A4D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x12];                                      // 0x0A4E(0x0012) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLoopScrollGrid");
        return pStaticClass;
    }


	void ScrollToItem(int Index);
};


}

