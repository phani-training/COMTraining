// AutomationObject.cpp : Implementation of CAutomationObject

#include "pch.h"
#include "AutomationObject.h"


// CAutomationObject


STDMETHODIMP CAutomationObject::DisplayMessage(BSTR strMessage)
{
    // TODO: Add your implementation code here
    MessageBox(NULL, strMessage, L"COM Programming", MB_OK);
    return S_OK;
}
