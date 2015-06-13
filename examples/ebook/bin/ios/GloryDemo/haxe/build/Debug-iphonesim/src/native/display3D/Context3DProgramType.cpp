#include <hxcpp.h>

#ifndef INCLUDED_native_display3D_Context3DProgramType
#include <native/display3D/Context3DProgramType.h>
#endif
namespace native{
namespace display3D{

Void Context3DProgramType_obj::__construct()
{
	return null();
}

Context3DProgramType_obj::~Context3DProgramType_obj() { }

Dynamic Context3DProgramType_obj::__CreateEmpty() { return  new Context3DProgramType_obj; }
hx::ObjectPtr< Context3DProgramType_obj > Context3DProgramType_obj::__new()
{  hx::ObjectPtr< Context3DProgramType_obj > result = new Context3DProgramType_obj();
	result->__construct();
	return result;}

Dynamic Context3DProgramType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DProgramType_obj > result = new Context3DProgramType_obj();
	result->__construct();
	return result;}

int Context3DProgramType_obj::VERTEX;

int Context3DProgramType_obj::FRAGMENT;


Context3DProgramType_obj::Context3DProgramType_obj()
{
}

void Context3DProgramType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DProgramType);
	HX_MARK_END_CLASS();
}

void Context3DProgramType_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Context3DProgramType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"VERTEX") ) { return VERTEX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FRAGMENT") ) { return FRAGMENT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3DProgramType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"VERTEX") ) { VERTEX=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FRAGMENT") ) { FRAGMENT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DProgramType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VERTEX"),
	HX_CSTRING("FRAGMENT"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DProgramType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DProgramType_obj::VERTEX,"VERTEX");
	HX_MARK_MEMBER_NAME(Context3DProgramType_obj::FRAGMENT,"FRAGMENT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::VERTEX,"VERTEX");
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::FRAGMENT,"FRAGMENT");
};

Class Context3DProgramType_obj::__mClass;

void Context3DProgramType_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.Context3DProgramType"), hx::TCanCast< Context3DProgramType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Context3DProgramType_obj::__boot()
{
	VERTEX= (int)35633;
	FRAGMENT= (int)35632;
}

} // end namespace native
} // end namespace display3D
