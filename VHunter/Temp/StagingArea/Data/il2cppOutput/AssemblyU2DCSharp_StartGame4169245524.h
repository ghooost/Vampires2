#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;
// weaponButtonDemo[]
struct weaponButtonDemoU5BU5D_t3465919404;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartGame
struct  StartGame_t4169245524  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject StartGame::oText
	GameObject_t3674682005 * ___oText_2;
	// UnityEngine.UI.Text StartGame::cTxt
	Text_t9039225 * ___cTxt_3;
	// UnityEngine.GameObject StartGame::demoWeapon
	GameObject_t3674682005 * ___demoWeapon_4;
	// weaponButtonDemo[] StartGame::icons
	weaponButtonDemoU5BU5D_t3465919404* ___icons_5;
	// UnityEngine.Transform StartGame::bat
	Transform_t1659122786 * ___bat_6;
	// UnityEngine.Transform StartGame::marker
	Transform_t1659122786 * ___marker_7;
	// UnityEngine.Transform StartGame::marker2
	Transform_t1659122786 * ___marker2_8;

public:
	inline static int32_t get_offset_of_oText_2() { return static_cast<int32_t>(offsetof(StartGame_t4169245524, ___oText_2)); }
	inline GameObject_t3674682005 * get_oText_2() const { return ___oText_2; }
	inline GameObject_t3674682005 ** get_address_of_oText_2() { return &___oText_2; }
	inline void set_oText_2(GameObject_t3674682005 * value)
	{
		___oText_2 = value;
		Il2CppCodeGenWriteBarrier(&___oText_2, value);
	}

	inline static int32_t get_offset_of_cTxt_3() { return static_cast<int32_t>(offsetof(StartGame_t4169245524, ___cTxt_3)); }
	inline Text_t9039225 * get_cTxt_3() const { return ___cTxt_3; }
	inline Text_t9039225 ** get_address_of_cTxt_3() { return &___cTxt_3; }
	inline void set_cTxt_3(Text_t9039225 * value)
	{
		___cTxt_3 = value;
		Il2CppCodeGenWriteBarrier(&___cTxt_3, value);
	}

	inline static int32_t get_offset_of_demoWeapon_4() { return static_cast<int32_t>(offsetof(StartGame_t4169245524, ___demoWeapon_4)); }
	inline GameObject_t3674682005 * get_demoWeapon_4() const { return ___demoWeapon_4; }
	inline GameObject_t3674682005 ** get_address_of_demoWeapon_4() { return &___demoWeapon_4; }
	inline void set_demoWeapon_4(GameObject_t3674682005 * value)
	{
		___demoWeapon_4 = value;
		Il2CppCodeGenWriteBarrier(&___demoWeapon_4, value);
	}

	inline static int32_t get_offset_of_icons_5() { return static_cast<int32_t>(offsetof(StartGame_t4169245524, ___icons_5)); }
	inline weaponButtonDemoU5BU5D_t3465919404* get_icons_5() const { return ___icons_5; }
	inline weaponButtonDemoU5BU5D_t3465919404** get_address_of_icons_5() { return &___icons_5; }
	inline void set_icons_5(weaponButtonDemoU5BU5D_t3465919404* value)
	{
		___icons_5 = value;
		Il2CppCodeGenWriteBarrier(&___icons_5, value);
	}

	inline static int32_t get_offset_of_bat_6() { return static_cast<int32_t>(offsetof(StartGame_t4169245524, ___bat_6)); }
	inline Transform_t1659122786 * get_bat_6() const { return ___bat_6; }
	inline Transform_t1659122786 ** get_address_of_bat_6() { return &___bat_6; }
	inline void set_bat_6(Transform_t1659122786 * value)
	{
		___bat_6 = value;
		Il2CppCodeGenWriteBarrier(&___bat_6, value);
	}

	inline static int32_t get_offset_of_marker_7() { return static_cast<int32_t>(offsetof(StartGame_t4169245524, ___marker_7)); }
	inline Transform_t1659122786 * get_marker_7() const { return ___marker_7; }
	inline Transform_t1659122786 ** get_address_of_marker_7() { return &___marker_7; }
	inline void set_marker_7(Transform_t1659122786 * value)
	{
		___marker_7 = value;
		Il2CppCodeGenWriteBarrier(&___marker_7, value);
	}

	inline static int32_t get_offset_of_marker2_8() { return static_cast<int32_t>(offsetof(StartGame_t4169245524, ___marker2_8)); }
	inline Transform_t1659122786 * get_marker2_8() const { return ___marker2_8; }
	inline Transform_t1659122786 ** get_address_of_marker2_8() { return &___marker2_8; }
	inline void set_marker2_8(Transform_t1659122786 * value)
	{
		___marker2_8 = value;
		Il2CppCodeGenWriteBarrier(&___marker2_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
