/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.interfaces;

/**
 * The interface definition for a PureMVC Notification.
 *
 * <p>PureMVC does not rely upon underlying event models such 
 * as the one provided with Flash.</p>
 * 
 * <p>The Observer Pattern as implemented within PureMVC exists 
 * to support event-driven communication between the 
 * application and the actors of the MVC triad.</p>
 * 
 * <p>Notifications are not meant to be a replacement for Events.
 * Generally, [IMediator] implementors
 * place event listeners on their view components, which they
 * then handle in the usual way. This may lead to the broadcast of [Notification]s to 
 * trigger [ICommand]s or to communicate with other [IMediators]. [IProxy] and [ICommand]
 * instances communicate with each other and [IMediator]s 
 * by broadcasting [INotification]s.</p>
 * 
 * <p>A key difference between Flash [Event]s and PureMVC 
 * [Notification]s is that [Event]s follow the 
 * 'Chain of Responsibility' pattern, 'bubbling' up the display hierarchy 
 * until some parent component handles the [Event], while
 * PureMVC [Notification]s follow a 'Publish/Subscribe'
 * pattern. PureMVC classes need not be related to each other in a 
 * parent/child relationship in order to communicate with one another
 * using [Notification]s.
 */
interface INotification
{		
	/**
	 * Get the name of the [INotification] instance. 
	 * No setter, should be set by constructor only
	 */
	function getName(): String;

	/**
	 * Set the body of the [INotification] instance
	 */
	function setBody( body: Dynamic ): Void;
		
	/**
	 * Get the body of the [INotification] instance
	 */
	function getBody(): Dynamic;
		
	/**
	 * Set the type of the [INotification] instance
	 */
	function setType( type: String ): Void;
		
	/**
	 * Get the type of the [INotification] instance
	 */
	function getType(): String;

	/**
	 * Get the string representation of the [INotification] instance
	 */
	function toString(): String;
}