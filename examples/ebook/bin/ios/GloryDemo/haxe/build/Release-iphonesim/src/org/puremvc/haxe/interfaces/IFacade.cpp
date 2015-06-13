#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_ICommand
#include <org/puremvc/haxe/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IFacade
#include <org/puremvc/haxe/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IMediator
#include <org/puremvc/haxe/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,notifyObservers,)

HX_DEFINE_DYNAMIC_FUNC3(IFacade_obj,sendNotification,)

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,hasMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,removeMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,retrieveMediator,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,registerMediator,)

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,hasCommand,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,removeCommand,)

HX_DEFINE_DYNAMIC_FUNC2(IFacade_obj,registerCommand,)

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,hasProxy,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,removeProxy,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,retrieveProxy,return )

HX_DEFINE_DYNAMIC_FUNC1(IFacade_obj,registerProxy,)


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFacade_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFacade_obj::__mClass,"__mClass");
};

Class IFacade_obj::__mClass;

void IFacade_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.interfaces.IFacade"), hx::TCanCast< IFacade_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IFacade_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces
