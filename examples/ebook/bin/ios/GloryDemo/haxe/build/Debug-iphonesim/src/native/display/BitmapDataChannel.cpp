#include <hxcpp.h>

#ifndef INCLUDED_native_display_BitmapDataChannel
#include <native/display/BitmapDataChannel.h>
#endif
namespace native{
namespace display{

Void BitmapDataChannel_obj::__construct()
{
	return null();
}

BitmapDataChannel_obj::~BitmapDataChannel_obj() { }

Dynamic BitmapDataChannel_obj::__CreateEmpty() { return  new BitmapDataChannel_obj; }
hx::ObjectPtr< BitmapDataChannel_obj > BitmapDataChannel_obj::__new()
{  hx::ObjectPtr< BitmapDataChannel_obj > result = new BitmapDataChannel_obj();
	result->__construct();
	return result;}

Dynamic BitmapDataChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapDataChannel_obj > result = new BitmapDataChannel_obj();
	result->__construct();
	return result;}

int BitmapDataChannel_obj::ALPHA;

int BitmapDataChannel_obj::BLUE;

int BitmapDataChannel_obj::GREEN;

int BitmapDataChannel_obj::RED;


BitmapDataChannel_obj::BitmapDataChannel_obj()
{
}

void BitmapDataChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapDataChannel);
	HX_MARK_END_CLASS();
}

void BitmapDataChannel_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic BitmapDataChannel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RED") ) { return RED; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BLUE") ) { return BLUE; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ALPHA") ) { return ALPHA; }
		if (HX_FIELD_EQ(inName,"GREEN") ) { return GREEN; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapDataChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RED") ) { RED=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BLUE") ) { BLUE=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ALPHA") ) { ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREEN") ) { GREEN=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapDataChannel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ALPHA"),
	HX_CSTRING("BLUE"),
	HX_CSTRING("GREEN"),
	HX_CSTRING("RED"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(BitmapDataChannel_obj::RED,"RED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(BitmapDataChannel_obj::RED,"RED");
};

Class BitmapDataChannel_obj::__mClass;

void BitmapDataChannel_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.BitmapDataChannel"), hx::TCanCast< BitmapDataChannel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapDataChannel_obj::__boot()
{
	ALPHA= (int)8;
	BLUE= (int)4;
	GREEN= (int)2;
	RED= (int)1;
}

} // end namespace native
} // end namespace display
