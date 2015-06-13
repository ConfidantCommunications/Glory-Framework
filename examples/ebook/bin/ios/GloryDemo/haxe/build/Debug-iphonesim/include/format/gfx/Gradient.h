#ifndef INCLUDED_format_gfx_Gradient
#define INCLUDED_format_gfx_Gradient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gfx,Gradient)
HX_DECLARE_CLASS2(native,display,GradientType)
HX_DECLARE_CLASS2(native,display,InterpolationMethod)
HX_DECLARE_CLASS2(native,display,SpreadMethod)
HX_DECLARE_CLASS2(native,geom,Matrix)
namespace format{
namespace gfx{


class Gradient_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Gradient_obj OBJ_;
		Gradient_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Gradient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Gradient_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Gradient"); }

		Float focus; /* REM */ 
		::native::display::InterpolationMethod interp; /* REM */ 
		::native::display::SpreadMethod spread; /* REM */ 
		::native::geom::Matrix matrix; /* REM */ 
		Array< int > ratios; /* REM */ 
		Array< Float > alphas; /* REM */ 
		Array< int > colors; /* REM */ 
		::native::display::GradientType type; /* REM */ 
};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_Gradient */ 
