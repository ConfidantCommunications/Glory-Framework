#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_IMediator
#include <org/puremvc/haxe/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IObserver
#include <org/puremvc/haxe/interfaces/IObserver.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IView
#include <org/puremvc/haxe/interfaces/IView.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC1(IView_obj,hasMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IView_obj,removeMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IView_obj,retrieveMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IView_obj,registerMediator,)

HX_DEFINE_DYNAMIC_FUNC1(IView_obj,notifyObservers,)

HX_DEFINE_DYNAMIC_FUNC2(IView_obj,removeObserver,)

HX_DEFINE_DYNAMIC_FUNC2(IView_obj,registerObserver,)


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IView_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IView_obj::__mClass,"__mClass");
};

Class IView_obj::__mClass;

void IView_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.interfaces.IView"), hx::TCanCast< IView_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IView_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces
