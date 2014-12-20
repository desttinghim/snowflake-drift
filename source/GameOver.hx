package ;

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
 * ...
 * @author DIMN
 */
class GameOver extends FlxState
{
	private var gameOverText:FlxText;
	private var score:Int;
	private var loaded:Int;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	
	public function new(score):Void {
		super();
		this.score = score;
	}
	
	override public function create():Void
	{
		super.create();
		gameOverText = new FlxText();
		gameOverText.alignment = "center";
		gameOverText.text = "SCORE: " + score + "\nGAME OVER. \n TAP TO PLAY AGAIN";
		gameOverText.size = 24;
		add(gameOverText);
		loaded = 1;
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
			gameOverText.x = FlxG.width / 2 - gameOverText.width / 2;
			gameOverText.y = FlxG.height / 2 - gameOverText.height / 2;
			
		} else if (loaded > 0) {
			loaded--;
		}
		super.update();
		if (FlxG.mouse.justPressed) {
			FlxG.switchState(new PlayState());
		}
	}
	
}