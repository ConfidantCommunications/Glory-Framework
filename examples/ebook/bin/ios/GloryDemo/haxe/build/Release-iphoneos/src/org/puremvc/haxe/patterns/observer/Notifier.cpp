#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_IFacade
#include <org/puremvc/haxe/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_facade_Facade
#include <org/puremvc/haxe/patterns/facade/Facade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace observer{

Void Notifier_obj::__construct()
{
HX_STACK_PUSH("Notifier::new","org/puremvc/haxe/patterns/observer/Notifier.hx",33);
{
	HX_STACK_LINE(33)
	this->facade = ::org::puremvc::haxe::patterns::facade::Facade_obj::getInstance();
}
;
	return null();
}

Notifier_obj::~Notifier_obj() { }

Dynamic Notifier_obj::__CreateEmpty() { return  new Notifier_obj; }
hx::ObjectPtr< Notifier_obj > Notifier_obj::__new()
{  hx::ObjectPtr< Notifier_obj > result = new Notifier_obj();
	result->__construct();
	return result;}

Dynamic Notifier_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Notifier_obj > result = new Notifier_obj();
	result->__construct();
	return result;}

hx::Object *Notifier_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::interfaces::INotifier_obj)) return operator ::org::puremvc::haxe::interfaces::INotifier_obj *();
	return super::__ToInterface(inType);
}

Void Notifier_obj::sendNotification( ::String notificationName,Dynamic body,::String type){
{
		HX_STACK_PUSH("Notifier::sendNotification","org/puremvc/haxe/patterns/observer/Notifier.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notificationName,"notificationName");
		HX_STACK_ARG(body,"body");
		HX_STACK_ARG(type,"type");
		HX_STACK_LINE(44)
		this->facade->sendNotification(notificationName,body,type);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Notifier_obj,sendNotification,(void))


Notifier_obj::Notifier_obj()
{
}

void Notifier_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Notifier);
	HX_MARK_MEMBER_NAME(facade,"facade");
	HX_MARK_END_CLASS();
}

void Notifier_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(facade,"facade");
}

Dynamic Notifier_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"facade") ) { return facade; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sendNotification") ) { return sendNotification_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Notifier_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"facade") ) { facade=inValue.Cast< ::org::puremvc::haxe::interfaces::IFacade >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Notifier_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("facade"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("facade"),
	HX_CSTRING("sendNotification"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Notifier_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Notifier_obj::__mClass,"__mClass");
};

Class Notifier_obj::__mClass;

void Notifier_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.patterns.observer.Notifier"), hx::TCanCast< Notifier_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Notifier_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace observer
