#pragma once

// SHANKS ENGINE  (3.8.1) SDKGen by Telegram @O_N_E_B_I_E_C_E 
//Ch @onebiecerr 
// Generate on Wed May  7 13:15:39 2025
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Char_ABP_Swim.Char_ABP_Swim_C
// 0x07C8 (0x1018 - 0x0850)
class UChar_ABP_Swim_C : public UAnimInstanceSwim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0850(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0854(0x0004) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_4C5B230947458755BE8C7EB5F89B25CB;      // 0x0858(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ACDC5F01413E6CDDD5E26290FB0D2A28;// 0x0890(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EA8583CF48558D8742D60989B755AECF;// 0x08C8(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A8F2C54D4B38AF5749C3BBAEB4CCD442;// 0x0900(0x0098)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CC8B1E084EF50E58E7E92B881995E35D;// 0x0998(0x00F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_923ECC9946F87BD9304658A4C6C371E1;// 0x0A88(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7D4B6F6A41970A5756B8039B8D969461;// 0x0B78(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4F338550438AA787A37AC7A5B47A57D6;// 0x0BB0(0x0098)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5322D9594A3FF835BE1EF8BD9B874442;// 0x0C48(0x00F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8CCABF8A4335407291BE5F82A4F2DF4C;// 0x0D38(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E36EB3AF45864D643ACA079211777C8E;// 0x0E28(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4D70FA834FB5A21BA01386AC7EFD6A49;// 0x0E60(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9329604E408B6CE5ED05CB9A881E12D7;// 0x0F08(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4B630AA04D3EBA008A83B0ADD0167EF7;// 0x0FA8(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4692176D47233CA6816B909997DD2222;// 0x0FE0(0x0038)

  static UClass* StaticClass()
    {
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass Char_ABP_Swim.Char_ABP_Swim_C");
        return pStaticClass;
    }


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendSpacePlayer_923ECC9946F87BD9304658A4C6C371E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendSpacePlayer_CC8B1E084EF50E58E7E92B881995E35D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendListByBool_A8F2C54D4B38AF5749C3BBAEB4CCD442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendListByBool_4F338550438AA787A37AC7A5B47A57D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendSpacePlayer_5322D9594A3FF835BE1EF8BD9B874442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_BlendSpacePlayer_8CCABF8A4335407291BE5F82A4F2DF4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_TransitionResult_EA8583CF48558D8742D60989B755AECF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_ModifyBone_9329604E408B6CE5ED05CB9A881E12D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Char_ABP_Swim_AnimGraphNode_TransitionResult_ACDC5F01413E6CDDD5E26290FB0D2A28();
	void ExecuteUbergraph_Char_ABP_Swim(int EntryPoint);
};


}

