#ifndef INCLUDED_format_svg_ArcSegment
#define INCLUDED_format_svg_ArcSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/svg/PathSegment.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,svg,ArcSegment)
HX_DECLARE_CLASS2(format,svg,PathSegment)
HX_DECLARE_CLASS2(format,svg,RenderContext)
namespace format{
namespace svg{


class ArcSegment_obj : public ::format::svg::PathSegment_obj{
	public:
		typedef ::format::svg::PathSegment_obj super;
		typedef ArcSegment_obj OBJ_;
		ArcSegment_obj();
		Void __construct(Float inX1,Float inY1,Float inRX,Float inRY,Float inRotation,bool inLargeArc,bool inSweep,Float x,Float y);

	public:
		static hx::ObjectPtr< ArcSegment_obj > __new(Float inX1,Float inY1,Float inRX,Float inRY,Float inRotation,bool inLargeArc,bool inSweep,Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArcSegment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArcSegment"); }

		virtual int getType( );

		virtual Void toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext);

		bool fS; /* REM */ 
		bool fA; /* REM */ 
		Float phi; /* REM */ 
		Float ry; /* REM */ 
		Float rx; /* REM */ 
		Float y1; /* REM */ 
		Float x1; /* REM */ 
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_ArcSegment */ 
