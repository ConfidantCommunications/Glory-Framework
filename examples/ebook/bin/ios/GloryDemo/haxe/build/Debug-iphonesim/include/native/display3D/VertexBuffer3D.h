#ifndef INCLUDED_native_display3D_VertexBuffer3D
#define INCLUDED_native_display3D_VertexBuffer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(native,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(native,gl,Buffer)
HX_DECLARE_CLASS2(native,gl,Object)
HX_DECLARE_CLASS2(native,utils,ByteArray)
HX_DECLARE_CLASS2(native,utils,IDataInput)
HX_DECLARE_CLASS2(native,utils,IMemoryRange)
namespace native{
namespace display3D{


class VertexBuffer3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexBuffer3D_obj OBJ_;
		VertexBuffer3D_obj();
		Void __construct(::native::gl::Buffer glBuffer,int numVertices,int data32PerVertex);

	public:
		static hx::ObjectPtr< VertexBuffer3D_obj > __new(::native::gl::Buffer glBuffer,int numVertices,int data32PerVertex);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~VertexBuffer3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("VertexBuffer3D"); }

		virtual Void uploadFromVector( Array< Float > data,int startVertex,int numVertices);
		Dynamic uploadFromVector_dyn();

		virtual Void uploadFromByteArray( ::native::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count);
		Dynamic uploadFromByteArray_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		int numVertices; /* REM */ 
		::native::gl::Buffer glBuffer; /* REM */ 
		int data32PerVertex; /* REM */ 
};

} // end namespace native
} // end namespace display3D

#endif /* INCLUDED_native_display3D_VertexBuffer3D */ 
