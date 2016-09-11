#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Cameraman/CameraTask>
struct List_1_t284838804;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cameraman
struct  Cameraman_t1661989877  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<Cameraman/CameraTask> Cameraman::tasks
	List_1_t284838804 * ___tasks_2;

public:
	inline static int32_t get_offset_of_tasks_2() { return static_cast<int32_t>(offsetof(Cameraman_t1661989877, ___tasks_2)); }
	inline List_1_t284838804 * get_tasks_2() const { return ___tasks_2; }
	inline List_1_t284838804 ** get_address_of_tasks_2() { return &___tasks_2; }
	inline void set_tasks_2(List_1_t284838804 * value)
	{
		___tasks_2 = value;
		Il2CppCodeGenWriteBarrier(&___tasks_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
