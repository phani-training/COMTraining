

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IMyMathComponent,0xf6ca04e1,0xaec6,0x4d29,0xbe,0x00,0xe5,0x28,0xf7,0x3f,0x3f,0x8c);


MIDL_DEFINE_GUID(IID, IID_IAutomationObject,0xbd458f21,0xd304,0x4eb1,0xa0,0xc4,0xfc,0xc9,0xd6,0x76,0x5d,0x40);


MIDL_DEFINE_GUID(IID, IID_ILateBindingObject,0xfbf36eb2,0xe39e,0x4a9f,0x9e,0x43,0x42,0x87,0x03,0x25,0x96,0x31);


MIDL_DEFINE_GUID(IID, IID_ISafeArrayComponent,0xc5b1ee1f,0x5782,0x42e8,0xb5,0x04,0x12,0x12,0x02,0x54,0xfb,0xdd);


MIDL_DEFINE_GUID(IID, LIBID_SampleAtlProjLib,0xa789f004,0x6c0d,0x4a1f,0xae,0xcc,0xd5,0x40,0x0e,0x78,0xab,0x9a);


MIDL_DEFINE_GUID(CLSID, CLSID_MyMathComponent,0xf19a3069,0xfe55,0x42e7,0x98,0xe1,0x79,0xc8,0x1a,0xbd,0x8b,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_AutomationObject,0x8e6013f7,0x6083,0x4413,0xa5,0x70,0x70,0xbd,0xfe,0xac,0xbe,0x98);


MIDL_DEFINE_GUID(CLSID, CLSID_LateBindingObject,0x8db59fc5,0x1a14,0x45fc,0xa7,0xa3,0x52,0x0d,0x8e,0x31,0xdb,0xbc);


MIDL_DEFINE_GUID(CLSID, CLSID_SafeArrayComponent,0xd23c735d,0x3837,0x4722,0xa5,0x48,0x18,0x61,0x4a,0x58,0xaa,0x74);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



