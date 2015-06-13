#ifndef INCLUDED_org_puremvc_haxe_interfaces_ICommand
#define INCLUDED_org_puremvc_haxe_interfaces_ICommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,ICommand)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
namespace org{
namespace puremvc{
namespace haxe{
namespace interfaces{


class ICommand_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ICommand_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void execute( ::org::puremvc::haxe::interfaces::INotification notification)=0;
		Dynamic execute_dyn();
};

#define DELEGATE_org_puremvc_haxe_interfaces_ICommand \
virtual Void execute( ::org::puremvc::haxe::interfaces::INotification notification) { return mDelegate->execute(notification);}  \
virtual Dynamic execute_dyn() { return mDelegate->execute_dyn();}  \


template<typename IMPL>
class ICommand_delegate_ : public ICommand_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ICommand_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_org_puremvc_haxe_interfaces_ICommand
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace interfaces

#endif /* INCLUDED_org_puremvc_haxe_interfaces_ICommand */ 
