#include <hxcpp.h>

#ifndef INCLUDED_format_svg_FillType
#include <format/svg/FillType.h>
#endif
#ifndef INCLUDED_format_svg_Text
#include <format/svg/Text.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
namespace format{
namespace svg{

Void Text_obj::__construct()
{
HX_STACK_PUSH("Text::new","format/svg/Text.hx",8);
{
}
;
	return null();
}

Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new()
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct();
	return result;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct();
	return result;}


Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(letter_spacing,"letter_spacing");
	HX_MARK_MEMBER_NAME(kerning,"kerning");
	HX_MARK_MEMBER_NAME(font_size,"font_size");
	HX_MARK_MEMBER_NAME(font_family,"font_family");
	HX_MARK_MEMBER_NAME(stroke_width,"stroke_width");
	HX_MARK_MEMBER_NAME(stroke_colour,"stroke_colour");
	HX_MARK_MEMBER_NAME(stroke_alpha,"stroke_alpha");
	HX_MARK_MEMBER_NAME(fill_alpha,"fill_alpha");
	HX_MARK_MEMBER_NAME(fill,"fill");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(letter_spacing,"letter_spacing");
	HX_VISIT_MEMBER_NAME(kerning,"kerning");
	HX_VISIT_MEMBER_NAME(font_size,"font_size");
	HX_VISIT_MEMBER_NAME(font_family,"font_family");
	HX_VISIT_MEMBER_NAME(stroke_width,"stroke_width");
	HX_VISIT_MEMBER_NAME(stroke_colour,"stroke_colour");
	HX_VISIT_MEMBER_NAME(stroke_alpha,"stroke_alpha");
	HX_VISIT_MEMBER_NAME(fill_alpha,"fill_alpha");
	HX_VISIT_MEMBER_NAME(fill,"fill");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Text_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { return kerning; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { return font_size; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fill_alpha") ) { return fill_alpha; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"font_family") ) { return font_family; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stroke_width") ) { return stroke_width; }
		if (HX_FIELD_EQ(inName,"stroke_alpha") ) { return stroke_alpha; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stroke_colour") ) { return stroke_colour; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { return letter_spacing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { fill=inValue.Cast< ::format::svg::FillType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::neash::geom::Matrix >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { kerning=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"font_size") ) { font_size=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fill_alpha") ) { fill_alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"font_family") ) { font_family=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"stroke_width") ) { stroke_width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stroke_alpha") ) { stroke_alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stroke_colour") ) { stroke_colour=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"letter_spacing") ) { letter_spacing=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("letter_spacing"));
	outFields->push(HX_CSTRING("kerning"));
	outFields->push(HX_CSTRING("font_size"));
	outFields->push(HX_CSTRING("font_family"));
	outFields->push(HX_CSTRING("stroke_width"));
	outFields->push(HX_CSTRING("stroke_colour"));
	outFields->push(HX_CSTRING("stroke_alpha"));
	outFields->push(HX_CSTRING("fill_alpha"));
	outFields->push(HX_CSTRING("fill"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("letter_spacing"),
	HX_CSTRING("kerning"),
	HX_CSTRING("font_size"),
	HX_CSTRING("font_family"),
	HX_CSTRING("stroke_width"),
	HX_CSTRING("stroke_colour"),
	HX_CSTRING("stroke_alpha"),
	HX_CSTRING("fill_alpha"),
	HX_CSTRING("fill"),
	HX_CSTRING("text"),
	HX_CSTRING("matrix"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

Class Text_obj::__mClass;

void Text_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.Text"), hx::TCanCast< Text_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Text_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
