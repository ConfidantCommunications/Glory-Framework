#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_GfxGraphics
#include <format/gfx/GfxGraphics.h>
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
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
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

Void GfxGraphics_obj::__construct(::native::display::Graphics inGraphics)
{
HX_STACK_PUSH("GfxGraphics::new","format/gfx/GfxGraphics.hx",18);
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	this->graphics = inGraphics;
}
;
	return null();
}

GfxGraphics_obj::~GfxGraphics_obj() { }

Dynamic GfxGraphics_obj::__CreateEmpty() { return  new GfxGraphics_obj; }
hx::ObjectPtr< GfxGraphics_obj > GfxGraphics_obj::__new(::native::display::Graphics inGraphics)
{  hx::ObjectPtr< GfxGraphics_obj > result = new GfxGraphics_obj();
	result->__construct(inGraphics);
	return result;}

Dynamic GfxGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GfxGraphics_obj > result = new GfxGraphics_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GfxGraphics_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_PUSH("GfxGraphics::curveTo","format/gfx/GfxGraphics.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inCX,"inCX");
		HX_STACK_ARG(inCY,"inCY");
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(40)
		this->graphics->curveTo(inCX,inCY,inX,inY);
	}
return null();
}


Void GfxGraphics_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_PUSH("GfxGraphics::lineTo","format/gfx/GfxGraphics.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(38)
		this->graphics->lineTo(inX,inY);
	}
return null();
}


Void GfxGraphics_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_PUSH("GfxGraphics::moveTo","format/gfx/GfxGraphics.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(37)
		this->graphics->moveTo(inX,inY);
	}
return null();
}


Void GfxGraphics_obj::endLineStyle( ){
{
		HX_STACK_PUSH("GfxGraphics::endLineStyle","format/gfx/GfxGraphics.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_LINE(35)
		this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
	}
return null();
}


Void GfxGraphics_obj::lineStyle( ::format::gfx::LineStyle style){
{
		HX_STACK_PUSH("GfxGraphics::lineStyle","format/gfx/GfxGraphics.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_ARG(style,"style");
		HX_STACK_LINE(32)
		this->graphics->lineStyle(style->thickness,style->color,style->alpha,style->pixelHinting,style->scaleMode,style->capsStyle,style->jointStyle,style->miterLimit);
	}
return null();
}


Void GfxGraphics_obj::endFill( ){
{
		HX_STACK_PUSH("GfxGraphics::endFill","format/gfx/GfxGraphics.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_LINE(29)
		this->graphics->endFill();
	}
return null();
}


Void GfxGraphics_obj::beginFill( int color,Float alpha){
{
		HX_STACK_PUSH("GfxGraphics::beginFill","format/gfx/GfxGraphics.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_ARG(color,"color");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(28)
		this->graphics->beginFill(color,alpha);
	}
return null();
}


Void GfxGraphics_obj::beginGradientFill( ::format::gfx::Gradient grad){
{
		HX_STACK_PUSH("GfxGraphics::beginGradientFill","format/gfx/GfxGraphics.hx",24);
		HX_STACK_THIS(this);
		HX_STACK_ARG(grad,"grad");
		HX_STACK_LINE(24)
		this->graphics->beginGradientFill(grad->type,grad->colors,grad->alphas,grad->ratios,grad->matrix,grad->spread,grad->interp,grad->focus);
	}
return null();
}



GfxGraphics_obj::GfxGraphics_obj()
{
}

void GfxGraphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GfxGraphics);
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GfxGraphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GfxGraphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endLineStyle") ) { return endLineStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GfxGraphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::native::display::Graphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GfxGraphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("graphics"));
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
	HX_CSTRING("graphics"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GfxGraphics_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GfxGraphics_obj::__mClass,"__mClass");
};

Class GfxGraphics_obj::__mClass;

void GfxGraphics_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.GfxGraphics"), hx::TCanCast< GfxGraphics_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GfxGraphics_obj::__boot()
{
}

} // end namespace format
} // end namespace gfx
