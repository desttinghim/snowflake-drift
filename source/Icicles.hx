package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;

/**
 * ...
 * @author DIMN
 */
class Icicles extends FlxSpriteGroup
{
	private var addScore:Bool;

	public function new(X:Float=0, Y:Float=0)
	{
		super(X, Y);
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

		velocity.x = -100;
		add(topIce);
		add(bottomIce);
		addScore = true;
	}

	override public function update(dt:Float) {
		super.update(dt);
		if (x < -width) {
			var rand = Math.round(Math.random() * 160);
			x = FlxG.width + width;
			y = -80 - rand;
			addScore = true;
		}
	}

	public function canAddScore():Bool {
		if (addScore) {
			addScore = false;
			return true;
		} else {
			return false;
		}
	}

}
