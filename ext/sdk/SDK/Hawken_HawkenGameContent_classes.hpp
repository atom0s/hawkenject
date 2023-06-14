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

// Class HawkenGameContent.R_GFx_MainMenuContent
// 0x0000 (0x41C8 - 0x41C8)
class UR_GFx_MainMenuContent : public UR_GFx_MainMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HawkenGameContent.R_GFx_MainMenuContent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
