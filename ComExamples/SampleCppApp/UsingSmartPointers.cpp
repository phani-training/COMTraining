#import "C:\Examples\Com Samples\ComExamples\SampleAtlProj\Debug\SampleAtlProj.tlb"
using namespace SampleAtlProjLib;
#include<iostream>
using namespace std;
//Calling COM object using Smart pointers, 
void main() {
	CoInitialize(NULL);
	IAutomationObjectPtr ptr(__uuidof(AutomationObject));//Using Smart pointers. 
	ptr->DisplayMessage(L"Sample Test from Client");
	//CoUninitialize();
	//Smart pointer will automatically delete the object, so dont call any Uninitializing methods like Release or CoUnitialize
}