

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 08:44:07 2038
 */
/* Compiler settings for SampleAtlProj.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "SampleAtlProj_i.h"

#define TYPE_FORMAT_STRING_SIZE   1199                              
#define PROC_FORMAT_STRING_SIZE   169                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _SampleAtlProj_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } SampleAtlProj_MIDL_TYPE_FORMAT_STRING;

typedef struct _SampleAtlProj_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } SampleAtlProj_MIDL_PROC_FORMAT_STRING;

typedef struct _SampleAtlProj_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } SampleAtlProj_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const SampleAtlProj_MIDL_TYPE_FORMAT_STRING SampleAtlProj__MIDL_TypeFormatString;
extern const SampleAtlProj_MIDL_PROC_FORMAT_STRING SampleAtlProj__MIDL_ProcFormatString;
extern const SampleAtlProj_MIDL_EXPR_FORMAT_STRING SampleAtlProj__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IMyMathComponent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMyMathComponent_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAutomationObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAutomationObject_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ILateBindingObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ILateBindingObject_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO ISafeArrayComponent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISafeArrayComponent_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const SampleAtlProj_MIDL_PROC_FORMAT_STRING SampleAtlProj__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure AddFunc */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iVal1 */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter iVal2 */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter iAddValue */

/* 36 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DisplayMessage */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x7 ),	/* 7 */
/* 56 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 64 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x1 ),	/* 1 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strMessage */

/* 72 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SquareOfNumber */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x7 ),	/* 7 */
/* 92 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 94 */	NdrFcShort( 0x8 ),	/* 8 */
/* 96 */	NdrFcShort( 0x24 ),	/* 36 */
/* 98 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 100 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nVal */

/* 108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nResult */

/* 114 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddNumbers */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x7 ),	/* 7 */
/* 134 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x24 ),	/* 36 */
/* 140 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 142 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter theArray */

/* 150 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 154 */	NdrFcShort( 0x4a4 ),	/* Type Offset=1188 */

	/* Parameter lSum */

/* 156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 164 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const SampleAtlProj_MIDL_TYPE_FORMAT_STRING SampleAtlProj__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0x18 ),	/* Offset= 24 (32) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x0 , 
			0x0,		/* 0 */
/* 22 */	NdrFcLong( 0x0 ),	/* 0 */
/* 26 */	NdrFcLong( 0x0 ),	/* 0 */
/* 30 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 32 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 34 */	NdrFcShort( 0x8 ),	/* 8 */
/* 36 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (10) */
/* 38 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 40 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 42 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x4 ),	/* 4 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (6) */
/* 52 */	
			0x12, 0x0,	/* FC_UP */
/* 54 */	NdrFcShort( 0x45a ),	/* Offset= 1114 (1168) */
/* 56 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 58 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 60 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 62 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 64 */	0x0 , 
			0x0,		/* 0 */
/* 66 */	NdrFcLong( 0x0 ),	/* 0 */
/* 70 */	NdrFcLong( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x2 ),	/* Offset= 2 (76) */
/* 76 */	NdrFcShort( 0x10 ),	/* 16 */
/* 78 */	NdrFcShort( 0x2f ),	/* 47 */
/* 80 */	NdrFcLong( 0x14 ),	/* 20 */
/* 84 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 86 */	NdrFcLong( 0x3 ),	/* 3 */
/* 90 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 92 */	NdrFcLong( 0x11 ),	/* 17 */
/* 96 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 98 */	NdrFcLong( 0x2 ),	/* 2 */
/* 102 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 104 */	NdrFcLong( 0x4 ),	/* 4 */
/* 108 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 110 */	NdrFcLong( 0x5 ),	/* 5 */
/* 114 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 116 */	NdrFcLong( 0xb ),	/* 11 */
/* 120 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 122 */	NdrFcLong( 0xa ),	/* 10 */
/* 126 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 128 */	NdrFcLong( 0x6 ),	/* 6 */
/* 132 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (364) */
/* 134 */	NdrFcLong( 0x7 ),	/* 7 */
/* 138 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 140 */	NdrFcLong( 0x8 ),	/* 8 */
/* 144 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (6) */
/* 146 */	NdrFcLong( 0xd ),	/* 13 */
/* 150 */	NdrFcShort( 0xdc ),	/* Offset= 220 (370) */
/* 152 */	NdrFcLong( 0x9 ),	/* 9 */
/* 156 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (388) */
/* 158 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 162 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (406) */
/* 164 */	NdrFcLong( 0x24 ),	/* 36 */
/* 168 */	NdrFcShort( 0x39e ),	/* Offset= 926 (1094) */
/* 170 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 174 */	NdrFcShort( 0x398 ),	/* Offset= 920 (1094) */
/* 176 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 180 */	NdrFcShort( 0x396 ),	/* Offset= 918 (1098) */
/* 182 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 186 */	NdrFcShort( 0x394 ),	/* Offset= 916 (1102) */
/* 188 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 192 */	NdrFcShort( 0x392 ),	/* Offset= 914 (1106) */
/* 194 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 198 */	NdrFcShort( 0x390 ),	/* Offset= 912 (1110) */
/* 200 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 204 */	NdrFcShort( 0x38e ),	/* Offset= 910 (1114) */
/* 206 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 210 */	NdrFcShort( 0x38c ),	/* Offset= 908 (1118) */
/* 212 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 216 */	NdrFcShort( 0x376 ),	/* Offset= 886 (1102) */
/* 218 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 222 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1106) */
/* 224 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 228 */	NdrFcShort( 0x37e ),	/* Offset= 894 (1122) */
/* 230 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 234 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1118) */
/* 236 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 240 */	NdrFcShort( 0x376 ),	/* Offset= 886 (1126) */
/* 242 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 246 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1130) */
/* 248 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 252 */	NdrFcShort( 0x372 ),	/* Offset= 882 (1134) */
/* 254 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 258 */	NdrFcShort( 0x370 ),	/* Offset= 880 (1138) */
/* 260 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 264 */	NdrFcShort( 0x36e ),	/* Offset= 878 (1142) */
/* 266 */	NdrFcLong( 0x10 ),	/* 16 */
/* 270 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 272 */	NdrFcLong( 0x12 ),	/* 18 */
/* 276 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 278 */	NdrFcLong( 0x13 ),	/* 19 */
/* 282 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 284 */	NdrFcLong( 0x15 ),	/* 21 */
/* 288 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 290 */	NdrFcLong( 0x16 ),	/* 22 */
/* 294 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 296 */	NdrFcLong( 0x17 ),	/* 23 */
/* 300 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 302 */	NdrFcLong( 0xe ),	/* 14 */
/* 306 */	NdrFcShort( 0x34c ),	/* Offset= 844 (1150) */
/* 308 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 312 */	NdrFcShort( 0x350 ),	/* Offset= 848 (1160) */
/* 314 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 318 */	NdrFcShort( 0x34e ),	/* Offset= 846 (1164) */
/* 320 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 324 */	NdrFcShort( 0x30a ),	/* Offset= 778 (1102) */
/* 326 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 330 */	NdrFcShort( 0x308 ),	/* Offset= 776 (1106) */
/* 332 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 336 */	NdrFcShort( 0x306 ),	/* Offset= 774 (1110) */
/* 338 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 342 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (1106) */
/* 344 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 348 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (1106) */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* Offset= 0 (354) */
/* 356 */	NdrFcLong( 0x1 ),	/* 1 */
/* 360 */	NdrFcShort( 0x0 ),	/* Offset= 0 (360) */
/* 362 */	NdrFcShort( 0xffff ),	/* Offset= -1 (361) */
/* 364 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 370 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 382 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 384 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 386 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 388 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 390 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 400 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 402 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 404 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 406 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 408 */	NdrFcShort( 0x2 ),	/* Offset= 2 (410) */
/* 410 */	
			0x12, 0x0,	/* FC_UP */
/* 412 */	NdrFcShort( 0x298 ),	/* Offset= 664 (1076) */
/* 414 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 416 */	NdrFcShort( 0x18 ),	/* 24 */
/* 418 */	NdrFcShort( 0xa ),	/* 10 */
/* 420 */	NdrFcLong( 0x8 ),	/* 8 */
/* 424 */	NdrFcShort( 0x64 ),	/* Offset= 100 (524) */
/* 426 */	NdrFcLong( 0xd ),	/* 13 */
/* 430 */	NdrFcShort( 0x9c ),	/* Offset= 156 (586) */
/* 432 */	NdrFcLong( 0x9 ),	/* 9 */
/* 436 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (644) */
/* 438 */	NdrFcLong( 0xc ),	/* 12 */
/* 442 */	NdrFcShort( 0x104 ),	/* Offset= 260 (702) */
/* 444 */	NdrFcLong( 0x24 ),	/* 36 */
/* 448 */	NdrFcShort( 0x174 ),	/* Offset= 372 (820) */
/* 450 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 454 */	NdrFcShort( 0x190 ),	/* Offset= 400 (854) */
/* 456 */	NdrFcLong( 0x10 ),	/* 16 */
/* 460 */	NdrFcShort( 0x1b4 ),	/* Offset= 436 (896) */
/* 462 */	NdrFcLong( 0x2 ),	/* 2 */
/* 466 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (938) */
/* 468 */	NdrFcLong( 0x3 ),	/* 3 */
/* 472 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (980) */
/* 474 */	NdrFcLong( 0x14 ),	/* 20 */
/* 478 */	NdrFcShort( 0x220 ),	/* Offset= 544 (1022) */
/* 480 */	NdrFcShort( 0xffff ),	/* Offset= -1 (479) */
/* 482 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 484 */	NdrFcShort( 0x4 ),	/* 4 */
/* 486 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 492 */	0x0 , 
			0x0,		/* 0 */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 502 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 504 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 506 */	NdrFcShort( 0x4 ),	/* 4 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	0x12, 0x0,	/* FC_UP */
/* 518 */	NdrFcShort( 0xfe1a ),	/* Offset= -486 (32) */
/* 520 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 522 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 524 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 528 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 530 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 532 */	NdrFcShort( 0x4 ),	/* 4 */
/* 534 */	NdrFcShort( 0x4 ),	/* 4 */
/* 536 */	0x11, 0x0,	/* FC_RP */
/* 538 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (482) */
/* 540 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 542 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 544 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 554 */	0x0 , 
			0x0,		/* 0 */
/* 556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 568 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 570 */	0x0 , 
			0x0,		/* 0 */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 580 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 582 */	NdrFcShort( 0xff2c ),	/* Offset= -212 (370) */
/* 584 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 586 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x6 ),	/* Offset= 6 (598) */
/* 594 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 596 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 598 */	
			0x11, 0x0,	/* FC_RP */
/* 600 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (544) */
/* 602 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 612 */	0x0 , 
			0x0,		/* 0 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 622 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 626 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 628 */	0x0 , 
			0x0,		/* 0 */
/* 630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 638 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 640 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (388) */
/* 642 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 644 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x6 ),	/* Offset= 6 (656) */
/* 652 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 654 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 656 */	
			0x11, 0x0,	/* FC_RP */
/* 658 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (602) */
/* 660 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 662 */	NdrFcShort( 0x4 ),	/* 4 */
/* 664 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 670 */	0x0 , 
			0x0,		/* 0 */
/* 672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 680 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 682 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 684 */	NdrFcShort( 0x4 ),	/* 4 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x1 ),	/* 1 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	0x12, 0x0,	/* FC_UP */
/* 696 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (1168) */
/* 698 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 700 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 702 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x6 ),	/* Offset= 6 (714) */
/* 710 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 712 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 714 */	
			0x11, 0x0,	/* FC_RP */
/* 716 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (660) */
/* 718 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 720 */	NdrFcLong( 0x2f ),	/* 47 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 730 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 732 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 734 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 736 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 740 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 742 */	NdrFcShort( 0x4 ),	/* 4 */
/* 744 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 746 */	0x0 , 
			0x0,		/* 0 */
/* 748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 758 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 760 */	NdrFcShort( 0x10 ),	/* 16 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0xa ),	/* Offset= 10 (774) */
/* 766 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 768 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 770 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (718) */
/* 772 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 774 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 776 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (736) */
/* 778 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 780 */	NdrFcShort( 0x4 ),	/* 4 */
/* 782 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 788 */	0x0 , 
			0x0,		/* 0 */
/* 790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 800 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 802 */	NdrFcShort( 0x4 ),	/* 4 */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	0x12, 0x0,	/* FC_UP */
/* 814 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (758) */
/* 816 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 818 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 820 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x6 ),	/* Offset= 6 (832) */
/* 828 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 830 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 832 */	
			0x11, 0x0,	/* FC_RP */
/* 834 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (778) */
/* 836 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 840 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 842 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 844 */	NdrFcShort( 0x10 ),	/* 16 */
/* 846 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 848 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 850 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (836) */
			0x5b,		/* FC_END */
/* 854 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 856 */	NdrFcShort( 0x18 ),	/* 24 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0xa ),	/* Offset= 10 (870) */
/* 862 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 864 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 866 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (842) */
/* 868 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 870 */	
			0x11, 0x0,	/* FC_RP */
/* 872 */	NdrFcShort( 0xfeb8 ),	/* Offset= -328 (544) */
/* 874 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 876 */	NdrFcShort( 0x1 ),	/* 1 */
/* 878 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 884 */	0x0 , 
			0x0,		/* 0 */
/* 886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 896 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 902 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 904 */	NdrFcShort( 0x4 ),	/* 4 */
/* 906 */	NdrFcShort( 0x4 ),	/* 4 */
/* 908 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 910 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (874) */
/* 912 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 914 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 916 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 918 */	NdrFcShort( 0x2 ),	/* 2 */
/* 920 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 926 */	0x0 , 
			0x0,		/* 0 */
/* 928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 936 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 938 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 940 */	NdrFcShort( 0x8 ),	/* 8 */
/* 942 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 944 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 946 */	NdrFcShort( 0x4 ),	/* 4 */
/* 948 */	NdrFcShort( 0x4 ),	/* 4 */
/* 950 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 952 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (916) */
/* 954 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 956 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 958 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 960 */	NdrFcShort( 0x4 ),	/* 4 */
/* 962 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 968 */	0x0 , 
			0x0,		/* 0 */
/* 970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 978 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 980 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 984 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 986 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 988 */	NdrFcShort( 0x4 ),	/* 4 */
/* 990 */	NdrFcShort( 0x4 ),	/* 4 */
/* 992 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 994 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (958) */
/* 996 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 998 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1000 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1004 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1010 */	0x0 , 
			0x0,		/* 0 */
/* 1012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1020 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1022 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1026 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1028 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1030 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1032 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1034 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1036 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1000) */
/* 1038 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1040 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1042 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1048 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1050 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1054 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1056 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1058 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1060 */	0x0 , 
			0x0,		/* 0 */
/* 1062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1070 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1072 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1042) */
/* 1074 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1076 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1078 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1080 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1050) */
/* 1082 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1082) */
/* 1084 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1086 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1088 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1090 */	NdrFcShort( 0xfd5c ),	/* Offset= -676 (414) */
/* 1092 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1094 */	
			0x12, 0x0,	/* FC_UP */
/* 1096 */	NdrFcShort( 0xfeae ),	/* Offset= -338 (758) */
/* 1098 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1100 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1102 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1104 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1106 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1108 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1110 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1112 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1114 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1116 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1118 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1120 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1122 */	
			0x12, 0x0,	/* FC_UP */
/* 1124 */	NdrFcShort( 0xfd08 ),	/* Offset= -760 (364) */
/* 1126 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1128 */	NdrFcShort( 0xfb9e ),	/* Offset= -1122 (6) */
/* 1130 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1132 */	NdrFcShort( 0xfd06 ),	/* Offset= -762 (370) */
/* 1134 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1136 */	NdrFcShort( 0xfd14 ),	/* Offset= -748 (388) */
/* 1138 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1140 */	NdrFcShort( 0xfd22 ),	/* Offset= -734 (406) */
/* 1142 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1144 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1146) */
/* 1146 */	
			0x12, 0x0,	/* FC_UP */
/* 1148 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1168) */
/* 1150 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1152 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1154 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1156 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1158 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1160 */	
			0x12, 0x0,	/* FC_UP */
/* 1162 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1150) */
/* 1164 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1166 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1168 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1170 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1174 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1174) */
/* 1176 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1178 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1180 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1182 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1184 */	NdrFcShort( 0xfb98 ),	/* Offset= -1128 (56) */
/* 1186 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1188 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1190 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1192 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0xfb88 ),	/* Offset= -1144 (52) */

			0x0
        }
    };

XFG_TRAMPOLINES(BSTR)
XFG_TRAMPOLINES(VARIANT)

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserFree)
            
            }
            ,
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserFree)
            
            }
            

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMyMathComponent, ver. 0.0,
   GUID={0xf6ca04e1,0xaec6,0x4d29,{0xbe,0x00,0xe5,0x28,0xf7,0x3f,0x3f,0x8c}} */

#pragma code_seg(".orpc")
static const unsigned short IMyMathComponent_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IMyMathComponent_ProxyInfo =
    {
    &Object_StubDesc,
    SampleAtlProj__MIDL_ProcFormatString.Format,
    &IMyMathComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMyMathComponent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SampleAtlProj__MIDL_ProcFormatString.Format,
    &IMyMathComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IMyMathComponentProxyVtbl = 
{
    &IMyMathComponent_ProxyInfo,
    &IID_IMyMathComponent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IMyMathComponent::AddFunc */
};

const CInterfaceStubVtbl _IMyMathComponentStubVtbl =
{
    &IID_IMyMathComponent,
    &IMyMathComponent_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAutomationObject, ver. 0.0,
   GUID={0xbd458f21,0xd304,0x4eb1,{0xa0,0xc4,0xfc,0xc9,0xd6,0x76,0x5d,0x40}} */

#pragma code_seg(".orpc")
static const unsigned short IAutomationObject_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    48
    };

static const MIDL_STUBLESS_PROXY_INFO IAutomationObject_ProxyInfo =
    {
    &Object_StubDesc,
    SampleAtlProj__MIDL_ProcFormatString.Format,
    &IAutomationObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAutomationObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SampleAtlProj__MIDL_ProcFormatString.Format,
    &IAutomationObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IAutomationObjectProxyVtbl = 
{
    &IAutomationObject_ProxyInfo,
    &IID_IAutomationObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAutomationObject::DisplayMessage */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAutomationObject_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IAutomationObjectStubVtbl =
{
    &IID_IAutomationObject,
    &IAutomationObject_ServerInfo,
    8,
    &IAutomationObject_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ILateBindingObject, ver. 0.0,
   GUID={0xfbf36eb2,0xe39e,0x4a9f,{0x9e,0x43,0x42,0x87,0x03,0x25,0x96,0x31}} */

#pragma code_seg(".orpc")
static const unsigned short ILateBindingObject_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    84
    };

static const MIDL_STUBLESS_PROXY_INFO ILateBindingObject_ProxyInfo =
    {
    &Object_StubDesc,
    SampleAtlProj__MIDL_ProcFormatString.Format,
    &ILateBindingObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ILateBindingObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SampleAtlProj__MIDL_ProcFormatString.Format,
    &ILateBindingObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _ILateBindingObjectProxyVtbl = 
{
    &ILateBindingObject_ProxyInfo,
    &IID_ILateBindingObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ILateBindingObject::SquareOfNumber */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION ILateBindingObject_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _ILateBindingObjectStubVtbl =
{
    &IID_ILateBindingObject,
    &ILateBindingObject_ServerInfo,
    8,
    &ILateBindingObject_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ISafeArrayComponent, ver. 0.0,
   GUID={0xc5b1ee1f,0x5782,0x42e8,{0xb5,0x04,0x12,0x12,0x02,0x54,0xfb,0xdd}} */

#pragma code_seg(".orpc")
static const unsigned short ISafeArrayComponent_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    126
    };

static const MIDL_STUBLESS_PROXY_INFO ISafeArrayComponent_ProxyInfo =
    {
    &Object_StubDesc,
    SampleAtlProj__MIDL_ProcFormatString.Format,
    &ISafeArrayComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISafeArrayComponent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SampleAtlProj__MIDL_ProcFormatString.Format,
    &ISafeArrayComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _ISafeArrayComponentProxyVtbl = 
{
    &ISafeArrayComponent_ProxyInfo,
    &IID_ISafeArrayComponent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ISafeArrayComponent::AddNumbers */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION ISafeArrayComponent_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _ISafeArrayComponentStubVtbl =
{
    &IID_ISafeArrayComponent,
    &ISafeArrayComponent_ServerInfo,
    8,
    &ISafeArrayComponent_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    SampleAtlProj__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _SampleAtlProj_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ISafeArrayComponentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAutomationObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ILateBindingObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMyMathComponentProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _SampleAtlProj_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ISafeArrayComponentStubVtbl,
    ( CInterfaceStubVtbl *) &_IAutomationObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_ILateBindingObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IMyMathComponentStubVtbl,
    0
};

PCInterfaceName const _SampleAtlProj_InterfaceNamesList[] = 
{
    "ISafeArrayComponent",
    "IAutomationObject",
    "ILateBindingObject",
    "IMyMathComponent",
    0
};

const IID *  const _SampleAtlProj_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0,
    0
};


#define _SampleAtlProj_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _SampleAtlProj, pIID, n)

int __stdcall _SampleAtlProj_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _SampleAtlProj, 4, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _SampleAtlProj, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _SampleAtlProj, 4, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo SampleAtlProj_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _SampleAtlProj_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _SampleAtlProj_StubVtblList,
    (const PCInterfaceName * ) & _SampleAtlProj_InterfaceNamesList,
    (const IID ** ) & _SampleAtlProj_BaseIIDList,
    & _SampleAtlProj_IID_Lookup, 
    4,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

