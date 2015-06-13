#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_IModel
#include <org/puremvc/haxe/interfaces/IModel.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC1(IModel_obj,hasProxy,return )

HX_DEFINE_DYNAMIC_FUNC1(IModel_obj,removeProxy,return )

HX_DEFINE_DYNAMIC_FUNC1(IModel_obj,retrieveProxy,return )

HX_DEFINE_DYNAMIC_FUNC1(IModel_obj,registerProxy,)


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IModel_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IModel_obj::__mClass,"__mClass");
};

Class IModel_obj::__mClass;

void IModel_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.interfaces.IModel"), hx::TCanCast< IModel_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IModel_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces
