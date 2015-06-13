#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_controller_TimerDisableCommand
#include <ca/confidant/glory/controller/TimerDisableCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_TickerProxy
#include <ca/confidant/glory/model/TickerProxy.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_ICommand
#include <org/puremvc/haxe/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IFacade
#include <org/puremvc/haxe/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_command_SimpleCommand
#include <org/puremvc/haxe/patterns/command/SimpleCommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_proxy_Proxy
#include <org/puremvc/haxe/patterns/proxy/Proxy.h>
#endif
namespace ca{
namespace confidant{
namespace glory{
namespace controller{

Void TimerDisableCommand_obj::__construct()
{
HX_STACK_PUSH("TimerDisableCommand::new","ca/confidant/glory/controller/TimerDisableCommand.hx",17);
{
	HX_STACK_LINE(17)
	super::__construct();
}
;
	return null();
}

TimerDisableCommand_obj::~TimerDisableCommand_obj() { }

Dynamic TimerDisableCommand_obj::__CreateEmpty() { return  new TimerDisableCommand_obj; }
hx::ObjectPtr< TimerDisableCommand_obj > TimerDisableCommand_obj::__new()
{  hx::ObjectPtr< TimerDisableCommand_obj > result = new TimerDisableCommand_obj();
	result->__construct();
	return result;}

Dynamic TimerDisableCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimerDisableCommand_obj > result = new TimerDisableCommand_obj();
	result->__construct();
	return result;}

Void TimerDisableCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("TimerDisableCommand::execute","ca/confidant/glory/controller/TimerDisableCommand.hx",21);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(22)
		::haxe::Log_obj::trace(HX_CSTRING("TimerDisableCommand"),hx::SourceInfo(HX_CSTRING("TimerDisableCommand.hx"),22,HX_CSTRING("ca.confidant.glory.controller.TimerDisableCommand"),HX_CSTRING("execute")));
		HX_STACK_LINE(23)
		if ((this->facade->hasProxy(::ca::confidant::glory::model::TickerProxy_obj::NAME))){
			HX_STACK_LINE(25)
			::ca::confidant::glory::model::TickerProxy p;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(26)
			p = hx::TCast< ca::confidant::glory::model::TickerProxy >::cast(this->facade->retrieveProxy(::ca::confidant::glory::model::TickerProxy_obj::NAME));
			HX_STACK_LINE(27)
			p->stopTimer();
		}
	}
return null();
}



TimerDisableCommand_obj::TimerDisableCommand_obj()
{
}

void TimerDisableCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimerDisableCommand);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TimerDisableCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TimerDisableCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimerDisableCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TimerDisableCommand_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerDisableCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerDisableCommand_obj::__mClass,"__mClass");
};

Class TimerDisableCommand_obj::__mClass;

void TimerDisableCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.TimerDisableCommand"), hx::TCanCast< TimerDisableCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TimerDisableCommand_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
