#include <hxcpp.h>

#ifndef INCLUDED_native_display3D_Context3DStencilAction
#include <native/display3D/Context3DStencilAction.h>
#endif
namespace native{
namespace display3D{

::native::display3D::Context3DStencilAction Context3DStencilAction_obj::DECREMENT_SATURATE;

::native::display3D::Context3DStencilAction Context3DStencilAction_obj::DECREMENT_WRAP;

::native::display3D::Context3DStencilAction Context3DStencilAction_obj::INCREMENT_SATURATE;

::native::display3D::Context3DStencilAction Context3DStencilAction_obj::INCREMENT_WRAP;

::native::display3D::Context3DStencilAction Context3DStencilAction_obj::INVERT;

::native::display3D::Context3DStencilAction Context3DStencilAction_obj::KEEP;

::native::display3D::Context3DStencilAction Context3DStencilAction_obj::SET;

::native::display3D::Context3DStencilAction Context3DStencilAction_obj::ZERO;

HX_DEFINE_CREATE_ENUM(Context3DStencilAction_obj)

int Context3DStencilAction_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DECREMENT_SATURATE")) return 0;
	if (inName==HX_CSTRING("DECREMENT_WRAP")) return 1;
	if (inName==HX_CSTRING("INCREMENT_SATURATE")) return 2;
	if (inName==HX_CSTRING("INCREMENT_WRAP")) return 3;
	if (inName==HX_CSTRING("INVERT")) return 4;
	if (inName==HX_CSTRING("KEEP")) return 5;
	if (inName==HX_CSTRING("SET")) return 6;
	if (inName==HX_CSTRING("ZERO")) return 7;
	return super::__FindIndex(inName);
}

int Context3DStencilAction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DECREMENT_SATURATE")) return 0;
	if (inName==HX_CSTRING("DECREMENT_WRAP")) return 0;
	if (inName==HX_CSTRING("INCREMENT_SATURATE")) return 0;
	if (inName==HX_CSTRING("INCREMENT_WRAP")) return 0;
	if (inName==HX_CSTRING("INVERT")) return 0;
	if (inName==HX_CSTRING("KEEP")) return 0;
	if (inName==HX_CSTRING("SET")) return 0;
	if (inName==HX_CSTRING("ZERO")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DStencilAction_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("DECREMENT_SATURATE")) return DECREMENT_SATURATE;
	if (inName==HX_CSTRING("DECREMENT_WRAP")) return DECREMENT_WRAP;
	if (inName==HX_CSTRING("INCREMENT_SATURATE")) return INCREMENT_SATURATE;
	if (inName==HX_CSTRING("INCREMENT_WRAP")) return INCREMENT_WRAP;
	if (inName==HX_CSTRING("INVERT")) return INVERT;
	if (inName==HX_CSTRING("KEEP")) return KEEP;
	if (inName==HX_CSTRING("SET")) return SET;
	if (inName==HX_CSTRING("ZERO")) return ZERO;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("DECREMENT_SATURATE"),
	HX_CSTRING("DECREMENT_WRAP"),
	HX_CSTRING("INCREMENT_SATURATE"),
	HX_CSTRING("INCREMENT_WRAP"),
	HX_CSTRING("INVERT"),
	HX_CSTRING("KEEP"),
	HX_CSTRING("SET"),
	HX_CSTRING("ZERO"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DStencilAction_obj::DECREMENT_SATURATE,"DECREMENT_SATURATE");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_obj::DECREMENT_WRAP,"DECREMENT_WRAP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_obj::INCREMENT_SATURATE,"INCREMENT_SATURATE");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_obj::INCREMENT_WRAP,"INCREMENT_WRAP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_obj::KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_obj::SET,"SET");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_obj::ZERO,"ZERO");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_obj::DECREMENT_SATURATE,"DECREMENT_SATURATE");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_obj::DECREMENT_WRAP,"DECREMENT_WRAP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_obj::INCREMENT_SATURATE,"INCREMENT_SATURATE");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_obj::INCREMENT_WRAP,"INCREMENT_WRAP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_obj::KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_obj::SET,"SET");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_obj::ZERO,"ZERO");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Context3DStencilAction_obj::__mClass;

Dynamic __Create_Context3DStencilAction_obj() { return new Context3DStencilAction_obj; }

void Context3DStencilAction_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.Context3DStencilAction"), hx::TCanCast< Context3DStencilAction_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DStencilAction_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DStencilAction_obj, sMarkStatics, sVisitStatic);
}

void Context3DStencilAction_obj::__boot()
{
Static(DECREMENT_SATURATE) = hx::CreateEnum< Context3DStencilAction_obj >(HX_CSTRING("DECREMENT_SATURATE"),0);
Static(DECREMENT_WRAP) = hx::CreateEnum< Context3DStencilAction_obj >(HX_CSTRING("DECREMENT_WRAP"),1);
Static(INCREMENT_SATURATE) = hx::CreateEnum< Context3DStencilAction_obj >(HX_CSTRING("INCREMENT_SATURATE"),2);
Static(INCREMENT_WRAP) = hx::CreateEnum< Context3DStencilAction_obj >(HX_CSTRING("INCREMENT_WRAP"),3);
Static(INVERT) = hx::CreateEnum< Context3DStencilAction_obj >(HX_CSTRING("INVERT"),4);
Static(KEEP) = hx::CreateEnum< Context3DStencilAction_obj >(HX_CSTRING("KEEP"),5);
Static(SET) = hx::CreateEnum< Context3DStencilAction_obj >(HX_CSTRING("SET"),6);
Static(ZERO) = hx::CreateEnum< Context3DStencilAction_obj >(HX_CSTRING("ZERO"),7);
}


} // end namespace native
} // end namespace display3D
