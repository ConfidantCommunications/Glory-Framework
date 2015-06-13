#ifndef INCLUDED_native_display3D_Context3DProgramType
#define INCLUDED_native_display3D_Context3DProgramType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display3D,Context3DProgramType)
namespace native{
namespace display3D{


class Context3DProgramType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DProgramType_obj OBJ_;
		Context3DProgramType_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Context3DProgramType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Context3DProgramType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Context3DProgramType"); }

		static int VERTEX; /* REM */ 
		static int FRAGMENT; /* REM */ 
};

} // end namespace native
} // end namespace display3D

#endif /* INCLUDED_native_display3D_Context3DProgramType */ 
