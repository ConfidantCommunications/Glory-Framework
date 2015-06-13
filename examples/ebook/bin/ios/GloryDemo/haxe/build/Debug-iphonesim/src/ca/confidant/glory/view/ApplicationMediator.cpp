#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_GloryFrameworkApp
#include <ca/confidant/glory/GloryFrameworkApp.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_LoaderProxy
#include <ca/confidant/glory/model/LoaderProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_PagesConfigProxy
#include <ca/confidant/glory/model/PagesConfigProxy.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_view_ApplicationMediator
#include <ca/confidant/glory/view/ApplicationMediator.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
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
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_mediator_Mediator
#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
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
namespace view{

Void ApplicationMediator_obj::__construct(::ca::confidant::glory::GloryFrameworkApp viewComponent)
{
HX_STACK_PUSH("ApplicationMediator::new","ca/confidant/glory/view/ApplicationMediator.hx",24);
{
	HX_STACK_LINE(25)
	super::__construct(HX_CSTRING("ApplicationMediator"),viewComponent);
	HX_STACK_LINE(26)
	::haxe::Log_obj::trace(HX_CSTRING("ApplicationMediator!"),hx::SourceInfo(HX_CSTRING("ApplicationMediator.hx"),26,HX_CSTRING("ca.confidant.glory.view.ApplicationMediator"),HX_CSTRING("new")));
}
;
	return null();
}

ApplicationMediator_obj::~ApplicationMediator_obj() { }

Dynamic ApplicationMediator_obj::__CreateEmpty() { return  new ApplicationMediator_obj; }
hx::ObjectPtr< ApplicationMediator_obj > ApplicationMediator_obj::__new(::ca::confidant::glory::GloryFrameworkApp viewComponent)
{  hx::ObjectPtr< ApplicationMediator_obj > result = new ApplicationMediator_obj();
	result->__construct(viewComponent);
	return result;}

Dynamic ApplicationMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMediator_obj > result = new ApplicationMediator_obj();
	result->__construct(inArgs[0]);
	return result;}

::ca::confidant::glory::GloryFrameworkApp ApplicationMediator_obj::getApp( ){
	HX_STACK_PUSH("ApplicationMediator::getApp","ca/confidant/glory/view/ApplicationMediator.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_LINE(87)
	return hx::TCast< ca::confidant::glory::GloryFrameworkApp >::cast(this->viewComponent);
}


HX_DEFINE_DYNAMIC_FUNC0(ApplicationMediator_obj,getApp,return )

Void ApplicationMediator_obj::handleNotification( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("ApplicationMediator::handleNotification","ca/confidant/glory/view/ApplicationMediator.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(73)
		::String _switch_1 = (note->getName());
		if (  ( _switch_1==HX_CSTRING("message"))){
			HX_STACK_LINE(76)
			this->getApp()->displayMessage(hx::TCast< String >::cast(note->getBody()));
		}
	}
return null();
}


int ApplicationMediator_obj::getIndex( ::native::display::DisplayObject d){
	HX_STACK_PUSH("ApplicationMediator::getIndex","ca/confidant/glory/view/ApplicationMediator.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_ARG(d,"d");
	HX_STACK_LINE(69)
	return this->getApp()->getChildIndex(d);
}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationMediator_obj,getIndex,return )

Void ApplicationMediator_obj::reportLayers( ){
{
		HX_STACK_PUSH("ApplicationMediator::reportLayers","ca/confidant/glory/view/ApplicationMediator.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_LINE(65)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->getApp()->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		while(((_g1 < _g))){
			HX_STACK_LINE(65)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(66)
			::haxe::Log_obj::trace((((HX_CSTRING("layer:") + this->getApp()->getChildAt(i)->get_name()) + HX_CSTRING(":")) + i),hx::SourceInfo(HX_CSTRING("ApplicationMediator.hx"),66,HX_CSTRING("ca.confidant.glory.view.ApplicationMediator"),HX_CSTRING("reportLayers")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ApplicationMediator_obj,reportLayers,(void))

Void ApplicationMediator_obj::removeDisplayObject( ::native::display::DisplayObject d){
{
		HX_STACK_PUSH("ApplicationMediator::removeDisplayObject","ca/confidant/glory/view/ApplicationMediator.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_ARG(d,"d");
		HX_STACK_LINE(61)
		this->getApp()->removeChild(d);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationMediator_obj,removeDisplayObject,(void))

Void ApplicationMediator_obj::addDisplayObject( ::native::display::DisplayObject d,hx::Null< int >  __o_level){
int level = __o_level.Default(-1);
	HX_STACK_PUSH("ApplicationMediator::addDisplayObject","ca/confidant/glory/view/ApplicationMediator.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_ARG(d,"d");
	HX_STACK_ARG(level,"level");
{
		HX_STACK_LINE(40)
		if (((level == (int)-1))){
			HX_STACK_LINE(42)
			this->getApp()->addChild(d);
			HX_STACK_LINE(43)
			::haxe::Log_obj::trace(HX_CSTRING("add at top"),hx::SourceInfo(HX_CSTRING("ApplicationMediator.hx"),43,HX_CSTRING("ca.confidant.glory.view.ApplicationMediator"),HX_CSTRING("addDisplayObject")));
		}
		else{
			HX_STACK_LINE(45)
			this->getApp()->addChildAt(d,level);
			HX_STACK_LINE(46)
			::haxe::Log_obj::trace((HX_CSTRING("adding to level") + level),hx::SourceInfo(HX_CSTRING("ApplicationMediator.hx"),46,HX_CSTRING("ca.confidant.glory.view.ApplicationMediator"),HX_CSTRING("addDisplayObject")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ApplicationMediator_obj,addDisplayObject,(void))

Array< ::String > ApplicationMediator_obj::listNotificationInterests( ){
	HX_STACK_PUSH("ApplicationMediator::listNotificationInterests","ca/confidant/glory/view/ApplicationMediator.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_LINE(30)
	return Array_obj< ::String >::__new().Add(HX_CSTRING("message"));
}


::String ApplicationMediator_obj::NAME;


ApplicationMediator_obj::ApplicationMediator_obj()
{
}

void ApplicationMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationMediator);
	HX_MARK_MEMBER_NAME(pagesConfigProxy,"pagesConfigProxy");
	HX_MARK_MEMBER_NAME(loaderProxy,"loaderProxy");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ApplicationMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pagesConfigProxy,"pagesConfigProxy");
	HX_VISIT_MEMBER_NAME(loaderProxy,"loaderProxy");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ApplicationMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getApp") ) { return getApp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getIndex") ) { return getIndex_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loaderProxy") ) { return loaderProxy; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reportLayers") ) { return reportLayers_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addDisplayObject") ) { return addDisplayObject_dyn(); }
		if (HX_FIELD_EQ(inName,"pagesConfigProxy") ) { return pagesConfigProxy; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeDisplayObject") ) { return removeDisplayObject_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loaderProxy") ) { loaderProxy=inValue.Cast< ::ca::confidant::glory::model::LoaderProxy >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pagesConfigProxy") ) { pagesConfigProxy=inValue.Cast< ::ca::confidant::glory::model::PagesConfigProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pagesConfigProxy"));
	outFields->push(HX_CSTRING("loaderProxy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getApp"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("getIndex"),
	HX_CSTRING("reportLayers"),
	HX_CSTRING("removeDisplayObject"),
	HX_CSTRING("addDisplayObject"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("pagesConfigProxy"),
	HX_CSTRING("loaderProxy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMediator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationMediator_obj::NAME,"NAME");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMediator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationMediator_obj::NAME,"NAME");
};

Class ApplicationMediator_obj::__mClass;

void ApplicationMediator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.view.ApplicationMediator"), hx::TCanCast< ApplicationMediator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ApplicationMediator_obj::__boot()
{
	NAME= HX_CSTRING("ApplicationMediator");
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view
