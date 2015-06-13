#include <hxcpp.h>

#ifndef INCLUDED_format_svg_DisplayElement
#include <format/svg/DisplayElement.h>
#endif
#ifndef INCLUDED_format_svg_Group
#include <format/svg/Group.h>
#endif
#ifndef INCLUDED_format_svg_Path
#include <format/svg/Path.h>
#endif
#ifndef INCLUDED_format_svg_Text
#include <format/svg/Text.h>
#endif
namespace format{
namespace svg{

::format::svg::DisplayElement  DisplayElement_obj::DisplayGroup(::format::svg::Group group)
	{ return hx::CreateEnum< DisplayElement_obj >(HX_CSTRING("DisplayGroup"),1,hx::DynamicArray(0,1).Add(group)); }

::format::svg::DisplayElement  DisplayElement_obj::DisplayPath(::format::svg::Path path)
	{ return hx::CreateEnum< DisplayElement_obj >(HX_CSTRING("DisplayPath"),0,hx::DynamicArray(0,1).Add(path)); }

::format::svg::DisplayElement  DisplayElement_obj::DisplayText(::format::svg::Text text)
	{ return hx::CreateEnum< DisplayElement_obj >(HX_CSTRING("DisplayText"),2,hx::DynamicArray(0,1).Add(text)); }

HX_DEFINE_CREATE_ENUM(DisplayElement_obj)

int DisplayElement_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DisplayGroup")) return 1;
	if (inName==HX_CSTRING("DisplayPath")) return 0;
	if (inName==HX_CSTRING("DisplayText")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisplayElement_obj,DisplayGroup,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisplayElement_obj,DisplayPath,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisplayElement_obj,DisplayText,return)

int DisplayElement_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DisplayGroup")) return 1;
	if (inName==HX_CSTRING("DisplayPath")) return 1;
	if (inName==HX_CSTRING("DisplayText")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic DisplayElement_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("DisplayGroup")) return DisplayGroup_dyn();
	if (inName==HX_CSTRING("DisplayPath")) return DisplayPath_dyn();
	if (inName==HX_CSTRING("DisplayText")) return DisplayText_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("DisplayPath"),
	HX_CSTRING("DisplayGroup"),
	HX_CSTRING("DisplayText"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayElement_obj::__mClass,"__mClass");
};

static ::String sMemberFields[] = { ::String(null()) };
Class DisplayElement_obj::__mClass;

Dynamic __Create_DisplayElement_obj() { return new DisplayElement_obj; }

void DisplayElement_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.DisplayElement"), hx::TCanCast< DisplayElement_obj >,sStaticFields,sMemberFields,
	&__Create_DisplayElement_obj, &__Create,
	&super::__SGetClass(), &CreateDisplayElement_obj, sMarkStatics, sVisitStatic);
}

void DisplayElement_obj::__boot()
{
}


} // end namespace format
} // end namespace svg
