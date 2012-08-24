/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.patterns.command;

import org.puremvc.haxe.interfaces.INotification;
import org.puremvc.haxe.interfaces.ICommand;
import org.puremvc.haxe.interfaces.INotifier;
import org.puremvc.haxe.patterns.observer.Notifier;

/**
 * A base [ICommand] implementation.
 * 
 * <p>Your subclass should override the [execute] 
 * method where your business logic will handle the [INotification].</p>
 */
class SimpleCommand extends Notifier, implements ICommand 
{
	/**
	 * Fulfill the use-case initiated by the given [INotification].
	 * 
	 * <p>In the Command Pattern, an application use-case typically
	 * begins with some user action, which results in an [INotification] being broadcast, which 
	 * is handled by business logic in the [execute] method of an [ICommand].</p>
	 */
	public function execute( notification: INotification ) : Void
	{

	}
								
}