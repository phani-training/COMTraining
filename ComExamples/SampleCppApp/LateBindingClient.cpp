#include<Windows.h>
#include<iostream>
#include<cstring>
using namespace std;

int main() {
	HRESULT hr = ::CoInitialize(NULL);
	//For strings, we use BSTR...
	BSTR strProgId;
	strProgId = SysAllocString(L"SampleAtlProj.LateBindingObject");//Method used to allocate memory to BSTR objects. 
	CLSID clsId;
	hr = CLSIDFromProgID(strProgId, &clsId);
	if (FAILED(hr)) {
		cout << "Failed to get the CLSID from the ProgID and U cannot invoke it thru late binding" << endl;
		return 0;
	}
	IDispatch* pDispatch = NULL;
	hr = ::CoCreateInstance(clsId, NULL, CLSCTX_INPROC_SERVER, IID_IDispatch, reinterpret_cast<void**>(&pDispatch));
	if (FAILED(hr)) {
		cout << "CoCreateInstance has failed, IDispatch might not be supported or Com object might not have been registered." << endl;
		//todo: call function to convert hr to string.
		return 0;
	}

	SysFreeString(strProgId);//Release the memory of the BSTR...
	BSTR strFunctionName;//method that we want to get the dispid and invoke
	strFunctionName = SysAllocString(L"SquareOfNumber");
	//Once the IDispatch interface is obtained, we shall get the DispId of the method that we want to invoke.
	DISPID diid;
	hr = pDispatch->GetIDsOfNames(IID_NULL, &strFunctionName, 1, LOCALE_USER_DEFAULT, &diid);
	if (FAILED(hr)) {
		cout << "No ID found for this method, method name could be wrong" << endl;
		return 0;
	}
	cout << "The dispId is " << diid << endl;
	//Create the parameters for this method. All data types in Automation objects are Variants. 
	VARIANTARG* pArgs = new VARIANTARG[2];
	for (int i = 0; i < 2; i++)
	{
		VariantInit(&pArgs[i]);//Initialize the Variant objects....
	}
	short iRes = 0;
	pArgs[0].vt = VT_I4 | VT_BYREF;
	pArgs[0].piVal = &iRes;

	pArgs[1].vt = VT_I4;
	pArgs[1].iVal = 10;

	//Parameters are sent into the function in the form of DISPPARAMS.  
	DISPPARAMS dParams;
	dParams.cArgs = 2;
	dParams.cNamedArgs = 0;
	dParams.rgvarg = pArgs;
	dParams.rgdispidNamedArgs = NULL;

	//Using the DispId, we will invoke the method using IDispatch->Invoke method. 
	hr = pDispatch->Invoke(diid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &dParams, NULL, NULL, NULL);
	if (FAILED(hr)) {
		cout << "Failed to invoke the method" << endl;
		return 0;
	}
	cout << "The Result: " << iRes << endl;
	SysFreeString(strFunctionName);
	pDispatch->Release();
	CoUninitialize();
	return 0;
}