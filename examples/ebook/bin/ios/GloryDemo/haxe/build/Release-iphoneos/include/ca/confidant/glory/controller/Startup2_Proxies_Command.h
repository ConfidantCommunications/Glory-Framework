#ifndef INCLUDED_ca_confidant_glory_controller_Startup2_Proxies_Command
#define INCLUDED_ca_confidant_glory_controller_Startup2_Proxies_Command

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/command/SimpleCommand.h>
HX_DECLARE_CLASS4(ca,confidant,glory,controller,Startup2_Proxies_Command)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,ICommand)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,command,SimpleCommand)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
namespace ca{
namespace confidant{
namespace glory{
namespace controller{


class Startup2_Proxies_Command_obj : public ::org::puremvc::haxe::patterns::command::SimpleCommand_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::command::SimpleCommand_obj super;
		typedef Startup2_Proxies_Command_obj OBJ_;
		Startup2_Proxies_Command_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Startup2_Proxies_Command_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Startup2_Proxies_Command_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Startup2_Proxies_Command"); }

		virtual Void execute( ::org::puremvc::haxe::interfaces::INotification note);

};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller

#endif /* INCLUDED_ca_confidant_glory_controller_Startup2_Proxies_Command */ 
