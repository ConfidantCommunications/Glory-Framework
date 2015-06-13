#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
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
#ifndef INCLUDED_native_errors_ArgumentError
#include <native/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
#endif
#ifndef INCLUDED_native_errors_RangeError
#include <native/errors/RangeError.h>
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
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
namespace native{
namespace display{

Void DisplayObjectContainer_obj::__construct(Dynamic inHandle,::String inType)
{
HX_STACK_PUSH("DisplayObjectContainer::new","native/display/DisplayObjectContainer.hx",22);
{
	HX_STACK_LINE(24)
	super::__construct(inHandle,inType);
	HX_STACK_LINE(25)
	this->nmeChildren = Array_obj< ::native::display::DisplayObject >::__new();
}
;
	return null();
}

DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new(Dynamic inHandle,::String inType)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct(inHandle,inType);
	return result;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool DisplayObjectContainer_obj::set_tabChildren( bool inValue){
	HX_STACK_PUSH("DisplayObjectContainer::set_tabChildren","native/display/DisplayObjectContainer.hx",397);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inValue,"inValue");
	HX_STACK_LINE(397)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_tabChildren,return )

bool DisplayObjectContainer_obj::get_tabChildren( ){
	HX_STACK_PUSH("DisplayObjectContainer::get_tabChildren","native/display/DisplayObjectContainer.hx",396);
	HX_STACK_THIS(this);
	HX_STACK_LINE(396)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_tabChildren,return )

int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_PUSH("DisplayObjectContainer::get_numChildren","native/display/DisplayObjectContainer.hx",395);
	HX_STACK_THIS(this);
	HX_STACK_LINE(395)
	return this->nmeChildren->length;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )

bool DisplayObjectContainer_obj::set_mouseChildren( bool inVal){
	HX_STACK_PUSH("DisplayObjectContainer::set_mouseChildren","native/display/DisplayObjectContainer.hx",387);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inVal,"inVal");
	HX_STACK_LINE(389)
	::native::display::DisplayObjectContainer_obj::nme_doc_set_mouse_children(this->nmeHandle,inVal);
	HX_STACK_LINE(390)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_mouseChildren,return )

bool DisplayObjectContainer_obj::get_mouseChildren( ){
	HX_STACK_PUSH("DisplayObjectContainer::get_mouseChildren","native/display/DisplayObjectContainer.hx",386);
	HX_STACK_THIS(this);
	HX_STACK_LINE(386)
	return ::native::display::DisplayObjectContainer_obj::nme_doc_get_mouse_children(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_mouseChildren,return )

Void DisplayObjectContainer_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_PUSH("DisplayObjectContainer::swapChildrenAt","native/display/DisplayObjectContainer.hx",372);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index1,"index1");
		HX_STACK_ARG(index2,"index2");
		HX_STACK_LINE(374)
		if (((bool((bool((bool((index1 < (int)0)) || bool((index2 < (int)0)))) || bool((index1 > this->nmeChildren->length)))) || bool((index2 > this->nmeChildren->length))))){
			HX_STACK_LINE(374)
			hx::Throw (::native::errors::RangeError_obj::__new(HX_CSTRING("swapChildrenAt : index out of bounds")));
		}
		HX_STACK_LINE(374)
		if (((index1 != index2))){
			HX_STACK_LINE(374)
			::native::display::DisplayObject tmp = this->nmeChildren->__get(index1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(374)
			this->nmeChildren[index1] = this->nmeChildren->__get(index2);
			HX_STACK_LINE(374)
			this->nmeChildren[index2] = tmp;
			HX_STACK_LINE(374)
			::native::display::DisplayObjectContainer_obj::nme_doc_swap_children(this->nmeHandle,index1,index2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

Void DisplayObjectContainer_obj::swapChildren( ::native::display::DisplayObject child1,::native::display::DisplayObject child2){
{
		HX_STACK_PUSH("DisplayObjectContainer::swapChildren","native/display/DisplayObjectContainer.hx",361);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child1,"child1");
		HX_STACK_ARG(child2,"child2");
		HX_STACK_LINE(363)
		int idx1 = this->nmeGetChildIndex(child1);		HX_STACK_VAR(idx1,"idx1");
		HX_STACK_LINE(364)
		int idx2 = this->nmeGetChildIndex(child2);		HX_STACK_VAR(idx2,"idx2");
		HX_STACK_LINE(365)
		if (((bool((idx1 < (int)0)) || bool((idx2 < (int)0))))){
			HX_STACK_LINE(366)
			hx::Throw (HX_CSTRING("swapChildren:Could not find children"));
		}
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			if (((bool((bool((bool((idx1 < (int)0)) || bool((idx2 < (int)0)))) || bool((idx1 > this->nmeChildren->length)))) || bool((idx2 > this->nmeChildren->length))))){
				HX_STACK_LINE(367)
				hx::Throw (::native::errors::RangeError_obj::__new(HX_CSTRING("swapChildrenAt : index out of bounds")));
			}
			HX_STACK_LINE(367)
			if (((idx1 != idx2))){
				HX_STACK_LINE(367)
				::native::display::DisplayObject tmp = this->nmeChildren->__get(idx1);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(367)
				this->nmeChildren[idx1] = this->nmeChildren->__get(idx2);
				HX_STACK_LINE(367)
				this->nmeChildren[idx2] = tmp;
				HX_STACK_LINE(367)
				::native::display::DisplayObjectContainer_obj::nme_doc_swap_children(this->nmeHandle,idx1,idx2);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::setChildIndex( ::native::display::DisplayObject child,int index){
{
		HX_STACK_PUSH("DisplayObjectContainer::setChildIndex","native/display/DisplayObjectContainer.hx",354);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(356)
		if (((index > this->nmeChildren->length))){
			HX_STACK_LINE(356)
			hx::Throw ((HX_CSTRING("Invalid index position ") + index));
		}
		HX_STACK_LINE(356)
		::native::display::DisplayObject s = null();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(356)
		int orig = this->nmeGetChildIndex(child);		HX_STACK_VAR(orig,"orig");
		HX_STACK_LINE(356)
		if (((orig < (int)0))){
			HX_STACK_LINE(356)
			::String msg = ((HX_CSTRING("setChildIndex : object ") + child->toString()) + HX_CSTRING(" not found."));		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(356)
			if (((child->nmeParent == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(356)
				int realindex = (int)-1;		HX_STACK_VAR(realindex,"realindex");
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->nmeChildren->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(356)
					while(((_g1 < _g))){
						HX_STACK_LINE(356)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(356)
						if (((this->nmeChildren->__get(i) == child))){
							HX_STACK_LINE(356)
							realindex = i;
							HX_STACK_LINE(356)
							break;
						}
					}
				}
				HX_STACK_LINE(356)
				if (((realindex != (int)-1))){
					HX_STACK_LINE(356)
					hx::AddEq(msg,(HX_CSTRING("Internal error: Real child index was ") + ::Std_obj::string(realindex)));
				}
				else{
					HX_STACK_LINE(356)
					hx::AddEq(msg,HX_CSTRING("Internal error: Child was not in nmeChildren array!"));
				}
			}
			HX_STACK_LINE(356)
			hx::Throw (msg);
		}
		HX_STACK_LINE(356)
		::native::display::DisplayObjectContainer_obj::nme_doc_set_child_index(this->nmeHandle,child->nmeHandle,index);
		HX_STACK_LINE(356)
		if (((index < orig))){
			HX_STACK_LINE(356)
			int i = orig;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(356)
			while(((i > index))){
				HX_STACK_LINE(356)
				this->nmeChildren[i] = this->nmeChildren->__get((i - (int)1));
				HX_STACK_LINE(356)
				(i)--;
			}
			HX_STACK_LINE(356)
			this->nmeChildren[index] = child;
		}
		else{
			HX_STACK_LINE(356)
			if (((orig < index))){
				HX_STACK_LINE(356)
				int i = orig;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(356)
				while(((i < index))){
					HX_STACK_LINE(356)
					this->nmeChildren[i] = this->nmeChildren->__get((i + (int)1));
					HX_STACK_LINE(356)
					(i)++;
				}
				HX_STACK_LINE(356)
				this->nmeChildren[index] = child;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

::native::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_PUSH("DisplayObjectContainer::removeChildAt","native/display/DisplayObjectContainer.hx",339);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(341)
	if (((bool((index >= (int)0)) && bool((index < this->nmeChildren->length))))){
		HX_STACK_LINE(343)
		::native::display::DisplayObject result = this->nmeChildren->__get(index);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(344)
		result->nmeSetParent(null());
		HX_STACK_LINE(345)
		return result;
	}
	HX_STACK_LINE(349)
	hx::Throw (::native::errors::ArgumentError_obj::__new(HX_CSTRING("The supplied DisplayObject must be a child of the caller."),null()));
	HX_STACK_LINE(349)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

::native::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::native::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::removeChild","native/display/DisplayObjectContainer.hx",321);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(323)
	int c = this->nmeGetChildIndex(child);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(325)
	if (((c >= (int)0))){
		HX_STACK_LINE(327)
		child->nmeSetParent(null());
		HX_STACK_LINE(328)
		return child;
	}
	HX_STACK_LINE(334)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

Void DisplayObjectContainer_obj::nmeSwapChildrenAt( int index1,int index2){
{
		HX_STACK_PUSH("DisplayObjectContainer::nmeSwapChildrenAt","native/display/DisplayObjectContainer.hx",304);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index1,"index1");
		HX_STACK_ARG(index2,"index2");
		HX_STACK_LINE(306)
		if (((bool((bool((bool((index1 < (int)0)) || bool((index2 < (int)0)))) || bool((index1 > this->nmeChildren->length)))) || bool((index2 > this->nmeChildren->length))))){
			HX_STACK_LINE(307)
			hx::Throw (::native::errors::RangeError_obj::__new(HX_CSTRING("swapChildrenAt : index out of bounds")));
		}
		HX_STACK_LINE(309)
		if (((index1 != index2))){
			HX_STACK_LINE(311)
			::native::display::DisplayObject tmp = this->nmeChildren->__get(index1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(312)
			this->nmeChildren[index1] = this->nmeChildren->__get(index2);
			HX_STACK_LINE(313)
			this->nmeChildren[index2] = tmp;
			HX_STACK_LINE(314)
			::native::display::DisplayObjectContainer_obj::nme_doc_swap_children(this->nmeHandle,index1,index2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,nmeSwapChildrenAt,(void))

Void DisplayObjectContainer_obj::nmeSetChildIndex( ::native::display::DisplayObject child,int index){
{
		HX_STACK_PUSH("DisplayObjectContainer::nmeSetChildIndex","native/display/DisplayObjectContainer.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(236)
		if (((index > this->nmeChildren->length))){
			HX_STACK_LINE(237)
			hx::Throw ((HX_CSTRING("Invalid index position ") + index));
		}
		HX_STACK_LINE(239)
		::native::display::DisplayObject s = null();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(240)
		int orig = this->nmeGetChildIndex(child);		HX_STACK_VAR(orig,"orig");
		HX_STACK_LINE(242)
		if (((orig < (int)0))){
			HX_STACK_LINE(244)
			::String msg = ((HX_CSTRING("setChildIndex : object ") + child->toString()) + HX_CSTRING(" not found."));		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(246)
			if (((child->nmeParent == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(248)
				int realindex = (int)-1;		HX_STACK_VAR(realindex,"realindex");
				HX_STACK_LINE(250)
				{
					HX_STACK_LINE(250)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->nmeChildren->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(250)
					while(((_g1 < _g))){
						HX_STACK_LINE(250)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(252)
						if (((this->nmeChildren->__get(i) == child))){
							HX_STACK_LINE(254)
							realindex = i;
							HX_STACK_LINE(255)
							break;
						}
					}
				}
				HX_STACK_LINE(261)
				if (((realindex != (int)-1))){
					HX_STACK_LINE(262)
					hx::AddEq(msg,(HX_CSTRING("Internal error: Real child index was ") + ::Std_obj::string(realindex)));
				}
				else{
					HX_STACK_LINE(264)
					hx::AddEq(msg,HX_CSTRING("Internal error: Child was not in nmeChildren array!"));
				}
			}
			HX_STACK_LINE(268)
			hx::Throw (msg);
		}
		HX_STACK_LINE(272)
		::native::display::DisplayObjectContainer_obj::nme_doc_set_child_index(this->nmeHandle,child->nmeHandle,index);
		HX_STACK_LINE(274)
		if (((index < orig))){
			HX_STACK_LINE(276)
			int i = orig;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(278)
			while(((i > index))){
				HX_STACK_LINE(280)
				this->nmeChildren[i] = this->nmeChildren->__get((i - (int)1));
				HX_STACK_LINE(281)
				(i)--;
			}
			HX_STACK_LINE(285)
			this->nmeChildren[index] = child;
		}
		else{
			HX_STACK_LINE(287)
			if (((orig < index))){
				HX_STACK_LINE(289)
				int i = orig;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(290)
				while(((i < index))){
					HX_STACK_LINE(292)
					this->nmeChildren[i] = this->nmeChildren->__get((i + (int)1));
					HX_STACK_LINE(293)
					(i)++;
				}
				HX_STACK_LINE(297)
				this->nmeChildren[index] = child;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,nmeSetChildIndex,(void))

Void DisplayObjectContainer_obj::nmeRemoveChildFromArray( ::native::display::DisplayObject child){
{
		HX_STACK_PUSH("DisplayObjectContainer::nmeRemoveChildFromArray","native/display/DisplayObjectContainer.hx",220);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_LINE(222)
		int i = this->nmeGetChildIndex(child);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(224)
		if (((i >= (int)0))){
			HX_STACK_LINE(226)
			::native::display::DisplayObjectContainer_obj::nme_doc_remove_child(this->nmeHandle,i);
			HX_STACK_LINE(227)
			this->nmeChildren->splice(i,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,nmeRemoveChildFromArray,(void))

Void DisplayObjectContainer_obj::nmeOnRemoved( ::native::display::DisplayObject inObj,bool inWasOnStage){
{
		HX_STACK_PUSH("DisplayObjectContainer::nmeOnRemoved","native/display/DisplayObjectContainer.hx",210);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inObj,"inObj");
		HX_STACK_ARG(inWasOnStage,"inWasOnStage");
		HX_STACK_LINE(212)
		this->super::nmeOnRemoved(inObj,inWasOnStage);
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::native::display::DisplayObject > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(214)
			while(((_g < _g1->length))){
				HX_STACK_LINE(214)
				::native::display::DisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(214)
				++(_g);
				HX_STACK_LINE(215)
				child->nmeOnRemoved(inObj,inWasOnStage);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::nmeOnAdded( ::native::display::DisplayObject inObj,bool inIsOnStage){
{
		HX_STACK_PUSH("DisplayObjectContainer::nmeOnAdded","native/display/DisplayObjectContainer.hx",200);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inObj,"inObj");
		HX_STACK_ARG(inIsOnStage,"inIsOnStage");
		HX_STACK_LINE(202)
		this->super::nmeOnAdded(inObj,inIsOnStage);
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::native::display::DisplayObject > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(204)
			while(((_g < _g1->length))){
				HX_STACK_LINE(204)
				::native::display::DisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(204)
				++(_g);
				HX_STACK_LINE(205)
				child->nmeOnAdded(inObj,inIsOnStage);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::nmeGetObjectsUnderPoint( ::native::geom::Point point,Array< ::native::display::DisplayObject > result){
{
		HX_STACK_PUSH("DisplayObjectContainer::nmeGetObjectsUnderPoint","native/display/DisplayObjectContainer.hx",190);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(result,"result");
		HX_STACK_LINE(192)
		this->super::nmeGetObjectsUnderPoint(point,result);
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::native::display::DisplayObject > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(194)
			while(((_g < _g1->length))){
				HX_STACK_LINE(194)
				::native::display::DisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(194)
				++(_g);
				HX_STACK_LINE(195)
				child->nmeGetObjectsUnderPoint(point,result);
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::nmeGetChildIndex( ::native::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::nmeGetChildIndex","native/display/DisplayObjectContainer.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->nmeChildren->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(182)
		while(((_g1 < _g))){
			HX_STACK_LINE(182)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(183)
			if (((this->nmeChildren->__get(i) == child))){
				HX_STACK_LINE(184)
				return i;
			}
		}
	}
	HX_STACK_LINE(185)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,nmeGetChildIndex,return )

::native::display::DisplayObject DisplayObjectContainer_obj::nmeFindByID( int inID){
	HX_STACK_PUSH("DisplayObjectContainer::nmeFindByID","native/display/DisplayObjectContainer.hx",161);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inID,"inID");
	HX_STACK_LINE(163)
	if (((this->nmeID == inID))){
		HX_STACK_LINE(164)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(166)
	{
		HX_STACK_LINE(166)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::native::display::DisplayObject > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(166)
		while(((_g < _g1->length))){
			HX_STACK_LINE(166)
			::native::display::DisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(166)
			++(_g);
			HX_STACK_LINE(168)
			::native::display::DisplayObject found = child->nmeFindByID(inID);		HX_STACK_VAR(found,"found");
			HX_STACK_LINE(170)
			if (((found != null()))){
				HX_STACK_LINE(171)
				return found;
			}
		}
	}
	HX_STACK_LINE(175)
	return this->super::nmeFindByID(inID);
}


Void DisplayObjectContainer_obj::nmeBroadcast( ::native::events::Event inEvt){
{
		HX_STACK_PUSH("DisplayObjectContainer::nmeBroadcast","native/display/DisplayObjectContainer.hx",133);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inEvt,"inEvt");
		HX_STACK_LINE(135)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(137)
		if (((this->nmeChildren->length > (int)0))){
			HX_STACK_LINE(138)
			while((true)){
				HX_STACK_LINE(140)
				::native::display::DisplayObject child = this->nmeChildren->__get(i);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(141)
				child->nmeBroadcast(inEvt);
				HX_STACK_LINE(143)
				if (((i >= this->nmeChildren->length))){
					HX_STACK_LINE(144)
					break;
				}
				HX_STACK_LINE(146)
				if (((this->nmeChildren->__get(i) == child))){
					HX_STACK_LINE(148)
					(i)++;
					HX_STACK_LINE(149)
					if (((i >= this->nmeChildren->length))){
						HX_STACK_LINE(150)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(156)
		this->super::nmeBroadcast(inEvt);
	}
return null();
}


Void DisplayObjectContainer_obj::nmeAddChild( ::native::display::DisplayObject child){
{
		HX_STACK_PUSH("DisplayObjectContainer::nmeAddChild","native/display/DisplayObjectContainer.hx",110);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_LINE(112)
		if (((child == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(112)
			hx::Throw (HX_CSTRING("Adding to self"));
		}
		HX_STACK_LINE(118)
		if (((child->nmeParent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(118)
			this->setChildIndex(child,(this->nmeChildren->length - (int)1));
		}
		else{
			HX_STACK_LINE(124)
			child->nmeSetParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(125)
			this->nmeChildren->push(child);
			HX_STACK_LINE(126)
			::native::display::DisplayObjectContainer_obj::nme_doc_add_child(this->nmeHandle,child->nmeHandle);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,nmeAddChild,(void))

Array< ::native::display::DisplayObject > DisplayObjectContainer_obj::getObjectsUnderPoint( ::native::geom::Point point){
	HX_STACK_PUSH("DisplayObjectContainer::getObjectsUnderPoint","native/display/DisplayObjectContainer.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(103)
	Array< ::native::display::DisplayObject > result = Array_obj< ::native::display::DisplayObject >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(104)
	this->nmeGetObjectsUnderPoint(point,result);
	HX_STACK_LINE(105)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

int DisplayObjectContainer_obj::getChildIndex( ::native::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::getChildIndex","native/display/DisplayObjectContainer.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(94)
	return this->nmeGetChildIndex(child);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

::native::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_PUSH("DisplayObjectContainer::getChildByName","native/display/DisplayObjectContainer.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::native::display::DisplayObject > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		while(((_g < _g1->length))){
			HX_STACK_LINE(86)
			::native::display::DisplayObject c = _g1->__get(_g);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(86)
			++(_g);
			HX_STACK_LINE(87)
			if (((name == c->get_name()))){
				HX_STACK_LINE(88)
				return c;
			}
		}
	}
	HX_STACK_LINE(89)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

::native::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_PUSH("DisplayObjectContainer::getChildAt","native/display/DisplayObjectContainer.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(73)
	if (((bool((index >= (int)0)) && bool((index < this->nmeChildren->length))))){
		HX_STACK_LINE(74)
		return this->nmeChildren->__get(index);
	}
	HX_STACK_LINE(77)
	hx::Throw (::native::errors::RangeError_obj::__new((((HX_CSTRING("getChildAt : index out of bounds ") + index) + HX_CSTRING("/")) + this->nmeChildren->length)));
	HX_STACK_LINE(79)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

bool DisplayObjectContainer_obj::contains( ::native::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::contains","native/display/DisplayObjectContainer.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(56)
	if (((child == null()))){
		HX_STACK_LINE(57)
		return false;
	}
	HX_STACK_LINE(59)
	if (((hx::ObjectPtr<OBJ_>(this) == child))){
		HX_STACK_LINE(60)
		return true;
	}
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::native::display::DisplayObject > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		while(((_g < _g1->length))){
			HX_STACK_LINE(62)
			::native::display::DisplayObject c = _g1->__get(_g);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(62)
			++(_g);
			HX_STACK_LINE(63)
			if (((c == child))){
				HX_STACK_LINE(64)
				return true;
			}
		}
	}
	HX_STACK_LINE(66)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::native::geom::Point point){
	HX_STACK_PUSH("DisplayObjectContainer::areInaccessibleObjectsUnderPoint","native/display/DisplayObjectContainer.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(47)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

::native::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::native::display::DisplayObject child,int index){
	HX_STACK_PUSH("DisplayObjectContainer::addChildAt","native/display/DisplayObjectContainer.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		if (((child == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(40)
			hx::Throw (HX_CSTRING("Adding to self"));
		}
		HX_STACK_LINE(40)
		if (((child->nmeParent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(40)
			this->setChildIndex(child,(this->nmeChildren->length - (int)1));
		}
		else{
			HX_STACK_LINE(40)
			child->nmeSetParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(40)
			this->nmeChildren->push(child);
			HX_STACK_LINE(40)
			::native::display::DisplayObjectContainer_obj::nme_doc_add_child(this->nmeHandle,child->nmeHandle);
		}
	}
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		if (((index > this->nmeChildren->length))){
			HX_STACK_LINE(41)
			hx::Throw ((HX_CSTRING("Invalid index position ") + index));
		}
		HX_STACK_LINE(41)
		::native::display::DisplayObject s = null();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(41)
		int orig = this->nmeGetChildIndex(child);		HX_STACK_VAR(orig,"orig");
		HX_STACK_LINE(41)
		if (((orig < (int)0))){
			HX_STACK_LINE(41)
			::String msg = ((HX_CSTRING("setChildIndex : object ") + child->toString()) + HX_CSTRING(" not found."));		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(41)
			if (((child->nmeParent == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(41)
				int realindex = (int)-1;		HX_STACK_VAR(realindex,"realindex");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->nmeChildren->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(41)
					while(((_g1 < _g))){
						HX_STACK_LINE(41)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(41)
						if (((this->nmeChildren->__get(i) == child))){
							HX_STACK_LINE(41)
							realindex = i;
							HX_STACK_LINE(41)
							break;
						}
					}
				}
				HX_STACK_LINE(41)
				if (((realindex != (int)-1))){
					HX_STACK_LINE(41)
					hx::AddEq(msg,(HX_CSTRING("Internal error: Real child index was ") + ::Std_obj::string(realindex)));
				}
				else{
					HX_STACK_LINE(41)
					hx::AddEq(msg,HX_CSTRING("Internal error: Child was not in nmeChildren array!"));
				}
			}
			HX_STACK_LINE(41)
			hx::Throw (msg);
		}
		HX_STACK_LINE(41)
		::native::display::DisplayObjectContainer_obj::nme_doc_set_child_index(this->nmeHandle,child->nmeHandle,index);
		HX_STACK_LINE(41)
		if (((index < orig))){
			HX_STACK_LINE(41)
			int i = orig;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(41)
			while(((i > index))){
				HX_STACK_LINE(41)
				this->nmeChildren[i] = this->nmeChildren->__get((i - (int)1));
				HX_STACK_LINE(41)
				(i)--;
			}
			HX_STACK_LINE(41)
			this->nmeChildren[index] = child;
		}
		else{
			HX_STACK_LINE(41)
			if (((orig < index))){
				HX_STACK_LINE(41)
				int i = orig;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(41)
				while(((i < index))){
					HX_STACK_LINE(41)
					this->nmeChildren[i] = this->nmeChildren->__get((i + (int)1));
					HX_STACK_LINE(41)
					(i)++;
				}
				HX_STACK_LINE(41)
				this->nmeChildren[index] = child;
			}
		}
	}
	HX_STACK_LINE(42)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

::native::display::DisplayObject DisplayObjectContainer_obj::addChild( ::native::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::addChild","native/display/DisplayObjectContainer.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		if (((child == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(32)
			hx::Throw (HX_CSTRING("Adding to self"));
		}
		HX_STACK_LINE(32)
		if (((child->nmeParent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(32)
			this->setChildIndex(child,(this->nmeChildren->length - (int)1));
		}
		else{
			HX_STACK_LINE(32)
			child->nmeSetParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(32)
			this->nmeChildren->push(child);
			HX_STACK_LINE(32)
			::native::display::DisplayObjectContainer_obj::nme_doc_add_child(this->nmeHandle,child->nmeHandle);
		}
	}
	HX_STACK_LINE(33)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

Dynamic DisplayObjectContainer_obj::nme_create_display_object_container;

Dynamic DisplayObjectContainer_obj::nme_doc_add_child;

Dynamic DisplayObjectContainer_obj::nme_doc_remove_child;

Dynamic DisplayObjectContainer_obj::nme_doc_set_child_index;

Dynamic DisplayObjectContainer_obj::nme_doc_get_mouse_children;

Dynamic DisplayObjectContainer_obj::nme_doc_set_mouse_children;

Dynamic DisplayObjectContainer_obj::nme_doc_swap_children;


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(nmeChildren,"nmeChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeChildren,"nmeChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeOnAdded") ) { return nmeOnAdded_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeFindByID") ) { return nmeFindByID_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeAddChild") ) { return nmeAddChild_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeChildren") ) { return nmeChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return inCallProp ? get_tabChildren() : tabChildren; }
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp ? get_numChildren() : numChildren; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnRemoved") ) { return nmeOnRemoved_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeBroadcast") ) { return nmeBroadcast_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return inCallProp ? get_mouseChildren() : mouseChildren; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_tabChildren") ) { return set_tabChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tabChildren") ) { return get_tabChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeSetChildIndex") ) { return nmeSetChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetChildIndex") ) { return nmeGetChildIndex_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { return nme_doc_add_child; }
		if (HX_FIELD_EQ(inName,"set_mouseChildren") ) { return set_mouseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseChildren") ) { return get_mouseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSwapChildrenAt") ) { return nmeSwapChildrenAt_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_doc_remove_child") ) { return nme_doc_remove_child; }
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_doc_swap_children") ) { return nme_doc_swap_children; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_doc_set_child_index") ) { return nme_doc_set_child_index; }
		if (HX_FIELD_EQ(inName,"nmeRemoveChildFromArray") ) { return nmeRemoveChildFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetObjectsUnderPoint") ) { return nmeGetObjectsUnderPoint_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_doc_get_mouse_children") ) { return nme_doc_get_mouse_children; }
		if (HX_FIELD_EQ(inName,"nme_doc_set_mouse_children") ) { return nme_doc_set_mouse_children; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_create_display_object_container") ) { return nme_create_display_object_container; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"nmeChildren") ) { nmeChildren=inValue.Cast< Array< ::native::display::DisplayObject > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp) return set_tabChildren(inValue);tabChildren=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { if (inCallProp) return set_mouseChildren(inValue);mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { nme_doc_add_child=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_doc_remove_child") ) { nme_doc_remove_child=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_doc_swap_children") ) { nme_doc_swap_children=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_doc_set_child_index") ) { nme_doc_set_child_index=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_doc_get_mouse_children") ) { nme_doc_get_mouse_children=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_doc_set_mouse_children") ) { nme_doc_set_mouse_children=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_create_display_object_container") ) { nme_create_display_object_container=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeChildren"));
	outFields->push(HX_CSTRING("tabChildren"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("mouseChildren"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_create_display_object_container"),
	HX_CSTRING("nme_doc_add_child"),
	HX_CSTRING("nme_doc_remove_child"),
	HX_CSTRING("nme_doc_set_child_index"),
	HX_CSTRING("nme_doc_get_mouse_children"),
	HX_CSTRING("nme_doc_set_mouse_children"),
	HX_CSTRING("nme_doc_swap_children"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_tabChildren"),
	HX_CSTRING("get_tabChildren"),
	HX_CSTRING("get_numChildren"),
	HX_CSTRING("set_mouseChildren"),
	HX_CSTRING("get_mouseChildren"),
	HX_CSTRING("swapChildrenAt"),
	HX_CSTRING("swapChildren"),
	HX_CSTRING("setChildIndex"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("nmeSwapChildrenAt"),
	HX_CSTRING("nmeSetChildIndex"),
	HX_CSTRING("nmeRemoveChildFromArray"),
	HX_CSTRING("nmeOnRemoved"),
	HX_CSTRING("nmeOnAdded"),
	HX_CSTRING("nmeGetObjectsUnderPoint"),
	HX_CSTRING("nmeGetChildIndex"),
	HX_CSTRING("nmeFindByID"),
	HX_CSTRING("nmeBroadcast"),
	HX_CSTRING("nmeAddChild"),
	HX_CSTRING("getObjectsUnderPoint"),
	HX_CSTRING("getChildIndex"),
	HX_CSTRING("getChildByName"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("contains"),
	HX_CSTRING("areInaccessibleObjectsUnderPoint"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("addChild"),
	HX_CSTRING("nmeChildren"),
	HX_CSTRING("tabChildren"),
	HX_CSTRING("numChildren"),
	HX_CSTRING("mouseChildren"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_create_display_object_container,"nme_create_display_object_container");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_add_child,"nme_doc_add_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_remove_child,"nme_doc_remove_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_child_index,"nme_doc_set_child_index");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_get_mouse_children,"nme_doc_get_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_mouse_children,"nme_doc_set_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_swap_children,"nme_doc_swap_children");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_create_display_object_container,"nme_create_display_object_container");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_add_child,"nme_doc_add_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_remove_child,"nme_doc_remove_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_child_index,"nme_doc_set_child_index");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_get_mouse_children,"nme_doc_get_mouse_children");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_mouse_children,"nme_doc_set_mouse_children");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_swap_children,"nme_doc_swap_children");
};

Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.DisplayObjectContainer"), hx::TCanCast< DisplayObjectContainer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DisplayObjectContainer_obj::__boot()
{
	nme_create_display_object_container= ::native::Loader_obj::load(HX_CSTRING("nme_create_display_object_container"),(int)0);
	nme_doc_add_child= ::native::Loader_obj::load(HX_CSTRING("nme_doc_add_child"),(int)2);
	nme_doc_remove_child= ::native::Loader_obj::load(HX_CSTRING("nme_doc_remove_child"),(int)2);
	nme_doc_set_child_index= ::native::Loader_obj::load(HX_CSTRING("nme_doc_set_child_index"),(int)3);
	nme_doc_get_mouse_children= ::native::Loader_obj::load(HX_CSTRING("nme_doc_get_mouse_children"),(int)1);
	nme_doc_set_mouse_children= ::native::Loader_obj::load(HX_CSTRING("nme_doc_set_mouse_children"),(int)2);
	nme_doc_swap_children= ::native::Loader_obj::load(HX_CSTRING("nme_doc_swap_children"),(int)3);
}

} // end namespace native
} // end namespace display
