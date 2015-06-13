#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_controller_GotoIntroCommand
#include <ca/confidant/glory/controller/GotoIntroCommand.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

Void GotoIntroCommand_obj::__construct()
{
HX_STACK_PUSH("GotoIntroCommand::new","ca/confidant/glory/controller/GotoIntroCommand.hx",20);
{
	HX_STACK_LINE(20)
	super::__construct();
}
;
	return null();
}

GotoIntroCommand_obj::~GotoIntroCommand_obj() { }

Dynamic GotoIntroCommand_obj::__CreateEmpty() { return  new GotoIntroCommand_obj; }
hx::ObjectPtr< GotoIntroCommand_obj > GotoIntroCommand_obj::__new()
{  hx::ObjectPtr< GotoIntroCommand_obj > result = new GotoIntroCommand_obj();
	result->__construct();
	return result;}

Dynamic GotoIntroCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GotoIntroCommand_obj > result = new GotoIntroCommand_obj();
	result->__construct();
	return result;}

Void GotoIntroCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("GotoIntroCommand::execute","ca/confidant/glory/controller/GotoIntroCommand.hx",24);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(25)
		::haxe::Log_obj::trace(HX_CSTRING("GotoIntroCommand"),hx::SourceInfo(HX_CSTRING("GotoIntroCommand.hx"),25,HX_CSTRING("ca.confidant.glory.controller.GotoIntroCommand"),HX_CSTRING("execute")));
		HX_STACK_LINE(26)
		this->sendNotification(HX_CSTRING("buildControls"),null(),null());
		HX_STACK_LINE(27)
		this->sendNotification(HX_CSTRING("buildPage"),HX_CSTRING("title"),null());
	}
return null();
}



GotoIntroCommand_obj::GotoIntroCommand_obj()
{
}

void GotoIntroCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GotoIntroCommand);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GotoIntroCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GotoIntroCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GotoIntroCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GotoIntroCommand_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GotoIntroCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GotoIntroCommand_obj::__mClass,"__mClass");
};

Class GotoIntroCommand_obj::__mClass;

void GotoIntroCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.GotoIntroCommand"), hx::TCanCast< GotoIntroCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GotoIntroCommand_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
