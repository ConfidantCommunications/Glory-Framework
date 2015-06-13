/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.interfaces;
	
/**
 * The interface definition for a PureMVC Proxy.
 *
 * <p>In PureMVC, [IProxy] implementors assume these responsibilities:</p>
 * <ul>
 * <li>Implement a common method which returns the name of the [Proxy].</li>
 * </ul>
 * <p>Additionally, [IProxy]s typically:</p>
 * <ul>
 * <li>Maintain references to one or more pieces of model data.</li>
 * <li>Provide methods for manipulating that data.</li>
 * <li>Generate [INotifications] when their model data changes.</li>
 * <li>Expose their name as a [public static var] called [NAME].</li>
 * <li>Encapsulate interaction with local or remote services used to fetch and persist model data.</li>
 * </ul>
 */
interface IProxy
{
		
	/**
	 * Get the [Proxy] name
	 */
	function getProxyName(): String;

	/**
	 * Set the data object
	 */
	function setData( data: Dynamic ): Void;
	
	/**
	 * Get the data object
	 */
	function getData(): Dynamic; 
	
	/**
	 * Called by the Model when the [Proxy] is registered
	 */ 
	function onRegister(): Void;

	/**
	 * Called by the Model when the [Proxy] is removed
	 */ 
	function onRemove(): Void;
		
}