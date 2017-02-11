#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Ball
struct Ball_t2062879;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// System.Object
struct Il2CppObject;
// UnityEngine.Collision2D
struct Collision2D_t2859305914;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// Brick
struct Brick_t64452641;
// LevelManager
struct LevelManager_t2278695849;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;
// System.String
struct String_t;
// LoseCollider
struct LoseCollider_t4061475401;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// MusicPlayer
struct MusicPlayer_t2820681030;
// Paddle
struct Paddle_t2382992266;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_Ball2062879.h"
#include "AssemblyU2DCSharp_Ball2062879MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_Paddle2382992266.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639.h"
#include "AssemblyU2DCSharp_Brick64452641.h"
#include "AssemblyU2DCSharp_Brick64452641MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "AssemblyU2DCSharp_LevelManager2278695849.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "AssemblyU2DCSharp_LevelManager2278695849MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Sprite3199167241.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_SpriteRenderer2548470764MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpriteRenderer2548470764.h"
#include "UnityEngine_UnityEngine_Application2856536070MethodDeclarations.h"
#include "AssemblyU2DCSharp_LoseCollider4061475401.h"
#include "AssemblyU2DCSharp_LoseCollider4061475401MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"
#include "AssemblyU2DCSharp_MusicPlayer2820681030.h"
#include "AssemblyU2DCSharp_MusicPlayer2820681030MethodDeclarations.h"
#include "AssemblyU2DCSharp_Paddle2382992266MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Screen3187157168MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, method) ((  Rigidbody2D_t1743771669 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1740077639_m3821406207(__this, method) ((  AudioSource_t1740077639 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  Il2CppObject * Object_FindObjectOfType_TisIl2CppObject_m2892359027_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisIl2CppObject_m2892359027(__this /* static, unused */, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m2892359027_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<LevelManager>()
#define Object_FindObjectOfType_TisLevelManager_t2278695849_m2127204068(__this /* static, unused */, method) ((  LevelManager_t2278695849 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m2892359027_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t2548470764_m4090179846(__this, method) ((  SpriteRenderer_t2548470764 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Object::FindObjectOfType<Ball>()
#define Object_FindObjectOfType_TisBall_t2062879_m1288858286(__this /* static, unused */, method) ((  Ball_t2062879 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m2892359027_gshared)(__this /* static, unused */, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ball::.ctor()
extern "C"  void Ball__ctor_m1158546268 (Ball_t2062879 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ball::Start()
extern "C"  void Ball_Start_m105684060 (Ball_t2062879 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		Paddle_t2382992266 * L_2 = __this->get_paddle_2();
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_paddleToBallVector_4(L_5);
		return;
	}
}
// System.Void Ball::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2338530188;
extern const uint32_t Ball_Update_m3282058033_MetadataUsageId;
extern "C"  void Ball_Update_m3282058033 (Ball_t2062879 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Ball_Update_m3282058033_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_hasStarted_3();
		if (L_0)
		{
			goto IL_0067;
		}
	}
	{
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Paddle_t2382992266 * L_2 = __this->get_paddle_2();
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(L_2, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = __this->get_paddleToBallVector_4();
		Vector3_t4282066566  L_6 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_1, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral2338530188, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_8 = Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var);
		Vector2_t4282066565  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m1517109030(&L_9, (2.0f), (10.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_8, L_9, /*hidden argument*/NULL);
		__this->set_hasStarted_3((bool)1);
	}

IL_0067:
	{
		return;
	}
}
// System.Void Ball::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* Vector2_t4282066565_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1740077639_m3821406207_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var;
extern const uint32_t Ball_OnCollisionEnter2D_m3757502918_MetadataUsageId;
extern "C"  void Ball_OnCollisionEnter2D_m3757502918 (Ball_t2062879 * __this, Collision2D_t2859305914 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Ball_OnCollisionEnter2D_m3757502918_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t4282066565  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = Random_Range_m3362417303(NULL /*static, unused*/, (0.0f), (0.2f), /*hidden argument*/NULL);
		float L_1 = Random_Range_m3362417303(NULL /*static, unused*/, (0.0f), (0.2f), /*hidden argument*/NULL);
		Vector2__ctor_m1517109030((&V_0), L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = __this->get_hasStarted_3();
		if (!L_2)
		{
			goto IL_0067;
		}
	}
	{
		AudioSource_t1740077639 * L_3 = Component_GetComponent_TisAudioSource_t1740077639_m3821406207(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1740077639_m3821406207_MethodInfo_var);
		AudioSource_Play_m1360558992(L_3, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_4 = Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var);
		Rigidbody2D_t1743771669 * L_5 = L_4;
		Vector2_t4282066565  L_6 = Rigidbody2D_get_velocity_m416159605(L_5, /*hidden argument*/NULL);
		Vector2_t4282066565  L_7 = V_0;
		Vector2_t4282066565  L_8 = Vector2_op_Addition_m1173049553(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m100625302(L_5, L_8, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_9 = Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var);
		Vector2_t4282066565  L_10 = Rigidbody2D_get_velocity_m416159605(L_9, /*hidden argument*/NULL);
		Vector2_t4282066565  L_11 = L_10;
		Il2CppObject * L_12 = Box(Vector2_t4282066565_il2cpp_TypeInfo_var, &L_11);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void Brick::.ctor()
extern "C"  void Brick__ctor_m1887233642 (Brick_t64452641 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Brick::.cctor()
extern "C"  void Brick__cctor_m2187571843 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Brick::Start()
extern Il2CppClass* Brick_t64452641_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisLevelManager_t2278695849_m2127204068_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral106395321;
extern const uint32_t Brick_Start_m834371434_MetadataUsageId;
extern "C"  void Brick_Start_m834371434 (Brick_t64452641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Brick_Start_m834371434_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t64452641_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Brick_t64452641_StaticFields*)Brick_t64452641_il2cpp_TypeInfo_var->static_fields)->get_breakableCount_4();
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = Component_get_tag_m217485006(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_3, _stringLiteral106395321, /*hidden argument*/NULL);
		__this->set_isBreakable_6(L_4);
		bool L_5 = __this->get_isBreakable_6();
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t64452641_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Brick_t64452641_StaticFields*)Brick_t64452641_il2cpp_TypeInfo_var->static_fields)->get_breakableCount_4();
		((Brick_t64452641_StaticFields*)Brick_t64452641_il2cpp_TypeInfo_var->static_fields)->set_breakableCount_4(((int32_t)((int32_t)L_6+(int32_t)1)));
	}

IL_003c:
	{
		__this->set_timesHit_5(0);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		LevelManager_t2278695849 * L_7 = Object_FindObjectOfType_TisLevelManager_t2278695849_m2127204068(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelManager_t2278695849_m2127204068_MethodInfo_var);
		__this->set_levelManager_7(L_7);
		return;
	}
}
// System.Void Brick::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Brick_OnCollisionEnter2D_m1344136660 (Brick_t64452641 * __this, Collision2D_t2859305914 * ___col0, const MethodInfo* method)
{
	{
		AudioClip_t794140988 * L_0 = __this->get_crash_2();
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m2719680311(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		bool L_3 = __this->get_isBreakable_6();
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Brick_HandleHits_m2559960674(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Brick::HandleHits()
extern Il2CppClass* Brick_t64452641_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t Brick_HandleHits_m2559960674_MetadataUsageId;
extern "C"  void Brick_HandleHits_m2559960674 (Brick_t64452641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Brick_HandleHits_m2559960674_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_timesHit_5();
		__this->set_timesHit_5(((int32_t)((int32_t)L_0+(int32_t)1)));
		SpriteU5BU5D_t2761310900* L_1 = __this->get_hitSprites_3();
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length))))+(int32_t)1));
		int32_t L_2 = __this->get_timesHit_5();
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t64452641_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Brick_t64452641_StaticFields*)Brick_t64452641_il2cpp_TypeInfo_var->static_fields)->get_breakableCount_4();
		((Brick_t64452641_StaticFields*)Brick_t64452641_il2cpp_TypeInfo_var->static_fields)->set_breakableCount_4(((int32_t)((int32_t)L_4-(int32_t)1)));
		LevelManager_t2278695849 * L_5 = __this->get_levelManager_7();
		LevelManager_BrickDestroyed_m4197178762(L_5, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_6 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_004c:
	{
		Brick_LoadSprites_m3121316560(__this, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void Brick::LoadSprites()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t2548470764_m4090179846_MethodInfo_var;
extern const uint32_t Brick_LoadSprites_m3121316560_MetadataUsageId;
extern "C"  void Brick_LoadSprites_m3121316560 (Brick_t64452641 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Brick_LoadSprites_m3121316560_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_timesHit_5();
		V_0 = ((int32_t)((int32_t)L_0-(int32_t)1));
		SpriteU5BU5D_t2761310900* L_1 = __this->get_hitSprites_3();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		Sprite_t3199167241 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		SpriteRenderer_t2548470764 * L_6 = Component_GetComponent_TisSpriteRenderer_t2548470764_m4090179846(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t2548470764_m4090179846_MethodInfo_var);
		SpriteU5BU5D_t2761310900* L_7 = __this->get_hitSprites_3();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		Sprite_t3199167241 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		SpriteRenderer_set_sprite_m1519408453(L_6, L_10, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void Brick::SimulateWin()
extern "C"  void Brick_SimulateWin_m183440224 (Brick_t64452641 * __this, const MethodInfo* method)
{
	{
		LevelManager_t2278695849 * L_0 = __this->get_levelManager_7();
		LevelManager_LoadNextLevel_m1768606331(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m4213759250 (LevelManager_t2278695849 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3246612564 (LevelManager_t2278695849 * __this, String_t* ___name0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name0;
		Application_LoadLevel_m2722573885(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::QuitRequest()
extern "C"  void LevelManager_QuitRequest_m3804828720 (LevelManager_t2278695849 * __this, const MethodInfo* method)
{
	{
		Application_Quit_m1187862186(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadNextLevel()
extern "C"  void LevelManager_LoadNextLevel_m1768606331 (LevelManager_t2278695849 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_loadedLevel_m946446301(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m1181471414(NULL /*static, unused*/, ((int32_t)((int32_t)L_0+(int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::BrickDestroyed()
extern Il2CppClass* Brick_t64452641_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2737935613;
extern const uint32_t LevelManager_BrickDestroyed_m4197178762_MetadataUsageId;
extern "C"  void LevelManager_BrickDestroyed_m4197178762 (LevelManager_t2278695849 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_BrickDestroyed_m4197178762_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Brick_t64452641_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Brick_t64452641_StaticFields*)Brick_t64452641_il2cpp_TypeInfo_var->static_fields)->get_breakableCount_4();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral2737935613, /*hidden argument*/NULL);
		LevelManager_LoadNextLevel_m1768606331(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void LoseCollider::.ctor()
extern "C"  void LoseCollider__ctor_m509362802 (LoseCollider_t4061475401 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoseCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisLevelManager_t2278695849_m2127204068_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2374453;
extern const uint32_t LoseCollider_OnTriggerEnter2D_m64910150_MetadataUsageId;
extern "C"  void LoseCollider_OnTriggerEnter2D_m64910150 (LoseCollider_t4061475401 * __this, Collider2D_t1552025098 * ___trigger0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (LoseCollider_OnTriggerEnter2D_m64910150_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		LevelManager_t2278695849 * L_0 = Object_FindObjectOfType_TisLevelManager_t2278695849_m2127204068(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelManager_t2278695849_m2127204068_MethodInfo_var);
		__this->set_levelManager_2(L_0);
		LevelManager_t2278695849 * L_1 = __this->get_levelManager_2();
		LevelManager_LoadLevel_m3246612564(L_1, _stringLiteral2374453, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoseCollider::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppCodeGenString* _stringLiteral1887651634;
extern const uint32_t LoseCollider_OnCollisionEnter2D_m2814238172_MetadataUsageId;
extern "C"  void LoseCollider_OnCollisionEnter2D_m2814238172 (LoseCollider_t4061475401 * __this, Collision2D_t2859305914 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (LoseCollider_OnCollisionEnter2D_m2814238172_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral1887651634, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::.ctor()
extern "C"  void MusicPlayer__ctor_m2214780133 (MusicPlayer_t2820681030 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::.cctor()
extern "C"  void MusicPlayer__cctor_m3751578472 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::Awake()
extern Il2CppClass* MusicPlayer_t2820681030_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t MusicPlayer_Awake_m2452385352_MetadataUsageId;
extern "C"  void MusicPlayer_Awake_m2452385352 (MusicPlayer_t2820681030 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_Awake_m2452385352_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t2820681030_il2cpp_TypeInfo_var);
		MusicPlayer_t2820681030 * L_0 = ((MusicPlayer_t2820681030_StaticFields*)MusicPlayer_t2820681030_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_0, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t3674682005 * L_2 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t2820681030_il2cpp_TypeInfo_var);
		((MusicPlayer_t2820681030_StaticFields*)MusicPlayer_t2820681030_il2cpp_TypeInfo_var->static_fields)->set_instance_2(__this);
		GameObject_t3674682005 * L_3 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4064482788(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void MusicPlayer::Update()
extern "C"  void MusicPlayer_Update_m1665569480 (MusicPlayer_t2820681030 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Paddle::.ctor()
extern "C"  void Paddle__ctor_m1407855697 (Paddle_t2382992266 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Paddle::Start()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisBall_t2062879_m1288858286_MethodInfo_var;
extern const uint32_t Paddle_Start_m354993489_MetadataUsageId;
extern "C"  void Paddle_Start_m354993489 (Paddle_t2382992266 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Paddle_Start_m354993489_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Ball_t2062879 * L_0 = Object_FindObjectOfType_TisBall_t2062879_m1288858286(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisBall_t2062879_m1288858286_MethodInfo_var);
		__this->set_ball_3(L_0);
		return;
	}
}
// System.Void Paddle::Update()
extern "C"  void Paddle_Update_m2420715740 (Paddle_t2382992266 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_autoPlay_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Paddle_MoveWithMouse_m571479709(__this, /*hidden argument*/NULL);
		goto IL_001c;
	}

IL_0016:
	{
		Paddle_AutoPlay_m2551386774(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Paddle::AutoPlay()
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const uint32_t Paddle_AutoPlay_m2551386774_MetadataUsageId;
extern "C"  void Paddle_AutoPlay_m2551386774 (Paddle_t2382992266 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Paddle_AutoPlay_m2551386774_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = (&V_2)->get_y_2();
		Vector3__ctor_m2926210380((&V_0), (0.5f), L_2, (0.0f), /*hidden argument*/NULL);
		Ball_t2062879 * L_3 = __this->get_ball_3();
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(L_3, /*hidden argument*/NULL);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_6, (0.5f), (15.0f), /*hidden argument*/NULL);
		(&V_0)->set_x_1(L_7);
		Transform_t1659122786 * L_8 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_9 = V_0;
		Transform_set_position_m3111394108(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Paddle::MoveWithMouse()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const uint32_t Paddle_MoveWithMouse_m571479709_MetadataUsageId;
extern "C"  void Paddle_MoveWithMouse_m571479709 (Paddle_t2382992266 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Paddle_MoveWithMouse_m571479709_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t4282066566  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = (&V_2)->get_y_2();
		Vector3__ctor_m2926210380((&V_0), (0.5f), L_2, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		Vector3_t4282066566  L_3 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_3;
		float L_4 = (&V_3)->get_x_1();
		int32_t L_5 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)((float)((float)L_4/(float)(((float)((float)L_5)))))*(float)(16.0f)));
		float L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_6, (0.5f), (15.0f), /*hidden argument*/NULL);
		(&V_0)->set_x_1(L_7);
		Transform_t1659122786 * L_8 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_9 = V_0;
		Transform_set_position_m3111394108(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
