#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#define INCLUDED_flixel_addons_display_FlxBackdrop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxBackdrop)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  FlxBackdrop_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxBackdrop_obj OBJ_;
		FlxBackdrop_obj();
		Void __construct(Dynamic Graphic,hx::Null< Float >  __o_ScrollX,hx::Null< Float >  __o_ScrollY,hx::Null< bool >  __o_RepeatX,hx::Null< bool >  __o_RepeatY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxBackdrop_obj > __new(Dynamic Graphic,hx::Null< Float >  __o_ScrollX,hx::Null< Float >  __o_ScrollY,hx::Null< bool >  __o_RepeatX,hx::Null< bool >  __o_RepeatY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBackdrop_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxBackdrop"); }

		::openfl::_v2::geom::Point _ppoint;
		int _scrollW;
		int _scrollH;
		bool _repeatX;
		bool _repeatY;
		int _tileID;
		Array< Float > _tileInfo;
		int _numTiles;
		virtual Void destroy( );

		virtual Void draw( );

		virtual Void updateFrameData( );

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxBackdrop */ 
