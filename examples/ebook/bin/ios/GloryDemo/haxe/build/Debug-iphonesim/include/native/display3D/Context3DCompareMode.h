#ifndef INCLUDED_native_display3D_Context3DCompareMode
#define INCLUDED_native_display3D_Context3DCompareMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(native,display3D,Context3DCompareMode)
namespace native{
namespace display3D{


class Context3DCompareMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Context3DCompareMode_obj OBJ_;
		Context3DCompareMode_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Context3DCompareMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Context3DCompareMode_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Context3DCompareMode"); }

		static int ALWAYS; /* REM */ 
		static int EQUAL; /* REM */ 
		static int GREATER; /* REM */ 
		static int GREATER_EQUAL; /* REM */ 
		static int LESS; /* REM */ 
		static int LESS_EQUAL; /* REM */ 
		static int NEVER; /* REM */ 
		static int NOT_EQUAL; /* REM */ 
};

} // end namespace native
} // end namespace display3D

#endif /* INCLUDED_native_display3D_Context3DCompareMode */ 
