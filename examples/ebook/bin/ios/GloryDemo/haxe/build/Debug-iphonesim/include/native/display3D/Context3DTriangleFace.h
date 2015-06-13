#ifndef INCLUDED_native_display3D_Context3DTriangleFace
#define INCLUDED_native_display3D_Context3DTriangleFace

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display3D,Context3DTriangleFace)
namespace native{
namespace display3D{


class Context3DTriangleFace_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DTriangleFace_obj OBJ_;
		Context3DTriangleFace_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Context3DTriangleFace_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Context3DTriangleFace_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Context3DTriangleFace"); }

		static int BACK; /* REM */ 
		static int FRONT; /* REM */ 
		static int FRONT_AND_BACK; /* REM */ 
		static int NONE; /* REM */ 
};

} // end namespace native
} // end namespace display3D

#endif /* INCLUDED_native_display3D_Context3DTriangleFace */ 
