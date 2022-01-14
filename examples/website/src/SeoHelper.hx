package;

import php.Lib;
import haxe.xml.Access;

class SeoHelper {
  static function main() {
	var configPath = './assets/config.xml';
	var theXml:String="";
	if(sys.FileSystem.exists(configPath)){
		theXml = sys.io.File.getContent(configPath);
		Lib.println('<div id="seoContent">');
		var fast = new Access(Xml.parse(theXml));

		var root = fast.node.pages;
		// var gets = Lib.toHaxeArray(php.SuperGlobal._SERVER);//native associative array
		
		// for(k=>v in php.SuperGlobal._SERVER){
		// 	Lib.println(k+":"+v);
		// }
		try{
			var urlPath:String = php.SuperGlobal._SERVER['PATH_INFO'];
			urlPath = urlPath.substr(1);

			for(thisPage in root.nodes.page){
				if(thisPage.att.id == urlPath){
					// return thisLayout.nodes.islandPosition.length;
					// Lib.println("seo: "+thisPage.att.seo);
					if(thisPage.has.seo && sys.FileSystem.exists(thisPage.att.seo)){
						var seoText = sys.io.File.getContent(thisPage.att.seo);
						Lib.println(seoText);
					}
					for(thisActor in thisPage.nodes.actor){
						if(thisActor.has.forSeo && thisActor.att.forSeo == "true"){
							Lib.println("trying to get "+thisActor.att.src);
							Lib.println(thisActor.has.src);
							Lib.println(sys.FileSystem.exists(thisActor.att.src));
							if(thisActor.has.src && sys.FileSystem.exists("assets/"+thisActor.att.src)){
								try{
									switch(thisActor.att.type){
										case "text":
											Lib.println(sys.io.File.getContent("assets/"+thisActor.att.src));
										case "prop":
											Lib.println('<img src="assets/'+thisActor.att.src+'" '+'alt="'+thisActor.att.text+'" />');

									}
								} catch(e:Dynamic){
									Lib.println(e);
								}
							}
							// Lib.println(thisActor.att.forSeo);
						}
					}
					// Lib.println("PATHINFO: "+php.SuperGlobal._SERVER['PATH_INFO']);
				}
			}
		} catch (e:Dynamic){
			Lib.println(e);
		}
		Lib.println('</div>');
	} else {
		Lib.println('XML Not found.');

	}
  }
}