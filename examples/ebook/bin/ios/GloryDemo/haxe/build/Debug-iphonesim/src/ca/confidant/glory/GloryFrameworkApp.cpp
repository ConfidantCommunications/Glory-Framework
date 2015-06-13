#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_ApplicationFacade
#include <ca/confidant/glory/ApplicationFacade.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_GloryFrameworkApp
#include <ca/confidant/glory/GloryFrameworkApp.h>
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
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
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
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IFacade
#include <org/puremvc/haxe/interfaces/IFacade.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_facade_Facade
#include <org/puremvc/haxe/patterns/facade/Facade.h>
#endif
namespace ca{
namespace confidant{
namespace glory{

Void GloryFrameworkApp_obj::__construct()
{
HX_STACK_PUSH("GloryFrameworkApp::new","ca/confidant/glory/GloryFrameworkApp.hx",14);
{
	HX_STACK_LINE(15)
	super::__construct();
	HX_STACK_LINE(16)
	::ca::confidant::glory::ApplicationFacade facade = ::ca::confidant::glory::ApplicationFacade_obj::getInstance();		HX_STACK_VAR(facade,"facade");
	HX_STACK_LINE(17)
	facade->sendNotification(HX_CSTRING("startup"),hx::ObjectPtr<OBJ_>(this),null());
}
;
	return null();
}

GloryFrameworkApp_obj::~GloryFrameworkApp_obj() { }

Dynamic GloryFrameworkApp_obj::__CreateEmpty() { return  new GloryFrameworkApp_obj; }
hx::ObjectPtr< GloryFrameworkApp_obj > GloryFrameworkApp_obj::__new()
{  hx::ObjectPtr< GloryFrameworkApp_obj > result = new GloryFrameworkApp_obj();
	result->__construct();
	return result;}

Dynamic GloryFrameworkApp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GloryFrameworkApp_obj > result = new GloryFrameworkApp_obj();
	result->__construct();
	return result;}

Void GloryFrameworkApp_obj::displayMessage( ::String m){
{
		HX_STACK_PUSH("GloryFrameworkApp::displayMessage","ca/confidant/glory/GloryFrameworkApp.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_ARG(m,"m");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GloryFrameworkApp_obj,displayMessage,(void))

Void GloryFrameworkApp_obj::main( ){
{
		HX_STACK_PUSH("GloryFrameworkApp::main","ca/confidant/glory/GloryFrameworkApp.hx",22);
		HX_STACK_LINE(23)
		::ca::confidant::glory::GloryFrameworkApp app = ::ca::confidant::glory::GloryFrameworkApp_obj::__new();		HX_STACK_VAR(app,"app");
		HX_STACK_LINE(24)
		::nme::Lib_obj::get_current()->addChild(app);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GloryFrameworkApp_obj,main,(void))


GloryFrameworkApp_obj::GloryFrameworkApp_obj()
{
}

void GloryFrameworkApp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GloryFrameworkApp);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GloryFrameworkApp_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GloryFrameworkApp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"displayMessage") ) { return displayMessage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GloryFrameworkApp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GloryFrameworkApp_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("displayMessage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GloryFrameworkApp_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GloryFrameworkApp_obj::__mClass,"__mClass");
};

Class GloryFrameworkApp_obj::__mClass;

void GloryFrameworkApp_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.GloryFrameworkApp"), hx::TCanCast< GloryFrameworkApp_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GloryFrameworkApp_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
