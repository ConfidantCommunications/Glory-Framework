class ApplicationMain
{
	
	public static function main()
	{
		nme.Lib.setPackage("Confidant Communications", "GloryDemo", "ca.confidant.gloryDemo", "1.0.0");
		
		
		nme.display.Stage.shouldRotateInterface = function(orientation:Int):Bool
		{
			
			if (orientation == nme.display.Stage.OrientationLandscapeLeft || orientation == nme.display.Stage.OrientationLandscapeRight)
			{
				return true;
			}
			return false;
			
		}
		
		nme.Lib.create(function()
			{
				if (960 == 0 && 640 == 0)
				{
					nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
					nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
				}
				
				// Need to wait for resize for the stage size to reflect properly
				
				nme.Lib.current.stage.addEventListener (nme.events.Event.RESIZE, initialize);
			},
			960, 640,
			30,
			0xfff6e2,
			(true ? nme.Lib.HARDWARE : 0) |
			(false ? nme.Lib.ALLOW_SHADERS : 0) |
			(false ? nme.Lib.RESIZABLE : 0) |
			(1 == 4 ? nme.Lib.HW_AA_HIRES : 0) |
			(1 == 2 ? nme.Lib.HW_AA : 0),
			"Glory Framework Demo"
		);
		
	}
	
	
	private static function initialize (event:nme.events.Event):Void
	{
		nme.Lib.current.stage.removeEventListener (nme.events.Event.RESIZE, initialize);
		
		var hasMain = false;
				
		for (methodName in Type.getClassFields(Main))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}
		
		if (hasMain)
		{
			Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
		}
		else
		{
			nme.Lib.current.addChild(cast (Type.createInstance(Main, []), nme.display.DisplayObject));	
		}
	}
	
	
	public static function getAsset(inName:String):Dynamic
	{
		
		if (inName == "assets/closeX.svg")
		{
			
			return nme.Assets.getText ("assets/closeX.svg");
			
		}
		
		if (inName == "assets/config.xml")
		{
			
			return nme.Assets.getText ("assets/config.xml");
			
		}
		
		if (inName == "assets/duck.svg")
		{
			
			return nme.Assets.getText ("assets/duck.svg");
			
		}
		
		if (inName == "assets/easyXML.jpg")
		{
			
			return nme.Assets.getBitmapData ("assets/easyXML.jpg");
			
		}
		
		if (inName == "assets/heres-the-deal.jpg")
		{
			
			return nme.Assets.getBitmapData ("assets/heres-the-deal.jpg");
			
		}
		
		if (inName == "assets/nav/bHome.png")
		{
			
			return nme.Assets.getBitmapData ("assets/nav/bHome.png");
			
		}
		
		if (inName == "assets/nav/bLeft.png")
		{
			
			return nme.Assets.getBitmapData ("assets/nav/bLeft.png");
			
		}
		
		if (inName == "assets/nav/bOptions.png")
		{
			
			return nme.Assets.getBitmapData ("assets/nav/bOptions.png");
			
		}
		
		if (inName == "assets/nav/bRight.png")
		{
			
			return nme.Assets.getBitmapData ("assets/nav/bRight.png");
			
		}
		
		if (inName == "assets/nav/close.png")
		{
			
			return nme.Assets.getBitmapData ("assets/nav/close.png");
			
		}
		
		if (inName == "assets/nav/panLeft.png")
		{
			
			return nme.Assets.getBitmapData ("assets/nav/panLeft.png");
			
		}
		
		if (inName == "assets/nav/panRight.png")
		{
			
			return nme.Assets.getBitmapData ("assets/nav/panRight.png");
			
		}
		
		if (inName == "assets/nme.svg")
		{
			
			return nme.Assets.getText ("assets/nme.svg");
			
		}
		
		if (inName == "assets/options/actor_0000_background.png")
		{
			
			return nme.Assets.getBitmapData ("assets/options/actor_0000_background.png");
			
		}
		
		if (inName == "assets/options/actor_0001_duck.png")
		{
			
			return nme.Assets.getBitmapData ("assets/options/actor_0001_duck.png");
			
		}
		
		if (inName == "assets/options/actor_0002_home.png")
		{
			
			return nme.Assets.getBitmapData ("assets/options/actor_0002_home.png");
			
		}
		
		if (inName == "assets/options/actor_0003_cow.png")
		{
			
			return nme.Assets.getBitmapData ("assets/options/actor_0003_cow.png");
			
		}
		
		if (inName == "assets/options/actor_0004_easyXML.png")
		{
			
			return nme.Assets.getBitmapData ("assets/options/actor_0004_easyXML.png");
			
		}
		
		if (inName == "assets/options/actor_0005_limerick.png")
		{
			
			return nme.Assets.getBitmapData ("assets/options/actor_0005_limerick.png");
			
		}
		
		if (inName == "assets/options/choose.png")
		{
			
			return nme.Assets.getBitmapData ("assets/options/choose.png");
			
		}
		
		if (inName == "assets/p1/limerickPCM.wav")
		{
			
			return nme.Assets.getSound ("assets/p1/limerickPCM.wav");
			
		}
		
		if (inName == "assets/p1/pageObject_0000_bg.jpg")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0000_bg.jpg");
			
		}
		
		if (inName == "assets/p1/pageObject_0001_skin.png")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0001_skin.png");
			
		}
		
		if (inName == "assets/p1/pageObject_0002_hose.png")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0002_hose.png");
			
		}
		
		if (inName == "assets/p1/pageObject_0003_pants.png")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0003_pants.png");
			
		}
		
		if (inName == "assets/p1/pageObject_0004_flameshoe.png")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0004_flameshoe.png");
			
		}
		
		if (inName == "assets/p1/pageObject_0005_shoe.png")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0005_shoe.png");
			
		}
		
		if (inName == "assets/p1/pageObject_0006_shirt.png")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0006_shirt.png");
			
		}
		
		if (inName == "assets/p1/pageObject_0007_truck.png")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0007_truck.png");
			
		}
		
		if (inName == "assets/p1/pageObject_0008_firemen.png")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0008_firemen.png");
			
		}
		
		if (inName == "assets/p1/pageObject_0009_can.png")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0009_can.png");
			
		}
		
		if (inName == "assets/p1/pageObject_0010_bw.png")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0010_bw.png");
			
		}
		
		if (inName == "assets/p1/pageObject_0011_text.png")
		{
			
			return nme.Assets.getBitmapData ("assets/p1/pageObject_0011_text.png");
			
		}
		
		if (inName == "assets/speaker.png")
		{
			
			return nme.Assets.getBitmapData ("assets/speaker.png");
			
		}
		
		if (inName == "assets/title/star.svg")
		{
			
			return nme.Assets.getText ("assets/title/star.svg");
			
		}
		
		if (inName == "assets/title/title.jpg")
		{
			
			return nme.Assets.getBitmapData ("assets/title/title.jpg");
			
		}
		
		return null;
	}
	
}