#ifndef INCLUDED_sys_io__Process_Stdin
#define INCLUDED_sys_io__Process_Stdin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/io/Output.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS3(sys,io,_Process,Stdin)
namespace sys{
namespace io{
namespace _Process{


class Stdin_obj : public ::haxe::io::Output_obj{
	public:
		typedef ::haxe::io::Output_obj super;
		typedef Stdin_obj OBJ_;
		Stdin_obj();
		Void __construct(Dynamic p);

	public:
		static hx::ObjectPtr< Stdin_obj > __new(Dynamic p);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Stdin_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Stdin"); }

		virtual int writeBytes( ::haxe::io::Bytes buf,int pos,int len);

		virtual Void writeByte( int c);

		virtual Void close( );

		::haxe::io::Bytes buf; /* REM */ 
		Dynamic p; /* REM */ 
		static Dynamic _stdin_write; /* REM */ 
		static Dynamic &_stdin_write_dyn() { return _stdin_write;}
		static Dynamic _stdin_close; /* REM */ 
		static Dynamic &_stdin_close_dyn() { return _stdin_close;}
};

} // end namespace sys
} // end namespace io
} // end namespace _Process

#endif /* INCLUDED_sys_io__Process_Stdin */ 
