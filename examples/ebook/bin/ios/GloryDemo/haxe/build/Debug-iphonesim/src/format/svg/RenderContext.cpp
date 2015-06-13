#include <hxcpp.h>

#ifndef INCLUDED_format_svg_RenderContext
#include <format/svg/RenderContext.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
namespace format{
namespace svg{

Void RenderContext_obj::__construct(::native::geom::Matrix inMatrix,::native::geom::Rectangle inRect,Dynamic inW,Dynamic inH)
{
HX_STACK_PUSH("RenderContext::new","format/svg/RenderContext.hx",9);
{
	HX_STACK_LINE(10)
	this->matrix = inMatrix;
	HX_STACK_LINE(11)
	this->rect = inRect;
	HX_STACK_LINE(12)
	this->rectW = (  (((inW != null()))) ? Dynamic(inW) : Dynamic((  (((inRect != null()))) ? Float(inRect->width) : Float((int)1) )) );
	HX_STACK_LINE(13)
	this->rectH = (  (((inH != null()))) ? Dynamic(inH) : Dynamic((  (((inRect != null()))) ? Float(inRect->height) : Float((int)1) )) );
	HX_STACK_LINE(14)
	this->firstX = (int)0;
	HX_STACK_LINE(15)
	this->firstY = (int)0;
	HX_STACK_LINE(16)
	this->lastX = (int)0;
	HX_STACK_LINE(17)
	this->lastY = (int)0;
}
;
	return null();
}

RenderContext_obj::~RenderContext_obj() { }

Dynamic RenderContext_obj::__CreateEmpty() { return  new RenderContext_obj; }
hx::ObjectPtr< RenderContext_obj > RenderContext_obj::__new(::native::geom::Matrix inMatrix,::native::geom::Rectangle inRect,Dynamic inW,Dynamic inH)
{  hx::ObjectPtr< RenderContext_obj > result = new RenderContext_obj();
	result->__construct(inMatrix,inRect,inW,inH);
	return result;}

Dynamic RenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderContext_obj > result = new RenderContext_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void RenderContext_obj::setLast( Float inX,Float inY){
{
		HX_STACK_PUSH("RenderContext::setLast","format/svg/RenderContext.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(45)
		this->lastX = this->transX(inX,inY);
		HX_STACK_LINE(46)
		this->lastY = this->transY(inX,inY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,setLast,(void))

Float RenderContext_obj::transY( Float inX,Float inY){
	HX_STACK_PUSH("RenderContext::transY","format/svg/RenderContext.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inX,"inX");
	HX_STACK_ARG(inY,"inY");
	HX_STACK_LINE(32)
	if (((bool((this->rect != null())) && bool((inY > this->rect->y))))){
		HX_STACK_LINE(33)
		if (((inY > this->rect->get_right()))){
			HX_STACK_LINE(35)
			hx::AddEq(inY,(this->rectH - this->rect->height));
		}
		else{
			HX_STACK_LINE(37)
			inY = (this->rect->y + (Float((this->rectH * ((inY - this->rect->y)))) / Float(this->rect->height)));
		}
	}
	HX_STACK_LINE(39)
	return (((inX * this->matrix->b) + (inY * this->matrix->d)) + this->matrix->ty);
}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,transY,return )

Float RenderContext_obj::transX( Float inX,Float inY){
	HX_STACK_PUSH("RenderContext::transX","format/svg/RenderContext.hx",20);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inX,"inX");
	HX_STACK_ARG(inY,"inY");
	HX_STACK_LINE(21)
	if (((bool((this->rect != null())) && bool((inX > this->rect->x))))){
		HX_STACK_LINE(22)
		if (((inX > this->rect->get_right()))){
			HX_STACK_LINE(24)
			hx::AddEq(inX,(this->rectW - this->rect->width));
		}
		else{
			HX_STACK_LINE(26)
			inX = (this->rect->x + (Float((this->rectW * ((inX - this->rect->x)))) / Float(this->rect->width)));
		}
	}
	HX_STACK_LINE(28)
	return (((inX * this->matrix->a) + (inY * this->matrix->c)) + this->matrix->tx);
}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,transX,return )


RenderContext_obj::RenderContext_obj()
{
}

void RenderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderContext);
	HX_MARK_MEMBER_NAME(lastY,"lastY");
	HX_MARK_MEMBER_NAME(lastX,"lastX");
	HX_MARK_MEMBER_NAME(firstY,"firstY");
	HX_MARK_MEMBER_NAME(firstX,"firstX");
	HX_MARK_MEMBER_NAME(rectH,"rectH");
	HX_MARK_MEMBER_NAME(rectW,"rectW");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_END_CLASS();
}

void RenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastY,"lastY");
	HX_VISIT_MEMBER_NAME(lastX,"lastX");
	HX_VISIT_MEMBER_NAME(firstY,"firstY");
	HX_VISIT_MEMBER_NAME(firstX,"firstX");
	HX_VISIT_MEMBER_NAME(rectH,"rectH");
	HX_VISIT_MEMBER_NAME(rectW,"rectW");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
}

Dynamic RenderContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lastY") ) { return lastY; }
		if (HX_FIELD_EQ(inName,"lastX") ) { return lastX; }
		if (HX_FIELD_EQ(inName,"rectH") ) { return rectH; }
		if (HX_FIELD_EQ(inName,"rectW") ) { return rectW; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"firstY") ) { return firstY; }
		if (HX_FIELD_EQ(inName,"firstX") ) { return firstX; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"transY") ) { return transY_dyn(); }
		if (HX_FIELD_EQ(inName,"transX") ) { return transX_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setLast") ) { return setLast_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::native::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lastY") ) { lastY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastX") ) { lastX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rectH") ) { rectH=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rectW") ) { rectW=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"firstY") ) { firstY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstX") ) { firstX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::native::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lastY"));
	outFields->push(HX_CSTRING("lastX"));
	outFields->push(HX_CSTRING("firstY"));
	outFields->push(HX_CSTRING("firstX"));
	outFields->push(HX_CSTRING("rectH"));
	outFields->push(HX_CSTRING("rectW"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("matrix"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("lastY"),
	HX_CSTRING("lastX"),
	HX_CSTRING("firstY"),
	HX_CSTRING("firstX"),
	HX_CSTRING("rectH"),
	HX_CSTRING("rectW"),
	HX_CSTRING("rect"),
	HX_CSTRING("matrix"),
	HX_CSTRING("setLast"),
	HX_CSTRING("transY"),
	HX_CSTRING("transX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderContext_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderContext_obj::__mClass,"__mClass");
};

Class RenderContext_obj::__mClass;

void RenderContext_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.RenderContext"), hx::TCanCast< RenderContext_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RenderContext_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
