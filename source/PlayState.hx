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
	
	private var icicles:Icicles;
	private var icicles2:Icicles;
	
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
		/*
		var backgroundcolor:FlxSprite = new FlxSprite(0, 0);
		backgroundcolor.makeGraphic(FlxG.width, FlxG.height, FlxColorUtil.makeFromARGB(0xff, 0x5d, 0xd3, 0xff), false);
		add(backgroundcolor);
		*/
		background = new FlxBackdrop(AssetPaths.backgroundhills__png, 0, 0, true, false);
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
		var rand = Math.round(Math.random() * 160);
		icicles = new Icicles(FlxG.width, -80 - rand);
		add(icicles);
		
		rand = Math.round(Math.random() * 160);
		icicles2 = new Icicles(FlxG.width + FlxG.width / 2 + 32, -80 - rand);
		add(icicles2);
		
		var ground = new FlxBackdrop(AssetPaths.ground__png, 0, 0, true, false);
		ground.y = FlxG.height - 32;
		ground.velocity.x = -100;
		add(ground);
		
		//Create score text
		score = 0;
		scoreText = new FlxText(8, 8, -1);
		scoreText.setFormat(AssetPaths.visitor1__ttf, 16, FlxColor.WHITE, "center");
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
			snowflake.velocity.y = -350;
		}
		if (icicles.x < snowflake.x && icicles.canAddScore()) {
			score+=1;
			scoreText.text = "Score: " + score;
		}
		if (icicles2.x < snowflake.x && icicles2.canAddScore()) {
			score+=1;
			scoreText.text = "Score: " + score;
		}
		if (snowflake.y > FlxG.height-32 || snowflake.y < -32 || FlxG.overlap(snowflake,icicles) || FlxG.overlap(snowflake,icicles2)) {
			gameOver();
		}
		snowflakeRotationSpeed = snowflake.velocity.y / 50;
		snowflake.angle += snowflakeRotationSpeed;
	}
	
	private function gameOver(? S:FlxSprite, ? I:FlxSprite):Void {
		FlxG.switchState(new GameOver(score));
	}
}