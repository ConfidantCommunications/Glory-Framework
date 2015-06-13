#ifndef INCLUDED_native_display3D_IndexBuffer3D
#define INCLUDED_native_display3D_IndexBuffer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(native,gl,Buffer)
HX_DECLARE_CLASS2(native,gl,Object)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace display3D{


class IndexBuffer3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IndexBuffer3D_obj OBJ_;
		IndexBuffer3D_obj();
		Void __construct(::native::gl::Buffer glBuffer,int numIndices);

	public:
		static hx::ObjectPtr< IndexBuffer3D_obj > __new(::native::gl::Buffer glBuffer,int numIndices);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IndexBuffer3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("IndexBuffer3D"); }

		virtual Void uploadFromVector( Array< int > data,int startOffset,int count);
		Dynamic uploadFromVector_dyn();

		virtual Void uploadFromByteArray( ::native::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count);
		Dynamic uploadFromByteArray_dyn();

		int numIndices; /* REM */ 
		::native::gl::Buffer glBuffer; /* REM */ 
};

} // end namespace native
} // end namespace display3D

#endif /* INCLUDED_native_display3D_IndexBuffer3D */ 
