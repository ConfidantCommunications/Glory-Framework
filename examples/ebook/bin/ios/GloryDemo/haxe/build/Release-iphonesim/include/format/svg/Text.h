#ifndef INCLUDED_format_svg_Text
#define INCLUDED_format_svg_Text

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,svg,FillType)
HX_DECLARE_CLASS2(format,svg,Text)
HX_DECLARE_CLASS2(neash,geom,Matrix)
namespace format{
namespace svg{


class Text_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Text_obj OBJ_;
		Text_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Text_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Text_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Text"); }

		Float letter_spacing; /* REM */ 
		Float kerning; /* REM */ 
		Float font_size; /* REM */ 
		::String font_family; /* REM */ 
		Float stroke_width; /* REM */ 
		Dynamic stroke_colour; /* REM */ 
		Float stroke_alpha; /* REM */ 
		Float fill_alpha; /* REM */ 
		::format::svg::FillType fill; /* REM */ 
		::String text; /* REM */ 
		::neash::geom::Matrix matrix; /* REM */ 
		Float y; /* REM */ 
		Float x; /* REM */ 
		::String name; /* REM */ 
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_Text */ 
