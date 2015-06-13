#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_XmlType
#include <XmlType.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace haxe{
namespace xml{

Void Fast_obj::__construct(::Xml x)
{
HX_STACK_PUSH("Fast::new","/usr/lib/haxe/std/haxe/xml/Fast.hx",125);
{
	HX_STACK_LINE(126)
	if (((bool((x->nodeType != ::Xml_obj::Document)) && bool((x->nodeType != ::Xml_obj::Element))))){
		HX_STACK_LINE(127)
		hx::Throw ((HX_CSTRING("Invalid nodeType ") + ::Std_obj::string(x->nodeType)));
	}
	HX_STACK_LINE(128)
	this->x = x;
	HX_STACK_LINE(129)
	this->node = ::haxe::xml::_Fast::NodeAccess_obj::__new(x);
	HX_STACK_LINE(130)
	this->nodes = ::haxe::xml::_Fast::NodeListAccess_obj::__new(x);
	HX_STACK_LINE(131)
	this->att = ::haxe::xml::_Fast::AttribAccess_obj::__new(x);
	HX_STACK_LINE(132)
	this->has = ::haxe::xml::_Fast::HasAttribAccess_obj::__new(x);
	HX_STACK_LINE(133)
	this->hasNode = ::haxe::xml::_Fast::HasNodeAccess_obj::__new(x);
}
;
	return null();
}

Fast_obj::~Fast_obj() { }

Dynamic Fast_obj::__CreateEmpty() { return  new Fast_obj; }
hx::ObjectPtr< Fast_obj > Fast_obj::__new(::Xml x)
{  hx::ObjectPtr< Fast_obj > result = new Fast_obj();
	result->__construct(x);
	return result;}

Dynamic Fast_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fast_obj > result = new Fast_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic Fast_obj::getElements( ){
	HX_STACK_PUSH("Fast::getElements","/usr/lib/haxe/std/haxe/xml/Fast.hx",167);
	HX_STACK_THIS(this);
	HX_STACK_LINE(168)
	Dynamic it = Dynamic( Array_obj<Dynamic>::__new().Add(this->x->elements()));		HX_STACK_VAR(it,"it");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &it){
			HX_STACK_PUSH("*::closure","/usr/lib/haxe/std/haxe/xml/Fast.hx",169);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("hasNext") , it->__GetItem((int)0)->__Field(HX_CSTRING("hasNext"),true),false);

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,it)
				::haxe::xml::Fast run(){
					HX_STACK_PUSH("*::_Function_2_1","/usr/lib/haxe/std/haxe/xml/Fast.hx",171);
					{
						HX_STACK_LINE(172)
						::Xml x = it->__GetItem((int)0)->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(173)
						if (((x == null()))){
							HX_STACK_LINE(174)
							return null();
						}
						HX_STACK_LINE(175)
						return ::haxe::xml::Fast_obj::__new(x);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				__result->Add(HX_CSTRING("next") ,  Dynamic(new _Function_2_1(it)),true);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(169)
	return _Function_1_1::Block(it);
}


HX_DEFINE_DYNAMIC_FUNC0(Fast_obj,getElements,return )

::String Fast_obj::getInnerHTML( ){
	HX_STACK_PUSH("Fast::getInnerHTML","/usr/lib/haxe/std/haxe/xml/Fast.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_LINE(161)
	::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(162)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(this->x->iterator());  __it->hasNext(); ){
		::Xml x = __it->next();
		hx::IndexRef((s->b).mPtr,s->b->__Field(HX_CSTRING("length"),true)) = x->toString();
	}
	HX_STACK_LINE(164)
	return s->b->__Field(HX_CSTRING("join"),true)(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC0(Fast_obj,getInnerHTML,return )

::String Fast_obj::getInnerData( ){
	HX_STACK_PUSH("Fast::getInnerData","/usr/lib/haxe/std/haxe/xml/Fast.hx",140);
	HX_STACK_THIS(this);
	HX_STACK_LINE(141)
	Dynamic it = this->x->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(142)
	if ((!(it->__Field(HX_CSTRING("hasNext"),true)()))){
		HX_STACK_LINE(143)
		hx::Throw ((this->getName() + HX_CSTRING(" does not have data")));
	}
	HX_STACK_LINE(144)
	::Xml v = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(145)
	::Xml n = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(146)
	if (((n != null()))){
		HX_STACK_LINE(148)
		if (((bool((bool((v->nodeType == ::Xml_obj::PCData)) && bool((n->nodeType == ::Xml_obj::CData)))) && bool((::StringTools_obj::trim(v->getNodeValue()) == HX_CSTRING("")))))){
			HX_STACK_LINE(149)
			::Xml n2 = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(n2,"n2");
			HX_STACK_LINE(150)
			if (((bool((n2 == null())) || bool((bool((bool((n2->nodeType == ::Xml_obj::PCData)) && bool((::StringTools_obj::trim(n2->getNodeValue()) == HX_CSTRING(""))))) && bool((it->__Field(HX_CSTRING("next"),true)() == null()))))))){
				HX_STACK_LINE(151)
				return n->getNodeValue();
			}
		}
		HX_STACK_LINE(153)
		hx::Throw ((this->getName() + HX_CSTRING(" does not only have data")));
	}
	HX_STACK_LINE(155)
	if (((bool((v->nodeType != ::Xml_obj::PCData)) && bool((v->nodeType != ::Xml_obj::CData))))){
		HX_STACK_LINE(156)
		hx::Throw ((this->getName() + HX_CSTRING(" does not have data")));
	}
	HX_STACK_LINE(157)
	return v->getNodeValue();
}


HX_DEFINE_DYNAMIC_FUNC0(Fast_obj,getInnerData,return )

::String Fast_obj::getName( ){
	HX_STACK_PUSH("Fast::getName","/usr/lib/haxe/std/haxe/xml/Fast.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_LINE(136)
	return (  (((this->x->nodeType == ::Xml_obj::Document))) ? ::String(HX_CSTRING("Document")) : ::String(this->x->getNodeName()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Fast_obj,getName,return )


Fast_obj::Fast_obj()
{
}

void Fast_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fast);
	HX_MARK_MEMBER_NAME(elements,"elements");
	HX_MARK_MEMBER_NAME(hasNode,"hasNode");
	HX_MARK_MEMBER_NAME(has,"has");
	HX_MARK_MEMBER_NAME(att,"att");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(innerHTML,"innerHTML");
	HX_MARK_MEMBER_NAME(innerData,"innerData");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void Fast_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elements,"elements");
	HX_VISIT_MEMBER_NAME(hasNode,"hasNode");
	HX_VISIT_MEMBER_NAME(has,"has");
	HX_VISIT_MEMBER_NAME(att,"att");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(innerHTML,"innerHTML");
	HX_VISIT_MEMBER_NAME(innerData,"innerData");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic Fast_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has; }
		if (HX_FIELD_EQ(inName,"att") ) { return att; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return node; }
		if (HX_FIELD_EQ(inName,"name") ) { return inCallProp ? getName() : name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		if (HX_FIELD_EQ(inName,"hasNode") ) { return hasNode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { return inCallProp ? getElements() : elements; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"innerHTML") ) { return inCallProp ? getInnerHTML() : innerHTML; }
		if (HX_FIELD_EQ(inName,"innerData") ) { return inCallProp ? getInnerData() : innerData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getElements") ) { return getElements_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getInnerHTML") ) { return getInnerHTML_dyn(); }
		if (HX_FIELD_EQ(inName,"getInnerData") ) { return getInnerData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Fast_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { has=inValue.Cast< ::haxe::xml::_Fast::HasAttribAccess >(); return inValue; }
		if (HX_FIELD_EQ(inName,"att") ) { att=inValue.Cast< ::haxe::xml::_Fast::AttribAccess >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast< ::haxe::xml::_Fast::NodeAccess >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< ::haxe::xml::_Fast::NodeListAccess >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { hasNode=inValue.Cast< ::haxe::xml::_Fast::HasNodeAccess >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { elements=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"innerHTML") ) { innerHTML=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerData") ) { innerData=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Fast_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("elements"));
	outFields->push(HX_CSTRING("hasNode"));
	outFields->push(HX_CSTRING("has"));
	outFields->push(HX_CSTRING("att"));
	outFields->push(HX_CSTRING("nodes"));
	outFields->push(HX_CSTRING("node"));
	outFields->push(HX_CSTRING("innerHTML"));
	outFields->push(HX_CSTRING("innerData"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getElements"),
	HX_CSTRING("getInnerHTML"),
	HX_CSTRING("getInnerData"),
	HX_CSTRING("getName"),
	HX_CSTRING("elements"),
	HX_CSTRING("hasNode"),
	HX_CSTRING("has"),
	HX_CSTRING("att"),
	HX_CSTRING("nodes"),
	HX_CSTRING("node"),
	HX_CSTRING("innerHTML"),
	HX_CSTRING("innerData"),
	HX_CSTRING("name"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

Class Fast_obj::__mClass;

void Fast_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.xml.Fast"), hx::TCanCast< Fast_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Fast_obj::__boot()
{
}

} // end namespace haxe
} // end namespace xml
