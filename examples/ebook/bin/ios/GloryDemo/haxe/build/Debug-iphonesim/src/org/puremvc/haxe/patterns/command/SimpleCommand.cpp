#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_ICommand
#include <org/puremvc/haxe/interfaces/ICommand.h>
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
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace command{

Void SimpleCommand_obj::__construct()
{
HX_STACK_PUSH("SimpleCommand::new","org/puremvc/haxe/patterns/command/SimpleCommand.hx",19);
{
	HX_STACK_LINE(19)
	super::__construct();
}
;
	return null();
}

SimpleCommand_obj::~SimpleCommand_obj() { }

Dynamic SimpleCommand_obj::__CreateEmpty() { return  new SimpleCommand_obj; }
hx::ObjectPtr< SimpleCommand_obj > SimpleCommand_obj::__new()
{  hx::ObjectPtr< SimpleCommand_obj > result = new SimpleCommand_obj();
	result->__construct();
	return result;}

Dynamic SimpleCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleCommand_obj > result = new SimpleCommand_obj();
	result->__construct();
	return result;}

hx::Object *SimpleCommand_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::interfaces::ICommand_obj)) return operator ::org::puremvc::haxe::interfaces::ICommand_obj *();
	return super::__ToInterface(inType);
}

Void SimpleCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification notification){
{
		HX_STACK_PUSH("SimpleCommand::execute","org/puremvc/haxe/patterns/command/SimpleCommand.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notification,"notification");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleCommand_obj,execute,(void))


SimpleCommand_obj::SimpleCommand_obj()
{
}

void SimpleCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleCommand);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SimpleCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleCommand_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleCommand_obj::__mClass,"__mClass");
};

Class SimpleCommand_obj::__mClass;

void SimpleCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.patterns.command.SimpleCommand"), hx::TCanCast< SimpleCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SimpleCommand_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace command
