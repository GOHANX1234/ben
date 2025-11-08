#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:33 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PhotonBlast.PhotonReplicationStaticMeshComponent
// 0x00A0 (0x08E0 - 0x0840)
class UPhotonReplicationStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0840(0x003C) MISSED OFFSET
	int                                                ClusterUniqueID;                                          // 0x087C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bCanMove;                                                 // 0x0880(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAOIEntityType                                     AOIEntityType;                                            // 0x0881(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EClusterEntityState                                AOIEntityState;                                           // 0x0882(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      ClusterReplicationOpen : 1;                               // 0x0883(0x0001) (Edit, BlueprintVisible)
	class UDestructionSubsystem*                       SubsystemPtr;                                             // 0x0884(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0888(0x0004) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x088C(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x08C8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0xC];                                       // 0x08D4(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonReplicationStaticMeshComponent");
        return pStaticClass;
    }


	void UnRegistLuaTick();
	void UnRegisterFromCluster();
	void SetMoveable(bool Value);
	void SetClusterUniqueID(int InClusterID);
	void SetClusterEntityState(EClusterEntityState EntityState);
	void RegistLuaTick(float TickInterval);
	void RegisterToCluster();
	void MarkPropDirty(int PropIndex);
};


// Class PhotonBlast.PhotonDestructibleMeshComponent
// 0x01E0 (0x0AC0 - 0x08E0)
class UPhotonDestructibleMeshComponent : public UPhotonReplicationStaticMeshComponent
{
public:
	struct FPhotonDestructibleImpactParam              ImpactParam;                                              // 0x08E0(0x0008) (Edit)
	unsigned char                                      SynchronizeChunkData : 1;                                 // 0x08E8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08E9(0x0003) MISSED OFFSET
	class UPhotonDestructibleMesh*                     PhotonDestructibleMesh;                                   // 0x08EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     FragmentsCollisionEnabled;                                // 0x08F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08F1(0x0007) MISSED OFFSET
	struct FName                                       FragmentsCollisionProfileName;                            // 0x08F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InitialVisible : 1;                                       // 0x0900(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0901(0x0003) MISSED OFFSET
	struct FPhotonHideReplicationData                  HideReplicationData;                                      // 0x0904(0x0028) (Net)
	unsigned char                                      UnknownData03[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	struct FPhotonDetachReplicationData                DetachReplicationData;                                    // 0x0930(0x0030) (Net)
	struct FPhotonSlideReplicationData                 SlideReplicationData;                                     // 0x0960(0x001C) (Net)
	float                                              FragmentsMaxHp;                                           // 0x097C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnableCheckedSupportedFloor : 1;                          // 0x0980(0x0001) (Edit)
	unsigned char                                      EnableSeverImpactPoint : 1;                               // 0x0980(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x13F];                                     // 0x0981(0x013F) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonDestructibleMeshComponent");
        return pStaticClass;
    }


	void SetupFragmentsMaxHp(float HP);
	void SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate);
	void SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force);
	void Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocityAndRotateStrength, const struct FVector4& WorldImpactPointAndSpreadStrength, float HP, float Radius, bool Attenuation);
	bool Server_DamageFragmentsByHp(TArray<int> FragmentsIndex, TArray<float> HP, const struct FVector4& WorldImpactPointAndSpreadStrength, const struct FVector4& WorldImpactVelocityAndRotateSpeed);
	void OnRep_SlideData();
	void OnRep_ImpactData();
	void OnRep_FragmentsState();
	bool IsFragmentCanDestroy(int FragmentItemIndex);
	bool IsFragmentCanBeDamaged(int FragmentItemIndex);
	class UPhotonDestructibleMesh* GetPhotonDestructibleMesh();
	bool GetFragmentTransform(int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform);
	bool GetFragmentsWorldPosition(int FragmentIndex, struct FVector* FragmentPosition);
	bool GetFragmentsNotDamaged(bool IsReturnNotDestroyedFragments, TArray<int>* Fragments);
	bool GetFragmentsDamaged(TArray<int>* Fragments);
	bool GetFragmentsByRadius(const struct FVector& HitPoint, float Radius, int DamageType, TArray<int>* FragmentsIndex, TArray<float>* ImpactDistance);
	int GetFragmentItemCount();
	bool GetFragmentBounds(int FragmentIndex, bool WorldSpace, struct FBox* OutBox);
	class UPhotonFracturedMesh* GetFracturedMesh();
	void ClientDamageAndInitalFragments(TArray<int> DamagedFragmentItemIndex, TArray<int> InitialFragmentItemIndex);
};


// Class PhotonBlast.PhotonReplicationInstancedStaticMeshComponent
// 0x00A0 (0x09D0 - 0x0930)
class UPhotonReplicationInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0930(0x0038) MISSED OFFSET
	int                                                ClusterUniqueID;                                          // 0x0968(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bCanMove;                                                 // 0x096C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAOIEntityType                                     AOIEntityType;                                            // 0x096D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EClusterEntityState                                AOIEntityState;                                           // 0x096E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClusterReplicationOpen : 1;                               // 0x096F(0x0001) (Edit, BlueprintVisible)
	class UDestructionSubsystem*                       SubsystemPtr;                                             // 0x0970(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0978(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x09B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x09C0(0x0010) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonReplicationInstancedStaticMeshComponent");
        return pStaticClass;
    }


	void UnRegistLuaTick();
	void UnRegisterFromCluster();
	void SetMoveable(bool Value);
	void SetClusterUniqueID(int InClusterID);
	void SetClusterEntityState(EClusterEntityState EntityState);
	void RegistLuaTick(float TickInterval);
	void RegisterToCluster();
	void MarkPropDirty(int PropIndex);
};


// Class PhotonBlast.PhotonInstancedDestructibleMeshComponent
// 0x0150 (0x0B20 - 0x09D0)
class UPhotonInstancedDestructibleMeshComponent : public UPhotonReplicationInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x09D0(0x0004) MISSED OFFSET
	class UPhotonDestructibleMesh*                     PhotonDestructibleMesh;                                   // 0x09D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     FragmentsCollisionEnabled;                                // 0x09D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x09D9(0x0007) MISSED OFFSET
	struct FName                                       FragmentsCollisionProfileName;                            // 0x09E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FPhotonDestructibleFragmentStateData> HideInstanceReplicationData;                              // 0x09E8(0x000C) (Net, ZeroConstructor)
	TArray<struct FPhotonDestructibleImpactData>       DetachInstanceReplicationData;                            // 0x09F4(0x000C) (Net, ZeroConstructor)
	float                                              FragmentsMaxHp;                                           // 0x0A00(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnableCheckedSupportedFloor : 1;                          // 0x0A04(0x0001) (Edit)
	unsigned char                                      EnableSeverImpactPoint : 1;                               // 0x0A04(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x11B];                                     // 0x0A05(0x011B) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonInstancedDestructibleMeshComponent");
        return pStaticClass;
    }


	void SetupFragmentsMaxHp(float HP);
	void SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate);
	void SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial);
	void SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force);
	void Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocity, const struct FVector4& WorldHitPointAndSpreadSpeed, float HP, float Radius, bool Attenuation);
	TArray<int> ReplaceAllInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices);
	void OnRep_ImpactData();
	void OnRep_FragmentsState();
	bool IsFragmentCanDestroy(int InstanceIndex, int FragmentItemIndex);
	class UPhotonDestructibleMesh* GetPhotonDestructibleMesh();
	TArray<int> GetInstancesOverlappingSphere(const struct FVector& Center, float Radius, bool bSphereInWorldSpace);
	int GetInstanceItemCount();
	bool GetFragmentTransform(int InstanceIndex, int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform);
	bool GetFragmentsWorldPosition(int InstanceIndex, int FragmentIndex, struct FVector* FragmentPosition);
	bool GetFragmentsNotDamaged(int InstanceIndex, bool IsReturnNotDestroyedFragments, TArray<int>* FragmentsNoDamaged);
	bool GetFragmentsDamaged(int InstanceIndex, TArray<int>* FragmentsDamaged);
	int GetFragmentItemCount();
	bool GetFragmentBounds(int InstanceIndex, int FragmentIndex, bool WorldSpace, struct FBox* OutBox);
	class UPhotonFracturedMesh* GetFracturedMesh();
	int AddInstanceWorldSpace(const struct FTransform& WorldTransform);
	TArray<int> AddInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices, bool bMarkRenderStateDirty);
	int AddInstance(const struct FTransform& InstanceTransform);
};


// Class PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent
// 0x00B0 (0x0BD0 - 0x0B20)
class UPhotonHierarchicalInstancedDestructibleMeshComponent : public UPhotonInstancedDestructibleMeshComponent
{
public:
	TArray<int>                                        SortedInstances;                                          // 0x0B20(0x000C) (ZeroConstructor)
	int                                                NumBuiltInstances;                                        // 0x0B2C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B30(0x0004) MISSED OFFSET
	struct FBox                                        BuiltInstanceBounds;                                      // 0x0B34(0x001C) (IsPlainOldData)
	struct FBox                                        UnbuiltInstanceBounds;                                    // 0x0B50(0x001C) (IsPlainOldData)
	TArray<struct FBox>                                UnbuiltInstanceBoundsList;                                // 0x0B6C(0x000C) (ZeroConstructor)
	TArray<int>                                        UnbuiltInstanceIndexList;                                 // 0x0B78(0x000C) (ZeroConstructor)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0B84(0x0001)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0B85(0x001F) MISSED OFFSET
	int                                                OcclusionLayerNumNodes;                                   // 0x0BA4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            CacheMeshExtendedBounds;                                  // 0x0BA8(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0BC4(0x0008) MISSED OFFSET
	int                                                MinInstancesToSplitNode;                                  // 0x0BCC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent");
        return pStaticClass;
    }


	bool ShowInstances(TArray<int> InstanceIndices, TArray<struct FTransform> InstanceTransforms);
	bool RemoveInstances(TArray<int> InstancesToRemove);
};


// Class PhotonBlast.PhotonDestructibleMeshActor
// 0x0008 (0x0348 - 0x0340)
class APhotonDestructibleMeshActor : public AActor
{
public:
	unsigned char                                      DestructibleMeshActorReplication : 1;                     // 0x0340(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonDestructibleMeshActor");
        return pStaticClass;
    }

};


// Class PhotonBlast.ClusterReplicationVolume
// 0x0048 (0x03A8 - 0x0360)
class AClusterReplicationVolume : public AVolume
{
public:
	bool                                               bForReplication;                                          // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForClusterDivide;                                        // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	struct FClusterAOIConfig                           ClusterConfig;                                            // 0x0364(0x0034) (Edit, BlueprintVisible)
	struct FClusterReplicationProxy                    ClusterReplication;                                       // 0x0398(0x000C) (Net)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ClusterReplicationVolume");
        return pStaticClass;
    }

};


// Class PhotonBlast.ClusterReplicationSelectVolume
// 0x0008 (0x0368 - 0x0360)
class AClusterReplicationSelectVolume : public AVolume
{
public:
	int16_t                                            LevelGroup;                                               // 0x0360(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0362(0x0006) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ClusterReplicationSelectVolume");
        return pStaticClass;
    }

};


// Class PhotonBlast.PhotonDestructibleMesh
// 0x00A8 (0x0250 - 0x01A8)
class UPhotonDestructibleMesh : public UStaticMesh
{
public:
	TEnumAsByte<EPhotonDestructibleAction>             DestructibleAction;                                       // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseDefaultParameter : 1;                                  // 0x01A9(0x0001) (Edit)
	TEnumAsByte<EPhotonCollisionType>                  FragmentCollisonType;                                     // 0x01AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01AB(0x0001) MISSED OFFSET
	struct FPhotonDestructibleMeshPhysicsDetachData    PhysicsDetachData;                                        // 0x01AC(0x0028) (Edit)
	unsigned char                                      UnknownData01[0x7C];                                      // 0x01D4(0x007C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonDestructibleMesh");
        return pStaticClass;
    }

};


// Class PhotonBlast.DestructionSubsystem
// 0x0000 (0x0458 - 0x0458)
class UDestructionSubsystem : public UClusterReplicationSubsystem
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.DestructionSubsystem");
        return pStaticClass;
    }

};


// Class PhotonBlast.PhotonFracturedMesh
// 0x00A4 (0x00C0 - 0x001C)
class UPhotonFracturedMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<int>                                        InsideMaterialIndex;                                      // 0x0028(0x000C) (Edit, ZeroConstructor)
	TMap<int, class UPhotonFracturedFragmentInfo*>     FragmentIndex2FragmentInfo;                               // 0x0034(0x0050) (ZeroConstructor)
	TMap<struct FName, class UPhotonFracturedFragmentInfo*> FragmentName2FragmentInfo;                                // 0x0070(0x0050) (ZeroConstructor)
	struct FSupportGraph                               SupportGraph;                                             // 0x00AC(0x0010)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFracturedMesh");
        return pStaticClass;
    }

};


// Class PhotonBlast.PhotonFracturedMeshSettings
// 0x0004 (0x0020 - 0x001C)
class UPhotonFracturedMeshSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFracturedMeshSettings");
        return pStaticClass;
    }

};


// Class PhotonBlast.PhotonFEdgeData
// 0x0004 (0x0020 - 0x001C)
class UPhotonFEdgeData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFEdgeData");
        return pStaticClass;
    }

};


// Class PhotonBlast.PhotonFracturedFragmentInfo
// 0x0044 (0x0060 - 0x001C)
class UPhotonFracturedFragmentInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	float                                              MassOverride;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FFragmentConvexElem                         ConvexElemForCollision;                                   // 0x0024(0x000C)
	struct FVector                                     centerPoint;                                              // 0x0030(0x000C) (IsPlainOldData)
	struct FBox                                        LocalBoundBox;                                            // 0x003C(0x001C) (IsPlainOldData)
	unsigned char                                      CanDestroy : 1;                                           // 0x0058(0x0001) (Edit)
	unsigned char                                      ConnectFloor : 1;                                         // 0x0058(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                ChunkIndex;                                               // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonFracturedFragmentInfo");
        return pStaticClass;
    }

};


// Class PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent
// 0x00C0 (0x0AC0 - 0x0A00)
class UPhotonHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	class USkeletalMesh*                               EffectSkeleMesh;                                          // 0x0A00(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimClass;                                                // 0x0A04(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EffectActorClass;                                         // 0x0A08(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPhotonInstanceImpactData>           InstanceImpactData;                                       // 0x0A0C(0x000C) (Net, ZeroConstructor)
	float                                              InstanceMaxHp;                                            // 0x0A18(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEffectType>                           EffectType;                                               // 0x0A1C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A1D(0x0003) MISSED OFFSET
	float                                              EffectDurationTime;                                       // 0x0A20(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A24(0x0004) MISSED OFFSET
	struct FName                                       EffectCollisionProfileName;                               // 0x0A28(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCullEffect : 1;                                          // 0x0A30(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A31(0x0003) MISSED OFFSET
	float                                              CullDistance;                                             // 0x0A34(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseExactVelocity : 1;                                    // 0x0A38(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A39(0x0003) MISSED OFFSET
	float                                              VelocityLength;                                           // 0x0A3C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinVelocityExplosion;                                     // 0x0A40(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxVelocityExplosion;                                     // 0x0A44(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               HitSound;                                                 // 0x0A48(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3C];                                      // 0x0A4C(0x003C) UNKNOWN PROPERTY: SetProperty PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ExceptDamageTypes
	bool                                               bVehicleHitUseClientPreShow;                              // 0x0A88(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A89(0x0003) MISSED OFFSET
	float                                              bVehicleHitScale;                                         // 0x0A8C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSurrendActorPosition;                              // 0x0A90(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceNetUpdate;                                          // 0x0A91(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2E];                                      // 0x0A92(0x002E) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent");
        return pStaticClass;
    }


	void UpdatePickupAndDeadBoxInRange(const struct FVector& Location);
	void SetFracturedMesh(class UPhotonDestructibleMesh* InPhotonDestructibleMesh);
	bool ServerGetInstanceIndexsNotDamaged(TArray<int>* InstancesNoDamaged);
	bool ServerGetInstanceIndexsDamaged(TArray<int>* InstancesDamaged);
	bool Server_InstanceByHp(TArray<int> InstancedIndex, TArray<float> DamagesHp, const struct FVector& WorldImpactVelocity, EDestructionDamageType DamageType);
	bool Server_InstanceAndWorldVelocityByHp(TArray<int> InstancedIndex, TArray<float> DamagesHp, const struct FVector& WorldImpactPoint, EDestructionDamageType DamageType, float Strength);
	bool Server_DamageFragmentsByRadius(const struct FVector& WorldImpactVelocity, const struct FVector& WorldHitPointAndSpreadSpeed, float HP, float Radius);
	void OnTriggerServerEvent__DelegateSignature(class ASTExtraVehicleBase* VehicleActor, class UPrimitiveComponent* HitComp, class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent, const struct FVector& DesPos, int TriggerIndex);
	void OnTriggeredByComp(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FTriggerEvent& TriggerEvent);
	void OnTriggerClientEvent__DelegateSignature(class ASTExtraVehicleBase* VehicleActor, class UPrimitiveComponent* HitComp, class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent, const struct FVector& DesPos, int TriggerIndex);
	void OnRep_ImpactData();
	void OnLocalVehicleHit(TArray<int> InstanceIndex, const struct FVector4& WorldImpactPointAndSpreadSpeed, const struct FVector4& WorldImpactVelocityAndRotateSpeed);
	class UPhotonDestructibleMesh* GetPhotonDestructibleMesh();
	bool GetInstanceByRadius(const struct FVector& HitPoint, float Radius, EDestructionDamageType DamageType, TArray<int>* InstancedIndex);
	class UPhotonFracturedMesh* GetFracturedMesh();
	void GenerateEffectInstanceWorldSpace(TArray<int> InstanceIndex, TArray<struct FVector> WorldImpactVelocityAndRotateSpeed);
	void GenerateEffectInstanceLocalSpace(TArray<int> InstanceIndex, TArray<struct FVector> LocalImpactVelocityAndRotateSpeed);
	void ClientCorrectVehicleHit(TArray<int> InstanceIndex);
};


// Class PhotonBlast.PhotonReplicationSkeletalMeshComponent
// 0x00A0 (0x0D20 - 0x0C80)
class UPhotonReplicationSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0C80(0x003C) MISSED OFFSET
	int                                                ClusterUniqueID;                                          // 0x0CBC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bCanMove;                                                 // 0x0CC0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAOIEntityType                                     AOIEntityType;                                            // 0x0CC1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EClusterEntityState                                AOIEntityState;                                           // 0x0CC2(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      ClusterReplicationOpen : 1;                               // 0x0CC3(0x0001) (Edit, BlueprintVisible)
	class UDestructionSubsystem*                       SubsystemPtr;                                             // 0x0CC4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0CC8(0x0004) MISSED OFFSET
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0CCC(0x003C) (Net)
	struct FString                                     LuaFilePath;                                              // 0x0D08(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0D14(0x000C) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonReplicationSkeletalMeshComponent");
        return pStaticClass;
    }


	void UnRegistLuaTick();
	void UnRegisterFromCluster();
	void SetMoveable(bool Value);
	void SetClusterUniqueID(int InClusterID);
	void SetClusterEntityState(EClusterEntityState EntityState);
	void RegistLuaTick(float TickInterval);
	void RegisterToCluster();
	void MarkPropDirty(int PropIndex);
};


// Class PhotonBlast.PhotonStaticeMeshActor
// 0x0000 (0x0448 - 0x0448)
class APhotonStaticeMeshActor : public ADecoratorActor
{
public:

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonStaticeMeshActor");
        return pStaticClass;
    }

};


// Class PhotonBlast.ReusableStaticMeshActor
// 0x0008 (0x0350 - 0x0348)
class AReusableStaticMeshActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ReusableStaticMeshActor");
        return pStaticClass;
    }


	void OnSpawn();
	void OnRecycle();
};


// Class PhotonBlast.ReusableSkeletalMeshActor
// 0x0008 (0x03A0 - 0x0398)
class AReusableSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ReusableSkeletalMeshActor");
        return pStaticClass;
    }


	void OnSpawn();
	void OnRecycle();
};


// Class PhotonBlast.ReusableDestructibleMeshActor
// 0x0008 (0x0350 - 0x0348)
class AReusableDestructibleMeshActor : public APhotonDestructibleMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.ReusableDestructibleMeshActor");
        return pStaticClass;
    }


	void OnSpawn();
	void OnRecycle();
};


// Class PhotonBlast.PhotonStaticMeshComponent
// 0x0020 (0x0860 - 0x0840)
class UPhotonStaticMeshComponent : public UStaticMeshComponent
{
public:
	float                                              InstanceMaxHp;                                            // 0x0840(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEffectType>                           EffectType;                                               // 0x0844(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	float                                              EffectDurationTime;                                       // 0x0848(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	struct FName                                       EffectCollisionProfileName;                               // 0x0850(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleHitUseClientPreShow;                              // 0x0858(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0859(0x0003) MISSED OFFSET
	float                                              bVehicleHitScale;                                         // 0x085C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhotonBlast.PhotonStaticMeshComponent");
        return pStaticClass;
    }


	void SetFracturedMesh(class UPhotonDestructibleMesh* InPhotonDestructibleMesh);
	class UPhotonDestructibleMesh* GetPhotonDestructibleMesh();
	class UPhotonFracturedMesh* GetFracturedMesh();
};


}

