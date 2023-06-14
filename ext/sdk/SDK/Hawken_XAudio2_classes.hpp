#pragma once

// Hawken (1.5.3.142579) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class XAudio2.XAudio2Device
// 0x009C (0x0360 - 0x02C4)
class UXAudio2Device : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[0x9C];                                      // 0x02C4(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class XAudio2.XAudio2Device");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
