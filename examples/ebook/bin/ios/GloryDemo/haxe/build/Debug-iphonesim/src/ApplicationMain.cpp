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
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_media_Sound
#include <native/media/Sound.h>
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
				if (((bool((orientation == ::native::display::Stage_obj::OrientationLandscapeLeft)) || bool((orientation == ::native::display::Stage_obj::OrientationLandscapeRight))))){
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
		::native::display::Stage_obj::shouldRotateInterface =  Dynamic(new _Function_1_1());

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		Void run(){
			HX_STACK_PUSH("*::_Function_1_2","ApplicationMain.hx",21);
			{
				HX_STACK_LINE(22)
				{
				}
				HX_STACK_LINE(30)
				::nme::Lib_obj::get_current()->get_stage()->addEventListener(::native::events::Event_obj::RESIZE,::ApplicationMain_obj::initialize_dyn(),null(),null(),null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(20)
		::nme::Lib_obj::create( Dynamic(new _Function_1_2()),(int)960,(int)640,(int)30,(int)16774882,(int((int((int((int(::nme::Lib_obj::HARDWARE) | int((int)0))) | int((int)0))) | int((int)0))) | int((int)0)),HX_CSTRING("Glory Framework Demo"),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Void ApplicationMain_obj::initialize( ::native::events::Event event){
{
		HX_STACK_PUSH("ApplicationMain::initialize","ApplicationMain.hx",47);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(48)
		::nme::Lib_obj::get_current()->get_stage()->removeEventListener(::native::events::Event_obj::RESIZE,::ApplicationMain_obj::initialize_dyn(),null());
		HX_STACK_LINE(50)
		bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = ::Type_obj::getClassFields(hx::ClassOf< ::Main >());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			while(((_g < _g1->length))){
				HX_STACK_LINE(52)
				::String methodName = _g1->__get(_g);		HX_STACK_VAR(methodName,"methodName");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(54)
				if (((methodName == HX_CSTRING("main")))){
					HX_STACK_LINE(56)
					hasMain = true;
					HX_STACK_LINE(57)
					break;
				}
			}
		}
		HX_STACK_LINE(61)
		if ((hasMain)){
			HX_STACK_LINE(62)
			::Reflect_obj::callMethod(hx::ClassOf< ::Main >(),::Reflect_obj::field(hx::ClassOf< ::Main >(),HX_CSTRING("main")),Dynamic( Array_obj<Dynamic>::__new()));
		}
		else{
			HX_STACK_LINE(66)
			::nme::Lib_obj::get_current()->addChild(hx::TCast< native::display::DisplayObject >::cast(::Type_obj::createInstance(hx::ClassOf< ::Main >(),Dynamic( Array_obj<Dynamic>::__new()))));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,initialize,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_STACK_PUSH("ApplicationMain::getAsset","ApplicationMain.hx",73);
	HX_STACK_ARG(inName,"inName");
	HX_STACK_LINE(75)
	if (((inName == HX_CSTRING("assets/closeX.svg")))){
		HX_STACK_LINE(76)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/closeX.svg"));
	}
	HX_STACK_LINE(82)
	if (((inName == HX_CSTRING("assets/config.xml")))){
		HX_STACK_LINE(83)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/config.xml"));
	}
	HX_STACK_LINE(89)
	if (((inName == HX_CSTRING("assets/duck.svg")))){
		HX_STACK_LINE(90)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/duck.svg"));
	}
	HX_STACK_LINE(96)
	if (((inName == HX_CSTRING("assets/easyXML.jpg")))){
		HX_STACK_LINE(97)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/easyXML.jpg"),null());
	}
	HX_STACK_LINE(103)
	if (((inName == HX_CSTRING("assets/heres-the-deal.jpg")))){
		HX_STACK_LINE(104)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/heres-the-deal.jpg"),null());
	}
	HX_STACK_LINE(110)
	if (((inName == HX_CSTRING("assets/nav/bHome.png")))){
		HX_STACK_LINE(111)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/bHome.png"),null());
	}
	HX_STACK_LINE(117)
	if (((inName == HX_CSTRING("assets/nav/bLeft.png")))){
		HX_STACK_LINE(118)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/bLeft.png"),null());
	}
	HX_STACK_LINE(124)
	if (((inName == HX_CSTRING("assets/nav/bOptions.png")))){
		HX_STACK_LINE(125)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/bOptions.png"),null());
	}
	HX_STACK_LINE(131)
	if (((inName == HX_CSTRING("assets/nav/bRight.png")))){
		HX_STACK_LINE(132)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/bRight.png"),null());
	}
	HX_STACK_LINE(138)
	if (((inName == HX_CSTRING("assets/nav/close.png")))){
		HX_STACK_LINE(139)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/close.png"),null());
	}
	HX_STACK_LINE(145)
	if (((inName == HX_CSTRING("assets/nav/panLeft.png")))){
		HX_STACK_LINE(146)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/panLeft.png"),null());
	}
	HX_STACK_LINE(152)
	if (((inName == HX_CSTRING("assets/nav/panRight.png")))){
		HX_STACK_LINE(153)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/nav/panRight.png"),null());
	}
	HX_STACK_LINE(159)
	if (((inName == HX_CSTRING("assets/nme.svg")))){
		HX_STACK_LINE(160)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/nme.svg"));
	}
	HX_STACK_LINE(166)
	if (((inName == HX_CSTRING("assets/options/actor_0000_background.png")))){
		HX_STACK_LINE(167)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/options/actor_0000_background.png"),null());
	}
	HX_STACK_LINE(173)
	if (((inName == HX_CSTRING("assets/options/actor_0001_duck.png")))){
		HX_STACK_LINE(174)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/options/actor_0001_duck.png"),null());
	}
	HX_STACK_LINE(180)
	if (((inName == HX_CSTRING("assets/options/actor_0002_home.png")))){
		HX_STACK_LINE(181)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/options/actor_0002_home.png"),null());
	}
	HX_STACK_LINE(187)
	if (((inName == HX_CSTRING("assets/options/actor_0003_cow.png")))){
		HX_STACK_LINE(188)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/options/actor_0003_cow.png"),null());
	}
	HX_STACK_LINE(194)
	if (((inName == HX_CSTRING("assets/options/actor_0004_easyXML.png")))){
		HX_STACK_LINE(195)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/options/actor_0004_easyXML.png"),null());
	}
	HX_STACK_LINE(201)
	if (((inName == HX_CSTRING("assets/options/actor_0005_limerick.png")))){
		HX_STACK_LINE(202)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/options/actor_0005_limerick.png"),null());
	}
	HX_STACK_LINE(208)
	if (((inName == HX_CSTRING("assets/options/choose.png")))){
		HX_STACK_LINE(209)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/options/choose.png"),null());
	}
	HX_STACK_LINE(215)
	if (((inName == HX_CSTRING("assets/p1/limerickPCM.wav")))){
		HX_STACK_LINE(216)
		return ::nme::installer::Assets_obj::getSound(HX_CSTRING("assets/p1/limerickPCM.wav"));
	}
	HX_STACK_LINE(222)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0000_bg.jpg")))){
		HX_STACK_LINE(223)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0000_bg.jpg"),null());
	}
	HX_STACK_LINE(229)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0001_skin.png")))){
		HX_STACK_LINE(230)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0001_skin.png"),null());
	}
	HX_STACK_LINE(236)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0002_hose.png")))){
		HX_STACK_LINE(237)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0002_hose.png"),null());
	}
	HX_STACK_LINE(243)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0003_pants.png")))){
		HX_STACK_LINE(244)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0003_pants.png"),null());
	}
	HX_STACK_LINE(250)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0004_flameshoe.png")))){
		HX_STACK_LINE(251)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0004_flameshoe.png"),null());
	}
	HX_STACK_LINE(257)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0005_shoe.png")))){
		HX_STACK_LINE(258)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0005_shoe.png"),null());
	}
	HX_STACK_LINE(264)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0006_shirt.png")))){
		HX_STACK_LINE(265)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0006_shirt.png"),null());
	}
	HX_STACK_LINE(271)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0007_truck.png")))){
		HX_STACK_LINE(272)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0007_truck.png"),null());
	}
	HX_STACK_LINE(278)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0008_firemen.png")))){
		HX_STACK_LINE(279)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0008_firemen.png"),null());
	}
	HX_STACK_LINE(285)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0009_can.png")))){
		HX_STACK_LINE(286)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0009_can.png"),null());
	}
	HX_STACK_LINE(292)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0010_bw.png")))){
		HX_STACK_LINE(293)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0010_bw.png"),null());
	}
	HX_STACK_LINE(299)
	if (((inName == HX_CSTRING("assets/p1/pageObject_0011_text.png")))){
		HX_STACK_LINE(300)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/p1/pageObject_0011_text.png"),null());
	}
	HX_STACK_LINE(306)
	if (((inName == HX_CSTRING("assets/speaker.png")))){
		HX_STACK_LINE(307)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/speaker.png"),null());
	}
	HX_STACK_LINE(313)
	if (((inName == HX_CSTRING("assets/title/star.svg")))){
		HX_STACK_LINE(314)
		return ::nme::installer::Assets_obj::getText(HX_CSTRING("assets/title/star.svg"));
	}
	HX_STACK_LINE(320)
	if (((inName == HX_CSTRING("assets/title/title.jpg")))){
		HX_STACK_LINE(321)
		return ::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("assets/title/title.jpg"),null());
	}
	HX_STACK_LINE(327)
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
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
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
	HX_CSTRING("initialize"),
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

