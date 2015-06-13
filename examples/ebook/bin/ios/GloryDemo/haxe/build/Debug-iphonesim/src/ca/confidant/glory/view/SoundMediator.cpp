#include <hxcpp.h>

#ifndef INCLUDED_ca_confidant_glory_view_SoundMediator
#include <ca/confidant/glory/view/SoundMediator.h>
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
#ifndef INCLUDED_native_media_SoundChannel
#include <native/media/SoundChannel.h>
#endif
#ifndef INCLUDED_native_media_SoundTransform
#include <native/media/SoundTransform.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_IMediator
#include <org/puremvc/haxe/interfaces/IMediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#include <org/puremvc/haxe/interfaces/INotification.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotifier
#include <org/puremvc/haxe/interfaces/INotifier.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_mediator_Mediator
#include <org/puremvc/haxe/patterns/mediator/Mediator.h>
#endif
#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notifier
#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#endif
namespace ca{
namespace confidant{
namespace glory{
namespace view{

Void SoundMediator_obj::__construct(::String id,::native::media::Sound theSound)
{
HX_STACK_PUSH("SoundMediator::new","ca/confidant/glory/view/SoundMediator.hx",18);
{
	HX_STACK_LINE(19)
	super::__construct(id,theSound);
	HX_STACK_LINE(20)
	this->mySound = theSound;
}
;
	return null();
}

SoundMediator_obj::~SoundMediator_obj() { }

Dynamic SoundMediator_obj::__CreateEmpty() { return  new SoundMediator_obj; }
hx::ObjectPtr< SoundMediator_obj > SoundMediator_obj::__new(::String id,::native::media::Sound theSound)
{  hx::ObjectPtr< SoundMediator_obj > result = new SoundMediator_obj();
	result->__construct(id,theSound);
	return result;}

Dynamic SoundMediator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundMediator_obj > result = new SoundMediator_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::native::media::Sound SoundMediator_obj::sound( ){
	HX_STACK_PUSH("SoundMediator::sound","ca/confidant/glory/view/SoundMediator.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_LINE(56)
	return this->mySound;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundMediator_obj,sound,return )

Void SoundMediator_obj::handleNotification( ::org::puremvc::haxe::interfaces::INotification note){
{
		HX_STACK_PUSH("SoundMediator::handleNotification","ca/confidant/glory/view/SoundMediator.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_ARG(note,"note");
		HX_STACK_LINE(38)
		::String _switch_1 = (note->getName());
		if (  ( _switch_1==HX_CSTRING("playSound"))){
			HX_STACK_LINE(41)
			if (((this->mediatorName == note->getBody()))){
				HX_STACK_LINE(43)
				if (((this->sc != null()))){
					HX_STACK_LINE(45)
					this->sc->stop();
					HX_STACK_LINE(46)
					this->sc = null();
				}
				else{
					HX_STACK_LINE(47)
					this->sc = this->mySound->play(null(),null(),null());
				}
			}
		}
	}
return null();
}


Array< ::String > SoundMediator_obj::listNotificationInterests( ){
	HX_STACK_PUSH("SoundMediator::listNotificationInterests","ca/confidant/glory/view/SoundMediator.hx",31);
	HX_STACK_THIS(this);
	HX_STACK_LINE(31)
	return Array_obj< ::String >::__new().Add(HX_CSTRING("playSound"));
}


Void SoundMediator_obj::addListeners( ){
{
		HX_STACK_PUSH("SoundMediator::addListeners","ca/confidant/glory/view/SoundMediator.hx",25);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundMediator_obj,addListeners,(void))


SoundMediator_obj::SoundMediator_obj()
{
}

void SoundMediator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundMediator);
	HX_MARK_MEMBER_NAME(sc,"sc");
	HX_MARK_MEMBER_NAME(mySound,"mySound");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundMediator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sc,"sc");
	HX_VISIT_MEMBER_NAME(mySound,"mySound");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SoundMediator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sc") ) { return sc; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return sound_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mySound") ) { return mySound; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addListeners") ) { return addListeners_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleNotification") ) { return handleNotification_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listNotificationInterests") ) { return listNotificationInterests_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundMediator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sc") ) { sc=inValue.Cast< ::native::media::SoundChannel >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mySound") ) { mySound=inValue.Cast< ::native::media::Sound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundMediator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sc"));
	outFields->push(HX_CSTRING("mySound"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sound"),
	HX_CSTRING("handleNotification"),
	HX_CSTRING("listNotificationInterests"),
	HX_CSTRING("addListeners"),
	HX_CSTRING("sc"),
	HX_CSTRING("mySound"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundMediator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundMediator_obj::__mClass,"__mClass");
};

Class SoundMediator_obj::__mClass;

void SoundMediator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ca.confidant.glory.view.SoundMediator"), hx::TCanCast< SoundMediator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SoundMediator_obj::__boot()
{
}

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace view
