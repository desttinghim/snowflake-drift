package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
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
	private var icicles:FlxSpriteGroup;
	private var score:Int;
	private var scoreText:FlxText;
	private var scoreUpdate:Bool;
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
		
		var rand = Math.round(Math.random() * 2);
		var topIce:FlxSprite = new FlxSprite(0, 0);
		var bottomIce:FlxSprite = new FlxSprite(0, FlxG.height);
		icicles = new FlxSpriteGroup(FlxG.width, rand == 0 ? -240 : (rand == 1 ? -160 : -80));
		topIce.makeGraphic(32, 320, FlxColor.WHITE);
		bottomIce.makeGraphic(32, 320, FlxColor.WHITE);
		icicles.velocity.x = -100;
		icicles.add(topIce);
		icicles.add(bottomIce);
		add(icicles);
		
		scoreText = new FlxText(8, 8, -1);
		scoreText.text = "Score: " + score;
		add(scoreText);
	
		scoreUpdate = true;
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
		if (FlxG.keys.justPressed.SPACE || FlxG.mouse.justPressed) {
			snowflake.velocity.y = -300;
		}
		if (icicles.x < snowflake.x && scoreUpdate) {
			score++;
			scoreText.text = "Score: " + score;
			scoreUpdate = false;
		}
		if (icicles.x < -32) {
			icicles.x = FlxG.width;
			var rand = Math.round(Math.random() * 2);
			icicles.y = rand == 0 ? -240 : (rand == 1 ? -160 : -80);
			scoreUpdate = true;
		}
		FlxG.overlap(snowflake, icicles, gameOver);
		if (snowflake.y > FlxG.height || snowflake.y < -32) {
			gameOver();
		}
		snowflake.angle = snowflake.velocity.y / 15;
		
	}
	
	private function gameOver(? S:FlxSprite, ? I:FlxSprite):Void {
		FlxG.switchState(new GameOver(score));
	}
}