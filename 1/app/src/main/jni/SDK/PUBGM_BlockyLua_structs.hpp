#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:34 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum BlockyLua.ESearchResultVisibleType
enum class ESearchResultVisibleType : uint8_t
{
	ESearchResultVisibleType__SRVT_ShowAll = 0,
	ESearchResultVisibleType__SRVT_OnlyBlocks = 1,
	ESearchResultVisibleType__SRVT_OnlyGraphs = 2,
	ESearchResultVisibleType__SRVT_MAX = 3
};


// Enum BlockyLua.BLOCKYLUA_AUTO_SCROLL_TYPE
enum class EBLOCKYLUA_AUTO_SCROLL_TYPE : uint8_t
{
	BLOCKYLUA_AUTO_SCROLL_TYPE__LEFT_RIGHT = 0,
	BLOCKYLUA_AUTO_SCROLL_TYPE__PING_PONG = 1,
	BLOCKYLUA_AUTO_SCROLL_TYPE__BLOCKYLUA_AUTO_SCROLL_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BlockyLua.IntArrayWrapper
// 0x000C
struct FIntArrayWrapper
{
	TArray<int>                                        Values;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct BlockyLua.SlotData
// 0x001C
struct FSlotData
{
	class UBlockBase*                                  LinkedSlotHost;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0004(0x0018) MISSED OFFSET
};

}

