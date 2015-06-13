/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.patterns.observer;

import org.puremvc.haxe.interfaces.INotification;
	
/**
 * A base [INotification] implementation.
 * 
 * <p>PureMVC does not rely upon underlying event models such 
 * as the one provided with Flash.</p>
 * 
 * <p>The Observer Pattern as implemented within PureMVC exists 
 * to support event-driven communication between the 
 * application and the actors of the MVC triad.</p>
 * 
 * <p>Notifications are not meant to be a replacement for Events.
 * Generally, [IMediator] implementors place event listeners on their view components, which they
 * then handle in the usual way. This may lead to the broadcast of [Notification]s to 
 * trigger [ICommand]s or to communicate with other [IMediators]. [IProxy] and [ICommand]
 * instances communicate with each other and [IMediator]s  by broadcasting [INotification]s.</p>
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
class Notification implements INotification
{
	/**
	 * Constructor. 
	 */
	public function new( name: String, ?body: Dynamic, ?type: String )
	{
		this.name = name;
		if ( body != null )
			this.body = body;
		if ( type != null )
			this.type = type;
	}
	
	/**
	 * Get the name of the [Notification] instance.
	 */
	public function getName(): String
	{
		return name;
	}
		
	/**
	 * Set the body of the [Notification] instance.
	 */
	public function setBody( body: Dynamic ): Void
	{
		this.body = body;
	}
		
	/**
	 * Get the body of the [Notification] instance.
	 */
	public function getBody(): Dynamic
	{
		return body;
	}
		
	/**
	 * Set the type of the [Notification] instance.
	 */
	public function setType( type: String ): Void
	{
		this.type = type;
	}
	
	/**
	 * Get the type of the [Notification] instance.
	 */
	public function getType(): String
	{
		return type;
	}

	/**
	 * Get the string representation of the [Notification] instance.
	 */
	public function toString(): String
	{
		var msg: String = "Notification Name: " + getName();
		msg += "\nBody:" + if( body == null ) "null" else body.toString();
		msg += "\nType:" + if( type == null ) "null" else type;
		return msg;
	}
	
	// the name of the notification instance
	private var name			: String;

	// the type of the notification instance
	private var type			: String;

	// the body of the notification instance
	private var body			: Dynamic;
	
}