#pragma once

// PUBG MOBILE (3.6.0) TELEGRAM MALIK:-@K_Y_2  
// GENERATE ON Thu Jan 16 09:04:50 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LanguageSaveGame.LanguageSaveGame_C
// 0x001C (0x003C - 0x0020)
class ULanguageSaveGame_C : public USaveGame
{
public:
	struct FString                                     currentLanguage;                                          // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SaveSlotName;                                             // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                UserIndex;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass LanguageSaveGame.LanguageSaveGame_C");
		return pStaticClass;
	}


	class USaveGame* LoadData();
	void SaveData(bool* SaveDataState);
};


}

