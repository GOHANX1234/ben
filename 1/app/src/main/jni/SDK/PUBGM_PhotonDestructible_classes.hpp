#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:32 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PhotonDestructible.PhotonDestructibleSurfaceComponent
// 0x0050 (0x0890 - 0x0840)
class UPhotonDestructibleSurfaceComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0840(0x0004) MISSED OFFSET
	TEnumAsByte<EFracturedAxis>                        MaskUAxis;                                                // 0x0844(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFracturedAxis>                        MaskVAxis;                                                // 0x0845(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0846(0x0002) MISSED OFFSET
	class UTexture2D*                                  MaskTexture2D;                                            // 0x0848(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	struct FPDSurfaceNetData                           SurfaceNetData;                                           // 0x084C(0x0010) (Net)
	struct FGuid                                       TargetPuppetGUID;                                         // 0x085C(0x0010) (Edit, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x086C(0x0024) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceComponent");
        return pStaticClass;
    }


	void Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
	void OnRep_SurfaceNetData();
	void Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
};


// Class PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent
// 0x0040 (0x0A40 - 0x0A00)
class UPhotonDestructibleInstancedSurfaceComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A00(0x0004) MISSED OFFSET
	TEnumAsByte<EFracturedAxis>                        MaskUAxis;                                                // 0x0A04(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFracturedAxis>                        MaskVAxis;                                                // 0x0A05(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0A06(0x0002) MISSED OFFSET
	class UMaterialInterface*                          Texture2DArrayMaterial;                                   // 0x0A08(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AtlasMaterial;                                            // 0x0A0C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPDSurfaceNetData                           SurfaceNetData;                                           // 0x0A10(0x0010) (Net)
	TArray<struct FGuid>                               TargetPuppetGUID;                                         // 0x0A20(0x000C) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0A2C(0x0014) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent");
        return pStaticClass;
    }


	void Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
	void OnRep_SurfaceNetData();
	void Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData);
};


// Class PhotonDestructible.FEdgeData
// 0x0004 (0x0020 - 0x001C)
class UFEdgeData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FEdgeData");
        return pStaticClass;
    }

};


// Class PhotonDestructible.FracturedFragmentInfo
// 0x0044 (0x0060 - 0x001C)
class UFracturedFragmentInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FVector                                     centerPoint;                                              // 0x0028(0x000C) (IsPlainOldData)
	TArray<int>                                        neighbors;                                                // 0x0034(0x000C) (ZeroConstructor)
	TArray<struct FPlane>                              FacePlaneData;                                            // 0x0040(0x000C) (ZeroConstructor)
	TArray<struct FVector>                             PolygonVertex;                                            // 0x004C(0x000C) (ZeroConstructor)
	unsigned char                                      CanDestroy : 1;                                           // 0x0058(0x0001) (Edit)
	unsigned char                                      HasTriangle : 1;                                          // 0x0058(0x0001) (Edit, EditConst)
	unsigned char                                      IsBorder : 1;                                             // 0x0058(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.FracturedFragmentInfo");
        return pStaticClass;
    }

};


// Class PhotonDestructible.MaterialExpressionObjectLocalPosition
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionObjectLocalPosition : public UMaterialExpression
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.MaterialExpressionObjectLocalPosition");
        return pStaticClass;
    }

};


// Class PhotonDestructible.MaterialExpressionGetPDInstancedSurfaceMask
// 0x0000 (0x0048 - 0x0048)
class UMaterialExpressionGetPDInstancedSurfaceMask : public UMaterialExpression
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.MaterialExpressionGetPDInstancedSurfaceMask");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructibleAtlasPool
// 0x0008 (0x00D0 - 0x00C8)
class UPhotonDestructibleAtlasPool : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleAtlasPool");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructibleMgr
// 0x0010 (0x0350 - 0x0340)
class APhotonDestructibleMgr : public AActor
{
public:
	class UPhotonDestructibleAtlasPool*                AtlasPool;                                                // 0x0340(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhotonDestructibleTexture2DArrayManager*    Texture2DArrayManager;                                    // 0x0344(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhotonDestructibleSurfaceConfig*            SurfaceConfig;                                            // 0x0348(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPhotonDestructiblePuppetMgr*                PuppetMgr;                                                // 0x034C(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleMgr");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructiblePuppet
// 0x0010 (0x02E0 - 0x02D0)
class UPhotonDestructiblePuppet : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppet");
        return pStaticClass;
    }


	void TriggerPuppetEvent(int EventID);
};


// Class PhotonDestructible.PhotonDestructiblePuppetContainer
// 0x0020 (0x02F0 - 0x02D0)
class UPhotonDestructiblePuppetContainer : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET
	TArray<struct FString>                             TargetsName;                                              // 0x02D8(0x000C) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0xC];                                       // 0x02E4(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppetContainer");
        return pStaticClass;
    }


	void TriggerPuppetEvent(const struct FString& ObjectName, int EventID);
};


// Class PhotonDestructible.PhotonDestructiblePuppetMgr
// 0x0038 (0x0100 - 0x00C8)
class UPhotonDestructiblePuppetMgr : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppetMgr");
        return pStaticClass;
    }


	void Client_TriggerPuppetEvent(const struct FGuid& PuppetGUID, int EventID);
};


// Class PhotonDestructible.PhotonDestructiblePuppetTarget
// 0x0000 (0x0020 - 0x0020)
class UPhotonDestructiblePuppetTarget : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructiblePuppetTarget");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructibleSurfaceActor
// 0x0008 (0x0348 - 0x0340)
class APhotonDestructibleSurfaceActor : public AActor
{
public:
	class UPhotonDestructibleSurfaceComponent*         SurfaceComponent;                                         // 0x0340(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceActor");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActor
// 0x0008 (0x0348 - 0x0340)
class APhotonDestructibleInstancedSurfaceActor : public AActor
{
public:
	class UPhotonDestructibleInstancedSurfaceComponent* InstancedSurfaceComponent;                                // 0x0340(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActor");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructibleSurfaceActorBase
// 0x0000 (0x0020 - 0x0020)
class UPhotonDestructibleSurfaceActorBase : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceActorBase");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActorBase
// 0x0000 (0x0020 - 0x0020)
class UPhotonDestructibleInstancedSurfaceActorBase : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleInstancedSurfaceActorBase");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructibleSurfaceBase
// 0x0000 (0x0020 - 0x0020)
class UPhotonDestructibleSurfaceBase : public UInterface
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceBase");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructibleSurfaceConfig
// 0x0008 (0x00D0 - 0x00C8)
class UPhotonDestructibleSurfaceConfig : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceConfig");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructibleSurfaceMask
// 0x001C (0x0038 - 0x001C)
class UPhotonDestructibleSurfaceMask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FIntPoint                                   MaskSize;                                                 // 0x0020(0x0008) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleSurfaceMask");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructibleTexture2DArrayManager
// 0x0018 (0x00E0 - 0x00C8)
class UPhotonDestructibleTexture2DArrayManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleTexture2DArrayManager");
        return pStaticClass;
    }

};


// Class PhotonDestructible.PhotonDestructibleTexturePool
// 0x0018 (0x00E0 - 0x00C8)
class UPhotonDestructibleTexturePool : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonDestructible.PhotonDestructibleTexturePool");
        return pStaticClass;
    }

};


}

