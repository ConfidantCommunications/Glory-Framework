#include <hxcpp.h>

#ifndef INCLUDED_native_display3D_Context3DClearMask
#include <native/display3D/Context3DClearMask.h>
#endif
namespace native{
namespace display3D{

Void Context3DClearMask_obj::__construct()
{
	return null();
}

Context3DClearMask_obj::~Context3DClearMask_obj() { }

Dynamic Context3DClearMask_obj::__CreateEmpty() { return  new Context3DClearMask_obj; }
hx::ObjectPtr< Context3DClearMask_obj > Context3DClearMask_obj::__new()
{  hx::ObjectPtr< Context3DClearMask_obj > result = new Context3DClearMask_obj();
	result->__construct();
	return result;}

Dynamic Context3DClearMask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DClearMask_obj > result = new Context3DClearMask_obj();
	result->__construct();
	return result;}

int Context3DClearMask_obj::ALL;

int Context3DClearMask_obj::COLOR;

int Context3DClearMask_obj::DEPTH;

int Context3DClearMask_obj::STENCIL;


Context3DClearMask_obj::Context3DClearMask_obj()
{
}

void Context3DClearMask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DClearMask);
	HX_MARK_END_CLASS();
}

void Context3DClearMask_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Context3DClearMask_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ALL") ) { return ALL; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"COLOR") ) { return COLOR; }
		if (HX_FIELD_EQ(inName,"DEPTH") ) { return DEPTH; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"STENCIL") ) { return STENCIL; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3DClearMask_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ALL") ) { ALL=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"COLOR") ) { COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH") ) { DEPTH=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"STENCIL") ) { STENCIL=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DClearMask_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ALL"),
	HX_CSTRING("COLOR"),
	HX_CSTRING("DEPTH"),
	HX_CSTRING("STENCIL"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::ALL,"ALL");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::COLOR,"COLOR");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::DEPTH,"DEPTH");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::STENCIL,"STENCIL");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::ALL,"ALL");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::COLOR,"COLOR");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::DEPTH,"DEPTH");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::STENCIL,"STENCIL");
};

Class Context3DClearMask_obj::__mClass;

void Context3DClearMask_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.Context3DClearMask"), hx::TCanCast< Context3DClearMask_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Context3DClearMask_obj::__boot()
{
	ALL= (int)17664;
	COLOR= (int)16384;
	DEPTH= (int)256;
	STENCIL= (int)1024;
}

} // end namespace native
} // end namespace display3D
