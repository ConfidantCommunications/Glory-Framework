#ifndef INCLUDED_format_gfx_LineStyle
#define INCLUDED_format_gfx_LineStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gfx,LineStyle)
HX_DECLARE_CLASS2(native,display,CapsStyle)
HX_DECLARE_CLASS2(native,display,JointStyle)
HX_DECLARE_CLASS2(native,display,LineScaleMode)
namespace format{
namespace gfx{


class LineStyle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LineStyle_obj OBJ_;
		LineStyle_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LineStyle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LineStyle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LineStyle"); }

		Float miterLimit; /* REM */ 
		::native::display::JointStyle jointStyle; /* REM */ 
		::native::display::CapsStyle capsStyle; /* REM */ 
		::native::display::LineScaleMode scaleMode; /* REM */ 
		bool pixelHinting; /* REM */ 
		Float alpha; /* REM */ 
		int color; /* REM */ 
		Float thickness; /* REM */ 
};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_LineStyle */ 
