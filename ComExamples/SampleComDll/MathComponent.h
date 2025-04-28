#pragma once
#include "MathComponent_h.h"
#include "MathComponent_i.c"//These are the MIDL generated Files that contains the defns for the interfaces as well the GUIDs that U have created. 

void MsgBox(LPCWSTR strMessage) {
	MessageBox(NULL, strMessage, L"COM Programming", MB_OK);
}
//Implementor class for the interfaces. 
class MathComponent : public IAddComponent, public ISubComponent {
private:
	long m_lRefCount;

public:
	MathComponent() : m_lRefCount(0)
	{
		MsgBox(L"Com object is created here");
	}
	/////////////////////Our Interface method implementations////////////////////
	virtual HRESULT __stdcall AddFunc(int iVal1, int iVal2, int* iRes) {
		*iRes = iVal1 + iVal2;
		return S_OK;
	}

	virtual HRESULT __stdcall SubFunc(int iVal1, int iVal2, int* iRes) {
		*iRes = iVal1 - iVal2;
		return S_OK;
	}
	////////////////////////////IUnknown interface methods//////////////////////
	STDMETHOD(QueryInterface)(REFIID riid, void** ppv) {
		*ppv = NULL;
		if (riid == IID_IUnknown) {
			*ppv = static_cast<IAddComponent*>(this);
		}
		else if (riid == IID_IAddComponent) {
			*ppv = static_cast<IAddComponent*>(this);
		}
		else if (riid == IID_ISubComponent) {
			*ppv = static_cast<ISubComponent*>(this);
		}
		else {
			return E_NOINTERFACE;//The request interface is not supported by our component....
		}
		//(reinterpret_cast<IAddComponent*>(*ppv))->AddRef();
		((IAddComponent*)*ppv)->AddRef();
		return S_OK;//Success....
	}

	STDMETHOD_(ULONG, AddRef)() {
		return InterlockedIncrement(&m_lRefCount);
	}
	STDMETHOD_(ULONG, Release)() {
		ULONG ul = InterlockedDecrement(&m_lRefCount);
		if (ul == 0) {
			delete this; //if the m_lrefcount is 0, it implies that there is no need to retain the references. 
		}
		return ul;
	}
};

////////////////////////////Class Factory Implementation////////////////////
class CFactory : public IClassFactory {
private:
	long m_lRefCount;
public:
	CFactory() :m_lRefCount(0)
	{

	}
	////////////////////////////IUnknown interface methods//////////////////////
	STDMETHOD(QueryInterface)(REFIID riid, void** ppv) {
		*ppv = NULL;
		if (riid == IID_IUnknown) {
			*ppv = static_cast<IUnknown*>(this);
		}
		else if (riid == IID_IClassFactory) {
			*ppv = static_cast<IClassFactory*>(this);
		}
		else {
			return E_NOINTERFACE;//The request interface is not supported by our component....
		}
		//(reinterpret_cast<IAddComponent*>(*ppv))->AddRef();
		((IUnknown*)*ppv)->AddRef();
		return S_OK;//Success....
	}

	STDMETHOD_(ULONG, AddRef)() {
		return InterlockedIncrement(&m_lRefCount);
	}
	STDMETHOD_(ULONG, Release)() {
		ULONG ul = InterlockedDecrement(&m_lRefCount);
		if (ul == 0) {
			delete this; //if the m_lrefcount is 0, it implies that there is no need to retain the references. 
		}
		return ul;
	}
	///////////////////IClassFactory Methods/////////////////////////////////////
	STDMETHOD(CreateInstance)(IUnknown* pOuterUnknown, REFIID riid, void** ppv){
		if (pOuterUnknown != NULL) {
			return CLASS_E_NOAGGREGATION;
		}
		MathComponent* pCOM = new MathComponent();
		HRESULT hr = pCOM->QueryInterface(riid, ppv);
		if (FAILED(hr)) {
			MsgBox(L"Create instance has failed");
		}
		return hr;
	}

	STDMETHOD(LockServer)(BOOL fLock) {
		return S_OK;
	}
};