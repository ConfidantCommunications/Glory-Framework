#ifndef INCLUDED_native_gl_Framebuffer
#define INCLUDED_native_gl_Framebuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/gl/Object.h>
HX_DECLARE_CLASS2(native,gl,Framebuffer)
HX_DECLARE_CLASS2(native,gl,Object)
namespace native{
namespace gl{


class Framebuffer_obj : public ::native::gl::Object_obj{
	public:
		typedef ::native::gl::Object_obj super;
		typedef Framebuffer_obj OBJ_;
		Framebuffer_obj();
		Void __construct(int inVersion,Dynamic inId);

	public:
		static hx::ObjectPtr< Framebuffer_obj > __new(int inVersion,Dynamic inId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Framebuffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Framebuffer"); }

		virtual ::String getType( );

};

} // end namespace native
} // end namespace gl

#endif /* INCLUDED_native_gl_Framebuffer */ 
