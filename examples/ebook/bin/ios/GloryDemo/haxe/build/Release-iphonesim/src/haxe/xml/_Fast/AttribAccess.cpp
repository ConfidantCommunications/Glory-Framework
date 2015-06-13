#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_XmlType
#include <XmlType.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
namespace haxe{
namespace xml{
namespace _Fast{

Void AttribAccess_obj::__construct(::Xml x)
{
HX_STACK_PUSH("AttribAccess::new","/usr/lib/haxe/std/haxe/xml/Fast.hx",50);
{
	HX_STACK_LINE(50)
	this->__x = x;
}
;
	return null();
}

AttribAccess_obj::~AttribAccess_obj() { }

Dynamic AttribAccess_obj::__CreateEmpty() { return  new AttribAccess_obj; }
hx::ObjectPtr< AttribAccess_obj > AttribAccess_obj::__new(::Xml x)
{  hx::ObjectPtr< AttribAccess_obj > result = new AttribAccess_obj();
	result->__construct(x);
	return result;}

Dynamic AttribAccess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AttribAccess_obj > result = new AttribAccess_obj();
	result->__construct(inArgs[0]);
	return result;}

::String AttribAccess_obj::resolve( ::String name){
	HX_STACK_PUSH("AttribAccess::resolve","/usr/lib/haxe/std/haxe/xml/Fast.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(55)
	if (((this->__x->nodeType == ::Xml_obj::Document))){
		HX_STACK_LINE(56)
		hx::Throw ((HX_CSTRING("Cannot access document attribute ") + name));
	}
	HX_STACK_LINE(57)
	::String v = this->__x->get(name);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(58)
	if (((v == null()))){
		HX_STACK_LINE(59)
		hx::Throw (((this->__x->getNodeName() + HX_CSTRING(" is missing attribute ")) + name));
	}
	HX_STACK_LINE(60)
	return v;
}


HX_DEFINE_DYNAMIC_FUNC1(AttribAccess_obj,resolve,return )


AttribAccess_obj::AttribAccess_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void AttribAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttribAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_END_CLASS();
}

void AttribAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__x,"__x");
}

Dynamic AttribAccess_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic AttribAccess_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void AttribAccess_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(AttribAccess_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AttribAccess_obj::__mClass,"__mClass");
};

Class AttribAccess_obj::__mClass;

void AttribAccess_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.xml._Fast.AttribAccess"), hx::TCanCast< AttribAccess_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AttribAccess_obj::__boot()
{
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Fast
