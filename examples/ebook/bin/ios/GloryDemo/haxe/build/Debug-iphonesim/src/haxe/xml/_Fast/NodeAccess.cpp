#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_XmlType
#include <XmlType.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
namespace haxe{
namespace xml{
namespace _Fast{

Void NodeAccess_obj::__construct(::Xml x)
{
HX_STACK_PUSH("NodeAccess::new","/usr/lib/haxe/std/haxe/xml/Fast.hx",31);
{
	HX_STACK_LINE(31)
	this->__x = x;
}
;
	return null();
}

NodeAccess_obj::~NodeAccess_obj() { }

Dynamic NodeAccess_obj::__CreateEmpty() { return  new NodeAccess_obj; }
hx::ObjectPtr< NodeAccess_obj > NodeAccess_obj::__new(::Xml x)
{  hx::ObjectPtr< NodeAccess_obj > result = new NodeAccess_obj();
	result->__construct(x);
	return result;}

Dynamic NodeAccess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NodeAccess_obj > result = new NodeAccess_obj();
	result->__construct(inArgs[0]);
	return result;}

::haxe::xml::Fast NodeAccess_obj::resolve( ::String name){
	HX_STACK_PUSH("NodeAccess::resolve","/usr/lib/haxe/std/haxe/xml/Fast.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(36)
	::Xml x = this->__x->elementsNamed(name)->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(37)
	if (((x == null()))){
		HX_STACK_LINE(38)
		::String xname = (  (((this->__x->nodeType == ::Xml_obj::Document))) ? ::String(HX_CSTRING("Document")) : ::String(this->__x->getNodeName()) );		HX_STACK_VAR(xname,"xname");
		HX_STACK_LINE(39)
		hx::Throw (((xname + HX_CSTRING(" is missing element ")) + name));
	}
	HX_STACK_LINE(41)
	return ::haxe::xml::Fast_obj::__new(x);
}


HX_DEFINE_DYNAMIC_FUNC1(NodeAccess_obj,resolve,return )


NodeAccess_obj::NodeAccess_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void NodeAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NodeAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__x,"__x");
	HX_MARK_END_CLASS();
}

void NodeAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__x,"__x");
}

Dynamic NodeAccess_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic NodeAccess_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { __x=inValue.Cast< ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void NodeAccess_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(NodeAccess_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NodeAccess_obj::__mClass,"__mClass");
};

Class NodeAccess_obj::__mClass;

void NodeAccess_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.xml._Fast.NodeAccess"), hx::TCanCast< NodeAccess_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void NodeAccess_obj::__boot()
{
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Fast
