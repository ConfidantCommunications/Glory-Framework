#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_controller_BuildControlsCommand
#include <ca/confidant/glory/controller/BuildControlsCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_BuildPageCommand
#include <ca/confidant/glory/controller/BuildPageCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_ChangePageCommand
#include <ca/confidant/glory/controller/ChangePageCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_GotoIntroCommand
#include <ca/confidant/glory/controller/GotoIntroCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_HandleAssetsLoadedCommand
#include <ca/confidant/glory/controller/HandleAssetsLoadedCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_RemovePageCommand
#include <ca/confidant/glory/controller/RemovePageCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_Startup0_RegCommands_Command
#include <ca/confidant/glory/controller/Startup0_RegCommands_Command.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_TimerDisableCommand
#include <ca/confidant/glory/controller/TimerDisableCommand.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_TimerEnableCommand
#include <ca/confidant/glory/controller/TimerEnableCommand.h>
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
#ifndef INCLUDED_org_puremvc_haxe_patterns_command_SimpleCommand
#include <org/puremvc/haxe/patterns/command/SimpleCommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
namespace ca{
namespace confidant{
namespace glory{
namespace controller{

Void Startup0_RegCommands_Command_obj::__construct()
{
HX_STACK_PUSH("Startup0_RegCommands_Command::new","ca/confidant/glory/controller/Startup0_RegCommands_Command.hx",20);
{
	HX_STACK_LINE(20)
	super::__construct();
}
;
	return null();
}

Startup0_RegCommands_Command_obj::~Startup0_RegCommands_Command_obj() { }

Dynamic Startup0_RegCommands_Command_obj::__CreateEmpty() { return  new Startup0_RegCommands_Command_obj; }
hx::ObjectPtr< Startup0_RegCommands_Command_obj > Startup0_RegCommands_Command_obj::__new()
{  hx::ObjectPtr< Startup0_RegCommands_Command_obj > result = new Startup0_RegCommands_Command_obj();
	result->__construct();
	return result;}

Dynamic Startup0_RegCommands_Command_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Startup0_RegCommands_Command_obj > result = new Startup0_RegCommands_Command_obj();
	result->__construct();
	return result;}

Void Startup0_RegCommands_Command_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("Startup0_RegCommands_Command::execute","ca/confidant/glory/controller/Startup0_RegCommands_Command.hx",24);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(25)
		::haxe::Log_obj::trace(HX_CSTRING("startup0"),hx::SourceInfo(HX_CSTRING("Startup0_RegCommands_Command.hx"),25,HX_CSTRING("ca.confidant.glory.controller.Startup0_RegCommands_Command"),HX_CSTRING("execute")));
		HX_STACK_LINE(26)
		this->facade->registerCommand(HX_CSTRING("assetsLoaded"),hx::ClassOf< ::ca::confidant::glory::controller::HandleAssetsLoadedCommand >());
		HX_STACK_LINE(27)
		this->facade->registerCommand(HX_CSTRING("pagesConfigReady"),hx::ClassOf< ::ca::confidant::glory::controller::GotoIntroCommand >());
		HX_STACK_LINE(28)
		this->facade->registerCommand(HX_CSTRING("buildControls"),hx::ClassOf< ::ca::confidant::glory::controller::BuildControlsCommand >());
		HX_STACK_LINE(29)
		this->facade->registerCommand(HX_CSTRING("buildPage"),hx::ClassOf< ::ca::confidant::glory::controller::BuildPageCommand >());
		HX_STACK_LINE(30)
		this->facade->registerCommand(HX_CSTRING("removePage"),hx::ClassOf< ::ca::confidant::glory::controller::RemovePageCommand >());
		HX_STACK_LINE(31)
		this->facade->registerCommand(HX_CSTRING("changePage"),hx::ClassOf< ::ca::confidant::glory::controller::ChangePageCommand >());
		HX_STACK_LINE(33)
		this->facade->registerCommand(HX_CSTRING("timerEnable"),hx::ClassOf< ::ca::confidant::glory::controller::TimerEnableCommand >());
		HX_STACK_LINE(34)
		this->facade->registerCommand(HX_CSTRING("timerDisable"),hx::ClassOf< ::ca::confidant::glory::controller::TimerDisableCommand >());
	}
return null();
}



Startup0_RegCommands_Command_obj::Startup0_RegCommands_Command_obj()
{
}

void Startup0_RegCommands_Command_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Startup0_RegCommands_Command);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Startup0_RegCommands_Command_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Startup0_RegCommands_Command_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Startup0_RegCommands_Command_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Startup0_RegCommands_Command_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Startup0_RegCommands_Command_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Startup0_RegCommands_Command_obj::__mClass,"__mClass");
};

Class Startup0_RegCommands_Command_obj::__mClass;

void Startup0_RegCommands_Command_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.Startup0_RegCommands_Command"), hx::TCanCast< Startup0_RegCommands_Command_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Startup0_RegCommands_Command_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
