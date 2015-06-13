#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_Tracer
#include <ca/confidant/glory/Tracer.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace ca{
namespace confidant{
namespace glory{

Void Tracer_obj::__construct()
{
	return null();
}

Tracer_obj::~Tracer_obj() { }

Dynamic Tracer_obj::__CreateEmpty() { return  new Tracer_obj; }
hx::ObjectPtr< Tracer_obj > Tracer_obj::__new()
{  hx::ObjectPtr< Tracer_obj > result = new Tracer_obj();
	result->__construct();
	return result;}

Dynamic Tracer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tracer_obj > result = new Tracer_obj();
	result->__construct();
	return result;}

Void Tracer_obj::setRedirection( ){
{
		HX_STACK_PUSH("Tracer::setRedirection","ca/confidant/glory/Tracer.hx",10);
		HX_STACK_LINE(10)
		::haxe::Log_obj::trace = ::ca::confidant::glory::Tracer_obj::customTrace_dyn();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Tracer_obj,setRedirection,(void))

Void Tracer_obj::customTrace( Dynamic v,Dynamic inf){
{
		HX_STACK_PUSH("Tracer::customTrace","ca/confidant/glory/Tracer.hx",14);
		HX_STACK_ARG(v,"v");
		HX_STACK_ARG(inf,"inf");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tracer_obj,customTrace,(void))


Tracer_obj::Tracer_obj()
{
}

void Tracer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tracer);
	HX_MARK_END_CLASS();
}

void Tracer_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Tracer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"customTrace") ) { return customTrace_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setRedirection") ) { return setRedirection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tracer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Tracer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("setRedirection"),
	HX_CSTRING("customTrace"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tracer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tracer_obj::__mClass,"__mClass");
};

Class Tracer_obj::__mClass;

void Tracer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.Tracer"), hx::TCanCast< Tracer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Tracer_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
