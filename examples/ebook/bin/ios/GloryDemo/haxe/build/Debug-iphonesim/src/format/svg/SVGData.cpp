#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_format_svg_DisplayElement
#include <format/svg/DisplayElement.h>
#endif
#ifndef INCLUDED_format_svg_DrawSegment
#include <format/svg/DrawSegment.h>
#endif
#ifndef INCLUDED_format_svg_FillType
#include <format/svg/FillType.h>
#endif
#ifndef INCLUDED_format_svg_Grad
#include <format/svg/Grad.h>
#endif
#ifndef INCLUDED_format_svg_Group
#include <format/svg/Group.h>
#endif
#ifndef INCLUDED_format_svg_MoveSegment
#include <format/svg/MoveSegment.h>
#endif
#ifndef INCLUDED_format_svg_Path
#include <format/svg/Path.h>
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
#ifndef INCLUDED_format_svg_SVGData
#include <format/svg/SVGData.h>
#endif
#ifndef INCLUDED_format_svg_Text
#include <format/svg/Text.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_native_display_CapsStyle
#include <native/display/CapsStyle.h>
#endif
#ifndef INCLUDED_native_display_GradientType
#include <native/display/GradientType.h>
#endif
#ifndef INCLUDED_native_display_InterpolationMethod
#include <native/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_native_display_JointStyle
#include <native/display/JointStyle.h>
#endif
#ifndef INCLUDED_native_display_SpreadMethod
#include <native/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
namespace format{
namespace svg{

Void SVGData_obj::__construct(::Xml inXML,hx::Null< bool >  __o_inConvertCubics)
{
HX_STACK_PUSH("SVGData::new","format/svg/SVGData.hx",42);
bool inConvertCubics = __o_inConvertCubics.Default(false);
{
	HX_STACK_LINE(44)
	super::__construct();
	HX_STACK_LINE(46)
	::Xml svg = inXML->firstElement();		HX_STACK_VAR(svg,"svg");
	HX_STACK_LINE(48)
	if (((bool((svg == null())) || bool((bool((svg->getNodeName() != HX_CSTRING("svg"))) && bool((svg->getNodeName() != HX_CSTRING("svg:svg")))))))){
		HX_STACK_LINE(49)
		hx::Throw (((HX_CSTRING("Not an SVG file (") + ((  (((svg == null()))) ? ::String(HX_CSTRING("null")) : ::String(svg->getNodeName()) ))) + HX_CSTRING(")")));
	}
	HX_STACK_LINE(51)
	this->mGrads = ::Hash_obj::__new();
	HX_STACK_LINE(52)
	this->mPathParser = ::format::svg::PathParser_obj::__new();
	HX_STACK_LINE(53)
	this->mConvertCubics = inConvertCubics;
	HX_STACK_LINE(55)
	this->width = this->getFloatStyle(HX_CSTRING("width"),svg,null(),0.0);
	HX_STACK_LINE(56)
	this->height = this->getFloatStyle(HX_CSTRING("height"),svg,null(),0.0);
	HX_STACK_LINE(58)
	if (((bool((this->width == (int)0)) && bool((this->height == (int)0))))){
		HX_STACK_LINE(59)
		this->width = this->height = (int)400;
	}
	else{
		HX_STACK_LINE(60)
		if (((this->width == (int)0))){
			HX_STACK_LINE(61)
			this->width = this->height;
		}
		else{
			HX_STACK_LINE(62)
			if (((this->height == (int)0))){
				HX_STACK_LINE(63)
				this->height = this->width;
			}
		}
	}
	HX_STACK_LINE(65)
	this->loadGroup(hx::ObjectPtr<OBJ_>(this),svg,::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null()),null());
}
;
	return null();
}

SVGData_obj::~SVGData_obj() { }

Dynamic SVGData_obj::__CreateEmpty() { return  new SVGData_obj; }
hx::ObjectPtr< SVGData_obj > SVGData_obj::__new(::Xml inXML,hx::Null< bool >  __o_inConvertCubics)
{  hx::ObjectPtr< SVGData_obj > result = new SVGData_obj();
	result->__construct(inXML,__o_inConvertCubics);
	return result;}

Dynamic SVGData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SVGData_obj > result = new SVGData_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::format::svg::Text SVGData_obj::loadText( ::Xml inText,::native::geom::Matrix matrix,::Hash inStyles){
	HX_STACK_PUSH("SVGData::loadText","format/svg/SVGData.hx",590);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inText,"inText");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(inStyles,"inStyles");
	HX_STACK_LINE(592)
	if ((inText->exists(HX_CSTRING("transform")))){
		HX_STACK_LINE(594)
		matrix = matrix->clone();
		HX_STACK_LINE(595)
		this->applyTransform(matrix,inText->get(HX_CSTRING("transform")));
	}
	HX_STACK_LINE(599)
	::Hash styles = this->getStyles(inText,inStyles);		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(600)
	::format::svg::Text text = ::format::svg::Text_obj::__new();		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(602)
	text->matrix = matrix;
	HX_STACK_LINE(603)
	text->name = (  ((inText->exists(HX_CSTRING("id")))) ? ::String(inText->get(HX_CSTRING("id"))) : ::String(HX_CSTRING("")) );
	HX_STACK_LINE(604)
	text->x = this->getFloat(inText,HX_CSTRING("x"),0.0);
	HX_STACK_LINE(605)
	text->y = this->getFloat(inText,HX_CSTRING("y"),0.0);
	HX_STACK_LINE(606)
	text->fill = this->getFillStyle(HX_CSTRING("fill"),inText,styles);
	HX_STACK_LINE(607)
	text->fill_alpha = this->getFloatStyle(HX_CSTRING("fill-opacity"),inText,styles,1.0);
	HX_STACK_LINE(608)
	text->stroke_alpha = this->getFloatStyle(HX_CSTRING("stroke-opacity"),inText,styles,1.0);
	HX_STACK_LINE(609)
	text->stroke_colour = this->getStrokeStyle(HX_CSTRING("stroke"),inText,styles,null());
	HX_STACK_LINE(610)
	text->stroke_width = this->getFloatStyle(HX_CSTRING("stroke-width"),inText,styles,1.0);
	HX_STACK_LINE(611)
	text->font_family = this->getStyle(HX_CSTRING("font-family"),inText,styles,HX_CSTRING(""));
	HX_STACK_LINE(612)
	text->font_size = this->getFloatStyle(HX_CSTRING("font-size"),inText,styles,(int)12);
	HX_STACK_LINE(613)
	text->letter_spacing = this->getFloatStyle(HX_CSTRING("letter-spacing"),inText,styles,(int)0);
	HX_STACK_LINE(614)
	text->kerning = this->getFloatStyle(HX_CSTRING("kerning"),inText,styles,(int)0);
	HX_STACK_LINE(616)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(618)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(inText->elements());  __it->hasNext(); ){
		::Xml el = __it->next();
		hx::AddEq(string,el->toString());
	}
	HX_STACK_LINE(625)
	text->text = string;
	HX_STACK_LINE(626)
	return text;
}


HX_DEFINE_DYNAMIC_FUNC3(SVGData_obj,loadText,return )

::format::svg::Path SVGData_obj::loadPath( ::Xml inPath,::native::geom::Matrix matrix,::Hash inStyles,bool inIsRect,bool inIsEllipse){
	HX_STACK_PUSH("SVGData::loadPath","format/svg/SVGData.hx",488);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inPath,"inPath");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(inStyles,"inStyles");
	HX_STACK_ARG(inIsRect,"inIsRect");
	HX_STACK_ARG(inIsEllipse,"inIsEllipse");
	HX_STACK_LINE(490)
	if ((inPath->exists(HX_CSTRING("transform")))){
		HX_STACK_LINE(492)
		matrix = matrix->clone();
		HX_STACK_LINE(493)
		this->applyTransform(matrix,inPath->get(HX_CSTRING("transform")));
	}
	HX_STACK_LINE(497)
	::Hash styles = this->getStyles(inPath,inStyles);		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(498)
	::String name = (  ((inPath->exists(HX_CSTRING("id")))) ? ::String(inPath->get(HX_CSTRING("id"))) : ::String(HX_CSTRING("")) );		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(499)
	::format::svg::Path path = ::format::svg::Path_obj::__new();		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(501)
	path->fill = this->getFillStyle(HX_CSTRING("fill"),inPath,styles);
	HX_STACK_LINE(502)
	path->fill_alpha = this->getFloatStyle(HX_CSTRING("fill-opacity"),inPath,styles,1.0);
	HX_STACK_LINE(503)
	path->stroke_alpha = this->getFloatStyle(HX_CSTRING("stroke-opacity"),inPath,styles,1.0);
	HX_STACK_LINE(504)
	path->stroke_colour = this->getStrokeStyle(HX_CSTRING("stroke"),inPath,styles,null());
	HX_STACK_LINE(505)
	path->stroke_width = this->getFloatStyle(HX_CSTRING("stroke-width"),inPath,styles,1.0);
	HX_STACK_LINE(506)
	path->stroke_caps = ::native::display::CapsStyle_obj::ROUND_dyn();
	HX_STACK_LINE(507)
	path->joint_style = ::native::display::JointStyle_obj::ROUND_dyn();
	HX_STACK_LINE(508)
	path->miter_limit = this->getFloatStyle(HX_CSTRING("stroke-miterlimit"),inPath,styles,3.0);
	HX_STACK_LINE(509)
	path->segments = Array_obj< ::format::svg::PathSegment >::__new();
	HX_STACK_LINE(510)
	path->matrix = matrix;
	HX_STACK_LINE(511)
	path->name = name;
	HX_STACK_LINE(513)
	if ((inIsRect)){
		HX_STACK_LINE(515)
		Float x = (  ((inPath->exists(HX_CSTRING("x")))) ? Float(::Std_obj::parseFloat(inPath->get(HX_CSTRING("x")))) : Float((int)0) );		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(516)
		Float y = (  ((inPath->exists(HX_CSTRING("y")))) ? Float(::Std_obj::parseFloat(inPath->get(HX_CSTRING("y")))) : Float((int)0) );		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(517)
		Float w = ::Std_obj::parseFloat(inPath->get(HX_CSTRING("width")));		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(518)
		Float h = ::Std_obj::parseFloat(inPath->get(HX_CSTRING("height")));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(519)
		Float rx = (  ((inPath->exists(HX_CSTRING("rx")))) ? Float(::Std_obj::parseFloat(inPath->get(HX_CSTRING("rx")))) : Float(0.0) );		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(520)
		Float ry = (  ((inPath->exists(HX_CSTRING("ry")))) ? Float(::Std_obj::parseFloat(inPath->get(HX_CSTRING("ry")))) : Float(0.0) );		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(522)
		if (((bool((rx == (int)0)) || bool((ry == (int)0))))){
			HX_STACK_LINE(524)
			path->segments->push(::format::svg::MoveSegment_obj::__new(x,y));
			HX_STACK_LINE(525)
			path->segments->push(::format::svg::DrawSegment_obj::__new((x + w),y));
			HX_STACK_LINE(526)
			path->segments->push(::format::svg::DrawSegment_obj::__new((x + w),(y + h)));
			HX_STACK_LINE(527)
			path->segments->push(::format::svg::DrawSegment_obj::__new(x,(y + h)));
			HX_STACK_LINE(528)
			path->segments->push(::format::svg::DrawSegment_obj::__new(x,y));
		}
		else{
			HX_STACK_LINE(532)
			path->segments->push(::format::svg::MoveSegment_obj::__new(x,(y + ry)));
			HX_STACK_LINE(535)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new(x,y,(x + rx),y));
			HX_STACK_LINE(536)
			path->segments->push(::format::svg::DrawSegment_obj::__new(((x + w) - rx),y));
			HX_STACK_LINE(539)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new((x + w),y,(x + w),(y + rx)));
			HX_STACK_LINE(540)
			path->segments->push(::format::svg::DrawSegment_obj::__new((x + w),((y + h) - ry)));
			HX_STACK_LINE(543)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new((x + w),(y + h),((x + w) - rx),(y + h)));
			HX_STACK_LINE(544)
			path->segments->push(::format::svg::DrawSegment_obj::__new((x + rx),(y + h)));
			HX_STACK_LINE(547)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new(x,(y + h),x,((y + h) - ry)));
			HX_STACK_LINE(548)
			path->segments->push(::format::svg::DrawSegment_obj::__new(x,(y + ry)));
		}
	}
	else{
		HX_STACK_LINE(552)
		if ((inIsEllipse)){
			HX_STACK_LINE(554)
			Float x = (  ((inPath->exists(HX_CSTRING("cx")))) ? Float(::Std_obj::parseFloat(inPath->get(HX_CSTRING("cx")))) : Float((int)0) );		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(555)
			Float y = (  ((inPath->exists(HX_CSTRING("cy")))) ? Float(::Std_obj::parseFloat(inPath->get(HX_CSTRING("cy")))) : Float((int)0) );		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(556)
			Float w = (  ((inPath->exists(HX_CSTRING("rx")))) ? Float(::Std_obj::parseFloat(inPath->get(HX_CSTRING("rx")))) : Float(0.0) );		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(557)
			Float w_ = (w * ::format::svg::SVGData_obj::SIN45);		HX_STACK_VAR(w_,"w_");
			HX_STACK_LINE(558)
			Float cw_ = (w * ::format::svg::SVGData_obj::TAN22);		HX_STACK_VAR(cw_,"cw_");
			HX_STACK_LINE(559)
			Float h = (  ((inPath->exists(HX_CSTRING("ry")))) ? Float(::Std_obj::parseFloat(inPath->get(HX_CSTRING("ry")))) : Float(0.0) );		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(560)
			Float h_ = (h * ::format::svg::SVGData_obj::SIN45);		HX_STACK_VAR(h_,"h_");
			HX_STACK_LINE(561)
			Float ch_ = (h * ::format::svg::SVGData_obj::TAN22);		HX_STACK_VAR(ch_,"ch_");
			HX_STACK_LINE(563)
			path->segments->push(::format::svg::MoveSegment_obj::__new((x + w),y));
			HX_STACK_LINE(564)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new((x + w),(y + ch_),(x + w_),(y + h_)));
			HX_STACK_LINE(565)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new((x + cw_),(y + h),x,(y + h)));
			HX_STACK_LINE(566)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new((x - cw_),(y + h),(x - w_),(y + h_)));
			HX_STACK_LINE(567)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new((x - w),(y + ch_),(x - w),y));
			HX_STACK_LINE(568)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new((x - w),(y - ch_),(x - w_),(y - h_)));
			HX_STACK_LINE(569)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new((x - cw_),(y - h),x,(y - h)));
			HX_STACK_LINE(570)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new((x + cw_),(y - h),(x + w_),(y - h_)));
			HX_STACK_LINE(571)
			path->segments->push(::format::svg::QuadraticSegment_obj::__new((x + w),(y - ch_),(x + w),y));
		}
		else{
			HX_STACK_LINE(575)
			::String d = (  ((inPath->exists(HX_CSTRING("points")))) ? ::String(((HX_CSTRING("M") + inPath->get(HX_CSTRING("points"))) + HX_CSTRING("z"))) : ::String(inPath->get(HX_CSTRING("d"))) );		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(577)
			{
				HX_STACK_LINE(577)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::format::svg::PathSegment > _g1 = this->mPathParser->parse(d,this->mConvertCubics);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(577)
				while(((_g < _g1->length))){
					HX_STACK_LINE(577)
					::format::svg::PathSegment segment = _g1->__get(_g);		HX_STACK_VAR(segment,"segment");
					HX_STACK_LINE(577)
					++(_g);
					HX_STACK_LINE(579)
					path->segments->push(segment);
				}
			}
		}
	}
	HX_STACK_LINE(585)
	return path;
}


HX_DEFINE_DYNAMIC_FUNC5(SVGData_obj,loadPath,return )

::format::svg::Group SVGData_obj::loadGroup( ::format::svg::Group g,::Xml inG,::native::geom::Matrix matrix,::Hash inStyles){
	HX_STACK_PUSH("SVGData::loadGroup","format/svg/SVGData.hx",416);
	HX_STACK_THIS(this);
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(inG,"inG");
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_ARG(inStyles,"inStyles");
	HX_STACK_LINE(418)
	if ((inG->exists(HX_CSTRING("transform")))){
		HX_STACK_LINE(420)
		matrix = matrix->clone();
		HX_STACK_LINE(421)
		this->applyTransform(matrix,inG->get(HX_CSTRING("transform")));
	}
	HX_STACK_LINE(425)
	if ((inG->exists(HX_CSTRING("inkscape:label")))){
		HX_STACK_LINE(425)
		g->name = inG->get(HX_CSTRING("inkscape:label"));
	}
	else{
		HX_STACK_LINE(429)
		if ((inG->exists(HX_CSTRING("id")))){
			HX_STACK_LINE(429)
			g->name = inG->get(HX_CSTRING("id"));
		}
	}
	HX_STACK_LINE(435)
	::Hash styles = this->getStyles(inG,inStyles);		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(437)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(inG->elements());  __it->hasNext(); ){
		::Xml el = __it->next();
		{
			HX_STACK_LINE(439)
			::String name = el->getNodeName();		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(441)
			if (((name.substr((int)0,(int)4) == HX_CSTRING("svg:")))){
				HX_STACK_LINE(441)
				name = name.substr((int)4,null());
			}
			HX_STACK_LINE(447)
			if (((name == HX_CSTRING("defs")))){
				HX_STACK_LINE(447)
				this->loadDefs(el);
			}
			else{
				HX_STACK_LINE(451)
				if (((name == HX_CSTRING("g")))){
					HX_STACK_LINE(451)
					g->children->push(::format::svg::DisplayElement_obj::DisplayGroup(this->loadGroup(::format::svg::Group_obj::__new(),el,matrix,styles)));
				}
				else{
					HX_STACK_LINE(455)
					if (((name == HX_CSTRING("path")))){
						HX_STACK_LINE(455)
						g->children->push(::format::svg::DisplayElement_obj::DisplayPath(this->loadPath(el,matrix,styles,false,false)));
					}
					else{
						HX_STACK_LINE(459)
						if (((name == HX_CSTRING("rect")))){
							HX_STACK_LINE(459)
							g->children->push(::format::svg::DisplayElement_obj::DisplayPath(this->loadPath(el,matrix,styles,true,false)));
						}
						else{
							HX_STACK_LINE(463)
							if (((name == HX_CSTRING("polygon")))){
								HX_STACK_LINE(463)
								g->children->push(::format::svg::DisplayElement_obj::DisplayPath(this->loadPath(el,matrix,styles,false,false)));
							}
							else{
								HX_STACK_LINE(467)
								if (((name == HX_CSTRING("ellipse")))){
									HX_STACK_LINE(467)
									g->children->push(::format::svg::DisplayElement_obj::DisplayPath(this->loadPath(el,matrix,styles,false,true)));
								}
								else{
									HX_STACK_LINE(471)
									if (((name == HX_CSTRING("text")))){
										HX_STACK_LINE(471)
										g->children->push(::format::svg::DisplayElement_obj::DisplayText(this->loadText(el,matrix,styles)));
									}
									else{
									}
								}
							}
						}
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(483)
	return g;
}


HX_DEFINE_DYNAMIC_FUNC4(SVGData_obj,loadGroup,return )

Void SVGData_obj::loadGradient( ::Xml inGrad,::native::display::GradientType inType,bool inCrossLink){
{
		HX_STACK_PUSH("SVGData::loadGradient","format/svg/SVGData.hx",343);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inGrad,"inGrad");
		HX_STACK_ARG(inType,"inType");
		HX_STACK_ARG(inCrossLink,"inCrossLink");
		HX_STACK_LINE(345)
		::String name = inGrad->get(HX_CSTRING("id"));		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(346)
		::format::svg::Grad grad = ::format::svg::Grad_obj::__new(inType);		HX_STACK_VAR(grad,"grad");
		HX_STACK_LINE(348)
		if (((bool(inCrossLink) && bool(inGrad->exists(HX_CSTRING("xlink:href")))))){
			HX_STACK_LINE(350)
			::String xlink = inGrad->get(HX_CSTRING("xlink:href"));		HX_STACK_VAR(xlink,"xlink");
			HX_STACK_LINE(352)
			if (((xlink.charAt((int)0) != HX_CSTRING("#")))){
				HX_STACK_LINE(353)
				hx::Throw ((HX_CSTRING("xlink - unkown syntax : ") + xlink));
			}
			HX_STACK_LINE(355)
			::format::svg::Grad base = this->mGrads->get(xlink.substr((int)1,null()));		HX_STACK_VAR(base,"base");
			HX_STACK_LINE(357)
			if (((base != null()))){
				HX_STACK_LINE(359)
				grad->colors = base->colors;
				HX_STACK_LINE(360)
				grad->alphas = base->alphas;
				HX_STACK_LINE(361)
				grad->ratios = base->ratios;
				HX_STACK_LINE(362)
				grad->gradMatrix = base->gradMatrix->clone();
				HX_STACK_LINE(363)
				grad->spread = base->spread;
				HX_STACK_LINE(364)
				grad->interp = base->interp;
				HX_STACK_LINE(365)
				grad->radius = base->radius;
			}
			else{
				HX_STACK_LINE(367)
				hx::Throw ((HX_CSTRING("Unknown xlink : ") + xlink));
			}
		}
		HX_STACK_LINE(375)
		if ((inGrad->exists(HX_CSTRING("x1")))){
			HX_STACK_LINE(377)
			grad->x1 = this->getFloat(inGrad,HX_CSTRING("x1"),null());
			HX_STACK_LINE(378)
			grad->y1 = this->getFloat(inGrad,HX_CSTRING("y1"),null());
			HX_STACK_LINE(379)
			grad->x2 = this->getFloat(inGrad,HX_CSTRING("x2"),null());
			HX_STACK_LINE(380)
			grad->y2 = this->getFloat(inGrad,HX_CSTRING("y2"),null());
		}
		else{
			HX_STACK_LINE(384)
			grad->x1 = this->getFloat(inGrad,HX_CSTRING("cx"),null());
			HX_STACK_LINE(385)
			grad->y1 = this->getFloat(inGrad,HX_CSTRING("cy"),null());
			HX_STACK_LINE(386)
			grad->x2 = this->getFloat(inGrad,HX_CSTRING("fx"),grad->x1);
			HX_STACK_LINE(387)
			grad->y2 = this->getFloat(inGrad,HX_CSTRING("fy"),grad->y1);
		}
		HX_STACK_LINE(391)
		grad->radius = this->getFloat(inGrad,HX_CSTRING("r"),null());
		HX_STACK_LINE(393)
		if ((inGrad->exists(HX_CSTRING("gradientTransform")))){
			HX_STACK_LINE(393)
			this->applyTransform(grad->gradMatrix,inGrad->get(HX_CSTRING("gradientTransform")));
		}
		HX_STACK_LINE(401)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(inGrad->elements());  __it->hasNext(); ){
			::Xml stop = __it->next();
			{
				HX_STACK_LINE(403)
				::Hash styles = this->getStyles(stop,null());		HX_STACK_VAR(styles,"styles");
				HX_STACK_LINE(405)
				grad->colors->push(this->getColorStyle(HX_CSTRING("stop-color"),stop,styles,(int)0));
				HX_STACK_LINE(406)
				grad->alphas->push(this->getFloatStyle(HX_CSTRING("stop-opacity"),stop,styles,1.0));
				HX_STACK_LINE(407)
				grad->ratios->push(::Std_obj::_int((::Std_obj::parseFloat(stop->get(HX_CSTRING("offset"))) * 255.0)));
			}
;
		}
		HX_STACK_LINE(411)
		this->mGrads->set(name,grad);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SVGData_obj,loadGradient,(void))

Void SVGData_obj::loadDefs( ::Xml inXML){
{
		HX_STACK_PUSH("SVGData::loadDefs","format/svg/SVGData.hx",310);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inXML,"inXML");
		HX_STACK_LINE(314)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(314)
		while(((_g < (int)2))){
			HX_STACK_LINE(314)
			int pass = (_g)++;		HX_STACK_VAR(pass,"pass");
			HX_STACK_LINE(316)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(inXML->elements());  __it->hasNext(); ){
				::Xml def = __it->next();
				{
					HX_STACK_LINE(318)
					::String name = def->getNodeName();		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(320)
					if (((name.substr((int)0,(int)4) == HX_CSTRING("svg:")))){
						HX_STACK_LINE(320)
						name = name.substr((int)4,null());
					}
					HX_STACK_LINE(326)
					if (((name == HX_CSTRING("linearGradient")))){
						HX_STACK_LINE(326)
						this->loadGradient(def,::native::display::GradientType_obj::LINEAR_dyn(),(pass == (int)1));
					}
					else{
						HX_STACK_LINE(330)
						if (((name == HX_CSTRING("radialGradient")))){
							HX_STACK_LINE(330)
							this->loadGradient(def,::native::display::GradientType_obj::RADIAL_dyn(),(pass == (int)1));
						}
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SVGData_obj,loadDefs,(void))

::Hash SVGData_obj::getStyles( ::Xml inNode,::Hash inPrevStyles){
	HX_STACK_PUSH("SVGData::getStyles","format/svg/SVGData.hx",275);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inNode,"inNode");
	HX_STACK_ARG(inPrevStyles,"inPrevStyles");
	HX_STACK_LINE(277)
	if ((!(inNode->exists(HX_CSTRING("style"))))){
		HX_STACK_LINE(278)
		return inPrevStyles;
	}
	HX_STACK_LINE(280)
	::Hash styles = ::Hash_obj::__new();		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(282)
	if (((inPrevStyles != null()))){
		HX_STACK_LINE(282)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(inPrevStyles->keys());  __it->hasNext(); ){
			::String s = __it->next();
			styles->set(s,inPrevStyles->get(s));
		}
	}
	HX_STACK_LINE(292)
	::String style = inNode->get(HX_CSTRING("style"));		HX_STACK_VAR(style,"style");
	HX_STACK_LINE(293)
	Array< ::String > strings = ::format::svg::SVGData_obj::mStyleSplit->split(style);		HX_STACK_VAR(strings,"strings");
	HX_STACK_LINE(295)
	{
		HX_STACK_LINE(295)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(295)
		while(((_g < strings->length))){
			HX_STACK_LINE(295)
			::String s = strings->__get(_g);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(295)
			++(_g);
			HX_STACK_LINE(297)
			if ((::format::svg::SVGData_obj::mStyleValue->match(s))){
				HX_STACK_LINE(297)
				styles->set(::format::svg::SVGData_obj::mStyleValue->matched((int)1),::format::svg::SVGData_obj::mStyleValue->matched((int)2));
			}
		}
	}
	HX_STACK_LINE(305)
	return styles;
}


HX_DEFINE_DYNAMIC_FUNC2(SVGData_obj,getStyles,return )

::String SVGData_obj::getStyle( ::String inKey,::Xml inNode,::Hash inStyles,::String inDefault){
	HX_STACK_PUSH("SVGData::getStyle","format/svg/SVGData.hx",256);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inKey,"inKey");
	HX_STACK_ARG(inNode,"inNode");
	HX_STACK_ARG(inStyles,"inStyles");
	HX_STACK_ARG(inDefault,"inDefault");
	HX_STACK_LINE(258)
	if (((bool((inNode != null())) && bool(inNode->exists(inKey))))){
		HX_STACK_LINE(258)
		return inNode->get(inKey);
	}
	HX_STACK_LINE(264)
	if (((bool((inStyles != null())) && bool(inStyles->exists(inKey))))){
		HX_STACK_LINE(264)
		return inStyles->get(inKey);
	}
	HX_STACK_LINE(270)
	return inDefault;
}


HX_DEFINE_DYNAMIC_FUNC4(SVGData_obj,getStyle,return )

Dynamic SVGData_obj::getStrokeStyle( ::String inKey,::Xml inNode,::Hash inStyles,Dynamic inDefault){
	HX_STACK_PUSH("SVGData::getStrokeStyle","format/svg/SVGData.hx",229);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inKey,"inKey");
	HX_STACK_ARG(inNode,"inNode");
	HX_STACK_ARG(inStyles,"inStyles");
	HX_STACK_ARG(inDefault,"inDefault");
	HX_STACK_LINE(231)
	::String s = this->getStyle(inKey,inNode,inStyles,HX_CSTRING(""));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(233)
	if (((s == HX_CSTRING("")))){
		HX_STACK_LINE(233)
		return inDefault;
	}
	HX_STACK_LINE(239)
	if (((s == HX_CSTRING("none")))){
		HX_STACK_LINE(239)
		return null();
	}
	HX_STACK_LINE(245)
	if (((s.charAt((int)0) == HX_CSTRING("#")))){
		HX_STACK_LINE(245)
		return ::Std_obj::parseInt((HX_CSTRING("0x") + s.substr((int)1,null())));
	}
	HX_STACK_LINE(251)
	return ::Std_obj::parseInt(s);
}


HX_DEFINE_DYNAMIC_FUNC4(SVGData_obj,getStrokeStyle,return )

Float SVGData_obj::getFloatStyle( ::String inKey,::Xml inNode,::Hash inStyles,Float inDefault){
	HX_STACK_PUSH("SVGData::getFloatStyle","format/svg/SVGData.hx",214);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inKey,"inKey");
	HX_STACK_ARG(inNode,"inNode");
	HX_STACK_ARG(inStyles,"inStyles");
	HX_STACK_ARG(inDefault,"inDefault");
	HX_STACK_LINE(216)
	::String s = this->getStyle(inKey,inNode,inStyles,HX_CSTRING(""));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(218)
	if (((s == HX_CSTRING("")))){
		HX_STACK_LINE(218)
		return inDefault;
	}
	HX_STACK_LINE(224)
	return ::Std_obj::parseFloat(s);
}


HX_DEFINE_DYNAMIC_FUNC4(SVGData_obj,getFloatStyle,return )

Float SVGData_obj::getFloat( ::Xml inXML,::String inName,hx::Null< Float >  __o_inDef){
Float inDef = __o_inDef.Default(0.0);
	HX_STACK_PUSH("SVGData::getFloat","format/svg/SVGData.hx",204);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inXML,"inXML");
	HX_STACK_ARG(inName,"inName");
	HX_STACK_ARG(inDef,"inDef");
{
		HX_STACK_LINE(206)
		if ((inXML->exists(inName))){
			HX_STACK_LINE(207)
			return ::Std_obj::parseFloat(inXML->get(inName));
		}
		HX_STACK_LINE(209)
		return inDef;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(SVGData_obj,getFloat,return )

::format::svg::FillType SVGData_obj::getFillStyle( ::String inKey,::Xml inNode,::Hash inStyles){
	HX_STACK_PUSH("SVGData::getFillStyle","format/svg/SVGData.hx",161);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inKey,"inKey");
	HX_STACK_ARG(inNode,"inNode");
	HX_STACK_ARG(inStyles,"inStyles");
	HX_STACK_LINE(163)
	::String s = this->getStyle(inKey,inNode,inStyles,HX_CSTRING(""));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(165)
	if (((s == HX_CSTRING("")))){
		HX_STACK_LINE(165)
		return ::format::svg::SVGData_obj::defaultFill;
	}
	HX_STACK_LINE(171)
	if (((s.charAt((int)0) == HX_CSTRING("#")))){
		HX_STACK_LINE(171)
		return ::format::svg::FillType_obj::FillSolid(::Std_obj::parseInt((HX_CSTRING("0x") + s.substr((int)1,null()))));
	}
	HX_STACK_LINE(177)
	if (((s == HX_CSTRING("none")))){
		HX_STACK_LINE(177)
		return ::format::svg::FillType_obj::FillNone_dyn();
	}
	HX_STACK_LINE(183)
	if ((::format::svg::SVGData_obj::mURLMatch->match(s))){
		HX_STACK_LINE(185)
		::String url = ::format::svg::SVGData_obj::mURLMatch->matched((int)1);		HX_STACK_VAR(url,"url");
		HX_STACK_LINE(187)
		if ((this->mGrads->exists(url))){
			HX_STACK_LINE(187)
			return ::format::svg::FillType_obj::FillGrad(this->mGrads->get(url));
		}
		HX_STACK_LINE(193)
		hx::Throw ((HX_CSTRING("Unknown url:") + url));
	}
	HX_STACK_LINE(197)
	hx::Throw ((HX_CSTRING("Unknown fill string:") + s));
	HX_STACK_LINE(199)
	return ::format::svg::FillType_obj::FillNone_dyn();
}


HX_DEFINE_DYNAMIC_FUNC3(SVGData_obj,getFillStyle,return )

int SVGData_obj::getColorStyle( ::String inKey,::Xml inNode,::Hash inStyles,int inDefault){
	HX_STACK_PUSH("SVGData::getColorStyle","format/svg/SVGData.hx",140);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inKey,"inKey");
	HX_STACK_ARG(inNode,"inNode");
	HX_STACK_ARG(inStyles,"inStyles");
	HX_STACK_ARG(inDefault,"inDefault");
	HX_STACK_LINE(142)
	::String s = this->getStyle(inKey,inNode,inStyles,HX_CSTRING(""));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(144)
	if (((s == HX_CSTRING("")))){
		HX_STACK_LINE(144)
		return inDefault;
	}
	HX_STACK_LINE(150)
	if (((s.charAt((int)0) == HX_CSTRING("#")))){
		HX_STACK_LINE(150)
		return ::Std_obj::parseInt((HX_CSTRING("0x") + s.substr((int)1,null())));
	}
	HX_STACK_LINE(156)
	return ::Std_obj::parseInt(s);
}


HX_DEFINE_DYNAMIC_FUNC4(SVGData_obj,getColorStyle,return )

Void SVGData_obj::dumpGroup( ::format::svg::Group g,::String indent){
{
		HX_STACK_PUSH("SVGData::dumpGroup","format/svg/SVGData.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(indent,"indent");
		HX_STACK_LINE(122)
		::haxe::Log_obj::trace(((indent + HX_CSTRING("Group:")) + g->name),hx::SourceInfo(HX_CSTRING("SVGData.hx"),122,HX_CSTRING("format.svg.SVGData"),HX_CSTRING("dumpGroup")));
		HX_STACK_LINE(123)
		hx::AddEq(indent,HX_CSTRING("  "));
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::format::svg::DisplayElement > _g1 = g->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(125)
			while(((_g < _g1->length))){
				HX_STACK_LINE(125)
				::format::svg::DisplayElement e = _g1->__get(_g);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(125)
				++(_g);
				HX_STACK_LINE(127)
				{
					::format::svg::DisplayElement _switch_1 = (e);
					switch((_switch_1)->GetIndex()){
						case 0: {
							::format::svg::Path path = _switch_1->__Param(0);
{
								HX_STACK_LINE(129)
								::haxe::Log_obj::trace((((indent + HX_CSTRING("Path")) + HX_CSTRING("  ")) + ::Std_obj::string(path->matrix)),hx::SourceInfo(HX_CSTRING("SVGData.hx"),129,HX_CSTRING("format.svg.SVGData"),HX_CSTRING("dumpGroup")));
							}
						}
						;break;
						case 1: {
							::format::svg::Group group = _switch_1->__Param(0);
{
								HX_STACK_LINE(130)
								this->dumpGroup(group,(indent + HX_CSTRING("   ")));
							}
						}
						;break;
						case 2: {
							::format::svg::Text text = _switch_1->__Param(0);
{
								HX_STACK_LINE(131)
								::haxe::Log_obj::trace(((indent + HX_CSTRING("Text ")) + text->text),hx::SourceInfo(HX_CSTRING("SVGData.hx"),131,HX_CSTRING("format.svg.SVGData"),HX_CSTRING("dumpGroup")));
							}
						}
						;break;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SVGData_obj,dumpGroup,(void))

Float SVGData_obj::applyTransform( ::native::geom::Matrix ioMatrix,::String inTrans){
	HX_STACK_PUSH("SVGData::applyTransform","format/svg/SVGData.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ioMatrix,"ioMatrix");
	HX_STACK_ARG(inTrans,"inTrans");
	HX_STACK_LINE(72)
	Float scale = 1.0;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(74)
	if ((::format::svg::SVGData_obj::mTranslateMatch->match(inTrans))){
		HX_STACK_LINE(75)
		ioMatrix->translate(::Std_obj::parseFloat(::format::svg::SVGData_obj::mTranslateMatch->matched((int)1)),::Std_obj::parseFloat(::format::svg::SVGData_obj::mTranslateMatch->matched((int)2)));
	}
	else{
		HX_STACK_LINE(80)
		if ((::format::svg::SVGData_obj::mScaleMatch->match(inTrans))){
			HX_STACK_LINE(83)
			Float s = ::Std_obj::parseFloat(::format::svg::SVGData_obj::mScaleMatch->matched((int)1));		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(84)
			ioMatrix->scale(s,s);
			HX_STACK_LINE(85)
			scale = s;
		}
		else{
			HX_STACK_LINE(87)
			if ((::format::svg::SVGData_obj::mMatrixMatch->match(inTrans))){
				HX_STACK_LINE(89)
				::native::geom::Matrix m = ::native::geom::Matrix_obj::__new(::Std_obj::parseFloat(::format::svg::SVGData_obj::mMatrixMatch->matched((int)1)),::Std_obj::parseFloat(::format::svg::SVGData_obj::mMatrixMatch->matched((int)2)),::Std_obj::parseFloat(::format::svg::SVGData_obj::mMatrixMatch->matched((int)3)),::Std_obj::parseFloat(::format::svg::SVGData_obj::mMatrixMatch->matched((int)4)),::Std_obj::parseFloat(::format::svg::SVGData_obj::mMatrixMatch->matched((int)5)),::Std_obj::parseFloat(::format::svg::SVGData_obj::mMatrixMatch->matched((int)6)));		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(98)
				m->concat(ioMatrix);
				HX_STACK_LINE(100)
				ioMatrix->a = m->a;
				HX_STACK_LINE(101)
				ioMatrix->b = m->b;
				HX_STACK_LINE(102)
				ioMatrix->c = m->c;
				HX_STACK_LINE(103)
				ioMatrix->d = m->d;
				HX_STACK_LINE(104)
				ioMatrix->tx = m->tx;
				HX_STACK_LINE(105)
				ioMatrix->ty = m->ty;
				HX_STACK_LINE(107)
				scale = ::Math_obj::sqrt(((ioMatrix->a * ioMatrix->a) + (ioMatrix->c * ioMatrix->c)));
			}
			else{
				HX_STACK_LINE(109)
				::haxe::Log_obj::trace((HX_CSTRING("Warning, unknown transform:") + inTrans),hx::SourceInfo(HX_CSTRING("SVGData.hx"),111,HX_CSTRING("format.svg.SVGData"),HX_CSTRING("applyTransform")));
			}
		}
	}
	HX_STACK_LINE(115)
	return scale;
}


HX_DEFINE_DYNAMIC_FUNC2(SVGData_obj,applyTransform,return )

Float SVGData_obj::SIN45;

Float SVGData_obj::TAN22;

::EReg SVGData_obj::mStyleSplit;

::EReg SVGData_obj::mStyleValue;

::EReg SVGData_obj::mTranslateMatch;

::EReg SVGData_obj::mScaleMatch;

::EReg SVGData_obj::mMatrixMatch;

::EReg SVGData_obj::mURLMatch;

::format::svg::FillType SVGData_obj::defaultFill;


SVGData_obj::SVGData_obj()
{
}

void SVGData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SVGData);
	HX_MARK_MEMBER_NAME(mPathParser,"mPathParser");
	HX_MARK_MEMBER_NAME(mGrads,"mGrads");
	HX_MARK_MEMBER_NAME(mConvertCubics,"mConvertCubics");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SVGData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mPathParser,"mPathParser");
	HX_VISIT_MEMBER_NAME(mGrads,"mGrads");
	HX_VISIT_MEMBER_NAME(mConvertCubics,"mConvertCubics");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SVGData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { return SIN45; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { return TAN22; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mGrads") ) { return mGrads; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		if (HX_FIELD_EQ(inName,"loadPath") ) { return loadPath_dyn(); }
		if (HX_FIELD_EQ(inName,"loadDefs") ) { return loadDefs_dyn(); }
		if (HX_FIELD_EQ(inName,"getStyle") ) { return getStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mURLMatch") ) { return mURLMatch; }
		if (HX_FIELD_EQ(inName,"loadGroup") ) { return loadGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"getStyles") ) { return getStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"dumpGroup") ) { return dumpGroup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mStyleSplit") ) { return mStyleSplit; }
		if (HX_FIELD_EQ(inName,"mStyleValue") ) { return mStyleValue; }
		if (HX_FIELD_EQ(inName,"mScaleMatch") ) { return mScaleMatch; }
		if (HX_FIELD_EQ(inName,"defaultFill") ) { return defaultFill; }
		if (HX_FIELD_EQ(inName,"mPathParser") ) { return mPathParser; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mMatrixMatch") ) { return mMatrixMatch; }
		if (HX_FIELD_EQ(inName,"loadGradient") ) { return loadGradient_dyn(); }
		if (HX_FIELD_EQ(inName,"getFillStyle") ) { return getFillStyle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFloatStyle") ) { return getFloatStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorStyle") ) { return getColorStyle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getStrokeStyle") ) { return getStrokeStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"applyTransform") ) { return applyTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"mConvertCubics") ) { return mConvertCubics; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mTranslateMatch") ) { return mTranslateMatch; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SVGData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mGrads") ) { mGrads=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mURLMatch") ) { mURLMatch=inValue.Cast< ::EReg >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mStyleSplit") ) { mStyleSplit=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mStyleValue") ) { mStyleValue=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mScaleMatch") ) { mScaleMatch=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultFill") ) { defaultFill=inValue.Cast< ::format::svg::FillType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mPathParser") ) { mPathParser=inValue.Cast< ::format::svg::PathParser >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mMatrixMatch") ) { mMatrixMatch=inValue.Cast< ::EReg >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mConvertCubics") ) { mConvertCubics=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mTranslateMatch") ) { mTranslateMatch=inValue.Cast< ::EReg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SVGData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mPathParser"));
	outFields->push(HX_CSTRING("mGrads"));
	outFields->push(HX_CSTRING("mConvertCubics"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SIN45"),
	HX_CSTRING("TAN22"),
	HX_CSTRING("mStyleSplit"),
	HX_CSTRING("mStyleValue"),
	HX_CSTRING("mTranslateMatch"),
	HX_CSTRING("mScaleMatch"),
	HX_CSTRING("mMatrixMatch"),
	HX_CSTRING("mURLMatch"),
	HX_CSTRING("defaultFill"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadText"),
	HX_CSTRING("loadPath"),
	HX_CSTRING("loadGroup"),
	HX_CSTRING("loadGradient"),
	HX_CSTRING("loadDefs"),
	HX_CSTRING("getStyles"),
	HX_CSTRING("getStyle"),
	HX_CSTRING("getStrokeStyle"),
	HX_CSTRING("getFloatStyle"),
	HX_CSTRING("getFloat"),
	HX_CSTRING("getFillStyle"),
	HX_CSTRING("getColorStyle"),
	HX_CSTRING("dumpGroup"),
	HX_CSTRING("applyTransform"),
	HX_CSTRING("mPathParser"),
	HX_CSTRING("mGrads"),
	HX_CSTRING("mConvertCubics"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SVGData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SVGData_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(SVGData_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(SVGData_obj::mStyleSplit,"mStyleSplit");
	HX_MARK_MEMBER_NAME(SVGData_obj::mStyleValue,"mStyleValue");
	HX_MARK_MEMBER_NAME(SVGData_obj::mTranslateMatch,"mTranslateMatch");
	HX_MARK_MEMBER_NAME(SVGData_obj::mScaleMatch,"mScaleMatch");
	HX_MARK_MEMBER_NAME(SVGData_obj::mMatrixMatch,"mMatrixMatch");
	HX_MARK_MEMBER_NAME(SVGData_obj::mURLMatch,"mURLMatch");
	HX_MARK_MEMBER_NAME(SVGData_obj::defaultFill,"defaultFill");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SVGData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SVGData_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(SVGData_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mStyleSplit,"mStyleSplit");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mStyleValue,"mStyleValue");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mTranslateMatch,"mTranslateMatch");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mScaleMatch,"mScaleMatch");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mMatrixMatch,"mMatrixMatch");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mURLMatch,"mURLMatch");
	HX_VISIT_MEMBER_NAME(SVGData_obj::defaultFill,"defaultFill");
};

Class SVGData_obj::__mClass;

void SVGData_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.SVGData"), hx::TCanCast< SVGData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SVGData_obj::__boot()
{
	SIN45= 0.70710678118654752440084436210485;
	TAN22= 0.4142135623730950488016887242097;
	mStyleSplit= ::EReg_obj::__new(HX_CSTRING(";"),HX_CSTRING("g"));
	mStyleValue= ::EReg_obj::__new(HX_CSTRING("\\s*(.*)\\s*:\\s*(.*)\\s*"),HX_CSTRING(""));
	mTranslateMatch= ::EReg_obj::__new(HX_CSTRING("translate\\((.*),(.*)\\)"),HX_CSTRING(""));
	mScaleMatch= ::EReg_obj::__new(HX_CSTRING("scale\\((.*)\\)"),HX_CSTRING(""));
	mMatrixMatch= ::EReg_obj::__new(HX_CSTRING("matrix\\((.*),(.*),(.*),(.*),(.*),(.*)\\)"),HX_CSTRING(""));
	mURLMatch= ::EReg_obj::__new(HX_CSTRING("url\\(#(.*)\\)"),HX_CSTRING(""));
	defaultFill= ::format::svg::FillType_obj::FillSolid((int)0);
}

} // end namespace format
} // end namespace svg
