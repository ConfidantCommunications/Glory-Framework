#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_format_gfx_LineStyle
#include <format/gfx/LineStyle.h>
#endif
#ifndef INCLUDED_format_svg_Text
#include <format/svg/Text.h>
#endif
namespace format{
namespace gfx{

Void Gfx_obj::__construct()
{
HX_STACK_PUSH("Gfx::new","format/gfx/Gfx.hx",15);
{
}
;
	return null();
}

Gfx_obj::~Gfx_obj() { }

Dynamic Gfx_obj::__CreateEmpty() { return  new Gfx_obj; }
hx::ObjectPtr< Gfx_obj > Gfx_obj::__new()
{  hx::ObjectPtr< Gfx_obj > result = new Gfx_obj();
	result->__construct();
	return result;}

Dynamic Gfx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gfx_obj > result = new Gfx_obj();
	result->__construct();
	return result;}

Void Gfx_obj::eof( ){
{
		HX_STACK_PUSH("Gfx::eof","format/gfx/Gfx.hx",32);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,eof,(void))

Void Gfx_obj::renderText( ::format::svg::Text text){
{
		HX_STACK_PUSH("Gfx::renderText","format/gfx/Gfx.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_ARG(text,"text");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,renderText,(void))

Void Gfx_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_PUSH("Gfx::curveTo","format/gfx/Gfx.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inCX,"inCX");
		HX_STACK_ARG(inCY,"inCY");
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Gfx_obj,curveTo,(void))

Void Gfx_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_PUSH("Gfx::lineTo","format/gfx/Gfx.hx",27);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,lineTo,(void))

Void Gfx_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_PUSH("Gfx::moveTo","format/gfx/Gfx.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,moveTo,(void))

Void Gfx_obj::endLineStyle( ){
{
		HX_STACK_PUSH("Gfx::endLineStyle","format/gfx/Gfx.hx",24);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,endLineStyle,(void))

Void Gfx_obj::lineStyle( ::format::gfx::LineStyle style){
{
		HX_STACK_PUSH("Gfx::lineStyle","format/gfx/Gfx.hx",23);
		HX_STACK_THIS(this);
		HX_STACK_ARG(style,"style");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,lineStyle,(void))

Void Gfx_obj::endFill( ){
{
		HX_STACK_PUSH("Gfx::endFill","format/gfx/Gfx.hx",21);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,endFill,(void))

Void Gfx_obj::beginFill( int color,Float alpha){
{
		HX_STACK_PUSH("Gfx::beginFill","format/gfx/Gfx.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_ARG(color,"color");
		HX_STACK_ARG(alpha,"alpha");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,beginFill,(void))

Void Gfx_obj::beginGradientFill( ::format::gfx::Gradient grad){
{
		HX_STACK_PUSH("Gfx::beginGradientFill","format/gfx/Gfx.hx",18);
		HX_STACK_THIS(this);
		HX_STACK_ARG(grad,"grad");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,beginGradientFill,(void))

Void Gfx_obj::size( Float inWidth,Float inHeight){
{
		HX_STACK_PUSH("Gfx::size","format/gfx/Gfx.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inWidth,"inWidth");
		HX_STACK_ARG(inHeight,"inHeight");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,size,(void))

bool Gfx_obj::geometryOnly( ){
	HX_STACK_PUSH("Gfx::geometryOnly","format/gfx/Gfx.hx",16);
	HX_STACK_THIS(this);
	HX_STACK_LINE(16)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,geometryOnly,return )


Gfx_obj::Gfx_obj()
{
}

void Gfx_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gfx);
	HX_MARK_END_CLASS();
}

void Gfx_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Gfx_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"eof") ) { return eof_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderText") ) { return renderText_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endLineStyle") ) { return endLineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"geometryOnly") ) { return geometryOnly_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Gfx_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Gfx_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("eof"),
	HX_CSTRING("renderText"),
	HX_CSTRING("curveTo"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("endLineStyle"),
	HX_CSTRING("lineStyle"),
	HX_CSTRING("endFill"),
	HX_CSTRING("beginFill"),
	HX_CSTRING("beginGradientFill"),
	HX_CSTRING("size"),
	HX_CSTRING("geometryOnly"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gfx_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gfx_obj::__mClass,"__mClass");
};

Class Gfx_obj::__mClass;

void Gfx_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.Gfx"), hx::TCanCast< Gfx_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Gfx_obj::__boot()
{
}

} // end namespace format
} // end namespace gfx
