#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_ICommand
#include <org/puremvc/haxe/interfaces/ICommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_command_MacroCommand
#include <org/puremvc/haxe/patterns/command/MacroCommand.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace command{

Void MacroCommand_obj::__construct()
{
HX_STACK_PUSH("MacroCommand::new","org/puremvc/haxe/patterns/command/MacroCommand.hx",48);
{
	HX_STACK_LINE(49)
	super::__construct();
	HX_STACK_LINE(50)
	this->subCommands = ::List_obj::__new();
	HX_STACK_LINE(51)
	this->initializeMacroCommand();
}
;
	return null();
}

MacroCommand_obj::~MacroCommand_obj() { }

Dynamic MacroCommand_obj::__CreateEmpty() { return  new MacroCommand_obj; }
hx::ObjectPtr< MacroCommand_obj > MacroCommand_obj::__new()
{  hx::ObjectPtr< MacroCommand_obj > result = new MacroCommand_obj();
	result->__construct();
	return result;}

Dynamic MacroCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MacroCommand_obj > result = new MacroCommand_obj();
	result->__construct();
	return result;}

hx::Object *MacroCommand_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::interfaces::ICommand_obj)) return operator ::org::puremvc::haxe::interfaces::ICommand_obj *();
	return super::__ToInterface(inType);
}

Void MacroCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification notification){
{
		HX_STACK_PUSH("MacroCommand::execute","org/puremvc/haxe/patterns/command/MacroCommand.hx",86);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notification,"notification");
		HX_STACK_LINE(86)
		while((!(this->subCommands->isEmpty()))){
			HX_STACK_LINE(89)
			::Class commandClassRef = this->subCommands->pop();		HX_STACK_VAR(commandClassRef,"commandClassRef");
			HX_STACK_LINE(90)
			::org::puremvc::haxe::interfaces::ICommand commandInstance = ::Type_obj::createInstance(commandClassRef,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(commandInstance,"commandInstance");
			HX_STACK_LINE(91)
			commandInstance->execute(notification);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MacroCommand_obj,execute,(void))

Void MacroCommand_obj::addSubCommand( ::Class commandClassRef){
{
		HX_STACK_PUSH("MacroCommand::addSubCommand","org/puremvc/haxe/patterns/command/MacroCommand.hx",75);
		HX_STACK_THIS(this);
		HX_STACK_ARG(commandClassRef,"commandClassRef");
		HX_STACK_LINE(75)
		this->subCommands->add(commandClassRef);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MacroCommand_obj,addSubCommand,(void))

Void MacroCommand_obj::initializeMacroCommand( ){
{
		HX_STACK_PUSH("MacroCommand::initializeMacroCommand","org/puremvc/haxe/patterns/command/MacroCommand.hx",65);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MacroCommand_obj,initializeMacroCommand,(void))


MacroCommand_obj::MacroCommand_obj()
{
}

void MacroCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MacroCommand);
	HX_MARK_MEMBER_NAME(subCommands,"subCommands");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MacroCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(subCommands,"subCommands");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MacroCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subCommands") ) { return subCommands; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addSubCommand") ) { return addSubCommand_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"initializeMacroCommand") ) { return initializeMacroCommand_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MacroCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"subCommands") ) { subCommands=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MacroCommand_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("subCommands"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	HX_CSTRING("addSubCommand"),
	HX_CSTRING("initializeMacroCommand"),
	HX_CSTRING("subCommands"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MacroCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MacroCommand_obj::__mClass,"__mClass");
};

Class MacroCommand_obj::__mClass;

void MacroCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.patterns.command.MacroCommand"), hx::TCanCast< MacroCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MacroCommand_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace command
