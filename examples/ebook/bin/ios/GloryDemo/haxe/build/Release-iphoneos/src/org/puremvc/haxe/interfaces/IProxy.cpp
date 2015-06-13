#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC0(IProxy_obj,onRemove,)

HX_DEFINE_DYNAMIC_FUNC0(IProxy_obj,onRegister,)

HX_DEFINE_DYNAMIC_FUNC0(IProxy_obj,getData,return )

HX_DEFINE_DYNAMIC_FUNC1(IProxy_obj,setData,)

HX_DEFINE_DYNAMIC_FUNC0(IProxy_obj,getProxyName,return )


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IProxy_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IProxy_obj::__mClass,"__mClass");
};

Class IProxy_obj::__mClass;

void IProxy_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.interfaces.IProxy"), hx::TCanCast< IProxy_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IProxy_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces
