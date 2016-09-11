#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_zombiDemo_States2064738351.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// zombiDemo
struct  zombiDemo_t3865680034  : public MonoBehaviour_t667441552
{
public:
	// System.Single zombiDemo::walkSpeed
	float ___walkSpeed_2;
	// zombiDemo/States zombiDemo::curMode
	int32_t ___curMode_3;

public:
	inline static int32_t get_offset_of_walkSpeed_2() { return static_cast<int32_t>(offsetof(zombiDemo_t3865680034, ___walkSpeed_2)); }
	inline float get_walkSpeed_2() const { return ___walkSpeed_2; }
	inline float* get_address_of_walkSpeed_2() { return &___walkSpeed_2; }
	inline void set_walkSpeed_2(float value)
	{
		___walkSpeed_2 = value;
	}

	inline static int32_t get_offset_of_curMode_3() { return static_cast<int32_t>(offsetof(zombiDemo_t3865680034, ___curMode_3)); }
	inline int32_t get_curMode_3() const { return ___curMode_3; }
	inline int32_t* get_address_of_curMode_3() { return &___curMode_3; }
	inline void set_curMode_3(int32_t value)
	{
		___curMode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
