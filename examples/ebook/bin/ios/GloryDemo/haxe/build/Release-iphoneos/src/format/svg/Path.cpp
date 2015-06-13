#include <hxcpp.h>

#ifndef INCLUDED_format_svg_FillType
#include <format/svg/FillType.h>
#endif
#ifndef INCLUDED_format_svg_Path
#include <format/svg/Path.h>
#endif
#ifndef INCLUDED_format_svg_PathSegment
#include <format/svg/PathSegment.h>
#endif
#ifndef INCLUDED_neash_display_CapsStyle
#include <neash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_neash_display_JointStyle
#include <neash/display/JointStyle.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
namespace format{
namespace svg{

Void Path_obj::__construct()
{
HX_STACK_PUSH("Path::new","format/svg/Path.hx",15);
{
}
;
	return null();
}

Path_obj::~Path_obj() { }

Dynamic Path_obj::__CreateEmpty() { return  new Path_obj; }
hx::ObjectPtr< Path_obj > Path_obj::__new()
{  hx::ObjectPtr< Path_obj > result = new Path_obj();
	result->__construct();
	return result;}

Dynamic Path_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Path_obj > result = new Path_obj();
	result->__construct();
	return result;}


Path_obj::Path_obj()
{
}

void Path_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Path);
	HX_MARK_MEMBER_NAME(segments,"segments");
	HX_MARK_MEMBER_NAME(miter_limit,"miter_limit");
	HX_MARK_MEMBER_NAME(joint_style,"joint_style");
	HX_MARK_MEMBER_NAME(stroke_caps,"stroke_caps");
	HX_MARK_MEMBER_NAME(stroke_width,"stroke_width");
	HX_MARK_MEMBER_NAME(stroke_colour,"stroke_colour");
	HX_MARK_MEMBER_NAME(stroke_alpha,"stroke_alpha");
	HX_MARK_MEMBER_NAME(fill_alpha,"fill_alpha");
	HX_MARK_MEMBER_NAME(fill,"fill");
	HX_MARK_MEMBER_NAME(font_size,"font_size");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_END_CLASS();
}

void Path_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(segments,"segments");
	HX_VISIT_MEMBER_NAME(miter_limit,"miter_limit");
	HX_VISIT_MEMBER_NAME(joint_style,"joint_style");
	HX_VISIT_MEMBER_NAME(stroke_caps,"stroke_caps");
	HX_VISIT_MEMBER_NAME(stroke_width,"stroke_width");
	HX_VISIT_MEMBER_NAME(stroke_colour,"stroke_colour");
	HX_VISIT_MEMBER_NAME(stroke_alpha,"stroke_alpha");
	HX_VISIT_MEMBER_NAME(fill_alpha,"fill_alpha");
	HX_VISIT_MEMBER_NAME(fill,"fill");
	HX_VISIT_MEMBER_NAME(font_size,"font_size");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
}

Dynamic Path_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"segments") ) { return segments; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { return font_size; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fill_alpha") ) { return fill_alpha; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"miter_limit") ) { return miter_limit; }
		if (HX_FIELD_EQ(inName,"joint_style") ) { return joint_style; }
		if (HX_FIELD_EQ(inName,"stroke_caps") ) { return stroke_caps; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stroke_width") ) { return stroke_width; }
		if (HX_FIELD_EQ(inName,"stroke_alpha") ) { return stroke_alpha; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stroke_colour") ) { return stroke_colour; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Path_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { fill=inValue.Cast< ::format::svg::FillType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::neash::geom::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"segments") ) { segments=inValue.Cast< Array< ::format::svg::PathSegment > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { font_size=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fill_alpha") ) { fill_alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"miter_limit") ) { miter_limit=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"joint_style") ) { joint_style=inValue.Cast< ::neash::display::JointStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stroke_caps") ) { stroke_caps=inValue.Cast< ::neash::display::CapsStyle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stroke_width") ) { stroke_width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stroke_alpha") ) { stroke_alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stroke_colour") ) { stroke_colour=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Path_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("segments"));
	outFields->push(HX_CSTRING("miter_limit"));
	outFields->push(HX_CSTRING("joint_style"));
	outFields->push(HX_CSTRING("stroke_caps"));
	outFields->push(HX_CSTRING("stroke_width"));
	outFields->push(HX_CSTRING("stroke_colour"));
	outFields->push(HX_CSTRING("stroke_alpha"));
	outFields->push(HX_CSTRING("fill_alpha"));
	outFields->push(HX_CSTRING("fill"));
	outFields->push(HX_CSTRING("font_size"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("matrix"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("segments"),
	HX_CSTRING("miter_limit"),
	HX_CSTRING("joint_style"),
	HX_CSTRING("stroke_caps"),
	HX_CSTRING("stroke_width"),
	HX_CSTRING("stroke_colour"),
	HX_CSTRING("stroke_alpha"),
	HX_CSTRING("fill_alpha"),
	HX_CSTRING("fill"),
	HX_CSTRING("font_size"),
	HX_CSTRING("name"),
	HX_CSTRING("matrix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

Class Path_obj::__mClass;

void Path_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.Path"), hx::TCanCast< Path_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Path_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
