// dllmain.cpp : Defines the entry point for the DLL application.
#include "MathComponent.h"
//UR COM Library expects UR DLL to implement 4 Dll Functions: 
/*
* DllGetClassObject
* DllRegisterServer
* DllUnregisterServer
* DllCanUnloadNow
*/
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        MsgBox(L"Dll loaded into the Client process");
        break;
    case DLL_PROCESS_DETACH:
        MsgBox(L"Dll Unloaded from the Client process");
        break;
    }
    return TRUE;
}

STDAPI DllGetClassObject(REFCLSID rclsId, REFIID riid, LPVOID* ppv) {
    //is to instantiate the Classfactory and call its Query interface to get the IClassInterface and COM Library shall use that interface object to instantiate the Com object. 
    if (rclsId != CLSID_MathComponent) {
        return CLASS_E_CLASSNOTAVAILABLE;
    }
    CFactory* pFactory = new CFactory();
    return pFactory->QueryInterface(riid, ppv);//riid will be IClassFactory. 
}

//Will go ahead with Manual Registeration, as usually COM registration is done thro ATL......
STDAPI DllRegisterServer() {
    return S_OK;
}
STDAPI DllUnregisterServer() {
    return S_OK;
}

STDAPI DllCanUnloadNow() {
    return S_OK;
}
