#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_GfxBytes
#include <format/gfx/GfxBytes.h>
#endif
#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_format_gfx_LineStyle
#include <format/gfx/LineStyle.h>
#endif
#ifndef INCLUDED_haxe_BaseCode
#include <haxe/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_neash_display_CapsStyle
#include <neash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_neash_display_GradientType
#include <neash/display/GradientType.h>
#endif
#ifndef INCLUDED_neash_display_InterpolationMethod
#include <neash/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_neash_display_JointStyle
#include <neash/display/JointStyle.h>
#endif
#ifndef INCLUDED_neash_display_LineScaleMode
#include <neash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_neash_display_SpreadMethod
#include <neash/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
#ifndef INCLUDED_neash_utils_ByteArray
#include <neash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_neash_utils_IDataInput
#include <neash/utils/IDataInput.h>
#endif
namespace format{
namespace gfx{

Void GfxBytes_obj::__construct(::neash::utils::ByteArray inBuffer,hx::Null< int >  __o_inFlags)
{
HX_STACK_PUSH("GfxBytes::new","format/gfx/GfxBytes.hx",40);
int inFlags = __o_inFlags.Default(0);
{
	HX_STACK_LINE(41)
	super::__construct();
	HX_STACK_LINE(42)
	this->buffer = (  (((inBuffer == null()))) ? ::neash::utils::ByteArray(::neash::utils::ByteArray_obj::__new(null())) : ::neash::utils::ByteArray(inBuffer) );
}
;
	return null();
}

GfxBytes_obj::~GfxBytes_obj() { }

Dynamic GfxBytes_obj::__CreateEmpty() { return  new GfxBytes_obj; }
hx::ObjectPtr< GfxBytes_obj > GfxBytes_obj::__new(::neash::utils::ByteArray inBuffer,hx::Null< int >  __o_inFlags)
{  hx::ObjectPtr< GfxBytes_obj > result = new GfxBytes_obj();
	result->__construct(inBuffer,__o_inFlags);
	return result;}

Dynamic GfxBytes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GfxBytes_obj > result = new GfxBytes_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void GfxBytes_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_PUSH("GfxBytes::curveTo","format/gfx/GfxBytes.hx",263);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inCX,"inCX");
		HX_STACK_ARG(inCY,"inCY");
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(264)
		{
			HX_STACK_LINE(264)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(264)
			_this->b[(_this->length)++] = (int)32;
		}
		HX_STACK_LINE(265)
		this->buffer->writeFloat(inCX);
		HX_STACK_LINE(266)
		this->buffer->writeFloat(inCY);
		HX_STACK_LINE(267)
		this->buffer->writeFloat(inX);
		HX_STACK_LINE(268)
		this->buffer->writeFloat(inY);
	}
return null();
}


Void GfxBytes_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_PUSH("GfxBytes::lineTo","format/gfx/GfxBytes.hx",256);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(257)
			_this->b[(_this->length)++] = (int)31;
		}
		HX_STACK_LINE(258)
		this->buffer->writeFloat(inX);
		HX_STACK_LINE(259)
		this->buffer->writeFloat(inY);
	}
return null();
}


Void GfxBytes_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_PUSH("GfxBytes::moveTo","format/gfx/GfxBytes.hx",249);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inX,"inX");
		HX_STACK_ARG(inY,"inY");
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(250)
			_this->b[(_this->length)++] = (int)30;
		}
		HX_STACK_LINE(251)
		this->buffer->writeFloat(inX);
		HX_STACK_LINE(252)
		this->buffer->writeFloat(inY);
	}
return null();
}


Void GfxBytes_obj::endLineStyle( ){
{
		HX_STACK_PUSH("GfxBytes::endLineStyle","format/gfx/GfxBytes.hx",244);
		HX_STACK_THIS(this);
		HX_STACK_LINE(245)
		::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(245)
		_this->b[(_this->length)++] = (int)21;
	}
return null();
}


Void GfxBytes_obj::lineStyle( ::format::gfx::LineStyle style){
{
		HX_STACK_PUSH("GfxBytes::lineStyle","format/gfx/GfxBytes.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_ARG(style,"style");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(232)
			_this->b[(_this->length)++] = (int)20;
		}
		HX_STACK_LINE(233)
		this->buffer->writeFloat(style->thickness);
		HX_STACK_LINE(234)
		this->writeRGB(style->color);
		HX_STACK_LINE(235)
		this->buffer->writeFloat(style->alpha);
		HX_STACK_LINE(236)
		{
			HX_STACK_LINE(236)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(236)
			_this->b[(_this->length)++] = (  ((style->pixelHinting)) ? int((int)1) : int((int)0) );
		}
		HX_STACK_LINE(237)
		{
			HX_STACK_LINE(237)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(237)
			_this->b[(_this->length)++] = style->scaleMode->__Index();
		}
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(238)
			_this->b[(_this->length)++] = style->capsStyle->__Index();
		}
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(239)
			_this->b[(_this->length)++] = style->jointStyle->__Index();
		}
		HX_STACK_LINE(240)
		this->buffer->writeFloat(style->miterLimit);
	}
return null();
}


Void GfxBytes_obj::endFill( ){
{
		HX_STACK_PUSH("GfxBytes::endFill","format/gfx/GfxBytes.hx",226);
		HX_STACK_THIS(this);
		HX_STACK_LINE(227)
		::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(227)
		_this->b[(_this->length)++] = (int)12;
	}
return null();
}


Void GfxBytes_obj::beginFill( int color,Float alpha){
{
		HX_STACK_PUSH("GfxBytes::beginFill","format/gfx/GfxBytes.hx",220);
		HX_STACK_THIS(this);
		HX_STACK_ARG(color,"color");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(221)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(221)
			_this->b[(_this->length)++] = (int)10;
		}
		HX_STACK_LINE(222)
		this->writeRGB(color);
		HX_STACK_LINE(223)
		this->buffer->writeFloat(alpha);
	}
return null();
}


Void GfxBytes_obj::beginGradientFill( ::format::gfx::Gradient grad){
{
		HX_STACK_PUSH("GfxBytes::beginGradientFill","format/gfx/GfxBytes.hx",198);
		HX_STACK_THIS(this);
		HX_STACK_ARG(grad,"grad");
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(199)
			_this->b[(_this->length)++] = (int)11;
		}
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(200)
			_this->b[(_this->length)++] = grad->type->__Index();
		}
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(201)
			_this->b[(_this->length)++] = grad->colors->length;
		}
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = grad->colors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(202)
			while(((_g1 < _g))){
				HX_STACK_LINE(202)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(204)
				this->writeRGB(::Std_obj::_int(grad->colors->__get(i)));
				HX_STACK_LINE(205)
				{
					HX_STACK_LINE(205)
					Float inVal = (grad->alphas->__get(i) * 255.0);		HX_STACK_VAR(inVal,"inVal");
					HX_STACK_LINE(205)
					{
						HX_STACK_LINE(205)
						::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(205)
						_this->b[(_this->length)++] = (  (((inVal < (int)0))) ? int((int)0) : int((  (((inVal > 255.0))) ? int((int)255) : int(::Std_obj::_int(inVal)) )) );
					}
				}
				HX_STACK_LINE(206)
				{
					HX_STACK_LINE(206)
					Float inVal = grad->ratios->__get(i);		HX_STACK_VAR(inVal,"inVal");
					HX_STACK_LINE(206)
					{
						HX_STACK_LINE(206)
						::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(206)
						_this->b[(_this->length)++] = (  (((inVal < (int)0))) ? int((int)0) : int((  (((inVal > 255.0))) ? int((int)255) : int(::Std_obj::_int(inVal)) )) );
					}
				}
			}
		}
		HX_STACK_LINE(208)
		this->buffer->writeFloat(grad->matrix->a);
		HX_STACK_LINE(209)
		this->buffer->writeFloat(grad->matrix->b);
		HX_STACK_LINE(210)
		this->buffer->writeFloat(grad->matrix->c);
		HX_STACK_LINE(211)
		this->buffer->writeFloat(grad->matrix->d);
		HX_STACK_LINE(212)
		this->buffer->writeFloat(grad->matrix->tx);
		HX_STACK_LINE(213)
		this->buffer->writeFloat(grad->matrix->ty);
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(214)
			_this->b[(_this->length)++] = grad->spread->__Index();
		}
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(215)
			_this->b[(_this->length)++] = grad->interp->__Index();
		}
		HX_STACK_LINE(216)
		this->buffer->writeFloat(grad->focus);
	}
return null();
}


int GfxBytes_obj::readRGB( ){
	HX_STACK_PUSH("GfxBytes::readRGB","format/gfx/GfxBytes.hx",188);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static int Block( ::format::gfx::GfxBytes_obj *__this){
			HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",189);
			{
				HX_STACK_LINE(189)
				::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(189)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	int r = _Function_1_1::Block(this);		HX_STACK_VAR(r,"r");
	struct _Function_1_2{
		inline static int Block( ::format::gfx::GfxBytes_obj *__this){
			HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",190);
			{
				HX_STACK_LINE(190)
				::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(190)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(190)
	int g = _Function_1_2::Block(this);		HX_STACK_VAR(g,"g");
	struct _Function_1_3{
		inline static int Block( ::format::gfx::GfxBytes_obj *__this){
			HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",191);
			{
				HX_STACK_LINE(191)
				::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(191)
				return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
			}
			return null();
		}
	};
	HX_STACK_LINE(191)
	int b = _Function_1_3::Block(this);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(192)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


HX_DEFINE_DYNAMIC_FUNC0(GfxBytes_obj,readRGB,return )

Void GfxBytes_obj::writeRGB( int inVal){
{
		HX_STACK_PUSH("GfxBytes::writeRGB","format/gfx/GfxBytes.hx",182);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inVal,"inVal");
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(183)
			_this->b[(_this->length)++] = (int((int(inVal) >> int((int)16))) & int((int)255));
		}
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(184)
			_this->b[(_this->length)++] = (int((int(inVal) >> int((int)8))) & int((int)255));
		}
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(185)
			_this->b[(_this->length)++] = (int(inVal) & int((int)255));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GfxBytes_obj,writeRGB,(void))

Void GfxBytes_obj::pushClipped( Float inVal){
{
		HX_STACK_PUSH("GfxBytes::pushClipped","format/gfx/GfxBytes.hx",178);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inVal,"inVal");
		HX_STACK_LINE(179)
		::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(179)
		_this->b[(_this->length)++] = (  (((inVal < (int)0))) ? int((int)0) : int((  (((inVal > 255.0))) ? int((int)255) : int(::Std_obj::_int(inVal)) )) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GfxBytes_obj,pushClipped,(void))

Void GfxBytes_obj::size( Float inWidth,Float inHeight){
{
		HX_STACK_PUSH("GfxBytes::size","format/gfx/GfxBytes.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inWidth,"inWidth");
		HX_STACK_ARG(inHeight,"inHeight");
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(172)
			_this->b[(_this->length)++] = (int)1;
		}
		HX_STACK_LINE(173)
		this->buffer->writeFloat(inWidth);
		HX_STACK_LINE(174)
		this->buffer->writeFloat(inHeight);
	}
return null();
}


Void GfxBytes_obj::iterate( ::format::gfx::Gfx inGfx){
{
		HX_STACK_PUSH("GfxBytes::iterate","format/gfx/GfxBytes.hx",89);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inGfx,"inGfx");
		HX_STACK_LINE(90)
		this->buffer->position = (int)0;
		HX_STACK_LINE(91)
		while((true)){
			struct _Function_2_1{
				inline static int Block( ::format::gfx::GfxBytes_obj *__this){
					HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",93);
					{
						HX_STACK_LINE(93)
						::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(93)
						return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
					}
					return null();
				}
			};
			HX_STACK_LINE(92)
			switch( (int)(_Function_2_1::Block(this))){
				case (int)0: {
					HX_STACK_LINE(95)
					return null();
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(99)
					Float w = this->buffer->readFloat();		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(100)
					Float h = this->buffer->readFloat();		HX_STACK_VAR(h,"h");
					HX_STACK_LINE(101)
					inGfx->size(w,h);
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(104)
					int col = this->readRGB();		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(105)
					Float alpha = this->buffer->readFloat();		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(106)
					inGfx->beginFill(col,alpha);
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(109)
					::format::gfx::Gradient grad = ::format::gfx::Gradient_obj::__new();		HX_STACK_VAR(grad,"grad");
					struct _Function_3_1{
						inline static int Block( ::format::gfx::GfxBytes_obj *__this){
							HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",110);
							{
								HX_STACK_LINE(110)
								::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(110)
								return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(110)
					grad->type = ::Type_obj::createEnumIndex(hx::ClassOf< ::neash::display::GradientType >(),_Function_3_1::Block(this),null());
					struct _Function_3_2{
						inline static int Block( ::format::gfx::GfxBytes_obj *__this){
							HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",111);
							{
								HX_STACK_LINE(111)
								::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(111)
								return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(111)
					int len = _Function_3_2::Block(this);		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(112)
					{
						HX_STACK_LINE(112)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(112)
						while(((_g < len))){
							HX_STACK_LINE(112)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(114)
							grad->colors->push(this->readRGB());
							struct _Function_5_1{
								inline static int Block( ::format::gfx::GfxBytes_obj *__this){
									HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",115);
									{
										HX_STACK_LINE(115)
										::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(115)
										return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
									}
									return null();
								}
							};
							HX_STACK_LINE(115)
							grad->alphas->push((Float(_Function_5_1::Block(this)) / Float(255.0)));
							struct _Function_5_2{
								inline static int Block( ::format::gfx::GfxBytes_obj *__this){
									HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",116);
									{
										HX_STACK_LINE(116)
										::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(116)
										return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
									}
									return null();
								}
							};
							HX_STACK_LINE(116)
							grad->ratios->push(_Function_5_2::Block(this));
						}
					}
					HX_STACK_LINE(118)
					grad->matrix->a = this->buffer->readFloat();
					HX_STACK_LINE(119)
					grad->matrix->b = this->buffer->readFloat();
					HX_STACK_LINE(120)
					grad->matrix->c = this->buffer->readFloat();
					HX_STACK_LINE(121)
					grad->matrix->d = this->buffer->readFloat();
					HX_STACK_LINE(122)
					grad->matrix->tx = this->buffer->readFloat();
					HX_STACK_LINE(123)
					grad->matrix->ty = this->buffer->readFloat();
					struct _Function_3_3{
						inline static int Block( ::format::gfx::GfxBytes_obj *__this){
							HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",124);
							{
								HX_STACK_LINE(124)
								::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(124)
								return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(124)
					grad->spread = ::format::gfx::GfxBytes_obj::spreadMethods->__get(_Function_3_3::Block(this));
					struct _Function_3_4{
						inline static int Block( ::format::gfx::GfxBytes_obj *__this){
							HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",125);
							{
								HX_STACK_LINE(125)
								::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(125)
								return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(125)
					grad->interp = ::format::gfx::GfxBytes_obj::interpolationMethods->__get(_Function_3_4::Block(this));
					HX_STACK_LINE(126)
					grad->focus = this->buffer->readFloat();
					HX_STACK_LINE(127)
					inGfx->beginGradientFill(grad);
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(129)
					inGfx->endFill();
				}
				;break;
				case (int)20: {
					HX_STACK_LINE(133)
					::format::gfx::LineStyle style = ::format::gfx::LineStyle_obj::__new();		HX_STACK_VAR(style,"style");
					HX_STACK_LINE(134)
					style->thickness = this->buffer->readFloat();
					HX_STACK_LINE(135)
					style->color = this->readRGB();
					HX_STACK_LINE(136)
					style->alpha = this->buffer->readFloat();
					struct _Function_3_1{
						inline static int Block( ::format::gfx::GfxBytes_obj *__this){
							HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",137);
							{
								HX_STACK_LINE(137)
								::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(137)
								return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(137)
					style->pixelHinting = (_Function_3_1::Block(this) > (int)0);
					struct _Function_3_2{
						inline static int Block( ::format::gfx::GfxBytes_obj *__this){
							HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",138);
							{
								HX_STACK_LINE(138)
								::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(138)
								return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(138)
					style->scaleMode = ::format::gfx::GfxBytes_obj::scaleModes->__get(_Function_3_2::Block(this));
					struct _Function_3_3{
						inline static int Block( ::format::gfx::GfxBytes_obj *__this){
							HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",139);
							{
								HX_STACK_LINE(139)
								::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(139)
								return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(139)
					style->capsStyle = ::format::gfx::GfxBytes_obj::capsStyles->__get(_Function_3_3::Block(this));
					struct _Function_3_4{
						inline static int Block( ::format::gfx::GfxBytes_obj *__this){
							HX_STACK_PUSH("*::closure","format/gfx/GfxBytes.hx",140);
							{
								HX_STACK_LINE(140)
								::neash::utils::ByteArray _this = __this->buffer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(140)
								return (  (((_this->position < _this->length))) ? int(_this->b->__get((_this->position)++)) : int(_this->ThrowEOFi()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(140)
					style->jointStyle = ::format::gfx::GfxBytes_obj::jointStyles->__get(_Function_3_4::Block(this));
					HX_STACK_LINE(141)
					style->miterLimit = this->buffer->readFloat();
					HX_STACK_LINE(142)
					inGfx->lineStyle(style);
				}
				;break;
				case (int)21: {
					HX_STACK_LINE(144)
					inGfx->endLineStyle();
				}
				;break;
				case (int)30: {
					HX_STACK_LINE(148)
					Float x = this->buffer->readFloat();		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(149)
					Float y = this->buffer->readFloat();		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(150)
					inGfx->moveTo(x,y);
				}
				;break;
				case (int)31: {
					HX_STACK_LINE(153)
					Float x = this->buffer->readFloat();		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(154)
					Float y = this->buffer->readFloat();		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(155)
					inGfx->lineTo(x,y);
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(158)
					Float cx = this->buffer->readFloat();		HX_STACK_VAR(cx,"cx");
					HX_STACK_LINE(159)
					Float cy = this->buffer->readFloat();		HX_STACK_VAR(cy,"cy");
					HX_STACK_LINE(160)
					Float x = this->buffer->readFloat();		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(161)
					Float y = this->buffer->readFloat();		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(162)
					inGfx->curveTo(cx,cy,x,y);
				}
				;break;
				default: {
					HX_STACK_LINE(163)
					hx::Throw (HX_CSTRING("Unknown gfx buffer format."));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GfxBytes_obj,iterate,(void))

Void GfxBytes_obj::eof( ){
{
		HX_STACK_PUSH("GfxBytes::eof","format/gfx/GfxBytes.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_LINE(80)
		::neash::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(80)
		_this->b[(_this->length)++] = (int)0;
	}
return null();
}


::String GfxBytes_obj::toString( ){
	HX_STACK_PUSH("GfxBytes::toString","format/gfx/GfxBytes.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	::neash::utils::ByteArray buf = ::neash::utils::ByteArray_obj::__new(this->buffer->length);		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(53)
	this->buffer->position = (int)0;
	HX_STACK_LINE(54)
	this->buffer->readBytes(buf,null(),null());
	HX_STACK_LINE(56)
	if (((::format::gfx::GfxBytes_obj::baseCoder == null()))){
		HX_STACK_LINE(57)
		::format::gfx::GfxBytes_obj::baseCoder = ::haxe::BaseCode_obj::__new(::haxe::io::Bytes_obj::ofString(::format::gfx::GfxBytes_obj::base64));
	}
	HX_STACK_LINE(61)
	return ::format::gfx::GfxBytes_obj::baseCoder->encodeBytes(hx::TCast< haxe::io::Bytes >::cast(buf))->toString();
}


HX_DEFINE_DYNAMIC_FUNC0(GfxBytes_obj,toString,return )

int GfxBytes_obj::_EOF;

int GfxBytes_obj::SIZE;

int GfxBytes_obj::BEGIN_FILL;

int GfxBytes_obj::GRADIENT_FILL;

int GfxBytes_obj::END_FILL;

int GfxBytes_obj::LINE_STYLE;

int GfxBytes_obj::END_LINE_STYLE;

int GfxBytes_obj::MOVE;

int GfxBytes_obj::LINE;

int GfxBytes_obj::CURVE;

::String GfxBytes_obj::base64;

::haxe::BaseCode GfxBytes_obj::baseCoder;

::format::gfx::GfxBytes GfxBytes_obj::fromString( ::String inString){
	HX_STACK_PUSH("GfxBytes::fromString","format/gfx/GfxBytes.hx",65);
	HX_STACK_ARG(inString,"inString");
	HX_STACK_LINE(66)
	if (((::format::gfx::GfxBytes_obj::baseCoder == null()))){
		HX_STACK_LINE(67)
		::format::gfx::GfxBytes_obj::baseCoder = ::haxe::BaseCode_obj::__new(::haxe::io::Bytes_obj::ofString(::format::gfx::GfxBytes_obj::base64));
	}
	HX_STACK_LINE(74)
	::neash::utils::ByteArray bytes = ::neash::utils::ByteArray_obj::fromBytes(::format::gfx::GfxBytes_obj::baseCoder->decodeBytes(::haxe::io::Bytes_obj::ofString(inString)));		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(77)
	return ::format::gfx::GfxBytes_obj::__new(bytes,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GfxBytes_obj,fromString,return )

Array< ::neash::display::LineScaleMode > GfxBytes_obj::scaleModes;

Array< ::neash::display::CapsStyle > GfxBytes_obj::capsStyles;

Array< ::neash::display::JointStyle > GfxBytes_obj::jointStyles;

Array< ::neash::display::SpreadMethod > GfxBytes_obj::spreadMethods;

Array< ::neash::display::InterpolationMethod > GfxBytes_obj::interpolationMethods;


GfxBytes_obj::GfxBytes_obj()
{
}

void GfxBytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GfxBytes);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GfxBytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic GfxBytes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"EOF") ) { return _EOF; }
		if (HX_FIELD_EQ(inName,"eof") ) { return eof_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"SIZE") ) { return SIZE; }
		if (HX_FIELD_EQ(inName,"MOVE") ) { return MOVE; }
		if (HX_FIELD_EQ(inName,"LINE") ) { return LINE; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CURVE") ) { return CURVE; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"base64") ) { return base64; }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		if (HX_FIELD_EQ(inName,"readRGB") ) { return readRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"iterate") ) { return iterate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"END_FILL") ) { return END_FILL; }
		if (HX_FIELD_EQ(inName,"writeRGB") ) { return writeRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"baseCoder") ) { return baseCoder; }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BEGIN_FILL") ) { return BEGIN_FILL; }
		if (HX_FIELD_EQ(inName,"LINE_STYLE") ) { return LINE_STYLE; }
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleModes") ) { return scaleModes; }
		if (HX_FIELD_EQ(inName,"capsStyles") ) { return capsStyles; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"jointStyles") ) { return jointStyles; }
		if (HX_FIELD_EQ(inName,"pushClipped") ) { return pushClipped_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endLineStyle") ) { return endLineStyle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"GRADIENT_FILL") ) { return GRADIENT_FILL; }
		if (HX_FIELD_EQ(inName,"spreadMethods") ) { return spreadMethods; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"END_LINE_STYLE") ) { return END_LINE_STYLE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"interpolationMethods") ) { return interpolationMethods; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GfxBytes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"EOF") ) { _EOF=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"SIZE") ) { SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MOVE") ) { MOVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINE") ) { LINE=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CURVE") ) { CURVE=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"base64") ) { base64=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::neash::utils::ByteArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"END_FILL") ) { END_FILL=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"baseCoder") ) { baseCoder=inValue.Cast< ::haxe::BaseCode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BEGIN_FILL") ) { BEGIN_FILL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINE_STYLE") ) { LINE_STYLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleModes") ) { scaleModes=inValue.Cast< Array< ::neash::display::LineScaleMode > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"capsStyles") ) { capsStyles=inValue.Cast< Array< ::neash::display::CapsStyle > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"jointStyles") ) { jointStyles=inValue.Cast< Array< ::neash::display::JointStyle > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"GRADIENT_FILL") ) { GRADIENT_FILL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spreadMethods") ) { spreadMethods=inValue.Cast< Array< ::neash::display::SpreadMethod > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"END_LINE_STYLE") ) { END_LINE_STYLE=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"interpolationMethods") ) { interpolationMethods=inValue.Cast< Array< ::neash::display::InterpolationMethod > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GfxBytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("EOF"),
	HX_CSTRING("SIZE"),
	HX_CSTRING("BEGIN_FILL"),
	HX_CSTRING("GRADIENT_FILL"),
	HX_CSTRING("END_FILL"),
	HX_CSTRING("LINE_STYLE"),
	HX_CSTRING("END_LINE_STYLE"),
	HX_CSTRING("MOVE"),
	HX_CSTRING("LINE"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("base64"),
	HX_CSTRING("baseCoder"),
	HX_CSTRING("fromString"),
	HX_CSTRING("scaleModes"),
	HX_CSTRING("capsStyles"),
	HX_CSTRING("jointStyles"),
	HX_CSTRING("spreadMethods"),
	HX_CSTRING("interpolationMethods"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("curveTo"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("endLineStyle"),
	HX_CSTRING("lineStyle"),
	HX_CSTRING("endFill"),
	HX_CSTRING("beginFill"),
	HX_CSTRING("beginGradientFill"),
	HX_CSTRING("readRGB"),
	HX_CSTRING("writeRGB"),
	HX_CSTRING("pushClipped"),
	HX_CSTRING("size"),
	HX_CSTRING("iterate"),
	HX_CSTRING("eof"),
	HX_CSTRING("toString"),
	HX_CSTRING("buffer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GfxBytes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::_EOF,"EOF");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::BEGIN_FILL,"BEGIN_FILL");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::GRADIENT_FILL,"GRADIENT_FILL");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::END_FILL,"END_FILL");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::LINE_STYLE,"LINE_STYLE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::END_LINE_STYLE,"END_LINE_STYLE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::LINE,"LINE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::base64,"base64");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::baseCoder,"baseCoder");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::scaleModes,"scaleModes");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::capsStyles,"capsStyles");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::jointStyles,"jointStyles");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::spreadMethods,"spreadMethods");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::interpolationMethods,"interpolationMethods");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::_EOF,"EOF");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::BEGIN_FILL,"BEGIN_FILL");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::GRADIENT_FILL,"GRADIENT_FILL");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::END_FILL,"END_FILL");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::LINE_STYLE,"LINE_STYLE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::END_LINE_STYLE,"END_LINE_STYLE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::LINE,"LINE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::base64,"base64");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::baseCoder,"baseCoder");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::scaleModes,"scaleModes");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::capsStyles,"capsStyles");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::jointStyles,"jointStyles");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::spreadMethods,"spreadMethods");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::interpolationMethods,"interpolationMethods");
};

Class GfxBytes_obj::__mClass;

void GfxBytes_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.GfxBytes"), hx::TCanCast< GfxBytes_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void GfxBytes_obj::__boot()
{
	_EOF= (int)0;
	SIZE= (int)1;
	BEGIN_FILL= (int)10;
	GRADIENT_FILL= (int)11;
	END_FILL= (int)12;
	LINE_STYLE= (int)20;
	END_LINE_STYLE= (int)21;
	MOVE= (int)30;
	LINE= (int)31;
	CURVE= (int)32;
	base64= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
	scaleModes= Array_obj< ::neash::display::LineScaleMode >::__new().Add(::neash::display::LineScaleMode_obj::NORMAL_dyn()).Add(::neash::display::LineScaleMode_obj::NONE_dyn()).Add(::neash::display::LineScaleMode_obj::VERTICAL_dyn()).Add(::neash::display::LineScaleMode_obj::HORIZONTAL_dyn());
	capsStyles= Array_obj< ::neash::display::CapsStyle >::__new().Add(::neash::display::CapsStyle_obj::ROUND_dyn()).Add(::neash::display::CapsStyle_obj::NONE_dyn()).Add(::neash::display::CapsStyle_obj::SQUARE_dyn());
	jointStyles= Array_obj< ::neash::display::JointStyle >::__new().Add(::neash::display::JointStyle_obj::ROUND_dyn()).Add(::neash::display::JointStyle_obj::MITER_dyn()).Add(::neash::display::JointStyle_obj::BEVEL_dyn());
	spreadMethods= Array_obj< ::neash::display::SpreadMethod >::__new().Add(::neash::display::SpreadMethod_obj::PAD_dyn()).Add(::neash::display::SpreadMethod_obj::REPEAT_dyn()).Add(::neash::display::SpreadMethod_obj::REFLECT_dyn());
	interpolationMethods= Array_obj< ::neash::display::InterpolationMethod >::__new().Add(::neash::display::InterpolationMethod_obj::RGB_dyn()).Add(::neash::display::InterpolationMethod_obj::LINEAR_RGB_dyn());
}

} // end namespace format
} // end namespace gfx
