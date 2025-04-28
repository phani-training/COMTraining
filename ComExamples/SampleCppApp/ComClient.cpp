#include"../SampleComDll/MathComponent_h.h"
#include"../SampleComDll/MathComponent_i.c"
#include<iostream>
using namespace std;

//C++ COM Client App
void main() {
	HRESULT hr = CoInitialize(NULL);//initializing the Com library...
	//U should call all COM related APIs within these blocks...
	IAddComponent* ptr = NULL;
	hr = ::CoCreateInstance(CLSID_MathComponent, NULL, CLSCTX_INPROC_SERVER, IID_IAddComponent, (void**)&ptr);
	if (FAILED(hr)) {
		cout << "CocreateInstance has failed" << endl;
		return;
	}
	int iRes = 0;
	ptr->AddFunc(13, 12, &iRes);
	cout << "The result: " << iRes << endl;
	CoUninitialize();
}