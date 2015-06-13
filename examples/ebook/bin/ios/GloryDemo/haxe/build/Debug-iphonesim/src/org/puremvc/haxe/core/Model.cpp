#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_core_Model
#include <org/puremvc/haxe/core/Model.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IModel
#include <org/puremvc/haxe/interfaces/IModel.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IProxy
#include <org/puremvc/haxe/interfaces/IProxy.h>
#endif
namespace org{
namespace puremvc{
namespace haxe{
namespace core{

Void Model_obj::__construct()
{
HX_STACK_PUSH("Model::new","org/puremvc/haxe/core/Model.hx",35);
{
	HX_STACK_LINE(36)
	::org::puremvc::haxe::core::Model_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(37)
	this->proxyMap = ::Hash_obj::__new();
	HX_STACK_LINE(38)
	this->initializeModel();
}
;
	return null();
}

Model_obj::~Model_obj() { }

Dynamic Model_obj::__CreateEmpty() { return  new Model_obj; }
hx::ObjectPtr< Model_obj > Model_obj::__new()
{  hx::ObjectPtr< Model_obj > result = new Model_obj();
	result->__construct();
	return result;}

Dynamic Model_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Model_obj > result = new Model_obj();
	result->__construct();
	return result;}

hx::Object *Model_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::org::puremvc::haxe::interfaces::IModel_obj)) return operator ::org::puremvc::haxe::interfaces::IModel_obj *();
	return super::__ToInterface(inType);
}

::org::puremvc::haxe::interfaces::IProxy Model_obj::removeProxy( ::String proxyName){
	HX_STACK_PUSH("Model::removeProxy","org/puremvc/haxe/core/Model.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_ARG(proxyName,"proxyName");
	HX_STACK_LINE(90)
	::org::puremvc::haxe::interfaces::IProxy proxy = this->proxyMap->get(proxyName);		HX_STACK_VAR(proxy,"proxy");
	HX_STACK_LINE(91)
	if (((proxy != null()))){
		HX_STACK_LINE(93)
		this->proxyMap->remove(proxyName);
		HX_STACK_LINE(94)
		proxy->onRemove();
	}
	HX_STACK_LINE(96)
	return proxy;
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,removeProxy,return )

bool Model_obj::hasProxy( ::String proxyName){
	HX_STACK_PUSH("Model::hasProxy","org/puremvc/haxe/core/Model.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_ARG(proxyName,"proxyName");
	HX_STACK_LINE(81)
	return this->proxyMap->exists(proxyName);
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,hasProxy,return )

::org::puremvc::haxe::interfaces::IProxy Model_obj::retrieveProxy( ::String proxyName){
	HX_STACK_PUSH("Model::retrieveProxy","org/puremvc/haxe/core/Model.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_ARG(proxyName,"proxyName");
	HX_STACK_LINE(73)
	return this->proxyMap->get(proxyName);
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,retrieveProxy,return )

Void Model_obj::registerProxy( ::org::puremvc::haxe::interfaces::IProxy proxy){
{
		HX_STACK_PUSH("Model::registerProxy","org/puremvc/haxe/core/Model.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(proxy,"proxy");
		HX_STACK_LINE(65)
		this->proxyMap->set(proxy->getProxyName(),proxy);
		HX_STACK_LINE(66)
		proxy->onRegister();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Model_obj,registerProxy,(void))

Void Model_obj::initializeModel( ){
{
		HX_STACK_PUSH("Model::initializeModel","org/puremvc/haxe/core/Model.hx",48);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Model_obj,initializeModel,(void))

::org::puremvc::haxe::interfaces::IModel Model_obj::getInstance( ){
	HX_STACK_PUSH("Model::getInstance","org/puremvc/haxe/core/Model.hx",55);
	HX_STACK_LINE(56)
	if (((::org::puremvc::haxe::core::Model_obj::instance == null()))){
		HX_STACK_LINE(56)
		::org::puremvc::haxe::core::Model_obj::instance = ::org::puremvc::haxe::core::Model_obj::__new();
	}
	HX_STACK_LINE(57)
	return ::org::puremvc::haxe::core::Model_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Model_obj,getInstance,return )

::org::puremvc::haxe::interfaces::IModel Model_obj::instance;


Model_obj::Model_obj()
{
}

void Model_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Model);
	HX_MARK_MEMBER_NAME(proxyMap,"proxyMap");
	HX_MARK_END_CLASS();
}

void Model_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(proxyMap,"proxyMap");
}

Dynamic Model_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"proxyMap") ) { return proxyMap; }
		if (HX_FIELD_EQ(inName,"hasProxy") ) { return hasProxy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"removeProxy") ) { return removeProxy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"retrieveProxy") ) { return retrieveProxy_dyn(); }
		if (HX_FIELD_EQ(inName,"registerProxy") ) { return registerProxy_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initializeModel") ) { return initializeModel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Model_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::org::puremvc::haxe::interfaces::IModel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"proxyMap") ) { proxyMap=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Model_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("proxyMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getInstance"),
	HX_CSTRING("instance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("proxyMap"),
	HX_CSTRING("removeProxy"),
	HX_CSTRING("hasProxy"),
	HX_CSTRING("retrieveProxy"),
	HX_CSTRING("registerProxy"),
	HX_CSTRING("initializeModel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Model_obj::instance,"instance");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Model_obj::instance,"instance");
};

Class Model_obj::__mClass;

void Model_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.puremvc.haxe.core.Model"), hx::TCanCast< Model_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Model_obj::__boot()
{
}

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace core
