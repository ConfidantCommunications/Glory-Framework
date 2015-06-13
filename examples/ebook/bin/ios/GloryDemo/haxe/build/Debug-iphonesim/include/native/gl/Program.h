#ifndef INCLUDED_native_gl_Program
#define INCLUDED_native_gl_Program

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/gl/Object.h>
HX_DECLARE_CLASS2(native,gl,Object)
HX_DECLARE_CLASS2(native,gl,Program)
HX_DECLARE_CLASS2(native,gl,Shader)
namespace native{
namespace gl{


class Program_obj : public ::native::gl::Object_obj{
	public:
		typedef ::native::gl::Object_obj super;
		typedef Program_obj OBJ_;
		Program_obj();
		Void __construct(int inVersion,Dynamic inId);

	public:
		static hx::ObjectPtr< Program_obj > __new(int inVersion,Dynamic inId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Program_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Program"); }

		virtual Array< ::native::gl::Shader > getShaders( );
		Dynamic getShaders_dyn();

		virtual ::String getType( );

		virtual Void attach( ::native::gl::Shader s);
		Dynamic attach_dyn();

		Array< ::native::gl::Shader > shaders; /* REM */ 
};

} // end namespace native
} // end namespace gl

#endif /* INCLUDED_native_gl_Program */ 
