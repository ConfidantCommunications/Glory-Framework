#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_format_svg_FillType
#include <format/svg/FillType.h>
#endif
#ifndef INCLUDED_format_svg_Grad
#include <format/svg/Grad.h>
#endif
namespace format{
namespace svg{

::format::svg::FillType  FillType_obj::FillGrad(::format::svg::Grad grad)
	{ return hx::CreateEnum< FillType_obj >(HX_CSTRING("FillGrad"),0,hx::DynamicArray(0,1).Add(grad)); }

::format::svg::FillType FillType_obj::FillNone;

::format::svg::FillType  FillType_obj::FillSolid(int colour)
	{ return hx::CreateEnum< FillType_obj >(HX_CSTRING("FillSolid"),1,hx::DynamicArray(0,1).Add(colour)); }

HX_DEFINE_CREATE_ENUM(FillType_obj)

int FillType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FillGrad")) return 0;
	if (inName==HX_CSTRING("FillNone")) return 2;
	if (inName==HX_CSTRING("FillSolid")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FillType_obj,FillGrad,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FillType_obj,FillSolid,return)

int FillType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FillGrad")) return 1;
	if (inName==HX_CSTRING("FillNone")) return 0;
	if (inName==HX_CSTRING("FillSolid")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic FillType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FillGrad")) return FillGrad_dyn();
	if (inName==HX_CSTRING("FillNone")) return FillNone;
	if (inName==HX_CSTRING("FillSolid")) return FillSolid_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("FillGrad"),
	HX_CSTRING("FillSolid"),
	HX_CSTRING("FillNone"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FillType_obj::FillNone,"FillNone");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FillType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FillType_obj::FillNone,"FillNone");
};

static ::String sMemberFields[] = { ::String(null()) };
Class FillType_obj::__mClass;

Dynamic __Create_FillType_obj() { return new FillType_obj; }

void FillType_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.FillType"), hx::TCanCast< FillType_obj >,sStaticFields,sMemberFields,
	&__Create_FillType_obj, &__Create,
	&super::__SGetClass(), &CreateFillType_obj, sMarkStatics, sVisitStatic);
}

void FillType_obj::__boot()
{
Static(FillNone) = hx::CreateEnum< FillType_obj >(HX_CSTRING("FillNone"),2);
}


} // end namespace format
} // end namespace svg
