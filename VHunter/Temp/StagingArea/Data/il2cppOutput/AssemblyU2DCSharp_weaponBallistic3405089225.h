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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// weaponBallistic
struct  weaponBallistic_t3405089225  : public MonoBehaviour_t667441552
{
public:
	// System.Single weaponBallistic::speed
	float ___speed_2;
	// System.Single weaponBallistic::rotation
	float ___rotation_3;
	// System.Single weaponBallistic::g
	float ___g_4;
	// UnityEngine.GameObject weaponBallistic::blow
	GameObject_t3674682005 * ___blow_5;
	// System.Single weaponBallistic::a
	float ___a_6;
	// System.Boolean weaponBallistic::fired
	bool ___fired_7;
	// System.Single weaponBallistic::curX
	float ___curX_8;
	// UnityEngine.Vector3 weaponBallistic::basePoint
	Vector3_t4282066566  ___basePoint_9;
	// System.Single weaponBallistic::maxX
	float ___maxX_10;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(weaponBallistic_t3405089225, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(weaponBallistic_t3405089225, ___rotation_3)); }
	inline float get_rotation_3() const { return ___rotation_3; }
	inline float* get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(float value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_g_4() { return static_cast<int32_t>(offsetof(weaponBallistic_t3405089225, ___g_4)); }
	inline float get_g_4() const { return ___g_4; }
	inline float* get_address_of_g_4() { return &___g_4; }
	inline void set_g_4(float value)
	{
		___g_4 = value;
	}

	inline static int32_t get_offset_of_blow_5() { return static_cast<int32_t>(offsetof(weaponBallistic_t3405089225, ___blow_5)); }
	inline GameObject_t3674682005 * get_blow_5() const { return ___blow_5; }
	inline GameObject_t3674682005 ** get_address_of_blow_5() { return &___blow_5; }
	inline void set_blow_5(GameObject_t3674682005 * value)
	{
		___blow_5 = value;
		Il2CppCodeGenWriteBarrier(&___blow_5, value);
	}

	inline static int32_t get_offset_of_a_6() { return static_cast<int32_t>(offsetof(weaponBallistic_t3405089225, ___a_6)); }
	inline float get_a_6() const { return ___a_6; }
	inline float* get_address_of_a_6() { return &___a_6; }
	inline void set_a_6(float value)
	{
		___a_6 = value;
	}

	inline static int32_t get_offset_of_fired_7() { return static_cast<int32_t>(offsetof(weaponBallistic_t3405089225, ___fired_7)); }
	inline bool get_fired_7() const { return ___fired_7; }
	inline bool* get_address_of_fired_7() { return &___fired_7; }
	inline void set_fired_7(bool value)
	{
		___fired_7 = value;
	}

	inline static int32_t get_offset_of_curX_8() { return static_cast<int32_t>(offsetof(weaponBallistic_t3405089225, ___curX_8)); }
	inline float get_curX_8() const { return ___curX_8; }
	inline float* get_address_of_curX_8() { return &___curX_8; }
	inline void set_curX_8(float value)
	{
		___curX_8 = value;
	}

	inline static int32_t get_offset_of_basePoint_9() { return static_cast<int32_t>(offsetof(weaponBallistic_t3405089225, ___basePoint_9)); }
	inline Vector3_t4282066566  get_basePoint_9() const { return ___basePoint_9; }
	inline Vector3_t4282066566 * get_address_of_basePoint_9() { return &___basePoint_9; }
	inline void set_basePoint_9(Vector3_t4282066566  value)
	{
		___basePoint_9 = value;
	}

	inline static int32_t get_offset_of_maxX_10() { return static_cast<int32_t>(offsetof(weaponBallistic_t3405089225, ___maxX_10)); }
	inline float get_maxX_10() const { return ___maxX_10; }
	inline float* get_address_of_maxX_10() { return &___maxX_10; }
	inline void set_maxX_10(float value)
	{
		___maxX_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
