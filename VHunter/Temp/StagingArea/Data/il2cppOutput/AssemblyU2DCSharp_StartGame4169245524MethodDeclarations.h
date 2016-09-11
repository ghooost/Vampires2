#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// StartGame
struct StartGame_t4169245524;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_StartGame_EventMode3605443138.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void StartGame::.ctor()
extern "C"  void StartGame__ctor_m1893331095 (StartGame_t4169245524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StartGame::Start()
extern "C"  void StartGame_Start_m840468887 (StartGame_t4169245524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StartGame::onShowSlide(System.String)
extern "C"  void StartGame_onShowSlide_m2225459224 (StartGame_t4169245524 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StartGame::drawTrajectory()
extern "C"  Il2CppObject * StartGame_drawTrajectory_m161183376 (StartGame_t4169245524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StartGame::drawTrajectory2()
extern "C"  Il2CppObject * StartGame_drawTrajectory2_m701726980 (StartGame_t4169245524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StartGame::onEvent(StartGame/EventMode)
extern "C"  void StartGame_onEvent_m1058461920 (StartGame_t4169245524 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform StartGame::switchSprite(UnityEngine.Transform,System.Boolean)
extern "C"  Transform_t1659122786 * StartGame_switchSprite_m652344968 (StartGame_t4169245524 * __this, Transform_t1659122786 * ___o0, bool ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
