package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.util.FlxColorUtil;
import flixel.util.FlxMath;
import flixel.addons.display.FlxBackdrop;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	private var background:FlxBackdrop;
	
	private var snowflake:FlxSprite;
	private var snowflakeRotationSpeed:Float;
	
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
		//Create background
		var backgroundcolor:FlxSprite = new FlxSprite(0, 0);
		backgroundcolor.makeGraphic(FlxG.width, FlxG.height, FlxColorUtil.makeFromARGB(0xff, 0x5d, 0xd3, 0xff), false);
		add(backgroundcolor);
		
		background = new FlxBackdrop(AssetPaths.backgroundhills__png, 0.8, 0, true, false);
		background.velocity.x = -15;
		add(background);
		
		//Create snowflake
		snowflake = new FlxSprite(FlxG.width / 2 - 16, FlxG.height / 4 - 16);
		snowflake.loadGraphic(AssetPaths.snowflake__png);
		snowflake.maxVelocity.y = 2000;
		snowflake.acceleration.y = 400;
		snowflakeRotationSpeed = 0;
		snowflake.width = snowflake.width - 8;
		snowflake.height = snowflake.height - 8;
		snowflake.centerOffsets();
		add(snowflake);
		
		//Create icicles
		var rand = Math.round(Math.random() * 2);
		var topIce:FlxSprite = new FlxSprite(0, 0);
		var bottomIce:FlxSprite = new FlxSprite(0, FlxG.height);
		
		topIce.loadGraphic(AssetPaths.icicle__png);
		topIce.height -= 32;
		topIce.width -= 32;
		topIce.centerOffsets();
		
		bottomIce.loadGraphic(AssetPaths.icicle__png);
		bottomIce.flipY = true;
		bottomIce.height -= 32;
		bottomIce.width -= 32;
		bottomIce.centerOffsets();
		
		icicles = new FlxSpriteGroup(FlxG.width, rand == 0 ? -240 : (rand == 1 ? -160 : -80));
		icicles.velocity.x = -100;
		icicles.add(topIce);
		icicles.add(bottomIce);
		add(icicles);
		
		var ground = new FlxBackdrop(AssetPaths.ground__png, 0, 0, true, false);
		ground.y = FlxG.height - 32;
		ground.velocity.x = -100;
		add(ground);
		
		//Create score text
		score = 0;
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
			score+=1;
			scoreText.text = "Score: " + score;
			scoreUpdate = false;
		}
		if (icicles.x < -icicles.width) {
			icicles.x = FlxG.width;
			var rand = Math.round(Math.random() * 2);
			icicles.y = rand == 0 ? -240 : (rand == 1 ? -160 : -80);
			scoreUpdate = true;
		}
		if (snowflake.y > FlxG.height || snowflake.y < -32 || FlxG.overlap(snowflake,icicles)) {
			gameOver();
		}
		snowflakeRotationSpeed = snowflake.velocity.y / 50;
		snowflake.angle += snowflakeRotationSpeed;
	}
	
	private function gameOver(? S:FlxSprite, ? I:FlxSprite):Void {
		FlxG.switchState(new GameOver(score));
	}
}