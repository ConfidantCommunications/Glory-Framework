#ifndef INCLUDED_format_svg_PathParser
#define INCLUDED_format_svg_PathParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,svg,PathParser)
HX_DECLARE_CLASS2(format,svg,PathSegment)
namespace format{
namespace svg{


class PathParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PathParser_obj OBJ_;
		PathParser_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PathParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PathParser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PathParser"); }

		virtual ::format::svg::PathSegment createCommand( int code,Array< Float > a);
		Dynamic createCommand_dyn();

		virtual Float prevCY( );
		Dynamic prevCY_dyn();

		virtual Float prevCX( );
		Dynamic prevCX_dyn();

		virtual Float prevY( );
		Dynamic prevY_dyn();

		virtual Float prevX( );
		Dynamic prevX_dyn();

		virtual int commandArgs( int inCode);
		Dynamic commandArgs_dyn();

		virtual Array< ::format::svg::PathSegment > parse( ::String pathToParse,bool inConvertCubics);
		Dynamic parse_dyn();

		::format::svg::PathSegment prev; /* REM */ 
		Float lastMoveY; /* REM */ 
		Float lastMoveX; /* REM */ 
		static Array< int > sCommandArgs; /* REM */ 
		static Dynamic MOVE; /* REM */ 
		static Dynamic MOVER; /* REM */ 
		static Dynamic LINE; /* REM */ 
		static Dynamic LINER; /* REM */ 
		static Dynamic HLINE; /* REM */ 
		static Dynamic HLINER; /* REM */ 
		static Dynamic VLINE; /* REM */ 
		static Dynamic VLINER; /* REM */ 
		static Dynamic CUBIC; /* REM */ 
		static Dynamic CUBICR; /* REM */ 
		static Dynamic SCUBIC; /* REM */ 
		static Dynamic SCUBICR; /* REM */ 
		static Dynamic QUAD; /* REM */ 
		static Dynamic QUADR; /* REM */ 
		static Dynamic SQUAD; /* REM */ 
		static Dynamic SQUADR; /* REM */ 
		static Dynamic ARC; /* REM */ 
		static Dynamic ARCR; /* REM */ 
		static Dynamic CLOSE; /* REM */ 
		static Dynamic CLOSER; /* REM */ 
		static int UNKNOWN; /* REM */ 
		static int SEPARATOR; /* REM */ 
		static int FLOAT; /* REM */ 
		static int FLOAT_SIGN; /* REM */ 
		static int FLOAT_DOT; /* REM */ 
		static int FLOAT_EXP; /* REM */ 
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_PathParser */ 
