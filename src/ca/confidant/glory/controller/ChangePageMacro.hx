/*
 * Copyright (c) 2018 D. Allan Dowdeswell
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
 * THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
package ca.confidant.glory.controller;

	import org.puremvc.haxe.patterns.command.AsyncMacroCommand;	

	/*
	 * @author Allan Dowdeswell
	 * This is first triggered by the GotoIntroMacro in the LoadStartingPageCommand command, then by the page controls, whenever a page change is needed.
	 */
    class ChangePageMacro extends AsyncMacroCommand
    {
		
		override function initializeAsyncMacroCommand () : Void
		{
			addSubCommand( PageTransitionOutCommand );
			addSubCommand( RemovePageCommand );
			#if !silentMode
			addSubCommand( DestroyPageSoundsCommand );
			#end
			addSubCommand( AsyncLoadAssetsCommand );
			addSubCommand( BuildPageCommand );
			#if !silentMode
			addSubCommand( InitPageSoundsCommand );
			#end
			addSubCommand( ChangePageCleanup );
			#if js
			addSubCommand( UpdatePushStateCommand );
			// addSubCommand( UpdateHtmlBackgroundCommand );//now in PageComponent init function
			#end
		}

    }
