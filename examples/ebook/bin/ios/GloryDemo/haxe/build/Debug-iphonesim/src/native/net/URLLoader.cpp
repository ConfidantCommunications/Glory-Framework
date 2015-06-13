#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_events_ErrorEvent
#include <native/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_HTTPStatusEvent
#include <native/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IOErrorEvent
#include <native/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_native_events_ProgressEvent
#include <native/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_native_events_TextEvent
#include <native/events/TextEvent.h>
#endif
#ifndef INCLUDED_native_net_URLLoader
#include <native/net/URLLoader.h>
#endif
#ifndef INCLUDED_native_net_URLLoaderDataFormat
#include <native/net/URLLoaderDataFormat.h>
#endif
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
#endif
#ifndef INCLUDED_native_net_URLVariables
#include <native/net/URLVariables.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
namespace native{
namespace net{

Void URLLoader_obj::__construct(::native::net::URLRequest request)
{
HX_STACK_PUSH("URLLoader::new","native/net/URLLoader.hx",43);
{
	HX_STACK_LINE(45)
	super::__construct(null());
	HX_STACK_LINE(47)
	this->nmeHandle = (int)0;
	HX_STACK_LINE(48)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(49)
	this->bytesTotal = (int)-1;
	HX_STACK_LINE(50)
	this->state = (int)0;
	HX_STACK_LINE(51)
	this->dataFormat = ::native::net::URLLoaderDataFormat_obj::TEXT_dyn();
	HX_STACK_LINE(53)
	if (((request != null()))){
		HX_STACK_LINE(54)
		this->load(request);
	}
}
;
	return null();
}

URLLoader_obj::~URLLoader_obj() { }

Dynamic URLLoader_obj::__CreateEmpty() { return  new URLLoader_obj; }
hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new(::native::net::URLRequest request)
{  hx::ObjectPtr< URLLoader_obj > result = new URLLoader_obj();
	result->__construct(request);
	return result;}

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoader_obj > result = new URLLoader_obj();
	result->__construct(inArgs[0]);
	return result;}

Void URLLoader_obj::update( ){
{
		HX_STACK_PUSH("URLLoader::update","native/net/URLLoader.hx",197);
		HX_STACK_THIS(this);
		HX_STACK_LINE(197)
		if (((this->nmeHandle != null()))){
			HX_STACK_LINE(201)
			int old_loaded = this->bytesLoaded;		HX_STACK_VAR(old_loaded,"old_loaded");
			HX_STACK_LINE(202)
			int old_total = this->bytesTotal;		HX_STACK_VAR(old_total,"old_total");
			HX_STACK_LINE(203)
			::native::net::URLLoader_obj::nme_curl_update_loader(this->nmeHandle,hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(205)
			if (((bool((old_total < (int)0)) && bool((this->bytesTotal > (int)0))))){
				HX_STACK_LINE(205)
				this->dispatchEvent(::native::events::Event_obj::__new(::native::events::Event_obj::OPEN,null(),null()));
			}
			HX_STACK_LINE(211)
			if (((bool((this->bytesTotal > (int)0)) && bool((this->bytesLoaded != old_loaded))))){
				HX_STACK_LINE(211)
				this->dispatchEvent(::native::events::ProgressEvent_obj::__new(HX_CSTRING("progress"),false,false,this->bytesLoaded,this->bytesTotal));
			}
			HX_STACK_LINE(217)
			int code = ::native::net::URLLoader_obj::nme_curl_get_code(this->nmeHandle);		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(219)
			if (((this->state == (int)3))){
				HX_STACK_LINE(221)
				this->dispatchHTTPStatus(code);
				HX_STACK_LINE(223)
				if (((code < (int)400))){
					HX_STACK_LINE(225)
					::native::utils::ByteArray bytes = ::native::net::URLLoader_obj::nme_curl_get_data(this->nmeHandle);		HX_STACK_VAR(bytes,"bytes");
					HX_STACK_LINE(227)
					{
						::native::net::URLLoaderDataFormat _switch_1 = (this->dataFormat);
						switch((_switch_1)->GetIndex()){
							case 1: case 2: {
								HX_STACK_LINE(228)
								this->data = (  (((bytes == null()))) ? ::String(HX_CSTRING("")) : ::String(bytes->asString()) );
							}
							;break;
							default: {
								HX_STACK_LINE(230)
								this->data = bytes;
							}
						}
					}
					HX_STACK_LINE(234)
					this->nmeDataComplete();
				}
				else{
					HX_STACK_LINE(239)
					::native::events::IOErrorEvent evt = ::native::events::IOErrorEvent_obj::__new(::native::events::IOErrorEvent_obj::IO_ERROR,true,false,(HX_CSTRING("HTTP status code ") + ::Std_obj::string(code)),code);		HX_STACK_VAR(evt,"evt");
					HX_STACK_LINE(240)
					this->nmeHandle = null();
					HX_STACK_LINE(241)
					this->dispatchEvent(evt);
				}
			}
			else{
				HX_STACK_LINE(245)
				if (((this->state == (int)4))){
					HX_STACK_LINE(247)
					this->dispatchHTTPStatus(code);
					HX_STACK_LINE(249)
					::native::events::IOErrorEvent evt = ::native::events::IOErrorEvent_obj::__new(::native::events::IOErrorEvent_obj::IO_ERROR,true,false,::native::net::URLLoader_obj::nme_curl_get_error_message(this->nmeHandle),code);		HX_STACK_VAR(evt,"evt");
					HX_STACK_LINE(250)
					this->nmeHandle = null();
					HX_STACK_LINE(251)
					this->dispatchEvent(evt);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,update,(void))

Void URLLoader_obj::dispatchHTTPStatus( int code){
{
		HX_STACK_PUSH("URLLoader::dispatchHTTPStatus","native/net/URLLoader.hx",190);
		HX_STACK_THIS(this);
		HX_STACK_ARG(code,"code");
		HX_STACK_LINE(190)
		this->dispatchEvent(::native::events::HTTPStatusEvent_obj::__new(::native::events::HTTPStatusEvent_obj::HTTP_STATUS,false,false,code));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,dispatchHTTPStatus,(void))

Void URLLoader_obj::onError( ::String msg){
{
		HX_STACK_PUSH("URLLoader::onError","native/net/URLLoader.hx",182);
		HX_STACK_THIS(this);
		HX_STACK_ARG(msg,"msg");
		HX_STACK_LINE(184)
		::native::net::URLLoader_obj::activeLoaders->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(185)
		this->dispatchEvent(::native::events::IOErrorEvent_obj::__new(::native::events::IOErrorEvent_obj::IO_ERROR,true,false,msg,null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onError,(void))

Void URLLoader_obj::nmeDataComplete( ){
{
		HX_STACK_PUSH("URLLoader::nmeDataComplete","native/net/URLLoader.hx",134);
		HX_STACK_THIS(this);
		HX_STACK_LINE(136)
		::native::net::URLLoader_obj::activeLoaders->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(138)
		if (((this->nmeOnComplete_dyn() != null()))){
			HX_STACK_LINE(138)
			if ((this->nmeOnComplete(this->data))){
				HX_STACK_LINE(141)
				this->dispatchEvent(::native::events::Event_obj::__new(::native::events::Event_obj::COMPLETE,null(),null()));
			}
			else{
				HX_STACK_LINE(143)
				this->DispatchIOErrorEvent();
			}
		}
		else{
			HX_STACK_LINE(145)
			this->dispatchEvent(::native::events::Event_obj::__new(::native::events::Event_obj::COMPLETE,null(),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,nmeDataComplete,(void))

Void URLLoader_obj::load( ::native::net::URLRequest request){
{
		HX_STACK_PUSH("URLLoader::load","native/net/URLLoader.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_ARG(request,"request");
		HX_STACK_LINE(89)
		this->state = (int)1;
		HX_STACK_LINE(90)
		::String pref = request->url.substr((int)0,(int)7);		HX_STACK_VAR(pref,"pref");
		HX_STACK_LINE(92)
		if (((bool((pref != HX_CSTRING("http://"))) && bool((pref != HX_CSTRING("https:/")))))){
			HX_STACK_LINE(94)
			try{
				HX_STACK_LINE(96)
				::native::utils::ByteArray bytes = ::native::utils::ByteArray_obj::readFile(request->url);		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(98)
				if (((bytes == null()))){
					HX_STACK_LINE(99)
					hx::Throw (((HX_CSTRING("Could not open file \"") + request->url) + HX_CSTRING("\"")));
				}
				HX_STACK_LINE(101)
				{
					::native::net::URLLoaderDataFormat _switch_2 = (this->dataFormat);
					switch((_switch_2)->GetIndex()){
						case 1: {
							HX_STACK_LINE(102)
							this->data = bytes->asString();
						}
						;break;
						case 2: {
							HX_STACK_LINE(104)
							this->data = ::native::net::URLVariables_obj::__new(bytes->asString());
						}
						;break;
						default: {
							HX_STACK_LINE(106)
							this->data = bytes;
						}
					}
				}
			}
			catch(Dynamic __e){
				{
					Dynamic e = __e;{
						HX_STACK_LINE(112)
						this->onError(e);
						HX_STACK_LINE(113)
						return null();
					}
				}
			}
			HX_STACK_LINE(117)
			this->nmeDataComplete();
		}
		else{
			HX_STACK_LINE(121)
			request->nmePrepare();
			HX_STACK_LINE(122)
			this->nmeHandle = ::native::net::URLLoader_obj::nme_curl_create(request);
			HX_STACK_LINE(124)
			if (((this->nmeHandle == null()))){
				HX_STACK_LINE(125)
				this->onError(HX_CSTRING("Could not open URL"));
			}
			else{
				HX_STACK_LINE(127)
				::native::net::URLLoader_obj::activeLoaders->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

Array< ::String > URLLoader_obj::getCookies( ){
	HX_STACK_PUSH("URLLoader::getCookies","native/net/URLLoader.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(66)
	return ::native::net::URLLoader_obj::nme_curl_get_cookies(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,getCookies,return )

Void URLLoader_obj::close( ){
{
		HX_STACK_PUSH("URLLoader::close","native/net/URLLoader.hx",59);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

::List URLLoader_obj::activeLoaders;

int URLLoader_obj::urlInvalid;

int URLLoader_obj::urlInit;

int URLLoader_obj::urlLoading;

int URLLoader_obj::urlComplete;

int URLLoader_obj::urlError;

bool URLLoader_obj::hasActive( ){
	HX_STACK_PUSH("URLLoader::hasActive","native/net/URLLoader.hx",73);
	HX_STACK_LINE(73)
	return !(::native::net::URLLoader_obj::activeLoaders->isEmpty());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,hasActive,return )

Void URLLoader_obj::initialize( ::String inCACertFilePath){
{
		HX_STACK_PUSH("URLLoader::initialize","native/net/URLLoader.hx",80);
		HX_STACK_ARG(inCACertFilePath,"inCACertFilePath");
		HX_STACK_LINE(80)
		::native::net::URLLoader_obj::nme_curl_initialize(inCACertFilePath);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,initialize,(void))

bool URLLoader_obj::nmeLoadPending( ){
	HX_STACK_PUSH("URLLoader::nmeLoadPending","native/net/URLLoader.hx",154);
	HX_STACK_LINE(154)
	return !(::native::net::URLLoader_obj::activeLoaders->isEmpty());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,nmeLoadPending,return )

Void URLLoader_obj::nmePollData( ){
{
		HX_STACK_PUSH("URLLoader::nmePollData","native/net/URLLoader.hx",161);
		HX_STACK_LINE(161)
		if ((!(::native::net::URLLoader_obj::activeLoaders->isEmpty()))){
			HX_STACK_LINE(165)
			::native::net::URLLoader_obj::nme_curl_process_loaders();
			HX_STACK_LINE(166)
			::List oldLoaders = ::native::net::URLLoader_obj::activeLoaders;		HX_STACK_VAR(oldLoaders,"oldLoaders");
			HX_STACK_LINE(167)
			::native::net::URLLoader_obj::activeLoaders = ::List_obj::__new();
			HX_STACK_LINE(169)
			for(::cpp::FastIterator_obj< ::native::net::URLLoader > *__it = ::cpp::CreateFastIterator< ::native::net::URLLoader >(oldLoaders->iterator());  __it->hasNext(); ){
				::native::net::URLLoader loader = __it->next();
				{
					HX_STACK_LINE(171)
					loader->update();
					HX_STACK_LINE(172)
					if (((loader->state == (int)2))){
						HX_STACK_LINE(173)
						::native::net::URLLoader_obj::activeLoaders->push(loader);
					}
				}
;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,nmePollData,(void))

Dynamic URLLoader_obj::nme_curl_create;

Dynamic URLLoader_obj::nme_curl_process_loaders;

Dynamic URLLoader_obj::nme_curl_update_loader;

Dynamic URLLoader_obj::nme_curl_get_code;

Dynamic URLLoader_obj::nme_curl_get_error_message;

Dynamic URLLoader_obj::nme_curl_get_data;

Dynamic URLLoader_obj::nme_curl_get_cookies;

Dynamic URLLoader_obj::nme_curl_initialize;


URLLoader_obj::URLLoader_obj()
{
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(nmeOnComplete,"nmeOnComplete");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeOnComplete,"nmeOnComplete");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic URLLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"urlInit") ) { return urlInit; }
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"urlError") ) { return urlError; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasActive") ) { return hasActive_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"urlInvalid") ) { return urlInvalid; }
		if (HX_FIELD_EQ(inName,"urlLoading") ) { return urlLoading; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"getCookies") ) { return getCookies_dyn(); }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return dataFormat; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"urlComplete") ) { return urlComplete; }
		if (HX_FIELD_EQ(inName,"nmePollData") ) { return nmePollData_dyn(); }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { return activeLoaders; }
		if (HX_FIELD_EQ(inName,"nmeOnComplete") ) { return nmeOnComplete; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeLoadPending") ) { return nmeLoadPending_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_curl_create") ) { return nme_curl_create; }
		if (HX_FIELD_EQ(inName,"nmeDataComplete") ) { return nmeDataComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_curl_get_code") ) { return nme_curl_get_code; }
		if (HX_FIELD_EQ(inName,"nme_curl_get_data") ) { return nme_curl_get_data; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dispatchHTTPStatus") ) { return dispatchHTTPStatus_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_curl_initialize") ) { return nme_curl_initialize; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_curl_get_cookies") ) { return nme_curl_get_cookies; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_curl_update_loader") ) { return nme_curl_update_loader; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_curl_process_loaders") ) { return nme_curl_process_loaders; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_curl_get_error_message") ) { return nme_curl_get_error_message; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"urlInit") ) { urlInit=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"urlError") ) { urlError=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"urlInvalid") ) { urlInvalid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"urlLoading") ) { urlLoading=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { dataFormat=inValue.Cast< ::native::net::URLLoaderDataFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"urlComplete") ) { urlComplete=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { activeLoaders=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeOnComplete") ) { nmeOnComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_curl_create") ) { nme_curl_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_curl_get_code") ) { nme_curl_get_code=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_curl_get_data") ) { nme_curl_get_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_curl_initialize") ) { nme_curl_initialize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_curl_get_cookies") ) { nme_curl_get_cookies=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_curl_update_loader") ) { nme_curl_update_loader=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_curl_process_loaders") ) { nme_curl_process_loaders=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_curl_get_error_message") ) { nme_curl_get_error_message=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("nmeHandle"));
	outFields->push(HX_CSTRING("dataFormat"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("bytesTotal"));
	outFields->push(HX_CSTRING("bytesLoaded"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("activeLoaders"),
	HX_CSTRING("urlInvalid"),
	HX_CSTRING("urlInit"),
	HX_CSTRING("urlLoading"),
	HX_CSTRING("urlComplete"),
	HX_CSTRING("urlError"),
	HX_CSTRING("hasActive"),
	HX_CSTRING("initialize"),
	HX_CSTRING("nmeLoadPending"),
	HX_CSTRING("nmePollData"),
	HX_CSTRING("nme_curl_create"),
	HX_CSTRING("nme_curl_process_loaders"),
	HX_CSTRING("nme_curl_update_loader"),
	HX_CSTRING("nme_curl_get_code"),
	HX_CSTRING("nme_curl_get_error_message"),
	HX_CSTRING("nme_curl_get_data"),
	HX_CSTRING("nme_curl_get_cookies"),
	HX_CSTRING("nme_curl_initialize"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("dispatchHTTPStatus"),
	HX_CSTRING("onError"),
	HX_CSTRING("nmeDataComplete"),
	HX_CSTRING("load"),
	HX_CSTRING("getCookies"),
	HX_CSTRING("close"),
	HX_CSTRING("nmeOnComplete"),
	HX_CSTRING("state"),
	HX_CSTRING("nmeHandle"),
	HX_CSTRING("dataFormat"),
	HX_CSTRING("data"),
	HX_CSTRING("bytesTotal"),
	HX_CSTRING("bytesLoaded"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLLoader_obj::activeLoaders,"activeLoaders");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_create,"nme_curl_create");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_process_loaders,"nme_curl_process_loaders");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_update_loader,"nme_curl_update_loader");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_code,"nme_curl_get_code");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_error_message,"nme_curl_get_error_message");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_data,"nme_curl_get_data");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_cookies,"nme_curl_get_cookies");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_initialize,"nme_curl_initialize");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::activeLoaders,"activeLoaders");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_create,"nme_curl_create");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_process_loaders,"nme_curl_process_loaders");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_update_loader,"nme_curl_update_loader");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_get_code,"nme_curl_get_code");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_get_error_message,"nme_curl_get_error_message");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_get_data,"nme_curl_get_data");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_get_cookies,"nme_curl_get_cookies");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_initialize,"nme_curl_initialize");
};

Class URLLoader_obj::__mClass;

void URLLoader_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.net.URLLoader"), hx::TCanCast< URLLoader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void URLLoader_obj::__boot()
{
	activeLoaders= ::List_obj::__new();
	urlInvalid= (int)0;
	urlInit= (int)1;
	urlLoading= (int)2;
	urlComplete= (int)3;
	urlError= (int)4;
	nme_curl_create= ::native::Loader_obj::load(HX_CSTRING("nme_curl_create"),(int)1);
	nme_curl_process_loaders= ::native::Loader_obj::load(HX_CSTRING("nme_curl_process_loaders"),(int)0);
	nme_curl_update_loader= ::native::Loader_obj::load(HX_CSTRING("nme_curl_update_loader"),(int)2);
	nme_curl_get_code= ::native::Loader_obj::load(HX_CSTRING("nme_curl_get_code"),(int)1);
	nme_curl_get_error_message= ::native::Loader_obj::load(HX_CSTRING("nme_curl_get_error_message"),(int)1);
	nme_curl_get_data= ::native::Loader_obj::load(HX_CSTRING("nme_curl_get_data"),(int)1);
	nme_curl_get_cookies= ::native::Loader_obj::load(HX_CSTRING("nme_curl_get_cookies"),(int)1);
	nme_curl_initialize= ::native::Loader_obj::load(HX_CSTRING("nme_curl_initialize"),(int)1);
}

} // end namespace native
} // end namespace net
