#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notification
#include <org/puremvc/haxe/patterns/observer/Notification.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace observer{

Void Notification_obj::__construct(::String name,Dynamic body,::String type)
{
HX_STACK_PUSH("Notification::new","org/puremvc/haxe/patterns/observer/Notification.hx",41);
{
	HX_STACK_LINE(42)
	this->name = name;
	HX_STACK_LINE(43)
	if (((body != null()))){
		HX_STACK_LINE(44)
		this->body = body;
	}
	HX_STACK_LINE(45)
	if (((type != null()))){
		HX_STACK_LINE(46)
		this->type = type;
	}
}
;
	return null();
}

Notification_obj::~Notification_obj() { }

Dynamic Notification_obj::__CreateEmpty() { return  new Notification_obj; }
hx::ObjectPtr< Notification_obj > Notification_obj::__new(::String name,Dynamic body,::String type)
{  hx::ObjectPtr< Notification_obj > result = new Notification_obj();
	result->__construct(name,body,type);
	return result;}

Dynamic Notification_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Notification_obj > result = new Notification_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *Notification_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::interfaces::INotification_obj)) return operator ::org::puremvc::haxe::interfaces::INotification_obj *();
	return super::__ToInterface(inType);
}

::String Notification_obj::toString( ){
	HX_STACK_PUSH("Notification::toString","org/puremvc/haxe/patterns/observer/Notification.hx",93);
	HX_STACK_THIS(this);
	HX_STACK_LINE(94)
	::String msg = (HX_CSTRING("Notification Name: ") + this->getName());		HX_STACK_VAR(msg,"msg");
	HX_STACK_LINE(95)
	hx::AddEq(msg,(HX_CSTRING("\nBody:") + ((  (((this->body == null()))) ? ::String(HX_CSTRING("null")) : ::String(this->body->toString()) ))));
	HX_STACK_LINE(96)
	hx::AddEq(msg,(HX_CSTRING("\nType:") + ((  (((this->type == null()))) ? ::String(HX_CSTRING("null")) : ::String(this->type) ))));
	HX_STACK_LINE(97)
	return msg;
}


HX_DEFINE_DYNAMIC_FUNC0(Notification_obj,toString,return )

::String Notification_obj::getType( ){
	HX_STACK_PUSH("Notification::getType","org/puremvc/haxe/patterns/observer/Notification.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_LINE(85)
	return this->type;
}


HX_DEFINE_DYNAMIC_FUNC0(Notification_obj,getType,return )

Void Notification_obj::setType( ::String type){
{
		HX_STACK_PUSH("Notification::setType","org/puremvc/haxe/patterns/observer/Notification.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_LINE(77)
		this->type = type;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Notification_obj,setType,(void))

Dynamic Notification_obj::getBody( ){
	HX_STACK_PUSH("Notification::getBody","org/puremvc/haxe/patterns/observer/Notification.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(69)
	return this->body;
}


HX_DEFINE_DYNAMIC_FUNC0(Notification_obj,getBody,return )

Void Notification_obj::setBody( Dynamic body){
{
		HX_STACK_PUSH("Notification::setBody","org/puremvc/haxe/patterns/observer/Notification.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_ARG(body,"body");
		HX_STACK_LINE(61)
		this->body = body;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Notification_obj,setBody,(void))

::String Notification_obj::getName( ){
	HX_STACK_PUSH("Notification::getName","org/puremvc/haxe/patterns/observer/Notification.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_LINE(53)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Notification_obj,getName,return )


Notification_obj::Notification_obj()
{
}

void Notification_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Notification);
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Notification_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Notification_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"setType") ) { return setType_dyn(); }
		if (HX_FIELD_EQ(inName,"getBody") ) { return getBody_dyn(); }
		if (HX_FIELD_EQ(inName,"setBody") ) { return setBody_dyn(); }
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Notification_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Notification_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("body"),
	HX_CSTRING("type"),
	HX_CSTRING("name"),
	HX_CSTRING("toString"),
	HX_CSTRING("getType"),
	HX_CSTRING("setType"),
	HX_CSTRING("getBody"),
	HX_CSTRING("setBody"),
	HX_CSTRING("getName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Notification_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Notification_obj::__mClass,"__mClass");
};

Class Notification_obj::__mClass;

void Notification_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.patterns.observer.Notification"), hx::TCanCast< Notification_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Notification_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace observer
