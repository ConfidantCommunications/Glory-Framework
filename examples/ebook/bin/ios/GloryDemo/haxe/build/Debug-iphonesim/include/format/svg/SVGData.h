#ifndef INCLUDED_format_svg_SVGData
#define INCLUDED_format_svg_SVGData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/svg/Group.h>
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(format,svg,FillType)
HX_DECLARE_CLASS2(format,svg,Group)
HX_DECLARE_CLASS2(format,svg,Path)
HX_DECLARE_CLASS2(format,svg,PathParser)
HX_DECLARE_CLASS2(format,svg,SVGData)
HX_DECLARE_CLASS2(format,svg,Text)
HX_DECLARE_CLASS2(native,display,GradientType)
HX_DECLARE_CLASS2(native,geom,Matrix)
namespace format{
namespace svg{


class SVGData_obj : public ::format::svg::Group_obj{
	public:
		typedef ::format::svg::Group_obj super;
		typedef SVGData_obj OBJ_;
		SVGData_obj();
		Void __construct(::Xml inXML,hx::Null< bool >  __o_inConvertCubics);

	public:
		static hx::ObjectPtr< SVGData_obj > __new(::Xml inXML,hx::Null< bool >  __o_inConvertCubics);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SVGData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SVGData"); }

		virtual ::format::svg::Text loadText( ::Xml inText,::native::geom::Matrix matrix,::Hash inStyles);
		Dynamic loadText_dyn();

		virtual ::format::svg::Path loadPath( ::Xml inPath,::native::geom::Matrix matrix,::Hash inStyles,bool inIsRect,bool inIsEllipse);
		Dynamic loadPath_dyn();

		virtual ::format::svg::Group loadGroup( ::format::svg::Group g,::Xml inG,::native::geom::Matrix matrix,::Hash inStyles);
		Dynamic loadGroup_dyn();

		virtual Void loadGradient( ::Xml inGrad,::native::display::GradientType inType,bool inCrossLink);
		Dynamic loadGradient_dyn();

		virtual Void loadDefs( ::Xml inXML);
		Dynamic loadDefs_dyn();

		virtual ::Hash getStyles( ::Xml inNode,::Hash inPrevStyles);
		Dynamic getStyles_dyn();

		virtual ::String getStyle( ::String inKey,::Xml inNode,::Hash inStyles,::String inDefault);
		Dynamic getStyle_dyn();

		virtual Dynamic getStrokeStyle( ::String inKey,::Xml inNode,::Hash inStyles,Dynamic inDefault);
		Dynamic getStrokeStyle_dyn();

		virtual Float getFloatStyle( ::String inKey,::Xml inNode,::Hash inStyles,Float inDefault);
		Dynamic getFloatStyle_dyn();

		virtual Float getFloat( ::Xml inXML,::String inName,hx::Null< Float >  inDef);
		Dynamic getFloat_dyn();

		virtual ::format::svg::FillType getFillStyle( ::String inKey,::Xml inNode,::Hash inStyles);
		Dynamic getFillStyle_dyn();

		virtual int getColorStyle( ::String inKey,::Xml inNode,::Hash inStyles,int inDefault);
		Dynamic getColorStyle_dyn();

		virtual Void dumpGroup( ::format::svg::Group g,::String indent);
		Dynamic dumpGroup_dyn();

		virtual Float applyTransform( ::native::geom::Matrix ioMatrix,::String inTrans);
		Dynamic applyTransform_dyn();

		::format::svg::PathParser mPathParser; /* REM */ 
		::Hash mGrads; /* REM */ 
		bool mConvertCubics; /* REM */ 
		Float width; /* REM */ 
		Float height; /* REM */ 
		static Float SIN45; /* REM */ 
		static Float TAN22; /* REM */ 
		static ::EReg mStyleSplit; /* REM */ 
		static ::EReg mStyleValue; /* REM */ 
		static ::EReg mTranslateMatch; /* REM */ 
		static ::EReg mScaleMatch; /* REM */ 
		static ::EReg mMatrixMatch; /* REM */ 
		static ::EReg mURLMatch; /* REM */ 
		static ::format::svg::FillType defaultFill; /* REM */ 
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_SVGData */ 
