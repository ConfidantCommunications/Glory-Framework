#ifndef INCLUDED_format_svg_SVGRenderer
#define INCLUDED_format_svg_SVGRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,gfx,GfxBytes)
HX_DECLARE_CLASS2(format,svg,Group)
HX_DECLARE_CLASS2(format,svg,Path)
HX_DECLARE_CLASS2(format,svg,SVGData)
HX_DECLARE_CLASS2(format,svg,SVGRenderer)
HX_DECLARE_CLASS2(format,svg,Text)
HX_DECLARE_CLASS2(native,display,BitmapData)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,Graphics)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Shape)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,geom,Matrix)
HX_DECLARE_CLASS2(native,geom,Rectangle)
namespace format{
namespace svg{


class SVGRenderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SVGRenderer_obj OBJ_;
		SVGRenderer_obj();
		Void __construct(::format::svg::SVGData inSvg,::String inLayer);

	public:
		static hx::ObjectPtr< SVGRenderer_obj > __new(::format::svg::SVGData inSvg,::String inLayer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SVGRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SVGRenderer"); }

		virtual ::native::display::BitmapData renderBitmap( ::native::geom::Rectangle inRect,hx::Null< Float >  inScale);
		Dynamic renderBitmap_dyn();

		virtual ::native::display::Shape namedShape( ::String inName);
		Dynamic namedShape_dyn();

		virtual ::native::display::Shape createShape( ::native::geom::Matrix inMatrix,Dynamic inFilter,::native::geom::Rectangle inScale9);
		Dynamic createShape_dyn();

		virtual Void renderSprite( ::native::display::Sprite inObj,::native::geom::Matrix inMatrix,Dynamic inFilter,::native::geom::Rectangle inScale9);
		Dynamic renderSprite_dyn();

		virtual Void renderObject( ::native::display::DisplayObject inObj,::native::display::Graphics inGfx,::native::geom::Matrix inMatrix,Dynamic inFilter,::native::geom::Rectangle inScale9);
		Dynamic renderObject_dyn();

		virtual ::native::geom::Rectangle getMatchingRect( ::EReg inMatch);
		Dynamic getMatchingRect_dyn();

		virtual ::format::svg::Text findText( Dynamic inFilter);
		Dynamic findText_dyn();

		virtual ::native::geom::Rectangle getExtent( ::native::geom::Matrix inMatrix,Dynamic inFilter,Dynamic inIgnoreDot);
		Dynamic getExtent_dyn();

		virtual Void renderRect0( ::native::display::Graphics inGfx,Dynamic inFilter,::native::geom::Rectangle scaleRect,::native::geom::Rectangle inBounds,::native::geom::Rectangle inRect);
		Dynamic renderRect0_dyn();

		virtual Void renderRect( ::native::display::Graphics inGfx,Dynamic inFilter,::native::geom::Rectangle scaleRect,::native::geom::Rectangle inBounds,::native::geom::Rectangle inRect);
		Dynamic renderRect_dyn();

		virtual Void render( ::native::display::Graphics inGfx,::native::geom::Matrix inMatrix,Dynamic inFilter,::native::geom::Rectangle inScaleRect,Dynamic inScaleW,Dynamic inScaleH);
		Dynamic render_dyn();

		virtual Void iterateGroup( ::format::svg::Group inGroup,bool inIgnoreDot);
		Dynamic iterateGroup_dyn();

		virtual Void iteratePath( ::format::svg::Path inPath);
		Dynamic iteratePath_dyn();

		virtual Void iterateText( ::format::svg::Text inText);
		Dynamic iterateText_dyn();

		virtual bool hasGroup( ::String inName);
		Dynamic hasGroup_dyn();

		virtual Dynamic iterate( Dynamic inGfx,Dynamic inFilter);
		Dynamic iterate_dyn();

		Array< ::String > mGroupPath; /* REM */ 
		Dynamic mFilter; /* REM */ 
		Dynamic &mFilter_dyn() { return mFilter;}
		Dynamic mScaleH; /* REM */ 
		Dynamic mScaleW; /* REM */ 
		::native::geom::Rectangle mScaleRect; /* REM */ 
		::native::geom::Matrix mMatrix; /* REM */ 
		::format::gfx::Gfx mGfx; /* REM */ 
		::format::svg::Group mRoot; /* REM */ 
		::format::svg::SVGData mSvg; /* REM */ 
		Float height; /* REM */ 
		Float width; /* REM */ 
		static Array< ::String > toHaxe( ::Xml inXML,Dynamic inFilter);
		static Dynamic toHaxe_dyn();

		static ::format::gfx::GfxBytes toBytes( ::Xml inXML,Dynamic inFilter);
		static Dynamic toBytes_dyn();

};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_SVGRenderer */ 
