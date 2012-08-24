/* 
 PureMVC haXe Port by Marco Secchi <marco.secchi@puremvc.org>
 PureMVC - Copyright(c) 2006-08 Futurescale, Inc., Some rights reserved. 
 Your reuse is governed by the Creative Commons Attribution 3.0 License 
 */
package org.puremvc.haxe.patterns.command;

import org.puremvc.haxe.interfaces.ICommand;
import org.puremvc.haxe.interfaces.INotification;
import org.puremvc.haxe.interfaces.INotifier;
import org.puremvc.haxe.patterns.observer.Notifier;
	
/**
 * A base [ICommand] implementation that executes other [ICommand]s.
 *  
 * <p>A [MacroCommand] maintains an list of
 * [ICommand] Class references called <em>SubCommands</em>.</p>
 * 
 * <p>When [execute] is called, the [MacroCommand] 
 * instantiates and calls [execute] on each of its <em>SubCommands</em> turn.
 * Each <em>SubCommand</em> will be passed a reference to the original
 * [INotification] that was passed to the [MacroCommand]'s 
 * [execute] method.</p>
 * 
 * <p>Unlike [SimpleCommand], your subclass
 * should not override [execute], but instead, should 
 * override the [initializeMacroCommand] method, 
 * calling [addSubCommand] once for each <em>SubCommand</em>
 * to be executed.</p>
 */
class MacroCommand extends Notifier, implements ICommand
{
		
	private var subCommands: List<Class<ICommand>>;
		
	/**
	 * Constructor. 
	 * 
	 * <p>You should not need to define a constructor, 
	 * instead, override the [initializeMacroCommand]
	 * method.</p>
	 * 
	 * <p>
	 * If your subclass does define a constructor, be 
	 * sure to call [super()].</p>
	 */
	public function new()
	{
		super();
		subCommands = new List();
		initializeMacroCommand();			
	}
	
	/**
	 * Initialize the [MacroCommand].
	 * 
	 * <p>In your subclass, override this method to 
	 * initialize the [MacroCommand]'s <em>SubCommand</em>  
	 * list with [ICommand] class references.
	 *
	 * <p>Note that <i>SubCommand</i>s may be any [ICommand] implementor,
	 * [MacroCommand]s or [SimpleCommands] are both acceptable.</p>
	 */
	private function initializeMacroCommand(): Void
	{
	}
	
	/**
	 * Add a <em>SubCommand</em>.
	 * 
	 * <p>The <i>SubCommands</i> will be called in First In/First Out (FIFO)
	 * order.</p>
	 */
	private function addSubCommand( commandClassRef: Class<ICommand> ): Void
	{
		subCommands.add( commandClassRef );
	}
	
	/** 
	 * Execute this [MacroCommand]'s <em>SubCommands</em>.
	 * 
	 * <p>The <i>SubCommands</i> will be called in First In/First Out (FIFO)
	 * order.</p>
	 */
	public function execute( notification: INotification ): Void
	{
		while ( !subCommands.isEmpty() )
		{
			var commandClassRef: Class<ICommand> = subCommands.pop();
			var commandInstance: ICommand = Type.createInstance( commandClassRef, [] );
			commandInstance.execute( notification );
		}
	}
							
}