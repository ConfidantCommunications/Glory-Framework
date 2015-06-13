#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_native_geom_Matrix
#include <native/geom/Matrix.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
namespace native{
namespace geom{

Void Matrix_obj::__construct(Dynamic in_a,Dynamic in_b,Dynamic in_c,Dynamic in_d,Dynamic in_tx,Dynamic in_ty)
{
HX_STACK_PUSH("Matrix::new","native/geom/Matrix.hx",21);
{
	HX_STACK_LINE(23)
	this->a = (  (((in_a == null()))) ? Dynamic(1.0) : Dynamic(in_a) );
	HX_STACK_LINE(24)
	this->b = (  (((in_b == null()))) ? Dynamic(0.0) : Dynamic(in_b) );
	HX_STACK_LINE(25)
	this->c = (  (((in_c == null()))) ? Dynamic(0.0) : Dynamic(in_c) );
	HX_STACK_LINE(26)
	this->d = (  (((in_d == null()))) ? Dynamic(1.0) : Dynamic(in_d) );
	HX_STACK_LINE(27)
	this->tx = (  (((in_tx == null()))) ? Dynamic(0.0) : Dynamic(in_tx) );
	HX_STACK_LINE(28)
	this->ty = (  (((in_ty == null()))) ? Dynamic(0.0) : Dynamic(in_ty) );
}
;
	return null();
}

Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(Dynamic in_a,Dynamic in_b,Dynamic in_c,Dynamic in_d,Dynamic in_tx,Dynamic in_ty)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(in_a,in_b,in_c,in_d,in_tx,in_ty);
	return result;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Matrix_obj::translate( Float inDX,Float inDY){
{
		HX_STACK_PUSH("Matrix::translate","native/geom/Matrix.hx",247);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inDX,"inDX");
		HX_STACK_ARG(inDY,"inDY");
		HX_STACK_LINE(249)
		hx::AddEq(this->tx,inDX);
		HX_STACK_LINE(250)
		hx::AddEq(this->ty,inDY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))

::native::geom::Point Matrix_obj::transformPoint( ::native::geom::Point inPos){
	HX_STACK_PUSH("Matrix::transformPoint","native/geom/Matrix.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inPos,"inPos");
	HX_STACK_LINE(240)
	return ::native::geom::Point_obj::__new((((inPos->x * this->a) + (inPos->y * this->c)) + this->tx),(((inPos->x * this->b) + (inPos->y * this->d)) + this->ty));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint,return )

Void Matrix_obj::setRotation( Float inTheta,Dynamic inScale){
{
		HX_STACK_PUSH("Matrix::setRotation","native/geom/Matrix.hx",229);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inTheta,"inTheta");
		HX_STACK_ARG(inScale,"inScale");
		HX_STACK_LINE(231)
		Float scale = (  (((inScale == null()))) ? Dynamic(1.0) : Dynamic(inScale) );		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(232)
		this->a = (::Math_obj::cos(inTheta) * scale);
		HX_STACK_LINE(233)
		this->c = (::Math_obj::sin(inTheta) * scale);
		HX_STACK_LINE(234)
		this->b = -(this->c);
		HX_STACK_LINE(235)
		this->d = this->a;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,setRotation,(void))

Void Matrix_obj::scale( Float inSX,Float inSY){
{
		HX_STACK_PUSH("Matrix::scale","native/geom/Matrix.hx",215);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inSX,"inSX");
		HX_STACK_ARG(inSY,"inSY");
		HX_STACK_LINE(217)
		hx::MultEq(this->a,inSX);
		HX_STACK_LINE(218)
		hx::MultEq(this->b,inSY);
		HX_STACK_LINE(220)
		hx::MultEq(this->c,inSX);
		HX_STACK_LINE(221)
		hx::MultEq(this->d,inSY);
		HX_STACK_LINE(223)
		hx::MultEq(this->tx,inSX);
		HX_STACK_LINE(224)
		hx::MultEq(this->ty,inSY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

Void Matrix_obj::rotate( Float inTheta){
{
		HX_STACK_PUSH("Matrix::rotate","native/geom/Matrix.hx",188);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inTheta,"inTheta");
		HX_STACK_LINE(190)
		Float cos = ::Math_obj::cos(inTheta);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(191)
		Float sin = ::Math_obj::sin(inTheta);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(193)
		Float a1 = ((this->a * cos) - (this->b * sin));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(194)
		this->b = ((this->a * sin) + (this->b * cos));
		HX_STACK_LINE(195)
		this->a = a1;
		HX_STACK_LINE(197)
		Float c1 = ((this->c * cos) - (this->d * sin));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(198)
		this->d = ((this->c * sin) + (this->d * cos));
		HX_STACK_LINE(199)
		this->c = c1;
		HX_STACK_LINE(201)
		Float tx1 = ((this->tx * cos) - (this->ty * sin));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(202)
		this->ty = ((this->tx * sin) + (this->ty * cos));
		HX_STACK_LINE(203)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

::native::geom::Matrix Matrix_obj::mult( ::native::geom::Matrix m){
	HX_STACK_PUSH("Matrix::mult","native/geom/Matrix.hx",159);
	HX_STACK_THIS(this);
	HX_STACK_ARG(m,"m");
	HX_STACK_LINE(161)
	::native::geom::Matrix result = ::native::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(163)
	result->a = ((this->a * m->a) + (this->b * m->c));
	HX_STACK_LINE(164)
	result->b = ((this->a * m->b) + (this->b * m->d));
	HX_STACK_LINE(165)
	result->c = ((this->c * m->a) + (this->d * m->c));
	HX_STACK_LINE(166)
	result->d = ((this->c * m->b) + (this->d * m->d));
	HX_STACK_LINE(168)
	result->tx = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);
	HX_STACK_LINE(169)
	result->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
	HX_STACK_LINE(171)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,mult,return )

::native::geom::Matrix Matrix_obj::invert( ){
	HX_STACK_PUSH("Matrix::invert","native/geom/Matrix.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_LINE(131)
	Float norm = ((this->a * this->d) - (this->b * this->c));		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(133)
	if (((norm == (int)0))){
		HX_STACK_LINE(135)
		this->a = this->b = this->c = this->d = (int)0;
		HX_STACK_LINE(136)
		this->tx = -(this->tx);
		HX_STACK_LINE(137)
		this->ty = -(this->ty);
	}
	else{
		HX_STACK_LINE(141)
		norm = (Float(1.0) / Float(norm));
		HX_STACK_LINE(142)
		Float a1 = (this->d * norm);		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(143)
		this->d = (this->a * norm);
		HX_STACK_LINE(144)
		this->a = a1;
		HX_STACK_LINE(145)
		hx::MultEq(this->b,-(norm));
		HX_STACK_LINE(146)
		hx::MultEq(this->c,-(norm));
		HX_STACK_LINE(148)
		Float tx1 = ((-(this->a) * this->tx) - (this->c * this->ty));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(149)
		this->ty = ((-(this->b) * this->tx) - (this->d * this->ty));
		HX_STACK_LINE(150)
		this->tx = tx1;
	}
	HX_STACK_LINE(154)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

Void Matrix_obj::identity( ){
{
		HX_STACK_PUSH("Matrix::identity","native/geom/Matrix.hx",117);
		HX_STACK_THIS(this);
		HX_STACK_LINE(119)
		this->a = (int)1;
		HX_STACK_LINE(120)
		this->b = (int)0;
		HX_STACK_LINE(121)
		this->c = (int)0;
		HX_STACK_LINE(122)
		this->d = (int)1;
		HX_STACK_LINE(123)
		this->tx = (int)0;
		HX_STACK_LINE(124)
		this->ty = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

::native::geom::Point Matrix_obj::deltaTransformPoint( ::native::geom::Point point){
	HX_STACK_PUSH("Matrix::deltaTransformPoint","native/geom/Matrix.hx",110);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(110)
	return ::native::geom::Point_obj::__new(((point->x * this->a) + (point->y * this->c)),((point->x * this->b) + (point->y * this->d)));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,deltaTransformPoint,return )

Void Matrix_obj::createGradientBox( Float in_width,Float in_height,Dynamic rotation,Dynamic in_tx,Dynamic in_ty){
{
		HX_STACK_PUSH("Matrix::createGradientBox","native/geom/Matrix.hx",83);
		HX_STACK_THIS(this);
		HX_STACK_ARG(in_width,"in_width");
		HX_STACK_ARG(in_height,"in_height");
		HX_STACK_ARG(rotation,"rotation");
		HX_STACK_ARG(in_tx,"in_tx");
		HX_STACK_ARG(in_ty,"in_ty");
		HX_STACK_LINE(85)
		this->a = (Float(in_width) / Float(1638.4));
		HX_STACK_LINE(86)
		this->d = (Float(in_height) / Float(1638.4));
		HX_STACK_LINE(89)
		if (((bool((rotation != null())) && bool((rotation != 0.0))))){
			HX_STACK_LINE(91)
			Float cos = ::Math_obj::cos(rotation);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(92)
			Float sin = ::Math_obj::sin(rotation);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(93)
			this->b = (sin * this->d);
			HX_STACK_LINE(94)
			this->c = (-(sin) * this->a);
			HX_STACK_LINE(95)
			hx::MultEq(this->a,cos);
			HX_STACK_LINE(96)
			hx::MultEq(this->d,cos);
		}
		else{
			HX_STACK_LINE(98)
			this->b = this->c = (int)0;
		}
		HX_STACK_LINE(104)
		this->tx = (  (((in_tx != null()))) ? Float((in_tx + (Float(in_width) / Float((int)2)))) : Float((Float(in_width) / Float((int)2))) );
		HX_STACK_LINE(105)
		this->ty = (  (((in_ty != null()))) ? Float((in_ty + (Float(in_height) / Float((int)2)))) : Float((Float(in_height) / Float((int)2))) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

Void Matrix_obj::createBox( Float scaleX,Float scaleY,Dynamic rotation,Dynamic tx,Dynamic ty){
{
		HX_STACK_PUSH("Matrix::createBox","native/geom/Matrix.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		HX_STACK_ARG(rotation,"rotation");
		HX_STACK_ARG(tx,"tx");
		HX_STACK_ARG(ty,"ty");
		HX_STACK_LINE(74)
		this->a = scaleX;
		HX_STACK_LINE(75)
		this->d = scaleY;
		HX_STACK_LINE(76)
		this->b = (  (((rotation == null()))) ? Dynamic(0.0) : Dynamic(rotation) );
		HX_STACK_LINE(77)
		this->tx = (  (((tx == null()))) ? Dynamic(0.0) : Dynamic(tx) );
		HX_STACK_LINE(78)
		this->ty = (  (((ty == null()))) ? Dynamic(0.0) : Dynamic(ty) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBox,(void))

Void Matrix_obj::concat( ::native::geom::Matrix m){
{
		HX_STACK_PUSH("Matrix::concat","native/geom/Matrix.hx",54);
		HX_STACK_THIS(this);
		HX_STACK_ARG(m,"m");
		HX_STACK_LINE(56)
		Float a1 = ((this->a * m->a) + (this->b * m->c));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(57)
		this->b = ((this->a * m->b) + (this->b * m->d));
		HX_STACK_LINE(58)
		this->a = a1;
		HX_STACK_LINE(60)
		Float c1 = ((this->c * m->a) + (this->d * m->c));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(61)
		this->d = ((this->c * m->b) + (this->d * m->d));
		HX_STACK_LINE(63)
		this->c = c1;
		HX_STACK_LINE(65)
		Float tx1 = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(66)
		this->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
		HX_STACK_LINE(67)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

::native::geom::Matrix Matrix_obj::clone( ){
	HX_STACK_PUSH("Matrix::clone","native/geom/Matrix.hx",33);
	HX_STACK_THIS(this);
	HX_STACK_LINE(33)
	return ::native::geom::Matrix_obj::__new(this->a,this->b,this->c,this->d,this->tx,this->ty);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )


Matrix_obj::Matrix_obj()
{
}

void Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix);
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
}

Dynamic Matrix_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"deltaTransformPoint") ) { return deltaTransformPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

static int __id_translate = __hxcpp_field_to_id("translate");
static int __id_transformPoint = __hxcpp_field_to_id("transformPoint");
static int __id_setRotation = __hxcpp_field_to_id("setRotation");
static int __id_scale = __hxcpp_field_to_id("scale");
static int __id_rotate = __hxcpp_field_to_id("rotate");
static int __id_mult = __hxcpp_field_to_id("mult");
static int __id_invert = __hxcpp_field_to_id("invert");
static int __id_identity = __hxcpp_field_to_id("identity");
static int __id_deltaTransformPoint = __hxcpp_field_to_id("deltaTransformPoint");
static int __id_createGradientBox = __hxcpp_field_to_id("createGradientBox");
static int __id_createBox = __hxcpp_field_to_id("createBox");
static int __id_concat = __hxcpp_field_to_id("concat");
static int __id_clone = __hxcpp_field_to_id("clone");
static int __id_ty = __hxcpp_field_to_id("ty");
static int __id_tx = __hxcpp_field_to_id("tx");
static int __id_d = __hxcpp_field_to_id("d");
static int __id_c = __hxcpp_field_to_id("c");
static int __id_b = __hxcpp_field_to_id("b");
static int __id_a = __hxcpp_field_to_id("a");


double Matrix_obj::__INumField(int inFieldID)
{
	if (inFieldID==__id_translate) return translate_dyn();
	if (inFieldID==__id_transformPoint) return transformPoint_dyn();
	if (inFieldID==__id_setRotation) return setRotation_dyn();
	if (inFieldID==__id_scale) return scale_dyn();
	if (inFieldID==__id_rotate) return rotate_dyn();
	if (inFieldID==__id_mult) return mult_dyn();
	if (inFieldID==__id_invert) return invert_dyn();
	if (inFieldID==__id_identity) return identity_dyn();
	if (inFieldID==__id_deltaTransformPoint) return deltaTransformPoint_dyn();
	if (inFieldID==__id_createGradientBox) return createGradientBox_dyn();
	if (inFieldID==__id_createBox) return createBox_dyn();
	if (inFieldID==__id_concat) return concat_dyn();
	if (inFieldID==__id_clone) return clone_dyn();
	if (inFieldID==__id_ty) return ty;
	if (inFieldID==__id_tx) return tx;
	if (inFieldID==__id_d) return d;
	if (inFieldID==__id_c) return c;
	if (inFieldID==__id_b) return b;
	if (inFieldID==__id_a) return a;
	return super::__INumField(inFieldID);
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ty"));
	outFields->push(HX_CSTRING("tx"));
	outFields->push(HX_CSTRING("d"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("translate"),
	HX_CSTRING("transformPoint"),
	HX_CSTRING("setRotation"),
	HX_CSTRING("scale"),
	HX_CSTRING("rotate"),
	HX_CSTRING("mult"),
	HX_CSTRING("invert"),
	HX_CSTRING("identity"),
	HX_CSTRING("deltaTransformPoint"),
	HX_CSTRING("createGradientBox"),
	HX_CSTRING("createBox"),
	HX_CSTRING("concat"),
	HX_CSTRING("clone"),
	HX_CSTRING("ty"),
	HX_CSTRING("tx"),
	HX_CSTRING("d"),
	HX_CSTRING("c"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.geom.Matrix"), hx::TCanCast< Matrix_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Matrix_obj::__boot()
{
}

} // end namespace native
} // end namespace geom
