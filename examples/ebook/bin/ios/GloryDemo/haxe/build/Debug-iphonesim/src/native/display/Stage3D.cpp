#include <hxcpp.h>

#ifndef INCLUDED_native_display_Stage3D
#include <native/display/Stage3D.h>
#endif
#ifndef INCLUDED_native_display3D_Context3D
#include <native/display3D/Context3D.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
namespace native{
namespace display{

Void Stage3D_obj::__construct()
{
HX_STACK_PUSH("Stage3D::new","native/display/Stage3D.hx",19);
{
	HX_STACK_LINE(19)
	super::__construct(null());
}
;
	return null();
}

Stage3D_obj::~Stage3D_obj() { }

Dynamic Stage3D_obj::__CreateEmpty() { return  new Stage3D_obj; }
hx::ObjectPtr< Stage3D_obj > Stage3D_obj::__new()
{  hx::ObjectPtr< Stage3D_obj > result = new Stage3D_obj();
	result->__construct();
	return result;}

Dynamic Stage3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage3D_obj > result = new Stage3D_obj();
	result->__construct();
	return result;}

Void Stage3D_obj::requestContext3D( ::String __o_context3DRenderMode){
::String context3DRenderMode = __o_context3DRenderMode.Default(HX_CSTRING(""));
	HX_STACK_PUSH("Stage3D::requestContext3D","native/display/Stage3D.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_ARG(context3DRenderMode,"context3DRenderMode");
{
		HX_STACK_LINE(28)
		this->context3D = ::native::display3D::Context3D_obj::__new();
		HX_STACK_LINE(29)
		this->dispatchEvent(::native::events::Event_obj::__new(::native::events::Event_obj::CONTEXT3D_CREATE,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,requestContext3D,(void))


Stage3D_obj::Stage3D_obj()
{
}

void Stage3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3D);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(context3D,"context3D");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(context3D,"context3D");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Stage3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { return context3D; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"requestContext3D") ) { return requestContext3D_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { context3D=inValue.Cast< ::native::display3D::Context3D >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("context3D"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("requestContext3D"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("visible"),
	HX_CSTRING("context3D"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
};

Class Stage3D_obj::__mClass;

void Stage3D_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.Stage3D"), hx::TCanCast< Stage3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Stage3D_obj::__boot()
{
}

} // end namespace native
} // end namespace display
