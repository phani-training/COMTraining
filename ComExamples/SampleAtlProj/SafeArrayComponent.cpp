// SafeArrayComponent.cpp : Implementation of CSafeArrayComponent

#include "pch.h"
#include "SafeArrayComponent.h"


// CSafeArrayComponent


STDMETHODIMP CSafeArrayComponent::AddNumbers(VARIANT theArray, LONG* lSum)
{
    //Safe Array is a data structure used to create and define Arrays in Automation COM. Array is a reference type in Automation languages like VB, VBA, VBScript and even VC++. So it very similar to .NET's Array concept. 
    //Check if the data type is array and is of the type int array. 
    SAFEARRAY* pSa;
    if ((theArray.vt & VT_I4) && (theArray.vt & VT_ARRAY)) {
        pSa = theArray.parray;//field that holds the data of the array.
        long lBound, uBound;
        SafeArrayGetLBound(pSa, 1, &lBound);
        SafeArrayGetUBound(pSa, 1, &uBound); //Get the lower index and max index of the array. 

        LONG result = 0;
        long itemVal = 0;
        for (long i = lBound; i <= uBound; i++) {
            SafeArrayGetElement(pSa, &i, &itemVal); //Get the value from the specific index
            result += itemVal;//add the value to the result. 
        }
        *lSum = result;//assign the complete addedvalue to the lSum which shall be the return value for the function. 
    }
    else {
        return E_INVALIDARG;//The arg is not matching our requirement. 
    }
    return S_OK;
}
//IConnectionPoint and IConnectionPointContainer. 