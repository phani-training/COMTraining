// MyMathComponent.h : Declaration of the CMyMathComponent

#pragma once
#include "resource.h"       // main symbols



#include "SampleAtlProj_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CMyMathComponent

class ATL_NO_VTABLE CMyMathComponent :
	public CComObjectRootEx<CComSingleThreadModel>,//IUnknown Implementation
	public CComCoClass<CMyMathComponent, &CLSID_MyMathComponent>, //ClassFactory Impl
	public IMyMathComponent
{
public:
	CMyMathComponent()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CMyMathComponent)
	COM_INTERFACE_ENTRY(IMyMathComponent)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	// implementing IMyMathComponent interface
	STDMETHOD(AddFunc)(int iVal1, int IVal2, int* iRes);
};

OBJECT_ENTRY_AUTO(__uuidof(MyMathComponent), CMyMathComponent)

// implementing IMyMathComponent interface
HRESULT CMyMathComponent::AddFunc(int iVal1, int iVal2, int* iRes)
{
	*iRes = iVal1 + iVal2;
	return S_OK;
}
