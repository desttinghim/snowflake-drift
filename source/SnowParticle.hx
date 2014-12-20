package ;
import flixel.effects.particles.FlxParticle;
import flixel.util.FlxColor;

/**
 * ...
 * @author DIMN
 */
class SnowParticle extends FlxParticle
{

	public function new() 
	{
		super();
		makeGraphic(2, 2, FlxColor.WHITE, false);
	}
	
}