/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.interfaces;

/**
 * The interface definition for a PureMVC Model.
 * 
 * <p>In PureMVC, [IModel] implementors provide
 * access to [IProxy] objects by named lookup. </p>
 * 
 * <p>An [IModel] assumes these responsibilities:</p>
 * <ul>
 * <li>Maintain a cache of [IProxy] instances</li>
 * <li>Provide methods for registering, retrieving, and removing [IProxy] instances</li>
 * </ul>
 */
interface IModel 
{
	/**
	 * Register an [IProxy] instance with the [Model].
	 */
	function registerProxy( proxy: IProxy ): Void;

	/**
	 * Retrieve an [IProxy] instance from the Model.
	 */
	function retrieveProxy( proxyName: String ): IProxy;

	/**
	 * Remove an [IProxy] instance from the Model.
	 */
	function removeProxy( proxyName: String ): IProxy;

	/**
	 * Check if a [Proxy] is registered
	 */
	function hasProxy( proxyName: String ): Bool;	
}