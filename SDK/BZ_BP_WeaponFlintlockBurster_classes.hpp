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

// BlueprintGeneratedClass BP_WeaponFlintlockBurster.BP_WeaponFlintlockBurster_C
// 0x000F (0x0538 - 0x0529)
class ABP_WeaponFlintlockBurster_C : public ABP_WeaponRangedBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponFlintlockBurster.BP_WeaponFlintlockBurster_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_WeaponFlintlockBurster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
