#ifndef INCLUDED_ca_confidant_glory_controller_StartupCommand
#define INCLUDED_ca_confidant_glory_controller_StartupCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/command/MacroCommand.h>
HX_DECLARE_CLASS4(ca,confidant,glory,controller,StartupCommand)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,ICommand)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,command,MacroCommand)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
namespace ca{
namespace confidant{
namespace glory{
namespace controller{


class StartupCommand_obj : public ::org::puremvc::haxe::patterns::command::MacroCommand_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::command::MacroCommand_obj super;
		typedef StartupCommand_obj OBJ_;
		StartupCommand_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< StartupCommand_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~StartupCommand_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StartupCommand"); }

		virtual Void initializeMacroCommand( );

};

} // end namespace ca
} // end namespace confidant
} // end namespace glory
} // end namespace controller

#endif /* INCLUDED_ca_confidant_glory_controller_StartupCommand */ 
