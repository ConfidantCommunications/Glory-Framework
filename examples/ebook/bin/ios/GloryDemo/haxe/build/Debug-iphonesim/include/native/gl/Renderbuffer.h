#ifndef INCLUDED_native_gl_Renderbuffer
#define INCLUDED_native_gl_Renderbuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/gl/Object.h>
HX_DECLARE_CLASS2(native,gl,Object)
HX_DECLARE_CLASS2(native,gl,Renderbuffer)
namespace native{
namespace gl{


class Renderbuffer_obj : public ::native::gl::Object_obj{
	public:
		typedef ::native::gl::Object_obj super;
		typedef Renderbuffer_obj OBJ_;
		Renderbuffer_obj();
		Void __construct(int inVersion,Dynamic inId);

	public:
		static hx::ObjectPtr< Renderbuffer_obj > __new(int inVersion,Dynamic inId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Renderbuffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Renderbuffer"); }

		virtual ::String getType( );

};

} // end namespace native
} // end namespace gl

#endif /* INCLUDED_native_gl_Renderbuffer */ 
