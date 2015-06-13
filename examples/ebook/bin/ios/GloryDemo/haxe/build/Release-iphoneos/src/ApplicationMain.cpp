#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ca_confidant_glory_GloryFrameworkApp
#include <ca/confidant/glory/GloryFrameworkApp.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Void ApplicationMain_obj::main( ){
{
		HX_STACK_PUSH("ApplicationMain::main","ApplicationMain.hx",5);
		HX_STACK_LINE(6)
		::nme::Lib_obj::setPackage(HX_CSTRING("Confidant Communications"),HX_CSTRING("GloryDemo"),HX_CSTRING("ca.confidant.gloryDemo"),HX_CSTRING("1.0.0"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		bool run(int orientation){
			HX_STACK_PUSH("*::_Function_1_1","ApplicationMain.hx",10);
			HX_STACK_ARG(orientation,"orientation");
			{
				HX_STACK_LINE(12)
				if (((bool((orientation == ::neash::display::Stage_obj::OrientationLandscapeLeft)) || bool((orientation == ::neash::display::Stage_obj::OrientationLandscapeRight))))){
					HX_STACK_LINE(13)
					return true;
				}
				HX_STACK_LINE(16)
				return false;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(9)
		::neash::display::Stage_obj::shouldRotateInterface =  Dynamic(new _Function_1_1());

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		Void run(){
			HX_STACK_PUSH("*::_Function_1_2","ApplicationMain.hx",21);
			{
				HX_STACK_LINE(22)
				{
				}
				HX_STACK_LINE(28)
				bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::Main >());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(30)
					while(((_g < _g1->length))){
						HX_STACK_LINE(30)
						::String methodName = _g1->__get(_g);		HX_STACK_VAR(methodName,"methodName");
						HX_STACK_LINE(30)
						++(_g);
						HX_STACK_LINE(32)
						if (((methodName == HX_CSTRING("main")))){
							HX_STACK_LINE(34)
							hasMain = true;
							HX_STACK_LINE(35)
							break;
						}
					}
				}
				HX_STACK_LINE(39)
				if ((hasMain)){
					HX_STACK_LINE(40)
					::Reflect_obj::callMethod(hx::ClassOf< ::Main >(),::Reflect_obj::field(hx::ClassOf< ::Main >(),HX_CSTRING("main")),Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(44)
					::nme::Lib_obj::nmeGetCurrent()->addChild(hx::TCast< neash::display::DisplayObject >::cast(::Type_obj::createInstance(hx::ClassOf< ::Main >(),Dynamic( Array_obj<Dynamic>::__new()))));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(20)
		::nme::Lib_obj::create( Dynamic(new _Function_1_2()),(int)960,(int)640,(int)30,(int)16774882,(int((int((int(::nme::Lib_obj::HARDWARE) | int((int)0))) | int((int)0))) | int((int)0)),HX_CSTRING("Glory Framework Demo"),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_STACK_PUSH("ApplicationMain::getAsset","ApplicationMain.hx",62);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(64)
	if (((inName == HX_CSTRING("assets/config.xml")))){
		HX_STACK_LINE(65)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/config.xml"));
	}
	HX_STACK_LINE(71)
	if (((inName == HX_CSTRING("assets/nav/bHome.png")))){
		HX_STACK_LINE(72)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/bHome.png"),null());
	}
	HX_STACK_LINE(78)
	if (((inName == HX_CSTRING("assets/nav/bLeft.png")))){
		HX_STACK_LINE(79)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/bLeft.png"),null());
	}
	HX_STACK_LINE(85)
	if (((inName == HX_CSTRING("assets/nav/bOptions.png")))){
		HX_STACK_LINE(86)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/bOptions.png"),null());
	}
	HX_STACK_LINE(92)
	if (((inName == HX_CSTRING("assets/nav/bRight.png")))){
		HX_STACK_LINE(93)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/bRight.png"),null());
	}
	HX_STACK_LINE(99)
	if (((inName == HX_CSTRING("assets/nav/close.png")))){
		HX_STACK_LINE(100)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/close.png"),null());
	}
	HX_STACK_LINE(106)
	if (((inName == HX_CSTRING("assets/nav/panLeft.png")))){
		HX_STACK_LINE(107)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/panLeft.png"),null());
	}
	HX_STACK_LINE(113)
	if (((inName == HX_CSTRING("assets/nav/panRight.png")))){
		HX_STACK_LINE(114)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/panRight.png"),null());
	}
	HX_STACK_LINE(120)
	if (((inName == HX_CSTRING("assets/nme.svg")))){
		HX_STACK_LINE(121)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/nme.svg"));
	}
	HX_STACK_LINE(127)
	if (((inName == HX_CSTRING("assets/options/options.jpg")))){
		HX_STACK_LINE(128)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/options/options.jpg"),null());
	}
	HX_STACK_LINE(134)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0000_bg.jpg")))){
		HX_STACK_LINE(135)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0000_bg.jpg"),null());
	}
	HX_STACK_LINE(141)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0001_skin.png")))){
		HX_STACK_LINE(142)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0001_skin.png"),null());
	}
	HX_STACK_LINE(148)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0002_hose.png")))){
		HX_STACK_LINE(149)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0002_hose.png"),null());
	}
	HX_STACK_LINE(155)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0003_pants.png")))){
		HX_STACK_LINE(156)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0003_pants.png"),null());
	}
	HX_STACK_LINE(162)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0004_flameshoe.png")))){
		HX_STACK_LINE(163)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0004_flameshoe.png"),null());
	}
	HX_STACK_LINE(169)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0005_shoe.png")))){
		HX_STACK_LINE(170)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0005_shoe.png"),null());
	}
	HX_STACK_LINE(176)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0006_shirt.png")))){
		HX_STACK_LINE(177)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0006_shirt.png"),null());
	}
	HX_STACK_LINE(183)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0007_truck.png")))){
		HX_STACK_LINE(184)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0007_truck.png"),null());
	}
	HX_STACK_LINE(190)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0008_firemen.png")))){
		HX_STACK_LINE(191)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0008_firemen.png"),null());
	}
	HX_STACK_LINE(197)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0009_can.png")))){
		HX_STACK_LINE(198)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0009_can.png"),null());
	}
	HX_STACK_LINE(204)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0010_bw.png")))){
		HX_STACK_LINE(205)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0010_bw.png"),null());
	}
	HX_STACK_LINE(211)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0011_text.png")))){
		HX_STACK_LINE(212)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0011_text.png"),null());
	}
	HX_STACK_LINE(218)
	if (((inName == HX_CSTRING("assets/p2/actor1_bw.png")))){
		HX_STACK_LINE(219)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p2/actor1_bw.png"),null());
	}
	HX_STACK_LINE(225)
	if (((inName == HX_CSTRING("assets/p2/actor1_clr.png")))){
		HX_STACK_LINE(226)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p2/actor1_clr.png"),null());
	}
	HX_STACK_LINE(232)
	if (((inName == HX_CSTRING("assets/p2/p2a.jpg")))){
		HX_STACK_LINE(233)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p2/p2a.jpg"),null());
	}
	HX_STACK_LINE(239)
	if (((inName == HX_CSTRING("assets/p2/p2b.jpg")))){
		HX_STACK_LINE(240)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p2/p2b.jpg"),null());
	}
	HX_STACK_LINE(246)
	if (((inName == HX_CSTRING("assets/title/star.svg")))){
		HX_STACK_LINE(247)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/title/star.svg"));
	}
	HX_STACK_LINE(253)
	if (((inName == HX_CSTRING("assets/title/title.jpg")))){
		HX_STACK_LINE(254)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/title/title.jpg"),null());
	}
	HX_STACK_LINE(260)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,getAsset,return )


ApplicationMain_obj::ApplicationMain_obj()
{
}

void ApplicationMain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationMain);
	HX_MARK_END_CLASS();
}

void ApplicationMain_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	HX_CSTRING("getAsset"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ApplicationMain_obj::__boot()
{
}

