#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC0(INotification_obj,toString,return )

HX_DEFINE_DYNAMIC_FUNC0(INotification_obj,getType,return )

HX_DEFINE_DYNAMIC_FUNC1(INotification_obj,setType,)

HX_DEFINE_DYNAMIC_FUNC0(INotification_obj,getBody,return )

HX_DEFINE_DYNAMIC_FUNC1(INotification_obj,setBody,)

HX_DEFINE_DYNAMIC_FUNC0(INotification_obj,getName,return )


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(INotification_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(INotification_obj::__mClass,"__mClass");
};

Class INotification_obj::__mClass;

void INotification_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.interfaces.INotification"), hx::TCanCast< INotification_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void INotification_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces
