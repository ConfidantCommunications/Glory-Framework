#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_GfxExtent
#include <format/gfx/GfxExtent.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
namespace format{
namespace gfx{

Void GfxExtent_obj::__construct()
{
HX_STACK_PUSH("GfxExtent::new","format/gfx/GfxExtent.hx",11);
{
	HX_STACK_LINE(12)
	super::__construct();
	HX_STACK_LINE(13)
	this->extent = null();
}
;
	return null();
}

GfxExtent_obj::~GfxExtent_obj() { }

Dynamic GfxExtent_obj::__CreateEmpty() { return  new GfxExtent_obj; }
hx::ObjectPtr< GfxExtent_obj > GfxExtent_obj::__new()
{  hx::ObjectPtr< GfxExtent_obj > result = new GfxExtent_obj();
	result->__construct();
	return result;}

Dynamic GfxExtent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GfxExtent_obj > result = new GfxExtent_obj();
	result->__construct();
	return result;}

Void GfxExtent_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_PUSH("GfxExtent::curveTo","format/gfx/GfxExtent.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inCX,"inCX");
		HX_STACK_ARG(inCY,"inCY");
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(41)
		this->addExtent(inCX,inCY);
		HX_STACK_LINE(42)
		this->addExtent(inX,inY);
	}
return null();
}


Void GfxExtent_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_PUSH("GfxExtent::lineTo","format/gfx/GfxExtent.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(36)
		this->addExtent(inX,inY);
	}
return null();
}


Void GfxExtent_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_PUSH("GfxExtent::moveTo","format/gfx/GfxExtent.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(32)
		this->addExtent(inX,inY);
	}
return null();
}


bool GfxExtent_obj::geometryOnly( ){
	HX_STACK_PUSH("GfxExtent::geometryOnly","format/gfx/GfxExtent.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_LINE(30)
	return true;
}


Void GfxExtent_obj::addExtent( Float inX,Float inY){
{
		HX_STACK_PUSH("GfxExtent::addExtent","format/gfx/GfxExtent.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(18)
		if (((this->extent == null()))){
			HX_STACK_LINE(20)
			this->extent = ::neash::geom::Rectangle_obj::__new(inX,inY,(int)0,(int)0);
			HX_STACK_LINE(21)
			return null();
		}
		HX_STACK_LINE(23)
		if (((inX < this->extent->nmeGetLeft()))){
			HX_STACK_LINE(23)
			this->extent->nmeSetLeft(inX);
		}
		HX_STACK_LINE(24)
		if (((inX > this->extent->nmeGetRight()))){
			HX_STACK_LINE(24)
			this->extent->nmeSetRight(inX);
		}
		HX_STACK_LINE(25)
		if (((inY < this->extent->nmeGetTop()))){
			HX_STACK_LINE(25)
			this->extent->nmeSetTop(inY);
		}
		HX_STACK_LINE(26)
		if (((inY > this->extent->nmeGetBottom()))){
			HX_STACK_LINE(26)
			this->extent->nmeSetBottom(inY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GfxExtent_obj,addExtent,(void))


GfxExtent_obj::GfxExtent_obj()
{
}

void GfxExtent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GfxExtent);
	HX_MARK_MEMBER_NAME(extent,"extent");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GfxExtent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(extent,"extent");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GfxExtent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"extent") ) { return extent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addExtent") ) { return addExtent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"geometryOnly") ) { return geometryOnly_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GfxExtent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"extent") ) { extent=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GfxExtent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("extent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("curveTo"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("geometryOnly"),
	HX_CSTRING("addExtent"),
	HX_CSTRING("extent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GfxExtent_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GfxExtent_obj::__mClass,"__mClass");
};

Class GfxExtent_obj::__mClass;

void GfxExtent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.GfxExtent"), hx::TCanCast< GfxExtent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GfxExtent_obj::__boot()
{
}

} // end namespace format
} // end namespace gfx
