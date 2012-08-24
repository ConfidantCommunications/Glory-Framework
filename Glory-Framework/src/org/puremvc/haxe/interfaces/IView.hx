/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.interfaces;
	
/**
 * The interface definition for a PureMVC View.
 * 
 * <p>In PureMVC, the [View] class assumes these responsibilities:
 * <ul>
 * <li>Maintain a cache of [IMediator] instances.</li>
 * <li>Provide methods for registering, retrieving, and removing [IMediators].</li>
 * <li>Managing the observer lists for each [INotification] in the application.</li>
 * <li>Providing a method for attaching [IObservers] to an [INotification]'s observer list.</li>
 * <li>Providing a method for broadcasting an [INotification].</li>
 * <li>Notifying the [IObservers] of a given [INotification] when it broadcast.</li>
 * </ul>
 */
interface IView 
{
	/**
	 * Register an [IObserver] to be notified of [INotifications] with a given name.
	 */
	function registerObserver ( noteName: String, observer: IObserver ): Void;

	/**
	 * Remove a group of observers from the observer list for a given Notification name.
	 */
	function removeObserver( notificationName: String, notifyContext: Dynamic ): Void;

	/**
	 * Notify the [IObservers] for a particular [INotification].
	 * 
	 * <p>All previously attached [IObservers] for this [INotification]'s
	 * list are notified and are passed a reference to the [INotification] in 
	 * the order in which they were registered.</p>
	 */
	function notifyObservers( note: INotification ): Void;
		
	/**
	 * Register an [IMediator] instance with the [View].
	 * 
	 * <p>Registers the [IMediator] so that it can be retrieved by name,
	 * and further interrogates the [IMediator] for its [INotification] interests.</p>
	 *
	 * <p>If the [IMediator] returns any [INotification] 
	 * names to be notified about, an [Observer] is created encapsulating 
	 * the [IMediator] instance's [handleNotification] method 
	 * and registering it as an [Observer] for all [INotifications] the 
	 * [IMediator] is interested in.</p>
	 */
	function registerMediator( mediator: IMediator ): Void;

	/**
	 * Retrieve an [IMediator] from the [View].
	 */
	function retrieveMediator( mediatorName: String ): IMediator;

	/**
	 * Remove an [IMediator] from the [View].
	 */
	function removeMediator( mediatorName: String ): IMediator;

	/**
	 * Check if a [Mediator] is registered or not
	 */
	function hasMediator( mediatorName: String ): Bool;
}