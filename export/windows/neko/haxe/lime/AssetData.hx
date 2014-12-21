package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/background.svg", "assets/images/background.svg");
			type.set ("assets/images/background.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/backgroundhills.png", "assets/images/backgroundhills.png");
			type.set ("assets/images/backgroundhills.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/backgroundhills.svg", "assets/images/backgroundhills.svg");
			type.set ("assets/images/backgroundhills.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/Fipps_Regular.otf", "assets/images/Fipps_Regular.otf");
			type.set ("assets/images/Fipps_Regular.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/images/ground.png", "assets/images/ground.png");
			type.set ("assets/images/ground.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/ground.svg", "assets/images/ground.svg");
			type.set ("assets/images/ground.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/icicle.png", "assets/images/icicle.png");
			type.set ("assets/images/icicle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/icicle.svg", "assets/images/icicle.svg");
			type.set ("assets/images/icicle.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/snowflake.png", "assets/images/snowflake.png");
			type.set ("assets/images/snowflake.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/snowflake.svg", "assets/images/snowflake.svg");
			type.set ("assets/images/snowflake.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/visitor1.ttf", "assets/images/visitor1.ttf");
			type.set ("assets/images/visitor1.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/crashsound.mp3", "assets/sounds/crashsound.mp3");
			type.set ("assets/sounds/crashsound.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/crashsound.wav", "assets/sounds/crashsound.wav");
			type.set ("assets/sounds/crashsound.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/floatsound.mp3", "assets/sounds/floatsound.mp3");
			type.set ("assets/sounds/floatsound.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/floatsound.wav", "assets/sounds/floatsound.wav");
			type.set ("assets/sounds/floatsound.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
