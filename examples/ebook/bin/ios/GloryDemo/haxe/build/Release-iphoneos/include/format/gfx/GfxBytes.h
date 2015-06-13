#ifndef INCLUDED_format_gfx_GfxBytes
#define INCLUDED_format_gfx_GfxBytes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/gfx/Gfx.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,gfx,GfxBytes)
HX_DECLARE_CLASS2(format,gfx,Gradient)
HX_DECLARE_CLASS2(format,gfx,LineStyle)
HX_DECLARE_CLASS1(haxe,BaseCode)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(neash,display,CapsStyle)
HX_DECLARE_CLASS2(neash,display,InterpolationMethod)
HX_DECLARE_CLASS2(neash,display,JointStyle)
HX_DECLARE_CLASS2(neash,display,LineScaleMode)
HX_DECLARE_CLASS2(neash,display,SpreadMethod)
HX_DECLARE_CLASS2(neash,utils,ByteArray)
HX_DECLARE_CLASS2(neash,utils,IDataInput)
namespace format{
namespace gfx{


class GfxBytes_obj : public ::format::gfx::Gfx_obj{
	public:
		typedef ::format::gfx::Gfx_obj super;
		typedef GfxBytes_obj OBJ_;
		GfxBytes_obj();
		Void __construct(::neash::utils::ByteArray inBuffer,hx::Null< int >  __o_inFlags);

	public:
		static hx::ObjectPtr< GfxBytes_obj > __new(::neash::utils::ByteArray inBuffer,hx::Null< int >  __o_inFlags);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~GfxBytes_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GfxBytes"); }

		virtual Void curveTo( Float inCX,Float inCY,Float inX,Float inY);

		virtual Void lineTo( Float inX,Float inY);

		virtual Void moveTo( Float inX,Float inY);

		virtual Void endLineStyle( );

		virtual Void lineStyle( ::format::gfx::LineStyle style);

		virtual Void endFill( );

		virtual Void beginFill( int color,Float alpha);

		virtual Void beginGradientFill( ::format::gfx::Gradient grad);

		virtual int readRGB( );
		Dynamic readRGB_dyn();

		virtual Void writeRGB( int inVal);
		Dynamic writeRGB_dyn();

		virtual Void pushClipped( Float inVal);
		Dynamic pushClipped_dyn();

		virtual Void size( Float inWidth,Float inHeight);

		virtual Void iterate( ::format::gfx::Gfx inGfx);
		Dynamic iterate_dyn();

		virtual Void eof( );

		virtual ::String toString( );
		Dynamic toString_dyn();

		::neash::utils::ByteArray buffer; /* REM */ 
		static int _EOF; /* REM */ 
		static int SIZE; /* REM */ 
		static int BEGIN_FILL; /* REM */ 
		static int GRADIENT_FILL; /* REM */ 
		static int END_FILL; /* REM */ 
		static int LINE_STYLE; /* REM */ 
		static int END_LINE_STYLE; /* REM */ 
		static int MOVE; /* REM */ 
		static int LINE; /* REM */ 
		static int CURVE; /* REM */ 
		static ::String base64; /* REM */ 
		static ::haxe::BaseCode baseCoder; /* REM */ 
		static ::format::gfx::GfxBytes fromString( ::String inString);
		static Dynamic fromString_dyn();

		static Array< ::neash::display::LineScaleMode > scaleModes; /* REM */ 
		static Array< ::neash::display::CapsStyle > capsStyles; /* REM */ 
		static Array< ::neash::display::JointStyle > jointStyles; /* REM */ 
		static Array< ::neash::display::SpreadMethod > spreadMethods; /* REM */ 
		static Array< ::neash::display::InterpolationMethod > interpolationMethods; /* REM */ 
};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_GfxBytes */ 
