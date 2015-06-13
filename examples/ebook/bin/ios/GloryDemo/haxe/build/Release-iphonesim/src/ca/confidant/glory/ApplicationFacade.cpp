#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_ApplicationFacade
#include <ca/confidant/glory/ApplicationFacade.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_GloryFrameworkApp
#include <ca/confidant/glory/GloryFrameworkApp.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_StartupCommand
#include <ca/confidant/glory/controller/StartupCommand.h>
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
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_command_MacroCommand
#include <org/puremvc/haxe/patterns/command/MacroCommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_facade_Facade
#include <org/puremvc/haxe/patterns/facade/Facade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
namespace ca{
namespace confidant{
namespace glory{

Void ApplicationFacade_obj::__construct()
{
HX_STACK_PUSH("ApplicationFacade::new","ca/confidant/glory/ApplicationFacade.hx",15);
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

ApplicationFacade_obj::~ApplicationFacade_obj() { }

Dynamic ApplicationFacade_obj::__CreateEmpty() { return  new ApplicationFacade_obj; }
hx::ObjectPtr< ApplicationFacade_obj > ApplicationFacade_obj::__new()
{  hx::ObjectPtr< ApplicationFacade_obj > result = new ApplicationFacade_obj();
	result->__construct();
	return result;}

Dynamic ApplicationFacade_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationFacade_obj > result = new ApplicationFacade_obj();
	result->__construct();
	return result;}

Void ApplicationFacade_obj::startup( ::ca::confidant::glory::GloryFrameworkApp app){
{
		HX_STACK_PUSH("ApplicationFacade::startup","ca/confidant/glory/ApplicationFacade.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_ARG(app,"app");
		HX_STACK_LINE(60)
		this->sendNotification(HX_CSTRING("startup"),app,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationFacade_obj,startup,(void))

Void ApplicationFacade_obj::initializeController( ){
{
		HX_STACK_PUSH("ApplicationFacade::initializeController","ca/confidant/glory/ApplicationFacade.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_LINE(54)
		this->super::initializeController();
		HX_STACK_LINE(55)
		this->registerCommand(HX_CSTRING("startup"),hx::ClassOf< ::ca::confidant::glory::controller::StartupCommand >());
	}
return null();
}


::String ApplicationFacade_obj::STARTUP;

::String ApplicationFacade_obj::MESSAGE;

::String ApplicationFacade_obj::INIT_XML_LOAD;

::String ApplicationFacade_obj::ASSETS_LOADED;

::String ApplicationFacade_obj::PAGES_CONFIG_READY;

::String ApplicationFacade_obj::CALL_EXTERNAL_FUNCTION;

::String ApplicationFacade_obj::CONSOLE_LOG;

::String ApplicationFacade_obj::STAGE_RESIZE;

::String ApplicationFacade_obj::SET_ACTIVE_WIDGET;

::String ApplicationFacade_obj::SET_CONTENT;

::String ApplicationFacade_obj::BUILD_PAGE;

::String ApplicationFacade_obj::REMOVE_PAGE;

::String ApplicationFacade_obj::BUILD_CONTROLS;

::String ApplicationFacade_obj::CHANGE_PAGE;

::String ApplicationFacade_obj::HTTP_LINK;

::String ApplicationFacade_obj::TIMER_TICK;

::String ApplicationFacade_obj::TIMER_ENABLE;

::String ApplicationFacade_obj::TIMER_DISABLE;

::String ApplicationFacade_obj::PAN_LEFT;

::String ApplicationFacade_obj::PAN_RIGHT;

::String ApplicationFacade_obj::PAN_STOP;

::String ApplicationFacade_obj::TOGGLE_OPTIONS;

::String ApplicationFacade_obj::PLAY_SOUND;

::ca::confidant::glory::ApplicationFacade ApplicationFacade_obj::instance;

::ca::confidant::glory::ApplicationFacade ApplicationFacade_obj::getInstance( ){
	HX_STACK_PUSH("ApplicationFacade::getInstance","ca/confidant/glory/ApplicationFacade.hx",45);
	HX_STACK_LINE(46)
	if (((::ca::confidant::glory::ApplicationFacade_obj::instance == null()))){
		HX_STACK_LINE(47)
		::ca::confidant::glory::ApplicationFacade_obj::instance = ::ca::confidant::glory::ApplicationFacade_obj::__new();
	}
	HX_STACK_LINE(48)
	return ::ca::confidant::glory::ApplicationFacade_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationFacade_obj,getInstance,return )


ApplicationFacade_obj::ApplicationFacade_obj()
{
}

void ApplicationFacade_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationFacade);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ApplicationFacade_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ApplicationFacade_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"STARTUP") ) { return STARTUP; }
		if (HX_FIELD_EQ(inName,"MESSAGE") ) { return MESSAGE; }
		if (HX_FIELD_EQ(inName,"startup") ) { return startup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"PAN_LEFT") ) { return PAN_LEFT; }
		if (HX_FIELD_EQ(inName,"PAN_STOP") ) { return PAN_STOP; }
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HTTP_LINK") ) { return HTTP_LINK; }
		if (HX_FIELD_EQ(inName,"PAN_RIGHT") ) { return PAN_RIGHT; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BUILD_PAGE") ) { return BUILD_PAGE; }
		if (HX_FIELD_EQ(inName,"TIMER_TICK") ) { return TIMER_TICK; }
		if (HX_FIELD_EQ(inName,"PLAY_SOUND") ) { return PLAY_SOUND; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CONSOLE_LOG") ) { return CONSOLE_LOG; }
		if (HX_FIELD_EQ(inName,"SET_CONTENT") ) { return SET_CONTENT; }
		if (HX_FIELD_EQ(inName,"REMOVE_PAGE") ) { return REMOVE_PAGE; }
		if (HX_FIELD_EQ(inName,"CHANGE_PAGE") ) { return CHANGE_PAGE; }
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STAGE_RESIZE") ) { return STAGE_RESIZE; }
		if (HX_FIELD_EQ(inName,"TIMER_ENABLE") ) { return TIMER_ENABLE; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INIT_XML_LOAD") ) { return INIT_XML_LOAD; }
		if (HX_FIELD_EQ(inName,"ASSETS_LOADED") ) { return ASSETS_LOADED; }
		if (HX_FIELD_EQ(inName,"TIMER_DISABLE") ) { return TIMER_DISABLE; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUILD_CONTROLS") ) { return BUILD_CONTROLS; }
		if (HX_FIELD_EQ(inName,"TOGGLE_OPTIONS") ) { return TOGGLE_OPTIONS; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SET_ACTIVE_WIDGET") ) { return SET_ACTIVE_WIDGET; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PAGES_CONFIG_READY") ) { return PAGES_CONFIG_READY; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"initializeController") ) { return initializeController_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"CALL_EXTERNAL_FUNCTION") ) { return CALL_EXTERNAL_FUNCTION; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationFacade_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"STARTUP") ) { STARTUP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MESSAGE") ) { MESSAGE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"PAN_LEFT") ) { PAN_LEFT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAN_STOP") ) { PAN_STOP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::ca::confidant::glory::ApplicationFacade >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HTTP_LINK") ) { HTTP_LINK=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAN_RIGHT") ) { PAN_RIGHT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BUILD_PAGE") ) { BUILD_PAGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIMER_TICK") ) { TIMER_TICK=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PLAY_SOUND") ) { PLAY_SOUND=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"CONSOLE_LOG") ) { CONSOLE_LOG=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SET_CONTENT") ) { SET_CONTENT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REMOVE_PAGE") ) { REMOVE_PAGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CHANGE_PAGE") ) { CHANGE_PAGE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STAGE_RESIZE") ) { STAGE_RESIZE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIMER_ENABLE") ) { TIMER_ENABLE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"INIT_XML_LOAD") ) { INIT_XML_LOAD=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ASSETS_LOADED") ) { ASSETS_LOADED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIMER_DISABLE") ) { TIMER_DISABLE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUILD_CONTROLS") ) { BUILD_CONTROLS=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TOGGLE_OPTIONS") ) { TOGGLE_OPTIONS=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SET_ACTIVE_WIDGET") ) { SET_ACTIVE_WIDGET=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"PAGES_CONFIG_READY") ) { PAGES_CONFIG_READY=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"CALL_EXTERNAL_FUNCTION") ) { CALL_EXTERNAL_FUNCTION=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationFacade_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STARTUP"),
	HX_CSTRING("MESSAGE"),
	HX_CSTRING("INIT_XML_LOAD"),
	HX_CSTRING("ASSETS_LOADED"),
	HX_CSTRING("PAGES_CONFIG_READY"),
	HX_CSTRING("CALL_EXTERNAL_FUNCTION"),
	HX_CSTRING("CONSOLE_LOG"),
	HX_CSTRING("STAGE_RESIZE"),
	HX_CSTRING("SET_ACTIVE_WIDGET"),
	HX_CSTRING("SET_CONTENT"),
	HX_CSTRING("BUILD_PAGE"),
	HX_CSTRING("REMOVE_PAGE"),
	HX_CSTRING("BUILD_CONTROLS"),
	HX_CSTRING("CHANGE_PAGE"),
	HX_CSTRING("HTTP_LINK"),
	HX_CSTRING("TIMER_TICK"),
	HX_CSTRING("TIMER_ENABLE"),
	HX_CSTRING("TIMER_DISABLE"),
	HX_CSTRING("PAN_LEFT"),
	HX_CSTRING("PAN_RIGHT"),
	HX_CSTRING("PAN_STOP"),
	HX_CSTRING("TOGGLE_OPTIONS"),
	HX_CSTRING("PLAY_SOUND"),
	HX_CSTRING("instance"),
	HX_CSTRING("getInstance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("startup"),
	HX_CSTRING("initializeController"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::STARTUP,"STARTUP");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::MESSAGE,"MESSAGE");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::INIT_XML_LOAD,"INIT_XML_LOAD");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::ASSETS_LOADED,"ASSETS_LOADED");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::PAGES_CONFIG_READY,"PAGES_CONFIG_READY");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::CALL_EXTERNAL_FUNCTION,"CALL_EXTERNAL_FUNCTION");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::CONSOLE_LOG,"CONSOLE_LOG");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::STAGE_RESIZE,"STAGE_RESIZE");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::SET_ACTIVE_WIDGET,"SET_ACTIVE_WIDGET");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::SET_CONTENT,"SET_CONTENT");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::BUILD_PAGE,"BUILD_PAGE");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::REMOVE_PAGE,"REMOVE_PAGE");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::BUILD_CONTROLS,"BUILD_CONTROLS");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::CHANGE_PAGE,"CHANGE_PAGE");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::HTTP_LINK,"HTTP_LINK");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::TIMER_TICK,"TIMER_TICK");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::TIMER_ENABLE,"TIMER_ENABLE");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::TIMER_DISABLE,"TIMER_DISABLE");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::PAN_LEFT,"PAN_LEFT");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::PAN_RIGHT,"PAN_RIGHT");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::PAN_STOP,"PAN_STOP");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::TOGGLE_OPTIONS,"TOGGLE_OPTIONS");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::PLAY_SOUND,"PLAY_SOUND");
	HX_MARK_MEMBER_NAME(ApplicationFacade_obj::instance,"instance");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::STARTUP,"STARTUP");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::MESSAGE,"MESSAGE");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::INIT_XML_LOAD,"INIT_XML_LOAD");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::ASSETS_LOADED,"ASSETS_LOADED");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::PAGES_CONFIG_READY,"PAGES_CONFIG_READY");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::CALL_EXTERNAL_FUNCTION,"CALL_EXTERNAL_FUNCTION");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::CONSOLE_LOG,"CONSOLE_LOG");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::STAGE_RESIZE,"STAGE_RESIZE");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::SET_ACTIVE_WIDGET,"SET_ACTIVE_WIDGET");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::SET_CONTENT,"SET_CONTENT");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::BUILD_PAGE,"BUILD_PAGE");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::REMOVE_PAGE,"REMOVE_PAGE");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::BUILD_CONTROLS,"BUILD_CONTROLS");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::CHANGE_PAGE,"CHANGE_PAGE");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::HTTP_LINK,"HTTP_LINK");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::TIMER_TICK,"TIMER_TICK");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::TIMER_ENABLE,"TIMER_ENABLE");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::TIMER_DISABLE,"TIMER_DISABLE");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::PAN_LEFT,"PAN_LEFT");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::PAN_RIGHT,"PAN_RIGHT");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::PAN_STOP,"PAN_STOP");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::TOGGLE_OPTIONS,"TOGGLE_OPTIONS");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::PLAY_SOUND,"PLAY_SOUND");
	HX_VISIT_MEMBER_NAME(ApplicationFacade_obj::instance,"instance");
};

Class ApplicationFacade_obj::__mClass;

void ApplicationFacade_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.ApplicationFacade"), hx::TCanCast< ApplicationFacade_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ApplicationFacade_obj::__boot()
{
	STARTUP= HX_CSTRING("startup");
	MESSAGE= HX_CSTRING("message");
	INIT_XML_LOAD= HX_CSTRING("initXMLLoad");
	ASSETS_LOADED= HX_CSTRING("assetsLoaded");
	PAGES_CONFIG_READY= HX_CSTRING("pagesConfigReady");
	CALL_EXTERNAL_FUNCTION= HX_CSTRING("callExternalFunction");
	CONSOLE_LOG= HX_CSTRING("consoleLog");
	STAGE_RESIZE= HX_CSTRING("stageResize");
	SET_ACTIVE_WIDGET= HX_CSTRING("setActiveWidget");
	SET_CONTENT= HX_CSTRING("setContent");
	BUILD_PAGE= HX_CSTRING("buildPage");
	REMOVE_PAGE= HX_CSTRING("removePage");
	BUILD_CONTROLS= HX_CSTRING("buildControls");
	CHANGE_PAGE= HX_CSTRING("changePage");
	HTTP_LINK= HX_CSTRING("httpLink");
	TIMER_TICK= HX_CSTRING("timerTick");
	TIMER_ENABLE= HX_CSTRING("timerEnable");
	TIMER_DISABLE= HX_CSTRING("timerDisable");
	PAN_LEFT= HX_CSTRING("panLeft");
	PAN_RIGHT= HX_CSTRING("panRight");
	PAN_STOP= HX_CSTRING("panStop");
	TOGGLE_OPTIONS= HX_CSTRING("toggleOptions");
	PLAY_SOUND= HX_CSTRING("playSound");
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
