#include <hxcpp.h>

#ifndef INCLUDED_native_display_DirectRenderer
#include <native/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_OpenGLView
#include <native/display/OpenGLView.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
namespace native{
namespace display{

Void OpenGLView_obj::__construct()
{
HX_STACK_PUSH("OpenGLView::new","native/display/OpenGLView.hx",19);
{
	HX_STACK_LINE(19)
	super::__construct(HX_CSTRING("OpenGLView"));
}
;
	return null();
}

OpenGLView_obj::~OpenGLView_obj() { }

Dynamic OpenGLView_obj::__CreateEmpty() { return  new OpenGLView_obj; }
hx::ObjectPtr< OpenGLView_obj > OpenGLView_obj::__new()
{  hx::ObjectPtr< OpenGLView_obj > result = new OpenGLView_obj();
	result->__construct();
	return result;}

Dynamic OpenGLView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OpenGLView_obj > result = new OpenGLView_obj();
	result->__construct();
	return result;}

::String OpenGLView_obj::CONTEXT_LOST;

::String OpenGLView_obj::CONTEXT_RESTORED;


OpenGLView_obj::OpenGLView_obj()
{
}

void OpenGLView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpenGLView);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OpenGLView_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic OpenGLView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"CONTEXT_LOST") ) { return CONTEXT_LOST; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONTEXT_RESTORED") ) { return CONTEXT_RESTORED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OpenGLView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"CONTEXT_LOST") ) { CONTEXT_LOST=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONTEXT_RESTORED") ) { CONTEXT_RESTORED=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpenGLView_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CONTEXT_LOST"),
	HX_CSTRING("CONTEXT_RESTORED"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenGLView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::CONTEXT_LOST,"CONTEXT_LOST");
	HX_MARK_MEMBER_NAME(OpenGLView_obj::CONTEXT_RESTORED,"CONTEXT_RESTORED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::CONTEXT_LOST,"CONTEXT_LOST");
	HX_VISIT_MEMBER_NAME(OpenGLView_obj::CONTEXT_RESTORED,"CONTEXT_RESTORED");
};

Class OpenGLView_obj::__mClass;

void OpenGLView_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.OpenGLView"), hx::TCanCast< OpenGLView_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void OpenGLView_obj::__boot()
{
	CONTEXT_LOST= HX_CSTRING("glcontextlost");
	CONTEXT_RESTORED= HX_CSTRING("glcontextrestored");
}

} // end namespace native
} // end namespace display
