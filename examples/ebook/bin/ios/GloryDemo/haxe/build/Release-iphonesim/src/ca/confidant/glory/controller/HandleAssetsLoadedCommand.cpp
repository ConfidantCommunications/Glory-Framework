#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_controller_HandleAssetsLoadedCommand
#include <ca/confidant/glory/controller/HandleAssetsLoadedCommand.h>
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

Void HandleAssetsLoadedCommand_obj::__construct()
{
HX_STACK_PUSH("HandleAssetsLoadedCommand::new","ca/confidant/glory/controller/HandleAssetsLoadedCommand.hx",24);
{
	HX_STACK_LINE(24)
	super::__construct();
}
;
	return null();
}

HandleAssetsLoadedCommand_obj::~HandleAssetsLoadedCommand_obj() { }

Dynamic HandleAssetsLoadedCommand_obj::__CreateEmpty() { return  new HandleAssetsLoadedCommand_obj; }
hx::ObjectPtr< HandleAssetsLoadedCommand_obj > HandleAssetsLoadedCommand_obj::__new()
{  hx::ObjectPtr< HandleAssetsLoadedCommand_obj > result = new HandleAssetsLoadedCommand_obj();
	result->__construct();
	return result;}

Dynamic HandleAssetsLoadedCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HandleAssetsLoadedCommand_obj > result = new HandleAssetsLoadedCommand_obj();
	result->__construct();
	return result;}

Void HandleAssetsLoadedCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("HandleAssetsLoadedCommand::execute","ca/confidant/glory/controller/HandleAssetsLoadedCommand.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(30)
		::haxe::Log_obj::trace(HX_CSTRING("HandleAssetsLoadedCommand"),hx::SourceInfo(HX_CSTRING("HandleAssetsLoadedCommand.hx"),30,HX_CSTRING("ca.confidant.glory.controller.HandleAssetsLoadedCommand"),HX_CSTRING("execute")));
		HX_STACK_LINE(31)
		::ca::confidant::glory::model::LoaderProxy lp = hx::TCast< ca::confidant::glory::model::LoaderProxy >::cast(this->facade->retrieveProxy(::ca::confidant::glory::model::LoaderProxy_obj::NAME));		HX_STACK_VAR(lp,"lp");
		HX_STACK_LINE(33)
		::String assetID = hx::TCast< String >::cast(note->getBody());		HX_STACK_VAR(assetID,"assetID");
		HX_STACK_LINE(35)
		if (((assetID == HX_CSTRING("xml")))){
			HX_STACK_LINE(36)
			::ca::confidant::glory::model::PagesConfigProxy pcp = hx::TCast< ca::confidant::glory::model::PagesConfigProxy >::cast(this->facade->retrieveProxy(HX_CSTRING("pagesConfigProxy")));		HX_STACK_VAR(pcp,"pcp");
			HX_STACK_LINE(37)
			pcp->loadXML(lp->retrieveLoadedAsset(assetID));
		}
	}
return null();
}



HandleAssetsLoadedCommand_obj::HandleAssetsLoadedCommand_obj()
{
}

void HandleAssetsLoadedCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HandleAssetsLoadedCommand);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HandleAssetsLoadedCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic HandleAssetsLoadedCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HandleAssetsLoadedCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HandleAssetsLoadedCommand_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HandleAssetsLoadedCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HandleAssetsLoadedCommand_obj::__mClass,"__mClass");
};

Class HandleAssetsLoadedCommand_obj::__mClass;

void HandleAssetsLoadedCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.HandleAssetsLoadedCommand"), hx::TCanCast< HandleAssetsLoadedCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HandleAssetsLoadedCommand_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
