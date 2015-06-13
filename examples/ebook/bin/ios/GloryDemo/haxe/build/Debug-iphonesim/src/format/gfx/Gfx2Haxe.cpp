#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_Gfx2Haxe
#include <format/gfx/Gfx2Haxe.h>
#endif
#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_format_gfx_LineStyle
#include <format/gfx/LineStyle.h>
#endif
#ifndef INCLUDED_native_display_CapsStyle
#include <native/display/CapsStyle.h>
#endif
#ifndef INCLUDED_native_display_GradientType
#include <native/display/GradientType.h>
#endif
#ifndef INCLUDED_native_display_InterpolationMethod
#include <native/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_native_display_JointStyle
#include <native/display/JointStyle.h>
#endif
#ifndef INCLUDED_native_display_LineScaleMode
#include <native/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_native_display_SpreadMethod
#include <native/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
namespace format{
namespace gfx{

Void Gfx2Haxe_obj::__construct()
{
HX_STACK_PUSH("Gfx2Haxe::new","format/gfx/Gfx2Haxe.hx",17);
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(19)
	this->commands = Array_obj< ::String >::__new();
}
;
	return null();
}

Gfx2Haxe_obj::~Gfx2Haxe_obj() { }

Dynamic Gfx2Haxe_obj::__CreateEmpty() { return  new Gfx2Haxe_obj; }
hx::ObjectPtr< Gfx2Haxe_obj > Gfx2Haxe_obj::__new()
{  hx::ObjectPtr< Gfx2Haxe_obj > result = new Gfx2Haxe_obj();
	result->__construct();
	return result;}

Dynamic Gfx2Haxe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gfx2Haxe_obj > result = new Gfx2Haxe_obj();
	result->__construct();
	return result;}

Void Gfx2Haxe_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_PUSH("Gfx2Haxe::curveTo","format/gfx/Gfx2Haxe.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inCX,"inCX");
		HX_STACK_ARG(inCY,"inCY");
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(64)
		this->commands->push(((((((((HX_CSTRING("g.curveTo(") + inCX) + HX_CSTRING(",")) + inCY) + HX_CSTRING(",")) + inX) + HX_CSTRING(",")) + inY) + HX_CSTRING(");")));
	}
return null();
}


Void Gfx2Haxe_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_PUSH("Gfx2Haxe::lineTo","format/gfx/Gfx2Haxe.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(62)
		this->commands->push(((((HX_CSTRING("g.lineTo(") + inX) + HX_CSTRING(",")) + inY) + HX_CSTRING(");")));
	}
return null();
}


Void Gfx2Haxe_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_PUSH("Gfx2Haxe::moveTo","format/gfx/Gfx2Haxe.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(60)
		this->commands->push(((((HX_CSTRING("g.moveTo(") + inX) + HX_CSTRING(",")) + inY) + HX_CSTRING(");")));
	}
return null();
}


Void Gfx2Haxe_obj::endLineStyle( ){
{
		HX_STACK_PUSH("Gfx2Haxe::endLineStyle","format/gfx/Gfx2Haxe.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_LINE(57)
		this->commands->push(HX_CSTRING("g.lineStyle();"));
	}
return null();
}


Void Gfx2Haxe_obj::lineStyle( ::format::gfx::LineStyle style){
{
		HX_STACK_PUSH("Gfx2Haxe::lineStyle","format/gfx/Gfx2Haxe.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_ARG(style,"style");
		HX_STACK_LINE(51)
		this->commands->push((((((((((((((((HX_CSTRING("g.lineStyle(") + this->f2a(style->thickness)) + HX_CSTRING(",")) + style->color) + HX_CSTRING(",")) + this->f2a(style->alpha)) + HX_CSTRING(",")) + ::Std_obj::string(style->pixelHinting)) + HX_CSTRING(",")) + ::Std_obj::string(style->scaleMode)) + HX_CSTRING(",")) + ::Std_obj::string(style->capsStyle)) + HX_CSTRING(",")) + ::Std_obj::string(style->jointStyle)) + HX_CSTRING(",")) + this->f2a(style->miterLimit)));
	}
return null();
}


Void Gfx2Haxe_obj::endFill( ){
{
		HX_STACK_PUSH("Gfx2Haxe::endFill","format/gfx/Gfx2Haxe.hx",47);
		HX_STACK_THIS(this);
		HX_STACK_LINE(47)
		this->commands->push(HX_CSTRING("g.endFill();"));
	}
return null();
}


Void Gfx2Haxe_obj::beginFill( int color,Float alpha){
{
		HX_STACK_PUSH("Gfx2Haxe::beginFill","format/gfx/Gfx2Haxe.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_ARG(color,"color");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(44)
		this->commands->push(((((HX_CSTRING("g.beginFill(") + color) + HX_CSTRING(",")) + this->f2a(alpha)) + HX_CSTRING(");")));
	}
return null();
}


Void Gfx2Haxe_obj::beginGradientFill( ::format::gfx::Gradient grad){
{
		HX_STACK_PUSH("Gfx2Haxe::beginGradientFill","format/gfx/Gfx2Haxe.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_ARG(grad,"grad");
		HX_STACK_LINE(37)
		this->commands->push(((((((((((((((((HX_CSTRING("g.beginGradientFill(") + ::Std_obj::string(grad->type)) + HX_CSTRING(",")) + ::Std_obj::string(grad->colors)) + HX_CSTRING(",")) + ::Std_obj::string(grad->alphas)) + HX_CSTRING(",")) + ::Std_obj::string(grad->ratios)) + HX_CSTRING(",")) + this->newMatrix(grad->matrix)) + HX_CSTRING(",")) + ::Std_obj::string(grad->spread)) + HX_CSTRING(",")) + ::Std_obj::string(grad->interp)) + HX_CSTRING(",")) + grad->focus) + HX_CSTRING(");")));
	}
return null();
}


::String Gfx2Haxe_obj::newMatrix( ::native::geom::Matrix m){
	HX_STACK_PUSH("Gfx2Haxe::newMatrix","format/gfx/Gfx2Haxe.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_ARG(m,"m");
	HX_STACK_LINE(31)
	return ((((((((((((HX_CSTRING("new Matrix(") + this->f2a(m->a)) + HX_CSTRING(",")) + this->f2a(m->b)) + HX_CSTRING(",")) + this->f2a(m->c)) + HX_CSTRING(",")) + this->f2a(m->d)) + HX_CSTRING(",")) + this->f2a(m->tx)) + HX_CSTRING(",")) + this->f2a(m->ty)) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC1(Gfx2Haxe_obj,newMatrix,return )

::String Gfx2Haxe_obj::f2a( Float f){
	HX_STACK_PUSH("Gfx2Haxe::f2a","format/gfx/Gfx2Haxe.hx",23);
	HX_STACK_THIS(this);
	HX_STACK_ARG(f,"f");
	HX_STACK_LINE(24)
	if (((::Math_obj::abs(f) < 0.000001))){
		HX_STACK_LINE(24)
		return HX_CSTRING("0");
	}
	HX_STACK_LINE(25)
	if (((::Math_obj::abs(((int)1 - f)) < 0.000001))){
		HX_STACK_LINE(25)
		return HX_CSTRING("1");
	}
	HX_STACK_LINE(26)
	return (f + HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC1(Gfx2Haxe_obj,f2a,return )


Gfx2Haxe_obj::Gfx2Haxe_obj()
{
}

void Gfx2Haxe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gfx2Haxe);
	HX_MARK_MEMBER_NAME(commands,"commands");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Gfx2Haxe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Gfx2Haxe_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"f2a") ) { return f2a_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return commands; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"newMatrix") ) { return newMatrix_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endLineStyle") ) { return endLineStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Gfx2Haxe_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Gfx2Haxe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("commands"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("curveTo"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("endLineStyle"),
	HX_CSTRING("lineStyle"),
	HX_CSTRING("endFill"),
	HX_CSTRING("beginFill"),
	HX_CSTRING("beginGradientFill"),
	HX_CSTRING("newMatrix"),
	HX_CSTRING("f2a"),
	HX_CSTRING("commands"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gfx2Haxe_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gfx2Haxe_obj::__mClass,"__mClass");
};

Class Gfx2Haxe_obj::__mClass;

void Gfx2Haxe_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.Gfx2Haxe"), hx::TCanCast< Gfx2Haxe_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Gfx2Haxe_obj::__boot()
{
}

} // end namespace format
} // end namespace gfx
