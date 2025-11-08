#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UgcLua.CreativeLuaVM
// 0x026C (0x0288 - 0x001C)
class UCreativeLuaVM : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	uint64_t                                           SuspendFrameCounter;                                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint64_t                                           RunFrameCounter;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CostCheckInterval;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	double                                             FrameExecuteTime;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             SuspendFrameExecuteTime;                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CrossVMAPICost;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWorld*                                      World;                                                    // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	class AWorldSettings*                              WorldSettings;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	bool                                               bExitWhenFatalOccurs;                                     // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExecuting;                                               // 0x0061(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAbort;                                                   // 0x0062(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	int                                                MaxLoopRunCount;                                          // 0x0064(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxExecuteAPICount;                                       // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, double>                       ElapsedTimeMap;                                           // 0x006C(0x0050) (ZeroConstructor)
	TMap<struct FString, double>                       MaxElapsedTimeMap;                                        // 0x00A8(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          CountBlockMap;                                            // 0x00E4(0x0050) (ZeroConstructor)
	bool                                               bCanFreeze;                                               // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FScriptDelegate                             AtPanicDelegate;                                          // 0x0128(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0138(0x0010) MISSED OFFSET
	struct FScriptDelegate                             CodeFinishDelegate;                                       // 0x0148(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CodeOutputDelegate;                                       // 0x0158(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             HasEventToRunDelegate;                                    // 0x0168(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             PrepareEventDelegate;                                     // 0x0178(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ExecuteDelayedDelegate;                                   // 0x0188(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CodePreExecuteDelegate;                                   // 0x0198(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData06[0x14];                                      // 0x01A8(0x0014) MISSED OFFSET
	struct FString                                     MainModule;                                               // 0x01BC(0x000C) (ZeroConstructor)
	struct FString                                     EventHandlerName;                                         // 0x01C8(0x000C) (ZeroConstructor)
	TScriptInterface<class UCreativeEntityInterface>   EntityInterface;                                          // 0x01D4(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xAC];                                      // 0x01DC(0x00AC) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UgcLua.CreativeLuaVM");
        return pStaticClass;
    }


	void Step();
	void SetPerformanceLog(bool bEnable);
	void SetNowRC(int idx);
	void SetCodeOutputDelegate(const struct FScriptDelegate& InDelegate);
	void SetCodeFinishDelegate(const struct FScriptDelegate& InDelegate);
	void Reset();
	void RequireMain();
	void RegisterLuaFunctions(const struct FString& ModuleName, TArray<struct FString> OpenFunctions);
	void RegisterLuaAPIStringValue(const struct FString& ModuleName, const struct FString& Name, const struct FString& Value);
	void RegisterLuaAPINumberValue(const struct FString& ModuleName, const struct FString& Name, float Value);
	void RegisterLuaAPIBoolValue(const struct FString& ModuleName, const struct FString& Name, bool Value);
	void RefreshLastCommentInfo();
	void PostInit();
	void LogBlockExecuteTime(const struct FString& BlockID);
	void KillJob(int JobId);
	void Init(int MemLimit);
	int GetNowRC();
	int GetMemoryUsed();
	struct FString GetLastCommentInfo();
	void FreezeGameTime(bool bCond);
	void ExtractCurrentCode(int* CodeIdx, struct FString* code);
	int EnqueueCode(struct FString* RuntimeCode, int* CodeUID);
	struct FString DescribeLuaThread();
	void Close();
	void AllowRequire(bool bAllow);
};


// Class UgcLua.CreativeEntityInterface
// 0x0000 (0x0020 - 0x0020)
class UCreativeEntityInterface : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UgcLua.CreativeEntityInterface");
        return pStaticClass;
    }


	class UObject* UUID2UObject(int64_t* UUID);
	bool UUID2Type(int64_t* UUID, EEntityType* Type, unsigned char* SubType);
	uint32_t UUID2Key(int64_t* UUID);
	void RemoveUUID(int64_t* UUID);
	int64_t GetInstanceObjectUUID(int64_t* UUID);
	int64_t CreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType);
	int64_t CreateEntityIfNotExistsFromKey(uint32_t* Key, EEntityType* Type, unsigned char* SubType);
};


}

