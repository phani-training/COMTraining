// AutomationObject.h : Declaration of the CAutomationObject

#pragma once
#include "resource.h"       // main symbols



#include "SampleAtlProj_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CAutomationObject

class ATL_NO_VTABLE CAutomationObject :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAutomationObject, &CLSID_AutomationObject>,
	public IDispatchImpl<IAutomationObject, &IID_IAutomationObject, &LIBID_SampleAtlProjLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CAutomationObject()
	{
	}

DECLARE_REGISTRY_RESOURCEID(107)


BEGIN_COM_MAP(CAutomationObject)
	COM_INTERFACE_ENTRY(IAutomationObject)
	COM_INTERFACE_ENTRY(IDispatch)
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



	STDMETHOD(DisplayMessage)(BSTR strMessage);
};

OBJECT_ENTRY_AUTO(__uuidof(AutomationObject), CAutomationObject)
