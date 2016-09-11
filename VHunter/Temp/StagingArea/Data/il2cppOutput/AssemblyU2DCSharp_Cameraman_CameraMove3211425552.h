#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Cameraman_CameraTask3211620548.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cameraman/CameraMove
struct  CameraMove_t3211425552  : public CameraTask_t3211620548
{
public:
	// UnityEngine.Vector3 Cameraman/CameraMove::finalPosition
	Vector3_t4282066566  ___finalPosition_2;
	// System.Single Cameraman/CameraMove::length
	float ___length_3;
	// System.Single Cameraman/CameraMove::startTime
	float ___startTime_4;

public:
	inline static int32_t get_offset_of_finalPosition_2() { return static_cast<int32_t>(offsetof(CameraMove_t3211425552, ___finalPosition_2)); }
	inline Vector3_t4282066566  get_finalPosition_2() const { return ___finalPosition_2; }
	inline Vector3_t4282066566 * get_address_of_finalPosition_2() { return &___finalPosition_2; }
	inline void set_finalPosition_2(Vector3_t4282066566  value)
	{
		___finalPosition_2 = value;
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(CameraMove_t3211425552, ___length_3)); }
	inline float get_length_3() const { return ___length_3; }
	inline float* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(float value)
	{
		___length_3 = value;
	}

	inline static int32_t get_offset_of_startTime_4() { return static_cast<int32_t>(offsetof(CameraMove_t3211425552, ___startTime_4)); }
	inline float get_startTime_4() const { return ___startTime_4; }
	inline float* get_address_of_startTime_4() { return &___startTime_4; }
	inline void set_startTime_4(float value)
	{
		___startTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
