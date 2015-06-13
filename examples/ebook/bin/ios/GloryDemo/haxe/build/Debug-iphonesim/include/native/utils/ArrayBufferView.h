#ifndef INCLUDED_native_utils_ArrayBufferView
#define INCLUDED_native_utils_ArrayBufferView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/utils/IMemoryRange.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,utils,ArrayBufferView)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace utils{


class ArrayBufferView_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayBufferView_obj OBJ_;
		ArrayBufferView_obj();
		Void __construct(Dynamic inLengthOrBuffer,hx::Null< int >  __o_inByteOffset,Dynamic inLength);

	public:
		static hx::ObjectPtr< ArrayBufferView_obj > __new(Dynamic inLengthOrBuffer,hx::Null< int >  __o_inByteOffset,Dynamic inLength);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArrayBufferView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::native::utils::IMemoryRange_obj *()
			{ return new ::native::utils::IMemoryRange_delegate_< ArrayBufferView_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("ArrayBufferView"); }

		virtual Void setFloat32( int bytePos,Float v);
		Dynamic setFloat32_dyn();

		virtual Float getFloat32( int bytePos);
		Dynamic getFloat32_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual int getStart( );
		Dynamic getStart_dyn();

		virtual ::native::utils::ByteArray getByteBuffer( );
		Dynamic getByteBuffer_dyn();

		Array< unsigned char > bytes; /* REM */ 
		int byteLength; /* REM */ 
		int byteOffset; /* REM */ 
		::native::utils::ByteArray buffer; /* REM */ 
		static ::String invalidDataIndex; /* REM */ 
};

} // end namespace native
} // end namespace utils

#endif /* INCLUDED_native_utils_ArrayBufferView */ 
