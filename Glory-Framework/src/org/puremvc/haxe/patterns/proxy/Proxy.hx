/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.patterns.proxy;

import org.puremvc.haxe.interfaces.IProxy;
import org.puremvc.haxe.interfaces.INotifier;
import org.puremvc.haxe.patterns.observer.Notifier;
	
/**
 * A base [IProxy] implementation. 
 * 
 * <p>In PureMVC, [Proxy] classes are used to manage parts of the 
 * application's data model. </p>
 * 
 * <p>A [Proxy] might simply manage a reference to a local data object, 
 * in which case interacting with it might involve setting and 
 * getting of its data in synchronous fashion.</p>
 * 
 * <p>[Proxy] classes are also used to encapsulate the application's 
 * interaction with remote services to save or retrieve data, in which case, 
 * we adopt an asyncronous idiom; setting data (or calling a method) on the 
 * [Proxy] and listening for a [Notification] to be sent 
 * when the [Proxy] has retrieved the data from the service.</p>
 */
class Proxy extends Notifier, implements IProxy
{

	public static var NAME: String = 'Proxy';

	/**
	 * Constructor
	 */
	public function new( ?proxyName: String, ?data: Dynamic ) 
	{
		super();
		this.proxyName = if( proxyName != null ) proxyName else NAME; 
		if ( data != null ) setData( data );
	}

	/**
	 * Get the proxy name
	 */
	public function getProxyName(): String 
	{
		return proxyName;
	}		
	
	/**
	 * Set the data object
	 */
	public function setData( data: Dynamic ): Void 
	{
		this.data = data;
	}
		
	/**
	 * Get the data object
	 */
	public function getData(): Dynamic
	{
		return data;
	}		

	/**
	 * Called by the [Model] when the [Proxy] is registered
	 */ 
	public function onRegister(): Void
	{
		
	}

	/**
	 * Called by the [Model] when the [Proxy] is removed
	 */ 
	public function onRemove(): Void
	{
		
	}
		
	// the proxy name
	private var proxyName: String;
	
	// the data object
	private var data: Dynamic;
}