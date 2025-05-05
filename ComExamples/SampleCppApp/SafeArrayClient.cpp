#include"../SampleAtlProj/SampleAtlProj_i.h"
#include"../SampleAtlProj/SampleAtlProj_i.c"
#include<iostream>
using namespace std;

int main() {
	HRESULT hr = CoInitialize(NULL);
	ISafeArrayComponent* pCOM = NULL;

	hr = CoCreateInstance(CLSID_SafeArrayComponent, NULL, CLSCTX_INPROC_SERVER, IID_ISafeArrayComponent, (void**)&pCOM);
	if (FAILED(hr)) {
		cout << "CoCreateInstance has failed to create the SafeArrayComponent" << endl;
		return 0;
	}

	//Create the safe array.... 
	SAFEARRAY* pSa = NULL;
	SAFEARRAYBOUND bound[1];//Single Dimensional array..
	bound[0].lLbound = 0;
	bound[0].cElements = 10; //no of elements is 10...

	pSa = SafeArrayCreate(VT_I4, 1, bound);//Create the array...

	for (long i = 0; i < bound[0].cElements; i++)
	{
		SafeArrayPutElement(pSa, &i, &i);//Set the values inside the array
	}

	VARIANTARG arg;
	VariantInit(&arg);
	arg.vt = VT_ARRAY | VT_I4;//integer based array...
	arg.parray = pSa;
	long res = 0;
	hr = pCOM->AddNumbers(arg, &res);
	if (FAILED(hr)) {
		cout << "Error in the method call" << endl;
		return 0;
	}

	cout << "The result of the added numbers is " << res << endl;
	pCOM->Release();
	SafeArrayDestroy(pSa);
	CoUninitialize();
}
