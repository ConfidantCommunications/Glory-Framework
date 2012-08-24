/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.core;

import org.puremvc.haxe.interfaces.IModel;
import org.puremvc.haxe.interfaces.IProxy;
	
/**
 * A Singleton [IModel] implementation.
 * 
 * <p>In PureMVC, the [Model] class provides access to model objects (Proxies) by named lookup.</p> 
 * 
 * <p>The [Model] assumes these responsibilities:</p>
 * <ul>
 * <li>Maintain a cache of [IProxy] instances.</li>
 * <li>Provide methods for registering, retrieving, and removing [IProxy] instances.</li>
 * </ul>
 * 
 * <p>Your application must register [IProxy] instances with the [Model]. Typically, you use an 
 * [ICommand] to create and register [IProxy] instances once the [Facade] has initialized the Core 
 * actors.</p>
 */
class Model implements IModel
{
	/**
	 * Constructor. 
	 * 
	 * <p>This [IModel] implementation is a Singleton, so you should not call the constructor 
	 * directly, but instead call the static Singleton Factory method [Model.getInstance()]</p>
	 */
	private function new()
	{
		instance = this;
		proxyMap = new Hash();	
		initializeModel();
	}
		
	/**
	 * Initialize the Singleton [Model] instance.
	 * 
	 * <p>Called automatically by the constructor, this is your opportunity to initialize the Singleton
	 * instance in your subclass without overriding the constructor.</p>
	 */
	private function initializeModel(): Void 
	{
	}
				
	/**
	 * [Model] Singleton Factory method.
	 */
	public static function getInstance(): IModel 
	{
		if ( instance == null ) instance = new Model();
		return instance;
	}

	/**
	 * Register an [IProxy] with the [Model].
	 */
	public function registerProxy( proxy: IProxy ): Void
	{
		proxyMap.set( proxy.getProxyName(), proxy );
		proxy.onRegister();
	}

	/**
	 * Retrieve an [IProxy] from the [Model].
	 */
	public function retrieveProxy( proxyName: String ): IProxy
	{
		return proxyMap.get( proxyName );
	}

	/**
	 * Check if a [Proxy] is registered
	 */
	public function hasProxy( proxyName:String ) : Bool
	{
		return proxyMap.exists( proxyName );
	}

	/**
	 * Remove an [IProxy] from the [Model].
	 */
	public function removeProxy( proxyName: String ): IProxy
	{
		var proxy: IProxy = proxyMap.get( proxyName );
		if ( proxy != null )
		{
			proxyMap.remove( proxyName );
			proxy.onRemove();			
		}
		return proxy;
	}

	// Mapping of proxyNames to [IProxy] instances
	private var proxyMap: Hash<IProxy>;

	// Singleton instance
	private static var instance: IModel;
		
}