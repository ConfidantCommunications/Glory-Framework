#include <hxcpp.h>

#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
#endif
#ifndef INCLUDED_native_errors_RangeError
#include <native/errors/RangeError.h>
#endif
namespace native{
namespace errors{

Void RangeError_obj::__construct(::String __o_inMessage)
{
HX_STACK_PUSH("RangeError::new","native/errors/RangeError.hx",7);
::String inMessage = __o_inMessage.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(7)
	super::__construct(inMessage,(int)0);
}
;
	return null();
}

RangeError_obj::~RangeError_obj() { }

Dynamic RangeError_obj::__CreateEmpty() { return  new RangeError_obj; }
hx::ObjectPtr< RangeError_obj > RangeError_obj::__new(::String __o_inMessage)
{  hx::ObjectPtr< RangeError_obj > result = new RangeError_obj();
	result->__construct(__o_inMessage);
	return result;}

Dynamic RangeError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RangeError_obj > result = new RangeError_obj();
	result->__construct(inArgs[0]);
	return result;}


RangeError_obj::RangeError_obj()
{
}

void RangeError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RangeError);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RangeError_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RangeError_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic RangeError_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void RangeError_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RangeError_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RangeError_obj::__mClass,"__mClass");
};

Class RangeError_obj::__mClass;

void RangeError_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.errors.RangeError"), hx::TCanCast< RangeError_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RangeError_obj::__boot()
{
}

} // end namespace native
} // end namespace errors
