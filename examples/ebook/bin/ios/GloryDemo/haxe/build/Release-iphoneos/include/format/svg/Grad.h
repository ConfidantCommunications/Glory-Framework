#ifndef INCLUDED_format_svg_Grad
#define INCLUDED_format_svg_Grad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/gfx/Gradient.h>
HX_DECLARE_CLASS2(format,gfx,Gradient)
HX_DECLARE_CLASS2(format,svg,Grad)
HX_DECLARE_CLASS2(neash,display,GradientType)
HX_DECLARE_CLASS2(neash,geom,Matrix)
namespace format{
namespace svg{


class Grad_obj : public ::format::gfx::Gradient_obj{
	public:
		typedef ::format::gfx::Gradient_obj super;
		typedef Grad_obj OBJ_;
		Grad_obj();
		Void __construct(::neash::display::GradientType inType);

	public:
		static hx::ObjectPtr< Grad_obj > __new(::neash::display::GradientType inType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Grad_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Grad"); }

		virtual Void updateMatrix( ::neash::geom::Matrix inMatrix);
		Dynamic updateMatrix_dyn();

		Float y2; /* REM */ 
		Float x2; /* REM */ 
		Float y1; /* REM */ 
		Float x1; /* REM */ 
		Float radius; /* REM */ 
		::neash::geom::Matrix gradMatrix; /* REM */ 
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_Grad */ 
