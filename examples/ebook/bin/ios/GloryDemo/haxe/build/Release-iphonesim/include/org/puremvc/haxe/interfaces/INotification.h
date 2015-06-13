#ifndef INCLUDED_org_puremvc_haxe_interfaces_INotification
#define INCLUDED_org_puremvc_haxe_interfaces_INotification

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{


class INotification_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef INotification_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::String toString( )=0;
		Dynamic toString_dyn();
virtual ::String getType( )=0;
		Dynamic getType_dyn();
virtual Void setType( ::String type)=0;
		Dynamic setType_dyn();
virtual Dynamic getBody( )=0;
		Dynamic getBody_dyn();
virtual Void setBody( Dynamic body)=0;
		Dynamic setBody_dyn();
virtual ::String getName( )=0;
		Dynamic getName_dyn();
};

#define DELEGATE_org_puremvc_haxe_interfaces_INotification \
virtual ::String toString( ) { return mDelegate->toString();}  \
virtual Dynamic toString_dyn() { return mDelegate->toString_dyn();}  \
virtual ::String getType( ) { return mDelegate->getType();}  \
virtual Dynamic getType_dyn() { return mDelegate->getType_dyn();}  \
virtual Void setType( ::String type) { return mDelegate->setType(type);}  \
virtual Dynamic setType_dyn() { return mDelegate->setType_dyn();}  \
virtual Dynamic getBody( ) { return mDelegate->getBody();}  \
virtual Dynamic getBody_dyn() { return mDelegate->getBody_dyn();}  \
virtual Void setBody( Dynamic body) { return mDelegate->setBody(body);}  \
virtual Dynamic setBody_dyn() { return mDelegate->setBody_dyn();}  \
virtual ::String getName( ) { return mDelegate->getName();}  \
virtual Dynamic getName_dyn() { return mDelegate->getName_dyn();}  \


template<typename IMPL>
class INotification_delegate_ : public INotification_obj
{
	protected:
		IMPL *mDelegate;
	public:
		INotification_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_puremvc_haxe_interfaces_INotification
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces

#endif /* INCLUDED_org_puremvc_haxe_interfaces_INotification */ 
