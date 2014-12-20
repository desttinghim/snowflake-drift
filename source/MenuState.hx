package;

import flixel.addons.display.FlxBackdrop;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	private var loaded:Int;
	private var titleText:FlxText;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		super.create();
		
		var background = new FlxBackdrop(AssetPaths.backgroundhills__png, 0.8, 0, true, false);
		background.velocity.x = -15;
		add(background);
		
		var background2 = new FlxBackdrop(AssetPaths.ground__png, 0.8, 0, true, false);
		background2.y = FlxG.height - 32;
		background2.velocity.x = -100;
		add(background2);
		
		titleText = new FlxText();
		titleText.alignment = "center";
		titleText.text = "SNOWFLAKE DRIFT";
		titleText.size = 24;
		titleText.angle = 15;
		add(titleText);
		
		loaded = 1;
		
		//FlxG.switchState(new PlayState());
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		if (loaded == 0) {
			loaded--;
			titleText.x = FlxG.width / 2 - titleText.width / 2;
			titleText.y = FlxG.height / 3 - titleText.height / 2;
		} else if(loaded > 0){
			loaded--;
		}
		super.update();
		if (FlxG.mouse.justReleased) {
			FlxG.switchState(new PlayState());
		}
	}	
}