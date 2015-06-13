#ifndef INCLUDED_native_display3D_Context3DClearMask
#define INCLUDED_native_display3D_Context3DClearMask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display3D,Context3DClearMask)
namespace native{
namespace display3D{


class Context3DClearMask_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DClearMask_obj OBJ_;
		Context3DClearMask_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Context3DClearMask_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Context3DClearMask_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Context3DClearMask"); }

		static int ALL; /* REM */ 
		static int COLOR; /* REM */ 
		static int DEPTH; /* REM */ 
		static int STENCIL; /* REM */ 
};

} // end namespace native
} // end namespace display3D

#endif /* INCLUDED_native_display3D_Context3DClearMask */ 
