#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_utils_ArrayBufferView
#include <native/utils/ArrayBufferView.h>
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
namespace utils{

Void ArrayBufferView_obj::__construct(Dynamic inLengthOrBuffer,hx::Null< int >  __o_inByteOffset,Dynamic inLength)
{
HX_STACK_PUSH("ArrayBufferView::new","native/utils/ArrayBufferView.hx",23);
int inByteOffset = __o_inByteOffset.Default(0);
{
	HX_STACK_LINE(25)
	if ((::Std_obj::is(inLengthOrBuffer,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(27)
		this->byteLength = ::Std_obj::_int(inLengthOrBuffer);
		HX_STACK_LINE(28)
		this->byteOffset = (int)0;
		HX_STACK_LINE(29)
		this->buffer = ::native::utils::ByteArray_obj::__new(::Std_obj::_int(inLengthOrBuffer));
	}
	else{
		HX_STACK_LINE(33)
		this->buffer = inLengthOrBuffer;
		HX_STACK_LINE(35)
		if (((this->buffer == null()))){
			HX_STACK_LINE(36)
			hx::Throw (HX_CSTRING("Invalid input buffer"));
		}
		HX_STACK_LINE(38)
		this->byteOffset = inByteOffset;
		HX_STACK_LINE(40)
		if (((this->byteOffset > this->buffer->length))){
			HX_STACK_LINE(41)
			hx::Throw (HX_CSTRING("Invalid starting position"));
		}
		HX_STACK_LINE(43)
		if (((inLength == null()))){
			HX_STACK_LINE(43)
			this->byteLength = (this->buffer->length - inByteOffset);
		}
		else{
			HX_STACK_LINE(49)
			this->byteLength = inLength;
			HX_STACK_LINE(51)
			if ((((this->byteLength + this->byteOffset) > this->buffer->length))){
				HX_STACK_LINE(52)
				hx::Throw (HX_CSTRING("Invalid buffer length"));
			}
		}
	}
	HX_STACK_LINE(58)
	this->buffer->bigEndian = false;
	HX_STACK_LINE(61)
	this->bytes = this->buffer->b;
}
;
	return null();
}

ArrayBufferView_obj::~ArrayBufferView_obj() { }

Dynamic ArrayBufferView_obj::__CreateEmpty() { return  new ArrayBufferView_obj; }
hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new(Dynamic inLengthOrBuffer,hx::Null< int >  __o_inByteOffset,Dynamic inLength)
{  hx::ObjectPtr< ArrayBufferView_obj > result = new ArrayBufferView_obj();
	result->__construct(inLengthOrBuffer,__o_inByteOffset,inLength);
	return result;}

Dynamic ArrayBufferView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferView_obj > result = new ArrayBufferView_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *ArrayBufferView_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::native::utils::IMemoryRange_obj)) return operator ::native::utils::IMemoryRange_obj *();
	return super::__ToInterface(inType);
}

Void ArrayBufferView_obj::setFloat32( int bytePos,Float v){
{
		HX_STACK_PUSH("ArrayBufferView::setFloat32","native/utils/ArrayBufferView.hx",89);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bytePos,"bytePos");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(92)
		if ((((bytePos - bytePos) > (int)4))){
			HX_STACK_LINE(92)
			hx::Throw (::native::utils::ArrayBufferView_obj::invalidDataIndex);
		}
		HX_STACK_LINE(96)
		::__hxcpp_memory_set_float(this->bytes,(bytePos + this->byteOffset),v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setFloat32,(void))

Float ArrayBufferView_obj::getFloat32( int bytePos){
	HX_STACK_PUSH("ArrayBufferView::getFloat32","native/utils/ArrayBufferView.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bytePos,"bytePos");
	HX_STACK_LINE(76)
	if ((((bytePos - bytePos) > (int)4))){
		HX_STACK_LINE(76)
		hx::Throw (::native::utils::ArrayBufferView_obj::invalidDataIndex);
	}
	HX_STACK_LINE(80)
	return ::__hxcpp_memory_get_float(this->bytes,(bytePos + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getFloat32,return )

int ArrayBufferView_obj::getLength( ){
	HX_STACK_PUSH("ArrayBufferView::getLength","native/utils/ArrayBufferView.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	return this->byteLength;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getLength,return )

int ArrayBufferView_obj::getStart( ){
	HX_STACK_PUSH("ArrayBufferView::getStart","native/utils/ArrayBufferView.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(69)
	return this->byteOffset;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getStart,return )

::native::utils::ByteArray ArrayBufferView_obj::getByteBuffer( ){
	HX_STACK_PUSH("ArrayBufferView::getByteBuffer","native/utils/ArrayBufferView.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_LINE(68)
	return this->buffer;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getByteBuffer,return )

::String ArrayBufferView_obj::invalidDataIndex;


ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
}

Dynamic ArrayBufferView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setFloat32") ) { return setFloat32_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloat32") ) { return getFloat32_dyn(); }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidDataIndex") ) { return invalidDataIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayBufferView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::native::utils::ByteArray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidDataIndex") ) { invalidDataIndex=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bytes"));
	outFields->push(HX_CSTRING("byteLength"));
	outFields->push(HX_CSTRING("byteOffset"));
	outFields->push(HX_CSTRING("buffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("invalidDataIndex"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setFloat32"),
	HX_CSTRING("getFloat32"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getStart"),
	HX_CSTRING("getByteBuffer"),
	HX_CSTRING("bytes"),
	HX_CSTRING("byteLength"),
	HX_CSTRING("byteOffset"),
	HX_CSTRING("buffer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::invalidDataIndex,"invalidDataIndex");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::invalidDataIndex,"invalidDataIndex");
};

Class ArrayBufferView_obj::__mClass;

void ArrayBufferView_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.utils.ArrayBufferView"), hx::TCanCast< ArrayBufferView_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ArrayBufferView_obj::__boot()
{
	invalidDataIndex= HX_CSTRING("Invalid data index");
}

} // end namespace native
} // end namespace utils
