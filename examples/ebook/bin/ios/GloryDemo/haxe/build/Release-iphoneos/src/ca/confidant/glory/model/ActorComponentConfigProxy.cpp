#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_model_ActorComponentConfigProxy
#include <ca/confidant/glory/model/ActorComponentConfigProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_proxy_Proxy
#include <org/puremvc/haxe/patterns/proxy/Proxy.h>
#endif
namespace ca{
namespace confidant{
namespace glory{
namespace model{

Void ActorComponentConfigProxy_obj::__construct(::String id,::String theType,::String __o_theAction)
{
HX_STACK_PUSH("ActorComponentConfigProxy::new","ca/confidant/glory/model/ActorComponentConfigProxy.hx",20);
::String theAction = __o_theAction.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(21)
	super::__construct(id,null());
	HX_STACK_LINE(22)
	this->type = theType;
	HX_STACK_LINE(23)
	this->action = theAction;
}
;
	return null();
}

ActorComponentConfigProxy_obj::~ActorComponentConfigProxy_obj() { }

Dynamic ActorComponentConfigProxy_obj::__CreateEmpty() { return  new ActorComponentConfigProxy_obj; }
hx::ObjectPtr< ActorComponentConfigProxy_obj > ActorComponentConfigProxy_obj::__new(::String id,::String theType,::String __o_theAction)
{  hx::ObjectPtr< ActorComponentConfigProxy_obj > result = new ActorComponentConfigProxy_obj();
	result->__construct(id,theType,__o_theAction);
	return result;}

Dynamic ActorComponentConfigProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ActorComponentConfigProxy_obj > result = new ActorComponentConfigProxy_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


ActorComponentConfigProxy_obj::ActorComponentConfigProxy_obj()
{
}

void ActorComponentConfigProxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActorComponentConfigProxy);
	HX_MARK_MEMBER_NAME(action,"action");
	HX_MARK_MEMBER_NAME(type,"type");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ActorComponentConfigProxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(action,"action");
	HX_VISIT_MEMBER_NAME(type,"type");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ActorComponentConfigProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"action") ) { return action; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ActorComponentConfigProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"action") ) { action=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActorComponentConfigProxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("action"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("action"),
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActorComponentConfigProxy_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActorComponentConfigProxy_obj::__mClass,"__mClass");
};

Class ActorComponentConfigProxy_obj::__mClass;

void ActorComponentConfigProxy_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.model.ActorComponentConfigProxy"), hx::TCanCast< ActorComponentConfigProxy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ActorComponentConfigProxy_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace model
