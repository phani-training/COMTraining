#include"../SampleComDll/MathComponent_h.h"
#include"../SampleComDll/MathComponent_i.c"
#include"../SampleAtlProj/SampleAtlProj_i.h"
#include"../SampleAtlProj/SampleAtlProj_i.c"

#include<iostream>
#include<Windows.h>
#include<string>
#include "ComClient.h"
using namespace std;

/// <summary>
/// Helper function for converting HRESULT Error value to a human readable Error message
/// </summary>
/// <param name="hr">HRESULT value to verify</param>
/// <returns>String representing the Error message</returns>
std::string HResultToString(HRESULT hr) {
	char* errorMsg = nullptr;

	FormatMessageA(
		FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
		nullptr,
		hr,
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPSTR)&errorMsg,
		0,
		nullptr
	);

	std::string message = errorMsg ? errorMsg : "Unknown error";
	LocalFree(errorMsg); // Free the buffer allocated by FormatMessage
	return message;
}


void SecondExample() {
	HRESULT hr = CoInitialize(NULL);
	if (FAILED(hr)) {
		cout << "Com Support is not available" << endl;
		return;
	}
	IMyMathComponent* ptr = NULL;
	hr = CoCreateInstance(CLSID_MyMathComponent, NULL, CLSCTX_INPROC_SERVER, IID_IMyMathComponent, (void**)&ptr);
	if (FAILED(hr)) {
		cout << "CoCreateInstance has failed due to some reason" << endl;
		string strValue = ::HResultToString(hr);
		cout << strValue << endl;
	}
	int res = 0;
	hr = ptr->AddFunc(13, 12, &res);
	if (FAILED(hr)) {
		cout << "CoCreateInstance has failed due to some reason" << endl;
		string strValue = ::HResultToString(hr);
		cout << strValue << endl;
	}
	cout << "The result of this operation: " << res << endl;
	CoUninitialize();
}

void FirstExample()
{
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
//C++ COM Client App
void main() {
	//FirstExample();
	SecondExample();
}