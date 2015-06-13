#ifndef INCLUDED_native_gl_Texture
#define INCLUDED_native_gl_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/gl/Object.h>
HX_DECLARE_CLASS2(native,gl,Object)
HX_DECLARE_CLASS2(native,gl,Texture)
namespace native{
namespace gl{


class Texture_obj : public ::native::gl::Object_obj{
	public:
		typedef ::native::gl::Object_obj super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(int inVersion,Dynamic inId);

	public:
		static hx::ObjectPtr< Texture_obj > __new(int inVersion,Dynamic inId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Texture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Texture"); }

		virtual ::String getType( );

};

} // end namespace native
} // end namespace gl

#endif /* INCLUDED_native_gl_Texture */ 
