#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_neash_display_GradientType
#include <neash/display/GradientType.h>
#endif
#ifndef INCLUDED_neash_display_InterpolationMethod
#include <neash/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_neash_display_SpreadMethod
#include <neash/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
namespace format{
namespace gfx{

Void Gradient_obj::__construct()
{
HX_STACK_PUSH("Gradient::new","format/gfx/Gradient.hx",14);
{
	HX_STACK_LINE(15)
	this->type = ::neash::display::GradientType_obj::LINEAR_dyn();
	HX_STACK_LINE(16)
	this->colors = Array_obj< int >::__new();
	HX_STACK_LINE(17)
	this->alphas = Array_obj< Float >::__new();
	HX_STACK_LINE(18)
	this->ratios = Array_obj< int >::__new();
	HX_STACK_LINE(19)
	this->matrix = ::neash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(20)
	this->spread = ::neash::display::SpreadMethod_obj::PAD_dyn();
	HX_STACK_LINE(21)
	this->interp = ::neash::display::InterpolationMethod_obj::RGB_dyn();
	HX_STACK_LINE(22)
	this->focus = 0.0;
}
;
	return null();
}

Gradient_obj::~Gradient_obj() { }

Dynamic Gradient_obj::__CreateEmpty() { return  new Gradient_obj; }
hx::ObjectPtr< Gradient_obj > Gradient_obj::__new()
{  hx::ObjectPtr< Gradient_obj > result = new Gradient_obj();
	result->__construct();
	return result;}

Dynamic Gradient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gradient_obj > result = new Gradient_obj();
	result->__construct();
	return result;}


Gradient_obj::Gradient_obj()
{
}

void Gradient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gradient);
	HX_MARK_MEMBER_NAME(focus,"focus");
	HX_MARK_MEMBER_NAME(interp,"interp");
	HX_MARK_MEMBER_NAME(spread,"spread");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(ratios,"ratios");
	HX_MARK_MEMBER_NAME(alphas,"alphas");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void Gradient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(focus,"focus");
	HX_VISIT_MEMBER_NAME(interp,"interp");
	HX_VISIT_MEMBER_NAME(spread,"spread");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(ratios,"ratios");
	HX_VISIT_MEMBER_NAME(alphas,"alphas");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic Gradient_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return focus; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"interp") ) { return interp; }
		if (HX_FIELD_EQ(inName,"spread") ) { return spread; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"ratios") ) { return ratios; }
		if (HX_FIELD_EQ(inName,"alphas") ) { return alphas; }
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Gradient_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::neash::display::GradientType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { focus=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"interp") ) { interp=inValue.Cast< ::neash::display::InterpolationMethod >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spread") ) { spread=inValue.Cast< ::neash::display::SpreadMethod >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::neash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratios") ) { ratios=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphas") ) { alphas=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Gradient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("focus"));
	outFields->push(HX_CSTRING("interp"));
	outFields->push(HX_CSTRING("spread"));
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("ratios"));
	outFields->push(HX_CSTRING("alphas"));
	outFields->push(HX_CSTRING("colors"));
	outFields->push(HX_CSTRING("type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("focus"),
	HX_CSTRING("interp"),
	HX_CSTRING("spread"),
	HX_CSTRING("matrix"),
	HX_CSTRING("ratios"),
	HX_CSTRING("alphas"),
	HX_CSTRING("colors"),
	HX_CSTRING("type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gradient_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gradient_obj::__mClass,"__mClass");
};

Class Gradient_obj::__mClass;

void Gradient_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.Gradient"), hx::TCanCast< Gradient_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Gradient_obj::__boot()
{
}

} // end namespace format
} // end namespace gfx
