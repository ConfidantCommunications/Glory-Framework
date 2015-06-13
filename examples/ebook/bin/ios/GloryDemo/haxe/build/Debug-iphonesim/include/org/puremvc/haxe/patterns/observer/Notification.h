#ifndef INCLUDED_org_puremvc_haxe_patterns_observer_Notification
#define INCLUDED_org_puremvc_haxe_patterns_observer_Notification

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/puremvc/haxe/interfaces/INotification.h>
HX_DECLARE_CLASS4(org,puremvc,haxe,interfaces,INotification)
HX_DECLARE_CLASS5(org,puremvc,haxe,patterns,observer,Notification)
namespace org{
namespace puremvc{
namespace haxe{
namespace patterns{
namespace observer{


class Notification_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Notification_obj OBJ_;
		Notification_obj();
		Void __construct(::String name,Dynamic body,::String type);

	public:
		static hx::ObjectPtr< Notification_obj > __new(::String name,Dynamic body,::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Notification_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::org::puremvc::haxe::interfaces::INotification_obj *()
			{ return new ::org::puremvc::haxe::interfaces::INotification_delegate_< Notification_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Notification"); }

		Dynamic body; /* REM */ 
		::String type; /* REM */ 
		::String name; /* REM */ 
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String getType( );
		Dynamic getType_dyn();

		virtual Void setType( ::String type);
		Dynamic setType_dyn();

		virtual Dynamic getBody( );
		Dynamic getBody_dyn();

		virtual Void setBody( Dynamic body);
		Dynamic setBody_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace org
} // end namespace puremvc
} // end namespace haxe
} // end namespace patterns
} // end namespace observer

#endif /* INCLUDED_org_puremvc_haxe_patterns_observer_Notification */ 
