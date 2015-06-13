#include <hxcpp.h>

#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_proxy_Proxy
#include <org/puremvc/haxe/patterns/proxy/Proxy.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace proxy{

Void Proxy_obj::__construct(::String proxyName,Dynamic data)
{
HX_STACK_PUSH("Proxy::new","org/puremvc/haxe/patterns/proxy/Proxy.hx",37);
{
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(39)
	this->proxyName = (  (((proxyName != null()))) ? ::String(proxyName) : ::String(::org::puremvc::haxe::patterns::proxy::Proxy_obj::NAME) );
	HX_STACK_LINE(40)
	if (((data != null()))){
		HX_STACK_LINE(40)
		this->setData(data);
	}
}
;
	return null();
}

Proxy_obj::~Proxy_obj() { }

Dynamic Proxy_obj::__CreateEmpty() { return  new Proxy_obj; }
hx::ObjectPtr< Proxy_obj > Proxy_obj::__new(::String proxyName,Dynamic data)
{  hx::ObjectPtr< Proxy_obj > result = new Proxy_obj();
	result->__construct(proxyName,data);
	return result;}

Dynamic Proxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Proxy_obj > result = new Proxy_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *Proxy_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::interfaces::IProxy_obj)) return operator ::org::puremvc::haxe::interfaces::IProxy_obj *();
	return super::__ToInterface(inType);
}

Void Proxy_obj::onRemove( ){
{
		HX_STACK_PUSH("Proxy::onRemove","org/puremvc/haxe/patterns/proxy/Proxy.hx",79);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,onRemove,(void))

Void Proxy_obj::onRegister( ){
{
		HX_STACK_PUSH("Proxy::onRegister","org/puremvc/haxe/patterns/proxy/Proxy.hx",71);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,onRegister,(void))

Dynamic Proxy_obj::getData( ){
	HX_STACK_PUSH("Proxy::getData","org/puremvc/haxe/patterns/proxy/Proxy.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_LINE(63)
	return this->data;
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,getData,return )

Void Proxy_obj::setData( Dynamic data){
{
		HX_STACK_PUSH("Proxy::setData","org/puremvc/haxe/patterns/proxy/Proxy.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_LINE(55)
		this->data = data;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Proxy_obj,setData,(void))

::String Proxy_obj::getProxyName( ){
	HX_STACK_PUSH("Proxy::getProxyName","org/puremvc/haxe/patterns/proxy/Proxy.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_LINE(47)
	return this->proxyName;
}


HX_DEFINE_DYNAMIC_FUNC0(Proxy_obj,getProxyName,return )

::String Proxy_obj::NAME;


Proxy_obj::Proxy_obj()
{
}

void Proxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Proxy);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(proxyName,"proxyName");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Proxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(proxyName,"proxyName");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Proxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		if (HX_FIELD_EQ(inName,"setData") ) { return setData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRemove") ) { return onRemove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"proxyName") ) { return proxyName; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onRegister") ) { return onRegister_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getProxyName") ) { return getProxyName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Proxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"proxyName") ) { proxyName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Proxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("proxyName"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("proxyName"),
	HX_CSTRING("onRemove"),
	HX_CSTRING("onRegister"),
	HX_CSTRING("getData"),
	HX_CSTRING("setData"),
	HX_CSTRING("getProxyName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Proxy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Proxy_obj::NAME,"NAME");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Proxy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Proxy_obj::NAME,"NAME");
};

Class Proxy_obj::__mClass;

void Proxy_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.patterns.proxy.Proxy"), hx::TCanCast< Proxy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Proxy_obj::__boot()
{
	NAME= HX_CSTRING("Proxy");
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace proxy
