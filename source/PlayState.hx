package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.util.FlxMath;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	private var snowflake:FlxSprite;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		super.create();
		snowflake = new FlxSprite(FlxG.width / 2 - 16, FlxG.height / 2 - 16);
		snowflake.makeGraphic(32, 32, FlxColor.WHITE, false);
		snowflake.maxVelocity.y = 2000;
		snowflake.acceleration.y = 400;
		add(snowflake);
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
		super.update();
		if (FlxG.keys.justPressed.SPACE) {
			snowflake.velocity.y = -300;
		}
		snowflake.angle = snowflake.velocity.y / 15;
	}	
}