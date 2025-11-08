#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:35 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Ninja.BattleFieldCircle
// 0x0090 (0x0458 - 0x03C8)
class ABattleFieldCircle : public ALuaActor
{
public:
	struct FCircleMoveInfo                             CircleMoveInfo;                                           // 0x03C8(0x0024) (BlueprintVisible, Net)
	float                                              CircleInterval;                                           // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurRadius;                                                // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FName                                       OnlyCheckPlayerTag;                                       // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     LuaEventType;                                             // 0x0400(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LuaEventID;                                               // 0x040C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<uint32_t, bool>                               PlayerKeyCache;                                           // 0x0418(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0454(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Ninja.BattleFieldCircle");
        return pStaticClass;
    }


	void StartMove(const struct FVector& StartCircle, const struct FVector& EndCircle, float MoveTime);
	void SetCircle(const struct FVector& circle);
	void OnRep_CircleMoveInfo();
	bool IsInBlueCircle(class AActor* uActor);
	void InitCircle(const struct FVector& InitCircle);
	TArray<uint32_t> GetAllPlayerInCircle();
	void CircleMove();
	void CheckInCircle();
};


}

