# COMTraining

## Points to remember
1. IDL files is the place where U declare your Interfaces so that it will provide language independent defns for the interfaces and also creates Tlb Files for creating COM Components using Smart pointers. 
2. COM can be created either as DLL or EXE. DLLs are called Inproc components and EXE are outproc components. 
3. Once the IDL file is created and compiled using MIDL Compiler, it shall generate certain C files which is used both on the client side as well the server side as includes. They need these files fo obtaining interface definitions and class definitions. 
4. U can create a new Cpp file where U shall implement UR interfaces into a class.





## Rules of COM Programming:
1. All Com methods should return a 32 Bit error code called HRESULT. 
2. All COM interfaces must directly or indirectly derived from IUnknown. 
3. All COM methods must be following STD Calling Conventions(Pascal Calling convention).They should decorate their methods with __stdcall. 
4. While implementing QueryInterface, the querying of any interface that UR component supports should be commutative. 
5. For every successfull queryinterface, internally it shall call Addref, so that the ref count is incremented. 
6. Class Factory class implements a COM interface called IClassFactory. This class contains 2 methods: CreateInstance and LockServer along with the IUknown methods. 

## Steps for Manual Registration
1. Open the RegEdit
2. Open HKEY_CLASSES_ROOT/Wow6432Node
3. RightClick on CLSID and create a new Key
4. Paste the CLSID of the Component into the Key with {}
5. Create a SubKey and name it InprocServer32.
6. On the right side, set the default value to the path of the DLL including the DLL file.
7. Create a new String key below default and name it ThreadingModel. Set its value as Apartment.
8. Refresh the Window. 
