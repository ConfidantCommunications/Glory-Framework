/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.core;

import org.puremvc.haxe.interfaces.IView;
import org.puremvc.haxe.interfaces.IObserver;
import org.puremvc.haxe.interfaces.INotification;
import org.puremvc.haxe.interfaces.IMediator;
import org.puremvc.haxe.patterns.observer.Observer;

//	import org.puremvc.haxe.patterns.observer.Observer;

/**
 * A Singleton [IView] implementation.
 * 
 * <p>In PureMVC, the [View] class assumes these responsibilities:</p>
 * <ul>
 * <li>Maintain a cache of [IMediator] instances.</li>
 * <li>Provide methods for registering, retrieving, and removing [IMediators].</li>
 * <li>Managing the observer lists for each [INotification] in the application.</li>
 * <li>Providing a method for attaching [IObservers] to an [INotification]'s observer list.</li>
 * <li>Providing a method for broadcasting an [INotification].</li>
 * <li>Notifying the [IObservers] of a given [INotification] when it broadcast.</li>
 * </ul>
 */
class View implements IView
{
	/**
	 * Constructor. 
	 * 
	 * <p>This [IView] implementation is a Singleton, 
	 * so you should not call the constructor 
	 * directly, but instead call the static Singleton 
	 * Factory method [View.getInstance()]</p>
	 */
	public function new()
	{
		instance = this;
		mediatorMap = new Hash();
		observerMap = new Hash();	
		initializeView();	
	}
	
	/**
	 * Initialize the Singleton [View] instance.
	 * 
	 * <p>Called automatically by the constructor, this is your opportunity to initialize the Singleton
	 * instance in your subclass without overriding the constructor.</p>
	 */
	private function initializeView(): Void 
	{
	}
	
	/**
	 * View Singleton Factory method.
	 */
	public static function getInstance(): IView 
	{
		if ( instance == null ) instance = new View();
		return instance;
	}
				
	/**
	 * Register an [IObserver] to be notified of [INotifications] with a given name.
	 */
	public function registerObserver( notificationName: String, observer: IObserver ): Void
	{
		if( !observerMap.exists( notificationName ) )
			observerMap.set( notificationName, new List() );
		observerMap.get( notificationName ).add( observer );	
	}

	/**
	 * Notify the [IObservers] for a particular [INotification].
	 * 
	 * <p>All previously attached [IObservers] for this [INotification]'s
	 * list are notified and are passed a reference to the [INotification] in 
	 * the order in which they were registered.</p>
	 */
	public function notifyObservers( notification: INotification ): Void
	{
		if( observerMap.exists( notification.getName() ) )
		{
			// Get a reference to the observers list for this notification name
			var observers_ref: List<IObserver> = observerMap.get( notification.getName() );

			// Copy observers from reference array to working array, 
			// since the reference array may change during the notification loop
			var observers: List<IObserver> = new List();
			var iterator_ref: Iterator<IObserver> = observers_ref.iterator();
			for ( observer in iterator_ref )
				observers.add( observer );
			
			var iterator: Iterator<IObserver> = observers.iterator();
			for ( observer in iterator )
				observer.notifyObserver( notification );
		}
	}

	/**
 	* Remove the observer for a given notifyContext from an observer list for a given Notification name.
 	*/
	public function removeObserver( notificationName: String, notifyContext: Dynamic ): Void
	{
		// the observer list for the notification under inspection
		var observers: List<IObserver> = observerMap.get( notificationName );

		// find the observer for the notifyContext
		for ( observer in observers.iterator() ) 
		{
			if ( observer.compareNotifyContext( notifyContext ) == true )
			{
				// there can only be one Observer for a given notifyContext 
				// in any given Observer list, so remove it and break
				observers.remove( observer );
				break;
			}
		}

		// Also, when a Notification's Observer list length falls to 
		// zero, delete the notification key from the observer map
		if ( observers.isEmpty() )
		{
			observerMap.remove( notificationName );		
		}
	}

	/**
	 * Register an [IMediator] instance with the [View].
	 * 
	 * <p>Registers the [IMediator] so that it can be retrieved by name,
	 * and further interrogates the [IMediator] for its [INotification] interests.</p>
	 * <p>
	 * If the [IMediator] returns any [INotification] 
	 * names to be notified about, an [Observer] is created encapsulating 
	 * the [IMediator] instance's [handleNotification] method 
	 * and registering it as an [Observer] for all [INotifications] the 
	 * [IMediator] is interested in.</p>
	 */
	public function registerMediator( mediator: IMediator ): Void
	{
		// do not allow re-registration (you must to removeMediator fist)
		if ( mediatorMap.exists( mediator.getMediatorName() ) ) return;

		// Register the Mediator for retrieval by name
		mediatorMap.set( mediator.getMediatorName(), mediator );
		
		// Get Notification interests, if any.
		var interests: Array<String> = mediator.listNotificationInterests();
		if ( interests.length > 0)
		{
			// Create Observer
			var observer: Observer = new Observer( mediator.handleNotification, mediator );
		
			// Register Mediator as Observer for its list of Notification interests
			for ( i in 0...interests.length)
				registerObserver( interests[ i ],  observer );
		}
		
		mediator.onRegister();
	}

	/**
	 * Retrieve an [IMediator] from the [View].
	 */
	public function retrieveMediator( mediatorName: String ): IMediator
	{
		return mediatorMap.get( mediatorName );
	}

	/**
 	* Remove an [IMediator] from the [View].
 	*/
	public function removeMediator( mediatorName: String ): IMediator
	{
		// Retrieve the named mediator
		var mediator:IMediator = mediatorMap.get( mediatorName );
	
		if ( mediator != null ) 
		{
			// for every notification this mediator is interested in...
			var interests: Array<String> = mediator.listNotificationInterests();
			for ( i in 0...interests.length ) 
			{
				// remove the observer linking the mediator 
				// to the notification interest
				removeObserver( interests[ i ], mediator );
			}	
		
			// remove the mediator from the map		
			mediatorMap.remove( mediatorName );

			// alert the mediator that it has been removed
			mediator.onRemove();
		}
	
		return mediator;
	}

	/**
	 * Check if a Mediator is registered or not
	 */
	public function hasMediator( mediatorName: String ): Bool
	{
		return mediatorMap.exists( mediatorName );
	}
					
	// Mapping of Mediator names to Mediator instances
	private var mediatorMap: Hash<IMediator>;

	// Mapping of Notification names to Observer lists
	private var observerMap: Hash<List<IObserver>>;
		
	// Singleton instance
	private static var instance	: IView;

}