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
// UnityEngine.Renderer[]
struct RendererU5BU5D_t440051646;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// trajectory
struct  trajectory_t2909417863  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject trajectory::item
	GameObject_t3674682005 * ___item_2;
	// System.Int32 trajectory::nItems
	int32_t ___nItems_3;
	// UnityEngine.Renderer[] trajectory::items
	RendererU5BU5D_t440051646* ___items_4;
	// UnityEngine.Vector3 trajectory::lastStart
	Vector3_t4282066566  ___lastStart_5;
	// UnityEngine.Vector3 trajectory::lastTop
	Vector3_t4282066566  ___lastTop_6;

public:
	inline static int32_t get_offset_of_item_2() { return static_cast<int32_t>(offsetof(trajectory_t2909417863, ___item_2)); }
	inline GameObject_t3674682005 * get_item_2() const { return ___item_2; }
	inline GameObject_t3674682005 ** get_address_of_item_2() { return &___item_2; }
	inline void set_item_2(GameObject_t3674682005 * value)
	{
		___item_2 = value;
		Il2CppCodeGenWriteBarrier(&___item_2, value);
	}

	inline static int32_t get_offset_of_nItems_3() { return static_cast<int32_t>(offsetof(trajectory_t2909417863, ___nItems_3)); }
	inline int32_t get_nItems_3() const { return ___nItems_3; }
	inline int32_t* get_address_of_nItems_3() { return &___nItems_3; }
	inline void set_nItems_3(int32_t value)
	{
		___nItems_3 = value;
	}

	inline static int32_t get_offset_of_items_4() { return static_cast<int32_t>(offsetof(trajectory_t2909417863, ___items_4)); }
	inline RendererU5BU5D_t440051646* get_items_4() const { return ___items_4; }
	inline RendererU5BU5D_t440051646** get_address_of_items_4() { return &___items_4; }
	inline void set_items_4(RendererU5BU5D_t440051646* value)
	{
		___items_4 = value;
		Il2CppCodeGenWriteBarrier(&___items_4, value);
	}

	inline static int32_t get_offset_of_lastStart_5() { return static_cast<int32_t>(offsetof(trajectory_t2909417863, ___lastStart_5)); }
	inline Vector3_t4282066566  get_lastStart_5() const { return ___lastStart_5; }
	inline Vector3_t4282066566 * get_address_of_lastStart_5() { return &___lastStart_5; }
	inline void set_lastStart_5(Vector3_t4282066566  value)
	{
		___lastStart_5 = value;
	}

	inline static int32_t get_offset_of_lastTop_6() { return static_cast<int32_t>(offsetof(trajectory_t2909417863, ___lastTop_6)); }
	inline Vector3_t4282066566  get_lastTop_6() const { return ___lastTop_6; }
	inline Vector3_t4282066566 * get_address_of_lastTop_6() { return &___lastTop_6; }
	inline void set_lastTop_6(Vector3_t4282066566  value)
	{
		___lastTop_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
