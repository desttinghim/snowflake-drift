package ;

import flixel.FlxG;
import flixel.effects.particles.FlxEmitter;
import flixel.util.FlxColor;

class SnowEmitter extends FlxEmitter {

  private var particles_count:Int = 200;

  public function new() {
    super(0, 0);
    setSize(FlxG.width, 0);

    velocity.set(-50, 180, 0, 200);
    acceleration.set(0,0,0,0);
    lifespan.set(5);
    launchMode = FlxEmitterMode.SQUARE;

    makeParticles(2, 2, FlxColor.WHITE, 200);

    start(false, .1, 0);
  }
}
