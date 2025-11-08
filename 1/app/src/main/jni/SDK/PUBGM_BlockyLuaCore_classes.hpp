#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:34 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BlockyLuaCore.BlockBase
// 0x015C (0x0178 - 0x001C)
class UBlockBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UBlockBase*                                  ParentBlock;                                              // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBlockBase*                                  CommentBlock;                                             // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0028(0x0024) MISSED OFFSET
	class UBlockyGraphData*                            HostWidget;                                               // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	class UFunctionDesc*                               FunctionDesc;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // 0x005C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0xFC];                                      // 0x0068(0x00FC) MISSED OFFSET
	struct FString                                     QuoteVariableName;                                        // 0x0164(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsDisable;                                               // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0171(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockBase");
        return pStaticClass;
    }


	void SetIsDisable(bool Disable);
	bool IsEvent();
	struct FVector2D GetCenterPos();
};


// Class BlockyLuaCore.Executeable
// 0x0160 (0x02D8 - 0x0178)
class UExecuteable : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0x114];                                     // 0x0178(0x0114) MISSED OFFSET
	TMap<struct FString, struct FBlockParam>           BlockParams;                                              // 0x028C(0x0050) (BlueprintVisible, ZeroConstructor)
	TArray<class UNamedVar*>                           FuncVars;                                                 // 0x02C8(0x000C) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Executeable");
        return pStaticClass;
    }


	bool SupportFuncVar();
	void ReEditFuncVar(class UNamedVar* var);
	void DeleteFuncVar(class UNamedVar* var);
	void CreateFuncVar();
};


// Class BlockyLuaCore.AddArrayElement
// 0x01E0 (0x04B8 - 0x02D8)
class UAddArrayElement : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x02D8(0x01E0) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.AddArrayElement");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.Arithmetic
// 0x0318 (0x0490 - 0x0178)
class UArithmetic : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0x318];                                     // 0x0178(0x0318) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Arithmetic");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.ArrayLength
// 0x00F8 (0x0270 - 0x0178)
class UArrayLength : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0178(0x00F0) MISSED OFFSET
	class UBrushData*                                  BrushBGSelected;                                          // 0x0268(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x026C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ArrayLength");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.ExpressionBase
// 0x0000 (0x0020 - 0x0020)
class UExpressionBase : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ExpressionBase");
        return pStaticClass;
    }


	static void ReleaseExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateExpressionBase();
};


// Class BlockyLuaCore.ArrayLengthExpression
// 0x0000 (0x0020 - 0x0020)
class UArrayLengthExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ArrayLengthExpression");
        return pStaticClass;
    }


	static void SetTarget(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target);
	static struct FBlockyLuaHandle GetTarget(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateArrayLengthExpression();
};


// Class BlockyLuaCore.VarBase
// 0x0000 (0x0178 - 0x0178)
class UVarBase : public UBlockBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.VarBase");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.NamedVar
// 0x0218 (0x0390 - 0x0178)
class UNamedVar : public UVarBase
{
public:
	struct FText                                       Name;                                                     // 0x0178(0x000C) (Edit, BlueprintVisible)
	struct FString                                     NameInCode;                                               // 0x0184(0x000C) (ZeroConstructor)
	bool                                               IsValueValid;                                             // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInitColorLoad;                                          // 0x0191(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0192(0x0002) MISSED OFFSET
	TArray<class UNamedVar*>                           CopiedChildVarCache;                                      // 0x0194(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x150];                                     // 0x01A0(0x0150) MISSED OFFSET
	bool                                               bIsArray;                                                 // 0x02F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	struct FString                                     InitValueString;                                          // 0x02F4(0x000C) (ZeroConstructor)
	class UColorDesc*                                  ColorDesc;                                                // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UColorDesc*>                          ArrayColorDesc;                                           // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                NowColorArrayIdx;                                         // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NowColorIsArray;                                          // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	class UNamedVar*                                   Source;                                                   // 0x0318(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x40];                                      // 0x031C(0x0040) MISSED OFFSET
	class UBrushData*                                  CopyBrush;                                                // 0x035C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.NamedVar");
        return pStaticClass;
    }


	void UpdateColor(const struct FLinearColor& Color);
	void SetNameVarColor(const struct FLinearColor& Color);
	void SetIsArray(bool IsArray);
	void SetInitValueString(const struct FString& Value);
	void SetDefiner(class UVarDefiner* Definer);
	void SetAccessType(TEnumAsByte<EBlockyAccessType> Access);
	bool IsGlobalVar();
	bool IsCustomColor();
	bool IsArray();
	void InitColorDesc();
	class UColorDesc* GetNameVarColorDesc(int idx, bool IsArray);
	struct FLinearColor GetNameVarColor(int idx, bool IsArray);
	struct FString GetInitValueString();
	class UVarDefiner* GetDefiner();
	struct FString GetColorStr(int idx, bool IsArray);
	TEnumAsByte<EBlockyAccessType> GetAccessType();
	void CallCustomSelectObject(int idx, bool IsArray);
	void AddColorToArray();
};


// Class BlockyLuaCore.ArrayNamedVar
// 0x0000 (0x0390 - 0x0390)
class UArrayNamedVar : public UNamedVar
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ArrayNamedVar");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BinaryOperatorExpression
// 0x0000 (0x0020 - 0x0020)
class UBinaryOperatorExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BinaryOperatorExpression");
        return pStaticClass;
    }


	static void SetWithParentheses(const struct FBlockyLuaHandle& ptr, bool Value);
	static void SetRight(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetOperation(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyBinaryOperation> BlockyOp);
	static void SetLeft(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static bool GetWithParentheses(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetRight(const struct FBlockyLuaHandle& ptr);
	static TEnumAsByte<EBlockyBinaryOperation> GetOperation(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetLeft(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateBinaryOperatorExpression();
};


// Class BlockyLuaCore.CategoryDefiner
// 0x006C (0x0088 - 0x001C)
class UCategoryDefiner : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     Menu;                                                     // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FString>               ShowNameMap;                                              // 0x0034(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ShowIcon;                                                 // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ShowIconSelected;                                         // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CategoryDefiner");
        return pStaticClass;
    }


	struct FString GetCurrentLocateShowName();
};


// Class BlockyLuaCore.BlackboardDefiner
// 0x0010 (0x0098 - 0x0088)
class UBlackboardDefiner : public UCategoryDefiner
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlackboardDefiner");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyCommandData
// 0x0004 (0x0020 - 0x001C)
class UBlockyCommandData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyCommandData");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyAddOrRemoveFromSlotCommandData
// 0x0098 (0x00B8 - 0x0020)
class UBlockyAddOrRemoveFromSlotCommandData : public UBlockyCommandData
{
public:
	struct FBlockPoint                                 Position;                                                 // 0x0020(0x0008)
	class UBlockBase*                                  SlotHostBlock;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x002C(0x0018) MISSED OFFSET
	class UBlockBase*                                  ConvertBlock;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0048(0x0014) MISSED OFFSET
	class UBlockBase*                                  ReplacedBlock;                                            // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBlockBase*                                  ReplacedBlockSlotHostBlock;                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x54];                                      // 0x0064(0x0054) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyAddOrRemoveFromSlotCommandData");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyAddOrRemoveFromTopCommandData
// 0x0040 (0x0060 - 0x0020)
class UBlockyAddOrRemoveFromTopCommandData : public UBlockyCommandData
{
public:
	class UBlockBase*                                  TouchBlock;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FBlockPoint                                 Position;                                                 // 0x0024(0x0008)
	class UBlockBase*                                  TouchBlockHostSlotHost;                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0030(0x0014) MISSED OFFSET
	class UBlockBase*                                  SlotHostBlock;                                            // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyAddOrRemoveFromTopCommandData");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyBindCommentCommandData
// 0x0010 (0x0030 - 0x0020)
class UBlockyBindCommentCommandData : public UBlockyCommandData
{
public:
	struct FBlockPoint                                 Position;                                                 // 0x0020(0x0008)
	class UCommentBlock*                               CommentBlock;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyBindCommentCommandData");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyBlockListItemObject
// 0x0084 (0x00A0 - 0x001C)
class UBlockyBlockListItemObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     KeyName;                                                  // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SubGraphName;                                             // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NameInCode;                                               // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBlockPoint                                 Size;                                                     // 0x0058(0x0008) (Edit, BlueprintVisible)
	struct FBlockPoint                                 TextSize;                                                 // 0x0060(0x0008) (Edit, BlueprintVisible)
	struct FString                                     BlockClassName;                                           // 0x0068(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0074(0x0008) MISSED OFFSET
	bool                                               Visible;                                                  // 0x007C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	class UFunctionDesc*                               FunctionDesc;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCollect;                                                 // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1B];                                      // 0x0085(0x001B) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyBlockListItemObject");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyBlockListItemObject_Custom
// 0x0008 (0x00A8 - 0x00A0)
class UBlockyBlockListItemObject_Custom : public UBlockyBlockListItemObject
{
public:
	class UCustomConfig*                               CustomConfig;                                             // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyBlockListItemObject_Custom");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyBlockListItemObject_Preset
// 0x0148 (0x01E8 - 0x00A0)
class UBlockyBlockListItemObject_Preset : public UBlockyBlockListItemObject
{
public:
	class UPresetDesc*                                 SourcePreset;                                             // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x144];                                     // 0x00A4(0x0144) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyBlockListItemObject_Preset");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyBlockListItemObject_Variable
// 0x0008 (0x00A8 - 0x00A0)
class UBlockyBlockListItemObject_Variable : public UBlockyBlockListItemObject
{
public:
	class UNamedVar*                                   SourceVar;                                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyBlockListItemObject_Variable");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyCategoryItemObject
// 0x0074 (0x0090 - 0x001C)
class UBlockyCategoryItemObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     Type;                                                     // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MenuType;                                                 // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UBlockyBlockListItemObject*>          Items;                                                    // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UBlockyBlockListItemObject*>          AddItems;                                                 // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UBlockyBlockListItemObject*>          DelItems;                                                 // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UPresetDesc*>                         Presets;                                                  // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Visible;                                                  // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowNum;                                                  // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	class UBrushData*                                  Brush;                                                    // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBrushData*                                  BrushSelected;                                            // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x007C(0x0008) MISSED OFFSET
	class UBlackboardDefiner*                          Blackboard;                                               // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayerBlackboard;                                      // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyCategoryItemObject");
        return pStaticClass;
    }


	struct FSlateBrush GetSelectedIconBrush();
	struct FSlateBrush GetIconBrush();
};


// Class BlockyLuaCore.BlockyCommand
// 0x00C4 (0x00E0 - 0x001C)
class UBlockyCommand : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA4];                                      // 0x001C(0x00A4) MISSED OFFSET
	class UBlockyCommandData*                          UndoData;                                                 // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBlockyCommandData*                          RedoData;                                                 // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBlockyGraph*                                Graph;                                                    // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UBlockyCommand*>                      AdditionCommands;                                         // 0x00CC(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyCommand");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyDeleteCommandData
// 0x0078 (0x0098 - 0x0020)
class UBlockyDeleteCommandData : public UBlockyCommandData
{
public:
	struct FBlockPoint                                 Position;                                                 // 0x0020(0x0008)
	class UBlockBase*                                  NextBlock;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x002C(0x0014) MISSED OFFSET
	class UBlockBase*                                  HostSlotBlock;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x0044(0x0054) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyDeleteCommandData");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyEditorInterface
// 0x0000 (0x0020 - 0x0020)
class UBlockyEditorInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyEditorInterface");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyGraph
// 0x00D4 (0x00F0 - 0x001C)
class UBlockyGraph : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Type;                                                     // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TemplateName;                                             // 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description;                                              // 0x005C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CategoryMode;                                             // 0x0068(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CapturePath;                                              // 0x0074(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     JsonPath;                                                 // 0x0080(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bCanBeDuplicated;                                         // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDisable;                                               // 0x008D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	TArray<class UBlockBase*>                          RootBlocks;                                               // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UNamedVar*>                           LocalVars;                                                // 0x009C(0x000C) (ZeroConstructor)
	int                                                CurrentVisibleBlockNum;                                   // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00AC(0x0008) MISSED OFFSET
	class UCanvasRenderTarget2D*                       RenderTarget;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ViewPosition;                                             // 0x00B8(0x0008) (BlueprintVisible, IsPlainOldData)
	struct FBlockPoint                                 ViewSize;                                                 // 0x00C0(0x0008) (BlueprintVisible)
	float                                              ViewScale;                                                // 0x00C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x24];                                      // 0x00CC(0x0024) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyGraph");
        return pStaticClass;
    }


	void UpdateCustomBlockName();
	void TryAdjustingBlockIntoView(class UBlockyGraphData* GraphData);
	void SetIsDisable(bool Disable);
	void SaveGraphToFile(const struct FString& Filename, bool IsNewFile);
	bool SaveGraphAsTemplate(TArray<unsigned char>* OutData);
	void LoadGraphFromTemplate(TArray<unsigned char> Data);
	bool IsCustomTemplateGraph();
	bool IsCustomGraph();
	bool IsBasicTemplateGraph();
	int GetTotalBlockNum();
	void CaptureScreenShot(class UUserWidget* Widget);
	bool CanSaveAsTemplate(struct FString* OutFailedReason);
	bool CanBeRemove(class UBlockyGraphData* GraphData);
	bool CanBeDuplicated();
};


// Class BlockyLuaCore.BlockyGraphWidgetInterface
// 0x0000 (0x0020 - 0x0020)
class UBlockyGraphWidgetInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyGraphWidgetInterface");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyGraphData
// 0x0424 (0x0440 - 0x001C)
class UBlockyGraphData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x001C(0x0008) MISSED OFFSET
	struct FVector2D                                   ViewPosition;                                             // 0x0024(0x0008) (BlueprintVisible, IsPlainOldData)
	struct FBlockPoint                                 ViewSize;                                                 // 0x002C(0x0008) (BlueprintVisible)
	float                                              ViewScale;                                                // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
	struct FVector2D                                   DisplayBlockSize;                                         // 0x003C(0x0008) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x80];                                      // 0x0044(0x0080) MISSED OFFSET
	bool                                               bShowDeleteBlockUI;                                       // 0x00C4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	class UNamedVar*                                   EditingVar;                                               // 0x00C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UNamedVar*>                           GlobalVars;                                               // 0x00CC(0x000C) (ZeroConstructor)
	class UCustomConfig*                               EditingCustomConfig;                                      // 0x00D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FGuid, class UCustomConfig*>           TemplateCustomConfigs;                                    // 0x00DC(0x0050) (ZeroConstructor)
	class UExecuteable*                                CurrExeBlock;                                             // 0x0118(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExecuteable*                                EditingExeBlock;                                          // 0x011C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UBlockyGraph*>                        SubBlockyGraphs;                                          // 0x0120(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UBlockyGraph*>                        BlockyGraphsCallStack;                                    // 0x012C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             SearchHistories;                                          // 0x0138(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Name;                                                     // 0x0144(0x000C)
	class UBlockBase*                                  CurrentPutSlotHostBlock;                                  // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x14];                                      // 0x0154(0x0014) MISSED OFFSET
	class UBlockBase*                                  CurrentPutSlotReplacedBlock;                              // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBlockBase*                                  CurrentTopPutBlock;                                       // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0170(0x0004) MISSED OFFSET
	class UBlockBase*                                  CurrentSettingBlock;                                      // 0x0174(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USelectionData*                              CurrentSelection;                                         // 0x0178(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USelectionData*                              CurrentPointAt;                                           // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UExecuteablePreview*                         BlockPreview;                                             // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSaveProgress;                                           // 0x0184(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               IsGraphDirty;                                             // 0x0190(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsLoading;                                                // 0x0191(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xA];                                       // 0x0192(0x000A) MISSED OFFSET
	class UBrushData*                                  DefaultRectBrush;                                         // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   PreViewMaterial;                                          // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBrushData*                                  PreViewBrush;                                             // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBrushData*                                  AnimateBrush;                                             // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DeleteUIDynamicMaterial;                                  // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DeleteRangeUIDynamicMaterial;                             // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DeleteUIBgDynamicMaterial;                                // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBrushData*                                  DeleteRangeUIDockingBrush;                                // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBrushData*                                  DeleteUIDockingBrush;                                     // 0x01BC(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBrushData*                                  DeleteUIBgBrush;                                          // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1C];                                      // 0x01C4(0x001C) MISSED OFFSET
	class UBlockBase*                                  TouchBlockHostSlotHost;                                   // 0x01E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0xAC];                                      // 0x01E4(0x00AC) MISSED OFFSET
	struct FScriptDelegate                             OnOpenCustomPanel;                                        // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnOpenCustomPopup;                                        // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnOpenCustomSavePopup;                                    // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnCloseCustomPopup;                                       // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnOpenVariablePopup;                                      // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnOpenBlackboardPopup;                                    // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnCloseVariablePopup;                                     // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnUpdateUndoRedoState;                                    // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnShowTips;                                               // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnShowInitUI;                                             // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnOpenVariablePanel;                                      // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnOpenCreateBlackboardPanel;                              // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnOpenEditBlackboardPanel;                                // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnQuoteBlock;                                             // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnShowBlockSettingPop;                                    // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnOpenCommentPopup;                                       // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnCloseCommentPopup;                                      // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSetBlockLogNum;                                         // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSetBlockLogTabNum;                                      // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSetBlockLogText;                                        // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnClearBlockLog;                                          // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnOpenAnimationPopup;                                     // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnCloseAnimationPopup;                                    // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnShowBlockVariablePopup;                                 // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	TArray<struct FString>                             OpendItemStrings;                                         // 0x0418(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CurSelectTriggerType;                                     // 0x0424(0x000C) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData10[0x1];                                       // 0x0430(0x0001) MISSED OFFSET
	bool                                               IsOpenedCaption;                                          // 0x0431(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0xE];                                       // 0x0432(0x000E) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyGraphData");
        return pStaticClass;
    }


	void UseTemplate(class UBlockyGraph* templateGraph);
	void UpdateVariableMenu();
	TArray<struct FText> UpdateVariableItemNames();
	void UpdateCustomMenu();
	TArray<struct FText> UpdateCustomItemNames();
	void Undo();
	void TryCloseItemList();
	void ShowTips(const struct FText& Tips);
	void ShowBlockSettingPop();
	void SetSlotString(const struct FBlockySlotString& slotStr);
	void SetGraphStrings(const struct FGraphString& graphStr);
	void SetCustomVariableString(const struct FCustomVariableString& variableStr);
	void SetCustomConfigString(const struct FCustomConfigString& configStr);
	void SetCurrentSubGraph(const struct FString& InName);
	void SetBlockLogText(EBlockyLogMsgMode Mode, class UBlockBase* BlockSource, const struct FString& SlotID, const struct FString& Info);
	void SetBlockLogTabNum(int Mode, int Num);
	void SetBlockLogNum(int Mode, int Num);
	struct FString SaveGraphToJsonText();
	void SaveGraphToBinFile(const struct FString& FilePath);
	TArray<unsigned char> SaveGraphToBin();
	struct FString SaveGlobalVarToJsonText();
	TArray<unsigned char> SaveGlobalVarToBin();
	void SaveCustom();
	void Save();
	void ReturnToPreviewGraph();
	void ReturnToMainGraph();
	void ResetGraph();
	void RemoveSubGraph(const struct FString& InName);
	void RefreshFont();
	void ReEditVariable(int Index);
	void Redo();
	void QuoteVariable(int Index);
	void QuoteCustom();
	void Quote();
	void Paste();
	void OpenGuideWebUrl();
	void OnLoadFinished();
	void MarkGraphDirty();
	void LoadGraphFromJsonText(const struct FString& JsonStr);
	void LoadGlobalVarFromJsonText(const struct FString& JsonStr);
	void Load();
	class UBlockBase* JumpToFocusSlotByIdStrAndIdx(const struct FString& BlockID, unsigned char idx);
	class UBlockBase* JumpToFocusSlotByIdStr(const struct FString& BlockID, const struct FString& TargetSlotIdStr);
	class UBlockBase* JumpToFocusBlockByIdStr(const struct FString& BlockID);
	bool ItemHasOpend(const struct FString& ItemStringName);
	bool IsGraphChanged();
	bool IsFirstGraph();
	bool IsBlockGuideButton();
	bool HasExecutableCode();
	void GM_GenerateAllBlocks(int CombinedBlocksNum, int GraphBlocksNum);
	TArray<struct FString> GetTriggerList();
	TArray<class UBlockBase*> GetQuoteVariableItem(class UBlockyGraph* Graph);
	TArray<class UBlockyGraph*> GetQuoteVariableGraph(int Index);
	TArray<class UPresetDesc*> GetPresetDescArray();
	bool GetIsDisableComment();
	TArray<struct FGraphString> GetGraphStrings();
	TMap<struct FString, struct FString> GetGraphMap();
	TArray<class UFunctionDesc*> GetFunctionDescArray();
	void GetDeleteBlockUIRect(float InRectWidth);
	TArray<struct FCustomVariableString> GetCustomVariableStrings();
	TArray<struct FText> GetCustomNames();
	TArray<struct FCustomConfigString> GetCustomConfigStrings();
	int GetCurrentGraphBlockyNumberByType(EBlockyCurrentGraphBlockyNumberType Type);
	class UBlockyGraph* GetCurrentGraph();
	int GetCurrentBlockyNumByMune(const struct FString& Menu, const struct FString& Category);
	TArray<struct FBlockySlotString> GetBlockyStringDatasInPair();
	TArray<class UBlockBase*> GetBlocks();
	TMap<struct FString, int> GetAllBlockByKeyName();
	class UBlockBase* FocusToSlotByBlockySlotId(const struct FBlockySlotString& SlotID);
	void FocusToSlot(class UBlockBase* TargetBlock, const struct FString& TargetSlotIdStr);
	void FocusTo(class UBlockBase* TargetBlock);
	void FinishVariableEdit(bool bSaveVar, bool bReEdit);
	void FinishCustomEdit(bool bSave);
	void FinishBlockSetting(bool bSaveVar);
	class UBlockBase* FindBlockByIdStr(const struct FString& BlockID);
	void EmptyListItemSeleceted();
	void Eject();
	void EditVariable();
	void EditCustumBlockGraph();
	void EditCustom();
	void DuplicateSubGraph(const struct FString& SrcName);
	void DuplicateBlock(class UBlockBase* bLock);
	void Disable();
	void DeleteVariableListItem(int Index);
	void DeleteSelected();
	void DeleteCustom();
	void DeleteBlocks();
	void DeleteBlockInGraph(class UBlockyGraph* InGraph, class UBlockBase* bLock);
	void DeleteBlockAndNextInGraph(class UBlockyGraph* InGraph, class UBlockBase* bLock);
	void DeleteBlockAndNext(class UBlockBase* bLock);
	void DeleteBlock(class UBlockBase* bLock);
	void DefineCustom();
	void Define();
	TArray<class UBlockyGraph*> CurSelectSubBlockyGraphs();
	void Copy();
	void Comment();
	void Clone();
	void ClearUndoRedoDatas();
	void ClearTextSizeCache();
	void ClearGraphDirty();
	void ClearBlockLog();
	bool CheckReports();
	void AddSubGraph(const struct FString& InName, const struct FString& InType);
	void AddOpendNameToArr(const struct FString& ItemStringName);
	class UBlockyGraph* AddGraph(const struct FString& InName, const struct FString& InType);
	void AddGlobalComment();
};


// Class BlockyLuaCore.BlockyLuaConfig
// 0x0F2C (0x0F48 - 0x001C)
class UBlockyLuaConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                MaxBlockCountInViewport;                                  // 0x0020(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxBlockCountInOneBlock;                                  // 0x0024(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0028(0x003C) UNKNOWN PROPERTY: SetProperty BlockyLuaCore.BlockyLuaConfig.DisabledFuncSet
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0064(0x003C) UNKNOWN PROPERTY: SetProperty BlockyLuaCore.BlockyLuaConfig.BlockReginsSet
	bool                                               bShowGuideButton;                                         // 0x00A0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	TMap<struct FString, struct FString>               ReginsGuideUrlSet;                                        // 0x00A4(0x0050) (Edit, ZeroConstructor, Config)
	float                                              GraphMinScale;                                            // 0x00E0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              GraphMaxScale;                                            // 0x00E4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DragCheckDelta;                                           // 0x00E8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              EjectOffsetX;                                             // 0x00EC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              EjectOffsetY;                                             // 0x00F0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PasteOffsetMaxCount;                                      // 0x00F4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector2D                                   PasteOffset;                                              // 0x00F8(0x0008) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   ExecuteableSnapPositionOffset;                            // 0x0100(0x0008) (Edit, Config, IsPlainOldData)
	ESlotClickType                                     DefaultArrayTypeFilterClickType;                          // 0x0108(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0108(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FString>                             NameInvalidChar;                                          // 0x010C(0x000C) (ZeroConstructor)
	struct FString                                     InvalidTranslateString;                                   // 0x0118(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     InvalidTranslateMaskString;                               // 0x0124(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ArrayInitStringStart;                                     // 0x0130(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ArrayInitStringEnd;                                       // 0x013C(0x000C) (Edit, ZeroConstructor, Config)
	unsigned char                                      ArrangeMaxTimePerFrame;                                   // 0x0148(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             FontName;                                                 // 0x0150(0x0018) (Edit, Config)
	int                                                FontSize;                                                 // 0x0168(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              CustomDefaultFont;                                        // 0x0170(0x0040) (Edit, Config)
	bool                                               UseCustomFont;                                            // 0x01B0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x01B1(0x0003) MISSED OFFSET
	float                                              RTLYOffset;                                               // 0x01B4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              LTRYOffset;                                               // 0x01B8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector2D                                   EmblemOffset;                                             // 0x01BC(0x0008) (Edit, Config, IsPlainOldData)
	float                                              DefaultBlockWidth;                                        // 0x01C4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultBlockHeight;                                       // 0x01C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FMargin                                     BlockPadding;                                             // 0x01CC(0x0010) (Edit, Config, IsPlainOldData)
	float                                              BlockIconSize;                                            // 0x01DC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FMargin                                     BlockIconBorder;                                          // 0x01E0(0x0010) (Edit, Config, IsPlainOldData)
	float                                              BlockButtonSize;                                          // 0x01F0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BlockSettingButtonSize;                                   // 0x01F4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BlockButtonClickSize;                                     // 0x01F8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FMargin                                     BlockButtonBorder;                                        // 0x01FC(0x0010) (Edit, Config, IsPlainOldData)
	struct FMargin                                     BlockTextBorder;                                          // 0x020C(0x0010) (Edit, Config, IsPlainOldData)
	struct FMargin                                     BlockSlotBorder;                                          // 0x021C(0x0010) (Edit, Config, IsPlainOldData)
	float                                              CrossDelta;                                               // 0x022C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CornerDelta;                                              // 0x0230(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VariableIconSize;                                         // 0x0234(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VariableIconIndent;                                       // 0x0238(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VariableCopyIconSize;                                     // 0x023C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector2D                                   StringInputBlockSize;                                     // 0x0240(0x0008) (Edit, Config, IsPlainOldData)
	float                                              DefaultSlotWidth;                                         // 0x0248(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultSlotHeight;                                        // 0x024C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FMargin                                     SlotPadding;                                              // 0x0250(0x0010) (Edit, Config, IsPlainOldData)
	float                                              SlotIconSize;                                             // 0x0260(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FMargin                                     SlotIconBorder;                                           // 0x0264(0x0010) (Edit, Config, IsPlainOldData)
	float                                              TriangleIconSize;                                         // 0x0274(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FMargin                                     SlotTriangleBorder;                                       // 0x0278(0x0010) (Edit, Config, IsPlainOldData)
	float                                              WarringIconSize;                                          // 0x0288(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ForbiddenIconSize;                                        // 0x028C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FMargin                                     SlotWarringBorder;                                        // 0x0290(0x0010) (Edit, Config, IsPlainOldData)
	struct FMargin                                     SlotForbiddenBorder;                                      // 0x02A0(0x0010) (Edit, Config, IsPlainOldData)
	struct FMargin                                     SlotTextBorder;                                           // 0x02B0(0x0010) (Edit, Config, IsPlainOldData)
	float                                              SlotTextSizeRefactor;                                     // 0x02C0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector2D                                   ColorBrushSize;                                           // 0x02C4(0x0008) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   ColorContentSize;                                         // 0x02CC(0x0008) (Edit, Config, IsPlainOldData)
	float                                              HookupSlotWidth;                                          // 0x02D4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HookupSlotHeight;                                         // 0x02D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HookupChildIndentation;                                   // 0x02DC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              HookupLinkWidth;                                          // 0x02E0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector2D                                   CommentButtonSize;                                        // 0x02E4(0x0008) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   CommentTextSize;                                          // 0x02EC(0x0008) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   CommentFlodSize;                                          // 0x02F4(0x0008) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   CommentTitleSize;                                         // 0x02FC(0x0008) (Edit, Config, IsPlainOldData)
	float                                              CommentLineLen;                                           // 0x0304(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                CommentBlinkCount;                                        // 0x0308(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CommentBlinkSpeed;                                        // 0x030C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BlockListWidth;                                           // 0x0310(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FMargin                                     ListBlockSelectedIconPadding;                             // 0x0314(0x0010) (Edit, Config, IsPlainOldData)
	float                                              ListBlockSelectedIconSize;                                // 0x0324(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              NextCategoryOffset;                                       // 0x0328(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              DeleteBlocksYOffset;                                      // 0x032C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FVector2D                                   DeleteBlocksSize;                                         // 0x0330(0x0008) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   CanDeleteSize;                                            // 0x0338(0x0008) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   BlockEmblemSize;                                          // 0x0340(0x0008) (Edit, Config, IsPlainOldData)
	float                                              DisplayViewMaxBlockWidth;                                 // 0x0348(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FLinearColor                                DefaultBackColor;                                         // 0x034C(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                DarkBackColor;                                            // 0x035C(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                KeyWordColor;                                             // 0x036C(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                IllegalWordColor;                                         // 0x037C(0x0010) (Edit, Config, IsPlainOldData)
	struct FLinearColor                                FunctionBackColor;                                        // 0x038C(0x0010) (Edit, Config, IsPlainOldData)
	float                                              BlockSnapAreaLeft;                                        // 0x039C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BlockSnapAreaTop;                                         // 0x03A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BlockSnapAreaWidth;                                       // 0x03A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              BlockSnapAreaHeight;                                      // 0x03A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     PreViewMaterial;                                          // 0x03AC(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LocalizationNameSpace;                                    // 0x03B8(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     DefaultRect;                                              // 0x03C4(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ActionRect;                                               // 0x03D0(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ActionRectSelected;                                       // 0x03DC(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ValueRect;                                                // 0x03E8(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ValueDisableRect;                                         // 0x03F4(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ValueSelectDisableRect;                                   // 0x0400(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     BoolBlock;                                                // 0x040C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     BoolBlockEmpty;                                           // 0x0418(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     BoolBlockSelect;                                          // 0x0424(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     BoolBlockDisable;                                         // 0x0430(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     NumBlockEmpty;                                            // 0x043C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     NumBlockSelect;                                           // 0x0448(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     NumBlockDisable;                                          // 0x0454(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     DeleteBlocksRect;                                         // 0x0460(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     SnapShowRect;                                             // 0x046C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ListItemSelected;                                         // 0x0478(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     SingleVarRect;                                            // 0x0484(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ArrayVarRect;                                             // 0x0490(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CallbackVarRect;                                          // 0x049C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     VarRectDisable;                                           // 0x04A8(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     VarOutline;                                               // 0x04B4(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     GlobalVarIcon;                                            // 0x04C0(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CanvasVarIcon;                                            // 0x04CC(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LocalVarIcon;                                             // 0x04D8(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CallbackVarIcon;                                          // 0x04E4(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomIcon;                                               // 0x04F0(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomActionBG;                                           // 0x04FC(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomActionBG_Selected;                                  // 0x0508(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomActionBG_Gray;                                      // 0x0514(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomActionBG_Gray_Selected;                             // 0x0520(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomValueBG;                                            // 0x052C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomValueBG_Selected;                                   // 0x0538(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomValueBG_Gray;                                       // 0x0544(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomValueBG_Gray_Selected;                              // 0x0550(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomEventBG;                                            // 0x055C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomEventBG_Selected;                                   // 0x0568(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomEventBG_Gray;                                       // 0x0574(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomEventBG_Gray_Selected;                              // 0x0580(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomBlock_Emblem;                                       // 0x058C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomBlock_Emblem_Selected;                              // 0x0598(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomBlock_Emblem_Disable;                               // 0x05A4(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CustomBlock_Emblem_DisableSelected;                       // 0x05B0(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     EventBlock_Emblem;                                        // 0x05BC(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     EventBlock_Emblem_Selected;                               // 0x05C8(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     EventBlock_Emblem_Disable;                                // 0x05D4(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     EventBlock_Emblem_DisableSelected;                        // 0x05E0(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicUp;                                                  // 0x05EC(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicUpSelected;                                          // 0x05F8(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicUpGray;                                              // 0x0604(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicUpSelectedGray;                                      // 0x0610(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicMiddle;                                              // 0x061C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicMiddleSelected;                                      // 0x0628(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicBottom;                                              // 0x0634(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicBottomGray;                                          // 0x0640(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicBottomSelected;                                      // 0x064C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicBottomSelectedGray;                                  // 0x0658(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicSlot;                                                // 0x0664(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicSlotGray;                                            // 0x0670(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicSlotSelected;                                        // 0x067C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     LogicSlotSelectedGray;                                    // 0x0688(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     HookupSlot;                                               // 0x0694(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ButtonWithTextBg_Enable;                                  // 0x06A0(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ButtonWithTextBg_Selected;                                // 0x06AC(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ButtonWithTextBg_Disable;                                 // 0x06B8(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ButtonWithTextBg_DisableSelected;                         // 0x06C4(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     SlotTriangle;                                             // 0x06D0(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     SlotWarring;                                              // 0x06DC(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     SlotForbidden;                                            // 0x06E8(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     SlotIllegalInput;                                         // 0x06F4(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     FunctionIcon;                                             // 0x0700(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     SettingIcon;                                              // 0x070C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     ColorIcon;                                                // 0x0718(0x000C) (Edit, ZeroConstructor, Config)
	TArray<struct FLinearColor>                        DefaultHSVs;                                              // 0x0724(0x000C) (ZeroConstructor)
	struct FString                                     CopyIcon;                                                 // 0x0730(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     CommentIcon;                                              // 0x073C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     FlodIcon;                                                 // 0x0748(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     UnbindIcon;                                               // 0x0754(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     SeparatorIcon;                                            // 0x0760(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     NoneIcon;                                                 // 0x076C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     DefaultCategoryIcon;                                      // 0x0778(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     DefaultCategorySelectedIcon;                              // 0x0784(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     BlockyGlobalVarPath;                                      // 0x0790(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     BlockyGraphPath;                                          // 0x079C(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     GenerateCodePath;                                         // 0x07A8(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     AssetPackageName;                                         // 0x07B4(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     TextrueRectParamPath;                                     // 0x07C0(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     FunctionPath;                                             // 0x07CC(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     FunctionFolderPath;                                       // 0x07D8(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     VariablePath;                                             // 0x07E4(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     PresetsPath;                                              // 0x07F0(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     PresetsFolderPath;                                        // 0x07FC(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     AllTypesPath;                                             // 0x0808(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     TranslateStringPath;                                      // 0x0814(0x000C) (Edit, ZeroConstructor, Config)
	struct FString                                     SequencePath;                                             // 0x0820(0x000C) (Edit, ZeroConstructor, Config)
	int                                                UndoMaxSteps;                                             // 0x082C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxStoredNumOfSearchHistory;                              // 0x0830(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               SearchUseCase;                                            // 0x0834(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0835(0x0003) MISSED OFFSET
	struct FLinearColor                                SearchedKeyWordColor;                                     // 0x0838(0x0010) (Edit, Config, IsPlainOldData)
	int                                                MaxTemplateDescriptionLen;                                // 0x0848(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              SaveCooldownDuration;                                     // 0x084C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TMap<struct FString, class UBrushData*>            BlockyBrushDatas;                                         // 0x0850(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FBlockyBrushInfo>      BlockyBrushInfos;                                         // 0x088C(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FString>               RTLBrushMap;                                              // 0x08C8(0x0050) (ZeroConstructor)
	TArray<struct FString>                             BlockyBrushNames;                                         // 0x0904(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData09[0x78];                                      // 0x0910(0x0078) MISSED OFFSET
	TMap<struct FString, class UFunctionDesc*>         Functions;                                                // 0x0988(0x0050) (ZeroConstructor)
	TMap<struct FString, class UFunctionDesc*>         FuncTemplates;                                            // 0x09C4(0x0050) (ZeroConstructor)
	TMap<struct FString, class UFunctionDesc*>         TypeFilterFunctions;                                      // 0x0A00(0x0050) (ZeroConstructor)
	TArray<class UBlackboardDefiner*>                  BlackboardDefiners;                                       // 0x0A3C(0x000C) (ZeroConstructor)
	TMap<struct FString, class UVarDefiner*>           VarDefiners;                                              // 0x0A48(0x0050) (ZeroConstructor)
	TMap<struct FString, class UCustomDefiner*>        CustomDefiners;                                           // 0x0A84(0x0050) (ZeroConstructor)
	TMap<struct FString, class UCategoryDefiner*>      CategoryDefiners;                                         // 0x0AC0(0x0050) (ZeroConstructor)
	TMap<struct FString, class UEnumDesc*>             Enums;                                                    // 0x0AFC(0x0050) (ZeroConstructor)
	TArray<class UBlockyMenuItemObject*>               MenuItems;                                                // 0x0B38(0x000C) (ZeroConstructor)
	TMap<struct FString, class UTypeConvertDesc*>      TypeConverts;                                             // 0x0B44(0x0050) (ZeroConstructor)
	TMap<struct FString, class UPresetDesc*>           PresetDescMap;                                            // 0x0B80(0x0050) (ZeroConstructor)
	TMap<struct FString, class UPresetDesc*>           CodeNameAndTypeKeyPresetDescMap;                          // 0x0BBC(0x0050) (ZeroConstructor)
	TArray<class UBlockyMenuItemObject*>               PresetMenuItems;                                          // 0x0BF8(0x000C) (ZeroConstructor)
	TArray<class UBlockyGraph*>                        TemplateGraphs;                                           // 0x0C04(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData10[0x3C];                                      // 0x0C10(0x003C) UNKNOWN PROPERTY: SetProperty BlockyLuaCore.BlockyLuaConfig.AllTypes
	TMap<struct FString, struct FString>               TipsMap;                                                  // 0x0C4C(0x0050) (ZeroConstructor)
	TArray<struct FString>                             MenuSequence;                                             // 0x0C88(0x000C) (ZeroConstructor)
	TMap<struct FString, struct FSequence>             CategorySequence;                                         // 0x0C94(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FSequence>             ItemSequence;                                             // 0x0CD0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData11[0x1C];                                      // 0x0D0C(0x001C) MISSED OFFSET
	struct FSlateFontInfo                              FontInfo;                                                 // 0x0D28(0x0040)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0D68(0x0004) MISSED OFFSET
	TMap<struct FString, class UVarDefiner*>           AllTypesMap;                                              // 0x0D6C(0x0050) (ZeroConstructor)
	TMap<struct FGuid, struct FScriptDelegate>         OnReceiveCheckStringResults;                              // 0x0DA8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0DE4(0x0004) MISSED OFFSET
	struct FScriptDelegate                             OnGetLocaleString;                                        // 0x0DE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnCallCustomSelectObject;                                 // 0x0DF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnReceiveCustomSelectObject;                              // 0x0E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnCheckShowCustomSelection;                               // 0x0E18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnCheckShowPresetFilterBtn;                               // 0x0E28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnModifyTip;                                              // 0x0E38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnAddBlockyLog;                                           // 0x0E48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnGetValidString;                                         // 0x0E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnCheckStringValid;                                       // 0x0E68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMessageData;                                            // 0x0E78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnIsCurrentCultureLTR;                                    // 0x0E88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnGetTextLen;                                             // 0x0E98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnPlayPresetSound;                                        // 0x0EA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnOpenGuide;                                              // 0x0EB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData14[0x3C];                                      // 0x0EC8(0x003C) MISSED OFFSET
	class UHotfixUtility*                              HotfixUtility;                                            // 0x0F04(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x40];                                      // 0x0F08(0x0040) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyLuaConfig");
        return pStaticClass;
    }


	void SetCustomDefaultFont(struct FSlateFontInfo* DefaultFont);
	struct FString ReplaceChCharToMaskChar(const struct FString& Source);
	void PlayPresetSound(const struct FString& SoundPath);
	bool IsNameStringValid(const struct FString& NameString);
	bool IsBlackboardVar(class UVarDefiner* Definer);
	struct FString GetValidString(const struct FString& CheckString);
	struct FString GetTranslateStringTest(const struct FString& KeyString);
	struct FString GetTranslateString(const struct FString& KeyString);
	struct FString GetLocaleString(const struct FString& KeyString);
	class UBlackboardDefiner* GetBlackboardDefiner(class UVarDefiner* Definer);
	void ClearCustomDefaultFont();
	void ClearAsyncTextureHandleMap();
	void CheckStringValidTest(const struct FString& CheckString, const struct FCheckStringHandleData& Data);
};


// Class BlockyLuaCore.BlockyLuaUtility
// 0x0000 (0x0020 - 0x0020)
class UBlockyLuaUtility : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyLuaUtility");
        return pStaticClass;
    }


	static void WriteUInt8(const struct FBlockyLuaHandle& ar, unsigned char Value);
	static void WriteUInt64(const struct FBlockyLuaHandle& ar, uint64_t Value);
	static void WriteUInt32(const struct FBlockyLuaHandle& ar, uint32_t Value);
	static void WriteUInt16(const struct FBlockyLuaHandle& ar, uint16_t Value);
	static void WriteString(const struct FBlockyLuaHandle& ar, const struct FString& Value);
	static void WriteSingle(const struct FBlockyLuaHandle& ar, float Value);
	static void WriteObjectPtr(const struct FBlockyLuaHandle& ar, class UObject* Value);
	static void WriteInt8(const struct FBlockyLuaHandle& ar, int8_t Value);
	static void WriteInt64(const struct FBlockyLuaHandle& ar, int64_t Value);
	static void WriteInt32(const struct FBlockyLuaHandle& ar, int Value);
	static void WriteInt16(const struct FBlockyLuaHandle& ar, int16_t Value);
	static void WriteHandle(const struct FBlockyLuaHandle& ar, const struct FBlockyLuaHandle& Value);
	static void WriteDouble(const struct FBlockyLuaHandle& ar, double Value);
	static void WriteBool(const struct FBlockyLuaHandle& ar, bool Value);
	static unsigned char ReadUInt8(const struct FBlockyLuaHandle& ar);
	static uint64_t ReadUInt64(const struct FBlockyLuaHandle& ar);
	static uint32_t ReadUInt32(const struct FBlockyLuaHandle& ar);
	static uint16_t ReadUInt16(const struct FBlockyLuaHandle& ar);
	static struct FString ReadString(const struct FBlockyLuaHandle& ar);
	static float ReadSingle(const struct FBlockyLuaHandle& ar);
	static class UObject* ReadObjectPtr(const struct FBlockyLuaHandle& ar);
	static int8_t ReadInt8(const struct FBlockyLuaHandle& ar);
	static int64_t ReadInt64(const struct FBlockyLuaHandle& ar);
	static int ReadInt32(const struct FBlockyLuaHandle& ar);
	static int16_t ReadInt16(const struct FBlockyLuaHandle& ar);
	static struct FBlockyLuaHandle ReadHandle(const struct FBlockyLuaHandle& ar);
	static double ReadDouble(const struct FBlockyLuaHandle& ar);
	static bool ReadBool(const struct FBlockyLuaHandle& ar);
	static void DestroyReturnWriter(const struct FBlockyLuaHandle& ptr);
	static void DestroyArgumentsReader(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateReturnWriter(const struct FBlockyLuaHandle& stubHandle);
	static struct FBlockyLuaHandle CreateArgumentsReader(const struct FBlockyLuaHandle& stubHandle);
};


// Class BlockyLuaCore.BlockyMenuItemObject
// 0x00A4 (0x00C0 - 0x001C)
class UBlockyMenuItemObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<class UBlockyCategoryItemObject*>           Categories;                                               // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CurrentCategoryIndex;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     DrawType;                                                 // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                DrawTopDelta;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DrawBottomDelta;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     IconType;                                                 // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Type;                                                     // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Visible;                                                  // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              ItemInterval;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaddingLeft;                                              // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CategoryStringColor;                                      // 0x0070(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CategoryHeight;                                           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ItemStringColor;                                          // 0x0084(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UBlockyGraphData*                            GraphData;                                                // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBrushData*                                  DefaultRectBrush;                                         // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBrushData*                                  CurrentItemBrush;                                         // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBrushData*                                  CurrentIconBrush;                                         // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBrushData*                                  SelectedIconBrush;                                        // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyMenuItemObject_BP
// 0x0008 (0x00C8 - 0x00C0)
class UBlockyMenuItemObject_BP : public UBlockyMenuItemObject
{
public:
	bool                                               bHideCategory;                                            // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject_BP");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyMenuItemObject_Custom
// 0x0008 (0x00C8 - 0x00C0)
class UBlockyMenuItemObject_Custom : public UBlockyMenuItemObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject_Custom");
        return pStaticClass;
    }


	void NewCustom();
	bool IsCurrentCategoryEmpty();
	void ClosePopUp();
};


// Class BlockyLuaCore.BlockyMenuItemObject_Search
// 0x0048 (0x0108 - 0x00C0)
class UBlockyMenuItemObject_Search : public UBlockyMenuItemObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00C0(0x0048) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject_Search");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyMenuItemObject_TypeFilter
// 0x0000 (0x00C0 - 0x00C0)
class UBlockyMenuItemObject_TypeFilter : public UBlockyMenuItemObject
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject_TypeFilter");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyMenuItemObject_Variable
// 0x0010 (0x00D0 - 0x00C0)
class UBlockyMenuItemObject_Variable : public UBlockyMenuItemObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject_Variable");
        return pStaticClass;
    }


	void NewVariable();
	bool IsPlayerBlackboard();
	bool IsCurrentCategoryEmpty();
	bool IsBlackBoardVariable();
	void FilterBlackboard(bool bIsPlayerVar);
	void FilterAccess(TEnumAsByte<EBlockyAccessType> InAccess);
};


// Class BlockyLuaCore.BlockyMoveCommandData
// 0x0008 (0x0028 - 0x0020)
class UBlockyMoveCommandData : public UBlockyCommandData
{
public:
	struct FBlockPoint                                 Position;                                                 // 0x0020(0x0008)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMoveCommandData");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.ExeSequencerBase
// 0x0148 (0x0420 - 0x02D8)
class UExeSequencerBase : public UExecuteable
{
public:
	class UBrushData*                                  SlotBrush;                                                // 0x02D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrushData*                                  TailBrush;                                                // 0x02DC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x140];                                     // 0x02E0(0x0140) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ExeSequencerBase");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyTimer
// 0x03C8 (0x07E8 - 0x0420)
class UBlockyTimer : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x3C4];                                     // 0x0420(0x03C4) MISSED OFFSET
	class UBrushData*                                  IconBrush;                                                // 0x07E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyTimer");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BlockyTimerParam
// 0x0008 (0x0180 - 0x0178)
class UBlockyTimerParam : public UBlockBase
{
public:
	class UBlockyTimer*                                HostTimer;                                                // 0x0178(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x017C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyTimerParam");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.Break
// 0x0000 (0x02D8 - 0x02D8)
class UBreak : public UExecuteable
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Break");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.BrushData
// 0x00BC (0x00D8 - 0x001C)
class UBrushData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FSlateBrush                                 Brush;                                                    // 0x0020(0x0098)
	class UTexture2D*                                  Texture;                                                  // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RectSize;                                                 // 0x00C0(0x0008) (IsPlainOldData)
	int                                                CrossDelta;                                               // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00CC(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BrushData");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CallFunction
// 0x01E8 (0x04C0 - 0x02D8)
class UCallFunction : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x02D8(0x001C) MISSED OFFSET
	class UBrushData*                                  IconBrush;                                                // 0x02F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrushData*                                  SelectionBG;                                              // 0x02F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C4];                                     // 0x02FC(0x01C4) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CallFunction");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CastExpression
// 0x0000 (0x0020 - 0x0020)
class UCastExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CastExpression");
        return pStaticClass;
    }


	static void SetTargetType(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target);
	static void SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target);
	static struct FBlockyLuaHandle GetTargetType(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateCastExpression2(const struct FBlockyLuaHandle& TargetType, const struct FBlockyLuaHandle& expression);
	static struct FBlockyLuaHandle CreateCastExpression();
};


// Class BlockyLuaCore.ClassReferenceExpression
// 0x0000 (0x0020 - 0x0020)
class UClassReferenceExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ClassReferenceExpression");
        return pStaticClass;
    }


	static void SetClass(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& klass);
	static struct FBlockyLuaHandle GetClass(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateClassReferenceExpression(const struct FBlockyLuaHandle& klass);
};


// Class BlockyLuaCore.ObjectDesc
// 0x0004 (0x0020 - 0x001C)
class UObjectDesc : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ObjectDesc");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.ColorDesc
// 0x01A8 (0x01C8 - 0x0020)
class UColorDesc : public UObjectDesc
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CodeName;                                                 // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Menu;                                                     // 0x0040(0x000C) (Edit, BlueprintVisible)
	struct FText                                       Category;                                                 // 0x004C(0x000C) (Edit, BlueprintVisible)
	struct FLinearColor                                Color;                                                    // 0x0058(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               IsSelected;                                               // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0069(0x000B) MISSED OFFSET
	bool                                               Visible;                                                  // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Removed;                                                  // 0x0075(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Localed;                                                  // 0x0076(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x151];                                     // 0x0077(0x0151) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ColorDesc");
        return pStaticClass;
    }


	bool NameContainsString(const struct FString& filter);
	bool IsNameEmpty();
	bool IsCodeNameEmpty();
	struct FType GetType();
	struct FString GetLocaleName();
	struct FString GetHSVStr();
	struct FLinearColor GetColor();
};


// Class BlockyLuaCore.CommentBlock
// 0x00F0 (0x03C8 - 0x02D8)
class UCommentBlock : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0xDC];                                      // 0x02D8(0x00DC) MISSED OFFSET
	class UBlockBase*                                  CandidateParentBlock;                                     // 0x03B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03B8(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CommentBlock");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CommonUIFunctionLibrary
// 0x0000 (0x0020 - 0x0020)
class UCommonUIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CommonUIFunctionLibrary");
        return pStaticClass;
    }


	static bool VarDefinerTypeCanBeArray(class UVarDefiner* Definer);
	static void SetIsVirtualKeyboardVisible(bool Visible);
	static bool LimitTextLength(const struct FText& InputText, int MaxCharCount, struct FText* OutText);
	static struct FText LimitTextEmojiInput(const struct FText& InputText);
	static bool IsNameStringValid(const struct FString& NameString);
	static bool IsFuncDisabled(const struct FString& FuncName);
	static bool IsDeveloperMode();
	static struct FString GetTranslateString_BP(const struct FString& KeyString);
	static struct FString GetTranslateString(const struct FString& KeyString);
	static int GetTextLen(const struct FText& Text);
	static TArray<class UPresetDesc*> GetPresetDescs(class UVarDefiner* Definer);
	static struct FText GetLocaleText(const struct FText& KeyString);
	static struct FString GetLocaleString(const struct FString& KeyString);
	static bool GetIsVirtualKeyboardVisible();
	static struct FString GetArrayInitStringStart();
	static struct FString GetArrayInitStringEnd();
	static TArray<class UVarDefiner*> GetAllDefiners();
	static struct FString GenerateNextNameWithSuffix(TArray<struct FString> ExistingNames, const struct FString& InputName, bool InDuplicate);
	static struct FString FormatNumber(const struct FString& Input);
	static void CollectAllObjects();
	static bool CheckNameValid(const struct FString& InName, struct FText* ErrorMsg);
	static bool CheckNameHasInvalidChar(const struct FString& InName);
};


// Class BlockyLuaCore.ConfigDataAsset
// 0x00A8 (0x00C8 - 0x0020)
class UConfigDataAsset : public UDataAsset
{
public:
	struct FString                                     AllType;                                                  // 0x0020(0x000C) (Edit, ZeroConstructor, EditConst)
	struct FString                                     TextureRectParam;                                         // 0x002C(0x000C) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Function;                                                 // 0x0038(0x000C) (Edit, ZeroConstructor, EditConst)
	TArray<struct FString>                             FunctionList;                                             // 0x0044(0x000C) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Variable;                                                 // 0x0050(0x000C) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Sequence;                                                 // 0x005C(0x000C) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Preset;                                                   // 0x0068(0x000C) (Edit, ZeroConstructor, EditConst)
	TMap<struct FString, struct FString>               PresetMap;                                                // 0x0074(0x0050) (Edit, ZeroConstructor, EditConst)
	struct FString                                     TranslateString;                                          // 0x00B0(0x000C) (Edit, ZeroConstructor, EditConst)
	TArray<struct FString>                             ModeList;                                                 // 0x00BC(0x000C) (Edit, ZeroConstructor, EditConst)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ConfigDataAsset");
        return pStaticClass;
    }


	void SaveToAsset(const struct FString& PackageName);
};


// Class BlockyLuaCore.Continue
// 0x0000 (0x02D8 - 0x02D8)
class UContinue : public UExecuteable
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Continue");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CreateFunction
// 0x0008 (0x04C8 - 0x04C0)
class UCreateFunction : public UCallFunction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CreateFunction");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CreateObjectExpression
// 0x0000 (0x0020 - 0x0020)
class UCreateObjectExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CreateObjectExpression");
        return pStaticClass;
    }


	static void SetTypeName(const struct FBlockyLuaHandle& ptr, const struct FString& Value);
	static void SetParameters(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value);
	static struct FString GetTypeName(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetParameters(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateCreateObjectExpression(const struct FString& TypeName);
};


// Class BlockyLuaCore.CreateSubDefineFunction
// 0x0208 (0x0628 - 0x0420)
class UCreateSubDefineFunction : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x204];                                     // 0x0420(0x0204) MISSED OFFSET
	class UBrushData*                                  IconBrush;                                                // 0x0624(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CreateSubDefineFunction");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CustomAction
// 0x0040 (0x0318 - 0x02D8)
class UCustomAction : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D8(0x0004) MISSED OFFSET
	class UCustomConfig*                               Config;                                                   // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ConfigName;                                               // 0x02E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UBrushData*                                  BrushBGSelected;                                          // 0x02F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrushData*                                  IconBrush;                                                // 0x02F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrushData*                                  BrushBG;                                                  // 0x02F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x02FC(0x001C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomAction");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CustomActionImp
// 0x0030 (0x0450 - 0x0420)
class UCustomActionImp : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0420(0x0010) MISSED OFFSET
	class UCustomConfig*                               Config;                                                   // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ConfigName;                                               // 0x0434(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UBrushData*                                  IconBrush;                                                // 0x0444(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrushData*                                  BrushBG;                                                  // 0x0448(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x044C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomActionImp");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CustomParam
// 0x0034 (0x0050 - 0x001C)
class UCustomParam : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     Description;                                              // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsArray;                                                 // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	class UVarDefiner*                                 Definer;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x003C(0x0014) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomParam");
        return pStaticClass;
    }


	void CopyFrom(class UCustomParam* Other);
};


// Class BlockyLuaCore.CustomConfig
// 0x005C (0x0078 - 0x001C)
class UCustomConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ECustomBlockType>                      Type;                                                     // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FString                                     Description;                                              // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UCustomParam*>                        Params;                                                   // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UCustomParam*                                Return;                                                   // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFunctionDesc*                               CustomDesc;                                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	class UFunctionDesc*                               CustomImplDesc;                                           // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomConfig");
        return pStaticClass;
    }


	void UpdateDesc();
	void SetParamNum(int paramNum);
	class UCustomParam* InitResult();
	void Init();
	class UCustomParam* GetParam(int idx);
	struct FString GetCustomGraphName();
	void CopyFrom(class UCustomConfig* Other);
};


// Class BlockyLuaCore.CustomInterface
// 0x0000 (0x0020 - 0x0020)
class UCustomInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomInterface");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CustomDefiner
// 0x0028 (0x00B0 - 0x0088)
class UCustomDefiner : public UCategoryDefiner
{
public:
	struct FString                                     HotfixUserData;                                           // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TemplateFunc;                                             // 0x0094(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TemplateImplFunc;                                         // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomDefiner");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.DefineFunction
// 0x0038 (0x0310 - 0x02D8)
class UDefineFunction : public UExecuteable
{
public:
	struct FText                                       Name;                                                     // 0x02D8(0x000C)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x02E4(0x002C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.DefineFunction");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CustomEvent
// 0x0060 (0x0370 - 0x0310)
class UCustomEvent : public UDefineFunction
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0310(0x0004) MISSED OFFSET
	class UCustomConfig*                               Config;                                                   // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ConfigName;                                               // 0x0318(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UBrushData*                                  IconBrush;                                                // 0x0328(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrushData*                                  BrushBG;                                                  // 0x032C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0330(0x0040) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomEvent");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CustomImpInterface
// 0x0000 (0x0020 - 0x0020)
class UCustomImpInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomImpInterface");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CustomValue
// 0x0040 (0x01B8 - 0x0178)
class UCustomValue : public UVarBase
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0178(0x0004) MISSED OFFSET
	class UCustomConfig*                               Config;                                                   // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ConfigName;                                               // 0x0180(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UBrushData*                                  BrushBGSelected;                                          // 0x0190(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrushData*                                  BrushBG;                                                  // 0x0194(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0198(0x0020) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomValue");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.CustomValueImp
// 0x0120 (0x0540 - 0x0420)
class UCustomValueImp : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0420(0x0100) MISSED OFFSET
	class UCustomConfig*                               Config;                                                   // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ConfigName;                                               // 0x0524(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UBrushData*                                  IconBrush;                                                // 0x0534(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrushData*                                  BrushBG;                                                  // 0x0538(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x053C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomValueImp");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.DefaultValueCommandData
// 0x0048 (0x0068 - 0x0020)
class UDefaultValueCommandData : public UBlockyCommandData
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0020(0x0048) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.DefaultValueCommandData");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.DefaultValueExpression
// 0x0000 (0x0020 - 0x0020)
class UDefaultValueExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.DefaultValueExpression");
        return pStaticClass;
    }


	static void SetType(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Type);
	static struct FBlockyLuaHandle GetType(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateDefaultValueExpression2(const struct FBlockyLuaHandle& typeRef);
	static struct FBlockyLuaHandle CreateDefaultValueExpression(const struct FBlockyLuaHandle& typeClass);
};


// Class BlockyLuaCore.DoNum
// 0x01E8 (0x0608 - 0x0420)
class UDoNum : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0420(0x01E0) MISSED OFFSET
	class UBrushData*                                  IconBrush;                                                // 0x0600(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0604(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.DoNum");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.EnumDesc
// 0x005C (0x0078 - 0x001C)
class UEnumDesc : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	class UEnum*                                       EnumPtr;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4C];                                      // 0x002C(0x004C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.EnumDesc");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.ExecuteablePreview
// 0x0028 (0x0300 - 0x02D8)
class UExecuteablePreview : public UExecuteable
{
public:
	TArray<struct FBlockPreviewBrush>                  Rects;                                                    // 0x02D8(0x000C) (ZeroConstructor)
	class UBrushData*                                  DisableIconBrush;                                         // 0x02E4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x02E8(0x0018) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ExecuteablePreview");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.ForEach
// 0x02F0 (0x0710 - 0x0420)
class UForEach : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x2E8];                                     // 0x0420(0x02E8) MISSED OFFSET
	class UBrushData*                                  IconBrush;                                                // 0x0708(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x070C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ForEach");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.FunctionDesc
// 0x0154 (0x0170 - 0x001C)
class UFunctionDesc : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     KeyName;                                                  // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CodeName;                                                 // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0040(0x0030) MISSED OFFSET
	struct FString                                     Host;                                                     // 0x0070(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description;                                              // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x34];                                      // 0x0088(0x0034) MISSED OFFSET
	class UClass*                                      BlockClass;                                               // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	TArray<struct FFunctionParameter>                  Parameters;                                               // 0x00C8(0x000C) (ZeroConstructor)
	TArray<struct FFunctionParameter>                  AddEventParameters;                                       // 0x00D4(0x000C) (ZeroConstructor)
	TMap<struct FString, struct FString>               ModuleRequires;                                           // 0x00E0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x54];                                      // 0x011C(0x0054) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.FunctionDesc");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.FunctionInvokeArgumentExpression
// 0x0000 (0x0020 - 0x0020)
class UFunctionInvokeArgumentExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.FunctionInvokeArgumentExpression");
        return pStaticClass;
    }


	static void SetOperationType(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyFunctionArgumentAttribute> Value);
	static void SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetAdditionPostCode(const struct FBlockyLuaHandle& ptr, const struct FString& Value);
	static TEnumAsByte<EBlockyFunctionArgumentAttribute> GetOperationType(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetExpression(const struct FBlockyLuaHandle& ptr);
	static struct FString GetAdditionPostCode(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateFunctionInvokeArgumentExpression();
};


// Class BlockyLuaCore.FunctionInvokeExpression
// 0x0000 (0x0020 - 0x0020)
class UFunctionInvokeExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.FunctionInvokeExpression");
        return pStaticClass;
    }


	static void SetReturnValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetHost(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetFunctionName(const struct FBlockyLuaHandle& ptr, const struct FString& Value);
	static void SetComment(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetArguments(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value);
	static struct FBlockyLuaHandle GetReturnValue(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetHost(const struct FBlockyLuaHandle& ptr);
	static struct FString GetFunctionName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetComment(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetArguments(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateFunctionInvokeExpression();
};


// Class BlockyLuaCore.GetArrayElement
// 0x0100 (0x0278 - 0x0178)
class UGetArrayElement : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0xFC];                                      // 0x0178(0x00FC) MISSED OFFSET
	class UBrushData*                                  BrushBGSelected;                                          // 0x0274(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.GetArrayElement");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.HotfixUtility
// 0x0044 (0x0060 - 0x001C)
class UHotfixUtility : public UObject
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x001C(0x0044) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.HotfixUtility");
        return pStaticClass;
    }


	struct FString UVarDefiner_GetCurrentLocateShowName(class UVarDefiner* pThis);
	struct FString UPresetDesc_GetLocaleName(class UPresetDesc* PresetDesc);
	struct FString UNumFromTo_UpdateParameterDisplayName_Index_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& DisplayName);
	struct FString UNumFromTo_InitializeBlock_IndexBlock_Name(class UNumFromTo* NumFromTo, const struct FString& Name);
	struct FString UNumFromTo_InitializeBlock_CurrentBlock_Name(class UNumFromTo* NumFromTo, const struct FString& Name);
	struct FString UNamedVar_UpdateFormater_VarFormatNameText(class UNamedVar* var);
	struct FString UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_UpdateParameterDisplayName_ElementNormalDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_UpdateParameterDisplayName_ElementDisableDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_SetFunctionDesc_ForeachIndex_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_SetFunctionDesc_ForeachElement_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_SetFunctionDesc_ElementNormalDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_SetFunctionDesc_ElementDisableDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UExecuteable_SetFunctionDesc_ParamDisplayName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& ParamDisplayName);
	struct FString UEnumDesc_GetCurrentLocaleEnumValueName(class UEnumDesc* EnumDesc, const struct FName& enumValueName, const struct FString& enumValueLocName, bool useDefaultWhenNotFound);
	struct FString UEnumDesc_GetCurrentLocaleEnumTypeName(class UEnumDesc* EnumDesc, const struct FString& EnumTypeName, bool useDefaultWhenNotFound);
	struct FString UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName(class UFunctionDesc* Desc, const struct FString& CurrentIndexDisplayName);
	struct FString UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName(class UFunctionDesc* Desc, const struct FString& CurrentIndexDisplayName);
	struct FString UDefineFunction_SetFunctionDesc_ParamName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& ParamName);
	struct FString UCommonUIFunctionLibrary_GetTranslateString(const struct FString& KeyString);
	struct FString UCommonUIFunctionLibrary_GetLocaleString(const struct FString& KeyString);
	struct FString UColorDesc_GetLocaleName(class UColorDesc* ColorDesc);
	struct FString UBlockySearchWidget_RefreshTabContainerView_ContentName(class UUserWidget* pThis);
	struct FString UBlockySearchWidget_RefreshTabContainerView_CategoryName(class UUserWidget* pThis, class UBlockyCategoryItemObject* Category);
	struct FString UBlockyMenuWidget_UpdateMenus_MenuWidgetName(class UUserWidget* pThis, class UBlockyMenuItemObject* MenuItem);
	struct FString UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString(class UBlockyMenuItemObject_Search* MenuItem, class UBlockyBlockListItemObject* ItemObject);
	struct FString UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName(class UBlockyMenuItemObject_Search* MenuItem, class UBlockyCategoryItemObject* CategoryItem);
	struct FString UBlockyMenuItemObject_Search_PaintSearchedContentTitle();
	struct FString UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName(class UNamedVar* var);
	struct FString UBlockyMenuItemObject_Search_GetBlockSearchString_Block(class UBlockBase* InBlock);
	struct FString UBlockyMenuItemObject_Paint_CategoryName(class UBlockyMenuItemObject* MenuItem, class UBlockyCategoryItemObject* CategoryItem);
	struct FString UBlockyGraphData_GetCustomNames_CustomName(class UCustomConfig* Custom);
	void UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded(class UBlockyGraph* pThis, class UNamedVar* bLock);
	void UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded(class UBlockyGraph* pThis, class UBlockBase* bLock);
	struct FString UBlockyEditor_OnClickSlot_TypeFilterMenuName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& menuName);
	struct FString UBlockyEditor_OnClickSlot_TypeFilterCategoryName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& CategoryName);
	struct FString UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& slotCustomClickTypeName);
	struct FString UBlockyEditor_OnClickSlot_EnumName(class UBlockBase* slotHost, class UEnumDesc* EnumDesc, const struct FName& EnumName, const struct FString& EnumString);
	struct FString UBlockyEditor_OnClickSlot_CategoryItemName(class UBlockBase* slotHost, const struct FString& CategoryName);
	struct FString UBlockyEditor_OnClickSlot_BPMenuItemName(class UBlockBase* slotHost, const struct FString& menuName);
	struct FString UBlockyEditor_GetLocaleString(const struct FString& KeyString);
	struct FString UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName(class UUserWidget* pThis, class UBlockyCategoryItemObject* Category);
	struct FString UBlockyBlockListItemObject_Variable_GetStingUsedToSearch(class UBlockyBlockListItemObject_Variable* ItemObject);
	struct FString UBlockyBlockListItemObject_GetStingUsedToSearch(class UBlockyBlockListItemObject* ItemObject);
	struct FString UBlockyBlockListItemObject_Custom_GetStingUsedToSearch(class UBlockyBlockListItemObject_Custom* ItemObject);
	static bool Slot_IsValidPreset(const struct FHotFixSlotHandle& Handle, class UPresetDesc* Preset);
	static bool Slot_IsValidItem(const struct FHotFixSlotHandle& Handle, class UBlockyBlockListItemObject* Item);
	static bool Slot_IsValidHandle(const struct FHotFixSlotHandle& Handle);
	static bool Slot_IsValidBlock(const struct FHotFixSlotHandle& Handle, class UBlockBase* blk);
	static bool Slot_HasClickType(const struct FHotFixSlotHandle& Handle, int Type);
	static class UPresetDesc* Slot_GetSlotPresetDesc(const struct FHotFixSlotHandle& Handle);
	static bool Slot_GetSlotName(const struct FHotFixSlotHandle& Handle, struct FText* OutValue);
	static bool Slot_GetSlotItemType(const struct FHotFixSlotHandle& Handle, struct FType* OutValue);
	static bool Slot_GetSlotGetColorValue(const struct FHotFixSlotHandle& Handle, struct FLinearColor* OutValue);
	static bool Slot_GetSlotDisplayName(const struct FHotFixSlotHandle& Handle, struct FString* OutValue);
	static bool Slot_GetSlotDefaultValue(const struct FHotFixSlotHandle& Handle, struct FString* OutValue);
	static bool Slot_GetSlotCustomClickTypeName(const struct FHotFixSlotHandle& Handle, struct FString* OutValue);
	static bool Slot_GetSlotCustomClickType(const struct FHotFixSlotHandle& Handle, struct FString* OutValue);
	static class UColorDesc* Slot_GetSlotColorDesc(const struct FHotFixSlotHandle& Handle);
	static bool Slot_GetSlotClickType(const struct FHotFixSlotHandle& Handle, int* OutValue);
	static bool Slot_CanSetBlock(const struct FHotFixSlotHandle& Handle, class UBlockBase* Host, class UBlockBase* blk);
	static void SetTypeValue(int NewValue, struct FType* Type);
	static int GetTypeValue(const struct FType& Type);
	struct FString GetTranslateString_ShowTips(const struct FString& Tip);
	struct FString GetTranslateString(const struct FString& String);
	struct FString GetDisplayNameString_SlotDisplayName(const struct FHotFixSlotHandle& Handle, const struct FString& slotDisplayName, const struct FString& SlotName);
	struct FString FMsgData_CreateMessageData_InfoString_ReplaceTriggerName(class UFunctionDesc* Desc, const struct FString& ListItemFormatString, struct FString* InfoString);
	struct FString FMsgData_CreateMessageData_InfoString_ReplaceBlockName(class UBlockBase* bLock, const struct FString& ListItemFormatString, struct FString* InfoString);
	struct FString FMsgData_CreateMessageData_GetInfoTranslateString(class UBlockBase* bLock, const struct FHotFixSlotHandle& Slot, const struct FString& Info);
	struct FString FLocaleFormatter_UpdateVarFormatters_SeparatorStr(const struct FString& str);
	struct FString FLocaleFormatter_InitializeListItemFormats_ListItemFormatString(const struct FString& ListItemFormatString, bool bNeedLocalization);
	struct FString FLocaleFormatter_InitializeFormats_FormatString(const struct FString& FormatString, bool bNeedLocalization);
	struct FString FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName(class UBlockyBlockListItemObject* ListItemObject, int ParamIdx, const struct FString& DisplayName);
	struct FString FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName(class UBlockyBlockListItemObject* ListItemObject, int ParamIdx, const struct FString& DisplayName);
};


// Class BlockyLuaCore.IfElse
// 0x0020 (0x02F8 - 0x02D8)
class UIfElse : public UExecuteable
{
public:
	class UIfElseCondition*                            IfCondition;                                              // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UIfElseCondition*>                    ElseConditions;                                           // 0x02DC(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02E8(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.IfElse");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.IfElseCondition
// 0x0138 (0x0558 - 0x0420)
class UIfElseCondition : public UExeSequencerBase
{
public:
	class UIfElse*                                     ParentIfElse;                                             // 0x0420(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x134];                                     // 0x0424(0x0134) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.IfElseCondition");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.IndexerOperatorExpression
// 0x0000 (0x0020 - 0x0020)
class UIndexerOperatorExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.IndexerOperatorExpression");
        return pStaticClass;
    }


	static void SetTarget(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetIndices(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value);
	static struct FBlockyLuaHandle GetTarget(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetIndices(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateIndexerOperatorExpression();
};


// Class BlockyLuaCore.InsertArrayElement
// 0x01F0 (0x04C8 - 0x02D8)
class UInsertArrayElement : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x02D8(0x01F0) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.InsertArrayElement");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.JsonSerializable
// 0x0004 (0x0020 - 0x001C)
class UJsonSerializable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.JsonSerializable");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.LogicBase
// 0x0008 (0x0180 - 0x0178)
class ULogicBase : public UBlockBase
{
public:
	class UBrushData*                                  BrushBGSelected;                                          // 0x0178(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x017C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.LogicBase");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.LogicAnd
// 0x01E8 (0x0368 - 0x0180)
class ULogicAnd : public ULogicBase
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0180(0x01E8) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.LogicAnd");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.LogicCompare
// 0x02D0 (0x0450 - 0x0180)
class ULogicCompare : public ULogicBase
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0180(0x02D0) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.LogicCompare");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.LogicNot
// 0x00F0 (0x0270 - 0x0180)
class ULogicNot : public ULogicBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0180(0x00F0) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.LogicNot");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.LogicOr
// 0x01E8 (0x0368 - 0x0180)
class ULogicOr : public ULogicBase
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0180(0x01E8) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.LogicOr");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.Member
// 0x00F8 (0x0278 - 0x0180)
class UMember : public ULogicBase
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0180(0x00F8) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Member");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.NullExpression
// 0x0000 (0x0020 - 0x0020)
class UNullExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.NullExpression");
        return pStaticClass;
    }


	static struct FBlockyLuaHandle CreateNullExpression();
};


// Class BlockyLuaCore.NumFromTo
// 0x0608 (0x0A28 - 0x0420)
class UNumFromTo : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x4C0];                                     // 0x0420(0x04C0) MISSED OFFSET
	class UBrushData*                                  IconBrush;                                                // 0x08E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x144];                                     // 0x08E4(0x0144) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.NumFromTo");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.PostCustomEvent
// 0x0108 (0x03E0 - 0x02D8)
class UPostCustomEvent : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x02D8(0x0108) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.PostCustomEvent");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.PresetDesc
// 0x01D0 (0x01F0 - 0x0020)
class UPresetDesc : public UObjectDesc
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FString                                     KeyName;                                                  // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CodeName;                                                 // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        Tag;                                                      // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Icon;                                                     // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Menu;                                                     // 0x0064(0x000C) (Edit, BlueprintVisible)
	struct FText                                       Category;                                                 // 0x0070(0x000C) (Edit, BlueprintVisible)
	struct FString                                     AnimationPath;                                            // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SoundPath;                                                // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsSelected;                                               // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0095(0x000B) MISSED OFFSET
	bool                                               Visible;                                                  // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Removed;                                                  // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Localed;                                                  // 0x00A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14D];                                     // 0x00A3(0x014D) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.PresetDesc");
        return pStaticClass;
    }


	bool NameContainsString(const struct FString& filter);
	bool IsNameEmpty();
	bool IsCodeNameEmpty();
	bool HasIcon();
	struct FType GetType();
	struct FString GetLocaleName();
};


// Class BlockyLuaCore.PrimitiveExpression
// 0x0000 (0x0020 - 0x0020)
class UPrimitiveExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.PrimitiveExpression");
        return pStaticClass;
    }


	static TEnumAsByte<EBlockyValueType> GetValueType(const struct FBlockyLuaHandle& ptr);
	static void GetValueString(const struct FBlockyLuaHandle& ptr, struct FString* str);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_UInt8(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_UInt64(const struct FBlockyLuaHandle& Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_UInt32(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_UInt16(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Str(const struct FString& Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Int8(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Int64(const struct FBlockyLuaHandle& Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Int32(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Int16(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Float(float Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Double(const struct FBlockyLuaHandle& Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Bool(bool Value);
	static void Clear(const struct FBlockyLuaHandle& ptr);
};


// Class BlockyLuaCore.Return
// 0x0000 (0x02D8 - 0x02D8)
class UReturn : public UExecuteable
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Return");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.SelectionData
// 0x0024 (0x0040 - 0x001C)
class USelectionData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET
	class UBlockBase*                                  bLock;                                                    // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SelectionData");
        return pStaticClass;
    }


	bool IsCurrentSlot();
};


// Class BlockyLuaCore.SelfReferenceExpression
// 0x0000 (0x0020 - 0x0020)
class USelfReferenceExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SelfReferenceExpression");
        return pStaticClass;
    }


	static struct FBlockyLuaHandle CreateSelfReferenceExpression();
};


// Class BlockyLuaCore.SetArrayElement
// 0x01F0 (0x04C8 - 0x02D8)
class USetArrayElement : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x02D8(0x01F0) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SetArrayElement");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.SetVar
// 0x01E8 (0x04C0 - 0x02D8)
class USetVar : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x02D8(0x01E0) MISSED OFFSET
	class UBrushData*                                  IconBrush;                                                // 0x04B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UBrushData*                                  SelectionBG;                                              // 0x04BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SetVar");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.SnippetExpression
// 0x0000 (0x0020 - 0x0020)
class USnippetExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SnippetExpression");
        return pStaticClass;
    }


	static struct FString GetSnippetString(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetParameters(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateDefaultValueExpression();
};


// Class BlockyLuaCore.StatementBase
// 0x0000 (0x0020 - 0x0020)
class UStatementBase : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.StatementBase");
        return pStaticClass;
    }


	static void SetNextExpr(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& nextExpr);
	static void ReleaseExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetNextExpr(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateStatementBase();
};


// Class BlockyLuaCore.VariableDeclaration
// 0x0000 (0x0020 - 0x0020)
class UVariableDeclaration : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.VariableDeclaration");
        return pStaticClass;
    }


	static void SetVisitMode(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyVisitMode> visitMode);
	static void SetVariableName(const struct FBlockyLuaHandle& ptr, const struct FString& Name);
	static void SetInitValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& initValue);
	static void SetComment(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Comment);
	static TEnumAsByte<EBlockyVisitMode> GetVisitMode(const struct FBlockyLuaHandle& ptr);
	static struct FString GetVariableName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetInitValue(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetComment(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateVariableDeclaration();
};


// Class BlockyLuaCore.AssignOperatorStatement
// 0x0000 (0x0020 - 0x0020)
class UAssignOperatorStatement : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.AssignOperatorStatement");
        return pStaticClass;
    }


	static void SetTo(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& to);
	static void SetFrom(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& from);
	static struct FBlockyLuaHandle GetTo(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetFrom(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateAssignOperatorStatement();
};


// Class BlockyLuaCore.ExecuteSequenceStatement
// 0x0000 (0x0020 - 0x0020)
class UExecuteSequenceStatement : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ExecuteSequenceStatement");
        return pStaticClass;
    }


	static void SetSequence(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Sequence);
	static TArray<struct FBlockyLuaHandle> GetSequence(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateExecuteSequenceStatement();
};


// Class BlockyLuaCore.ReturnStatement
// 0x0000 (0x0020 - 0x0020)
class UReturnStatement : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ReturnStatement");
        return pStaticClass;
    }


	static struct FBlockyLuaHandle CreateReturnStatement();
};


// Class BlockyLuaCore.IfStatement
// 0x0000 (0x0020 - 0x0020)
class UIfStatement : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.IfStatement");
        return pStaticClass;
    }


	static void SetTrueStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& trueStatement);
	static void SetFalseStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& falseStatement);
	static void SetElseIfs(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> elseIfs);
	static void SetCondition(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Condition);
	static struct FBlockyLuaHandle GetTrueStatement(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetFalseStatement(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetElseIfs(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetCondition(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateIfStatement();
};


// Class BlockyLuaCore.ForLoopStatement
// 0x0000 (0x0020 - 0x0020)
class UForLoopStatement : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ForLoopStatement");
        return pStaticClass;
    }


	static void SetStepExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& stepExpression);
	static void SetLoopIndexName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName);
	static void SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody);
	static void SetEndExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& endExpression);
	static void SetBeginExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& beginExpression);
	static struct FBlockyLuaHandle GetStepExpression(const struct FBlockyLuaHandle& ptr);
	static struct FString GetLoopIndexName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetLoopBody(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetEndExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetBeginExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateForLoopStatement();
};


// Class BlockyLuaCore.ForeachLoopStatement
// 0x0000 (0x0020 - 0x0020)
class UForeachLoopStatement : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ForeachLoopStatement");
        return pStaticClass;
    }


	static void SetLoopItemName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName);
	static void SetLoopItemExp(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopItemExp);
	static void SetLoopIndexName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName);
	static void SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody);
	static struct FString GetLoopItemName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetLoopItemExp(const struct FBlockyLuaHandle& ptr);
	static struct FString GetLoopIndexName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetLoopBody(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateForeachLoopStatement();
};


// Class BlockyLuaCore.WhileLoopStatement
// 0x0000 (0x0020 - 0x0020)
class UWhileLoopStatement : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.WhileLoopStatement");
        return pStaticClass;
    }


	static void SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody);
	static void SetCondition(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Condition);
	static struct FBlockyLuaHandle GetLoopBody(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetCondition(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateWhileLoopStatement();
};


// Class BlockyLuaCore.ContinueStatement
// 0x0000 (0x0020 - 0x0020)
class UContinueStatement : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ContinueStatement");
        return pStaticClass;
    }


	static struct FBlockyLuaHandle CreateContinueStatement();
};


// Class BlockyLuaCore.BreakStatement
// 0x0000 (0x0020 - 0x0020)
class UBreakStatement : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BreakStatement");
        return pStaticClass;
    }


	static struct FBlockyLuaHandle CreateBreakStatement();
};


// Class BlockyLuaCore.CommentStatement
// 0x0000 (0x0020 - 0x0020)
class UCommentStatement : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CommentStatement");
        return pStaticClass;
    }


	static void SetNewLine(const struct FBlockyLuaHandle& ptr, bool newLine);
	static void SetCommentString(const struct FBlockyLuaHandle& ptr, const struct FString& commentString);
	static bool GetNewLine(const struct FBlockyLuaHandle& ptr);
	static struct FString GetCommentString(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateCommentStatement();
};


// Class BlockyLuaCore.ExpressionStatement
// 0x0000 (0x0020 - 0x0020)
class UExpressionStatement : public UStatementBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ExpressionStatement");
        return pStaticClass;
    }


	static void SetNextStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& nextStatement);
	static void SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& expression);
	static struct FBlockyLuaHandle GetNextStatement(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateExpressionStatement();
};


// Class BlockyLuaCore.StatementsData
// 0x0000 (0x0020 - 0x0020)
class UStatementsData : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.StatementsData");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.StringAppend
// 0x01F0 (0x0368 - 0x0178)
class UStringAppend : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0178(0x01F0) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.StringAppend");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.StringAppendExpression
// 0x0000 (0x0020 - 0x0020)
class UStringAppendExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.StringAppendExpression");
        return pStaticClass;
    }


	static void SetRight(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetLeft(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetExtras(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value);
	static struct FBlockyLuaHandle GetRight(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetLeft(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetExtras(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateStringAppendExpression();
};


// Class BlockyLuaCore.SubGraphCommandData
// 0x0048 (0x0068 - 0x0020)
class USubGraphCommandData : public UBlockyCommandData
{
public:
	struct FString                                     Name;                                                     // 0x0020(0x000C) (ZeroConstructor)
	struct FString                                     Type;                                                     // 0x002C(0x000C) (ZeroConstructor)
	struct FString                                     SrcName;                                                  // 0x0038(0x000C) (ZeroConstructor)
	TArray<int>                                        InCallStackPos;                                           // 0x0044(0x000C) (ZeroConstructor)
	int                                                IdxInSubBLocky;                                           // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBlockyGraph*                                OpGraph;                                                  // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SavedName;                                                // 0x0058(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SubGraphCommandData");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.TemplateCommandData
// 0x0020 (0x0040 - 0x0020)
class UTemplateCommandData : public UBlockyCommandData
{
public:
	class UBlockyGraph*                                Template;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CreatedGraphName;                                         // 0x0024(0x000C) (ZeroConstructor)
	struct FString                                     CreatedGraphType;                                         // 0x0030(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.TemplateCommandData");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.TypeConvertDesc
// 0x0024 (0x0040 - 0x001C)
class UTypeConvertDesc : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     HotfixUserData;                                           // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x002C(0x0010) MISSED OFFSET
	class UFunctionDesc*                               FunctionDesc;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.TypeConvertDesc");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.TypeFilter
// 0x00F0 (0x0268 - 0x0178)
class UTypeFilter : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0178(0x00F0) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.TypeFilter");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.TypeReference
// 0x0000 (0x0020 - 0x0020)
class UTypeReference : public UBlueprintFunctionLibrary
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.TypeReference");
        return pStaticClass;
    }


	static void SetTypeName(const struct FBlockyLuaHandle& Self, const struct FString& Name);
	static void ReleaseTypeReference(const struct FBlockyLuaHandle& Self);
	static struct FString GetTypeName(const struct FBlockyLuaHandle& Self);
	static struct FBlockyLuaHandle FindClass(const struct FString& Name);
	static struct FBlockyLuaHandle CreateTypeReference3(const struct FBlockyLuaHandle& klass, int numOfPointer, bool isRefer);
	static struct FBlockyLuaHandle CreateTypeReference();
	struct FBlockyLuaStub AsStub(const struct FBlockyLuaHandle& ptr);
};


// Class BlockyLuaCore.TypeString
// 0x0000 (0x0178 - 0x0178)
class UTypeString : public UBlockBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.TypeString");
        return pStaticClass;
    }

};


// Class BlockyLuaCore.UnaryOperatorExpression
// 0x0000 (0x0020 - 0x0020)
class UUnaryOperatorExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.UnaryOperatorExpression");
        return pStaticClass;
    }


	static void SetValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetOperation(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyUnaryOperation> Op);
	static struct FBlockyLuaHandle GetValue(const struct FBlockyLuaHandle& ptr);
	static TEnumAsByte<EBlockyUnaryOperation> GetOperation(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateUnaryOperatorExpression();
};


// Class BlockyLuaCore.VarDefiner
// 0x00FC (0x0118 - 0x001C)
class UVarDefiner : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x001C(0x0050) MISSED OFFSET
	struct FString                                     HotfixUserData;                                           // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TMap<struct FString, struct FString>               ShowNameMap;                                              // 0x0080(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ShowIcon;                                                 // 0x00BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ShowIconSelected;                                         // 0x00C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DefaultValueString;                                       // 0x00D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bHideInCustom;                                            // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlockyVarInitType>                    InitType;                                                 // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	TArray<struct FString>                             ExcludePresetCategories;                                  // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             ExcludePresetCodeNames;                                   // 0x00F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x1C];                                      // 0x00FC(0x001C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.VarDefiner");
        return pStaticClass;
    }


	void SetType(const struct FType& Value);
	TEnumAsByte<EBlockyVariableType> GetVarTypeEnum();
	TEnumAsByte<EBlockyListItemType> GetTypeEnum();
	struct FType GetType();
	struct FString GetFirstShowName();
	struct FString GetCurrentLocateShowName();
};


// Class BlockyLuaCore.VariableReferenceExpression
// 0x0000 (0x0020 - 0x0020)
class UVariableReferenceExpression : public UExpressionBase
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.VariableReferenceExpression");
        return pStaticClass;
    }


	static void SetVariableName(const struct FBlockyLuaHandle& ptr, const struct FString& Name);
	static void SetHost(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Host);
	static struct FString GetVariableName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetHost(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateVariableReferenceExpression2(const struct FBlockyLuaHandle& Host, const struct FString& VariableName);
	static struct FBlockyLuaHandle CreateVariableReferenceExpression(const struct FString& VariableName);
};


// Class BlockyLuaCore.While
// 0x00F8 (0x0518 - 0x0420)
class UWhile : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0420(0x00F0) MISSED OFFSET
	class UBrushData*                                  IconBrush;                                                // 0x0510(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0514(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.While");
        return pStaticClass;
    }

};


}

