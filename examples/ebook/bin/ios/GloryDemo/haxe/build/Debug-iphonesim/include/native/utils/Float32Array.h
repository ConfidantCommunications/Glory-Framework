#ifndef INCLUDED_native_utils_Float32Array
#define INCLUDED_native_utils_Float32Array

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/utils/ArrayBufferView.h>
HX_DECLARE_CLASS2(native,geom,Matrix3D)
HX_DECLARE_CLASS2(native,utils,ArrayBufferView)
HX_DECLARE_CLASS2(native,utils,Float32Array)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace utils{


class Float32Array_obj : public ::native::utils::ArrayBufferView_obj{
	public:
		typedef ::native::utils::ArrayBufferView_obj super;
		typedef Float32Array_obj OBJ_;
		Float32Array_obj();
		Void __construct(Dynamic inBufferOrArray,hx::Null< int >  __o_inStart,Dynamic inLen);

	public:
		static hx::ObjectPtr< Float32Array_obj > __new(Dynamic inBufferOrArray,hx::Null< int >  __o_inStart,Dynamic inLen);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Float32Array_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Float32Array"); }

		typedef Float __array_access;
		virtual Void __set( int index,Float v);
		Dynamic __set_dyn();

		virtual Float __get( int index);
		Dynamic __get_dyn();

		int length; /* REM */ 
		int BYTES_PER_ELEMENT; /* REM */ 
		static int SBYTES_PER_ELEMENT; /* REM */ 
		static ::native::utils::Float32Array fromMatrix( ::native::geom::Matrix3D inMatrix);
		static Dynamic fromMatrix_dyn();

};

} // end namespace native
} // end namespace utils

#endif /* INCLUDED_native_utils_Float32Array */ 
