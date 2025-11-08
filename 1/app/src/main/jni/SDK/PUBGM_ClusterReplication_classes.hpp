#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClusterReplication.ClusterReplicationSubsystem
// 0x043C (0x0458 - 0x001C)
class UClusterReplicationSubsystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x43C];                                     // 0x001C(0x043C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClusterReplication.ClusterReplicationSubsystem");
        return pStaticClass;
    }


	void SetAutoClearCache(bool Val);
	void SetAutoCache(bool Val);
	void RemoveAllCachedObjectData();
};


// Class ClusterReplication.ClusterEntityInterface
// 0x0000 (0x0020 - 0x0020)
class UClusterEntityInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClusterReplication.ClusterEntityInterface");
        return pStaticClass;
    }

};


}

