package ;

import flixel.addons.display.FlxBackdrop;
import flixel.effects.particles.FlxEmitter;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

/**
 * ...
 * @author DIMN
 */
class GameOver extends FlxState
{
	private var gameOverText:FlxText;
	private var instructText:FlxText;
	private var score:Int;
	private var loaded:Int;

	private var snowEmitter:FlxEmitter;
	private var particles_count:Int = 200;
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

		var background = new FlxBackdrop(AssetPaths.backgroundhills__png, 0.8, 0, true, false);
		//background.velocity.x = -15;
		add(background);

		var background2 = new FlxBackdrop(AssetPaths.ground__png, 0.8, 0, true, false);
		background2.y = FlxG.height - 32;
		//background2.velocity.x = -100;
		add(background2);


		gameOverText = new FlxText();
		gameOverText.setFormat(AssetPaths.visitor1__ttf, 24, FlxColor.WHITE, "center");
		gameOverText.text = "SCORE: " + score + "\nGAME OVER";
		add(gameOverText);

		instructText = new FlxText();
		instructText.setFormat(AssetPaths.visitor1__ttf, 16, FlxColor.WHITE, "center");
		instructText.text = "TAP TO RESTART";
		add(instructText);

		snowEmitter = new FlxEmitter(0, 0);
		snowEmitter.setSize(FlxG.width, 0);
		add(snowEmitter);

		snowEmitter.velocity.set(-5, 60, 5, 70);

		for (i in 0 ... particles_count * 2) {
			var particle:SnowParticle = new SnowParticle();
			snowEmitter.add(particle);
		}

		snowEmitter.start(false, .1, 10);

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
	override public function update(dt:Float):Void
	{
		if (loaded == 0) {
			gameOverText.x = FlxG.width / 2 - gameOverText.width / 2;
			gameOverText.y = FlxG.height / 3 - gameOverText.height / 2;

			instructText.x = FlxG.width / 2 - instructText.width / 2;
			instructText.y = FlxG.height / 2 - instructText.height / 2;
		} else if (loaded > 0) {
			loaded--;
		}
		super.update(dt);
		if (FlxG.mouse.justPressed) {
			FlxG.switchState(new PlayState());
		}
	}

}
