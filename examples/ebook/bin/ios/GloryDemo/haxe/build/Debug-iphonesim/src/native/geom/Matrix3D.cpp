#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_native_geom_Matrix3D
#include <native/geom/Matrix3D.h>
#endif
#ifndef INCLUDED_native_geom_Vector3D
#include <native/geom/Vector3D.h>
#endif
namespace native{
namespace geom{

Void Matrix3D_obj::__construct(Array< Float > v)
{
HX_STACK_PUSH("Matrix3D::new","native/geom/Matrix3D.hx",15);
{
	HX_STACK_LINE(15)
	if (((bool((v != null())) && bool((v->length == (int)16))))){
		HX_STACK_LINE(17)
		this->rawData = v;
	}
	else{
		HX_STACK_LINE(21)
		this->rawData = Array_obj< Float >::__new().Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0);
	}
}
;
	return null();
}

Matrix3D_obj::~Matrix3D_obj() { }

Dynamic Matrix3D_obj::__CreateEmpty() { return  new Matrix3D_obj; }
hx::ObjectPtr< Matrix3D_obj > Matrix3D_obj::__new(Array< Float > v)
{  hx::ObjectPtr< Matrix3D_obj > result = new Matrix3D_obj();
	result->__construct(v);
	return result;}

Dynamic Matrix3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix3D_obj > result = new Matrix3D_obj();
	result->__construct(inArgs[0]);
	return result;}

::native::geom::Vector3D Matrix3D_obj::set_position( ::native::geom::Vector3D val){
	HX_STACK_PUSH("Matrix3D::set_position","native/geom/Matrix3D.hx",551);
	HX_STACK_THIS(this);
	HX_STACK_ARG(val,"val");
	HX_STACK_LINE(553)
	this->rawData[(int)12] = val->x;
	HX_STACK_LINE(554)
	this->rawData[(int)13] = val->y;
	HX_STACK_LINE(555)
	this->rawData[(int)14] = val->z;
	HX_STACK_LINE(556)
	return val;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,set_position,return )

::native::geom::Vector3D Matrix3D_obj::get_position( ){
	HX_STACK_PUSH("Matrix3D::get_position","native/geom/Matrix3D.hx",544);
	HX_STACK_THIS(this);
	HX_STACK_LINE(544)
	return ::native::geom::Vector3D_obj::__new(this->rawData->__get((int)12),this->rawData->__get((int)13),this->rawData->__get((int)14),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_position,return )

Float Matrix3D_obj::get_determinant( ){
	HX_STACK_PUSH("Matrix3D::get_determinant","native/geom/Matrix3D.hx",532);
	HX_STACK_THIS(this);
	HX_STACK_LINE(532)
	return ((int)-1 * ((((((((((this->rawData->__get((int)0) * this->rawData->__get((int)5)) - (this->rawData->__get((int)4) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)10) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)11))))) - ((((this->rawData->__get((int)0) * this->rawData->__get((int)9)) - (this->rawData->__get((int)8) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)6) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)7)))))) + ((((this->rawData->__get((int)0) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)6) * this->rawData->__get((int)11)) - (this->rawData->__get((int)10) * this->rawData->__get((int)7)))))) + ((((this->rawData->__get((int)4) * this->rawData->__get((int)9)) - (this->rawData->__get((int)8) * this->rawData->__get((int)5)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)3)))))) - ((((this->rawData->__get((int)4) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)5)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)11)) - (this->rawData->__get((int)10) * this->rawData->__get((int)3)))))) + ((((this->rawData->__get((int)8) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)9)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)7)) - (this->rawData->__get((int)6) * this->rawData->__get((int)3))))))));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,get_determinant,return )

Void Matrix3D_obj::transpose( ){
{
		HX_STACK_PUSH("Matrix3D::transpose","native/geom/Matrix3D.hx",506);
		HX_STACK_THIS(this);
		HX_STACK_LINE(508)
		Array< Float > oRawData = this->rawData->copy();		HX_STACK_VAR(oRawData,"oRawData");
		HX_STACK_LINE(509)
		this->rawData[(int)1] = oRawData->__get((int)4);
		HX_STACK_LINE(510)
		this->rawData[(int)2] = oRawData->__get((int)8);
		HX_STACK_LINE(511)
		this->rawData[(int)3] = oRawData->__get((int)12);
		HX_STACK_LINE(512)
		this->rawData[(int)4] = oRawData->__get((int)1);
		HX_STACK_LINE(513)
		this->rawData[(int)6] = oRawData->__get((int)9);
		HX_STACK_LINE(514)
		this->rawData[(int)7] = oRawData->__get((int)13);
		HX_STACK_LINE(515)
		this->rawData[(int)8] = oRawData->__get((int)2);
		HX_STACK_LINE(516)
		this->rawData[(int)9] = oRawData->__get((int)6);
		HX_STACK_LINE(517)
		this->rawData[(int)11] = oRawData->__get((int)14);
		HX_STACK_LINE(518)
		this->rawData[(int)12] = oRawData->__get((int)3);
		HX_STACK_LINE(519)
		this->rawData[(int)13] = oRawData->__get((int)7);
		HX_STACK_LINE(520)
		this->rawData[(int)14] = oRawData->__get((int)11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,transpose,(void))

Void Matrix3D_obj::transformVectors( Array< Float > vin,Array< Float > vout){
{
		HX_STACK_PUSH("Matrix3D::transformVectors","native/geom/Matrix3D.hx",490);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vin,"vin");
		HX_STACK_ARG(vout,"vout");
		HX_STACK_LINE(492)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(493)
		while((((i + (int)3) <= vin->length))){
			HX_STACK_LINE(495)
			Float x = vin->__get(i);		HX_STACK_VAR(x,"x");
			Float y = vin->__get((i + (int)1));		HX_STACK_VAR(y,"y");
			Float z = vin->__get((i + (int)2));		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(496)
			vout[i] = ((((x * this->rawData->__get((int)0)) + (y * this->rawData->__get((int)4))) + (z * this->rawData->__get((int)8))) + this->rawData->__get((int)12));
			HX_STACK_LINE(497)
			vout[(i + (int)1)] = ((((x * this->rawData->__get((int)1)) + (y * this->rawData->__get((int)5))) + (z * this->rawData->__get((int)9))) + this->rawData->__get((int)13));
			HX_STACK_LINE(498)
			vout[(i + (int)2)] = ((((x * this->rawData->__get((int)2)) + (y * this->rawData->__get((int)6))) + (z * this->rawData->__get((int)10))) + this->rawData->__get((int)14));
			HX_STACK_LINE(499)
			hx::AddEq(i,(int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,transformVectors,(void))

::native::geom::Vector3D Matrix3D_obj::transformVector( ::native::geom::Vector3D v){
	HX_STACK_PUSH("Matrix3D::transformVector","native/geom/Matrix3D.hx",478);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(480)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	Float y = v->y;		HX_STACK_VAR(y,"y");
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(481)
	return ::native::geom::Vector3D_obj::__new(((((x * this->rawData->__get((int)0)) + (y * this->rawData->__get((int)4))) + (z * this->rawData->__get((int)8))) + this->rawData->__get((int)12)),((((x * this->rawData->__get((int)1)) + (y * this->rawData->__get((int)5))) + (z * this->rawData->__get((int)9))) + this->rawData->__get((int)13)),((((x * this->rawData->__get((int)2)) + (y * this->rawData->__get((int)6))) + (z * this->rawData->__get((int)10))) + this->rawData->__get((int)14)),(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,transformVector,return )

bool Matrix3D_obj::recompose( Array< ::native::geom::Vector3D > components){
	HX_STACK_PUSH("Matrix3D::recompose","native/geom/Matrix3D.hx",455);
	HX_STACK_THIS(this);
	HX_STACK_ARG(components,"components");
	HX_STACK_LINE(457)
	if (((bool((bool((bool((components->length < (int)3)) || bool((components->__get((int)2)->x == (int)0)))) || bool((components->__get((int)2)->y == (int)0)))) || bool((components->__get((int)2)->z == (int)0))))){
		HX_STACK_LINE(457)
		return false;
	}
	HX_STACK_LINE(459)
	{
		HX_STACK_LINE(459)
		this->rawData[(int)0] = (int)1;
		HX_STACK_LINE(459)
		this->rawData[(int)1] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)2] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)3] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)4] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)5] = (int)1;
		HX_STACK_LINE(459)
		this->rawData[(int)6] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)7] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)8] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)9] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)10] = (int)1;
		HX_STACK_LINE(459)
		this->rawData[(int)11] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)12] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)13] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)14] = (int)0;
		HX_STACK_LINE(459)
		this->rawData[(int)15] = (int)1;
	}
	HX_STACK_LINE(460)
	this->append(::native::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(components->__get((int)2)->x).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(components->__get((int)2)->y).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(components->__get((int)2)->z).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0)));
	HX_STACK_LINE(462)
	Float angle;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(463)
	angle = -(components->__get((int)1)->x);
	HX_STACK_LINE(464)
	this->append(::native::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add(::Math_obj::cos(angle)).Add(-(::Math_obj::sin(angle))).Add((int)0).Add((int)0).Add(::Math_obj::sin(angle)).Add(::Math_obj::cos(angle)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0)));
	HX_STACK_LINE(465)
	angle = -(components->__get((int)1)->y);
	HX_STACK_LINE(466)
	this->append(::native::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(::Math_obj::cos(angle)).Add((int)0).Add(::Math_obj::sin(angle)).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add(-(::Math_obj::sin(angle))).Add((int)0).Add(::Math_obj::cos(angle)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0)));
	HX_STACK_LINE(467)
	angle = -(components->__get((int)1)->z);
	HX_STACK_LINE(468)
	this->append(::native::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(::Math_obj::cos(angle)).Add(-(::Math_obj::sin(angle))).Add((int)0).Add((int)0).Add(::Math_obj::sin(angle)).Add(::Math_obj::cos(angle)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0)));
	HX_STACK_LINE(470)
	{
		HX_STACK_LINE(470)
		::native::geom::Vector3D val = components->__get((int)0);		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(470)
		this->rawData[(int)12] = val->x;
		HX_STACK_LINE(470)
		this->rawData[(int)13] = val->y;
		HX_STACK_LINE(470)
		this->rawData[(int)14] = val->z;
		HX_STACK_LINE(470)
		val;
	}
	HX_STACK_LINE(471)
	this->rawData[(int)15] = (int)1;
	HX_STACK_LINE(473)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,recompose,return )

Void Matrix3D_obj::prependTranslation( Float x,Float y,Float z){
{
		HX_STACK_PUSH("Matrix3D::prependTranslation","native/geom/Matrix3D.hx",446);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_LINE(448)
		::native::geom::Matrix3D m = ::native::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(449)
		{
			HX_STACK_LINE(449)
			::native::geom::Vector3D val = ::native::geom::Vector3D_obj::__new(x,y,z,null());		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(449)
			m->rawData[(int)12] = val->x;
			HX_STACK_LINE(449)
			m->rawData[(int)13] = val->y;
			HX_STACK_LINE(449)
			m->rawData[(int)14] = val->z;
			HX_STACK_LINE(449)
			val;
		}
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			Float m111 = m->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
			Float m121 = m->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
			Float m131 = m->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
			Float m141 = m->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
			Float m112 = m->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
			Float m122 = m->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
			Float m132 = m->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
			Float m142 = m->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
			Float m113 = m->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
			Float m123 = m->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
			Float m133 = m->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
			Float m143 = m->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
			Float m114 = m->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
			Float m124 = m->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
			Float m134 = m->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
			Float m144 = m->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
			Float m211 = this->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
			Float m221 = this->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
			Float m231 = this->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
			Float m241 = this->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
			Float m212 = this->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
			Float m222 = this->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
			Float m232 = this->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
			Float m242 = this->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
			Float m213 = this->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
			Float m223 = this->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
			Float m233 = this->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
			Float m243 = this->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
			Float m214 = this->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
			Float m224 = this->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
			Float m234 = this->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
			Float m244 = this->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
			HX_STACK_LINE(450)
			this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
			HX_STACK_LINE(450)
			this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
			HX_STACK_LINE(450)
			this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
			HX_STACK_LINE(450)
			this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
			HX_STACK_LINE(450)
			this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
			HX_STACK_LINE(450)
			this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
			HX_STACK_LINE(450)
			this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
			HX_STACK_LINE(450)
			this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
			HX_STACK_LINE(450)
			this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
			HX_STACK_LINE(450)
			this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
			HX_STACK_LINE(450)
			this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
			HX_STACK_LINE(450)
			this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
			HX_STACK_LINE(450)
			this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
			HX_STACK_LINE(450)
			this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
			HX_STACK_LINE(450)
			this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
			HX_STACK_LINE(450)
			this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependTranslation,(void))

Void Matrix3D_obj::prependScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_PUSH("Matrix3D::prependScale","native/geom/Matrix3D.hx",439);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xScale,"xScale");
		HX_STACK_ARG(yScale,"yScale");
		HX_STACK_ARG(zScale,"zScale");
		HX_STACK_LINE(441)
		::native::geom::Matrix3D rhs = ::native::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(yScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(zScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0));		HX_STACK_VAR(rhs,"rhs");
		HX_STACK_LINE(441)
		Float m111 = rhs->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
		Float m121 = rhs->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
		Float m131 = rhs->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
		Float m141 = rhs->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
		Float m112 = rhs->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
		Float m122 = rhs->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
		Float m132 = rhs->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
		Float m142 = rhs->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
		Float m113 = rhs->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
		Float m123 = rhs->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
		Float m133 = rhs->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
		Float m143 = rhs->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
		Float m114 = rhs->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
		Float m124 = rhs->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
		Float m134 = rhs->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
		Float m144 = rhs->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
		Float m211 = this->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
		Float m221 = this->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
		Float m231 = this->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
		Float m241 = this->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
		Float m212 = this->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
		Float m222 = this->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
		Float m232 = this->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
		Float m242 = this->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
		Float m213 = this->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
		Float m223 = this->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
		Float m233 = this->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
		Float m243 = this->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
		Float m214 = this->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
		Float m224 = this->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
		Float m234 = this->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
		Float m244 = this->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(441)
		this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
		HX_STACK_LINE(441)
		this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
		HX_STACK_LINE(441)
		this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
		HX_STACK_LINE(441)
		this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
		HX_STACK_LINE(441)
		this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
		HX_STACK_LINE(441)
		this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
		HX_STACK_LINE(441)
		this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
		HX_STACK_LINE(441)
		this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
		HX_STACK_LINE(441)
		this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
		HX_STACK_LINE(441)
		this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
		HX_STACK_LINE(441)
		this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
		HX_STACK_LINE(441)
		this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
		HX_STACK_LINE(441)
		this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
		HX_STACK_LINE(441)
		this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
		HX_STACK_LINE(441)
		this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
		HX_STACK_LINE(441)
		this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependScale,(void))

Void Matrix3D_obj::prependRotation( Float degrees,::native::geom::Vector3D axis,::native::geom::Vector3D pivotPoint){
{
		HX_STACK_PUSH("Matrix3D::prependRotation","native/geom/Matrix3D.hx",423);
		HX_STACK_THIS(this);
		HX_STACK_ARG(degrees,"degrees");
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(pivotPoint,"pivotPoint");
		struct _Function_1_1{
			inline static ::native::geom::Matrix3D Block( ::native::geom::Vector3D &axis,Float &degrees){
				HX_STACK_PUSH("*::closure","native/geom/Matrix3D.hx",425);
				{
					HX_STACK_LINE(425)
					::native::geom::Matrix3D m = ::native::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(425)
					::native::geom::Vector3D a1 = ::native::geom::Vector3D_obj::__new(axis->x,axis->y,axis->z,null());		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(425)
					Float rad = (-(degrees) * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rad,"rad");
					HX_STACK_LINE(425)
					Float c = ::Math_obj::cos(rad);		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(425)
					Float s = ::Math_obj::sin(rad);		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(425)
					Float t = (1.0 - c);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(425)
					m->rawData[(int)0] = (c + ((a1->x * a1->x) * t));
					HX_STACK_LINE(425)
					m->rawData[(int)5] = (c + ((a1->y * a1->y) * t));
					HX_STACK_LINE(425)
					m->rawData[(int)10] = (c + ((a1->z * a1->z) * t));
					HX_STACK_LINE(425)
					Float tmp1 = ((a1->x * a1->y) * t);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(425)
					Float tmp2 = (a1->z * s);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(425)
					m->rawData[(int)4] = (tmp1 + tmp2);
					HX_STACK_LINE(425)
					m->rawData[(int)1] = (tmp1 - tmp2);
					HX_STACK_LINE(425)
					tmp1 = ((a1->x * a1->z) * t);
					HX_STACK_LINE(425)
					tmp2 = (a1->y * s);
					HX_STACK_LINE(425)
					m->rawData[(int)8] = (tmp1 - tmp2);
					HX_STACK_LINE(425)
					m->rawData[(int)2] = (tmp1 + tmp2);
					HX_STACK_LINE(425)
					tmp1 = ((a1->y * a1->z) * t);
					HX_STACK_LINE(425)
					tmp2 = (a1->x * s);
					HX_STACK_LINE(425)
					m->rawData[(int)9] = (tmp1 + tmp2);
					HX_STACK_LINE(425)
					m->rawData[(int)6] = (tmp1 - tmp2);
					HX_STACK_LINE(425)
					return m;
				}
				return null();
			}
		};
		HX_STACK_LINE(425)
		::native::geom::Matrix3D m = _Function_1_1::Block(axis,degrees);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(427)
		if (((pivotPoint != null()))){
			HX_STACK_LINE(429)
			::native::geom::Vector3D p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				hx::AddEq(m->rawData[(int)12],p->x);
				HX_STACK_LINE(430)
				hx::AddEq(m->rawData[(int)13],p->y);
				HX_STACK_LINE(430)
				hx::AddEq(m->rawData[(int)14],p->z);
			}
		}
		HX_STACK_LINE(434)
		{
			HX_STACK_LINE(434)
			Float m111 = m->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
			Float m121 = m->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
			Float m131 = m->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
			Float m141 = m->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
			Float m112 = m->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
			Float m122 = m->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
			Float m132 = m->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
			Float m142 = m->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
			Float m113 = m->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
			Float m123 = m->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
			Float m133 = m->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
			Float m143 = m->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
			Float m114 = m->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
			Float m124 = m->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
			Float m134 = m->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
			Float m144 = m->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
			Float m211 = this->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
			Float m221 = this->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
			Float m231 = this->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
			Float m241 = this->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
			Float m212 = this->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
			Float m222 = this->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
			Float m232 = this->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
			Float m242 = this->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
			Float m213 = this->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
			Float m223 = this->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
			Float m233 = this->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
			Float m243 = this->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
			Float m214 = this->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
			Float m224 = this->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
			Float m234 = this->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
			Float m244 = this->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
			HX_STACK_LINE(434)
			this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
			HX_STACK_LINE(434)
			this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
			HX_STACK_LINE(434)
			this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
			HX_STACK_LINE(434)
			this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
			HX_STACK_LINE(434)
			this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
			HX_STACK_LINE(434)
			this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
			HX_STACK_LINE(434)
			this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
			HX_STACK_LINE(434)
			this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
			HX_STACK_LINE(434)
			this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
			HX_STACK_LINE(434)
			this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
			HX_STACK_LINE(434)
			this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
			HX_STACK_LINE(434)
			this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
			HX_STACK_LINE(434)
			this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
			HX_STACK_LINE(434)
			this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
			HX_STACK_LINE(434)
			this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
			HX_STACK_LINE(434)
			this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,prependRotation,(void))

Void Matrix3D_obj::prepend( ::native::geom::Matrix3D rhs){
{
		HX_STACK_PUSH("Matrix3D::prepend","native/geom/Matrix3D.hx",389);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rhs,"rhs");
		HX_STACK_LINE(391)
		Float m111 = rhs->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
		Float m121 = rhs->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
		Float m131 = rhs->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
		Float m141 = rhs->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
		Float m112 = rhs->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
		Float m122 = rhs->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
		Float m132 = rhs->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
		Float m142 = rhs->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
		Float m113 = rhs->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
		Float m123 = rhs->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
		Float m133 = rhs->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
		Float m143 = rhs->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
		Float m114 = rhs->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
		Float m124 = rhs->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
		Float m134 = rhs->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
		Float m144 = rhs->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
		Float m211 = this->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
		Float m221 = this->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
		Float m231 = this->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
		Float m241 = this->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
		Float m212 = this->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
		Float m222 = this->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
		Float m232 = this->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
		Float m242 = this->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
		Float m213 = this->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
		Float m223 = this->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
		Float m233 = this->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
		Float m243 = this->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
		Float m214 = this->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
		Float m224 = this->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
		Float m234 = this->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
		Float m244 = this->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(400)
		this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
		HX_STACK_LINE(401)
		this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
		HX_STACK_LINE(402)
		this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
		HX_STACK_LINE(403)
		this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
		HX_STACK_LINE(405)
		this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
		HX_STACK_LINE(406)
		this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
		HX_STACK_LINE(407)
		this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
		HX_STACK_LINE(408)
		this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
		HX_STACK_LINE(410)
		this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
		HX_STACK_LINE(411)
		this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
		HX_STACK_LINE(412)
		this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
		HX_STACK_LINE(413)
		this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
		HX_STACK_LINE(415)
		this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
		HX_STACK_LINE(416)
		this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
		HX_STACK_LINE(417)
		this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
		HX_STACK_LINE(418)
		this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,prepend,(void))

bool Matrix3D_obj::invert( ){
	HX_STACK_PUSH("Matrix3D::invert","native/geom/Matrix3D.hx",298);
	HX_STACK_THIS(this);
	HX_STACK_LINE(300)
	Float d = ((int)-1 * ((((((((((this->rawData->__get((int)0) * this->rawData->__get((int)5)) - (this->rawData->__get((int)4) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)10) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)11))))) - ((((this->rawData->__get((int)0) * this->rawData->__get((int)9)) - (this->rawData->__get((int)8) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)6) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)7)))))) + ((((this->rawData->__get((int)0) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)1)))) * (((this->rawData->__get((int)6) * this->rawData->__get((int)11)) - (this->rawData->__get((int)10) * this->rawData->__get((int)7)))))) + ((((this->rawData->__get((int)4) * this->rawData->__get((int)9)) - (this->rawData->__get((int)8) * this->rawData->__get((int)5)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)15)) - (this->rawData->__get((int)14) * this->rawData->__get((int)3)))))) - ((((this->rawData->__get((int)4) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)5)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)11)) - (this->rawData->__get((int)10) * this->rawData->__get((int)3)))))) + ((((this->rawData->__get((int)8) * this->rawData->__get((int)13)) - (this->rawData->__get((int)12) * this->rawData->__get((int)9)))) * (((this->rawData->__get((int)2) * this->rawData->__get((int)7)) - (this->rawData->__get((int)6) * this->rawData->__get((int)3))))))));		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(301)
	bool invertable = (::Math_obj::abs(d) > 0.00000000001);		HX_STACK_VAR(invertable,"invertable");
	HX_STACK_LINE(303)
	if ((invertable)){
		HX_STACK_LINE(305)
		d = (Float((int)-1) / Float(d));
		HX_STACK_LINE(306)
		Float m11 = this->rawData->__get((int)0);		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(306)
		Float m21 = this->rawData->__get((int)4);		HX_STACK_VAR(m21,"m21");
		HX_STACK_LINE(306)
		Float m31 = this->rawData->__get((int)8);		HX_STACK_VAR(m31,"m31");
		HX_STACK_LINE(306)
		Float m41 = this->rawData->__get((int)12);		HX_STACK_VAR(m41,"m41");
		HX_STACK_LINE(307)
		Float m12 = this->rawData->__get((int)1);		HX_STACK_VAR(m12,"m12");
		HX_STACK_LINE(307)
		Float m22 = this->rawData->__get((int)5);		HX_STACK_VAR(m22,"m22");
		HX_STACK_LINE(307)
		Float m32 = this->rawData->__get((int)9);		HX_STACK_VAR(m32,"m32");
		HX_STACK_LINE(307)
		Float m42 = this->rawData->__get((int)13);		HX_STACK_VAR(m42,"m42");
		HX_STACK_LINE(308)
		Float m13 = this->rawData->__get((int)2);		HX_STACK_VAR(m13,"m13");
		HX_STACK_LINE(308)
		Float m23 = this->rawData->__get((int)6);		HX_STACK_VAR(m23,"m23");
		HX_STACK_LINE(308)
		Float m33 = this->rawData->__get((int)10);		HX_STACK_VAR(m33,"m33");
		HX_STACK_LINE(308)
		Float m43 = this->rawData->__get((int)14);		HX_STACK_VAR(m43,"m43");
		HX_STACK_LINE(309)
		Float m14 = this->rawData->__get((int)3);		HX_STACK_VAR(m14,"m14");
		HX_STACK_LINE(309)
		Float m24 = this->rawData->__get((int)7);		HX_STACK_VAR(m24,"m24");
		HX_STACK_LINE(309)
		Float m34 = this->rawData->__get((int)11);		HX_STACK_VAR(m34,"m34");
		HX_STACK_LINE(309)
		Float m44 = this->rawData->__get((int)15);		HX_STACK_VAR(m44,"m44");
		HX_STACK_LINE(311)
		this->rawData[(int)0] = (d * ((((m22 * (((m33 * m44) - (m43 * m34)))) - (m32 * (((m23 * m44) - (m43 * m24))))) + (m42 * (((m23 * m34) - (m33 * m24)))))));
		HX_STACK_LINE(312)
		this->rawData[(int)1] = (-(d) * ((((m12 * (((m33 * m44) - (m43 * m34)))) - (m32 * (((m13 * m44) - (m43 * m14))))) + (m42 * (((m13 * m34) - (m33 * m14)))))));
		HX_STACK_LINE(313)
		this->rawData[(int)2] = (d * ((((m12 * (((m23 * m44) - (m43 * m24)))) - (m22 * (((m13 * m44) - (m43 * m14))))) + (m42 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(314)
		this->rawData[(int)3] = (-(d) * ((((m12 * (((m23 * m34) - (m33 * m24)))) - (m22 * (((m13 * m34) - (m33 * m14))))) + (m32 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(315)
		this->rawData[(int)4] = (-(d) * ((((m21 * (((m33 * m44) - (m43 * m34)))) - (m31 * (((m23 * m44) - (m43 * m24))))) + (m41 * (((m23 * m34) - (m33 * m24)))))));
		HX_STACK_LINE(316)
		this->rawData[(int)5] = (d * ((((m11 * (((m33 * m44) - (m43 * m34)))) - (m31 * (((m13 * m44) - (m43 * m14))))) + (m41 * (((m13 * m34) - (m33 * m14)))))));
		HX_STACK_LINE(317)
		this->rawData[(int)6] = (-(d) * ((((m11 * (((m23 * m44) - (m43 * m24)))) - (m21 * (((m13 * m44) - (m43 * m14))))) + (m41 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(318)
		this->rawData[(int)7] = (d * ((((m11 * (((m23 * m34) - (m33 * m24)))) - (m21 * (((m13 * m34) - (m33 * m14))))) + (m31 * (((m13 * m24) - (m23 * m14)))))));
		HX_STACK_LINE(319)
		this->rawData[(int)8] = (d * ((((m21 * (((m32 * m44) - (m42 * m34)))) - (m31 * (((m22 * m44) - (m42 * m24))))) + (m41 * (((m22 * m34) - (m32 * m24)))))));
		HX_STACK_LINE(320)
		this->rawData[(int)9] = (-(d) * ((((m11 * (((m32 * m44) - (m42 * m34)))) - (m31 * (((m12 * m44) - (m42 * m14))))) + (m41 * (((m12 * m34) - (m32 * m14)))))));
		HX_STACK_LINE(321)
		this->rawData[(int)10] = (d * ((((m11 * (((m22 * m44) - (m42 * m24)))) - (m21 * (((m12 * m44) - (m42 * m14))))) + (m41 * (((m12 * m24) - (m22 * m14)))))));
		HX_STACK_LINE(322)
		this->rawData[(int)11] = (-(d) * ((((m11 * (((m22 * m34) - (m32 * m24)))) - (m21 * (((m12 * m34) - (m32 * m14))))) + (m31 * (((m12 * m24) - (m22 * m14)))))));
		HX_STACK_LINE(323)
		this->rawData[(int)12] = (-(d) * ((((m21 * (((m32 * m43) - (m42 * m33)))) - (m31 * (((m22 * m43) - (m42 * m23))))) + (m41 * (((m22 * m33) - (m32 * m23)))))));
		HX_STACK_LINE(324)
		this->rawData[(int)13] = (d * ((((m11 * (((m32 * m43) - (m42 * m33)))) - (m31 * (((m12 * m43) - (m42 * m13))))) + (m41 * (((m12 * m33) - (m32 * m13)))))));
		HX_STACK_LINE(325)
		this->rawData[(int)14] = (-(d) * ((((m11 * (((m22 * m43) - (m42 * m23)))) - (m21 * (((m12 * m43) - (m42 * m13))))) + (m41 * (((m12 * m23) - (m22 * m13)))))));
		HX_STACK_LINE(326)
		this->rawData[(int)15] = (d * ((((m11 * (((m22 * m33) - (m32 * m23)))) - (m21 * (((m12 * m33) - (m32 * m13))))) + (m31 * (((m12 * m23) - (m22 * m13)))))));
	}
	HX_STACK_LINE(330)
	return invertable;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,invert,return )

Void Matrix3D_obj::interpolateTo( ::native::geom::Matrix3D toMat,Float percent){
{
		HX_STACK_PUSH("Matrix3D::interpolateTo","native/geom/Matrix3D.hx",287);
		HX_STACK_THIS(this);
		HX_STACK_ARG(toMat,"toMat");
		HX_STACK_ARG(percent,"percent");
		HX_STACK_LINE(289)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(289)
		while(((_g < (int)16))){
			HX_STACK_LINE(289)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(291)
			this->rawData[i] = (this->rawData->__get(i) + (((toMat->rawData->__get(i) - this->rawData->__get(i))) * percent));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix3D_obj,interpolateTo,(void))

Void Matrix3D_obj::identity( ){
{
		HX_STACK_PUSH("Matrix3D::identity","native/geom/Matrix3D.hx",250);
		HX_STACK_THIS(this);
		HX_STACK_LINE(252)
		this->rawData[(int)0] = (int)1;
		HX_STACK_LINE(253)
		this->rawData[(int)1] = (int)0;
		HX_STACK_LINE(254)
		this->rawData[(int)2] = (int)0;
		HX_STACK_LINE(255)
		this->rawData[(int)3] = (int)0;
		HX_STACK_LINE(256)
		this->rawData[(int)4] = (int)0;
		HX_STACK_LINE(257)
		this->rawData[(int)5] = (int)1;
		HX_STACK_LINE(258)
		this->rawData[(int)6] = (int)0;
		HX_STACK_LINE(259)
		this->rawData[(int)7] = (int)0;
		HX_STACK_LINE(260)
		this->rawData[(int)8] = (int)0;
		HX_STACK_LINE(261)
		this->rawData[(int)9] = (int)0;
		HX_STACK_LINE(262)
		this->rawData[(int)10] = (int)1;
		HX_STACK_LINE(263)
		this->rawData[(int)11] = (int)0;
		HX_STACK_LINE(264)
		this->rawData[(int)12] = (int)0;
		HX_STACK_LINE(265)
		this->rawData[(int)13] = (int)0;
		HX_STACK_LINE(266)
		this->rawData[(int)14] = (int)0;
		HX_STACK_LINE(267)
		this->rawData[(int)15] = (int)1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,identity,(void))

::native::geom::Vector3D Matrix3D_obj::deltaTransformVector( ::native::geom::Vector3D v){
	HX_STACK_PUSH("Matrix3D::deltaTransformVector","native/geom/Matrix3D.hx",206);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(208)
	Float x = v->x;		HX_STACK_VAR(x,"x");
	Float y = v->y;		HX_STACK_VAR(y,"y");
	Float z = v->z;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(209)
	return ::native::geom::Vector3D_obj::__new(((((x * this->rawData->__get((int)0)) + (y * this->rawData->__get((int)1))) + (z * this->rawData->__get((int)2))) + this->rawData->__get((int)3)),((((x * this->rawData->__get((int)4)) + (y * this->rawData->__get((int)5))) + (z * this->rawData->__get((int)6))) + this->rawData->__get((int)7)),((((x * this->rawData->__get((int)8)) + (y * this->rawData->__get((int)9))) + (z * this->rawData->__get((int)10))) + this->rawData->__get((int)11)),(int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,deltaTransformVector,return )

Array< ::native::geom::Vector3D > Matrix3D_obj::decompose( ){
	HX_STACK_PUSH("Matrix3D::decompose","native/geom/Matrix3D.hx",147);
	HX_STACK_THIS(this);
	HX_STACK_LINE(149)
	Array< ::native::geom::Vector3D > vec = Array_obj< ::native::geom::Vector3D >::__new();		HX_STACK_VAR(vec,"vec");
	HX_STACK_LINE(150)
	::native::geom::Matrix3D m = ::native::geom::Matrix3D_obj::__new(this->rawData->copy());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(151)
	Array< Float > mr = m->rawData;		HX_STACK_VAR(mr,"mr");
	HX_STACK_LINE(153)
	::native::geom::Vector3D pos = ::native::geom::Vector3D_obj::__new(mr->__get((int)12),mr->__get((int)13),mr->__get((int)14),null());		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(154)
	mr[(int)12] = (int)0;
	HX_STACK_LINE(155)
	mr[(int)13] = (int)0;
	HX_STACK_LINE(156)
	mr[(int)14] = (int)0;
	HX_STACK_LINE(158)
	::native::geom::Vector3D scale = ::native::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(160)
	scale->x = ::Math_obj::sqrt((((mr->__get((int)0) * mr->__get((int)0)) + (mr->__get((int)1) * mr->__get((int)1))) + (mr->__get((int)2) * mr->__get((int)2))));
	HX_STACK_LINE(161)
	scale->y = ::Math_obj::sqrt((((mr->__get((int)4) * mr->__get((int)4)) + (mr->__get((int)5) * mr->__get((int)5))) + (mr->__get((int)6) * mr->__get((int)6))));
	HX_STACK_LINE(162)
	scale->z = ::Math_obj::sqrt((((mr->__get((int)8) * mr->__get((int)8)) + (mr->__get((int)9) * mr->__get((int)9))) + (mr->__get((int)10) * mr->__get((int)10))));
	HX_STACK_LINE(164)
	if ((((((mr->__get((int)0) * (((mr->__get((int)5) * mr->__get((int)10)) - (mr->__get((int)6) * mr->__get((int)9))))) - (mr->__get((int)1) * (((mr->__get((int)4) * mr->__get((int)10)) - (mr->__get((int)6) * mr->__get((int)8)))))) + (mr->__get((int)2) * (((mr->__get((int)4) * mr->__get((int)9)) - (mr->__get((int)5) * mr->__get((int)8)))))) < (int)0))){
		HX_STACK_LINE(164)
		scale->z = -(scale->z);
	}
	HX_STACK_LINE(170)
	hx::DivEq(mr[(int)0],scale->x);
	HX_STACK_LINE(171)
	hx::DivEq(mr[(int)1],scale->x);
	HX_STACK_LINE(172)
	hx::DivEq(mr[(int)2],scale->x);
	HX_STACK_LINE(173)
	hx::DivEq(mr[(int)4],scale->y);
	HX_STACK_LINE(174)
	hx::DivEq(mr[(int)5],scale->y);
	HX_STACK_LINE(175)
	hx::DivEq(mr[(int)6],scale->y);
	HX_STACK_LINE(176)
	hx::DivEq(mr[(int)8],scale->z);
	HX_STACK_LINE(177)
	hx::DivEq(mr[(int)9],scale->z);
	HX_STACK_LINE(178)
	hx::DivEq(mr[(int)10],scale->z);
	HX_STACK_LINE(180)
	::native::geom::Vector3D rot = ::native::geom::Vector3D_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(rot,"rot");
	HX_STACK_LINE(182)
	rot->y = ::Math_obj::asin(-(mr->__get((int)2)));
	HX_STACK_LINE(184)
	Float C = ::Math_obj::cos(rot->y);		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(185)
	if (((C > (int)0))){
		HX_STACK_LINE(187)
		rot->x = ::Math_obj::atan2(mr->__get((int)6),mr->__get((int)10));
		HX_STACK_LINE(188)
		rot->z = ::Math_obj::atan2(mr->__get((int)1),mr->__get((int)0));
	}
	else{
		HX_STACK_LINE(192)
		rot->z = (int)0;
		HX_STACK_LINE(193)
		rot->x = ::Math_obj::atan2(mr->__get((int)4),mr->__get((int)5));
	}
	HX_STACK_LINE(197)
	vec->push(pos);
	HX_STACK_LINE(198)
	vec->push(rot);
	HX_STACK_LINE(199)
	vec->push(scale);
	HX_STACK_LINE(201)
	return vec;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,decompose,return )

::native::geom::Matrix3D Matrix3D_obj::clone( ){
	HX_STACK_PUSH("Matrix3D::clone","native/geom/Matrix3D.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_LINE(96)
	return ::native::geom::Matrix3D_obj::__new(this->rawData->copy());
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix3D_obj,clone,return )

Void Matrix3D_obj::appendTranslation( Float x,Float y,Float z){
{
		HX_STACK_PUSH("Matrix3D::appendTranslation","native/geom/Matrix3D.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(z,"z");
		HX_STACK_LINE(89)
		hx::AddEq(this->rawData[(int)12],x);
		HX_STACK_LINE(90)
		hx::AddEq(this->rawData[(int)13],y);
		HX_STACK_LINE(91)
		hx::AddEq(this->rawData[(int)14],z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendTranslation,(void))

Void Matrix3D_obj::appendScale( Float xScale,Float yScale,Float zScale){
{
		HX_STACK_PUSH("Matrix3D::appendScale","native/geom/Matrix3D.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xScale,"xScale");
		HX_STACK_ARG(yScale,"yScale");
		HX_STACK_ARG(zScale,"zScale");
		HX_STACK_LINE(80)
		this->append(::native::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(xScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(yScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(zScale).Add(0.0).Add(0.0).Add(0.0).Add(0.0).Add(1.0)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendScale,(void))

Void Matrix3D_obj::appendRotation( Float degrees,::native::geom::Vector3D axis,::native::geom::Vector3D pivotPoint){
{
		HX_STACK_PUSH("Matrix3D::appendRotation","native/geom/Matrix3D.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(degrees,"degrees");
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(pivotPoint,"pivotPoint");
		struct _Function_1_1{
			inline static ::native::geom::Matrix3D Block( ::native::geom::Vector3D &axis,Float &degrees){
				HX_STACK_PUSH("*::closure","native/geom/Matrix3D.hx",66);
				{
					HX_STACK_LINE(66)
					::native::geom::Matrix3D m = ::native::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(66)
					::native::geom::Vector3D a1 = ::native::geom::Vector3D_obj::__new(axis->x,axis->y,axis->z,null());		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(66)
					Float rad = (-(degrees) * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rad,"rad");
					HX_STACK_LINE(66)
					Float c = ::Math_obj::cos(rad);		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(66)
					Float s = ::Math_obj::sin(rad);		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(66)
					Float t = (1.0 - c);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(66)
					m->rawData[(int)0] = (c + ((a1->x * a1->x) * t));
					HX_STACK_LINE(66)
					m->rawData[(int)5] = (c + ((a1->y * a1->y) * t));
					HX_STACK_LINE(66)
					m->rawData[(int)10] = (c + ((a1->z * a1->z) * t));
					HX_STACK_LINE(66)
					Float tmp1 = ((a1->x * a1->y) * t);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(66)
					Float tmp2 = (a1->z * s);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(66)
					m->rawData[(int)4] = (tmp1 + tmp2);
					HX_STACK_LINE(66)
					m->rawData[(int)1] = (tmp1 - tmp2);
					HX_STACK_LINE(66)
					tmp1 = ((a1->x * a1->z) * t);
					HX_STACK_LINE(66)
					tmp2 = (a1->y * s);
					HX_STACK_LINE(66)
					m->rawData[(int)8] = (tmp1 - tmp2);
					HX_STACK_LINE(66)
					m->rawData[(int)2] = (tmp1 + tmp2);
					HX_STACK_LINE(66)
					tmp1 = ((a1->y * a1->z) * t);
					HX_STACK_LINE(66)
					tmp2 = (a1->x * s);
					HX_STACK_LINE(66)
					m->rawData[(int)9] = (tmp1 + tmp2);
					HX_STACK_LINE(66)
					m->rawData[(int)6] = (tmp1 - tmp2);
					HX_STACK_LINE(66)
					return m;
				}
				return null();
			}
		};
		HX_STACK_LINE(66)
		::native::geom::Matrix3D m = _Function_1_1::Block(axis,degrees);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(68)
		if (((pivotPoint != null()))){
			HX_STACK_LINE(70)
			::native::geom::Vector3D p = pivotPoint;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				hx::AddEq(m->rawData[(int)12],p->x);
				HX_STACK_LINE(71)
				hx::AddEq(m->rawData[(int)13],p->y);
				HX_STACK_LINE(71)
				hx::AddEq(m->rawData[(int)14],p->z);
			}
		}
		HX_STACK_LINE(75)
		this->append(m);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,appendRotation,(void))

Void Matrix3D_obj::append( ::native::geom::Matrix3D lhs){
{
		HX_STACK_PUSH("Matrix3D::append","native/geom/Matrix3D.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lhs,"lhs");
		HX_STACK_LINE(32)
		Float m111 = this->rawData->__get((int)0);		HX_STACK_VAR(m111,"m111");
		Float m121 = this->rawData->__get((int)4);		HX_STACK_VAR(m121,"m121");
		Float m131 = this->rawData->__get((int)8);		HX_STACK_VAR(m131,"m131");
		Float m141 = this->rawData->__get((int)12);		HX_STACK_VAR(m141,"m141");
		Float m112 = this->rawData->__get((int)1);		HX_STACK_VAR(m112,"m112");
		Float m122 = this->rawData->__get((int)5);		HX_STACK_VAR(m122,"m122");
		Float m132 = this->rawData->__get((int)9);		HX_STACK_VAR(m132,"m132");
		Float m142 = this->rawData->__get((int)13);		HX_STACK_VAR(m142,"m142");
		Float m113 = this->rawData->__get((int)2);		HX_STACK_VAR(m113,"m113");
		Float m123 = this->rawData->__get((int)6);		HX_STACK_VAR(m123,"m123");
		Float m133 = this->rawData->__get((int)10);		HX_STACK_VAR(m133,"m133");
		Float m143 = this->rawData->__get((int)14);		HX_STACK_VAR(m143,"m143");
		Float m114 = this->rawData->__get((int)3);		HX_STACK_VAR(m114,"m114");
		Float m124 = this->rawData->__get((int)7);		HX_STACK_VAR(m124,"m124");
		Float m134 = this->rawData->__get((int)11);		HX_STACK_VAR(m134,"m134");
		Float m144 = this->rawData->__get((int)15);		HX_STACK_VAR(m144,"m144");
		Float m211 = lhs->rawData->__get((int)0);		HX_STACK_VAR(m211,"m211");
		Float m221 = lhs->rawData->__get((int)4);		HX_STACK_VAR(m221,"m221");
		Float m231 = lhs->rawData->__get((int)8);		HX_STACK_VAR(m231,"m231");
		Float m241 = lhs->rawData->__get((int)12);		HX_STACK_VAR(m241,"m241");
		Float m212 = lhs->rawData->__get((int)1);		HX_STACK_VAR(m212,"m212");
		Float m222 = lhs->rawData->__get((int)5);		HX_STACK_VAR(m222,"m222");
		Float m232 = lhs->rawData->__get((int)9);		HX_STACK_VAR(m232,"m232");
		Float m242 = lhs->rawData->__get((int)13);		HX_STACK_VAR(m242,"m242");
		Float m213 = lhs->rawData->__get((int)2);		HX_STACK_VAR(m213,"m213");
		Float m223 = lhs->rawData->__get((int)6);		HX_STACK_VAR(m223,"m223");
		Float m233 = lhs->rawData->__get((int)10);		HX_STACK_VAR(m233,"m233");
		Float m243 = lhs->rawData->__get((int)14);		HX_STACK_VAR(m243,"m243");
		Float m214 = lhs->rawData->__get((int)3);		HX_STACK_VAR(m214,"m214");
		Float m224 = lhs->rawData->__get((int)7);		HX_STACK_VAR(m224,"m224");
		Float m234 = lhs->rawData->__get((int)11);		HX_STACK_VAR(m234,"m234");
		Float m244 = lhs->rawData->__get((int)15);		HX_STACK_VAR(m244,"m244");
		HX_STACK_LINE(41)
		this->rawData[(int)0] = ((((m111 * m211) + (m112 * m221)) + (m113 * m231)) + (m114 * m241));
		HX_STACK_LINE(42)
		this->rawData[(int)1] = ((((m111 * m212) + (m112 * m222)) + (m113 * m232)) + (m114 * m242));
		HX_STACK_LINE(43)
		this->rawData[(int)2] = ((((m111 * m213) + (m112 * m223)) + (m113 * m233)) + (m114 * m243));
		HX_STACK_LINE(44)
		this->rawData[(int)3] = ((((m111 * m214) + (m112 * m224)) + (m113 * m234)) + (m114 * m244));
		HX_STACK_LINE(46)
		this->rawData[(int)4] = ((((m121 * m211) + (m122 * m221)) + (m123 * m231)) + (m124 * m241));
		HX_STACK_LINE(47)
		this->rawData[(int)5] = ((((m121 * m212) + (m122 * m222)) + (m123 * m232)) + (m124 * m242));
		HX_STACK_LINE(48)
		this->rawData[(int)6] = ((((m121 * m213) + (m122 * m223)) + (m123 * m233)) + (m124 * m243));
		HX_STACK_LINE(49)
		this->rawData[(int)7] = ((((m121 * m214) + (m122 * m224)) + (m123 * m234)) + (m124 * m244));
		HX_STACK_LINE(51)
		this->rawData[(int)8] = ((((m131 * m211) + (m132 * m221)) + (m133 * m231)) + (m134 * m241));
		HX_STACK_LINE(52)
		this->rawData[(int)9] = ((((m131 * m212) + (m132 * m222)) + (m133 * m232)) + (m134 * m242));
		HX_STACK_LINE(53)
		this->rawData[(int)10] = ((((m131 * m213) + (m132 * m223)) + (m133 * m233)) + (m134 * m243));
		HX_STACK_LINE(54)
		this->rawData[(int)11] = ((((m131 * m214) + (m132 * m224)) + (m133 * m234)) + (m134 * m244));
		HX_STACK_LINE(56)
		this->rawData[(int)12] = ((((m141 * m211) + (m142 * m221)) + (m143 * m231)) + (m144 * m241));
		HX_STACK_LINE(57)
		this->rawData[(int)13] = ((((m141 * m212) + (m142 * m222)) + (m143 * m232)) + (m144 * m242));
		HX_STACK_LINE(58)
		this->rawData[(int)14] = ((((m141 * m213) + (m142 * m223)) + (m143 * m233)) + (m144 * m243));
		HX_STACK_LINE(59)
		this->rawData[(int)15] = ((((m141 * m214) + (m142 * m224)) + (m143 * m234)) + (m144 * m244));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix3D_obj,append,(void))

::native::geom::Matrix3D Matrix3D_obj::create2D( Float x,Float y,hx::Null< Float >  __o_scale,hx::Null< Float >  __o_rotation){
Float scale = __o_scale.Default(1);
Float rotation = __o_rotation.Default(0);
	HX_STACK_PUSH("Matrix3D::create2D","native/geom/Matrix3D.hx",103);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(scale,"scale");
	HX_STACK_ARG(rotation,"rotation");
{
		HX_STACK_LINE(105)
		Float theta = (Float((rotation * ::Math_obj::PI)) / Float(180.0));		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(106)
		Float c = ::Math_obj::cos(theta);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(107)
		Float s = ::Math_obj::sin(theta);		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(109)
		return ::native::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add((c * scale)).Add((-(s) * scale)).Add((int)0).Add((int)0).Add((s * scale)).Add((c * scale)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(x).Add(y).Add((int)0).Add((int)1));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,create2D,return )

::native::geom::Matrix3D Matrix3D_obj::createABCD( Float a,Float b,Float c,Float d,Float tx,Float ty){
	HX_STACK_PUSH("Matrix3D::createABCD","native/geom/Matrix3D.hx",119);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(c,"c");
	HX_STACK_ARG(d,"d");
	HX_STACK_ARG(tx,"tx");
	HX_STACK_ARG(ty,"ty");
	HX_STACK_LINE(119)
	return ::native::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add(a).Add(b).Add((int)0).Add((int)0).Add(c).Add(d).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add(tx).Add(ty).Add((int)0).Add((int)1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createABCD,return )

::native::geom::Matrix3D Matrix3D_obj::createOrtho( Float x0,Float x1,Float y0,Float y1,Float zNear,Float zFar){
	HX_STACK_PUSH("Matrix3D::createOrtho","native/geom/Matrix3D.hx",131);
	HX_STACK_ARG(x0,"x0");
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y0,"y0");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(zNear,"zNear");
	HX_STACK_ARG(zFar,"zFar");
	HX_STACK_LINE(133)
	Float sx = (Float(1.0) / Float(((x1 - x0))));		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(134)
	Float sy = (Float(1.0) / Float(((y1 - y0))));		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(135)
	Float sz = (Float(1.0) / Float(((zFar - zNear))));		HX_STACK_VAR(sz,"sz");
	HX_STACK_LINE(137)
	return ::native::geom::Matrix3D_obj::__new(Array_obj< Float >::__new().Add((2.0 * sx)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((2.0 * sy)).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((-2. * sz)).Add((int)0).Add((-(((x0 + x1))) * sx)).Add((-(((y0 + y1))) * sy)).Add((-(((zNear + zFar))) * sz)).Add((int)1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Matrix3D_obj,createOrtho,return )

::native::geom::Matrix3D Matrix3D_obj::getAxisRotation( Float x,Float y,Float z,Float degrees){
	HX_STACK_PUSH("Matrix3D::getAxisRotation","native/geom/Matrix3D.hx",218);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(z,"z");
	HX_STACK_ARG(degrees,"degrees");
	HX_STACK_LINE(220)
	::native::geom::Matrix3D m = ::native::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(222)
	::native::geom::Vector3D a1 = ::native::geom::Vector3D_obj::__new(x,y,z,null());		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(223)
	Float rad = (-(degrees) * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rad,"rad");
	HX_STACK_LINE(224)
	Float c = ::Math_obj::cos(rad);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(225)
	Float s = ::Math_obj::sin(rad);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(226)
	Float t = (1.0 - c);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(228)
	m->rawData[(int)0] = (c + ((a1->x * a1->x) * t));
	HX_STACK_LINE(229)
	m->rawData[(int)5] = (c + ((a1->y * a1->y) * t));
	HX_STACK_LINE(230)
	m->rawData[(int)10] = (c + ((a1->z * a1->z) * t));
	HX_STACK_LINE(232)
	Float tmp1 = ((a1->x * a1->y) * t);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	Float tmp2 = (a1->z * s);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	m->rawData[(int)4] = (tmp1 + tmp2);
	HX_STACK_LINE(235)
	m->rawData[(int)1] = (tmp1 - tmp2);
	HX_STACK_LINE(236)
	tmp1 = ((a1->x * a1->z) * t);
	HX_STACK_LINE(237)
	tmp2 = (a1->y * s);
	HX_STACK_LINE(238)
	m->rawData[(int)8] = (tmp1 - tmp2);
	HX_STACK_LINE(239)
	m->rawData[(int)2] = (tmp1 + tmp2);
	HX_STACK_LINE(240)
	tmp1 = ((a1->y * a1->z) * t);
	HX_STACK_LINE(241)
	tmp2 = (a1->x * s);
	HX_STACK_LINE(242)
	m->rawData[(int)9] = (tmp1 + tmp2);
	HX_STACK_LINE(243)
	m->rawData[(int)6] = (tmp1 - tmp2);
	HX_STACK_LINE(245)
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Matrix3D_obj,getAxisRotation,return )

::native::geom::Matrix3D Matrix3D_obj::interpolate( ::native::geom::Matrix3D thisMat,::native::geom::Matrix3D toMat,Float percent){
	HX_STACK_PUSH("Matrix3D::interpolate","native/geom/Matrix3D.hx",272);
	HX_STACK_ARG(thisMat,"thisMat");
	HX_STACK_ARG(toMat,"toMat");
	HX_STACK_ARG(percent,"percent");
	HX_STACK_LINE(274)
	::native::geom::Matrix3D m = ::native::geom::Matrix3D_obj::__new(null());		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(276)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		while(((_g < (int)16))){
			HX_STACK_LINE(276)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(278)
			m->rawData[i] = (thisMat->rawData->__get(i) + (((toMat->rawData->__get(i) - thisMat->rawData->__get(i))) * percent));
		}
	}
	HX_STACK_LINE(282)
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Matrix3D_obj,interpolate,return )


Matrix3D_obj::Matrix3D_obj()
{
}

void Matrix3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix3D);
	HX_MARK_MEMBER_NAME(rawData,"rawData");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(determinant,"determinant");
	HX_MARK_END_CLASS();
}

void Matrix3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rawData,"rawData");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(determinant,"determinant");
}

Dynamic Matrix3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"prepend") ) { return prepend_dyn(); }
		if (HX_FIELD_EQ(inName,"rawData") ) { return rawData; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"create2D") ) { return create2D_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return inCallProp ? get_position() : position; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transpose") ) { return transpose_dyn(); }
		if (HX_FIELD_EQ(inName,"recompose") ) { return recompose_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createABCD") ) { return createABCD_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createOrtho") ) { return createOrtho_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolate") ) { return interpolate_dyn(); }
		if (HX_FIELD_EQ(inName,"appendScale") ) { return appendScale_dyn(); }
		if (HX_FIELD_EQ(inName,"determinant") ) { return inCallProp ? get_determinant() : determinant; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"prependScale") ) { return prependScale_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"interpolateTo") ) { return interpolateTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendRotation") ) { return appendRotation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getAxisRotation") ) { return getAxisRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_determinant") ) { return get_determinant_dyn(); }
		if (HX_FIELD_EQ(inName,"transformVector") ) { return transformVector_dyn(); }
		if (HX_FIELD_EQ(inName,"prependRotation") ) { return prependRotation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"transformVectors") ) { return transformVectors_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"appendTranslation") ) { return appendTranslation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prependTranslation") ) { return prependTranslation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"deltaTransformVector") ) { return deltaTransformVector_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Matrix3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"rawData") ) { rawData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp) return set_position(inValue);position=inValue.Cast< ::native::geom::Vector3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"determinant") ) { determinant=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("rawData"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("determinant"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create2D"),
	HX_CSTRING("createABCD"),
	HX_CSTRING("createOrtho"),
	HX_CSTRING("getAxisRotation"),
	HX_CSTRING("interpolate"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_position"),
	HX_CSTRING("get_position"),
	HX_CSTRING("get_determinant"),
	HX_CSTRING("transpose"),
	HX_CSTRING("transformVectors"),
	HX_CSTRING("transformVector"),
	HX_CSTRING("recompose"),
	HX_CSTRING("prependTranslation"),
	HX_CSTRING("prependScale"),
	HX_CSTRING("prependRotation"),
	HX_CSTRING("prepend"),
	HX_CSTRING("invert"),
	HX_CSTRING("interpolateTo"),
	HX_CSTRING("identity"),
	HX_CSTRING("deltaTransformVector"),
	HX_CSTRING("decompose"),
	HX_CSTRING("clone"),
	HX_CSTRING("appendTranslation"),
	HX_CSTRING("appendScale"),
	HX_CSTRING("appendRotation"),
	HX_CSTRING("append"),
	HX_CSTRING("rawData"),
	HX_CSTRING("position"),
	HX_CSTRING("determinant"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix3D_obj::__mClass,"__mClass");
};

Class Matrix3D_obj::__mClass;

void Matrix3D_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.geom.Matrix3D"), hx::TCanCast< Matrix3D_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Matrix3D_obj::__boot()
{
}

} // end namespace native
} // end namespace geom
