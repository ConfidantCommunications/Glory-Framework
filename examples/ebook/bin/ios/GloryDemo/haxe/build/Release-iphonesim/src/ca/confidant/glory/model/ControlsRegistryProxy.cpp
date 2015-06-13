#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_model_ControlsRegistryProxy
#include <ca/confidant/glory/model/ControlsRegistryProxy.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
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

Void ControlsRegistryProxy_obj::__construct()
{
HX_STACK_PUSH("ControlsRegistryProxy::new","ca/confidant/glory/model/ControlsRegistryProxy.hx",22);
{
	HX_STACK_LINE(23)
	super::__construct(::ca::confidant::glory::model::ControlsRegistryProxy_obj::NAME,null());
	HX_STACK_LINE(25)
	this->controls = Array_obj< ::neash::display::DisplayObject >::__new();
	HX_STACK_LINE(26)
	::haxe::Log_obj::trace(HX_CSTRING("ControlsRegistryProxy!"),hx::SourceInfo(HX_CSTRING("ControlsRegistryProxy.hx"),26,HX_CSTRING("ca.confidant.glory.model.ControlsRegistryProxy"),HX_CSTRING("new")));
}
;
	return null();
}

ControlsRegistryProxy_obj::~ControlsRegistryProxy_obj() { }

Dynamic ControlsRegistryProxy_obj::__CreateEmpty() { return  new ControlsRegistryProxy_obj; }
hx::ObjectPtr< ControlsRegistryProxy_obj > ControlsRegistryProxy_obj::__new()
{  hx::ObjectPtr< ControlsRegistryProxy_obj > result = new ControlsRegistryProxy_obj();
	result->__construct();
	return result;}

Dynamic ControlsRegistryProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ControlsRegistryProxy_obj > result = new ControlsRegistryProxy_obj();
	result->__construct();
	return result;}

Void ControlsRegistryProxy_obj::registerControl( ::neash::display::DisplayObject d){
{
		HX_STACK_PUSH("ControlsRegistryProxy::registerControl","ca/confidant/glory/model/ControlsRegistryProxy.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_ARG(d,"d");
		HX_STACK_LINE(32)
		this->controls->push(d);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ControlsRegistryProxy_obj,registerControl,(void))

Array< ::neash::display::DisplayObject > ControlsRegistryProxy_obj::getControls( ){
	HX_STACK_PUSH("ControlsRegistryProxy::getControls","ca/confidant/glory/model/ControlsRegistryProxy.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_LINE(29)
	::haxe::Log_obj::trace(HX_CSTRING("crp:getControls"),hx::SourceInfo(HX_CSTRING("ControlsRegistryProxy.hx"),29,HX_CSTRING("ca.confidant.glory.model.ControlsRegistryProxy"),HX_CSTRING("getControls")));
	HX_STACK_LINE(30)
	return this->controls;
}


HX_DEFINE_DYNAMIC_FUNC0(ControlsRegistryProxy_obj,getControls,return )

::String ControlsRegistryProxy_obj::NAME;


ControlsRegistryProxy_obj::ControlsRegistryProxy_obj()
{
}

void ControlsRegistryProxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlsRegistryProxy);
	HX_MARK_MEMBER_NAME(controls,"controls");
	HX_MARK_MEMBER_NAME(currentPage,"currentPage");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ControlsRegistryProxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controls,"controls");
	HX_VISIT_MEMBER_NAME(currentPage,"currentPage");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ControlsRegistryProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { return controls; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getControls") ) { return getControls_dyn(); }
		if (HX_FIELD_EQ(inName,"currentPage") ) { return currentPage; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerControl") ) { return registerControl_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ControlsRegistryProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"controls") ) { controls=inValue.Cast< Array< ::neash::display::DisplayObject > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentPage") ) { currentPage=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ControlsRegistryProxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("controls"));
	outFields->push(HX_CSTRING("currentPage"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("registerControl"),
	HX_CSTRING("getControls"),
	HX_CSTRING("controls"),
	HX_CSTRING("currentPage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlsRegistryProxy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ControlsRegistryProxy_obj::NAME,"NAME");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlsRegistryProxy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ControlsRegistryProxy_obj::NAME,"NAME");
};

Class ControlsRegistryProxy_obj::__mClass;

void ControlsRegistryProxy_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.model.ControlsRegistryProxy"), hx::TCanCast< ControlsRegistryProxy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ControlsRegistryProxy_obj::__boot()
{
	NAME= HX_CSTRING("ControlsRegistryProxy");
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace model
