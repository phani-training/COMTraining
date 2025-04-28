#pragma once
#include<objbase.h>
interface IMyUnknown{
public:
	virtual HRESULT QueryInterface(int id, void** pvObj) = 0;
	virtual ULONG AddRef() = 0;
	virtual ULONG Release() = 0;
};

interface IMathComponent :IMyUnknown  {
public:
	virtual void AddFunc(int iVal1, int iVal2, int* iRes) = 0;
};

interface IMathComponent2 : IMyUnknown{
	public:
	virtual void SubFunc(int iVal1, int iVal2, int* iRes) = 0;
};


class MathComponent : public IMathComponent, public IMathComponent2 {
private:
	ULONG m_lRefCount;
public:
	MathComponent() : m_lRefCount(0) {}

	void AddFunc(int iVal1, int iVal2, int* iRes) {
		*iRes = iVal1 + iVal2;
   }

	void SubFunc(int iVal1, int iVal2, int* iRes) {
		*iRes = iVal1 - iVal2;
	}
	virtual HRESULT QueryInterface(int id, void** pvObj) {
		if (id == 111) {
			*pvObj = static_cast<IMathComponent*>(this);
		}
		else if (id == 123) {
			*pvObj = static_cast<IMathComponent*>(this);
		}
		else if (id == 321) {
			*pvObj = static_cast<IMathComponent2*>(this);
		}
		else {
			return E_NOINTERFACE;
		}
		((IMyUnknown*)*pvObj)->AddRef();
		return S_OK;
	}
	virtual ULONG AddRef() {
		return InterlockedIncrement(&m_lRefCount);
	}
	virtual ULONG Release() {
		ULONG val = InterlockedDecrement(&m_lRefCount);
		if (val == 0) {
			delete this;
		}
		return val;
	}
};

class MathFactory {
public:
	HRESULT CreateInstance(int Id, void** ptrInstance) {
		MathComponent* ptr = new MathComponent();
		return ptr->QueryInterface(Id, ptrInstance);
	}
};




