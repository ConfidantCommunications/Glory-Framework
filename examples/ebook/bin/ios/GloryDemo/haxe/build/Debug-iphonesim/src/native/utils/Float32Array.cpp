#include <hxcpp.h>

#ifndef INCLUDED_native_geom_Matrix3D
#include <native/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_native_utils_ArrayBufferView
#include <native/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_native_utils_Float32Array
#include <native/utils/Float32Array.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
namespace native{
namespace utils{

Void Float32Array_obj::__construct(Dynamic inBufferOrArray,hx::Null< int >  __o_inStart,Dynamic inLen)
{
HX_STACK_PUSH("Float32Array::new","native/utils/Float32Array.hx",17);
int inStart = __o_inStart.Default(0);
{
	HX_STACK_LINE(19)
	this->BYTES_PER_ELEMENT = (int)4;
	HX_STACK_LINE(20)
	Array< Float > floats = inBufferOrArray;		HX_STACK_VAR(floats,"floats");
	HX_STACK_LINE(22)
	if (((floats != null()))){
		HX_STACK_LINE(24)
		this->length = floats->length;
		HX_STACK_LINE(26)
		super::__construct((int(this->length) << int((int)2)),null(),null());
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(32)
			while(((_g1 < _g))){
				HX_STACK_LINE(32)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(35)
				::__hxcpp_memory_set_float(this->bytes,(int(i) << int((int)2)),floats->__get(i));
			}
		}
	}
	else{
		HX_STACK_LINE(44)
		super::__construct(inBufferOrArray,inStart,inLen);
		HX_STACK_LINE(46)
		if (((((int(this->byteLength) & int((int)3))) > (int)0))){
			HX_STACK_LINE(47)
			hx::Throw (HX_CSTRING("Invalid array size"));
		}
		HX_STACK_LINE(49)
		this->length = (int(this->byteLength) >> int((int)2));
		HX_STACK_LINE(50)
		if (((this->length != (int(this->byteLength) << int((int)2))))){
			HX_STACK_LINE(51)
			hx::Throw (HX_CSTRING("Invalid length multiple"));
		}
	}
}
;
	return null();
}

Float32Array_obj::~Float32Array_obj() { }

Dynamic Float32Array_obj::__CreateEmpty() { return  new Float32Array_obj; }
hx::ObjectPtr< Float32Array_obj > Float32Array_obj::__new(Dynamic inBufferOrArray,hx::Null< int >  __o_inStart,Dynamic inLen)
{  hx::ObjectPtr< Float32Array_obj > result = new Float32Array_obj();
	result->__construct(inBufferOrArray,__o_inStart,inLen);
	return result;}

Dynamic Float32Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Float32Array_obj > result = new Float32Array_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Float32Array_obj::__set( int index,Float v){
{
		HX_STACK_PUSH("Float32Array::__set","native/utils/Float32Array.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index,"index");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(66)
		int bytePos = (int(index) << int((int)2));		HX_STACK_VAR(bytePos,"bytePos");
		HX_STACK_LINE(66)
		if ((((bytePos - bytePos) > (int)4))){
			HX_STACK_LINE(66)
			hx::Throw (::native::utils::ArrayBufferView_obj::invalidDataIndex);
		}
		HX_STACK_LINE(66)
		::__hxcpp_memory_set_float(this->bytes,(bytePos + this->byteOffset),v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Float32Array_obj,__set,(void))

Float Float32Array_obj::__get( int index){
	HX_STACK_PUSH("Float32Array::__get","native/utils/Float32Array.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	struct _Function_1_1{
		inline static Float Block( int &index,::native::utils::Float32Array_obj *__this){
			HX_STACK_PUSH("*::closure","native/utils/Float32Array.hx",65);
			{
				HX_STACK_LINE(65)
				int bytePos = (int(index) << int((int)2));		HX_STACK_VAR(bytePos,"bytePos");
				HX_STACK_LINE(65)
				if ((((bytePos - bytePos) > (int)4))){
					HX_STACK_LINE(65)
					hx::Throw (::native::utils::ArrayBufferView_obj::invalidDataIndex);
				}
				HX_STACK_LINE(65)
				return ::__hxcpp_memory_get_float(__this->bytes,(bytePos + __this->byteOffset));
			}
			return null();
		}
	};
	HX_STACK_LINE(65)
	return _Function_1_1::Block(index,this);
}


HX_DEFINE_DYNAMIC_FUNC1(Float32Array_obj,__get,return )

int Float32Array_obj::SBYTES_PER_ELEMENT;

::native::utils::Float32Array Float32Array_obj::fromMatrix( ::native::geom::Matrix3D inMatrix){
	HX_STACK_PUSH("Float32Array::fromMatrix","native/utils/Float32Array.hx",58);
	HX_STACK_ARG(inMatrix,"inMatrix");
	HX_STACK_LINE(58)
	return ::native::utils::Float32Array_obj::__new(inMatrix->rawData,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Array_obj,fromMatrix,return )


Float32Array_obj::Float32Array_obj()
{
}

void Float32Array_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Float32Array);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Float32Array_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Float32Array_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromMatrix") ) { return fromMatrix_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { return BYTES_PER_ELEMENT; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"SBYTES_PER_ELEMENT") ) { return SBYTES_PER_ELEMENT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Float32Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { BYTES_PER_ELEMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"SBYTES_PER_ELEMENT") ) { SBYTES_PER_ELEMENT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Float32Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("BYTES_PER_ELEMENT"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SBYTES_PER_ELEMENT"),
	HX_CSTRING("fromMatrix"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("__set"),
	HX_CSTRING("__get"),
	HX_CSTRING("length"),
	HX_CSTRING("BYTES_PER_ELEMENT"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Float32Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Float32Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

Class Float32Array_obj::__mClass;

void Float32Array_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.utils.Float32Array"), hx::TCanCast< Float32Array_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Float32Array_obj::__boot()
{
	SBYTES_PER_ELEMENT= (int)4;
}

} // end namespace native
} // end namespace utils
