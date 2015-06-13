/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.interfaces;

/**
 * The interface definition for a PureMVC Facade.
 *
 * <p>The Facade Pattern suggests providing a single
 * class to act as a central point of communication 
 * for a subsystem.</p>
 * 
 * <p>In PureMVC, the Facade acts as an interface between
 * the core MVC actors (Model, View, Controller) and
 * the rest of your application.</p>
 */
interface IFacade
{
	/**
	 * Register an [IProxy] with the [Model] by name.
	 */
	function registerProxy( proxy: IProxy ): Void;

	/**
	 * Retrieve a [IProxy] from the [Model] by name.
	 */
	function retrieveProxy( proxyName: String ): IProxy;
		
	/**
	 * Remove an [IProxy] instance from the [Model] by name.
	 */
	function removeProxy( proxyName: String ): IProxy;

	/**
	 * Check if a [Proxy] is registered
	 */
	function hasProxy( proxyName: String ): Bool;
		
	/**
	 * Register an [ICommand] with the [Controller].
	 */
	function registerCommand( noteName: String, commandClassRef: Class<ICommand> ) : Void;
		
	/**
	 * Remove a previously registered [ICommand] to [INotification] mapping from the Controller.
	 */
	function removeCommand( notificationName: String ): Void;

	/**
	 * Check if a [Command] is registered for a given Notification 
	 */
	function hasCommand( notificationName: String ): Bool;
		
	/**
	 * Register an [IMediator] instance with the [View].
	 */
	function registerMediator( mediator: IMediator ) :Void;

	/**
	 * Retrieve an [IMediator] instance from the [View].
	 */
	function retrieveMediator( mediatorName: String ): IMediator;

	/**
	 * Remove a [IMediator] instance from the [View].
	 */
	function removeMediator( mediatorName: String ): IMediator;

	/**
	 * Check if a [Mediator] is registered or not
	 */
	function hasMediator( mediatorName: String ): Bool;

	/**
	 * Create and send an [INotification].
	 */
	function sendNotification( notificationName: String, ?body: Dynamic, ?type: String ): Void;

	/**
	 * Notify the [IObservers] for a particular [INotification].
	 * 
	 * <p>All previously attached [IObservers] for this [INotification]'s
	 * list are notified and are passed a reference to the [INotification] in 
	 * the order in which they were registered.</p>
	 * 
	 * <p>NOTE: Use this method only if you are sending custom Notifications. Otherwise
	 * use the sendNotification method which does not require you to create the
	 * Notification instance.</p> 
	 */
	function notifyObservers( note: INotification ): Void;
}