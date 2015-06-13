#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_native_events_ErrorEvent
#include <native/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_EventPhase
#include <native/events/EventPhase.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IOErrorEvent
#include <native/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_native_events_Listener
#include <native/events/Listener.h>
#endif
#ifndef INCLUDED_native_events_TextEvent
#include <native/events/TextEvent.h>
#endif
#ifndef INCLUDED_native_utils_WeakRef
#include <native/utils/WeakRef.h>
#endif
namespace native{
namespace events{

Void EventDispatcher_obj::__construct(::native::events::IEventDispatcher target)
{
HX_STACK_PUSH("EventDispatcher::new","native/events/EventDispatcher.hx",16);
{
	HX_STACK_LINE(18)
	this->nmeTarget = (  (((target == null()))) ? ::native::events::IEventDispatcher(hx::ObjectPtr<OBJ_>(this)) : ::native::events::IEventDispatcher(target) );
	HX_STACK_LINE(19)
	this->nmeEventMap = null();
}
;
	return null();
}

EventDispatcher_obj::~EventDispatcher_obj() { }

Dynamic EventDispatcher_obj::__CreateEmpty() { return  new EventDispatcher_obj; }
hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::native::events::IEventDispatcher target)
{  hx::ObjectPtr< EventDispatcher_obj > result = new EventDispatcher_obj();
	result->__construct(target);
	return result;}

Dynamic EventDispatcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventDispatcher_obj > result = new EventDispatcher_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *EventDispatcher_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::native::events::IEventDispatcher_obj)) return operator ::native::events::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

bool EventDispatcher_obj::willTrigger( ::String type){
	HX_STACK_PUSH("EventDispatcher::willTrigger","native/events/EventDispatcher.hx",165);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(167)
	if (((this->nmeEventMap == null()))){
		HX_STACK_LINE(168)
		return false;
	}
	HX_STACK_LINE(170)
	return this->nmeEventMap->exists(type);
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

::String EventDispatcher_obj::toString( ){
	HX_STACK_PUSH("EventDispatcher::toString","native/events/EventDispatcher.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(158)
	return ((HX_CSTRING("[object ") + ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)))) + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

Void EventDispatcher_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_PUSH("EventDispatcher::removeEventListener","native/events/EventDispatcher.hx",130);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(capture,"capture");
{
		HX_STACK_LINE(132)
		if (((this->nmeEventMap == null()))){
			HX_STACK_LINE(133)
			return null();
		}
		HX_STACK_LINE(135)
		if ((!(this->nmeEventMap->exists(type)))){
			HX_STACK_LINE(135)
			return null();
		}
		HX_STACK_LINE(137)
		Array< ::native::utils::WeakRef > list = this->nmeEventMap->get(type);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			while(((_g1 < _g))){
				HX_STACK_LINE(138)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(140)
				if (((list->__get(i) != null()))){
					HX_STACK_LINE(142)
					::native::events::Listener li = list->__get(i)->get();		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(143)
					if (((bool((li != null())) && bool(li->Is(listener,capture))))){
						HX_STACK_LINE(146)
						list[i] = null();
						HX_STACK_LINE(147)
						return null();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

bool EventDispatcher_obj::hasEventListener( ::String type){
	HX_STACK_PUSH("EventDispatcher::hasEventListener","native/events/EventDispatcher.hx",109);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(111)
	if (((this->nmeEventMap == null()))){
		HX_STACK_LINE(112)
		return false;
	}
	HX_STACK_LINE(114)
	Array< ::native::utils::WeakRef > h = this->nmeEventMap->get(type);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(115)
	if (((h != null()))){
		HX_STACK_LINE(117)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		while(((_g < h->length))){
			HX_STACK_LINE(117)
			::native::utils::WeakRef item = h->__get(_g);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(117)
			++(_g);
			HX_STACK_LINE(119)
			if (((item != null()))){
				HX_STACK_LINE(119)
				return true;
			}
		}
	}
	HX_STACK_LINE(125)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

Void EventDispatcher_obj::DispatchIOErrorEvent( ){
{
		HX_STACK_PUSH("EventDispatcher::DispatchIOErrorEvent","native/events/EventDispatcher.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_LINE(103)
		::native::events::IOErrorEvent evt = ::native::events::IOErrorEvent_obj::__new(::native::events::IOErrorEvent_obj::IO_ERROR,null(),null(),null(),null());		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(104)
		this->dispatchEvent(evt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,DispatchIOErrorEvent,(void))

bool EventDispatcher_obj::dispatchEvent( ::native::events::Event event){
	HX_STACK_PUSH("EventDispatcher::dispatchEvent","native/events/EventDispatcher.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_ARG(event,"event");
	HX_STACK_LINE(51)
	if (((this->nmeEventMap == null()))){
		HX_STACK_LINE(52)
		return false;
	}
	HX_STACK_LINE(54)
	if (((event->get_target() == null()))){
		HX_STACK_LINE(55)
		event->set_target(this->nmeTarget);
	}
	HX_STACK_LINE(57)
	if (((event->get_currentTarget() == null()))){
		HX_STACK_LINE(58)
		event->set_currentTarget(this->nmeTarget);
	}
	HX_STACK_LINE(60)
	Array< ::native::utils::WeakRef > list = this->nmeEventMap->get(event->get_type());		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(61)
	bool capture = (event->get_eventPhase() == ::native::events::EventPhase_obj::CAPTURING_PHASE);		HX_STACK_VAR(capture,"capture");
	HX_STACK_LINE(63)
	if (((list != null()))){
		HX_STACK_LINE(65)
		int idx = (int)0;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(66)
		while(((idx < list->length))){
			HX_STACK_LINE(68)
			::native::utils::WeakRef list_item = list->__get(idx);		HX_STACK_VAR(list_item,"list_item");
			HX_STACK_LINE(69)
			::native::events::Listener listener = (  (((list_item != null()))) ? ::native::events::Listener(list_item->get()) : ::native::events::Listener(null()) );		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(71)
			if (((listener == null()))){
				HX_STACK_LINE(71)
				list->splice(idx,(int)1);
			}
			else{
				HX_STACK_LINE(78)
				if (((listener->mUseCapture == capture))){
					HX_STACK_LINE(80)
					listener->dispatchEvent(event);
					HX_STACK_LINE(81)
					if ((event->nmeGetIsCancelledNow())){
						HX_STACK_LINE(82)
						return true;
					}
				}
				HX_STACK_LINE(86)
				(idx)++;
			}
		}
		HX_STACK_LINE(92)
		return true;
	}
	HX_STACK_LINE(96)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

Void EventDispatcher_obj::DispatchCompleteEvent( ){
{
		HX_STACK_PUSH("EventDispatcher::DispatchCompleteEvent","native/events/EventDispatcher.hx",41);
		HX_STACK_THIS(this);
		HX_STACK_LINE(43)
		::native::events::Event evt = ::native::events::Event_obj::__new(::native::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(44)
		this->dispatchEvent(evt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,DispatchCompleteEvent,(void))

Void EventDispatcher_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_PUSH("EventDispatcher::addEventListener","native/events/EventDispatcher.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(useCapture,"useCapture");
	HX_STACK_ARG(priority,"priority");
	HX_STACK_ARG(useWeakReference,"useWeakReference");
{
		HX_STACK_LINE(26)
		if (((this->nmeEventMap == null()))){
			HX_STACK_LINE(27)
			this->nmeEventMap = ::Hash_obj::__new();
		}
		HX_STACK_LINE(29)
		Array< ::native::utils::WeakRef > list = this->nmeEventMap->get(type);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(30)
		if (((list == null()))){
			HX_STACK_LINE(31)
			list = Array_obj< ::native::utils::WeakRef >::__new();
			HX_STACK_LINE(32)
			this->nmeEventMap->set(type,list);
		}
		HX_STACK_LINE(35)
		::native::events::Listener l = ::native::events::Listener_obj::__new(listener,useCapture,priority);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(36)
		list->push(::native::utils::WeakRef_obj::__new(l,useWeakReference));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))


EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(nmeTarget,"nmeTarget");
	HX_MARK_MEMBER_NAME(nmeEventMap,"nmeEventMap");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeTarget,"nmeTarget");
	HX_VISIT_MEMBER_NAME(nmeEventMap,"nmeEventMap");
}

Dynamic EventDispatcher_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeTarget") ) { return nmeTarget; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeEventMap") ) { return nmeEventMap; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DispatchIOErrorEvent") ) { return DispatchIOErrorEvent_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DispatchCompleteEvent") ) { return DispatchCompleteEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventDispatcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nmeTarget") ) { nmeTarget=inValue.Cast< ::native::events::IEventDispatcher >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nmeEventMap") ) { nmeEventMap=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeTarget"));
	outFields->push(HX_CSTRING("nmeEventMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("willTrigger"),
	HX_CSTRING("toString"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("hasEventListener"),
	HX_CSTRING("DispatchIOErrorEvent"),
	HX_CSTRING("dispatchEvent"),
	HX_CSTRING("DispatchCompleteEvent"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("nmeTarget"),
	HX_CSTRING("nmeEventMap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

Class EventDispatcher_obj::__mClass;

void EventDispatcher_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.events.EventDispatcher"), hx::TCanCast< EventDispatcher_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void EventDispatcher_obj::__boot()
{
}

} // end namespace native
} // end namespace events
