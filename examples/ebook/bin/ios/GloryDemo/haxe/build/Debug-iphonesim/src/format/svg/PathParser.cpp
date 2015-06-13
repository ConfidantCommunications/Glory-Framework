#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_svg_ArcSegment
#include <format/svg/ArcSegment.h>
#endif
#ifndef INCLUDED_format_svg_CubicSegment
#include <format/svg/CubicSegment.h>
#endif
#ifndef INCLUDED_format_svg_DrawSegment
#include <format/svg/DrawSegment.h>
#endif
#ifndef INCLUDED_format_svg_MoveSegment
#include <format/svg/MoveSegment.h>
#endif
#ifndef INCLUDED_format_svg_PathParser
#include <format/svg/PathParser.h>
#endif
#ifndef INCLUDED_format_svg_PathSegment
#include <format/svg/PathSegment.h>
#endif
#ifndef INCLUDED_format_svg_QuadraticSegment
#include <format/svg/QuadraticSegment.h>
#endif
namespace format{
namespace svg{

Void PathParser_obj::__construct()
{
HX_STACK_PUSH("PathParser::new","format/svg/PathParser.hx",48);
{
	HX_STACK_LINE(48)
	if (((::format::svg::PathParser_obj::sCommandArgs == null()))){
		HX_STACK_LINE(51)
		::format::svg::PathParser_obj::sCommandArgs = Array_obj< int >::__new();
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			while(((_g < (int)128))){
				HX_STACK_LINE(52)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(53)
				::format::svg::PathParser_obj::sCommandArgs[i] = this->commandArgs(i);
			}
		}
	}
}
;
	return null();
}

PathParser_obj::~PathParser_obj() { }

Dynamic PathParser_obj::__CreateEmpty() { return  new PathParser_obj; }
hx::ObjectPtr< PathParser_obj > PathParser_obj::__new()
{  hx::ObjectPtr< PathParser_obj > result = new PathParser_obj();
	result->__construct();
	return result;}

Dynamic PathParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathParser_obj > result = new PathParser_obj();
	result->__construct();
	return result;}

::format::svg::PathSegment PathParser_obj::createCommand( int code,Array< Float > a){
	HX_STACK_PUSH("PathParser::createCommand","format/svg/PathParser.hx",227);
	HX_STACK_THIS(this);
	HX_STACK_ARG(code,"code");
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(228)
	int _switch_1 = (code);
	if (  ( _switch_1==::format::svg::PathParser_obj::MOVE)){
		HX_STACK_LINE(231)
		this->lastMoveX = a->__get((int)0);
		HX_STACK_LINE(232)
		this->lastMoveY = a->__get((int)1);
		HX_STACK_LINE(233)
		return ::format::svg::MoveSegment_obj::__new(this->lastMoveX,this->lastMoveY);
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::MOVER)){
		HX_STACK_LINE(235)
		this->lastMoveX = (a->__get((int)0) + this->prevX());
		HX_STACK_LINE(236)
		this->lastMoveY = (a->__get((int)1) + this->prevY());
		HX_STACK_LINE(237)
		return ::format::svg::MoveSegment_obj::__new(this->lastMoveX,this->lastMoveY);
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::LINE)){
		HX_STACK_LINE(238)
		return ::format::svg::DrawSegment_obj::__new(a->__get((int)0),a->__get((int)1));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::LINER)){
		HX_STACK_LINE(239)
		return ::format::svg::DrawSegment_obj::__new((a->__get((int)0) + this->prevX()),(a->__get((int)1) + this->prevY()));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::HLINE)){
		HX_STACK_LINE(240)
		return ::format::svg::DrawSegment_obj::__new(a->__get((int)0),this->prevY());
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::HLINER)){
		HX_STACK_LINE(241)
		return ::format::svg::DrawSegment_obj::__new((a->__get((int)0) + this->prevX()),this->prevY());
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::VLINE)){
		HX_STACK_LINE(242)
		return ::format::svg::DrawSegment_obj::__new(this->prevX(),a->__get((int)0));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::VLINER)){
		HX_STACK_LINE(243)
		return ::format::svg::DrawSegment_obj::__new(this->prevX(),(a->__get((int)0) + this->prevY()));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::CUBIC)){
		HX_STACK_LINE(244)
		return ::format::svg::CubicSegment_obj::__new(a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3),a->__get((int)4),a->__get((int)5));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::CUBICR)){
		HX_STACK_LINE(247)
		Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(248)
		Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(249)
		return ::format::svg::CubicSegment_obj::__new((a->__get((int)0) + rx),(a->__get((int)1) + ry),(a->__get((int)2) + rx),(a->__get((int)3) + ry),(a->__get((int)4) + rx),(a->__get((int)5) + ry));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::SCUBIC)){
		HX_STACK_LINE(251)
		Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(252)
		Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(253)
		return ::format::svg::CubicSegment_obj::__new(((rx * (int)2) - this->prevCX()),((ry * (int)2) - this->prevCY()),a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::SCUBICR)){
		HX_STACK_LINE(255)
		Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(256)
		Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(257)
		return ::format::svg::CubicSegment_obj::__new(((rx * (int)2) - this->prevCX()),((ry * (int)2) - this->prevCY()),(a->__get((int)0) + rx),(a->__get((int)1) + ry),(a->__get((int)2) + rx),(a->__get((int)3) + ry));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::QUAD)){
		HX_STACK_LINE(258)
		return ::format::svg::QuadraticSegment_obj::__new(a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::QUADR)){
		HX_STACK_LINE(260)
		Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(261)
		Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(262)
		return ::format::svg::QuadraticSegment_obj::__new((a->__get((int)0) + rx),(a->__get((int)1) + ry),(a->__get((int)2) + rx),(a->__get((int)3) + ry));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::SQUAD)){
		HX_STACK_LINE(264)
		Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(265)
		Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(266)
		return ::format::svg::QuadraticSegment_obj::__new(((rx * (int)2) - this->prevCX()),((rx * (int)2) - this->prevCY()),a->__get((int)2),a->__get((int)3));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::SQUADR)){
		HX_STACK_LINE(268)
		Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(269)
		Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(270)
		return ::format::svg::QuadraticSegment_obj::__new(((rx * (int)2) - this->prevCX()),((ry * (int)2) - this->prevCY()),(a->__get((int)0) + rx),(a->__get((int)1) + ry));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::ARC)){
		HX_STACK_LINE(271)
		return ::format::svg::ArcSegment_obj::__new(this->prevX(),this->prevY(),a->__get((int)0),a->__get((int)1),a->__get((int)2),(a->__get((int)3) != 0.),(a->__get((int)4) != 0.),a->__get((int)5),a->__get((int)6));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::ARCR)){
		HX_STACK_LINE(274)
		Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(275)
		Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(276)
		return ::format::svg::ArcSegment_obj::__new(rx,ry,a->__get((int)0),a->__get((int)1),a->__get((int)2),(a->__get((int)3) != 0.),(a->__get((int)4) != 0.),(a->__get((int)5) + rx),(a->__get((int)6) + ry));
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::CLOSE)){
		HX_STACK_LINE(277)
		return ::format::svg::DrawSegment_obj::__new(this->lastMoveX,this->lastMoveY);
	}
	else if (  ( _switch_1==::format::svg::PathParser_obj::CLOSER)){
		HX_STACK_LINE(280)
		return ::format::svg::DrawSegment_obj::__new(this->lastMoveX,this->lastMoveY);
	}
	HX_STACK_LINE(284)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PathParser_obj,createCommand,return )

Float PathParser_obj::prevCY( ){
	HX_STACK_PUSH("PathParser::prevCY","format/svg/PathParser.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_LINE(224)
	return (  (((this->prev != null()))) ? Float(this->prev->prevCY()) : Float((int)0) );
}


HX_DEFINE_DYNAMIC_FUNC0(PathParser_obj,prevCY,return )

Float PathParser_obj::prevCX( ){
	HX_STACK_PUSH("PathParser::prevCX","format/svg/PathParser.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_LINE(223)
	return (  (((this->prev != null()))) ? Float(this->prev->prevCX()) : Float((int)0) );
}


HX_DEFINE_DYNAMIC_FUNC0(PathParser_obj,prevCX,return )

Float PathParser_obj::prevY( ){
	HX_STACK_PUSH("PathParser::prevY","format/svg/PathParser.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_LINE(222)
	return (  (((this->prev != null()))) ? Float(this->prev->prevY()) : Float((int)0) );
}


HX_DEFINE_DYNAMIC_FUNC0(PathParser_obj,prevY,return )

Float PathParser_obj::prevX( ){
	HX_STACK_PUSH("PathParser::prevX","format/svg/PathParser.hx",221);
	HX_STACK_THIS(this);
	HX_STACK_LINE(221)
	return (  (((this->prev != null()))) ? Float(this->prev->prevX()) : Float((int)0) );
}


HX_DEFINE_DYNAMIC_FUNC0(PathParser_obj,prevX,return )

int PathParser_obj::commandArgs( int inCode){
	HX_STACK_PUSH("PathParser::commandArgs","format/svg/PathParser.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inCode,"inCode");
	HX_STACK_LINE(197)
	if (((inCode == (int)10))){
		HX_STACK_LINE(197)
		return ::format::svg::PathParser_obj::SEPARATOR;
	}
	HX_STACK_LINE(199)
	::String str = ::String::fromCharCode(inCode).toUpperCase();		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(200)
	if (((bool((str >= HX_CSTRING("0"))) && bool((str <= HX_CSTRING("9")))))){
		HX_STACK_LINE(201)
		return ::format::svg::PathParser_obj::FLOAT;
	}
	HX_STACK_LINE(203)
	::String _switch_2 = (str);
	if (  ( _switch_2==HX_CSTRING("Z"))){
		HX_STACK_LINE(205)
		return (int)0;
	}
	else if (  ( _switch_2==HX_CSTRING("H")) ||  ( _switch_2==HX_CSTRING("V"))){
		HX_STACK_LINE(206)
		return (int)1;
	}
	else if (  ( _switch_2==HX_CSTRING("M")) ||  ( _switch_2==HX_CSTRING("L")) ||  ( _switch_2==HX_CSTRING("T"))){
		HX_STACK_LINE(207)
		return (int)2;
	}
	else if (  ( _switch_2==HX_CSTRING("S")) ||  ( _switch_2==HX_CSTRING("Q"))){
		HX_STACK_LINE(208)
		return (int)4;
	}
	else if (  ( _switch_2==HX_CSTRING("C"))){
		HX_STACK_LINE(209)
		return (int)6;
	}
	else if (  ( _switch_2==HX_CSTRING("A"))){
		HX_STACK_LINE(210)
		return (int)7;
	}
	else if (  ( _switch_2==HX_CSTRING("\t")) ||  ( _switch_2==HX_CSTRING("\n")) ||  ( _switch_2==HX_CSTRING(" ")) ||  ( _switch_2==HX_CSTRING("\r")) ||  ( _switch_2==HX_CSTRING(","))){
		HX_STACK_LINE(211)
		return ::format::svg::PathParser_obj::SEPARATOR;
	}
	else if (  ( _switch_2==HX_CSTRING("-"))){
		HX_STACK_LINE(212)
		return ::format::svg::PathParser_obj::FLOAT_SIGN;
	}
	else if (  ( _switch_2==HX_CSTRING("+"))){
		HX_STACK_LINE(213)
		return ::format::svg::PathParser_obj::FLOAT_SIGN;
	}
	else if (  ( _switch_2==HX_CSTRING("E")) ||  ( _switch_2==HX_CSTRING("e"))){
		HX_STACK_LINE(214)
		return ::format::svg::PathParser_obj::FLOAT_EXP;
	}
	else if (  ( _switch_2==HX_CSTRING("."))){
		HX_STACK_LINE(215)
		return ::format::svg::PathParser_obj::FLOAT_DOT;
	}
	HX_STACK_LINE(218)
	return ::format::svg::PathParser_obj::UNKNOWN;
}


HX_DEFINE_DYNAMIC_FUNC1(PathParser_obj,commandArgs,return )

Array< ::format::svg::PathSegment > PathParser_obj::parse( ::String pathToParse,bool inConvertCubics){
	HX_STACK_PUSH("PathParser::parse","format/svg/PathParser.hx",57);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pathToParse,"pathToParse");
	HX_STACK_ARG(inConvertCubics,"inConvertCubics");
	HX_STACK_LINE(58)
	this->lastMoveX = this->lastMoveY = (int)0;
	HX_STACK_LINE(59)
	int pos = (int)0;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(60)
	Array< Float > args = Array_obj< Float >::__new();		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(61)
	Array< ::format::svg::PathSegment > segments = Array_obj< ::format::svg::PathSegment >::__new();		HX_STACK_VAR(segments,"segments");
	HX_STACK_LINE(62)
	int current_command_pos = (int)0;		HX_STACK_VAR(current_command_pos,"current_command_pos");
	HX_STACK_LINE(63)
	int current_command = (int)-1;		HX_STACK_VAR(current_command,"current_command");
	HX_STACK_LINE(64)
	int current_args = (int)-1;		HX_STACK_VAR(current_args,"current_args");
	HX_STACK_LINE(66)
	this->prev = null();
	HX_STACK_LINE(68)
	int len = pathToParse.length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(69)
	bool finished = false;		HX_STACK_VAR(finished,"finished");
	HX_STACK_LINE(70)
	while(((pos <= len))){
		HX_STACK_LINE(72)
		Dynamic code = (  (((pos == len))) ? Dynamic((int)32) : Dynamic(pathToParse.charCodeAt(pos)) );		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(73)
		int command = (  (((bool((code > (int)0)) && bool((code < (int)128))))) ? int(::format::svg::PathParser_obj::sCommandArgs->__get(code)) : int(::format::svg::PathParser_obj::UNKNOWN) );		HX_STACK_VAR(command,"command");
		HX_STACK_LINE(75)
		if (((command == ::format::svg::PathParser_obj::UNKNOWN))){
			HX_STACK_LINE(76)
			hx::Throw (((HX_CSTRING("failed parsing path near '") + pathToParse.substr(pos,null())) + HX_CSTRING("'")));
		}
		HX_STACK_LINE(78)
		if (((command == ::format::svg::PathParser_obj::SEPARATOR))){
			HX_STACK_LINE(79)
			(pos)++;
		}
		else{
			HX_STACK_LINE(82)
			if (((command <= ::format::svg::PathParser_obj::FLOAT))){
				HX_STACK_LINE(84)
				int end = (pos + (int)1);		HX_STACK_VAR(end,"end");
				HX_STACK_LINE(85)
				int e_pos = (int)-1;		HX_STACK_VAR(e_pos,"e_pos");
				HX_STACK_LINE(86)
				bool seen_dot = (command == ::format::svg::PathParser_obj::FLOAT_DOT);		HX_STACK_VAR(seen_dot,"seen_dot");
				HX_STACK_LINE(87)
				if (((command == ::format::svg::PathParser_obj::FLOAT_EXP))){
					HX_STACK_LINE(89)
					e_pos = (int)0;
					HX_STACK_LINE(90)
					seen_dot = true;
				}
				HX_STACK_LINE(92)
				while(((end < pathToParse.length))){
					HX_STACK_LINE(94)
					Dynamic ch = pathToParse.charCodeAt(end);		HX_STACK_VAR(ch,"ch");
					HX_STACK_LINE(95)
					int code1 = (  (((bool((ch < (int)0)) || bool((ch > (int)127))))) ? int(::format::svg::PathParser_obj::UNKNOWN) : int(::format::svg::PathParser_obj::sCommandArgs->__get(ch)) );		HX_STACK_VAR(code1,"code1");
					HX_STACK_LINE(96)
					if (((code1 > ::format::svg::PathParser_obj::FLOAT))){
						HX_STACK_LINE(97)
						break;
					}
					HX_STACK_LINE(98)
					if (((bool((code1 == ::format::svg::PathParser_obj::FLOAT_DOT)) && bool(seen_dot)))){
						HX_STACK_LINE(99)
						break;
					}
					HX_STACK_LINE(100)
					if (((e_pos >= (int)0))){
						HX_STACK_LINE(102)
						if (((code1 == ::format::svg::PathParser_obj::FLOAT_SIGN))){
							HX_STACK_LINE(103)
							if (((e_pos != (int)0))){
								HX_STACK_LINE(105)
								break;
							}
						}
						else{
							HX_STACK_LINE(107)
							if (((code1 != ::format::svg::PathParser_obj::FLOAT))){
								HX_STACK_LINE(108)
								break;
							}
						}
						HX_STACK_LINE(109)
						(e_pos)++;
					}
					else{
						HX_STACK_LINE(111)
						if (((code1 == ::format::svg::PathParser_obj::FLOAT_EXP))){
							HX_STACK_LINE(113)
							if (((e_pos >= (int)0))){
								HX_STACK_LINE(114)
								break;
							}
							HX_STACK_LINE(115)
							e_pos = (int)0;
							HX_STACK_LINE(116)
							seen_dot = true;
						}
						else{
							HX_STACK_LINE(118)
							if (((code1 == ::format::svg::PathParser_obj::FLOAT_SIGN))){
								HX_STACK_LINE(119)
								break;
							}
						}
					}
					HX_STACK_LINE(120)
					(end)++;
				}
				HX_STACK_LINE(122)
				if (((current_command < (int)0))){
				}
				else{
					HX_STACK_LINE(129)
					Float f = ::Std_obj::parseFloat(pathToParse.substr(pos,(end - pos)));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(130)
					args->push(f);
				}
				HX_STACK_LINE(132)
				pos = end;
			}
			else{
				HX_STACK_LINE(136)
				current_command = code;
				HX_STACK_LINE(137)
				current_args = command;
				HX_STACK_LINE(138)
				finished = false;
				HX_STACK_LINE(139)
				current_command_pos = pos;
				HX_STACK_LINE(140)
				args = Array_obj< Float >::__new();
				HX_STACK_LINE(141)
				(pos)++;
			}
		}
		HX_STACK_LINE(144)
		Float px = 0.0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(145)
		Float py = 0.0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(146)
		if (((current_command >= (int)0))){
			HX_STACK_LINE(147)
			if (((current_args == args->length))){
				HX_STACK_LINE(150)
				if (((bool(inConvertCubics) && bool((this->prev != null()))))){
					HX_STACK_LINE(152)
					px = this->prev->prevX();
					HX_STACK_LINE(153)
					py = this->prev->prevY();
				}
				HX_STACK_LINE(155)
				this->prev = this->createCommand(current_command,args);
				HX_STACK_LINE(156)
				if (((this->prev == null()))){
					HX_STACK_LINE(157)
					hx::Throw (((((HX_CSTRING("Unknown command ") + ::String::fromCharCode(current_command)) + HX_CSTRING(" near '")) + pathToParse.substr(current_command_pos,null())) + HX_CSTRING("'")));
				}
				HX_STACK_LINE(159)
				if (((bool(inConvertCubics) && bool((this->prev->getType() == (int)4))))){
					HX_STACK_LINE(161)
					::format::svg::CubicSegment cubic = this->prev;		HX_STACK_VAR(cubic,"cubic");
					HX_STACK_LINE(162)
					Array< ::format::svg::QuadraticSegment > quads = cubic->toQuadratics(px,py);		HX_STACK_VAR(quads,"quads");
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(163)
						while(((_g < quads->length))){
							HX_STACK_LINE(163)
							::format::svg::QuadraticSegment q = quads->__get(_g);		HX_STACK_VAR(q,"q");
							HX_STACK_LINE(163)
							++(_g);
							HX_STACK_LINE(164)
							segments->push(q);
						}
					}
				}
				else{
					HX_STACK_LINE(167)
					segments->push(this->prev);
				}
				HX_STACK_LINE(169)
				finished = true;
				HX_STACK_LINE(170)
				if (((current_args == (int)0))){
					HX_STACK_LINE(172)
					current_args = (int)-1;
					HX_STACK_LINE(173)
					current_command = (int)-1;
				}
				else{
					HX_STACK_LINE(175)
					if (((current_command == ::format::svg::PathParser_obj::MOVE))){
						HX_STACK_LINE(176)
						current_command = ::format::svg::PathParser_obj::LINE;
					}
					else{
						HX_STACK_LINE(177)
						if (((current_command == ::format::svg::PathParser_obj::MOVER))){
							HX_STACK_LINE(178)
							current_command = ::format::svg::PathParser_obj::LINER;
						}
					}
				}
				HX_STACK_LINE(180)
				current_command_pos = pos;
				HX_STACK_LINE(181)
				args = Array_obj< Float >::__new();
			}
		}
	}
	HX_STACK_LINE(186)
	if (((bool((current_command >= (int)0)) && bool(!(finished))))){
		HX_STACK_LINE(187)
		hx::Throw (((((((HX_CSTRING("Unfinished command (") + args->length) + HX_CSTRING("/")) + current_args) + HX_CSTRING(") near '")) + pathToParse.substr(current_command_pos,null())) + HX_CSTRING("'")));
	}
	HX_STACK_LINE(192)
	return segments;
}


HX_DEFINE_DYNAMIC_FUNC2(PathParser_obj,parse,return )

Array< int > PathParser_obj::sCommandArgs;

Dynamic PathParser_obj::MOVE;

Dynamic PathParser_obj::MOVER;

Dynamic PathParser_obj::LINE;

Dynamic PathParser_obj::LINER;

Dynamic PathParser_obj::HLINE;

Dynamic PathParser_obj::HLINER;

Dynamic PathParser_obj::VLINE;

Dynamic PathParser_obj::VLINER;

Dynamic PathParser_obj::CUBIC;

Dynamic PathParser_obj::CUBICR;

Dynamic PathParser_obj::SCUBIC;

Dynamic PathParser_obj::SCUBICR;

Dynamic PathParser_obj::QUAD;

Dynamic PathParser_obj::QUADR;

Dynamic PathParser_obj::SQUAD;

Dynamic PathParser_obj::SQUADR;

Dynamic PathParser_obj::ARC;

Dynamic PathParser_obj::ARCR;

Dynamic PathParser_obj::CLOSE;

Dynamic PathParser_obj::CLOSER;

int PathParser_obj::UNKNOWN;

int PathParser_obj::SEPARATOR;

int PathParser_obj::FLOAT;

int PathParser_obj::FLOAT_SIGN;

int PathParser_obj::FLOAT_DOT;

int PathParser_obj::FLOAT_EXP;


PathParser_obj::PathParser_obj()
{
}

void PathParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PathParser);
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(lastMoveY,"lastMoveY");
	HX_MARK_MEMBER_NAME(lastMoveX,"lastMoveX");
	HX_MARK_END_CLASS();
}

void PathParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(lastMoveY,"lastMoveY");
	HX_VISIT_MEMBER_NAME(lastMoveX,"lastMoveX");
}

Dynamic PathParser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ARC") ) { return ARC; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"MOVE") ) { return MOVE; }
		if (HX_FIELD_EQ(inName,"LINE") ) { return LINE; }
		if (HX_FIELD_EQ(inName,"QUAD") ) { return QUAD; }
		if (HX_FIELD_EQ(inName,"ARCR") ) { return ARCR; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"MOVER") ) { return MOVER; }
		if (HX_FIELD_EQ(inName,"LINER") ) { return LINER; }
		if (HX_FIELD_EQ(inName,"HLINE") ) { return HLINE; }
		if (HX_FIELD_EQ(inName,"VLINE") ) { return VLINE; }
		if (HX_FIELD_EQ(inName,"CUBIC") ) { return CUBIC; }
		if (HX_FIELD_EQ(inName,"QUADR") ) { return QUADR; }
		if (HX_FIELD_EQ(inName,"SQUAD") ) { return SQUAD; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { return CLOSE; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { return FLOAT; }
		if (HX_FIELD_EQ(inName,"prevY") ) { return prevY_dyn(); }
		if (HX_FIELD_EQ(inName,"prevX") ) { return prevX_dyn(); }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"HLINER") ) { return HLINER; }
		if (HX_FIELD_EQ(inName,"VLINER") ) { return VLINER; }
		if (HX_FIELD_EQ(inName,"CUBICR") ) { return CUBICR; }
		if (HX_FIELD_EQ(inName,"SCUBIC") ) { return SCUBIC; }
		if (HX_FIELD_EQ(inName,"SQUADR") ) { return SQUADR; }
		if (HX_FIELD_EQ(inName,"CLOSER") ) { return CLOSER; }
		if (HX_FIELD_EQ(inName,"prevCY") ) { return prevCY_dyn(); }
		if (HX_FIELD_EQ(inName,"prevCX") ) { return prevCX_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SCUBICR") ) { return SCUBICR; }
		if (HX_FIELD_EQ(inName,"UNKNOWN") ) { return UNKNOWN; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"SEPARATOR") ) { return SEPARATOR; }
		if (HX_FIELD_EQ(inName,"FLOAT_DOT") ) { return FLOAT_DOT; }
		if (HX_FIELD_EQ(inName,"FLOAT_EXP") ) { return FLOAT_EXP; }
		if (HX_FIELD_EQ(inName,"lastMoveY") ) { return lastMoveY; }
		if (HX_FIELD_EQ(inName,"lastMoveX") ) { return lastMoveX; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FLOAT_SIGN") ) { return FLOAT_SIGN; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"commandArgs") ) { return commandArgs_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sCommandArgs") ) { return sCommandArgs; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createCommand") ) { return createCommand_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PathParser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ARC") ) { ARC=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"MOVE") ) { MOVE=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINE") ) { LINE=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"QUAD") ) { QUAD=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARCR") ) { ARCR=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::format::svg::PathSegment >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"MOVER") ) { MOVER=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINER") ) { LINER=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HLINE") ) { HLINE=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VLINE") ) { VLINE=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CUBIC") ) { CUBIC=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"QUADR") ) { QUADR=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SQUAD") ) { SQUAD=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { CLOSE=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { FLOAT=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"HLINER") ) { HLINER=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VLINER") ) { VLINER=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CUBICR") ) { CUBICR=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCUBIC") ) { SCUBIC=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SQUADR") ) { SQUADR=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLOSER") ) { CLOSER=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SCUBICR") ) { SCUBICR=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNKNOWN") ) { UNKNOWN=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"SEPARATOR") ) { SEPARATOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_DOT") ) { FLOAT_DOT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_EXP") ) { FLOAT_EXP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastMoveY") ) { lastMoveY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastMoveX") ) { lastMoveX=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FLOAT_SIGN") ) { FLOAT_SIGN=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sCommandArgs") ) { sCommandArgs=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PathParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("prev"));
	outFields->push(HX_CSTRING("lastMoveY"));
	outFields->push(HX_CSTRING("lastMoveX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sCommandArgs"),
	HX_CSTRING("MOVE"),
	HX_CSTRING("MOVER"),
	HX_CSTRING("LINE"),
	HX_CSTRING("LINER"),
	HX_CSTRING("HLINE"),
	HX_CSTRING("HLINER"),
	HX_CSTRING("VLINE"),
	HX_CSTRING("VLINER"),
	HX_CSTRING("CUBIC"),
	HX_CSTRING("CUBICR"),
	HX_CSTRING("SCUBIC"),
	HX_CSTRING("SCUBICR"),
	HX_CSTRING("QUAD"),
	HX_CSTRING("QUADR"),
	HX_CSTRING("SQUAD"),
	HX_CSTRING("SQUADR"),
	HX_CSTRING("ARC"),
	HX_CSTRING("ARCR"),
	HX_CSTRING("CLOSE"),
	HX_CSTRING("CLOSER"),
	HX_CSTRING("UNKNOWN"),
	HX_CSTRING("SEPARATOR"),
	HX_CSTRING("FLOAT"),
	HX_CSTRING("FLOAT_SIGN"),
	HX_CSTRING("FLOAT_DOT"),
	HX_CSTRING("FLOAT_EXP"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("createCommand"),
	HX_CSTRING("prevCY"),
	HX_CSTRING("prevCX"),
	HX_CSTRING("prevY"),
	HX_CSTRING("prevX"),
	HX_CSTRING("commandArgs"),
	HX_CSTRING("parse"),
	HX_CSTRING("prev"),
	HX_CSTRING("lastMoveY"),
	HX_CSTRING("lastMoveX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathParser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PathParser_obj::sCommandArgs,"sCommandArgs");
	HX_MARK_MEMBER_NAME(PathParser_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(PathParser_obj::MOVER,"MOVER");
	HX_MARK_MEMBER_NAME(PathParser_obj::LINE,"LINE");
	HX_MARK_MEMBER_NAME(PathParser_obj::LINER,"LINER");
	HX_MARK_MEMBER_NAME(PathParser_obj::HLINE,"HLINE");
	HX_MARK_MEMBER_NAME(PathParser_obj::HLINER,"HLINER");
	HX_MARK_MEMBER_NAME(PathParser_obj::VLINE,"VLINE");
	HX_MARK_MEMBER_NAME(PathParser_obj::VLINER,"VLINER");
	HX_MARK_MEMBER_NAME(PathParser_obj::CUBIC,"CUBIC");
	HX_MARK_MEMBER_NAME(PathParser_obj::CUBICR,"CUBICR");
	HX_MARK_MEMBER_NAME(PathParser_obj::SCUBIC,"SCUBIC");
	HX_MARK_MEMBER_NAME(PathParser_obj::SCUBICR,"SCUBICR");
	HX_MARK_MEMBER_NAME(PathParser_obj::QUAD,"QUAD");
	HX_MARK_MEMBER_NAME(PathParser_obj::QUADR,"QUADR");
	HX_MARK_MEMBER_NAME(PathParser_obj::SQUAD,"SQUAD");
	HX_MARK_MEMBER_NAME(PathParser_obj::SQUADR,"SQUADR");
	HX_MARK_MEMBER_NAME(PathParser_obj::ARC,"ARC");
	HX_MARK_MEMBER_NAME(PathParser_obj::ARCR,"ARCR");
	HX_MARK_MEMBER_NAME(PathParser_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(PathParser_obj::CLOSER,"CLOSER");
	HX_MARK_MEMBER_NAME(PathParser_obj::UNKNOWN,"UNKNOWN");
	HX_MARK_MEMBER_NAME(PathParser_obj::SEPARATOR,"SEPARATOR");
	HX_MARK_MEMBER_NAME(PathParser_obj::FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(PathParser_obj::FLOAT_SIGN,"FLOAT_SIGN");
	HX_MARK_MEMBER_NAME(PathParser_obj::FLOAT_DOT,"FLOAT_DOT");
	HX_MARK_MEMBER_NAME(PathParser_obj::FLOAT_EXP,"FLOAT_EXP");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathParser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PathParser_obj::sCommandArgs,"sCommandArgs");
	HX_VISIT_MEMBER_NAME(PathParser_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(PathParser_obj::MOVER,"MOVER");
	HX_VISIT_MEMBER_NAME(PathParser_obj::LINE,"LINE");
	HX_VISIT_MEMBER_NAME(PathParser_obj::LINER,"LINER");
	HX_VISIT_MEMBER_NAME(PathParser_obj::HLINE,"HLINE");
	HX_VISIT_MEMBER_NAME(PathParser_obj::HLINER,"HLINER");
	HX_VISIT_MEMBER_NAME(PathParser_obj::VLINE,"VLINE");
	HX_VISIT_MEMBER_NAME(PathParser_obj::VLINER,"VLINER");
	HX_VISIT_MEMBER_NAME(PathParser_obj::CUBIC,"CUBIC");
	HX_VISIT_MEMBER_NAME(PathParser_obj::CUBICR,"CUBICR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::SCUBIC,"SCUBIC");
	HX_VISIT_MEMBER_NAME(PathParser_obj::SCUBICR,"SCUBICR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::QUAD,"QUAD");
	HX_VISIT_MEMBER_NAME(PathParser_obj::QUADR,"QUADR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::SQUAD,"SQUAD");
	HX_VISIT_MEMBER_NAME(PathParser_obj::SQUADR,"SQUADR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::ARC,"ARC");
	HX_VISIT_MEMBER_NAME(PathParser_obj::ARCR,"ARCR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(PathParser_obj::CLOSER,"CLOSER");
	HX_VISIT_MEMBER_NAME(PathParser_obj::UNKNOWN,"UNKNOWN");
	HX_VISIT_MEMBER_NAME(PathParser_obj::SEPARATOR,"SEPARATOR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::FLOAT,"FLOAT");
	HX_VISIT_MEMBER_NAME(PathParser_obj::FLOAT_SIGN,"FLOAT_SIGN");
	HX_VISIT_MEMBER_NAME(PathParser_obj::FLOAT_DOT,"FLOAT_DOT");
	HX_VISIT_MEMBER_NAME(PathParser_obj::FLOAT_EXP,"FLOAT_EXP");
};

Class PathParser_obj::__mClass;

void PathParser_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.PathParser"), hx::TCanCast< PathParser_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PathParser_obj::__boot()
{
	MOVE= HX_CSTRING("M").charCodeAt((int)0);
	MOVER= HX_CSTRING("m").charCodeAt((int)0);
	LINE= HX_CSTRING("L").charCodeAt((int)0);
	LINER= HX_CSTRING("l").charCodeAt((int)0);
	HLINE= HX_CSTRING("H").charCodeAt((int)0);
	HLINER= HX_CSTRING("h").charCodeAt((int)0);
	VLINE= HX_CSTRING("V").charCodeAt((int)0);
	VLINER= HX_CSTRING("v").charCodeAt((int)0);
	CUBIC= HX_CSTRING("C").charCodeAt((int)0);
	CUBICR= HX_CSTRING("c").charCodeAt((int)0);
	SCUBIC= HX_CSTRING("S").charCodeAt((int)0);
	SCUBICR= HX_CSTRING("s").charCodeAt((int)0);
	QUAD= HX_CSTRING("Q").charCodeAt((int)0);
	QUADR= HX_CSTRING("q").charCodeAt((int)0);
	SQUAD= HX_CSTRING("T").charCodeAt((int)0);
	SQUADR= HX_CSTRING("t").charCodeAt((int)0);
	ARC= HX_CSTRING("A").charCodeAt((int)0);
	ARCR= HX_CSTRING("a").charCodeAt((int)0);
	CLOSE= HX_CSTRING("Z").charCodeAt((int)0);
	CLOSER= HX_CSTRING("z").charCodeAt((int)0);
	UNKNOWN= (int)-1;
	SEPARATOR= (int)-2;
	FLOAT= (int)-3;
	FLOAT_SIGN= (int)-4;
	FLOAT_DOT= (int)-5;
	FLOAT_EXP= (int)-6;
}

} // end namespace format
} // end namespace svg
