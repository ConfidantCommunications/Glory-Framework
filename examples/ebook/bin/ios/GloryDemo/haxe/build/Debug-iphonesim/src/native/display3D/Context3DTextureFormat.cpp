#include <hxcpp.h>

#ifndef INCLUDED_native_display3D_Context3DTextureFormat
#include <native/display3D/Context3DTextureFormat.h>
#endif
namespace native{
namespace display3D{

::native::display3D::Context3DTextureFormat Context3DTextureFormat_obj::BGRA;

::native::display3D::Context3DTextureFormat Context3DTextureFormat_obj::COMPRESSED;

::native::display3D::Context3DTextureFormat Context3DTextureFormat_obj::COMPRESSED_ALPHA;

HX_DEFINE_CREATE_ENUM(Context3DTextureFormat_obj)

int Context3DTextureFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BGRA")) return 0;
	if (inName==HX_CSTRING("COMPRESSED")) return 1;
	if (inName==HX_CSTRING("COMPRESSED_ALPHA")) return 2;
	return super::__FindIndex(inName);
}

int Context3DTextureFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BGRA")) return 0;
	if (inName==HX_CSTRING("COMPRESSED")) return 0;
	if (inName==HX_CSTRING("COMPRESSED_ALPHA")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DTextureFormat_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BGRA")) return BGRA;
	if (inName==HX_CSTRING("COMPRESSED")) return COMPRESSED;
	if (inName==HX_CSTRING("COMPRESSED_ALPHA")) return COMPRESSED_ALPHA;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("BGRA"),
	HX_CSTRING("COMPRESSED"),
	HX_CSTRING("COMPRESSED_ALPHA"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTextureFormat_obj::BGRA,"BGRA");
	HX_MARK_MEMBER_NAME(Context3DTextureFormat_obj::COMPRESSED,"COMPRESSED");
	HX_MARK_MEMBER_NAME(Context3DTextureFormat_obj::COMPRESSED_ALPHA,"COMPRESSED_ALPHA");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTextureFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTextureFormat_obj::BGRA,"BGRA");
	HX_VISIT_MEMBER_NAME(Context3DTextureFormat_obj::COMPRESSED,"COMPRESSED");
	HX_VISIT_MEMBER_NAME(Context3DTextureFormat_obj::COMPRESSED_ALPHA,"COMPRESSED_ALPHA");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Context3DTextureFormat_obj::__mClass;

Dynamic __Create_Context3DTextureFormat_obj() { return new Context3DTextureFormat_obj; }

void Context3DTextureFormat_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.Context3DTextureFormat"), hx::TCanCast< Context3DTextureFormat_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DTextureFormat_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DTextureFormat_obj, sMarkStatics, sVisitStatic);
}

void Context3DTextureFormat_obj::__boot()
{
Static(BGRA) = hx::CreateEnum< Context3DTextureFormat_obj >(HX_CSTRING("BGRA"),0);
Static(COMPRESSED) = hx::CreateEnum< Context3DTextureFormat_obj >(HX_CSTRING("COMPRESSED"),1);
Static(COMPRESSED_ALPHA) = hx::CreateEnum< Context3DTextureFormat_obj >(HX_CSTRING("COMPRESSED_ALPHA"),2);
}


} // end namespace native
} // end namespace display3D
