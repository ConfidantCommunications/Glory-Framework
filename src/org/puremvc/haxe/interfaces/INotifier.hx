/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.interfaces;

/**
 * The interface definition for a PureMVC Notifier.
 * 
 * <p>[MacroCommand, Command, Mediator] and [Proxy]
 * all have a need to send [Notifications]. </p>
 * 
 * <p>The [INotifier] interface provides a common method called
 * [sendNotification] that relieves implementation code of 
 * the necessity to actually construct [Notifications].</p>
 * 
 * <p>The [Notifier] class, which all of the above mentioned classes
 * extend, also provides an initialized reference to the [Facade]
 * Singleton, which is required for the convienience method
 * for sending [Notifications], but also eases implementation as these
 * classes have frequent [Facade] interactions and usually require
 * access to the facade anyway.</p>
 */
interface INotifier
{
	/**
	 * Send a [INotification].
	 * 
	 * <p>Convenience method to prevent having to construct new 
	 * notification instances in our implementation code.</p>
	 */ 
	function sendNotification( notificationName: String, ?body: Dynamic, ?type: String ): Void; 		
}