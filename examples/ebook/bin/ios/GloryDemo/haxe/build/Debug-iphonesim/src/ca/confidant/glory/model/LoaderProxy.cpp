#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_model_LoaderProxy
#include <ca/confidant/glory/model/LoaderProxy.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
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
namespace ca{
namespace confidant{
namespace glory{
namespace model{

Void LoaderProxy_obj::__construct()
{
HX_STACK_PUSH("LoaderProxy::new","ca/confidant/glory/model/LoaderProxy.hx",28);
{
	HX_STACK_LINE(29)
	super::__construct(::ca::confidant::glory::model::LoaderProxy_obj::NAME,null());
	HX_STACK_LINE(30)
	this->loadedItems = ::Hash_obj::__new();
}
;
	return null();
}

LoaderProxy_obj::~LoaderProxy_obj() { }

Dynamic LoaderProxy_obj::__CreateEmpty() { return  new LoaderProxy_obj; }
hx::ObjectPtr< LoaderProxy_obj > LoaderProxy_obj::__new()
{  hx::ObjectPtr< LoaderProxy_obj > result = new LoaderProxy_obj();
	result->__construct();
	return result;}

Dynamic LoaderProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoaderProxy_obj > result = new LoaderProxy_obj();
	result->__construct();
	return result;}

Void LoaderProxy_obj::loadAllAssets( ){
{
		HX_STACK_PUSH("LoaderProxy::loadAllAssets","ca/confidant/glory/model/LoaderProxy.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_LINE(69)
		this->sendNotification(HX_CSTRING("assetsLoaded"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LoaderProxy_obj,loadAllAssets,(void))

::native::display::BitmapData LoaderProxy_obj::getBitmapData( ::String id,hx::Null< bool >  __o_b){
bool b = __o_b.Default(true);
	HX_STACK_PUSH("LoaderProxy::getBitmapData","ca/confidant/glory/model/LoaderProxy.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(b,"b");
{
		HX_STACK_LINE(61)
		::native::display::BitmapData imageData = ::nme::installer::Assets_obj::getBitmapData(id,b);		HX_STACK_VAR(imageData,"imageData");
		HX_STACK_LINE(62)
		return imageData;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(LoaderProxy_obj,getBitmapData,return )

::String LoaderProxy_obj::getText( ::String id){
	HX_STACK_PUSH("LoaderProxy::getText","ca/confidant/glory/model/LoaderProxy.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(56)
	::String theText = ::nme::installer::Assets_obj::getText(id);		HX_STACK_VAR(theText,"theText");
	HX_STACK_LINE(57)
	return theText;
}


HX_DEFINE_DYNAMIC_FUNC1(LoaderProxy_obj,getText,return )

Dynamic LoaderProxy_obj::retrieveLoadedAsset( ::String key){
	HX_STACK_PUSH("LoaderProxy::retrieveLoadedAsset","ca/confidant/glory/model/LoaderProxy.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(50)
	::haxe::Log_obj::trace((HX_CSTRING("retrieving:") + key),hx::SourceInfo(HX_CSTRING("LoaderProxy.hx"),50,HX_CSTRING("ca.confidant.glory.model.LoaderProxy"),HX_CSTRING("retrieveLoadedAsset")));
	HX_STACK_LINE(51)
	::String r = this->loadedItems->get(key);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(52)
	this->loadedItems->remove(key);
	HX_STACK_LINE(53)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(LoaderProxy_obj,retrieveLoadedAsset,return )

Void LoaderProxy_obj::loadXML( ::String src){
{
		HX_STACK_PUSH("LoaderProxy::loadXML","ca/confidant/glory/model/LoaderProxy.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_ARG(src,"src");
		HX_STACK_LINE(43)
		::String x = ::nme::installer::Assets_obj::getText(src);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(44)
		this->loadedItems->set(HX_CSTRING("xml"),x);
		HX_STACK_LINE(46)
		this->sendNotification(HX_CSTRING("assetsLoaded"),HX_CSTRING("xml"),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LoaderProxy_obj,loadXML,(void))

::String LoaderProxy_obj::NAME;


LoaderProxy_obj::LoaderProxy_obj()
{
}

void LoaderProxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoaderProxy);
	HX_MARK_MEMBER_NAME(loadedItems,"loadedItems");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoaderProxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loadedItems,"loadedItems");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LoaderProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { return NAME; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"loadXML") ) { return loadXML_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadedItems") ) { return loadedItems; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadAllAssets") ) { return loadAllAssets_dyn(); }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"retrieveLoadedAsset") ) { return retrieveLoadedAsset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LoaderProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"NAME") ) { NAME=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadedItems") ) { loadedItems=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoaderProxy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("loadedItems"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NAME"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadAllAssets"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getText"),
	HX_CSTRING("retrieveLoadedAsset"),
	HX_CSTRING("loadXML"),
	HX_CSTRING("loadedItems"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoaderProxy_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LoaderProxy_obj::NAME,"NAME");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoaderProxy_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LoaderProxy_obj::NAME,"NAME");
};

Class LoaderProxy_obj::__mClass;

void LoaderProxy_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.model.LoaderProxy"), hx::TCanCast< LoaderProxy_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LoaderProxy_obj::__boot()
{
	NAME= HX_CSTRING("LoaderProxy");
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace model
