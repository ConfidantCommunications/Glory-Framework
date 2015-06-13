#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_controller_DestroyPageSoundsCommand
#include <ca/confidant/glory/controller/DestroyPageSoundsCommand.h>
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
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
namespace ca{
namespace confidant{
namespace glory{
namespace controller{

Void DestroyPageSoundsCommand_obj::__construct()
{
HX_STACK_PUSH("DestroyPageSoundsCommand::new","ca/confidant/glory/controller/DestroyPageSoundsCommand.hx",14);
{
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

DestroyPageSoundsCommand_obj::~DestroyPageSoundsCommand_obj() { }

Dynamic DestroyPageSoundsCommand_obj::__CreateEmpty() { return  new DestroyPageSoundsCommand_obj; }
hx::ObjectPtr< DestroyPageSoundsCommand_obj > DestroyPageSoundsCommand_obj::__new()
{  hx::ObjectPtr< DestroyPageSoundsCommand_obj > result = new DestroyPageSoundsCommand_obj();
	result->__construct();
	return result;}

Dynamic DestroyPageSoundsCommand_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DestroyPageSoundsCommand_obj > result = new DestroyPageSoundsCommand_obj();
	result->__construct();
	return result;}

Void DestroyPageSoundsCommand_obj::execute( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("DestroyPageSoundsCommand::execute","ca/confidant/glory/controller/DestroyPageSoundsCommand.hx",19);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(20)
		::haxe::Log_obj::trace(HX_CSTRING("RemovePageSoundsCommand"),hx::SourceInfo(HX_CSTRING("DestroyPageSoundsCommand.hx"),20,HX_CSTRING("ca.confidant.glory.controller.DestroyPageSoundsCommand"),HX_CSTRING("execute")));
		HX_STACK_LINE(22)
		::List sounds = hx::TCast< List >::cast(note->getBody());		HX_STACK_VAR(sounds,"sounds");
		HX_STACK_LINE(23)
		if (((sounds->length > (int)0))){
			HX_STACK_LINE(23)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(sounds->iterator());  __it->hasNext(); ){
				Dynamic thisSound = __it->next();
				this->facade->removeMediator(thisSound->__Field(HX_CSTRING("att"),true)->__Field(HX_CSTRING("id"),true));
			}
		}
	}
return null();
}



DestroyPageSoundsCommand_obj::DestroyPageSoundsCommand_obj()
{
}

void DestroyPageSoundsCommand_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DestroyPageSoundsCommand);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DestroyPageSoundsCommand_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DestroyPageSoundsCommand_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DestroyPageSoundsCommand_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DestroyPageSoundsCommand_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("execute"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DestroyPageSoundsCommand_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DestroyPageSoundsCommand_obj::__mClass,"__mClass");
};

Class DestroyPageSoundsCommand_obj::__mClass;

void DestroyPageSoundsCommand_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.controller.DestroyPageSoundsCommand"), hx::TCanCast< DestroyPageSoundsCommand_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DestroyPageSoundsCommand_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller
