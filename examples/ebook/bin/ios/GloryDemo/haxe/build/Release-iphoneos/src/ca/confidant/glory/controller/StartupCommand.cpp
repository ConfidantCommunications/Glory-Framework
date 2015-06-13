#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_controller_Startup0_RegCommands_Command
#include <ca/confidant/glory/controller/Startup0_RegCommands_Command.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_Startup1_App_Command
#include <ca/confidant/glory/controller/Startup1_App_Command.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_Startup2_Proxies_Command
#include <ca/confidant/glory/controller/Startup2_Proxies_Command.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_StartupCommand
#include <ca/confidant/glory/controller/StartupCommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_ICommand
#include <org/puremvc/haxe/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_command_MacroCommand
#include <org/puremvc/haxe/patterns/command/MacroCommand.h>
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

Void StartupCommand_obj::__construct()
{
HX_STACK_PUSH("StartupCommand::new","ca/confidant/glory/controller/StartupCommand.hx",14);
{
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

StartupCommand_obj::~StartupCommand_obj() { }

Dynamic StartupCommand_obj::__CreateEmpty() { return  new StartupCommand_obj; }
hx::ObjectPtr< StartupCommand_obj > StartupCommand_obj::__new()
{  hx::ObjectPtr< StartupCommand_obj > result = new StartupCommand_obj();
	result->__construct();
	return result;}

Dynamic StartupCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StartupCommand_obj > result = new StartupCommand_obj();
	result->__construct();
	return result;}

Void StartupCommand_obj::initializeMacroCommand( ){
{
		HX_STACK_PUSH("StartupCommand::initializeMacroCommand","ca/confidant/glory/controller/StartupCommand.hx",19);
		HX_STACK_THIS(this);
		HX_STACK_LINE(21)
		this->addSubCommand(hx::ClassOf< ::ca::confidant::glory::controller::Startup0_RegCommands_Command >());
		HX_STACK_LINE(22)
		this->addSubCommand(hx::ClassOf< ::ca::confidant::glory::controller::Startup1_App_Command >());
		HX_STACK_LINE(23)
		this->addSubCommand(hx::ClassOf< ::ca::confidant::glory::controller::Startup2_Proxies_Command >());
	}
return null();
}



StartupCommand_obj::StartupCommand_obj()
{
}

void StartupCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StartupCommand);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StartupCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic StartupCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"initializeMacroCommand") ) { return initializeMacroCommand_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StartupCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StartupCommand_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("initializeMacroCommand"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StartupCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StartupCommand_obj::__mClass,"__mClass");
};

Class StartupCommand_obj::__mClass;

void StartupCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.StartupCommand"), hx::TCanCast< StartupCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void StartupCommand_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
