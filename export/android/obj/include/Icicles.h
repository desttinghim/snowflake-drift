#ifndef INCLUDED_Icicles
#define INCLUDED_Icicles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxSpriteGroup.h>
HX_DECLARE_CLASS0(Icicles)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Icicles_obj : public ::flixel::group::FlxSpriteGroup_obj{
	public:
		typedef ::flixel::group::FlxSpriteGroup_obj super;
		typedef Icicles_obj OBJ_;
		Icicles_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Icicles_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Icicles_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Icicles"); }

		bool addScore;
		virtual Void update( );

		virtual bool canAddScore( );
		Dynamic canAddScore_dyn();

};


#endif /* INCLUDED_Icicles */ 
