package;

import flixel.addons.display.FlxBackdrop;
import flixel.effects.particles.FlxEmitter;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	private var loaded:Int;
	private var titleText:FlxText;
	private var instructText:FlxText;
	private var ackText:FlxText;
	private var snowEmitter:FlxEmitter;
	private var particles_count:Int = 200;
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
		titleText.setFormat(AssetPaths.visitor1__ttf, 24, FlxColor.WHITE, "center");
		titleText.text = "SNOWFLAKE DRIFT";
		add(titleText);

		instructText = new FlxText();
		instructText.setFormat(AssetPaths.visitor1__ttf, 16, FlxColor.WHITE, "center");
		instructText.text = "TAP TO BEGIN";
		add(instructText);

		ackText = new FlxText();
		ackText.setFormat(AssetPaths.visitor1__ttf, 8, FlxColor.WHITE, "center");
		ackText.text = "Sound effects from SoundBible.com";
		add(ackText);

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
	override public function update(dt:Float):Void
	{
		if (loaded == 0) {
			loaded--;
			titleText.x = FlxG.width / 2 - titleText.width / 2;
			titleText.y = FlxG.height / 3 - titleText.height / 2;

			instructText.x = FlxG.width / 2 - instructText.width / 2;
			instructText.y = FlxG.height / 2 - instructText.height / 2;

			ackText.x = FlxG.width / 2 - ackText.width / 2;
			ackText.y = FlxG.height - ackText.height - 32;
		} else if(loaded > 0){
			loaded--;
		}
		super.update(dt);
		if (FlxG.mouse.justReleased) {
			FlxG.switchState(new PlayState());
		}
	}
}
