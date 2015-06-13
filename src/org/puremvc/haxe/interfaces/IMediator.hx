/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.interfaces;
	
/**
 * The interface definition for a PureMVC Mediator.
 *
 * <p>In PureMVC, [IMediator] implementors assume these responsibilities:</p>
 * <ul>
 * <li>Implement a common method which returns a list of all [INotification]s 
 * the [IMediator] has interest in.</li>
 * <li>Implement a common notification (callback) method.</li>
 * </ul>
 * <p>Additionally, [IMediator]s typically:</p>
 * <ul>
 * <li>Act as an intermediary between one or more view components such as text boxes or 
 * list controls, maintaining references and coordinating their behavior.</li>
 * <li>In Flash-based apps, this is often the place where event listeners are
 * added to view components, and their handlers implemented.</li>
 * <li>Respond to and generate [INotifications], interacting with of 
 * the rest of the PureMVC app.</li>
 * </ul>
 * <p>When an [IMediator] is registered with the [IView], 
 * the [IView] will call the [IMediator]'s 
 * [listNotificationInterests] method. The [IMediator] will 
 * return an [Array] of [INotification] names which 
 * it wishes to be notified about.</p>
 * 
 * <p>The [IView] will then create an [Observer] object 
 * encapsulating that [IMediator]'s ([handleNotification]) method
 * and register it as an Observer for each [INotification] name returned by 
 * [listNotificationInterests].</p>
 */
interface IMediator
{
		
	/**
	 * Get the [IMediator] instance name
	 */
	function getMediatorName(): String;
		
	/**
	 * Get the [IMediator]'s view component.
	 */
	function getViewComponent(): Dynamic;

	/**
	 * Set the [IMediator]'s view component.
	 */
	function setViewComponent( viewComponent: Dynamic ): Void;
		
	/**
	 * List [INotification] interests.
	 */
	function listNotificationInterests(): Array<String>;
		
	/**
	 * Handle an [INotification].
	 */
	function handleNotification( notification: INotification ): Void;

	/**
	 * Called by the [View] when the [Mediator] is registered
	 */ 
	function onRegister(): Void;

	/**
	 * Called by the [View] when the [Mediator] is removed
	 */ 
	function onRemove(): Void;

}