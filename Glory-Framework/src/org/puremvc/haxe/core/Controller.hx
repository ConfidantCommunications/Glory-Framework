/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.core;

import org.puremvc.haxe.core.View;
import org.puremvc.haxe.interfaces.ICommand;
import org.puremvc.haxe.interfaces.IView;
import org.puremvc.haxe.interfaces.IController;
import org.puremvc.haxe.interfaces.INotification;
import org.puremvc.haxe.patterns.observer.Observer;
	
/**
 * A Singleton [IController] implementation.
 * 
 * <p>In PureMVC, the [Controller] class follows the
 * 'Command and Controller' strategy, and assumes these responsibilities:</p>
 * <ul>
 * <li> Remembering which [ICommand]s are intended to handle which [INotifications].</li>
 * <li> Registering itself as an [IObserver] with the [View] for each [INotification] 
 * that it has an [ICommand] mapping for.</li>
 * <li> Creating a new instance of the proper [ICommand] to handle a given [INotification]
 * when notified by the [View].</li>
 * <li> Calling the [ICommand]'s [execute] method, passing in the [INotification].</li> 
 * </ul>
 * 
 * <p>Your application must register [ICommands] with the Controller.
 * The simplest way is to subclass [Facade], 
 * and use its [initializeController] method to add your registrations.</p>
 */
class Controller implements IController
{
		
	/**
	 * Constructor. 
	 * 
	 * <p>This [IController] implementation is a Singleton, so you cannot
	 * call the constructor directly, but instead call the static Singleton 
	 * Factory method [Controller.getInstance()]</p>
	 */
	private function new()
	{
		instance = this;
		commandMap = new Hash();	
		initializeController();	
	}
		
	/**
	 * Initialize the Singleton [Controller] instance.
	 * 
	 * <p>Called automatically by the constructor.</p> 
	 * 
	 * <p>Note that if you are using a subclass of [View]
	 * in your application, you should <em>also</em> subclass [Controller]
	 * and override the [initializeController] method.
	 */
	private function initializeController(): Void 
	{
		view = View.getInstance();
	}

	/**
	 * [Controller] Singleton Factory method.
	 */
	public static function getInstance(): IController
	{
		if ( instance == null ) instance = new Controller();
		return instance;
	}

	/**
	 * If an [ICommand] has previously been registered 
	 * to handle a the given [INotification], then it is executed.
	 */
	public function executeCommand( note: INotification ): Void
	{
		var commandClassRef: Class<ICommand> = commandMap.get( note.getName() );
		if ( commandClassRef == null ) return;

		var commandInstance: ICommand = Type.createInstance( commandClassRef, [] );
		commandInstance.execute( note );
	}

	/**
	 * Register a particular [ICommand] class as the handler for a particular [INotification].
	 * 
	 * <p>If an [ICommand] has already been registered to 
	 * handle [INotification]s with this name, it is no longer
	 * used, the new [ICommand] is used instead.</p>
	 * 
	 * <p>The Observer for the new ICommand is only created if this the 
	 * first time an ICommand has been regisered for this Notification name.</p>
	 */
	public function registerCommand( notificationName: String, commandClassRef: Class<ICommand> ): Void
	{
		if ( !commandMap.exists( notificationName ) )
			view.registerObserver( notificationName, new Observer( executeCommand, this ) );
		commandMap.set( notificationName, commandClassRef );
	}

	/**
	 * Check if a Command is registered for a given Notification 
	 */
	public function hasCommand( notificationName: String ): Bool
	{
		return commandMap.exists( notificationName );
	}
	
	/**
	 * Remove a previously registered [ICommand] to [INotification] mapping.
	 */
	public function removeCommand( notificationName: String ): Void
	{
		// if the Command is registered...
		if ( hasCommand( notificationName ) )
		{
			// remove the observer
			view.removeObserver( notificationName, this );

			commandMap.remove( notificationName );
		}
	}
	
	// Local reference to View 
	private var view: IView;
	
	// Mapping of Notification names to Command Class references
	private var commandMap: Hash<Class<ICommand>>;

	// Singleton instance
	private static var instance: IController;

}