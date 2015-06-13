#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_svg_PathSegment
#include <format/svg/PathSegment.h>
#endif
#ifndef INCLUDED_format_svg_QuadraticSegment
#include <format/svg/QuadraticSegment.h>
#endif
#ifndef INCLUDED_format_svg_RenderContext
#include <format/svg/RenderContext.h>
#endif
namespace format{
namespace svg{

Void QuadraticSegment_obj::__construct(Float inCX,Float inCY,Float inX,Float inY)
{
HX_STACK_PUSH("QuadraticSegment::new","format/svg/PathSegment.hx",66);
{
	HX_STACK_LINE(67)
	super::__construct(inX,inY);
	HX_STACK_LINE(68)
	this->cx = inCX;
	HX_STACK_LINE(69)
	this->cy = inCY;
}
;
	return null();
}

QuadraticSegment_obj::~QuadraticSegment_obj() { }

Dynamic QuadraticSegment_obj::__CreateEmpty() { return  new QuadraticSegment_obj; }
hx::ObjectPtr< QuadraticSegment_obj > QuadraticSegment_obj::__new(Float inCX,Float inCY,Float inX,Float inY)
{  hx::ObjectPtr< QuadraticSegment_obj > result = new QuadraticSegment_obj();
	result->__construct(inCX,inCY,inX,inY);
	return result;}

Dynamic QuadraticSegment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadraticSegment_obj > result = new QuadraticSegment_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

int QuadraticSegment_obj::getType( ){
	HX_STACK_PUSH("QuadraticSegment::getType","format/svg/PathSegment.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	return (int)3;
}


Void QuadraticSegment_obj::toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext){
{
		HX_STACK_PUSH("QuadraticSegment::toGfx","format/svg/PathSegment.hx",76);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inGfx,"inGfx");
		HX_STACK_ARG(ioContext,"ioContext");
		HX_STACK_LINE(77)
		ioContext->setLast(this->x,this->y);
		HX_STACK_LINE(78)
		inGfx->curveTo(ioContext->transX(this->cx,this->cy),ioContext->transY(this->cx,this->cy),ioContext->lastX,ioContext->lastY);
	}
return null();
}


Float QuadraticSegment_obj::prevCY( ){
	HX_STACK_PUSH("QuadraticSegment::prevCY","format/svg/PathSegment.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_LINE(73)
	return this->cy;
}


Float QuadraticSegment_obj::prevCX( ){
	HX_STACK_PUSH("QuadraticSegment::prevCX","format/svg/PathSegment.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return this->cx;
}



QuadraticSegment_obj::QuadraticSegment_obj()
{
}

void QuadraticSegment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuadraticSegment);
	HX_MARK_MEMBER_NAME(cy,"cy");
	HX_MARK_MEMBER_NAME(cx,"cx");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QuadraticSegment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cy,"cy");
	HX_VISIT_MEMBER_NAME(cx,"cx");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic QuadraticSegment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cy") ) { return cy; }
		if (HX_FIELD_EQ(inName,"cx") ) { return cx; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toGfx") ) { return toGfx_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prevCY") ) { return prevCY_dyn(); }
		if (HX_FIELD_EQ(inName,"prevCX") ) { return prevCX_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadraticSegment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cy") ) { cy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cx") ) { cx=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadraticSegment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cy"));
	outFields->push(HX_CSTRING("cx"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	HX_CSTRING("toGfx"),
	HX_CSTRING("prevCY"),
	HX_CSTRING("prevCX"),
	HX_CSTRING("cy"),
	HX_CSTRING("cx"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadraticSegment_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadraticSegment_obj::__mClass,"__mClass");
};

Class QuadraticSegment_obj::__mClass;

void QuadraticSegment_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.QuadraticSegment"), hx::TCanCast< QuadraticSegment_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void QuadraticSegment_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
