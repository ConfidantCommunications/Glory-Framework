#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_GloryFrameworkApp
#include <ca/confidant/glory/GloryFrameworkApp.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_Startup1_App_Command
#include <ca/confidant/glory/controller/Startup1_App_Command.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_ApplicationMediator
#include <ca/confidant/glory/view/ApplicationMediator.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
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
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_command_SimpleCommand
#include <org/puremvc/haxe/patterns/command/SimpleCommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_mediator_Mediator
#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
namespace ca{
namespace confidant{
namespace glory{
namespace controller{

Void Startup1_App_Command_obj::__construct()
{
HX_STACK_PUSH("Startup1_App_Command::new","ca/confidant/glory/controller/Startup1_App_Command.hx",14);
{
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

Startup1_App_Command_obj::~Startup1_App_Command_obj() { }

Dynamic Startup1_App_Command_obj::__CreateEmpty() { return  new Startup1_App_Command_obj; }
hx::ObjectPtr< Startup1_App_Command_obj > Startup1_App_Command_obj::__new()
{  hx::ObjectPtr< Startup1_App_Command_obj > result = new Startup1_App_Command_obj();
	result->__construct();
	return result;}

Dynamic Startup1_App_Command_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Startup1_App_Command_obj > result = new Startup1_App_Command_obj();
	result->__construct();
	return result;}

Void Startup1_App_Command_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("Startup1_App_Command::execute","ca/confidant/glory/controller/Startup1_App_Command.hx",18);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(19)
		::haxe::Log_obj::trace(HX_CSTRING("startup1"),hx::SourceInfo(HX_CSTRING("Startup1_App_Command.hx"),19,HX_CSTRING("ca.confidant.glory.controller.Startup1_App_Command"),HX_CSTRING("execute")));
		HX_STACK_LINE(20)
		::ca::confidant::glory::GloryFrameworkApp app = hx::TCast< ca::confidant::glory::GloryFrameworkApp >::cast(note->getBody());		HX_STACK_VAR(app,"app");
		HX_STACK_LINE(21)
		::ca::confidant::glory::view::ApplicationMediator appMediator = ::ca::confidant::glory::view::ApplicationMediator_obj::__new(app);		HX_STACK_VAR(appMediator,"appMediator");
		HX_STACK_LINE(22)
		this->facade->registerMediator(appMediator);
	}
return null();
}



Startup1_App_Command_obj::Startup1_App_Command_obj()
{
}

void Startup1_App_Command_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Startup1_App_Command);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Startup1_App_Command_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Startup1_App_Command_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Startup1_App_Command_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Startup1_App_Command_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Startup1_App_Command_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Startup1_App_Command_obj::__mClass,"__mClass");
};

Class Startup1_App_Command_obj::__mClass;

void Startup1_App_Command_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.Startup1_App_Command"), hx::TCanCast< Startup1_App_Command_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Startup1_App_Command_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
