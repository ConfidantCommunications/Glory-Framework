#include <hxcpp.h>

#ifndef INCLUDED_native_display3D_Context3DCompareMode
#include <native/display3D/Context3DCompareMode.h>
#endif
namespace native{
namespace display3D{

Void Context3DCompareMode_obj::__construct()
{
	return null();
}

Context3DCompareMode_obj::~Context3DCompareMode_obj() { }

Dynamic Context3DCompareMode_obj::__CreateEmpty() { return  new Context3DCompareMode_obj; }
hx::ObjectPtr< Context3DCompareMode_obj > Context3DCompareMode_obj::__new()
{  hx::ObjectPtr< Context3DCompareMode_obj > result = new Context3DCompareMode_obj();
	result->__construct();
	return result;}

Dynamic Context3DCompareMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DCompareMode_obj > result = new Context3DCompareMode_obj();
	result->__construct();
	return result;}

int Context3DCompareMode_obj::ALWAYS;

int Context3DCompareMode_obj::EQUAL;

int Context3DCompareMode_obj::GREATER;

int Context3DCompareMode_obj::GREATER_EQUAL;

int Context3DCompareMode_obj::LESS;

int Context3DCompareMode_obj::LESS_EQUAL;

int Context3DCompareMode_obj::NEVER;

int Context3DCompareMode_obj::NOT_EQUAL;


Context3DCompareMode_obj::Context3DCompareMode_obj()
{
}

void Context3DCompareMode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DCompareMode);
	HX_MARK_END_CLASS();
}

void Context3DCompareMode_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Context3DCompareMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LESS") ) { return LESS; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"EQUAL") ) { return EQUAL; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { return NEVER; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { return ALWAYS; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GREATER") ) { return GREATER; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"NOT_EQUAL") ) { return NOT_EQUAL; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LESS_EQUAL") ) { return LESS_EQUAL; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"GREATER_EQUAL") ) { return GREATER_EQUAL; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3DCompareMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"LESS") ) { LESS=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"EQUAL") ) { EQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { NEVER=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { ALWAYS=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"GREATER") ) { GREATER=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"NOT_EQUAL") ) { NOT_EQUAL=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LESS_EQUAL") ) { LESS_EQUAL=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"GREATER_EQUAL") ) { GREATER_EQUAL=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DCompareMode_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ALWAYS"),
	HX_CSTRING("EQUAL"),
	HX_CSTRING("GREATER"),
	HX_CSTRING("GREATER_EQUAL"),
	HX_CSTRING("LESS"),
	HX_CSTRING("LESS_EQUAL"),
	HX_CSTRING("NEVER"),
	HX_CSTRING("NOT_EQUAL"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DCompareMode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_obj::GREATER_EQUAL,"GREATER_EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_obj::LESS_EQUAL,"LESS_EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_obj::NOT_EQUAL,"NOT_EQUAL");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_obj::GREATER_EQUAL,"GREATER_EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_obj::LESS_EQUAL,"LESS_EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_obj::NOT_EQUAL,"NOT_EQUAL");
};

Class Context3DCompareMode_obj::__mClass;

void Context3DCompareMode_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.Context3DCompareMode"), hx::TCanCast< Context3DCompareMode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Context3DCompareMode_obj::__boot()
{
	ALWAYS= (int)519;
	EQUAL= (int)514;
	GREATER= (int)516;
	GREATER_EQUAL= (int)518;
	LESS= (int)513;
	LESS_EQUAL= (int)515;
	NEVER= (int)512;
	NOT_EQUAL= (int)517;
}

} // end namespace native
} // end namespace display3D
