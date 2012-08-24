/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.patterns.observer;

import org.puremvc.haxe.interfaces.IFacade;
import org.puremvc.haxe.interfaces.INotifier;
import org.puremvc.haxe.patterns.observer.Notification;
import org.puremvc.haxe.patterns.facade.Facade;
	
/**
 * A Base [INotifier] implementation.
 * 
 * <p>[MacroCommand, Command, Mediator] and [Proxy] 
 * all have a need to send [Notifications].</p>
 *
 * <p>The [INotifier] interface provides a common method called
 * [sendNotification] that relieves implementation code of 
 * the necessity to actually construct [Notifications].</p>
 * 
 * <p>The [Notifier] class, which all of the above mentioned classes
 * extend, provides an initialized reference to the [Facade]
 * Singleton, which is required for the convienience method
 * for sending [Notifications], but also eases implementation as these
 * classes have frequent [Facade] interactions and usually require
 * access to the facade anyway.</p>
 */
class Notifier implements INotifier
{
	public function new()
	{
		facade = Facade.getInstance();
	}

	/**
	 * Send an [INotification]s.
	 * 
	 * <p>Keeps us from having to construct new notification 
	 * instances in our implementation code.</p>
	 */ 
	public function sendNotification( notificationName: String, ?body: Dynamic, ?type: String ): Void 
	{
		facade.sendNotification( notificationName, body, type );
	}
	
	// Local reference to the Facade Singleton
	private var facade: IFacade;
}