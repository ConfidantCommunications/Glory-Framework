#ifndef INCLUDED_format_svg_Path
#define INCLUDED_format_svg_Path

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,svg,FillType)
HX_DECLARE_CLASS2(format,svg,Path)
HX_DECLARE_CLASS2(format,svg,PathSegment)
HX_DECLARE_CLASS2(neash,display,CapsStyle)
HX_DECLARE_CLASS2(neash,display,JointStyle)
HX_DECLARE_CLASS2(neash,geom,Matrix)
namespace format{
namespace svg{


class Path_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Path_obj OBJ_;
		Path_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Path_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Path_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Path"); }

		Array< ::format::svg::PathSegment > segments; /* REM */ 
		Float miter_limit; /* REM */ 
		::neash::display::JointStyle joint_style; /* REM */ 
		::neash::display::CapsStyle stroke_caps; /* REM */ 
		Float stroke_width; /* REM */ 
		Dynamic stroke_colour; /* REM */ 
		Float stroke_alpha; /* REM */ 
		Float fill_alpha; /* REM */ 
		::format::svg::FillType fill; /* REM */ 
		Float font_size; /* REM */ 
		::String name; /* REM */ 
		::neash::geom::Matrix matrix; /* REM */ 
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_Path */ 
