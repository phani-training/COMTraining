// SampleCppApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"ComComponent.h"
using namespace std;
int main()
{
	/*IMathComponent* ptr = new MathComponent();
	

	IMathComponent2* ptr2 = (IMathComponent2*)ptr;
	ptr2->SubFunc(13, 12, &iRes);

	*/

	IMathComponent* ptr = NULL;
	MathFactory* factory = new MathFactory();
	HRESULT hr = factory->CreateInstance(123, (void**) &ptr);
	if (FAILED(hr)) {
		cout << "CreateInstance has failed" << endl;
		return 0;
	}
	int iRes = 0;
	ptr->AddFunc(123, 234, &iRes);
	cout << "The result: " << iRes << endl;

	IMathComponent2* ptr2 = NULL;
	//MathFactory* factory = new MathFactory();
	hr = ptr->QueryInterface(321, (void**)&ptr2);
	if (FAILED(hr)) {
		cout << "QueryInterface has failed" << endl;
		ptr->Release();
		return 0;
	}
	ptr->Release();
	iRes = 0;
	ptr2->SubFunc(123, 23, &iRes);
	cout << "The result: " << iRes << endl;
	auto val= ptr2->Release();
	if (val == 0) {
		cout << "Object released from the memory" << endl;
	}
}

