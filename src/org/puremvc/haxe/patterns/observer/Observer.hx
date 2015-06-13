/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.patterns.observer;

import org.puremvc.haxe.interfaces.IObserver;
import org.puremvc.haxe.interfaces.INotification;

/**
 * A base [IObserver] implementation.
 * 
 * <p>An [Observer] is an object that encapsulates information
 * about an interested object with a method that should 
 * be called when a particular [INotification] is broadcast.</p>
 * 
 * <p>In PureMVC, the [Observer] class assumes these responsibilities:</p>
 * <ul>
 * <li>Encapsulate the notification (callback) method of the interested object.</li>
 * <li>Encapsulate the notification context (this) of the interested object.</li>
 * <li>Provide methods for setting the notification method and context.</li>
 * <li>Provide a method for notifying the interested object.</li>
 * </ul>
 */
class Observer implements IObserver
{

	private var notify: Dynamic -> Void;
	private var context: Dynamic;
	
	/**
	 * Constructor. 
	 * 
	 * <p>The notification method on the interested object should take 
	 * one parameter of type [INotification]</p>
	 */
	public function new( notifyMethod: Dynamic -> Void, notifyContext: Dynamic ): Void
	{
		setNotifyMethod( notifyMethod );
		setNotifyContext( notifyContext );
	}
		
	/**
	 * Set the notification method.
	 * 
	 * <p>The notification method should take one parameter of type [INotification].</p>
	 */
	public function setNotifyMethod( notifyMethod: Dynamic -> Void ): Void
	{
		notify = notifyMethod;
	}
		
	/**
	 * Set the notification context.
	 */
	public function setNotifyContext( notifyContext: Dynamic ): Void
	{
		context = notifyContext;
	}
		
	/**
	 * Get the notification method.
	 */
	private function getNotifyMethod(): Dynamic -> Void
	{
		return notify;
	}
		
	/**
	 * Get the notification context.
	 */
	private function getNotifyContext(): Dynamic
	{
		return context;
	}
		
	/**
	 * Notify the interested object.
	 */
	public function notifyObserver( notification: INotification ): Void
	{
		getNotifyMethod()( notification );
	}

	/**
	 * Compare an object to the notification context. 
	 */
	 public function compareNotifyContext( object: Dynamic ): Bool
	 {
	 	return object == this.context;
	 }		
}