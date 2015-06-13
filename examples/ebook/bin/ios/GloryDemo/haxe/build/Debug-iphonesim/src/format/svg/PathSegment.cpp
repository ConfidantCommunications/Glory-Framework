#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_svg_PathSegment
#include <format/svg/PathSegment.h>
#endif
#ifndef INCLUDED_format_svg_RenderContext
#include <format/svg/RenderContext.h>
#endif
namespace format{
namespace svg{

Void PathSegment_obj::__construct(Float inX,Float inY)
{
HX_STACK_PUSH("PathSegment::new","format/svg/PathSegment.hx",20);
{
	HX_STACK_LINE(21)
	this->x = inX;
	HX_STACK_LINE(22)
	this->y = inY;
}
;
	return null();
}

PathSegment_obj::~PathSegment_obj() { }

Dynamic PathSegment_obj::__CreateEmpty() { return  new PathSegment_obj; }
hx::ObjectPtr< PathSegment_obj > PathSegment_obj::__new(Float inX,Float inY)
{  hx::ObjectPtr< PathSegment_obj > result = new PathSegment_obj();
	result->__construct(inX,inY);
	return result;}

Dynamic PathSegment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathSegment_obj > result = new PathSegment_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void PathSegment_obj::toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext){
{
		HX_STACK_PUSH("PathSegment::toGfx","format/svg/PathSegment.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inGfx,"inGfx");
		HX_STACK_ARG(ioContext,"ioContext");
		HX_STACK_LINE(33)
		ioContext->setLast(this->x,this->y);
		HX_STACK_LINE(34)
		ioContext->firstX = ioContext->lastX;
		HX_STACK_LINE(35)
		ioContext->firstY = ioContext->lastY;
		HX_STACK_LINE(36)
		inGfx->moveTo(ioContext->lastX,ioContext->lastY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PathSegment_obj,toGfx,(void))

Float PathSegment_obj::prevCY( ){
	HX_STACK_PUSH("PathSegment::prevCY","format/svg/PathSegment.hx",29);
	HX_STACK_THIS(this);
	HX_STACK_LINE(29)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(PathSegment_obj,prevCY,return )

Float PathSegment_obj::prevCX( ){
	HX_STACK_PUSH("PathSegment::prevCX","format/svg/PathSegment.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_LINE(28)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(PathSegment_obj,prevCX,return )

Float PathSegment_obj::prevY( ){
	HX_STACK_PUSH("PathSegment::prevY","format/svg/PathSegment.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(PathSegment_obj,prevY,return )

Float PathSegment_obj::prevX( ){
	HX_STACK_PUSH("PathSegment::prevX","format/svg/PathSegment.hx",26);
	HX_STACK_THIS(this);
	HX_STACK_LINE(26)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(PathSegment_obj,prevX,return )

int PathSegment_obj::getType( ){
	HX_STACK_PUSH("PathSegment::getType","format/svg/PathSegment.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(PathSegment_obj,getType,return )

int PathSegment_obj::MOVE;

int PathSegment_obj::DRAW;

int PathSegment_obj::CURVE;

int PathSegment_obj::CUBIC;

int PathSegment_obj::ARC;


PathSegment_obj::PathSegment_obj()
{
}

void PathSegment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PathSegment);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void PathSegment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic PathSegment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ARC") ) { return ARC; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"MOVE") ) { return MOVE; }
		if (HX_FIELD_EQ(inName,"DRAW") ) { return DRAW; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CURVE") ) { return CURVE; }
		if (HX_FIELD_EQ(inName,"CUBIC") ) { return CUBIC; }
		if (HX_FIELD_EQ(inName,"toGfx") ) { return toGfx_dyn(); }
		if (HX_FIELD_EQ(inName,"prevY") ) { return prevY_dyn(); }
		if (HX_FIELD_EQ(inName,"prevX") ) { return prevX_dyn(); }
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

Dynamic PathSegment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ARC") ) { ARC=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"MOVE") ) { MOVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW") ) { DRAW=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CURVE") ) { CURVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CUBIC") ) { CUBIC=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PathSegment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MOVE"),
	HX_CSTRING("DRAW"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("CUBIC"),
	HX_CSTRING("ARC"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toGfx"),
	HX_CSTRING("prevCY"),
	HX_CSTRING("prevCX"),
	HX_CSTRING("prevY"),
	HX_CSTRING("prevX"),
	HX_CSTRING("getType"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathSegment_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PathSegment_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(PathSegment_obj::DRAW,"DRAW");
	HX_MARK_MEMBER_NAME(PathSegment_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(PathSegment_obj::CUBIC,"CUBIC");
	HX_MARK_MEMBER_NAME(PathSegment_obj::ARC,"ARC");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathSegment_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PathSegment_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(PathSegment_obj::DRAW,"DRAW");
	HX_VISIT_MEMBER_NAME(PathSegment_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(PathSegment_obj::CUBIC,"CUBIC");
	HX_VISIT_MEMBER_NAME(PathSegment_obj::ARC,"ARC");
};

Class PathSegment_obj::__mClass;

void PathSegment_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.PathSegment"), hx::TCanCast< PathSegment_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PathSegment_obj::__boot()
{
	MOVE= (int)1;
	DRAW= (int)2;
	CURVE= (int)3;
	CUBIC= (int)4;
	ARC= (int)5;
}

} // end namespace format
} // end namespace svg
