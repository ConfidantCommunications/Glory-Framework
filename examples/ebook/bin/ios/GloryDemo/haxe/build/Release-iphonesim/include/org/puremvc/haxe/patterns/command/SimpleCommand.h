#ifndef INCLUDED_org_puremvc_haxe_patterns_command_SimpleCommand
#define INCLUDED_org_puremvc_haxe_patterns_command_SimpleCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#include <org/puremvc/haxe/interfaces/ICommand.h>
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,ICommand)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,command,SimpleCommand)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace command{


class SimpleCommand_obj : public ::org::puremvc::haxe::patterns::observer::Notifier_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::observer::Notifier_obj super;
		typedef SimpleCommand_obj OBJ_;
		SimpleCommand_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SimpleCommand_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SimpleCommand_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::interfaces::ICommand_obj *()
			{ return new ::org::puremvc::haxe::interfaces::ICommand_delegate_< SimpleCommand_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("SimpleCommand"); }

		virtual Void execute( ::org::puremvc::haxe::interfaces::INotification notification);
		Dynamic execute_dyn();

};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace command

#endif /* INCLUDED_org_puremvc_haxe_patterns_command_SimpleCommand */ 
