// LateBindingObject.cpp : Implementation of CLateBindingObject

#include "pch.h"
#include "LateBindingObject.h"


// CLateBindingObject


STDMETHODIMP CLateBindingObject::SquareOfNumber(int nVal, int* nResult)
{
    *nResult = nVal * nVal;
    return S_OK;
}
