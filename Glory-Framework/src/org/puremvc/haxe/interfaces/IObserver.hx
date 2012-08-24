/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.interfaces;
	
/**
 * The interface definition for a PureMVC Observer.
 *
 * <p>In PureMVC, [IObserver] implementors assume these responsibilities:
 * <ul>
 * <li>Encapsulate the notification (callback) method of the interested object.</li>
 * <li>Encapsulate the notification context (this) of the interested object.</li>
 * <li>Provide methods for setting the interested object' notification method and context.</li>
 * <li>Provide a method for notifying the interested object.</li>
 * </ul>
 * 
 * <p>PureMVC does not rely upon underlying event
 * models such as the one provided with Flash.</p>
 * 
 * <p>The Observer Pattern as implemented within
 * PureMVC exists to support event driven communication
 * between the application and the actors of the MVC triad.</p>
 * 
 * <p> An Observer is an object that encapsulates information
 * about an interested object with a notification method that
 * should be called when an [INotification] is broadcast. The Observer then
 * acts as a proxy for notifying the interested object.
 * 
 * <p>Observers can receive [Notification]s by having their
 * [notifyObserver] method invoked, passing
 * in an object implementing the [INotification] interface, such
 * as a subclass of [Notification].</p>
 */
interface IObserver
{
	/**
	 * Set the notification method.
	 * 
	 * <p>The notification method should take one parameter of type [INotification]</p>
	 */
	function setNotifyMethod( notifyMethod: Dynamic -> Void ): Void;
		
	/**
	 * Set the notification context.
	 */
	function setNotifyContext( notifyContext: Dynamic ): Void;

	/**
	 * Notify the interested object.
	 */
	function notifyObserver( notification: INotification ): Void;
		
	/**
	 * Compare the given object to the notificaiton context object.
	 */
	function compareNotifyContext( object: Dynamic ): Bool;
}