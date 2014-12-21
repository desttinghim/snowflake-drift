#ifndef INCLUDED_SnowParticle
#define INCLUDED_SnowParticle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/effects/particles/FlxParticle.h>
HX_DECLARE_CLASS0(SnowParticle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxParticle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxParticle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)


class HXCPP_CLASS_ATTRIBUTES  SnowParticle_obj : public ::flixel::effects::particles::FlxParticle_obj{
	public:
		typedef ::flixel::effects::particles::FlxParticle_obj super;
		typedef SnowParticle_obj OBJ_;
		SnowParticle_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SnowParticle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SnowParticle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SnowParticle"); }

};


#endif /* INCLUDED_SnowParticle */ 
