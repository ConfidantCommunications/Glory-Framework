package ca.confidant.glory;

import org.puremvc.haxe.interfaces.INotification;

typedef ChangePageData = {
	?newPage:String,
	?oldPage:String,
	?action:String
}
typedef StageSizeData = {
	w:Int,
	h:Int
}