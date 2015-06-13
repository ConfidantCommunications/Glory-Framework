#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_cpp_zip_Compress
#include <cpp/zip/Compress.h>
#endif
#ifndef INCLUDED_cpp_zip_Uncompress
#include <cpp/zip/Uncompress.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_errors_EOFError
#include <native/errors/EOFError.h>
#endif
#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_CompressionAlgorithm
#include <native/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
namespace native{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_inSize)
{
HX_STACK_PUSH("ByteArray::new","native/utils/ByteArray.hx",37);
int inSize = __o_inSize.Default(0);
{
	HX_STACK_LINE(39)
	this->bigEndian = true;
	HX_STACK_LINE(40)
	this->position = (int)0;
	HX_STACK_LINE(42)
	if (((inSize >= (int)0))){
		HX_STACK_LINE(49)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(50)
		if (((inSize > (int)0))){
			HX_STACK_LINE(51)
			data[(inSize - (int)1)] = (int)0;
		}
		HX_STACK_LINE(52)
		super::__construct(inSize,data);
	}
}
;
	return null();
}

ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_inSize)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(__o_inSize);
	return result;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ByteArray_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::native::utils::IMemoryRange_obj)) return operator ::native::utils::IMemoryRange_obj *();
	if (inType==typeid( ::native::utils::IDataInput_obj)) return operator ::native::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

void ByteArray_obj::__init__() {
HX_STACK_PUSH("ByteArray::__init__","native/utils/ByteArray.hx",74);
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	::native::utils::ByteArray run(int inLen){
		HX_STACK_PUSH("*::_Function_1_1","native/utils/ByteArray.hx",76);
		HX_STACK_ARG(inLen,"inLen");
		{
			HX_STACK_LINE(76)
			return ::native::utils::ByteArray_obj::__new(inLen);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(76)
	Dynamic factory =  Dynamic(new _Function_1_1());		HX_STACK_VAR(factory,"factory");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	Void run(::native::utils::ByteArray inArray,int inLen){
		HX_STACK_PUSH("*::_Function_1_2","native/utils/ByteArray.hx",77);
		HX_STACK_ARG(inArray,"inArray");
		HX_STACK_ARG(inLen,"inLen");
		{
			HX_STACK_LINE(79)
			if (((inLen > (int)0))){
				HX_STACK_LINE(80)
				inArray->__Field(HX_CSTRING("ensureElem"),true)((inLen - (int)1),true);
			}
			HX_STACK_LINE(81)
			inArray->__FieldRef(HX_CSTRING("length")) = inLen;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(77)
	Dynamic resize =  Dynamic(new _Function_1_2());		HX_STACK_VAR(resize,"resize");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	Array< unsigned char > run(::native::utils::ByteArray inArray){
		HX_STACK_PUSH("*::_Function_1_3","native/utils/ByteArray.hx",85);
		HX_STACK_ARG(inArray,"inArray");
		{
			HX_STACK_LINE(85)
			return (  (((inArray == null()))) ? Array< unsigned char >(null()) : Array< unsigned char >(inArray->__Field(HX_CSTRING("b"),true)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(85)
	Dynamic bytes =  Dynamic(new _Function_1_3());		HX_STACK_VAR(bytes,"bytes");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int run(::native::utils::ByteArray inArray){
		HX_STACK_PUSH("*::_Function_1_4","native/utils/ByteArray.hx",86);
		HX_STACK_ARG(inArray,"inArray");
		{
			HX_STACK_LINE(86)
			return (  (((inArray == null()))) ? int((int)0) : int(inArray->__Field(HX_CSTRING("length"),true)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(86)
	Dynamic slen =  Dynamic(new _Function_1_4());		HX_STACK_VAR(slen,"slen");
	HX_STACK_LINE(88)
	Dynamic init = ::native::Loader_obj::load(HX_CSTRING("nme_byte_array_init"),(int)4);		HX_STACK_VAR(init,"init");
	HX_STACK_LINE(89)
	init(factory,slen,resize,bytes);
}
}

::String ByteArray_obj::set_endian( ::String s){
	HX_STACK_PUSH("ByteArray::set_endian","native/utils/ByteArray.hx",670);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(670)
	this->bigEndian = (s == HX_CSTRING("bigEndian"));
	HX_STACK_LINE(670)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

::String ByteArray_obj::get_endian( ){
	HX_STACK_PUSH("ByteArray::get_endian","native/utils/ByteArray.hx",669);
	HX_STACK_THIS(this);
	HX_STACK_LINE(669)
	return (  ((this->bigEndian)) ? ::String(HX_CSTRING("bigEndian")) : ::String(HX_CSTRING("littleEndian")) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_endian,return )

int ByteArray_obj::get_byteLength( ){
	HX_STACK_PUSH("ByteArray::get_byteLength","native/utils/ByteArray.hx",668);
	HX_STACK_THIS(this);
	HX_STACK_LINE(668)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_byteLength,return )

int ByteArray_obj::get_bytesAvailable( ){
	HX_STACK_PUSH("ByteArray::get_bytesAvailable","native/utils/ByteArray.hx",667);
	HX_STACK_THIS(this);
	HX_STACK_LINE(667)
	return (this->length - this->position);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bytesAvailable,return )

Void ByteArray_obj::writeUTFBytes( ::String s){
{
		HX_STACK_PUSH("ByteArray::writeUTFBytes","native/utils/ByteArray.hx",647);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(652)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(655)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

Void ByteArray_obj::writeUTF( ::String s){
{
		HX_STACK_PUSH("ByteArray::writeUTF","native/utils/ByteArray.hx",633);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(638)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(641)
		this->writeShort(bytes->length);
		HX_STACK_LINE(642)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		HX_STACK_PUSH("ByteArray::writeUnsignedInt","native/utils/ByteArray.hx",626);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(626)
		this->writeInt(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		HX_STACK_PUSH("ByteArray::writeShort","native/utils/ByteArray.hx",607);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(609)
		this->ensureElem((this->position + (int)1),true);
		HX_STACK_LINE(611)
		if ((this->bigEndian)){
			HX_STACK_LINE(613)
			this->b->__unsafe_set((this->position)++,(int(value) >> int((int)8)));
			HX_STACK_LINE(614)
			this->b->__unsafe_set((this->position)++,value);
		}
		else{
			HX_STACK_LINE(618)
			this->b->__unsafe_set((this->position)++,value);
			HX_STACK_LINE(619)
			this->b->__unsafe_set((this->position)++,(int(value) >> int((int)8)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeInt( int value){
{
		HX_STACK_PUSH("ByteArray::writeInt","native/utils/ByteArray.hx",580);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(582)
		this->ensureElem((this->position + (int)3),true);
		HX_STACK_LINE(584)
		if ((this->bigEndian)){
			HX_STACK_LINE(586)
			this->b->__unsafe_set((this->position)++,(int(value) >> int((int)24)));
			HX_STACK_LINE(587)
			this->b->__unsafe_set((this->position)++,(int(value) >> int((int)16)));
			HX_STACK_LINE(588)
			this->b->__unsafe_set((this->position)++,(int(value) >> int((int)8)));
			HX_STACK_LINE(589)
			this->b->__unsafe_set((this->position)++,value);
		}
		else{
			HX_STACK_LINE(593)
			this->b->__unsafe_set((this->position)++,value);
			HX_STACK_LINE(594)
			this->b->__unsafe_set((this->position)++,(int(value) >> int((int)8)));
			HX_STACK_LINE(595)
			this->b->__unsafe_set((this->position)++,(int(value) >> int((int)16)));
			HX_STACK_LINE(596)
			this->b->__unsafe_set((this->position)++,(int(value) >> int((int)24)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeFloat( Float x){
{
		HX_STACK_PUSH("ByteArray::writeFloat","native/utils/ByteArray.hx",567);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(572)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(::native::utils::ByteArray_obj::_float_bytes(x,this->bigEndian));		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(575)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeFile( ::String inString){
{
		HX_STACK_PUSH("ByteArray::writeFile","native/utils/ByteArray.hx",559);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inString,"inString");
		HX_STACK_LINE(559)
		::native::utils::ByteArray_obj::nme_byte_array_overwrite_file(inString,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

Void ByteArray_obj::writeDouble( Float x){
{
		HX_STACK_PUSH("ByteArray::writeDouble","native/utils/ByteArray.hx",545);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(550)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(::native::utils::ByteArray_obj::_double_bytes(x,this->bigEndian));		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(553)
		this->writeBytes(bytes,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_inOffset,hx::Null< int >  __o_inLength){
int inOffset = __o_inOffset.Default(0);
int inLength = __o_inLength.Default(0);
	HX_STACK_PUSH("ByteArray::writeBytes","native/utils/ByteArray.hx",534);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bytes,"bytes");
	HX_STACK_ARG(inOffset,"inOffset");
	HX_STACK_ARG(inLength,"inLength");
{
		HX_STACK_LINE(536)
		if (((inLength == (int)0))){
			HX_STACK_LINE(536)
			inLength = (bytes->length - inOffset);
		}
		HX_STACK_LINE(537)
		this->ensureElem(((this->position + inLength) - (int)1),true);
		HX_STACK_LINE(538)
		int opos = this->position;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(539)
		hx::AddEq(this->position,inLength);
		HX_STACK_LINE(540)
		this->blit(opos,bytes,inOffset,inLength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_STACK_PUSH("ByteArray::writeByte","native/utils/ByteArray.hx",521);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(523)
		this->ensureElem(this->position,true);
		HX_STACK_LINE(526)
		this->b[(this->position)++] = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_STACK_PUSH("ByteArray::writeBoolean","native/utils/ByteArray.hx",514);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(516)
			this->ensureElem(this->position,true);
			HX_STACK_LINE(516)
			this->b[(this->position)++] = (  ((value)) ? int((int)1) : int((int)0) );
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::write_uncheck( int inByte){
{
		HX_STACK_PUSH("ByteArray::write_uncheck","native/utils/ByteArray.hx",503);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inByte,"inByte");
		HX_STACK_LINE(503)
		this->b->__unsafe_set((this->position)++,inByte);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,write_uncheck,(void))

Void ByteArray_obj::uncompress( ::native::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_PUSH("ByteArray::uncompress","native/utils/ByteArray.hx",459);
		HX_STACK_THIS(this);
		HX_STACK_ARG(algorithm,"algorithm");
		HX_STACK_LINE(461)
		if (((algorithm == null()))){
			HX_STACK_LINE(461)
			algorithm = ::native::utils::CompressionAlgorithm_obj::GZIP_dyn();
		}
		HX_STACK_LINE(466)
		::native::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(469)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(471)
		if (((algorithm == ::native::utils::CompressionAlgorithm_obj::LZMA_dyn()))){
			HX_STACK_LINE(471)
			result = ::haxe::io::Bytes_obj::ofData(::native::utils::ByteArray_obj::nme_lzma_decode(src->b));
		}
		else{
			struct _Function_2_1{
				inline static int Block( ::native::utils::CompressionAlgorithm &algorithm){
					HX_STACK_PUSH("*::closure","native/utils/ByteArray.hx",477);
					{
						HX_STACK_LINE(477)
						{
							::native::utils::CompressionAlgorithm _switch_1 = (algorithm);
							switch((_switch_1)->GetIndex()){
								case 0: {
									HX_STACK_LINE(479)
									return (int)-15;
								}
								;break;
								case 3: {
									HX_STACK_LINE(480)
									return (int)31;
								}
								;break;
								default: {
									HX_STACK_LINE(481)
									return (int)15;
								}
							}
						}
					}
					return null();
				}
			};
			HX_STACK_LINE(477)
			int windowBits = _Function_2_1::Block(algorithm);		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(488)
			result = ::cpp::zip::Uncompress_obj::run(src,null());
		}
		HX_STACK_LINE(493)
		this->b = result->b;
		HX_STACK_LINE(494)
		this->length = result->length;
		HX_STACK_LINE(495)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

int ByteArray_obj::ThrowEOFi( ){
	HX_STACK_PUSH("ByteArray::ThrowEOFi","native/utils/ByteArray.hx",451);
	HX_STACK_THIS(this);
	HX_STACK_LINE(453)
	hx::Throw (::native::errors::EOFError_obj::__new());
	HX_STACK_LINE(454)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,ThrowEOFi,return )

::native::utils::ByteArray ByteArray_obj::slice( int inBegin,Dynamic inEnd){
	HX_STACK_PUSH("ByteArray::slice","native/utils/ByteArray.hx",415);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inBegin,"inBegin");
	HX_STACK_ARG(inEnd,"inEnd");
	HX_STACK_LINE(417)
	int begin = inBegin;		HX_STACK_VAR(begin,"begin");
	HX_STACK_LINE(419)
	if (((begin < (int)0))){
		HX_STACK_LINE(421)
		hx::AddEq(begin,this->length);
		HX_STACK_LINE(422)
		if (((begin < (int)0))){
			HX_STACK_LINE(423)
			begin = (int)0;
		}
	}
	HX_STACK_LINE(427)
	int end = (  (((inEnd == null()))) ? Dynamic(this->length) : Dynamic(inEnd) );		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(429)
	if (((end < (int)0))){
		HX_STACK_LINE(431)
		hx::AddEq(end,this->length);
		HX_STACK_LINE(433)
		if (((end < (int)0))){
			HX_STACK_LINE(434)
			end = (int)0;
		}
	}
	HX_STACK_LINE(438)
	if (((begin >= end))){
		HX_STACK_LINE(439)
		return ::native::utils::ByteArray_obj::__new(null());
	}
	HX_STACK_LINE(441)
	::native::utils::ByteArray result = ::native::utils::ByteArray_obj::__new((end - begin));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(443)
	int opos = this->position;		HX_STACK_VAR(opos,"opos");
	HX_STACK_LINE(444)
	result->blit((int)0,hx::ObjectPtr<OBJ_>(this),begin,(end - begin));
	HX_STACK_LINE(446)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,slice,return )

Void ByteArray_obj::setLength( int inLength){
{
		HX_STACK_PUSH("ByteArray::setLength","native/utils/ByteArray.hx",405);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inLength,"inLength");
		HX_STACK_LINE(407)
		if (((inLength > (int)0))){
			HX_STACK_LINE(408)
			this->ensureElem((inLength - (int)1),false);
		}
		HX_STACK_LINE(409)
		this->length = inLength;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

::String ByteArray_obj::readUTFBytes( int inLen){
	HX_STACK_PUSH("ByteArray::readUTFBytes","native/utils/ByteArray.hx",386);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inLen,"inLen");
	HX_STACK_LINE(388)
	if ((((this->position + inLen) > this->length))){
		HX_STACK_LINE(389)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(391)
	int p = this->position;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(392)
	hx::AddEq(this->position,inLen);
	HX_STACK_LINE(397)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(398)
	::__hxcpp_string_of_bytes(this->b,result,p,inLen);
	HX_STACK_LINE(399)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

::String ByteArray_obj::readUTF( ){
	HX_STACK_PUSH("ByteArray::readUTF","native/utils/ByteArray.hx",378);
	HX_STACK_THIS(this);
	HX_STACK_LINE(380)
	int len = this->readUnsignedShort();		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(381)
	return this->readUTFBytes(len);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

int ByteArray_obj::readUnsignedShort( ){
	HX_STACK_PUSH("ByteArray::readUnsignedShort","native/utils/ByteArray.hx",368);
	HX_STACK_THIS(this);
	HX_STACK_LINE(370)
	int ch1 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(371)
	int ch2 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(373)
	return (  ((this->bigEndian)) ? int((int((int(ch1) << int((int)8))) | int(ch2))) : int((((int(ch2) << int((int)8))) + ch1)) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

int ByteArray_obj::readUnsignedInt( ){
	HX_STACK_PUSH("ByteArray::readUnsignedInt","native/utils/ByteArray.hx",356);
	HX_STACK_THIS(this);
	HX_STACK_LINE(358)
	int ch1 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(359)
	int ch2 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(360)
	int ch3 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(361)
	int ch4 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(363)
	return (  ((this->bigEndian)) ? int((int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4))) : int((int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1))) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedByte( ){
	HX_STACK_PUSH("ByteArray::readUnsignedByte","native/utils/ByteArray.hx",349);
	HX_STACK_THIS(this);
	HX_STACK_LINE(349)
	return (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readShort( ){
	HX_STACK_PUSH("ByteArray::readShort","native/utils/ByteArray.hx",337);
	HX_STACK_THIS(this);
	HX_STACK_LINE(339)
	int ch1 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(340)
	int ch2 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(342)
	int val = (  ((this->bigEndian)) ? int((int((int(ch1) << int((int)8))) | int(ch2))) : int((int((int(ch2) << int((int)8))) | int(ch1))) );		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(344)
	return (  (((((int(val) & int((int)32768))) != (int)0))) ? int((val - (int)65536)) : int(val) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

::String ByteArray_obj::readMultiByte( int inLen,::String charSet){
	HX_STACK_PUSH("ByteArray::readMultiByte","native/utils/ByteArray.hx",329);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inLen,"inLen");
	HX_STACK_ARG(charSet,"charSet");
	HX_STACK_LINE(329)
	return this->readUTFBytes(inLen);
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,readMultiByte,return )

int ByteArray_obj::readInt( ){
	HX_STACK_PUSH("ByteArray::readInt","native/utils/ByteArray.hx",317);
	HX_STACK_THIS(this);
	HX_STACK_LINE(319)
	int ch1 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(320)
	int ch2 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(321)
	int ch3 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(322)
	int ch4 = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(324)
	return (  ((this->bigEndian)) ? int((int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4))) : int((int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1))) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

Float ByteArray_obj::readFloat( ){
	HX_STACK_PUSH("ByteArray::readFloat","native/utils/ByteArray.hx",300);
	HX_STACK_THIS(this);
	HX_STACK_LINE(302)
	if ((((this->position + (int)4) > this->length))){
		HX_STACK_LINE(303)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(308)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::__new((int)4,this->b->slice(this->position,(this->position + (int)4)));		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(311)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(312)
	return ::native::utils::ByteArray_obj::_float_of_bytes(bytes->b,this->bigEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

Float ByteArray_obj::readDouble( ){
	HX_STACK_PUSH("ByteArray::readDouble","native/utils/ByteArray.hx",274);
	HX_STACK_THIS(this);
	HX_STACK_LINE(276)
	if ((((this->position + (int)8) > this->length))){
		HX_STACK_LINE(277)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(282)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::__new((int)8,this->b->slice(this->position,(this->position + (int)8)));		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(285)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(286)
	return ::native::utils::ByteArray_obj::_double_of_bytes(bytes->b,this->bigEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

Void ByteArray_obj::readBytes( ::native::utils::ByteArray outData,hx::Null< int >  __o_inOffset,hx::Null< int >  __o_inLen){
int inOffset = __o_inOffset.Default(0);
int inLen = __o_inLen.Default(0);
	HX_STACK_PUSH("ByteArray::readBytes","native/utils/ByteArray.hx",248);
	HX_STACK_THIS(this);
	HX_STACK_ARG(outData,"outData");
	HX_STACK_ARG(inOffset,"inOffset");
	HX_STACK_ARG(inLen,"inLen");
{
		HX_STACK_LINE(250)
		if (((inLen == (int)0))){
			HX_STACK_LINE(251)
			inLen = (this->length - this->position);
		}
		HX_STACK_LINE(253)
		if ((((this->position + inLen) > this->length))){
			HX_STACK_LINE(254)
			this->ThrowEOFi();
		}
		HX_STACK_LINE(256)
		if (((outData->length < (inOffset + inLen)))){
			HX_STACK_LINE(257)
			outData->ensureElem(((inOffset + inLen) - (int)1),true);
		}
		HX_STACK_LINE(262)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(263)
		Array< unsigned char > b2 = outData->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(264)
		int p = this->position;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(265)
			while(((_g < inLen))){
				HX_STACK_LINE(265)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(266)
				b2[(inOffset + i)] = b1->__get((p + i));
			}
		}
		HX_STACK_LINE(269)
		hx::AddEq(this->position,inLen);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

int ByteArray_obj::readByte( ){
	HX_STACK_PUSH("ByteArray::readByte","native/utils/ByteArray.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_LINE(242)
	int val = (  (((this->position < this->length))) ? int(this->b->__get((this->position)++)) : int(this->ThrowEOFi()) );		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(243)
	return (  (((((int(val) & int((int)128))) != (int)0))) ? int((val - (int)256)) : int(val) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

bool ByteArray_obj::readBoolean( ){
	HX_STACK_PUSH("ByteArray::readBoolean","native/utils/ByteArray.hx",233);
	HX_STACK_THIS(this);
	HX_STACK_LINE(233)
	return (  ((((this->position + (int)1) < this->length))) ? bool((this->b->__get((this->position)++) != (int)0)) : bool((this->ThrowEOFi() != (int)0)) );
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

Void ByteArray_obj::inflate( ){
{
		HX_STACK_PUSH("ByteArray::inflate","native/utils/ByteArray.hx",226);
		HX_STACK_THIS(this);
		HX_STACK_LINE(226)
		this->uncompress(::native::utils::CompressionAlgorithm_obj::DEFLATE_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,inflate,(void))

int ByteArray_obj::getStart( ){
	HX_STACK_PUSH("ByteArray::getStart","native/utils/ByteArray.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_LINE(223)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getStart,return )

::native::utils::ByteArray ByteArray_obj::getByteBuffer( ){
	HX_STACK_PUSH("ByteArray::getByteBuffer","native/utils/ByteArray.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_LINE(222)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getByteBuffer,return )

int ByteArray_obj::getLength( ){
	HX_STACK_PUSH("ByteArray::getLength","native/utils/ByteArray.hx",218);
	HX_STACK_THIS(this);
	HX_STACK_LINE(218)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getLength,return )

Void ByteArray_obj::ensureElem( int inSize,bool inUpdateLenght){
{
		HX_STACK_PUSH("ByteArray::ensureElem","native/utils/ByteArray.hx",179);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inSize,"inSize");
		HX_STACK_ARG(inUpdateLenght,"inUpdateLenght");
		HX_STACK_LINE(181)
		int len = (inSize + (int)1);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(193)
		if (((this->b->length < len))){
			HX_STACK_LINE(194)
			this->b->__SetSize(len);
		}
		HX_STACK_LINE(197)
		if (((bool(inUpdateLenght) && bool((this->length < len))))){
			HX_STACK_LINE(198)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

Void ByteArray_obj::deflate( ){
{
		HX_STACK_PUSH("ByteArray::deflate","native/utils/ByteArray.hx",172);
		HX_STACK_THIS(this);
		HX_STACK_LINE(172)
		this->compress(::native::utils::CompressionAlgorithm_obj::DEFLATE_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,deflate,(void))

Void ByteArray_obj::compress( ::native::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_PUSH("ByteArray::compress","native/utils/ByteArray.hx",130);
		HX_STACK_THIS(this);
		HX_STACK_ARG(algorithm,"algorithm");
		HX_STACK_LINE(135)
		::native::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(138)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(140)
		if (((algorithm == ::native::utils::CompressionAlgorithm_obj::LZMA_dyn()))){
			HX_STACK_LINE(140)
			result = ::haxe::io::Bytes_obj::ofData(::native::utils::ByteArray_obj::nme_lzma_encode(src->b));
		}
		else{
			struct _Function_2_1{
				inline static int Block( ::native::utils::CompressionAlgorithm &algorithm){
					HX_STACK_PUSH("*::closure","native/utils/ByteArray.hx",146);
					{
						HX_STACK_LINE(146)
						{
							::native::utils::CompressionAlgorithm _switch_2 = (algorithm);
							switch((_switch_2)->GetIndex()){
								case 0: {
									HX_STACK_LINE(148)
									return (int)-15;
								}
								;break;
								case 3: {
									HX_STACK_LINE(149)
									return (int)31;
								}
								;break;
								default: {
									HX_STACK_LINE(150)
									return (int)15;
								}
							}
						}
					}
					return null();
				}
			};
			HX_STACK_LINE(146)
			int windowBits = _Function_2_1::Block(algorithm);		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(157)
			result = ::cpp::zip::Compress_obj::run(src,(int)8);
		}
		HX_STACK_LINE(162)
		this->b = result->b;
		HX_STACK_LINE(163)
		this->length = result->length;
		HX_STACK_LINE(164)
		this->position = this->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::clear( ){
{
		HX_STACK_PUSH("ByteArray::clear","native/utils/ByteArray.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_LINE(124)
		this->position = (int)0;
		HX_STACK_LINE(125)
		this->length = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,clear,(void))

Void ByteArray_obj::checkData( int inLength){
{
		HX_STACK_PUSH("ByteArray::checkData","native/utils/ByteArray.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inLength,"inLength");
		HX_STACK_LINE(114)
		if ((((inLength + this->position) > this->length))){
			HX_STACK_LINE(117)
			this->ThrowEOFi();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

::String ByteArray_obj::asString( ){
	HX_STACK_PUSH("ByteArray::asString","native/utils/ByteArray.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_LINE(107)
	return this->readUTFBytes(this->length);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_PUSH("ByteArray::__set","native/utils/ByteArray.hx",95);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pos,"pos");
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(95)
		this->b[pos] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

int ByteArray_obj::__get( int pos){
	HX_STACK_PUSH("ByteArray::__get","native/utils/ByteArray.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pos,"pos");
	HX_STACK_LINE(60)
	return this->b->__get(pos);
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

::native::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes inBytes){
	HX_STACK_PUSH("ByteArray::fromBytes","native/utils/ByteArray.hx",203);
	HX_STACK_ARG(inBytes,"inBytes");
	HX_STACK_LINE(205)
	::native::utils::ByteArray result = ::native::utils::ByteArray_obj::__new((int)-1);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(206)
	result->b = inBytes->b;
	HX_STACK_LINE(207)
	result->length = inBytes->length;
	HX_STACK_LINE(213)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::native::utils::ByteArray ByteArray_obj::readFile( ::String inString){
	HX_STACK_PUSH("ByteArray::readFile","native/utils/ByteArray.hx",292);
	HX_STACK_ARG(inString,"inString");
	HX_STACK_LINE(292)
	return ::native::utils::ByteArray_obj::nme_byte_array_read_file(inString);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

Dynamic ByteArray_obj::_double_bytes;

Dynamic ByteArray_obj::_double_of_bytes;

Dynamic ByteArray_obj::_float_bytes;

Dynamic ByteArray_obj::_float_of_bytes;

Dynamic ByteArray_obj::nme_byte_array_overwrite_file;

Dynamic ByteArray_obj::nme_byte_array_read_file;

Dynamic ByteArray_obj::nme_lzma_encode;

Dynamic ByteArray_obj::nme_lzma_decode;


ByteArray_obj::ByteArray_obj()
{
}

void ByteArray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ByteArray);
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(endian,"endian");
	HX_MARK_MEMBER_NAME(bytesAvailable,"bytesAvailable");
	HX_MARK_MEMBER_NAME(bigEndian,"bigEndian");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ByteArray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(endian,"endian");
	HX_VISIT_MEMBER_NAME(bytesAvailable,"bytesAvailable");
	HX_VISIT_MEMBER_NAME(bigEndian,"bigEndian");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ByteArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { return inCallProp ? get_endian() : endian; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { return readFile_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"ThrowEOFi") ) { return ThrowEOFi_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp ? get_byteLength() : byteLength; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { return _float_bytes; }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { return _double_bytes; }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"write_uncheck") ) { return write_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return inCallProp ? get_bytesAvailable() : bytesAvailable; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { return _float_of_bytes; }
		if (HX_FIELD_EQ(inName,"nme_lzma_encode") ) { return nme_lzma_encode; }
		if (HX_FIELD_EQ(inName,"nme_lzma_decode") ) { return nme_lzma_decode; }
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { return _double_of_bytes; }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_byte_array_read_file") ) { return nme_byte_array_read_file; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_byte_array_overwrite_file") ) { return nme_byte_array_overwrite_file; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp) return set_endian(inValue);endian=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { _float_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { _double_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { _float_of_bytes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_lzma_encode") ) { nme_lzma_encode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_lzma_decode") ) { nme_lzma_decode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { _double_of_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_byte_array_read_file") ) { nme_byte_array_read_file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_byte_array_overwrite_file") ) { nme_byte_array_overwrite_file=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("byteLength"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("endian"));
	outFields->push(HX_CSTRING("bytesAvailable"));
	outFields->push(HX_CSTRING("bigEndian"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBytes"),
	HX_CSTRING("readFile"),
	HX_CSTRING("_double_bytes"),
	HX_CSTRING("_double_of_bytes"),
	HX_CSTRING("_float_bytes"),
	HX_CSTRING("_float_of_bytes"),
	HX_CSTRING("nme_byte_array_overwrite_file"),
	HX_CSTRING("nme_byte_array_read_file"),
	HX_CSTRING("nme_lzma_encode"),
	HX_CSTRING("nme_lzma_decode"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_endian"),
	HX_CSTRING("get_endian"),
	HX_CSTRING("get_byteLength"),
	HX_CSTRING("get_bytesAvailable"),
	HX_CSTRING("writeUTFBytes"),
	HX_CSTRING("writeUTF"),
	HX_CSTRING("writeUnsignedInt"),
	HX_CSTRING("writeShort"),
	HX_CSTRING("writeInt"),
	HX_CSTRING("writeFloat"),
	HX_CSTRING("writeFile"),
	HX_CSTRING("writeDouble"),
	HX_CSTRING("writeBytes"),
	HX_CSTRING("writeByte"),
	HX_CSTRING("writeBoolean"),
	HX_CSTRING("write_uncheck"),
	HX_CSTRING("uncompress"),
	HX_CSTRING("ThrowEOFi"),
	HX_CSTRING("slice"),
	HX_CSTRING("setLength"),
	HX_CSTRING("readUTFBytes"),
	HX_CSTRING("readUTF"),
	HX_CSTRING("readUnsignedShort"),
	HX_CSTRING("readUnsignedInt"),
	HX_CSTRING("readUnsignedByte"),
	HX_CSTRING("readShort"),
	HX_CSTRING("readMultiByte"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readFloat"),
	HX_CSTRING("readDouble"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBoolean"),
	HX_CSTRING("inflate"),
	HX_CSTRING("getStart"),
	HX_CSTRING("getByteBuffer"),
	HX_CSTRING("getLength"),
	HX_CSTRING("ensureElem"),
	HX_CSTRING("deflate"),
	HX_CSTRING("compress"),
	HX_CSTRING("clear"),
	HX_CSTRING("checkData"),
	HX_CSTRING("asString"),
	HX_CSTRING("__set"),
	HX_CSTRING("__get"),
	HX_CSTRING("byteLength"),
	HX_CSTRING("position"),
	HX_CSTRING("endian"),
	HX_CSTRING("bytesAvailable"),
	HX_CSTRING("bigEndian"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_bytes,"_double_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_of_bytes,"_double_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_bytes,"_float_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_of_bytes,"_float_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::nme_byte_array_overwrite_file,"nme_byte_array_overwrite_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::nme_byte_array_read_file,"nme_byte_array_read_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::nme_lzma_encode,"nme_lzma_encode");
	HX_MARK_MEMBER_NAME(ByteArray_obj::nme_lzma_decode,"nme_lzma_decode");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_double_bytes,"_double_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_double_of_bytes,"_double_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_float_bytes,"_float_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_float_of_bytes,"_float_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::nme_byte_array_overwrite_file,"nme_byte_array_overwrite_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::nme_byte_array_read_file,"nme_byte_array_read_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::nme_lzma_encode,"nme_lzma_encode");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::nme_lzma_decode,"nme_lzma_decode");
};

Class ByteArray_obj::__mClass;

void ByteArray_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.utils.ByteArray"), hx::TCanCast< ByteArray_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ByteArray_obj::__boot()
{
	_double_bytes= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("double_bytes"),(int)2);
	_double_of_bytes= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("double_of_bytes"),(int)2);
	_float_bytes= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("float_bytes"),(int)2);
	_float_of_bytes= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("float_of_bytes"),(int)2);
	nme_byte_array_overwrite_file= ::native::Loader_obj::load(HX_CSTRING("nme_byte_array_overwrite_file"),(int)2);
	nme_byte_array_read_file= ::native::Loader_obj::load(HX_CSTRING("nme_byte_array_read_file"),(int)1);
	nme_lzma_encode= ::native::Loader_obj::load(HX_CSTRING("nme_lzma_encode"),(int)1);
	nme_lzma_decode= ::native::Loader_obj::load(HX_CSTRING("nme_lzma_decode"),(int)1);
}

} // end namespace native
} // end namespace utils
