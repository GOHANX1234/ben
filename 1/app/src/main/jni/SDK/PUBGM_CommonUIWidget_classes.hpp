#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CommonUIWidget.CommonInputBox
// 0x0000 (0x0250 - 0x0250)
class UCommonInputBox : public ULuaUserWidget
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonInputBox");
        return pStaticClass;
    }

};


// Class CommonUIWidget.CommonPopupBox
// 0x0000 (0x0250 - 0x0250)
class UCommonPopupBox : public ULuaUserWidget
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonPopupBox");
        return pStaticClass;
    }

};


// Class CommonUIWidget.CommonSearchBox
// 0x0000 (0x0250 - 0x0250)
class UCommonSearchBox : public ULuaUserWidget
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonUIWidget.CommonSearchBox");
        return pStaticClass;
    }

};


}

