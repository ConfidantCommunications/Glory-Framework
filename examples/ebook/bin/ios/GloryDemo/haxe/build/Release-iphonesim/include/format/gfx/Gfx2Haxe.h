#ifndef INCLUDED_format_gfx_Gfx2Haxe
#define INCLUDED_format_gfx_Gfx2Haxe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/gfx/Gfx.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,gfx,Gfx2Haxe)
HX_DECLARE_CLASS2(format,gfx,Gradient)
HX_DECLARE_CLASS2(format,gfx,LineStyle)
HX_DECLARE_CLASS2(neash,geom,Matrix)
namespace format{
namespace gfx{


class Gfx2Haxe_obj : public ::format::gfx::Gfx_obj{
	public:
		typedef ::format::gfx::Gfx_obj super;
		typedef Gfx2Haxe_obj OBJ_;
		Gfx2Haxe_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Gfx2Haxe_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Gfx2Haxe_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Gfx2Haxe"); }

		virtual Void curveTo( Float inCX,Float inCY,Float inX,Float inY);

		virtual Void lineTo( Float inX,Float inY);

		virtual Void moveTo( Float inX,Float inY);

		virtual Void endLineStyle( );

		virtual Void lineStyle( ::format::gfx::LineStyle style);

		virtual Void endFill( );

		virtual Void beginFill( int color,Float alpha);

		virtual Void beginGradientFill( ::format::gfx::Gradient grad);

		virtual ::String newMatrix( ::neash::geom::Matrix m);
		Dynamic newMatrix_dyn();

		virtual ::String f2a( Float f);
		Dynamic f2a_dyn();

		Array< ::String > commands; /* REM */ 
};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_Gfx2Haxe */ 
