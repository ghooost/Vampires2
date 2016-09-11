#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// StartGame
struct StartGame_t4169245524;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// markerStart
struct  markerStart_t217109576  : public MonoBehaviour_t667441552
{
public:
	// StartGame markerStart::startGame
	StartGame_t4169245524 * ___startGame_2;
	// UnityEngine.Transform markerStart::marker2
	Transform_t1659122786 * ___marker2_3;

public:
	inline static int32_t get_offset_of_startGame_2() { return static_cast<int32_t>(offsetof(markerStart_t217109576, ___startGame_2)); }
	inline StartGame_t4169245524 * get_startGame_2() const { return ___startGame_2; }
	inline StartGame_t4169245524 ** get_address_of_startGame_2() { return &___startGame_2; }
	inline void set_startGame_2(StartGame_t4169245524 * value)
	{
		___startGame_2 = value;
		Il2CppCodeGenWriteBarrier(&___startGame_2, value);
	}

	inline static int32_t get_offset_of_marker2_3() { return static_cast<int32_t>(offsetof(markerStart_t217109576, ___marker2_3)); }
	inline Transform_t1659122786 * get_marker2_3() const { return ___marker2_3; }
	inline Transform_t1659122786 ** get_address_of_marker2_3() { return &___marker2_3; }
	inline void set_marker2_3(Transform_t1659122786 * value)
	{
		___marker2_3 = value;
		Il2CppCodeGenWriteBarrier(&___marker2_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
