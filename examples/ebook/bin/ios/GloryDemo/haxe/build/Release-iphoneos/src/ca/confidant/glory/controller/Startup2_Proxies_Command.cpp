#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_controller_Startup2_Proxies_Command
#include <ca/confidant/glory/controller/Startup2_Proxies_Command.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_ControlsRegistryProxy
#include <ca/confidant/glory/model/ControlsRegistryProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_LoaderProxy
#include <ca/confidant/glory/model/LoaderProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_PagesConfigProxy
#include <ca/confidant/glory/model/PagesConfigProxy.h>
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

Void Startup2_Proxies_Command_obj::__construct()
{
HX_STACK_PUSH("Startup2_Proxies_Command::new","ca/confidant/glory/controller/Startup2_Proxies_Command.hx",17);
{
	HX_STACK_LINE(17)
	super::__construct();
}
;
	return null();
}

Startup2_Proxies_Command_obj::~Startup2_Proxies_Command_obj() { }

Dynamic Startup2_Proxies_Command_obj::__CreateEmpty() { return  new Startup2_Proxies_Command_obj; }
hx::ObjectPtr< Startup2_Proxies_Command_obj > Startup2_Proxies_Command_obj::__new()
{  hx::ObjectPtr< Startup2_Proxies_Command_obj > result = new Startup2_Proxies_Command_obj();
	result->__construct();
	return result;}

Dynamic Startup2_Proxies_Command_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Startup2_Proxies_Command_obj > result = new Startup2_Proxies_Command_obj();
	result->__construct();
	return result;}

Void Startup2_Proxies_Command_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("Startup2_Proxies_Command::execute","ca/confidant/glory/controller/Startup2_Proxies_Command.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(23)
		::haxe::Log_obj::trace(HX_CSTRING("startup2"),hx::SourceInfo(HX_CSTRING("Startup2_Proxies_Command.hx"),23,HX_CSTRING("ca.confidant.glory.controller.Startup2_Proxies_Command"),HX_CSTRING("execute")));
		HX_STACK_LINE(24)
		this->facade->registerProxy(::ca::confidant::glory::model::PagesConfigProxy_obj::__new());
		HX_STACK_LINE(25)
		this->facade->registerProxy(::ca::confidant::glory::model::ControlsRegistryProxy_obj::__new());
		HX_STACK_LINE(27)
		::ca::confidant::glory::model::LoaderProxy lp = ::ca::confidant::glory::model::LoaderProxy_obj::__new();		HX_STACK_VAR(lp,"lp");
		HX_STACK_LINE(28)
		this->facade->registerProxy(lp);
		HX_STACK_LINE(30)
		lp->loadXML(HX_CSTRING("assets/config.xml"));
	}
return null();
}



Startup2_Proxies_Command_obj::Startup2_Proxies_Command_obj()
{
}

void Startup2_Proxies_Command_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Startup2_Proxies_Command);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Startup2_Proxies_Command_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Startup2_Proxies_Command_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Startup2_Proxies_Command_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Startup2_Proxies_Command_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Startup2_Proxies_Command_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Startup2_Proxies_Command_obj::__mClass,"__mClass");
};

Class Startup2_Proxies_Command_obj::__mClass;

void Startup2_Proxies_Command_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.Startup2_Proxies_Command"), hx::TCanCast< Startup2_Proxies_Command_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Startup2_Proxies_Command_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
