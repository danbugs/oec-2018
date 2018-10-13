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
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Player
struct Player_t3266647312;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t3581341831;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Object
struct Object_t631007953;
// Spawning
struct Spawning_t3324710504;
// Timer
struct Timer_t4185932343;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var;
extern const uint32_t Player_Start_m250748966_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1613539661;
extern String_t* _stringLiteral2163145079;
extern String_t* _stringLiteral2073333278;
extern const uint32_t Player_FixedUpdate_m170756310_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t Player_Movement_m1322749492_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3147266007;
extern String_t* _stringLiteral1083228911;
extern String_t* _stringLiteral233660424;
extern String_t* _stringLiteral3847424578;
extern const uint32_t Player_OnTriggerEnter2D_m1893340054_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const uint32_t Spawning_Start_m3357816201_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745548_H
#define U3CMODULEU3E_T692745548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745548 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745548_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef BOXCOLLIDER2D_T3581341831_H
#define BOXCOLLIDER2D_T3581341831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t3581341831  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER2D_T3581341831_H
#ifndef SPAWNING_T3324710504_H
#define SPAWNING_T3324710504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawning
struct  Spawning_t3324710504  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Spawning::medusa
	GameObject_t1113636619 * ___medusa_2;
	// UnityEngine.GameObject Spawning::zeus
	GameObject_t1113636619 * ___zeus_3;
	// System.Int32 Spawning::medusaFrequency
	int32_t ___medusaFrequency_4;
	// System.Int32 Spawning::zeusFrequency
	int32_t ___zeusFrequency_5;
	// System.Int32 Spawning::screenSize
	int32_t ___screenSize_6;
	// System.Single Spawning::startX
	float ___startX_7;
	// System.Single Spawning::startY
	float ___startY_8;

public:
	inline static int32_t get_offset_of_medusa_2() { return static_cast<int32_t>(offsetof(Spawning_t3324710504, ___medusa_2)); }
	inline GameObject_t1113636619 * get_medusa_2() const { return ___medusa_2; }
	inline GameObject_t1113636619 ** get_address_of_medusa_2() { return &___medusa_2; }
	inline void set_medusa_2(GameObject_t1113636619 * value)
	{
		___medusa_2 = value;
		Il2CppCodeGenWriteBarrier((&___medusa_2), value);
	}

	inline static int32_t get_offset_of_zeus_3() { return static_cast<int32_t>(offsetof(Spawning_t3324710504, ___zeus_3)); }
	inline GameObject_t1113636619 * get_zeus_3() const { return ___zeus_3; }
	inline GameObject_t1113636619 ** get_address_of_zeus_3() { return &___zeus_3; }
	inline void set_zeus_3(GameObject_t1113636619 * value)
	{
		___zeus_3 = value;
		Il2CppCodeGenWriteBarrier((&___zeus_3), value);
	}

	inline static int32_t get_offset_of_medusaFrequency_4() { return static_cast<int32_t>(offsetof(Spawning_t3324710504, ___medusaFrequency_4)); }
	inline int32_t get_medusaFrequency_4() const { return ___medusaFrequency_4; }
	inline int32_t* get_address_of_medusaFrequency_4() { return &___medusaFrequency_4; }
	inline void set_medusaFrequency_4(int32_t value)
	{
		___medusaFrequency_4 = value;
	}

	inline static int32_t get_offset_of_zeusFrequency_5() { return static_cast<int32_t>(offsetof(Spawning_t3324710504, ___zeusFrequency_5)); }
	inline int32_t get_zeusFrequency_5() const { return ___zeusFrequency_5; }
	inline int32_t* get_address_of_zeusFrequency_5() { return &___zeusFrequency_5; }
	inline void set_zeusFrequency_5(int32_t value)
	{
		___zeusFrequency_5 = value;
	}

	inline static int32_t get_offset_of_screenSize_6() { return static_cast<int32_t>(offsetof(Spawning_t3324710504, ___screenSize_6)); }
	inline int32_t get_screenSize_6() const { return ___screenSize_6; }
	inline int32_t* get_address_of_screenSize_6() { return &___screenSize_6; }
	inline void set_screenSize_6(int32_t value)
	{
		___screenSize_6 = value;
	}

	inline static int32_t get_offset_of_startX_7() { return static_cast<int32_t>(offsetof(Spawning_t3324710504, ___startX_7)); }
	inline float get_startX_7() const { return ___startX_7; }
	inline float* get_address_of_startX_7() { return &___startX_7; }
	inline void set_startX_7(float value)
	{
		___startX_7 = value;
	}

	inline static int32_t get_offset_of_startY_8() { return static_cast<int32_t>(offsetof(Spawning_t3324710504, ___startY_8)); }
	inline float get_startY_8() const { return ___startY_8; }
	inline float* get_address_of_startY_8() { return &___startY_8; }
	inline void set_startY_8(float value)
	{
		___startY_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPAWNING_T3324710504_H
#ifndef TIMER_T4185932343_H
#define TIMER_T4185932343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t4185932343  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Timer::totalSeconds
	float ___totalSeconds_2;
	// System.Single Timer::elapsedSeconds
	float ___elapsedSeconds_3;
	// System.Boolean Timer::running
	bool ___running_4;
	// System.Boolean Timer::started
	bool ___started_5;

public:
	inline static int32_t get_offset_of_totalSeconds_2() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___totalSeconds_2)); }
	inline float get_totalSeconds_2() const { return ___totalSeconds_2; }
	inline float* get_address_of_totalSeconds_2() { return &___totalSeconds_2; }
	inline void set_totalSeconds_2(float value)
	{
		___totalSeconds_2 = value;
	}

	inline static int32_t get_offset_of_elapsedSeconds_3() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___elapsedSeconds_3)); }
	inline float get_elapsedSeconds_3() const { return ___elapsedSeconds_3; }
	inline float* get_address_of_elapsedSeconds_3() { return &___elapsedSeconds_3; }
	inline void set_elapsedSeconds_3(float value)
	{
		___elapsedSeconds_3 = value;
	}

	inline static int32_t get_offset_of_running_4() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___running_4)); }
	inline bool get_running_4() const { return ___running_4; }
	inline bool* get_address_of_running_4() { return &___running_4; }
	inline void set_running_4(bool value)
	{
		___running_4 = value;
	}

	inline static int32_t get_offset_of_started_5() { return static_cast<int32_t>(offsetof(Timer_t4185932343, ___started_5)); }
	inline bool get_started_5() const { return ___started_5; }
	inline bool* get_address_of_started_5() { return &___started_5; }
	inline void set_started_5(bool value)
	{
		___started_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T4185932343_H
#ifndef PLAYER_T3266647312_H
#define PLAYER_T3266647312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t3266647312  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Rigidbody2D Player::rb2d
	Rigidbody2D_t939494601 * ___rb2d_2;
	// UnityEngine.BoxCollider2D Player::boxCollider2D
	BoxCollider2D_t3581341831 * ___boxCollider2D_3;
	// UnityEngine.Vector2 Player::position
	Vector2_t2156229523  ___position_4;
	// System.Int32 Player::allowedMoves
	int32_t ___allowedMoves_5;
	// System.Int32 Player::dieRoll
	int32_t ___dieRoll_6;
	// System.Int32 Player::direction
	int32_t ___direction_7;
	// System.Int32 Player::movementType
	int32_t ___movementType_8;
	// Timer Player::clock
	Timer_t4185932343 * ___clock_9;
	// System.Int32 Player::Z
	int32_t ___Z_10;
	// System.Int32 Player::M
	int32_t ___M_11;

public:
	inline static int32_t get_offset_of_rb2d_2() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___rb2d_2)); }
	inline Rigidbody2D_t939494601 * get_rb2d_2() const { return ___rb2d_2; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb2d_2() { return &___rb2d_2; }
	inline void set_rb2d_2(Rigidbody2D_t939494601 * value)
	{
		___rb2d_2 = value;
		Il2CppCodeGenWriteBarrier((&___rb2d_2), value);
	}

	inline static int32_t get_offset_of_boxCollider2D_3() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___boxCollider2D_3)); }
	inline BoxCollider2D_t3581341831 * get_boxCollider2D_3() const { return ___boxCollider2D_3; }
	inline BoxCollider2D_t3581341831 ** get_address_of_boxCollider2D_3() { return &___boxCollider2D_3; }
	inline void set_boxCollider2D_3(BoxCollider2D_t3581341831 * value)
	{
		___boxCollider2D_3 = value;
		Il2CppCodeGenWriteBarrier((&___boxCollider2D_3), value);
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___position_4)); }
	inline Vector2_t2156229523  get_position_4() const { return ___position_4; }
	inline Vector2_t2156229523 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector2_t2156229523  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_allowedMoves_5() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___allowedMoves_5)); }
	inline int32_t get_allowedMoves_5() const { return ___allowedMoves_5; }
	inline int32_t* get_address_of_allowedMoves_5() { return &___allowedMoves_5; }
	inline void set_allowedMoves_5(int32_t value)
	{
		___allowedMoves_5 = value;
	}

	inline static int32_t get_offset_of_dieRoll_6() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___dieRoll_6)); }
	inline int32_t get_dieRoll_6() const { return ___dieRoll_6; }
	inline int32_t* get_address_of_dieRoll_6() { return &___dieRoll_6; }
	inline void set_dieRoll_6(int32_t value)
	{
		___dieRoll_6 = value;
	}

	inline static int32_t get_offset_of_direction_7() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___direction_7)); }
	inline int32_t get_direction_7() const { return ___direction_7; }
	inline int32_t* get_address_of_direction_7() { return &___direction_7; }
	inline void set_direction_7(int32_t value)
	{
		___direction_7 = value;
	}

	inline static int32_t get_offset_of_movementType_8() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___movementType_8)); }
	inline int32_t get_movementType_8() const { return ___movementType_8; }
	inline int32_t* get_address_of_movementType_8() { return &___movementType_8; }
	inline void set_movementType_8(int32_t value)
	{
		___movementType_8 = value;
	}

	inline static int32_t get_offset_of_clock_9() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___clock_9)); }
	inline Timer_t4185932343 * get_clock_9() const { return ___clock_9; }
	inline Timer_t4185932343 ** get_address_of_clock_9() { return &___clock_9; }
	inline void set_clock_9(Timer_t4185932343 * value)
	{
		___clock_9 = value;
		Il2CppCodeGenWriteBarrier((&___clock_9), value);
	}

	inline static int32_t get_offset_of_Z_10() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___Z_10)); }
	inline int32_t get_Z_10() const { return ___Z_10; }
	inline int32_t* get_address_of_Z_10() { return &___Z_10; }
	inline void set_Z_10(int32_t value)
	{
		___Z_10 = value;
	}

	inline static int32_t get_offset_of_M_11() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___M_11)); }
	inline int32_t get_M_11() const { return ___M_11; }
	inline int32_t* get_address_of_M_11() { return &___M_11; }
	inline void set_M_11(int32_t value)
	{
		___M_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T3266647312_H


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
#define Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, method) ((  BoxCollider2D_t3581341831 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
extern "C"  bool Input_GetKeyDown_m2928138282 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Movement(System.Int32,System.Boolean)
extern "C"  void Player_Movement_m1322749492 (Player_t3266647312 * __this, int32_t ___moves0, bool ___medusa1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
extern "C"  int32_t Mathf_Abs_m2460432655 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
extern "C"  bool Component_CompareTag_m1328479619 (Component_t1923634451 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C"  int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::.ctor()
extern "C"  void Player__ctor_m509448900 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	{
		// int allowedMoves = 8;
		__this->set_allowedMoves_5(8);
		// int direction = 1;
		__this->set_direction_7(1);
		// int movementType = 0;
		__this->set_movementType_8(0);
		// int Z = 1;
		__this->set_Z_10(1);
		// int M = - 1;
		__this->set_M_11((-1));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Start()
extern "C"  void Player_Start_m250748966 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_m250748966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// position = transform.position;
		// position = transform.position;
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// position = transform.position;
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		// position = transform.position;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_position_4(L_2);
		// rb2d = GetComponent<Rigidbody2D>();
		// rb2d = GetComponent<Rigidbody2D>();
		Rigidbody2D_t939494601 * L_3 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_rb2d_2(L_3);
		// boxCollider2D = GetComponent<BoxCollider2D>();
		// boxCollider2D = GetComponent<BoxCollider2D>();
		BoxCollider2D_t3581341831 * L_4 = Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var);
		__this->set_boxCollider2D_3(L_4);
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
extern "C"  void Player_FixedUpdate_m170756310 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_FixedUpdate_m170756310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(allowedMoves > 6)
		int32_t L_0 = __this->get_allowedMoves_5();
		if ((((int32_t)L_0) <= ((int32_t)6)))
		{
			goto IL_0016;
		}
	}
	{
		// allowedMoves = 6;
		__this->set_allowedMoves_5(6);
	}

IL_0016:
	{
		// if(Input.GetKeyDown("space"))
		// if(Input.GetKeyDown("space"))
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m2928138282(NULL /*static, unused*/, _stringLiteral1613539661, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		// dieRoll = direction*1;
		int32_t L_2 = __this->get_direction_7();
		__this->set_dieRoll_6(L_2);
		// Movement(dieRoll, false);
		int32_t L_3 = __this->get_dieRoll_6();
		// Movement(dieRoll, false);
		Player_Movement_m1322749492(__this, L_3, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("Allowed moves: (space)" + allowedMoves);
		int32_t L_4 = __this->get_allowedMoves_5();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2163145079, L_6, /*hidden argument*/NULL);
		// Debug.Log("Allowed moves: (space)" + allowedMoves);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		// Debug.Log("Die roll: (space) " + dieRoll);
		int32_t L_8 = __this->get_dieRoll_6();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2073333278, L_10, /*hidden argument*/NULL);
		// Debug.Log("Die roll: (space) " + dieRoll);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Player::Movement(System.Int32,System.Boolean)
extern "C"  void Player_Movement_m1322749492 (Player_t3266647312 * __this, int32_t ___moves0, bool ___medusa1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Movement_m1322749492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movementType = allowedMoves - Mathf.Abs(moves);
		int32_t L_0 = __this->get_allowedMoves_5();
		int32_t L_1 = ___moves0;
		// movementType = allowedMoves - Mathf.Abs(moves);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Abs_m2460432655(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_movementType_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_2)));
		// if(movementType >= 0)
		int32_t L_3 = __this->get_movementType_8();
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		// position.x += dieRoll;
		Vector2_t2156229523 * L_4 = __this->get_address_of_position_4();
		Vector2_t2156229523 * L_5 = L_4;
		float L_6 = L_5->get_x_0();
		int32_t L_7 = __this->get_dieRoll_6();
		L_5->set_x_0(((float)il2cpp_codegen_add((float)L_6, (float)(((float)((float)L_7))))));
		// if(medusa)
		bool L_8 = ___medusa1;
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		// allowedMoves = allowedMoves + direction*Mathf.Abs(moves);
		int32_t L_9 = __this->get_allowedMoves_5();
		int32_t L_10 = __this->get_direction_7();
		int32_t L_11 = ___moves0;
		// allowedMoves = allowedMoves + direction*Mathf.Abs(moves);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_12 = Mathf_Abs_m2460432655(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		__this->set_allowedMoves_5(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_12)))));
		goto IL_00ac;
	}

IL_0061:
	{
		// if(direction < 0)
		int32_t L_13 = __this->get_direction_7();
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		// allowedMoves = allowedMoves + direction * Mathf.Abs(moves);
		int32_t L_14 = __this->get_allowedMoves_5();
		int32_t L_15 = __this->get_direction_7();
		int32_t L_16 = ___moves0;
		// allowedMoves = allowedMoves + direction * Mathf.Abs(moves);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_17 = Mathf_Abs_m2460432655(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		__this->set_allowedMoves_5(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)L_17)))));
		goto IL_00ab;
	}

IL_008f:
	{
		// allowedMoves = allowedMoves - direction * Mathf.Abs(moves);
		int32_t L_18 = __this->get_allowedMoves_5();
		int32_t L_19 = __this->get_direction_7();
		int32_t L_20 = ___moves0;
		// allowedMoves = allowedMoves - direction * Mathf.Abs(moves);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_21 = Mathf_Abs_m2460432655(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		__this->set_allowedMoves_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_21)))));
	}

IL_00ab:
	{
	}

IL_00ac:
	{
		goto IL_0180;
	}

IL_00b2:
	{
		// else if(movementType < 0)
		int32_t L_22 = __this->get_movementType_8();
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_0180;
		}
	}
	{
		// if(movementType == -1)
		int32_t L_23 = __this->get_movementType_8();
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_00fd;
		}
	}
	{
		// position.y -= 1;
		Vector2_t2156229523 * L_24 = __this->get_address_of_position_4();
		Vector2_t2156229523 * L_25 = L_24;
		float L_26 = L_25->get_y_1();
		L_25->set_y_1(((float)il2cpp_codegen_subtract((float)L_26, (float)(1.0f))));
		// direction = -direction;
		int32_t L_27 = __this->get_direction_7();
		__this->set_direction_7(((-L_27)));
		// allowedMoves = 7;
		__this->set_allowedMoves_5(7);
		goto IL_017f;
	}

IL_00fd:
	{
		// position.x += direction * allowedMoves;
		Vector2_t2156229523 * L_28 = __this->get_address_of_position_4();
		Vector2_t2156229523 * L_29 = L_28;
		float L_30 = L_29->get_x_0();
		int32_t L_31 = __this->get_direction_7();
		int32_t L_32 = __this->get_allowedMoves_5();
		L_29->set_x_0(((float)il2cpp_codegen_add((float)L_30, (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)L_32))))))));
		// position.y -= 1;
		Vector2_t2156229523 * L_33 = __this->get_address_of_position_4();
		Vector2_t2156229523 * L_34 = L_33;
		float L_35 = L_34->get_y_1();
		L_34->set_y_1(((float)il2cpp_codegen_subtract((float)L_35, (float)(1.0f))));
		// direction = -direction;
		int32_t L_36 = __this->get_direction_7();
		__this->set_direction_7(((-L_36)));
		// dieRoll = direction * (Mathf.Abs(moves) - allowedMoves);
		int32_t L_37 = __this->get_direction_7();
		int32_t L_38 = ___moves0;
		// dieRoll = direction * (Mathf.Abs(moves) - allowedMoves);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_39 = Mathf_Abs_m2460432655(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		int32_t L_40 = __this->get_allowedMoves_5();
		__this->set_dieRoll_6(((int32_t)il2cpp_codegen_multiply((int32_t)L_37, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40)))));
		// position.x += moves;
		Vector2_t2156229523 * L_41 = __this->get_address_of_position_4();
		Vector2_t2156229523 * L_42 = L_41;
		float L_43 = L_42->get_x_0();
		int32_t L_44 = ___moves0;
		L_42->set_x_0(((float)il2cpp_codegen_add((float)L_43, (float)(((float)((float)L_44))))));
		// allowedMoves = 7 - Mathf.Abs(moves);
		int32_t L_45 = ___moves0;
		// allowedMoves = 7 - Mathf.Abs(moves);
		int32_t L_46 = Mathf_Abs_m2460432655(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		__this->set_allowedMoves_5(((int32_t)il2cpp_codegen_subtract((int32_t)7, (int32_t)L_46)));
	}

IL_017f:
	{
	}

IL_0180:
	{
		// gameObject.transform.position = position;
		// gameObject.transform.position = position;
		GameObject_t1113636619 * L_47 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// gameObject.transform.position = position;
		Transform_t3600365921 * L_48 = GameObject_get_transform_m1369836730(L_47, /*hidden argument*/NULL);
		Vector2_t2156229523  L_49 = __this->get_position_4();
		// gameObject.transform.position = position;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_50 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		// gameObject.transform.position = position;
		Transform_set_position_m3387557959(L_48, L_50, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Player_OnTriggerEnter2D_m1893340054 (Player_t3266647312 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_OnTriggerEnter2D_m1893340054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.CompareTag("Zeus"))
		Collider2D_t2806799626 * L_0 = ___collision0;
		// if(collision.CompareTag("Zeus"))
		bool L_1 = Component_CompareTag_m1328479619(L_0, _stringLiteral3147266007, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0077;
		}
	}
	{
		// dieRoll = direction * Z;
		int32_t L_2 = __this->get_direction_7();
		int32_t L_3 = __this->get_Z_10();
		__this->set_dieRoll_6(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)));
		// Movement(dieRoll, false);
		int32_t L_4 = __this->get_dieRoll_6();
		// Movement(dieRoll, false);
		Player_Movement_m1322749492(__this, L_4, (bool)0, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_t2806799626 * L_5 = ___collision0;
		// Destroy(collision.gameObject);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		// Debug.Log("Allowed moves: (trigger) " + allowedMoves);
		int32_t L_7 = __this->get_allowedMoves_5();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1083228911, L_9, /*hidden argument*/NULL);
		// Debug.Log("Allowed moves: (trigger) " + allowedMoves);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		// Debug.Log("Die roll: (trigger) " + dieRoll);
		int32_t L_11 = __this->get_dieRoll_6();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral233660424, L_13, /*hidden argument*/NULL);
		// Debug.Log("Die roll: (trigger) " + dieRoll);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		goto IL_00e8;
	}

IL_0077:
	{
		// else if(collision.CompareTag("Medusa"))
		Collider2D_t2806799626 * L_15 = ___collision0;
		// else if(collision.CompareTag("Medusa"))
		bool L_16 = Component_CompareTag_m1328479619(L_15, _stringLiteral3847424578, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00e8;
		}
	}
	{
		// dieRoll = direction * M;
		int32_t L_17 = __this->get_direction_7();
		int32_t L_18 = __this->get_M_11();
		__this->set_dieRoll_6(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)L_18)));
		// Movement(dieRoll, true);
		int32_t L_19 = __this->get_dieRoll_6();
		// Movement(dieRoll, true);
		Player_Movement_m1322749492(__this, L_19, (bool)1, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_t2806799626 * L_20 = ___collision0;
		// Destroy(collision.gameObject);
		GameObject_t1113636619 * L_21 = Component_get_gameObject_m442555142(L_20, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		// Debug.Log("Allowed moves: (trigger) " + allowedMoves);
		int32_t L_22 = __this->get_allowedMoves_5();
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_23);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1083228911, L_24, /*hidden argument*/NULL);
		// Debug.Log("Allowed moves: (trigger) " + allowedMoves);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		// Debug.Log("Die roll: (trigger) " + dieRoll);
		int32_t L_26 = __this->get_dieRoll_6();
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral233660424, L_28, /*hidden argument*/NULL);
		// Debug.Log("Die roll: (trigger) " + dieRoll);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spawning::.ctor()
extern "C"  void Spawning__ctor_m168386853 (Spawning_t3324710504 * __this, const RuntimeMethod* method)
{
	{
		// int medusaFrequency = 3;
		__this->set_medusaFrequency_4(3);
		// int zeusFrequency = 3;
		__this->set_zeusFrequency_5(3);
		// int screenSize = 8;
		__this->set_screenSize_6(8);
		// float startX = -3.5f;
		__this->set_startX_7((-3.5f));
		// float startY = 3.5f;
		__this->set_startY_8((3.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawning::Start()
extern "C"  void Spawning_Start_m3357816201 (Spawning_t3324710504 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spawning_Start_m3357816201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int medusaPerRow = Mathf.FloorToInt(screenSize / medusaFrequency);
		int32_t L_0 = __this->get_screenSize_6();
		int32_t L_1 = __this->get_medusaFrequency_4();
		// int medusaPerRow = Mathf.FloorToInt(screenSize / medusaFrequency);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, (((float)((float)((int32_t)((int32_t)L_0/(int32_t)L_1))))), /*hidden argument*/NULL);
		V_0 = L_2;
		// int numberOfMedusas = medusaPerRow * screenSize/2;
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_screenSize_6();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4))/(int32_t)2));
		// for (int j = 0; j < numberOfMedusas; j++)
		V_2 = 0;
		goto IL_007b;
	}

IL_0027:
	{
		// for (int i = 1; i < medusaPerRow + 1; i++)
		V_3 = 1;
		goto IL_006d;
	}

IL_002f:
	{
		// Instantiate(medusa, new Vector2(-3.5f + medusaFrequency*i + 1, 3.5f - j), Quaternion.identity);
		GameObject_t1113636619 * L_5 = __this->get_medusa_2();
		int32_t L_6 = __this->get_medusaFrequency_4();
		int32_t L_7 = V_3;
		int32_t L_8 = V_2;
		// Instantiate(medusa, new Vector2(-3.5f + medusaFrequency*i + 1, 3.5f - j), Quaternion.identity);
		Vector2_t2156229523  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m3970636864((&L_9), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(-3.5f), (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_7))))))), (float)(1.0f))), ((float)il2cpp_codegen_subtract((float)(3.5f), (float)(((float)((float)L_8))))), /*hidden argument*/NULL);
		// Instantiate(medusa, new Vector2(-3.5f + medusaFrequency*i + 1, 3.5f - j), Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		// Instantiate(medusa, new Vector2(-3.5f + medusaFrequency*i + 1, 3.5f - j), Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// Instantiate(medusa, new Vector2(-3.5f + medusaFrequency*i + 1, 3.5f - j), Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_5, L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		// for (int i = 1; i < medusaPerRow + 1; i++)
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_006d:
	{
		// for (int i = 1; i < medusaPerRow + 1; i++)
		int32_t L_13 = V_3;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)))))
		{
			goto IL_002f;
		}
	}
	{
		// for (int j = 0; j < numberOfMedusas; j++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_007b:
	{
		// for (int j = 0; j < numberOfMedusas; j++)
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0027;
		}
	}
	{
		// int zeusPerRow = Mathf.FloorToInt(screenSize / zeusFrequency);
		int32_t L_18 = __this->get_screenSize_6();
		int32_t L_19 = __this->get_zeusFrequency_5();
		// int zeusPerRow = Mathf.FloorToInt(screenSize / zeusFrequency);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_20 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, (((float)((float)((int32_t)((int32_t)L_18/(int32_t)L_19))))), /*hidden argument*/NULL);
		V_4 = L_20;
		// int numberOfZeus = medusaPerRow * screenSize / 2;
		int32_t L_21 = V_0;
		int32_t L_22 = __this->get_screenSize_6();
		V_5 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)L_22))/(int32_t)2));
		// for (int j = 0; j < numberOfZeus; j++)
		V_6 = 0;
		goto IL_0102;
	}

IL_00ab:
	{
		// for (int i = 1; i < zeusPerRow + 1; i++)
		V_7 = 1;
		goto IL_00f0;
	}

IL_00b4:
	{
		// Instantiate(zeus, new Vector2(-4.5f + zeusFrequency * i, 3.5f - j), Quaternion.identity);
		GameObject_t1113636619 * L_23 = __this->get_zeus_3();
		int32_t L_24 = __this->get_zeusFrequency_5();
		int32_t L_25 = V_7;
		int32_t L_26 = V_6;
		// Instantiate(zeus, new Vector2(-4.5f + zeusFrequency * i, 3.5f - j), Quaternion.identity);
		Vector2_t2156229523  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector2__ctor_m3970636864((&L_27), ((float)il2cpp_codegen_add((float)(-4.5f), (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)L_25))))))), ((float)il2cpp_codegen_subtract((float)(3.5f), (float)(((float)((float)L_26))))), /*hidden argument*/NULL);
		// Instantiate(zeus, new Vector2(-4.5f + zeusFrequency * i, 3.5f - j), Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_28 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		// Instantiate(zeus, new Vector2(-4.5f + zeusFrequency * i, 3.5f - j), Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_29 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// Instantiate(zeus, new Vector2(-4.5f + zeusFrequency * i, 3.5f - j), Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_23, L_28, L_29, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		// for (int i = 1; i < zeusPerRow + 1; i++)
		int32_t L_30 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00f0:
	{
		// for (int i = 1; i < zeusPerRow + 1; i++)
		int32_t L_31 = V_7;
		int32_t L_32 = V_4;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)))))
		{
			goto IL_00b4;
		}
	}
	{
		// for (int j = 0; j < numberOfZeus; j++)
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0102:
	{
		// for (int j = 0; j < numberOfZeus; j++)
		int32_t L_34 = V_6;
		int32_t L_35 = V_5;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_00ab;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Spawning::Update()
extern "C"  void Spawning_Update_m1098939445 (Spawning_t3324710504 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Timer::.ctor()
extern "C"  void Timer__ctor_m1596977667 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	{
		// float totalSeconds = 0;
		__this->set_totalSeconds_2((0.0f));
		// float elapsedSeconds = 0;
		__this->set_elapsedSeconds_3((0.0f));
		// bool running = false;
		__this->set_running_4((bool)0);
		// bool started = false;
		__this->set_started_5((bool)0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Timer::set_Duration(System.Single)
extern "C"  void Timer_set_Duration_m3601093541 (Timer_t4185932343 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// if(!running)
		bool L_0 = __this->get_running_4();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// totalSeconds = value;
		float L_1 = ___value0;
		__this->set_totalSeconds_2(L_1);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Boolean Timer::get_Finished()
extern "C"  bool Timer_get_Finished_m333457127 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return running; }
		bool L_0 = __this->get_running_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// get { return running; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Single Timer::get_SecondsLeft()
extern "C"  float Timer_get_SecondsLeft_m3674921158 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if(running)
		bool L_0 = __this->get_running_4();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// return totalSeconds - elapsedSeconds;
		float L_1 = __this->get_totalSeconds_2();
		float L_2 = __this->get_elapsedSeconds_3();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_2));
		goto IL_002c;
	}

IL_0020:
	{
		// return 0;
		V_0 = (0.0f);
		goto IL_002c;
	}

IL_002c:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void Timer::Update()
extern "C"  void Timer_Update_m1253272202 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	{
		// if(running)
		bool L_0 = __this->get_running_4();
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		// elapsedSeconds += Time.deltaTime;
		float L_1 = __this->get_elapsedSeconds_3();
		// elapsedSeconds += Time.deltaTime;
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_elapsedSeconds_3(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		// if(elapsedSeconds >= totalSeconds)
		float L_3 = __this->get_elapsedSeconds_3();
		float L_4 = __this->get_totalSeconds_2();
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0039;
		}
	}
	{
		// running = false;
		__this->set_running_4((bool)0);
	}

IL_0039:
	{
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Timer::Run()
extern "C"  void Timer_Run_m2642820430 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	{
		// if(totalSeconds > 0)
		float L_0 = __this->get_totalSeconds_2();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// started = true;
		__this->set_started_5((bool)1);
		// running = true;
		__this->set_running_4((bool)1);
		// elapsedSeconds = 0;
		__this->set_elapsedSeconds_3((0.0f));
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Timer::Stop()
extern "C"  void Timer_Stop_m3372427372 (Timer_t4185932343 * __this, const RuntimeMethod* method)
{
	{
		// started = false;
		__this->set_started_5((bool)0);
		// running = false;
		__this->set_running_4((bool)0);
		// }
		return;
	}
}
// System.Void Timer::AddTime(System.Single)
extern "C"  void Timer_AddTime_m1416535784 (Timer_t4185932343 * __this, float ___seconds0, const RuntimeMethod* method)
{
	{
		// totalSeconds += seconds;
		float L_0 = __this->get_totalSeconds_2();
		float L_1 = ___seconds0;
		__this->set_totalSeconds_2(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
