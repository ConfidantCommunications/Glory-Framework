#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_IMediator
#include <org/puremvc/haxe/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_mediator_Mediator
#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace mediator{

Void Mediator_obj::__construct(::String mediatorName,Dynamic viewComponent)
{
HX_STACK_PUSH("Mediator::new","org/puremvc/haxe/patterns/mediator/Mediator.hx",32);
{
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(34)
	this->mediatorName = (  (((mediatorName != null()))) ? ::String(mediatorName) : ::String(::org::puremvc::haxe::patterns::mediator::Mediator_obj::NAME) );
	HX_STACK_LINE(35)
	if (((viewComponent != null()))){
		HX_STACK_LINE(36)
		this->viewComponent = viewComponent;
	}
}
;
	return null();
}

Mediator_obj::~Mediator_obj() { }

Dynamic Mediator_obj::__CreateEmpty() { return  new Mediator_obj; }
hx::ObjectPtr< Mediator_obj > Mediator_obj::__new(::String mediatorName,Dynamic viewComponent)
{  hx::ObjectPtr< Mediator_obj > result = new Mediator_obj();
	result->__construct(mediatorName,viewComponent);
	return result;}

Dynamic Mediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mediator_obj > result = new Mediator_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Mediator_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::interfaces::IMediator_obj)) return operator ::org::puremvc::haxe::interfaces::IMediator_obj *();
	return super::__ToInterface(inType);
}

Void Mediator_obj::onRemove( ){
{
		HX_STACK_PUSH("Mediator::onRemove","org/puremvc/haxe/patterns/mediator/Mediator.hx",96);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mediator_obj,onRemove,(void))

Void Mediator_obj::onRegister( ){
{
		HX_STACK_PUSH("Mediator::onRegister","org/puremvc/haxe/patterns/mediator/Mediator.hx",89);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mediator_obj,onRegister,(void))

Void Mediator_obj::handleNotification( ::org::puremvc::haxe::interfaces::INotification notification){
{
		HX_STACK_PUSH("Mediator::handleNotification","org/puremvc/haxe/patterns/mediator/Mediator.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_ARG(notification,"notification");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mediator_obj,handleNotification,(void))

Array< ::String > Mediator_obj::listNotificationInterests( ){
	HX_STACK_PUSH("Mediator::listNotificationInterests","org/puremvc/haxe/patterns/mediator/Mediator.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(69)
	return Array_obj< ::String >::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(Mediator_obj,listNotificationInterests,return )

Dynamic Mediator_obj::getViewComponent( ){
	HX_STACK_PUSH("Mediator::getViewComponent","org/puremvc/haxe/patterns/mediator/Mediator.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	return this->viewComponent;
}


HX_DEFINE_DYNAMIC_FUNC0(Mediator_obj,getViewComponent,return )

Void Mediator_obj::setViewComponent( Dynamic viewComponent){
{
		HX_STACK_PUSH("Mediator::setViewComponent","org/puremvc/haxe/patterns/mediator/Mediator.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(viewComponent,"viewComponent");
		HX_STACK_LINE(52)
		this->viewComponent = viewComponent;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mediator_obj,setViewComponent,(void))

::String Mediator_obj::getMediatorName( ){
	HX_STACK_PUSH("Mediator::getMediatorName","org/puremvc/haxe/patterns/mediator/Mediator.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_LINE(44)
	return this->mediatorName;
}


HX_DEFINE_DYNAMIC_FUNC0(Mediator_obj,getMediatorName,return )

::String Mediator_obj::NAME;


Mediator_obj::Mediator_obj()
{
}

void Mediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mediator);
	HX_MARK_MEMBER_NAME(viewComponent,"viewComponent");
	HX_MARK_MEMBER_NAME(mediatorName,"mediatorName");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(viewComponent,"viewComponent");
	HX_VISIT_MEMBER_NAME(mediatorName,"mediatorName");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Mediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRemove") ) { return onRemove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mediatorName") ) { return mediatorName; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"viewComponent") ) { return viewComponent; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMediatorName") ) { return getMediatorName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getViewComponent") ) { return getViewComponent_dyn(); }
		if (HX_FIELD_EQ(inName,"setViewComponent") ) { return setViewComponent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mediatorName") ) { mediatorName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"viewComponent") ) { viewComponent=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("viewComponent"));
	outFields->push(HX_CSTRING("mediatorName"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("viewComponent"),
	HX_CSTRING("mediatorName"),
	HX_CSTRING("onRemove"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("getViewComponent"),
	HX_CSTRING("setViewComponent"),
	HX_CSTRING("getMediatorName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mediator_obj::NAME,"NAME");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mediator_obj::NAME,"NAME");
};

Class Mediator_obj::__mClass;

void Mediator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.patterns.mediator.Mediator"), hx::TCanCast< Mediator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Mediator_obj::__boot()
{
	NAME= HX_CSTRING("Mediator");
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace mediator
