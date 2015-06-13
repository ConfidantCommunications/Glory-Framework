#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_native_media_SoundLoaderContext
#include <native/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_native_net_URLRequest
#include <native/net/URLRequest.h>
#endif
#ifndef INCLUDED_native_text_Font
#include <native/text/Font.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace nme{
namespace installer{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::Hash Assets_obj::cachedBitmapData;

bool Assets_obj::initialized;

::Hash Assets_obj::resourceNames;

::Hash Assets_obj::resourceTypes;

Void Assets_obj::initialize( ){
{
		HX_STACK_PUSH("Assets::initialize","nme/installer/Assets.hx",26);
		HX_STACK_LINE(26)
		if ((!(::nme::installer::Assets_obj::initialized))){
			HX_STACK_LINE(30)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/closeX.svg"),HX_CSTRING("assets_closex_svg"));
			HX_STACK_LINE(31)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/closeX.svg"),HX_CSTRING("text"));
			HX_STACK_LINE(32)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/config.xml"),HX_CSTRING("assets_config_xml"));
			HX_STACK_LINE(33)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/config.xml"),HX_CSTRING("text"));
			HX_STACK_LINE(34)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/duck.svg"),HX_CSTRING("assets_duck_svg"));
			HX_STACK_LINE(35)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/duck.svg"),HX_CSTRING("text"));
			HX_STACK_LINE(36)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/easyXML.jpg"),HX_CSTRING("assets_easyxml_jpg"));
			HX_STACK_LINE(37)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/easyXML.jpg"),HX_CSTRING("image"));
			HX_STACK_LINE(38)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/heres-the-deal.jpg"),HX_CSTRING("assets_heres_the_deal_jpg"));
			HX_STACK_LINE(39)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/heres-the-deal.jpg"),HX_CSTRING("image"));
			HX_STACK_LINE(40)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/nav/bHome.png"),HX_CSTRING("assets_nav_bhome_png"));
			HX_STACK_LINE(41)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/nav/bHome.png"),HX_CSTRING("image"));
			HX_STACK_LINE(42)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/nav/bLeft.png"),HX_CSTRING("assets_nav_bleft_png"));
			HX_STACK_LINE(43)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/nav/bLeft.png"),HX_CSTRING("image"));
			HX_STACK_LINE(44)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/nav/bOptions.png"),HX_CSTRING("assets_nav_boptions_png"));
			HX_STACK_LINE(45)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/nav/bOptions.png"),HX_CSTRING("image"));
			HX_STACK_LINE(46)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/nav/bRight.png"),HX_CSTRING("assets_nav_bright_png"));
			HX_STACK_LINE(47)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/nav/bRight.png"),HX_CSTRING("image"));
			HX_STACK_LINE(48)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/nav/close.png"),HX_CSTRING("assets_nav_close_png"));
			HX_STACK_LINE(49)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/nav/close.png"),HX_CSTRING("image"));
			HX_STACK_LINE(50)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/nav/panLeft.png"),HX_CSTRING("assets_nav_panleft_png"));
			HX_STACK_LINE(51)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/nav/panLeft.png"),HX_CSTRING("image"));
			HX_STACK_LINE(52)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/nav/panRight.png"),HX_CSTRING("assets_nav_panright_png"));
			HX_STACK_LINE(53)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/nav/panRight.png"),HX_CSTRING("image"));
			HX_STACK_LINE(54)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/nme.svg"),HX_CSTRING("assets_nme_svg"));
			HX_STACK_LINE(55)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/nme.svg"),HX_CSTRING("text"));
			HX_STACK_LINE(56)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/options/actor_0000_background.png"),HX_CSTRING("assets_options_actor_0000_background_png"));
			HX_STACK_LINE(57)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/options/actor_0000_background.png"),HX_CSTRING("image"));
			HX_STACK_LINE(58)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/options/actor_0001_duck.png"),HX_CSTRING("assets_options_actor_0001_duck_png"));
			HX_STACK_LINE(59)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/options/actor_0001_duck.png"),HX_CSTRING("image"));
			HX_STACK_LINE(60)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/options/actor_0002_home.png"),HX_CSTRING("assets_options_actor_0002_home_png"));
			HX_STACK_LINE(61)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/options/actor_0002_home.png"),HX_CSTRING("image"));
			HX_STACK_LINE(62)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/options/actor_0003_cow.png"),HX_CSTRING("assets_options_actor_0003_cow_png"));
			HX_STACK_LINE(63)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/options/actor_0003_cow.png"),HX_CSTRING("image"));
			HX_STACK_LINE(64)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/options/actor_0004_easyXML.png"),HX_CSTRING("assets_options_actor_0004_easyxml_png"));
			HX_STACK_LINE(65)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/options/actor_0004_easyXML.png"),HX_CSTRING("image"));
			HX_STACK_LINE(66)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/options/actor_0005_limerick.png"),HX_CSTRING("assets_options_actor_0005_limerick_png"));
			HX_STACK_LINE(67)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/options/actor_0005_limerick.png"),HX_CSTRING("image"));
			HX_STACK_LINE(68)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/options/choose.png"),HX_CSTRING("assets_options_choose_png"));
			HX_STACK_LINE(69)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/options/choose.png"),HX_CSTRING("image"));
			HX_STACK_LINE(70)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/limerickPCM.wav"),HX_CSTRING("assets_p1_limerickpcm_wav"));
			HX_STACK_LINE(71)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/limerickPCM.wav"),HX_CSTRING("sound"));
			HX_STACK_LINE(72)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0000_bg.jpg"),HX_CSTRING("assets_p1_pageobject_0000_bg_jpg"));
			HX_STACK_LINE(73)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0000_bg.jpg"),HX_CSTRING("image"));
			HX_STACK_LINE(74)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0001_skin.png"),HX_CSTRING("assets_p1_pageobject_0001_skin_png"));
			HX_STACK_LINE(75)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0001_skin.png"),HX_CSTRING("image"));
			HX_STACK_LINE(76)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0002_hose.png"),HX_CSTRING("assets_p1_pageobject_0002_hose_png"));
			HX_STACK_LINE(77)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0002_hose.png"),HX_CSTRING("image"));
			HX_STACK_LINE(78)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0003_pants.png"),HX_CSTRING("assets_p1_pageobject_0003_pants_png"));
			HX_STACK_LINE(79)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0003_pants.png"),HX_CSTRING("image"));
			HX_STACK_LINE(80)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0004_flameshoe.png"),HX_CSTRING("assets_p1_pageobject_0004_flameshoe_png"));
			HX_STACK_LINE(81)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0004_flameshoe.png"),HX_CSTRING("image"));
			HX_STACK_LINE(82)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0005_shoe.png"),HX_CSTRING("assets_p1_pageobject_0005_shoe_png"));
			HX_STACK_LINE(83)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0005_shoe.png"),HX_CSTRING("image"));
			HX_STACK_LINE(84)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0006_shirt.png"),HX_CSTRING("assets_p1_pageobject_0006_shirt_png"));
			HX_STACK_LINE(85)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0006_shirt.png"),HX_CSTRING("image"));
			HX_STACK_LINE(86)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0007_truck.png"),HX_CSTRING("assets_p1_pageobject_0007_truck_png"));
			HX_STACK_LINE(87)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0007_truck.png"),HX_CSTRING("image"));
			HX_STACK_LINE(88)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0008_firemen.png"),HX_CSTRING("assets_p1_pageobject_0008_firemen_png"));
			HX_STACK_LINE(89)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0008_firemen.png"),HX_CSTRING("image"));
			HX_STACK_LINE(90)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0009_can.png"),HX_CSTRING("assets_p1_pageobject_0009_can_png"));
			HX_STACK_LINE(91)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0009_can.png"),HX_CSTRING("image"));
			HX_STACK_LINE(92)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0010_bw.png"),HX_CSTRING("assets_p1_pageobject_0010_bw_png"));
			HX_STACK_LINE(93)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0010_bw.png"),HX_CSTRING("image"));
			HX_STACK_LINE(94)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/p1/pageObject_0011_text.png"),HX_CSTRING("assets_p1_pageobject_0011_text_png"));
			HX_STACK_LINE(95)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/p1/pageObject_0011_text.png"),HX_CSTRING("image"));
			HX_STACK_LINE(96)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/speaker.png"),HX_CSTRING("assets_speaker_png"));
			HX_STACK_LINE(97)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/speaker.png"),HX_CSTRING("image"));
			HX_STACK_LINE(98)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/title/star.svg"),HX_CSTRING("assets_title_star_svg"));
			HX_STACK_LINE(99)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/title/star.svg"),HX_CSTRING("text"));
			HX_STACK_LINE(100)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("assets/title/title.jpg"),HX_CSTRING("assets_title_title_jpg"));
			HX_STACK_LINE(101)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("assets/title/title.jpg"),HX_CSTRING("image"));
			HX_STACK_LINE(103)
			::nme::installer::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::native::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","nme/installer/Assets.hx",110);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(112)
		::nme::installer::Assets_obj::initialize();
		HX_STACK_LINE(114)
		if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("image")))))){
			HX_STACK_LINE(114)
			if (((bool(useCache) && bool(::nme::installer::Assets_obj::cachedBitmapData->exists(id))))){
				HX_STACK_LINE(116)
				return ::nme::installer::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_STACK_LINE(122)
				::native::display::BitmapData data = ::native::display::BitmapData_obj::load(::nme::installer::Assets_obj::resourceNames->get(id),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(124)
				if ((useCache)){
					HX_STACK_LINE(124)
					::nme::installer::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_STACK_LINE(130)
				return data;
			}
		}
		else{
			HX_STACK_LINE(136)
			::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),136,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
			HX_STACK_LINE(138)
			return null();
		}
		HX_STACK_LINE(114)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::native::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","nme/installer/Assets.hx",145);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(147)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(149)
	if ((::nme::installer::Assets_obj::resourceNames->exists(id))){
		HX_STACK_LINE(149)
		return ::native::utils::ByteArray_obj::readFile(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(155)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),155,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBytes")));
		HX_STACK_LINE(157)
		return null();
	}
	HX_STACK_LINE(149)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::native::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","nme/installer/Assets.hx",164);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(166)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(168)
	if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("font")))))){
		HX_STACK_LINE(168)
		return ::native::text::Font_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(174)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),174,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getFont")));
		HX_STACK_LINE(176)
		return null();
	}
	HX_STACK_LINE(168)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::String Assets_obj::getResourceName( ::String id){
	HX_STACK_PUSH("Assets::getResourceName","nme/installer/Assets.hx",183);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(185)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(187)
	return ::nme::installer::Assets_obj::resourceNames->get(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getResourceName,return )

::native::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","nme/installer/Assets.hx",192);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(194)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(196)
	if ((::nme::installer::Assets_obj::resourceTypes->exists(id))){
		HX_STACK_LINE(196)
		if (((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("sound")))){
			HX_STACK_LINE(198)
			return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),false);
		}
		else{
			HX_STACK_LINE(202)
			if (((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("music")))){
				HX_STACK_LINE(202)
				return ::native::media::Sound_obj::__new(::native::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),true);
			}
		}
	}
	HX_STACK_LINE(210)
	::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),210,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getSound")));
	HX_STACK_LINE(212)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","nme/installer/Assets.hx",217);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(219)
	::native::utils::ByteArray bytes = ::nme::installer::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(221)
	if (((bytes == null()))){
		HX_STACK_LINE(221)
		return null();
	}
	else{
		HX_STACK_LINE(225)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(221)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { return resourceNames; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { return resourceTypes; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getResourceName") ) { return getResourceName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { return cachedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { resourceNames=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { resourceTypes=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { cachedBitmapData=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cachedBitmapData"),
	HX_CSTRING("initialized"),
	HX_CSTRING("resourceNames"),
	HX_CSTRING("resourceTypes"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getResourceName"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_VISIT_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.installer.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Assets_obj::__boot()
{
	cachedBitmapData= ::Hash_obj::__new();
	initialized= false;
	resourceNames= ::Hash_obj::__new();
	resourceTypes= ::Hash_obj::__new();
}

} // end namespace nme
} // end namespace installer
