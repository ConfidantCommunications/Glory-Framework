/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.patterns.facade;

import org.puremvc.haxe.core.View;
import org.puremvc.haxe.core.Model;
import org.puremvc.haxe.core.Controller;
import org.puremvc.haxe.patterns.observer.Notification;
import org.puremvc.haxe.interfaces.IFacade;
import org.puremvc.haxe.interfaces.INotification;
import org.puremvc.haxe.interfaces.ICommand;
import org.puremvc.haxe.interfaces.IProxy;
import org.puremvc.haxe.interfaces.IMediator;
import org.puremvc.haxe.interfaces.IController;
import org.puremvc.haxe.interfaces.IModel;
import org.puremvc.haxe.interfaces.IView;

/**
 * A base Singleton [IFacade] implementation.
 * 
 * <p>In PureMVC, the [Facade] class assumes these 
 * responsibilities:</p>
 * <ul>
 * <li>Initializing the [Model], [View] and [Controller] Singletons.</li> 
 * <li>Providing all the methods defined by the [IModel, IView, & IController] interfaces.</li>
 * <li>Providing the ability to override the specific [Model], [View] and [Controller] Singletons created.</li> 
 * <li>Providing a single point of contact to the application for registering [Commands] and notifying [Observers]</li>
 * </ul>
 */
class Facade implements IFacade
{
	/**
	 * Constructor. 
	 * 
	 * <p>This [IFacade] implementation is a Singleton, so you should not call the constructor 
	 * directly, but instead call the static Singleton Factory method [Facade.getInstance()]</p>
	 */
	private function new()
	{
		instance = this;
		initializeFacade();	
	}

	/**
	 * Initialize the Singleton [Facade] instance.
	 * 
	 * <p>Called automatically by the constructor. Override in your
	 * subclass to do any subclass specific initializations. Be
	 * sure to call [super.initializeFacade()], though.</p>
	 */
	private function initializeFacade(): Void
	{
		initializeModel();
		initializeController();
		initializeView();
	}

	/**
	 * Facade Singleton Factory method
	 */
	public static function getInstance(): IFacade
	{
		if ( instance == null ) instance = new Facade();
		return instance;
	}

	/**
	 * Initialize the [Controller].
	 * 
	 * <p>Called by the [initializeFacade] method. Override this method in your subclass of [Facade] 
	 * if one or both of the following are true:</p>
	 * <ul>
	 * <li> You wish to initialize a different [IController].</li>
	 * <li> You have [Commands] to register with the [Controller] at startup.</li>		  
	 * </ul>
	 * <p>If you don't want to initialize a different [IController], 
	 * call [super.initializeController()] at the beginning of your
	 * method, then register [Command]s.</p>
	 */
	private function initializeController(): Void
	{
		if ( controller != null ) return;
		controller = Controller.getInstance();
	}

	/**
	 * Initialize the [Model].
	 * 
	 * <p>Called by the [initializeFacade] method. Override this method in your subclass of [Facade] 
	 * if one or both of the following are true:</p>
	 * <ul>
	 * <li> You wish to initialize a different [IModel].</li>
	 * <li> You have [Proxy]s to register with the Model that do not 
	 * retrieve a reference to the Facade at construction time.]</li> 
	 * </ul>
	 *
	 * <p>If you don't want to initialize a different [IModel], 
	 * call [super.initializeModel()] at the beginning of your
	 * method, then register [Proxy]s.
	 * Note: This method is <em>rarely</em> overridden; in practice you are more
	 * likely to use a [Command] to create and register [Proxy]s
	 * with the [Model], since [Proxy]s with mutable data will likely
	 * need to send [INotification]s and thus will likely want to fetch a reference to 
	 * the [Facade] during their construction. 
	 * </P>
	 */
	private function initializeModel(): Void
	{
		if ( model != null ) return;
		model = Model.getInstance();
	}
	
	/**
	 * Initialize the [View].
	 * 
	 * <p>Called by the [initializeFacade] method.
	 * Override this method in your subclass of [Facade] 
	 * if one or both of the following are true:</p>
	 * <ul>
	 * <li> You wish to initialize a different [IView].</li>
	 * <li> You have [Observers] to register with the [View]</li>
	 * </ul>
	 * If you don't want to initialize a different [IView], 
	 * call [super.initializeView()] at the beginning of your method, then register [IMediator] instances.
	 * <p>Note: This method is <i>rarely</i> overridden; in practice you are more
	 * likely to use a [Command] to create and register [Mediator]s
	 * with the [View], since [IMediator] instances will need to send 
	 * [INotification]s and thus will likely want to fetch a reference 
	 * to the [Facade] during their construction. </p>
	 */
	private function initializeView(): Void
	{
		if ( view != null ) return;
		view = View.getInstance();
	}

	/**
	 * Register an [ICommand] with the [Controller] by [Notification] name.
	 */
	public function registerCommand( notificationName: String, commandClassRef: Class<ICommand> ): Void
	{
		controller.registerCommand( notificationName, commandClassRef );
	}

	/**
	 * Remove a previously registered [ICommand] to [INotification] mapping from the [Controller].
	 */
	public function removeCommand( notificationName: String ): Void
	{
		controller.removeCommand( notificationName );
	}

	/**
	 * Check if a [Command] is registered for a given [Notification] 
	 */
	public function hasCommand( notificationName: String ): Bool
	{
		return controller.hasCommand( notificationName );
	}

	/**
	 * Register an [IProxy] with the [Model] by name.
	 */
	public function registerProxy( proxy: IProxy ): Void
	{
		model.registerProxy ( proxy );	
	}
				
	/**
	 * Retrieve an [IProxy] from the [Model] by name.
	 */
	public function retrieveProxy( proxyName: String ): IProxy
	{
		return model.retrieveProxy( proxyName );
	}

	/**
	 * Remove an [IProxy] from the [Model] by name.
	 */
	public function removeProxy( proxyName: String ): IProxy
	{
		var proxy: IProxy = null;
		if ( model != null ) proxy = model.removeProxy( proxyName );
		return proxy;	
	}

	/**
	 * Check if a [Proxy] is registered
	 */
	public function hasProxy( proxyName: String ): Bool
	{
		return model.hasProxy( proxyName );
	}

	/**
	 * Register a [IMediator] with the [View].
	 */
	public function registerMediator( mediator: IMediator ): Void
	{
		if ( view != null ) view.registerMediator( mediator );
	}

	/**
	 * Retrieve an [IMediator] from the [View].
	 */
	public function retrieveMediator( mediatorName: String ): IMediator
	{
		return view.retrieveMediator( mediatorName );
	}

	/**
	 * Remove an [IMediator] from the [View].
	 */
	public function removeMediator( mediatorName: String ): IMediator
	{
		var mediator: IMediator = null;
		if ( view != null ) mediator = view.removeMediator( mediatorName );			
		return mediator;
	}

	/**
	 * Check if a [Mediator] is registered or not
	 */
	public function hasMediator( mediatorName: String ): Bool
	{
		return view.hasMediator( mediatorName );
	}

	/**
	 * Create and send an [INotification].
	 * 
	 * <P>Keeps us from having to construct new notification 
	 * instances in our implementation code.
	 */ 
	public function sendNotification( notificationName: String, ?body: Dynamic, ?type: String ): Void
	{
		notifyObservers( new Notification( notificationName, body, type ) );
	}

	/**
	 * Notify [Observer]s.
	 */
	public function notifyObservers( notification: INotification ): Void
	{
		if ( view != null ) view.notifyObservers( notification );
	}

	// Private references to Model, View and Controller
	private var controller: IController;
	private var model: IModel;
	private var view: IView;
	
	// The Singleton Facade instance.
	private static var instance: IFacade; 

}