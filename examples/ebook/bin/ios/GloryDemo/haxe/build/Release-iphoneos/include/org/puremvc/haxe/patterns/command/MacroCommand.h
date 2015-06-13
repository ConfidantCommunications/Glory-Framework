#ifndef INCLUDED_org_puremvc_haxe_patterns_command_MacroCommand
#define INCLUDED_org_puremvc_haxe_patterns_command_MacroCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/patterns/observer/Notifier.h>
#include <org/puremvc/haxe/interfaces/ICommand.h>
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,ICommand)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotifier)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,command,MacroCommand)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notifier)
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace command{


class MacroCommand_obj : public ::org::puremvc::haxe::patterns::observer::Notifier_obj{
	public:
		typedef ::org::puremvc::haxe::patterns::observer::Notifier_obj super;
		typedef MacroCommand_obj OBJ_;
		MacroCommand_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MacroCommand_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MacroCommand_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::interfaces::ICommand_obj *()
			{ return new ::org::puremvc::haxe::interfaces::ICommand_delegate_< MacroCommand_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("MacroCommand"); }

		virtual Void execute( ::org::puremvc::haxe::interfaces::INotification notification);
		Dynamic execute_dyn();

		virtual Void addSubCommand( ::Class commandClassRef);
		Dynamic addSubCommand_dyn();

		virtual Void initializeMacroCommand( );
		Dynamic initializeMacroCommand_dyn();

		::List subCommands; /* REM */ 
};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace command

#endif /* INCLUDED_org_puremvc_haxe_patterns_command_MacroCommand */ 
