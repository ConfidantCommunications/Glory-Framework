#ifndef INCLUDED_format_gfx_Gfx
#define INCLUDED_format_gfx_Gfx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,gfx,Gradient)
HX_DECLARE_CLASS2(format,gfx,LineStyle)
HX_DECLARE_CLASS2(format,svg,Text)
namespace format{
namespace gfx{


class Gfx_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Gfx_obj OBJ_;
		Gfx_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Gfx_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Gfx_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Gfx"); }

		virtual Void eof( );
		Dynamic eof_dyn();

		virtual Void renderText( ::format::svg::Text text);
		Dynamic renderText_dyn();

		virtual Void curveTo( Float inCX,Float inCY,Float inX,Float inY);
		Dynamic curveTo_dyn();

		virtual Void lineTo( Float inX,Float inY);
		Dynamic lineTo_dyn();

		virtual Void moveTo( Float inX,Float inY);
		Dynamic moveTo_dyn();

		virtual Void endLineStyle( );
		Dynamic endLineStyle_dyn();

		virtual Void lineStyle( ::format::gfx::LineStyle style);
		Dynamic lineStyle_dyn();

		virtual Void endFill( );
		Dynamic endFill_dyn();

		virtual Void beginFill( int color,Float alpha);
		Dynamic beginFill_dyn();

		virtual Void beginGradientFill( ::format::gfx::Gradient grad);
		Dynamic beginGradientFill_dyn();

		virtual Void size( Float inWidth,Float inHeight);
		Dynamic size_dyn();

		virtual bool geometryOnly( );
		Dynamic geometryOnly_dyn();

};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_Gfx */ 
