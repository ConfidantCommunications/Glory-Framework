#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_ICommand
#include <org/puremvc/haxe/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IController
#include <org/puremvc/haxe/interfaces/IController.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC1(IController_obj,hasCommand,return )

HX_DEFINE_DYNAMIC_FUNC1(IController_obj,removeCommand,)

HX_DEFINE_DYNAMIC_FUNC1(IController_obj,executeCommand,)

HX_DEFINE_DYNAMIC_FUNC2(IController_obj,registerCommand,)


static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IController_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IController_obj::__mClass,"__mClass");
};

Class IController_obj::__mClass;

void IController_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.interfaces.IController"), hx::TCanCast< IController_obj> ,0,0,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IController_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces
