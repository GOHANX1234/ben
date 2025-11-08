#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:33 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TableResInclude.BaseTableResMap
// 0x0044 (0x0060 - 0x001C)
class UBaseTableResMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x001C(0x0040) MISSED OFFSET
	class UScriptStruct*                               DataStruct;                                               // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TableResInclude.BaseTableResMap");
        return pStaticClass;
    }

};


// Class TableResInclude.EvoBaseMapUIMarkTableMap
// 0x0000 (0x0060 - 0x0060)
class UEvoBaseMapUIMarkTableMap : public UBaseTableResMap
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TableResInclude.EvoBaseMapUIMarkTableMap");
        return pStaticClass;
    }


	void TraversTable(class UUAEDataTable* TableData, const struct FName& Key);
};


// Class TableResInclude.EvoBaseModTableTestTableMap
// 0x0000 (0x0060 - 0x0060)
class UEvoBaseModTableTestTableMap : public UBaseTableResMap
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TableResInclude.EvoBaseModTableTestTableMap");
        return pStaticClass;
    }


	void TraversTable(class UUAEDataTable* TableData, const struct FName& Key);
};


}

