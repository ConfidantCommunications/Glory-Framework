#ifndef INCLUDED_native_gl_Object
#define INCLUDED_native_gl_Object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,gl,Object)
namespace native{
namespace gl{


class Object_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Object_obj OBJ_;
		Object_obj();
		Void __construct(int inVersion,Dynamic inId);

	public:
		static hx::ObjectPtr< Object_obj > __new(int inVersion,Dynamic inId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Object_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Object"); }

		virtual bool get_valid( );
		Dynamic get_valid_dyn();

		virtual bool get_invalidated( );
		Dynamic get_invalidated_dyn();

		virtual bool isInvalid( );
		Dynamic isInvalid_dyn();

		virtual bool isValid( );
		Dynamic isValid_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		virtual ::String getType( );
		Dynamic getType_dyn();

		int version; /* REM */ 
		bool valid; /* REM */ 
		bool invalidated; /* REM */ 
		Dynamic id; /* REM */ 
};

} // end namespace native
} // end namespace gl

#endif /* INCLUDED_native_gl_Object */ 
