#ifndef INCLUDED_native_display3D_Program3D
#define INCLUDED_native_display3D_Program3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display3D,Program3D)
HX_DECLARE_CLASS2(native,gl,Object)
HX_DECLARE_CLASS2(native,gl,Program)
HX_DECLARE_CLASS2(native,gl,Shader)
namespace native{
namespace display3D{


class Program3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Program3D_obj OBJ_;
		Program3D_obj();
		Void __construct(::native::gl::Program program);

	public:
		static hx::ObjectPtr< Program3D_obj > __new(::native::gl::Program program);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Program3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Program3D"); }

		virtual Void upload( ::native::gl::Shader vertexShader,::native::gl::Shader fragmentShader);
		Dynamic upload_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		::native::gl::Program glProgram; /* REM */ 
};

} // end namespace native
} // end namespace display3D

#endif /* INCLUDED_native_display3D_Program3D */ 
