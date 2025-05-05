

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SampleAtlProj_i_h__
#define __SampleAtlProj_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IMyMathComponent_FWD_DEFINED__
#define __IMyMathComponent_FWD_DEFINED__
typedef interface IMyMathComponent IMyMathComponent;

#endif 	/* __IMyMathComponent_FWD_DEFINED__ */


#ifndef __IAutomationObject_FWD_DEFINED__
#define __IAutomationObject_FWD_DEFINED__
typedef interface IAutomationObject IAutomationObject;

#endif 	/* __IAutomationObject_FWD_DEFINED__ */


#ifndef __ILateBindingObject_FWD_DEFINED__
#define __ILateBindingObject_FWD_DEFINED__
typedef interface ILateBindingObject ILateBindingObject;

#endif 	/* __ILateBindingObject_FWD_DEFINED__ */


#ifndef __ISafeArrayComponent_FWD_DEFINED__
#define __ISafeArrayComponent_FWD_DEFINED__
typedef interface ISafeArrayComponent ISafeArrayComponent;

#endif 	/* __ISafeArrayComponent_FWD_DEFINED__ */


#ifndef __MyMathComponent_FWD_DEFINED__
#define __MyMathComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyMathComponent MyMathComponent;
#else
typedef struct MyMathComponent MyMathComponent;
#endif /* __cplusplus */

#endif 	/* __MyMathComponent_FWD_DEFINED__ */


#ifndef __AutomationObject_FWD_DEFINED__
#define __AutomationObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class AutomationObject AutomationObject;
#else
typedef struct AutomationObject AutomationObject;
#endif /* __cplusplus */

#endif 	/* __AutomationObject_FWD_DEFINED__ */


#ifndef __LateBindingObject_FWD_DEFINED__
#define __LateBindingObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class LateBindingObject LateBindingObject;
#else
typedef struct LateBindingObject LateBindingObject;
#endif /* __cplusplus */

#endif 	/* __LateBindingObject_FWD_DEFINED__ */


#ifndef __SafeArrayComponent_FWD_DEFINED__
#define __SafeArrayComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class SafeArrayComponent SafeArrayComponent;
#else
typedef struct SafeArrayComponent SafeArrayComponent;
#endif /* __cplusplus */

#endif 	/* __SafeArrayComponent_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMyMathComponent_INTERFACE_DEFINED__
#define __IMyMathComponent_INTERFACE_DEFINED__

/* interface IMyMathComponent */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMyMathComponent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f6ca04e1-aec6-4d29-be00-e528f73f3f8c")
    IMyMathComponent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddFunc( 
            /* [in] */ int iVal1,
            /* [in] */ int iVal2,
            /* [out] */ int *iAddValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMyMathComponentVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyMathComponent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyMathComponent * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyMathComponent * This);
        
        DECLSPEC_XFGVIRT(IMyMathComponent, AddFunc)
        HRESULT ( STDMETHODCALLTYPE *AddFunc )( 
            IMyMathComponent * This,
            /* [in] */ int iVal1,
            /* [in] */ int iVal2,
            /* [out] */ int *iAddValue);
        
        END_INTERFACE
    } IMyMathComponentVtbl;

    interface IMyMathComponent
    {
        CONST_VTBL struct IMyMathComponentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyMathComponent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyMathComponent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyMathComponent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyMathComponent_AddFunc(This,iVal1,iVal2,iAddValue)	\
    ( (This)->lpVtbl -> AddFunc(This,iVal1,iVal2,iAddValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyMathComponent_INTERFACE_DEFINED__ */


#ifndef __IAutomationObject_INTERFACE_DEFINED__
#define __IAutomationObject_INTERFACE_DEFINED__

/* interface IAutomationObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAutomationObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bd458f21-d304-4eb1-a0c4-fcc9d6765d40")
    IAutomationObject : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DisplayMessage( 
            /* [in] */ BSTR strMessage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAutomationObjectVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAutomationObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAutomationObject * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAutomationObject * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAutomationObject * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAutomationObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAutomationObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAutomationObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAutomationObject, DisplayMessage)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DisplayMessage )( 
            IAutomationObject * This,
            /* [in] */ BSTR strMessage);
        
        END_INTERFACE
    } IAutomationObjectVtbl;

    interface IAutomationObject
    {
        CONST_VTBL struct IAutomationObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAutomationObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAutomationObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAutomationObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAutomationObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAutomationObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAutomationObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAutomationObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAutomationObject_DisplayMessage(This,strMessage)	\
    ( (This)->lpVtbl -> DisplayMessage(This,strMessage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAutomationObject_INTERFACE_DEFINED__ */


#ifndef __ILateBindingObject_INTERFACE_DEFINED__
#define __ILateBindingObject_INTERFACE_DEFINED__

/* interface ILateBindingObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ILateBindingObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fbf36eb2-e39e-4a9f-9e43-428703259631")
    ILateBindingObject : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SquareOfNumber( 
            /* [in] */ int nVal,
            /* [out] */ int *nResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILateBindingObjectVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILateBindingObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILateBindingObject * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILateBindingObject * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILateBindingObject * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILateBindingObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILateBindingObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILateBindingObject * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ILateBindingObject, SquareOfNumber)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SquareOfNumber )( 
            ILateBindingObject * This,
            /* [in] */ int nVal,
            /* [out] */ int *nResult);
        
        END_INTERFACE
    } ILateBindingObjectVtbl;

    interface ILateBindingObject
    {
        CONST_VTBL struct ILateBindingObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILateBindingObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILateBindingObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILateBindingObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILateBindingObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILateBindingObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILateBindingObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILateBindingObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ILateBindingObject_SquareOfNumber(This,nVal,nResult)	\
    ( (This)->lpVtbl -> SquareOfNumber(This,nVal,nResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILateBindingObject_INTERFACE_DEFINED__ */


#ifndef __ISafeArrayComponent_INTERFACE_DEFINED__
#define __ISafeArrayComponent_INTERFACE_DEFINED__

/* interface ISafeArrayComponent */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISafeArrayComponent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c5b1ee1f-5782-42e8-b504-12120254fbdd")
    ISafeArrayComponent : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddNumbers( 
            /* [in] */ VARIANT theArray,
            /* [out] */ LONG *lSum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISafeArrayComponentVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISafeArrayComponent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISafeArrayComponent * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISafeArrayComponent * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISafeArrayComponent * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISafeArrayComponent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISafeArrayComponent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISafeArrayComponent * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ISafeArrayComponent, AddNumbers)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddNumbers )( 
            ISafeArrayComponent * This,
            /* [in] */ VARIANT theArray,
            /* [out] */ LONG *lSum);
        
        END_INTERFACE
    } ISafeArrayComponentVtbl;

    interface ISafeArrayComponent
    {
        CONST_VTBL struct ISafeArrayComponentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISafeArrayComponent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISafeArrayComponent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISafeArrayComponent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISafeArrayComponent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISafeArrayComponent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISafeArrayComponent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISafeArrayComponent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISafeArrayComponent_AddNumbers(This,theArray,lSum)	\
    ( (This)->lpVtbl -> AddNumbers(This,theArray,lSum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISafeArrayComponent_INTERFACE_DEFINED__ */



#ifndef __SampleAtlProjLib_LIBRARY_DEFINED__
#define __SampleAtlProjLib_LIBRARY_DEFINED__

/* library SampleAtlProjLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SampleAtlProjLib;

EXTERN_C const CLSID CLSID_MyMathComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("f19a3069-fe55-42e7-98e1-79c81abd8b00")
MyMathComponent;
#endif

EXTERN_C const CLSID CLSID_AutomationObject;

#ifdef __cplusplus

class DECLSPEC_UUID("8e6013f7-6083-4413-a570-70bdfeacbe98")
AutomationObject;
#endif

EXTERN_C const CLSID CLSID_LateBindingObject;

#ifdef __cplusplus

class DECLSPEC_UUID("8db59fc5-1a14-45fc-a7a3-520d8e31dbbc")
LateBindingObject;
#endif

EXTERN_C const CLSID CLSID_SafeArrayComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("d23c735d-3837-4722-a548-18614a58aa74")
SafeArrayComponent;
#endif
#endif /* __SampleAtlProjLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


