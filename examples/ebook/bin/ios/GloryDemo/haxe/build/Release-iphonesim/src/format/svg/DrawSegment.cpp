#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_svg_DrawSegment
#include <format/svg/DrawSegment.h>
#endif
#ifndef INCLUDED_format_svg_PathSegment
#include <format/svg/PathSegment.h>
#endif
#ifndef INCLUDED_format_svg_RenderContext
#include <format/svg/RenderContext.h>
#endif
namespace format{
namespace svg{

Void DrawSegment_obj::__construct(Float inX,Float inY)
{
HX_STACK_PUSH("DrawSegment::new","format/svg/PathSegment.hx",50);
{
	HX_STACK_LINE(50)
	super::__construct(inX,inY);
}
;
	return null();
}

DrawSegment_obj::~DrawSegment_obj() { }

Dynamic DrawSegment_obj::__CreateEmpty() { return  new DrawSegment_obj; }
hx::ObjectPtr< DrawSegment_obj > DrawSegment_obj::__new(Float inX,Float inY)
{  hx::ObjectPtr< DrawSegment_obj > result = new DrawSegment_obj();
	result->__construct(inX,inY);
	return result;}

Dynamic DrawSegment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawSegment_obj > result = new DrawSegment_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int DrawSegment_obj::getType( ){
	HX_STACK_PUSH("DrawSegment::getType","format/svg/PathSegment.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_LINE(57)
	return (int)2;
}


Void DrawSegment_obj::toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext){
{
		HX_STACK_PUSH("DrawSegment::toGfx","format/svg/PathSegment.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inGfx,"inGfx");
		HX_STACK_ARG(ioContext,"ioContext");
		HX_STACK_LINE(53)
		ioContext->setLast(this->x,this->y);
		HX_STACK_LINE(54)
		inGfx->lineTo(ioContext->lastX,ioContext->lastY);
	}
return null();
}



DrawSegment_obj::DrawSegment_obj()
{
}

void DrawSegment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawSegment);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DrawSegment_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DrawSegment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toGfx") ) { return toGfx_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawSegment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawSegment_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	HX_CSTRING("toGfx"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawSegment_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawSegment_obj::__mClass,"__mClass");
};

Class DrawSegment_obj::__mClass;

void DrawSegment_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.DrawSegment"), hx::TCanCast< DrawSegment_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DrawSegment_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
