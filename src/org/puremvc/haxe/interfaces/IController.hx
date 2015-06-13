/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.interfaces;

/**
 * The interface definition for a PureMVC Controller.
 * 
 * <p>In PureMVC, an [IController] implementor 
 * follows the 'Command and Controller' strategy, and 
 * assumes these responsibilities:</p>
 * <ul>
 * <li> Remembering which [ICommand]s 
 * are intended to handle which [INotifications].</li>
 * <li> Registering itself as an [IObserver] with
 * the [View] for each [INotification] 
 * that it has an [ICommand] mapping for.</li>
 * <li> Creating a new instance of the proper [ICommand]
 * to handle a given [INotification] when notified by the [View].</li>
 * <li> Calling the [ICommand]'s [execute]
 * method, passing in the [INotification].</li>
 * </ul>
 */
interface IController
{
	/**
	 * Register a particular [ICommand] class as the handler 
	 * for a particular [INotification].
	 */
	function registerCommand( notificationName: String, commandClassRef: Class<ICommand> ): Void;
	
	/**
	 * Execute the [ICommand] previously registered as the
	 * handler for [INotification]s with the given notification name.
	 */
	function executeCommand( notification: INotification ): Void;

	/**
	 * Remove a previously registered [ICommand] to [INotification] mapping.
	 */
	function removeCommand( notificationName: String ): Void;

	/**
	 * Check if a Command is registered for a given Notification 
	 */
	function hasCommand( notificationName: String ): Bool;

}