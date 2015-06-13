#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IObserver
#include <org/puremvc/haxe/interfaces/IObserver.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Observer
#include <org/puremvc/haxe/patterns/observer/Observer.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace observer{

Void Observer_obj::__construct(Dynamic notifyMethod,Dynamic notifyContext)
{
HX_STACK_PUSH("Observer::new","org/puremvc/haxe/patterns/observer/Observer.hx",39);
{
	HX_STACK_LINE(40)
	this->setNotifyMethod(notifyMethod);
	HX_STACK_LINE(41)
	this->setNotifyContext(notifyContext);
}
;
	return null();
}

Observer_obj::~Observer_obj() { }

Dynamic Observer_obj::__CreateEmpty() { return  new Observer_obj; }
hx::ObjectPtr< Observer_obj > Observer_obj::__new(Dynamic notifyMethod,Dynamic notifyContext)
{  hx::ObjectPtr< Observer_obj > result = new Observer_obj();
	result->__construct(notifyMethod,notifyContext);
	return result;}

Dynamic Observer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Observer_obj > result = new Observer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Observer_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::interfaces::IObserver_obj)) return operator ::org::puremvc::haxe::interfaces::IObserver_obj *();
	return super::__ToInterface(inType);
}

bool Observer_obj::compareNotifyContext( Dynamic object){
	HX_STACK_PUSH("Observer::compareNotifyContext","org/puremvc/haxe/patterns/observer/Observer.hx",90);
	HX_STACK_THIS(this);
	HX_STACK_ARG(object,"object");
	HX_STACK_LINE(90)
	return (object == this->context);
}


HX_DEFINE_DYNAMIC_FUNC1(Observer_obj,compareNotifyContext,return )

Void Observer_obj::notifyObserver( ::org::puremvc::haxe::interfaces::INotification notification){
{
		HX_STACK_PUSH("Observer::notifyObserver","org/puremvc/haxe/patterns/observer/Observer.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notification,"notification");
		HX_STACK_LINE(82)
		this->getNotifyMethod()(notification).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Observer_obj,notifyObserver,(void))

Dynamic Observer_obj::getNotifyContext( ){
	HX_STACK_PUSH("Observer::getNotifyContext","org/puremvc/haxe/patterns/observer/Observer.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_LINE(74)
	return this->context;
}


HX_DEFINE_DYNAMIC_FUNC0(Observer_obj,getNotifyContext,return )

Dynamic Observer_obj::getNotifyMethod( ){
	HX_STACK_PUSH("Observer::getNotifyMethod","org/puremvc/haxe/patterns/observer/Observer.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(66)
	return this->notify_dyn();
}


HX_DEFINE_DYNAMIC_FUNC0(Observer_obj,getNotifyMethod,return )

Void Observer_obj::setNotifyContext( Dynamic notifyContext){
{
		HX_STACK_PUSH("Observer::setNotifyContext","org/puremvc/haxe/patterns/observer/Observer.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notifyContext,"notifyContext");
		HX_STACK_LINE(58)
		this->context = notifyContext;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Observer_obj,setNotifyContext,(void))

Void Observer_obj::setNotifyMethod( Dynamic notifyMethod){
{
		HX_STACK_PUSH("Observer::setNotifyMethod","org/puremvc/haxe/patterns/observer/Observer.hx",50);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notifyMethod,"notifyMethod");
		HX_STACK_LINE(50)
		this->notify = notifyMethod;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Observer_obj,setNotifyMethod,(void))


Observer_obj::Observer_obj()
{
}

void Observer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Observer);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(notify,"notify");
	HX_MARK_END_CLASS();
}

void Observer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(notify,"notify");
}

Dynamic Observer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return notify; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"notifyObserver") ) { return notifyObserver_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getNotifyMethod") ) { return getNotifyMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"setNotifyMethod") ) { return setNotifyMethod_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNotifyContext") ) { return getNotifyContext_dyn(); }
		if (HX_FIELD_EQ(inName,"setNotifyContext") ) { return setNotifyContext_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compareNotifyContext") ) { return compareNotifyContext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Observer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { notify=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Observer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("context"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("compareNotifyContext"),
	HX_CSTRING("notifyObserver"),
	HX_CSTRING("getNotifyContext"),
	HX_CSTRING("getNotifyMethod"),
	HX_CSTRING("setNotifyContext"),
	HX_CSTRING("setNotifyMethod"),
	HX_CSTRING("context"),
	HX_CSTRING("notify"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Observer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Observer_obj::__mClass,"__mClass");
};

Class Observer_obj::__mClass;

void Observer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.patterns.observer.Observer"), hx::TCanCast< Observer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Observer_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace observer
