#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_native_net_URLVariables
#include <native/net/URLVariables.h>
#endif
namespace native{
namespace net{

Void URLVariables_obj::__construct(::String inEncoded)
{
HX_STACK_PUSH("URLVariables::new","native/net/URLVariables.hx",7);
{
	HX_STACK_LINE(7)
	if (((inEncoded != null()))){
		HX_STACK_LINE(10)
		this->decode(inEncoded);
	}
}
;
	return null();
}

URLVariables_obj::~URLVariables_obj() { }

Dynamic URLVariables_obj::__CreateEmpty() { return  new URLVariables_obj; }
hx::ObjectPtr< URLVariables_obj > URLVariables_obj::__new(::String inEncoded)
{  hx::ObjectPtr< URLVariables_obj > result = new URLVariables_obj();
	result->__construct(inEncoded);
	return result;}

Dynamic URLVariables_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLVariables_obj > result = new URLVariables_obj();
	result->__construct(inArgs[0]);
	return result;}

::String URLVariables_obj::toString( ){
	HX_STACK_PUSH("URLVariables::toString","native/net/URLVariables.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_LINE(40)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(41)
	Array< ::String > fields = ::Reflect_obj::fields(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		while(((_g < fields->length))){
			HX_STACK_LINE(43)
			::String f = fields->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(43)
			++(_g);
			HX_STACK_LINE(44)
			result->push(((::StringTools_obj::urlEncode(f) + HX_CSTRING("=")) + ::StringTools_obj::urlEncode(::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),f))));
		}
	}
	HX_STACK_LINE(46)
	return result->join(HX_CSTRING("&"));
}


HX_DEFINE_DYNAMIC_FUNC0(URLVariables_obj,toString,return )

Void URLVariables_obj::decode( ::String inVars){
{
		HX_STACK_PUSH("URLVariables::decode","native/net/URLVariables.hx",15);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inVars,"inVars");
		HX_STACK_LINE(17)
		Array< ::String > fields = ::Reflect_obj::fields(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(19)
			while(((_g < fields->length))){
				HX_STACK_LINE(19)
				::String f = fields->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(19)
				++(_g);
				HX_STACK_LINE(20)
				::Reflect_obj::deleteField(hx::ObjectPtr<OBJ_>(this),f);
			}
		}
		HX_STACK_LINE(22)
		Array< ::String > fields1 = inVars.split(HX_CSTRING(";"))->join(HX_CSTRING("&")).split(HX_CSTRING("&"));		HX_STACK_VAR(fields1,"fields1");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			while(((_g < fields1->length))){
				HX_STACK_LINE(24)
				::String f = fields1->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(24)
				++(_g);
				HX_STACK_LINE(26)
				int eq = f.indexOf(HX_CSTRING("="),null());		HX_STACK_VAR(eq,"eq");
				HX_STACK_LINE(28)
				if (((eq > (int)0))){
					HX_STACK_LINE(29)
					this->__SetField(::StringTools_obj::urlDecode(f.substr((int)0,eq)),::StringTools_obj::urlDecode(f.substr((eq + (int)1),null())),false);
				}
				else{
					HX_STACK_LINE(30)
					if (((eq != (int)0))){
						HX_STACK_LINE(31)
						this->__SetField(::StringTools_obj::urlDecode(f),HX_CSTRING(""),false);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLVariables_obj,decode,(void))


URLVariables_obj::URLVariables_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void URLVariables_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLVariables);
	HX_MARK_DYNAMIC;
	HX_MARK_END_CLASS();
}

void URLVariables_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
}

Dynamic URLVariables_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { return decode_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic URLVariables_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void URLVariables_obj::__GetFields(Array< ::String> &outFields)
{
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("decode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLVariables_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLVariables_obj::__mClass,"__mClass");
};

Class URLVariables_obj::__mClass;

void URLVariables_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.net.URLVariables"), hx::TCanCast< URLVariables_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void URLVariables_obj::__boot()
{
}

} // end namespace native
} // end namespace net
