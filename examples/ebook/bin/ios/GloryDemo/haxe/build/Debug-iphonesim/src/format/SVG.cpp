#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_format_SVG
#include <format/SVG.h>
#endif
#ifndef INCLUDED_format_svg_Group
#include <format/svg/Group.h>
#endif
#ifndef INCLUDED_format_svg_SVGData
#include <format/svg/SVGData.h>
#endif
#ifndef INCLUDED_format_svg_SVGRenderer
#include <format/svg/SVGRenderer.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
namespace format{

Void SVG_obj::__construct(::String content)
{
HX_STACK_PUSH("SVG::new","format/SVG.hx",17);
{
	HX_STACK_LINE(17)
	this->data = ::format::svg::SVGData_obj::__new(::Xml_obj::parse(content),null());
}
;
	return null();
}

SVG_obj::~SVG_obj() { }

Dynamic SVG_obj::__CreateEmpty() { return  new SVG_obj; }
hx::ObjectPtr< SVG_obj > SVG_obj::__new(::String content)
{  hx::ObjectPtr< SVG_obj > result = new SVG_obj();
	result->__construct(content);
	return result;}

Dynamic SVG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SVG_obj > result = new SVG_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SVG_obj::render( ::native::display::Graphics graphics,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int width = __o_width.Default(-1);
int height = __o_height.Default(-1);
	HX_STACK_PUSH("SVG::render","format/SVG.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphics,"graphics");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
{
		HX_STACK_LINE(26)
		::native::geom::Matrix matrix = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(27)
		matrix->identity();
		HX_STACK_LINE(28)
		matrix->translate(x,y);
		HX_STACK_LINE(30)
		if (((bool((width > (int)-1)) && bool((height > (int)-1))))){
			HX_STACK_LINE(30)
			matrix->scale((Float(width) / Float(this->data->width)),(Float(height) / Float(this->data->height)));
		}
		HX_STACK_LINE(36)
		::format::svg::SVGRenderer renderer = ::format::svg::SVGRenderer_obj::__new(this->data,null());		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(37)
		renderer->render(graphics,matrix,null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(SVG_obj,render,(void))


SVG_obj::SVG_obj()
{
}

void SVG_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SVG);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void SVG_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic SVG_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SVG_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::format::svg::SVGData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SVG_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SVG_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SVG_obj::__mClass,"__mClass");
};

Class SVG_obj::__mClass;

void SVG_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.SVG"), hx::TCanCast< SVG_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SVG_obj::__boot()
{
}

} // end namespace format
