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

// weaponBallistic
struct weaponBallistic_t3405089225;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"

// System.Void weaponBallistic::.ctor()
extern "C"  void weaponBallistic__ctor_m2785423298 (weaponBallistic_t3405089225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void weaponBallistic::Start()
extern "C"  void weaponBallistic_Start_m1732561090 (weaponBallistic_t3405089225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void weaponBallistic::Fire(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void weaponBallistic_Fire_m2148870644 (weaponBallistic_t3405089225 * __this, Vector3_t4282066566  ___start0, Vector3_t4282066566  ___top1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void weaponBallistic::Update()
extern "C"  void weaponBallistic_Update_m2175638411 (weaponBallistic_t3405089225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void weaponBallistic::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void weaponBallistic_OnTriggerEnter2D_m1473474550 (weaponBallistic_t3405089225 * __this, Collider2D_t1552025098 * ___coll0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
