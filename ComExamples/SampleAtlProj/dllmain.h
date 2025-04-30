// dllmain.h : Declaration of module class.

class CSampleAtlProjModule : public ATL::CAtlDllModuleT< CSampleAtlProjModule >
{
public :
	DECLARE_LIBID(LIBID_SampleAtlProjLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SAMPLEATLPROJ, "{a789f004-6c0d-4a1f-aecc-d5400e78ab9a}")
};

extern class CSampleAtlProjModule _AtlModule;
