#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
namespace haxe{
namespace xml{
namespace _Fast{

Void HasNodeAccess_obj::__construct(::Xml x)
{
HX_STACK_PUSH("HasNodeAccess::new","/usr/lib/haxe/std/haxe/xml/Fast.hx",85);
{
	HX_STACK_LINE(85)
	this->__x = x;
}
;
	return null();
}

HasNodeAccess_obj::~HasNodeAccess_obj() { }

Dynamic HasNodeAccess_obj::__CreateEmpty() { return  new HasNodeAccess_obj; }
hx::ObjectPtr< HasNodeAccess_obj > HasNodeAccess_obj::__new(::Xml x)
{  hx::ObjectPtr< HasNodeAccess_obj > result = new HasNodeAccess_obj();
	result->__construct(x);
	return result;}

Dynamic HasNodeAccess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HasNodeAccess_obj > result = new HasNodeAccess_obj();
	result->__construct(inArgs[0]);
	return result;}

bool HasNodeAccess_obj::resolve( ::String name){
	HX_STACK_PUSH("HasNodeAccess::resolve","/usr/lib/haxe/std/haxe/xml/Fast.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(89)
	return this->__x->elementsNamed(name)->__Field(HX_CSTRING("hasNext"),true)();
}


HX_DEFINE_DYNAMIC_FUNC1(HasNodeAccess_obj,resolve,return )


HasNodeAccess_obj::HasNodeAccess_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void HasNodeAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HasNodeAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_END_CLASS();
}

void HasNodeAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__x,"__x");
}

Dynamic HasNodeAccess_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return __x; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic HasNodeAccess_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void HasNodeAccess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__x"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("resolve"),
	HX_CSTRING("__x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HasNodeAccess_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HasNodeAccess_obj::__mClass,"__mClass");
};

Class HasNodeAccess_obj::__mClass;

void HasNodeAccess_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.xml._Fast.HasNodeAccess"), hx::TCanCast< HasNodeAccess_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HasNodeAccess_obj::__boot()
{
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Fast
