#include <hxcpp.h>

#ifndef INCLUDED_native_display3D_Context3DTriangleFace
#include <native/display3D/Context3DTriangleFace.h>
#endif
namespace native{
namespace display3D{

Void Context3DTriangleFace_obj::__construct()
{
	return null();
}

Context3DTriangleFace_obj::~Context3DTriangleFace_obj() { }

Dynamic Context3DTriangleFace_obj::__CreateEmpty() { return  new Context3DTriangleFace_obj; }
hx::ObjectPtr< Context3DTriangleFace_obj > Context3DTriangleFace_obj::__new()
{  hx::ObjectPtr< Context3DTriangleFace_obj > result = new Context3DTriangleFace_obj();
	result->__construct();
	return result;}

Dynamic Context3DTriangleFace_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DTriangleFace_obj > result = new Context3DTriangleFace_obj();
	result->__construct();
	return result;}

int Context3DTriangleFace_obj::BACK;

int Context3DTriangleFace_obj::FRONT;

int Context3DTriangleFace_obj::FRONT_AND_BACK;

int Context3DTriangleFace_obj::NONE;


Context3DTriangleFace_obj::Context3DTriangleFace_obj()
{
}

void Context3DTriangleFace_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DTriangleFace);
	HX_MARK_END_CLASS();
}

void Context3DTriangleFace_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Context3DTriangleFace_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { return BACK; }
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FRONT") ) { return FRONT; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { return FRONT_AND_BACK; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3DTriangleFace_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { BACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FRONT") ) { FRONT=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { FRONT_AND_BACK=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DTriangleFace_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BACK"),
	HX_CSTRING("FRONT"),
	HX_CSTRING("FRONT_AND_BACK"),
	HX_CSTRING("NONE"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_obj::NONE,"NONE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_obj::NONE,"NONE");
};

Class Context3DTriangleFace_obj::__mClass;

void Context3DTriangleFace_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.Context3DTriangleFace"), hx::TCanCast< Context3DTriangleFace_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Context3DTriangleFace_obj::__boot()
{
	BACK= (int)1028;
	FRONT= (int)1029;
	FRONT_AND_BACK= (int)1032;
	NONE= (int)0;
}

} // end namespace native
} // end namespace display3D
