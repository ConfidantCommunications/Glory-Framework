#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_IMediator
#include <org/puremvc/haxe/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC0(IMediator_obj,onRemove,)

HX_DEFINE_DYNAMIC_FUNC0(IMediator_obj,onRegister,)

HX_DEFINE_DYNAMIC_FUNC1(IMediator_obj,handleNotification,)

HX_DEFINE_DYNAMIC_FUNC0(IMediator_obj,listNotificationInterests,return )

HX_DEFINE_DYNAMIC_FUNC1(IMediator_obj,setViewComponent,)

HX_DEFINE_DYNAMIC_FUNC0(IMediator_obj,getViewComponent,return )

HX_DEFINE_DYNAMIC_FUNC0(IMediator_obj,getMediatorName,return )


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IMediator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IMediator_obj::__mClass,"__mClass");
};

Class IMediator_obj::__mClass;

void IMediator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.interfaces.IMediator"), hx::TCanCast< IMediator_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IMediator_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces
