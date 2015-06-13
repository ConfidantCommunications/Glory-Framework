#include <hxcpp.h>

#ifndef INCLUDED_native_display3D_Context3DVertexBufferFormat
#include <native/display3D/Context3DVertexBufferFormat.h>
#endif
namespace native{
namespace display3D{

::native::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::BYTES_4;

::native::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_1;

::native::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_2;

::native::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_3;

::native::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_4;

HX_DEFINE_CREATE_ENUM(Context3DVertexBufferFormat_obj)

int Context3DVertexBufferFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BYTES_4")) return 0;
	if (inName==HX_CSTRING("FLOAT_1")) return 1;
	if (inName==HX_CSTRING("FLOAT_2")) return 2;
	if (inName==HX_CSTRING("FLOAT_3")) return 3;
	if (inName==HX_CSTRING("FLOAT_4")) return 4;
	return super::__FindIndex(inName);
}

int Context3DVertexBufferFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BYTES_4")) return 0;
	if (inName==HX_CSTRING("FLOAT_1")) return 0;
	if (inName==HX_CSTRING("FLOAT_2")) return 0;
	if (inName==HX_CSTRING("FLOAT_3")) return 0;
	if (inName==HX_CSTRING("FLOAT_4")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DVertexBufferFormat_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BYTES_4")) return BYTES_4;
	if (inName==HX_CSTRING("FLOAT_1")) return FLOAT_1;
	if (inName==HX_CSTRING("FLOAT_2")) return FLOAT_2;
	if (inName==HX_CSTRING("FLOAT_3")) return FLOAT_3;
	if (inName==HX_CSTRING("FLOAT_4")) return FLOAT_4;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("BYTES_4"),
	HX_CSTRING("FLOAT_1"),
	HX_CSTRING("FLOAT_2"),
	HX_CSTRING("FLOAT_3"),
	HX_CSTRING("FLOAT_4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::BYTES_4,"BYTES_4");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_1,"FLOAT_1");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_2,"FLOAT_2");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_3,"FLOAT_3");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_4,"FLOAT_4");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::BYTES_4,"BYTES_4");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_1,"FLOAT_1");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_2,"FLOAT_2");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_3,"FLOAT_3");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_4,"FLOAT_4");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Context3DVertexBufferFormat_obj::__mClass;

Dynamic __Create_Context3DVertexBufferFormat_obj() { return new Context3DVertexBufferFormat_obj; }

void Context3DVertexBufferFormat_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.Context3DVertexBufferFormat"), hx::TCanCast< Context3DVertexBufferFormat_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DVertexBufferFormat_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DVertexBufferFormat_obj, sMarkStatics, sVisitStatic);
}

void Context3DVertexBufferFormat_obj::__boot()
{
Static(BYTES_4) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_CSTRING("BYTES_4"),0);
Static(FLOAT_1) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_CSTRING("FLOAT_1"),1);
Static(FLOAT_2) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_CSTRING("FLOAT_2"),2);
Static(FLOAT_3) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_CSTRING("FLOAT_3"),3);
Static(FLOAT_4) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_CSTRING("FLOAT_4"),4);
}


} // end namespace native
} // end namespace display3D
