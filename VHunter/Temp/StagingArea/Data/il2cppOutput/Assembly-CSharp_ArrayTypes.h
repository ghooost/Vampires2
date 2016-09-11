#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Cameraman/CameraTask
struct CameraTask_t3211620548;
// weaponButtonDemo
struct weaponButtonDemo_t422599537;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_Cameraman_CameraTask3211620548.h"
#include "AssemblyU2DCSharp_weaponButtonDemo422599537.h"

#pragma once
// Cameraman/CameraTask[]
struct CameraTaskU5BU5D_t2472771501  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) CameraTask_t3211620548 * m_Items[1];

public:
	inline CameraTask_t3211620548 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline CameraTask_t3211620548 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, CameraTask_t3211620548 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// weaponButtonDemo[]
struct weaponButtonDemoU5BU5D_t3465919404  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) weaponButtonDemo_t422599537 * m_Items[1];

public:
	inline weaponButtonDemo_t422599537 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline weaponButtonDemo_t422599537 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, weaponButtonDemo_t422599537 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
