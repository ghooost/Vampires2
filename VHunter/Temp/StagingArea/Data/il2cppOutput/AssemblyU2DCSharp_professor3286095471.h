#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_professor_States706705858.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// professor
struct  professor_t3286095471  : public MonoBehaviour_t667441552
{
public:
	// System.Single professor::walkSpeed
	float ___walkSpeed_2;
	// UnityEngine.Animator professor::anim
	Animator_t2776330603 * ___anim_3;
	// professor/States professor::curMode
	int32_t ___curMode_4;

public:
	inline static int32_t get_offset_of_walkSpeed_2() { return static_cast<int32_t>(offsetof(professor_t3286095471, ___walkSpeed_2)); }
	inline float get_walkSpeed_2() const { return ___walkSpeed_2; }
	inline float* get_address_of_walkSpeed_2() { return &___walkSpeed_2; }
	inline void set_walkSpeed_2(float value)
	{
		___walkSpeed_2 = value;
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(professor_t3286095471, ___anim_3)); }
	inline Animator_t2776330603 * get_anim_3() const { return ___anim_3; }
	inline Animator_t2776330603 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t2776330603 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}

	inline static int32_t get_offset_of_curMode_4() { return static_cast<int32_t>(offsetof(professor_t3286095471, ___curMode_4)); }
	inline int32_t get_curMode_4() const { return ___curMode_4; }
	inline int32_t* get_address_of_curMode_4() { return &___curMode_4; }
	inline void set_curMode_4(int32_t value)
	{
		___curMode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
