#pragma once

// BlazingSails (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C
// 0x0017 (0x04C0 - 0x04A9)
class ABP_ProjectilePoisonArrow_C : public ABP_ProjectileBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_FlamingArrowTip;                                        // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectilePoisonArrow.BP_ProjectilePoisonArrow_C");
		return ptr;
	}


	void UserConstructionScript();
	void PostHit();
	void PlayerHit(class ABP_Character_C** HitPlayer, class ABP_Controller_C** Attacker);
	void ExecuteUbergraph_BP_ProjectilePoisonArrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
