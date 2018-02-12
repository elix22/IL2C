﻿#ifndef __MODULE_Win32_Code__
#define __MODULE_Win32_Code__

#include <il2c.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <wchar.h>

#ifdef __cplusplus
extern "C" {
#endif

//////////////////////////////////////////////////////////////////////////////////
// Types:

typedef struct Win32_Code_BoxingTest Win32_Code_BoxingTest;
typedef struct Win32_Code_ClassTypeTestTarget Win32_Code_ClassTypeTestTarget;
typedef struct Win32_Code_ClassTypeTest Win32_Code_ClassTypeTest;
typedef struct Win32_Code_Hoge1 Win32_Code_Hoge1;
typedef struct Win32_Code_Hoge2 Win32_Code_Hoge2;
typedef struct Win32_Code_InheritTestTargetBase1 Win32_Code_InheritTestTargetBase1;
typedef struct Win32_Code_InheritTestTarget2 Win32_Code_InheritTestTarget2;
typedef struct Win32_Code_InheritTypeTest Win32_Code_InheritTypeTest;
typedef struct Win32_Code_Win32 Win32_Code_Win32;
typedef struct Win32_Code_AbstractNode Win32_Code_AbstractNode;
typedef struct Win32_Code_OperatorNode Win32_Code_OperatorNode;
typedef struct Win32_Code_ReducibleNode Win32_Code_ReducibleNode;
typedef struct Win32_Code_NumericNode Win32_Code_NumericNode;
typedef struct Win32_Code_ExpressionNode Win32_Code_ExpressionNode;
typedef struct Win32_Code_PolishNotation Win32_Code_PolishNotation;
typedef struct Win32_Code_StringTest Win32_Code_StringTest;
typedef struct Win32_Code_UnsafeTest Win32_Code_UnsafeTest;
typedef struct Win32_Code_ValueTypeTestTarget Win32_Code_ValueTypeTestTarget;
typedef struct Win32_Code_ValueTypeTest Win32_Code_ValueTypeTest;

////////////////////////////////////////////////////////////
// Class: Win32.Code.BoxingTest

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_BoxingTest_VTABLE_DECL__;

struct Win32_Code_BoxingTest
{
    __Win32_Code_BoxingTest_VTABLE_DECL__* vptr__;

};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_BoxingTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.ClassTypeTestTarget

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_ClassTypeTestTarget_VTABLE_DECL__;

struct Win32_Code_ClassTypeTestTarget
{
    __Win32_Code_ClassTypeTestTarget_VTABLE_DECL__* vptr__;

    int32_t Value2;
    Win32_Code_ClassTypeTestTarget* OR2;
};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ClassTypeTestTarget_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.ClassTypeTest

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_ClassTypeTest_VTABLE_DECL__;

struct Win32_Code_ClassTypeTest
{
    __Win32_Code_ClassTypeTest_VTABLE_DECL__* vptr__;

};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ClassTypeTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.Hoge1

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_Hoge1_VTABLE_DECL__;

struct Win32_Code_Hoge1
{
    __Win32_Code_Hoge1_VTABLE_DECL__* vptr__;

};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_Hoge1_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.Hoge2

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_Hoge2_VTABLE_DECL__;

struct Win32_Code_Hoge2
{
    __Win32_Code_Hoge2_VTABLE_DECL__* vptr__;

};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_Hoge2_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.InheritTestTargetBase1

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
    int32_t (*Calc_1)(Win32_Code_InheritTestTargetBase1* this__, int32_t a, int32_t b);
} __Win32_Code_InheritTestTargetBase1_VTABLE_DECL__;

struct Win32_Code_InheritTestTargetBase1
{
    __Win32_Code_InheritTestTargetBase1_VTABLE_DECL__* vptr__;

    int32_t Value2;
    Win32_Code_ClassTypeTestTarget* OR2;
};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_InheritTestTargetBase1_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.InheritTestTarget2

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
    int32_t (*Calc_1)(Win32_Code_InheritTestTarget2* this__, int32_t a, int32_t b);
} __Win32_Code_InheritTestTarget2_VTABLE_DECL__;

struct Win32_Code_InheritTestTarget2
{
    __Win32_Code_InheritTestTarget2_VTABLE_DECL__* vptr__;

    int32_t Value2;
    Win32_Code_ClassTypeTestTarget* OR2;
};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_InheritTestTarget2_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.InheritTypeTest

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_InheritTypeTest_VTABLE_DECL__;

struct Win32_Code_InheritTypeTest
{
    __Win32_Code_InheritTypeTest_VTABLE_DECL__* vptr__;

};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_InheritTypeTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.Win32

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_Win32_VTABLE_DECL__;

struct Win32_Code_Win32
{
    __Win32_Code_Win32_VTABLE_DECL__* vptr__;

};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_Win32_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.AbstractNode

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_AbstractNode_VTABLE_DECL__;

struct Win32_Code_AbstractNode
{
    __Win32_Code_AbstractNode_VTABLE_DECL__* vptr__;

    int32_t NextIndex;
};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_AbstractNode_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.OperatorNode

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_OperatorNode_VTABLE_DECL__;

struct Win32_Code_OperatorNode
{
    __Win32_Code_OperatorNode_VTABLE_DECL__* vptr__;

    int32_t NextIndex;
    wchar_t Operator;
};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_OperatorNode_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.ReducibleNode

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
    int32_t (*Reduce)(Win32_Code_ReducibleNode* this__);
} __Win32_Code_ReducibleNode_VTABLE_DECL__;

struct Win32_Code_ReducibleNode
{
    __Win32_Code_ReducibleNode_VTABLE_DECL__* vptr__;

    int32_t NextIndex;
};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ReducibleNode_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.NumericNode

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
    int32_t (*Reduce)(Win32_Code_NumericNode* this__);
} __Win32_Code_NumericNode_VTABLE_DECL__;

struct Win32_Code_NumericNode
{
    __Win32_Code_NumericNode_VTABLE_DECL__* vptr__;

    int32_t NextIndex;
    int32_t Numeric;
};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_NumericNode_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.ExpressionNode

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
    int32_t (*Reduce)(Win32_Code_ExpressionNode* this__);
} __Win32_Code_ExpressionNode_VTABLE_DECL__;

struct Win32_Code_ExpressionNode
{
    __Win32_Code_ExpressionNode_VTABLE_DECL__* vptr__;

    int32_t NextIndex;
    Win32_Code_OperatorNode* Operator;
    Win32_Code_ReducibleNode* Left;
    Win32_Code_ReducibleNode* Right;
};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ExpressionNode_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.PolishNotation

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_PolishNotation_VTABLE_DECL__;

struct Win32_Code_PolishNotation
{
    __Win32_Code_PolishNotation_VTABLE_DECL__* vptr__;

};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_PolishNotation_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.StringTest

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_StringTest_VTABLE_DECL__;

struct Win32_Code_StringTest
{
    __Win32_Code_StringTest_VTABLE_DECL__* vptr__;

};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_StringTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.UnsafeTest

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_UnsafeTest_VTABLE_DECL__;

struct Win32_Code_UnsafeTest
{
    __Win32_Code_UnsafeTest_VTABLE_DECL__* vptr__;

};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_UnsafeTest_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Struct: Win32.Code.ValueTypeTestTarget

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_ValueType* this__);
    int32_t (*GetHashCode)(System_ValueType* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_ValueType* this__, System_Object* obj);
} __Win32_Code_ValueTypeTestTarget_VTABLE_DECL__;

struct Win32_Code_ValueTypeTestTarget
{
    int32_t Value2;
    Win32_Code_ClassTypeTestTarget* OR2;
};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ValueTypeTestTarget_RUNTIME_TYPE__;

////////////////////////////////////////////////////////////
// Class: Win32.Code.ValueTypeTest

typedef const struct
{
    void* (*IL2C_RuntimeCast)(System_Object* this__, IL2C_RUNTIME_TYPE_DECL* type);
    System_String* (*ToString)(System_Object* this__);
    int32_t (*GetHashCode)(System_Object* this__);
    void (*Finalize)(System_Object* this__);
    bool (*Equals)(System_Object* this__, System_Object* obj);
} __Win32_Code_ValueTypeTest_VTABLE_DECL__;

struct Win32_Code_ValueTypeTest
{
    __Win32_Code_ValueTypeTest_VTABLE_DECL__* vptr__;

};

extern IL2C_RUNTIME_TYPE_DECL __Win32_Code_ValueTypeTest_RUNTIME_TYPE__;

//////////////////////////////////////////////////////////////////////////////////
// Public static fields:


extern int32_t Win32_Code_ClassTypeTestTarget_Value1;
extern Win32_Code_ClassTypeTestTarget* Win32_Code_ClassTypeTestTarget_OR1;
















extern int32_t Win32_Code_ValueTypeTestTarget_Value1;


//////////////////////////////////////////////////////////////////////////////////
// Methods:

extern void Win32_Code_BoxingTest_BoxingInt32(int32_t a);
extern void Win32_Code_BoxingTest__ctor(Win32_Code_BoxingTest* this__);
#define Win32_Code_BoxingTest_ToString(/* Win32_Code_BoxingTest* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_BoxingTest_GetHashCode(/* Win32_Code_BoxingTest* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_BoxingTest_Finalize(/* Win32_Code_BoxingTest* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_BoxingTest_Equals(/* Win32_Code_BoxingTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern void Win32_Code_ClassTypeTestTarget__ctor(Win32_Code_ClassTypeTestTarget* this__);
extern void Win32_Code_ClassTypeTestTarget__ctor_1(Win32_Code_ClassTypeTestTarget* this__, int32_t value);
extern int32_t Win32_Code_ClassTypeTestTarget_GetValue2(Win32_Code_ClassTypeTestTarget* this__, int32_t a, int32_t b);
extern int32_t Win32_Code_ClassTypeTestTarget_GetValue2_1(Win32_Code_ClassTypeTestTarget* this__, int32_t a, int32_t b, int32_t c);
#define Win32_Code_ClassTypeTestTarget_ToString(/* Win32_Code_ClassTypeTestTarget* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_ClassTypeTestTarget_GetHashCode(/* Win32_Code_ClassTypeTestTarget* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_ClassTypeTestTarget_Finalize(/* Win32_Code_ClassTypeTestTarget* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_ClassTypeTestTarget_Equals(/* Win32_Code_ClassTypeTestTarget* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern int32_t Win32_Code_ClassTypeTest_Test4(void);
extern int32_t Win32_Code_ClassTypeTest_Test5(void);
extern int32_t Win32_Code_ClassTypeTest_Test6(void);
extern int32_t Win32_Code_ClassTypeTest_Test7(void);
extern void Win32_Code_ClassTypeTest__ctor(Win32_Code_ClassTypeTest* this__);
#define Win32_Code_ClassTypeTest_ToString(/* Win32_Code_ClassTypeTest* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_ClassTypeTest_GetHashCode(/* Win32_Code_ClassTypeTest* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_ClassTypeTest_Finalize(/* Win32_Code_ClassTypeTest* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_ClassTypeTest_Equals(/* Win32_Code_ClassTypeTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern int32_t Win32_Code_Hoge1_Add1(int32_t a, bool isTwo);
extern int64_t Win32_Code_Hoge1_Add2(int64_t a, bool isTwo);
extern void Win32_Code_Hoge1__ctor(Win32_Code_Hoge1* this__);
#define Win32_Code_Hoge1_ToString(/* Win32_Code_Hoge1* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_Hoge1_GetHashCode(/* Win32_Code_Hoge1* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_Hoge1_Finalize(/* Win32_Code_Hoge1* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_Hoge1_Equals(/* Win32_Code_Hoge1* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern uint8_t Win32_Code_Hoge2_Add3(uint8_t a, bool isTwo);
extern uint16_t Win32_Code_Hoge2_Add4(uint16_t a, bool isTwo);
extern void Win32_Code_Hoge2__ctor(Win32_Code_Hoge2* this__);
#define Win32_Code_Hoge2_ToString(/* Win32_Code_Hoge2* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_Hoge2_GetHashCode(/* Win32_Code_Hoge2* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_Hoge2_Finalize(/* Win32_Code_Hoge2* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_Hoge2_Equals(/* Win32_Code_Hoge2* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern void Win32_Code_InheritTestTargetBase1__ctor(Win32_Code_InheritTestTargetBase1* this__);
extern void Win32_Code_InheritTestTargetBase1__ctor_1(Win32_Code_InheritTestTargetBase1* this__, int32_t value);
extern int32_t Win32_Code_InheritTestTargetBase1_Calc(Win32_Code_InheritTestTargetBase1* this__, int32_t a);
extern int32_t __Win32_Code_InheritTestTargetBase1_Calc_1__(Win32_Code_InheritTestTargetBase1* this__, int32_t a, int32_t b);
#define Win32_Code_InheritTestTargetBase1_ToString(/* Win32_Code_InheritTestTargetBase1* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_InheritTestTargetBase1_GetHashCode(/* Win32_Code_InheritTestTargetBase1* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_InheritTestTargetBase1_Finalize(/* Win32_Code_InheritTestTargetBase1* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_InheritTestTargetBase1_Equals(/* Win32_Code_InheritTestTargetBase1* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))
#define Win32_Code_InheritTestTargetBase1_Calc_1(/* Win32_Code_InheritTestTargetBase1* */ this__, /* int32_t */ a, /* int32_t */ b) \
    ((this__)->vptr__->Calc_1((Win32_Code_InheritTestTargetBase1*)(this__), (a), (b)))

extern void Win32_Code_InheritTestTarget2__ctor(Win32_Code_InheritTestTarget2* this__);
extern void Win32_Code_InheritTestTarget2__ctor_1(Win32_Code_InheritTestTarget2* this__, int32_t value);
extern int32_t Win32_Code_InheritTestTarget2_Calc(Win32_Code_InheritTestTarget2* this__, int32_t a);
extern int32_t __Win32_Code_InheritTestTarget2_Calc_1__(Win32_Code_InheritTestTarget2* this__, int32_t a, int32_t b);
#define Win32_Code_InheritTestTarget2_ToString(/* Win32_Code_InheritTestTarget2* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_InheritTestTarget2_GetHashCode(/* Win32_Code_InheritTestTarget2* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_InheritTestTarget2_Finalize(/* Win32_Code_InheritTestTarget2* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_InheritTestTarget2_Equals(/* Win32_Code_InheritTestTarget2* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))
#define Win32_Code_InheritTestTarget2_Calc_1(/* Win32_Code_InheritTestTarget2* */ this__, /* int32_t */ a, /* int32_t */ b) \
    ((this__)->vptr__->Calc_1((Win32_Code_InheritTestTarget2*)(this__), (a), (b)))

extern int32_t Win32_Code_InheritTypeTest_Test1(void);
extern int32_t Win32_Code_InheritTypeTest_Test2(void);
extern int32_t Win32_Code_InheritTypeTest_Test3(void);
extern int32_t Win32_Code_InheritTypeTest_Test4(void);
extern void Win32_Code_InheritTypeTest__ctor(Win32_Code_InheritTypeTest* this__);
#define Win32_Code_InheritTypeTest_ToString(/* Win32_Code_InheritTypeTest* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_InheritTypeTest_GetHashCode(/* Win32_Code_InheritTypeTest* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_InheritTypeTest_Finalize(/* Win32_Code_InheritTypeTest* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_InheritTypeTest_Equals(/* Win32_Code_InheritTypeTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern int32_t Win32_Code_Win32_GetCurrentProcessId(void);
extern int32_t Win32_Code_Win32_GetCurrentThreadId(void);
extern void Win32_Code_Win32_OutputDebugString(System_String* message);
extern void Win32_Code_Win32__ctor(Win32_Code_Win32* this__);
#define Win32_Code_Win32_ToString(/* Win32_Code_Win32* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_Win32_GetHashCode(/* Win32_Code_Win32* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_Win32_Finalize(/* Win32_Code_Win32* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_Win32_Equals(/* Win32_Code_Win32* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern void Win32_Code_AbstractNode__ctor(Win32_Code_AbstractNode* this__, int32_t nextIndex);
#define Win32_Code_AbstractNode_ToString(/* Win32_Code_AbstractNode* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_AbstractNode_GetHashCode(/* Win32_Code_AbstractNode* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_AbstractNode_Finalize(/* Win32_Code_AbstractNode* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_AbstractNode_Equals(/* Win32_Code_AbstractNode* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern void Win32_Code_OperatorNode__ctor(Win32_Code_OperatorNode* this__, wchar_t oper, int32_t nextIndex);
#define Win32_Code_OperatorNode_ToString(/* Win32_Code_OperatorNode* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_OperatorNode_GetHashCode(/* Win32_Code_OperatorNode* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_OperatorNode_Finalize(/* Win32_Code_OperatorNode* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_OperatorNode_Equals(/* Win32_Code_OperatorNode* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern void Win32_Code_ReducibleNode__ctor(Win32_Code_ReducibleNode* this__, int32_t nextIndex);
extern int32_t __Win32_Code_ReducibleNode_Reduce__(Win32_Code_ReducibleNode* this__);
#define Win32_Code_ReducibleNode_ToString(/* Win32_Code_ReducibleNode* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_ReducibleNode_GetHashCode(/* Win32_Code_ReducibleNode* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_ReducibleNode_Finalize(/* Win32_Code_ReducibleNode* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_ReducibleNode_Equals(/* Win32_Code_ReducibleNode* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))
#define Win32_Code_ReducibleNode_Reduce(/* Win32_Code_ReducibleNode* */ this__) \
    ((this__)->vptr__->Reduce((Win32_Code_ReducibleNode*)(this__)))

extern void Win32_Code_NumericNode__ctor(Win32_Code_NumericNode* this__, int32_t numeric, int32_t nextIndex);
extern int32_t __Win32_Code_NumericNode_Reduce__(Win32_Code_NumericNode* this__);
#define Win32_Code_NumericNode_ToString(/* Win32_Code_NumericNode* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_NumericNode_GetHashCode(/* Win32_Code_NumericNode* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_NumericNode_Finalize(/* Win32_Code_NumericNode* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_NumericNode_Equals(/* Win32_Code_NumericNode* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))
#define Win32_Code_NumericNode_Reduce(/* Win32_Code_NumericNode* */ this__) \
    ((this__)->vptr__->Reduce((Win32_Code_NumericNode*)(this__)))

extern void Win32_Code_ExpressionNode__ctor(Win32_Code_ExpressionNode* this__, Win32_Code_OperatorNode* oper, Win32_Code_ReducibleNode* left, Win32_Code_ReducibleNode* right, int32_t nextIndex);
extern int32_t __Win32_Code_ExpressionNode_Reduce__(Win32_Code_ExpressionNode* this__);
#define Win32_Code_ExpressionNode_ToString(/* Win32_Code_ExpressionNode* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_ExpressionNode_GetHashCode(/* Win32_Code_ExpressionNode* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_ExpressionNode_Finalize(/* Win32_Code_ExpressionNode* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_ExpressionNode_Equals(/* Win32_Code_ExpressionNode* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))
#define Win32_Code_ExpressionNode_Reduce(/* Win32_Code_ExpressionNode* */ this__) \
    ((this__)->vptr__->Reduce((Win32_Code_ExpressionNode*)(this__)))

extern int32_t Win32_Code_PolishNotation_SkipWhiteSpace(System_String* line, int32_t startIndex);
extern Win32_Code_OperatorNode* Win32_Code_PolishNotation_ParseOperator(System_String* line, int32_t startIndex);
extern Win32_Code_NumericNode* Win32_Code_PolishNotation_ParseNumeric(System_String* line, int32_t startIndex);
extern Win32_Code_ExpressionNode* Win32_Code_PolishNotation_ParseExpression(System_String* line, int32_t startIndex);
extern void Win32_Code_PolishNotation_Main(void);
extern void Win32_Code_PolishNotation__ctor(Win32_Code_PolishNotation* this__);
#define Win32_Code_PolishNotation_ToString(/* Win32_Code_PolishNotation* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_PolishNotation_GetHashCode(/* Win32_Code_PolishNotation* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_PolishNotation_Finalize(/* Win32_Code_PolishNotation* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_PolishNotation_Equals(/* Win32_Code_PolishNotation* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern void Win32_Code_StringTest_LiteralString(void);
extern System_String* Win32_Code_StringTest_InOutString(System_String* a);
extern System_String* Win32_Code_StringTest_LiteralCombinedString(void);
extern System_String* Win32_Code_StringTest_LiteralSubstring(void);
extern wchar_t Win32_Code_StringTest_GetChar(void);
extern wchar_t Win32_Code_StringTest_GetCharByIndex(System_String* str, int32_t index);
extern void Win32_Code_StringTest__ctor(Win32_Code_StringTest* this__);
#define Win32_Code_StringTest_ToString(/* Win32_Code_StringTest* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_StringTest_GetHashCode(/* Win32_Code_StringTest* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_StringTest_Finalize(/* Win32_Code_StringTest* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_StringTest_Equals(/* Win32_Code_StringTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern void Win32_Code_UnsafeTest__ctor(Win32_Code_UnsafeTest* this__);
#define Win32_Code_UnsafeTest_ToString(/* Win32_Code_UnsafeTest* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_UnsafeTest_GetHashCode(/* Win32_Code_UnsafeTest* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_UnsafeTest_Finalize(/* Win32_Code_UnsafeTest* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_UnsafeTest_Equals(/* Win32_Code_UnsafeTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

extern int32_t Win32_Code_ValueTypeTestTarget_GetValue2(Win32_Code_ValueTypeTestTarget* this__, int32_t a, int32_t b);
#define Win32_Code_ValueTypeTestTarget_ToString(/* Win32_Code_ValueTypeTestTarget */ this__) \
    ((this__)->vptr__->ToString((System_ValueType*)(this__)))
#define Win32_Code_ValueTypeTestTarget_GetHashCode(/* Win32_Code_ValueTypeTestTarget */ this__) \
    ((this__)->vptr__->GetHashCode((System_ValueType*)(this__)))
#define Win32_Code_ValueTypeTestTarget_Finalize(/* Win32_Code_ValueTypeTestTarget */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_ValueTypeTestTarget_Equals(/* Win32_Code_ValueTypeTestTarget */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_ValueType*)(this__), (obj)))

extern int32_t Win32_Code_ValueTypeTest_Test4(void);
extern int32_t Win32_Code_ValueTypeTest_Test5(void);
extern void Win32_Code_ValueTypeTest__ctor(Win32_Code_ValueTypeTest* this__);
#define Win32_Code_ValueTypeTest_ToString(/* Win32_Code_ValueTypeTest* */ this__) \
    ((this__)->vptr__->ToString((System_Object*)(this__)))
#define Win32_Code_ValueTypeTest_GetHashCode(/* Win32_Code_ValueTypeTest* */ this__) \
    ((this__)->vptr__->GetHashCode((System_Object*)(this__)))
#define Win32_Code_ValueTypeTest_Finalize(/* Win32_Code_ValueTypeTest* */ this__) \
    ((this__)->vptr__->Finalize((System_Object*)(this__)))
#define Win32_Code_ValueTypeTest_Equals(/* Win32_Code_ValueTypeTest* */ this__, /* System_Object* */ obj) \
    ((this__)->vptr__->Equals((System_Object*)(this__), (obj)))

#ifdef __cplusplus
}
#endif

#endif