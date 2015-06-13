#ifndef INCLUDED_native_gl_Buffer
#define INCLUDED_native_gl_Buffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/gl/Object.h>
HX_DECLARE_CLASS2(native,gl,Buffer)
HX_DECLARE_CLASS2(native,gl,Object)
namespace native{
namespace gl{


class Buffer_obj : public ::native::gl::Object_obj{
	public:
		typedef ::native::gl::Object_obj super;
		typedef Buffer_obj OBJ_;
		Buffer_obj();
		Void __construct(int inVersion,Dynamic inId);

	public:
		static hx::ObjectPtr< Buffer_obj > __new(int inVersion,Dynamic inId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Buffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Buffer"); }

		virtual ::String getType( );

};

} // end namespace native
} // end namespace gl

#endif /* INCLUDED_native_gl_Buffer */ 
