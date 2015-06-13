#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IObserver
#include <org/puremvc/haxe/interfaces/IObserver.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC1(IObserver_obj,compareNotifyContext,return )

HX_DEFINE_DYNAMIC_FUNC1(IObserver_obj,notifyObserver,)

HX_DEFINE_DYNAMIC_FUNC1(IObserver_obj,setNotifyContext,)

HX_DEFINE_DYNAMIC_FUNC1(IObserver_obj,setNotifyMethod,)


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IObserver_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IObserver_obj::__mClass,"__mClass");
};

Class IObserver_obj::__mClass;

void IObserver_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.interfaces.IObserver"), hx::TCanCast< IObserver_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IObserver_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces
