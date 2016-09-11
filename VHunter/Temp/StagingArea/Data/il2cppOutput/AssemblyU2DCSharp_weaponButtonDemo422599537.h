#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.UI.Button
struct Button_t3896396478;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_weaponButtonDemo_States1621077632.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// weaponButtonDemo
struct  weaponButtonDemo_t422599537  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Sprite weaponButtonDemo::def
	Sprite_t3199167241 * ___def_2;
	// UnityEngine.Sprite weaponButtonDemo::selected
	Sprite_t3199167241 * ___selected_3;
	// weaponButtonDemo/States weaponButtonDemo::mode
	int32_t ___mode_4;
	// UnityEngine.UI.Button weaponButtonDemo::button
	Button_t3896396478 * ___button_5;

public:
	inline static int32_t get_offset_of_def_2() { return static_cast<int32_t>(offsetof(weaponButtonDemo_t422599537, ___def_2)); }
	inline Sprite_t3199167241 * get_def_2() const { return ___def_2; }
	inline Sprite_t3199167241 ** get_address_of_def_2() { return &___def_2; }
	inline void set_def_2(Sprite_t3199167241 * value)
	{
		___def_2 = value;
		Il2CppCodeGenWriteBarrier(&___def_2, value);
	}

	inline static int32_t get_offset_of_selected_3() { return static_cast<int32_t>(offsetof(weaponButtonDemo_t422599537, ___selected_3)); }
	inline Sprite_t3199167241 * get_selected_3() const { return ___selected_3; }
	inline Sprite_t3199167241 ** get_address_of_selected_3() { return &___selected_3; }
	inline void set_selected_3(Sprite_t3199167241 * value)
	{
		___selected_3 = value;
		Il2CppCodeGenWriteBarrier(&___selected_3, value);
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(weaponButtonDemo_t422599537, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_button_5() { return static_cast<int32_t>(offsetof(weaponButtonDemo_t422599537, ___button_5)); }
	inline Button_t3896396478 * get_button_5() const { return ___button_5; }
	inline Button_t3896396478 ** get_address_of_button_5() { return &___button_5; }
	inline void set_button_5(Button_t3896396478 * value)
	{
		___button_5 = value;
		Il2CppCodeGenWriteBarrier(&___button_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
