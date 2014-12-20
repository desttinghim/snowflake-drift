#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#include <flixel/system/ui/FlxFocusLostScreen.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace system{
namespace ui{

Void FlxFocusLostScreen_obj::__construct()
{
HX_STACK_FRAME("flixel.system.ui.FlxFocusLostScreen","new",0xbe260b15,"flixel.system.ui.FlxFocusLostScreen.new","flixel/system/ui/FlxFocusLostScreen.hx",13,0x1e64ca7a)
{
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	this->draw();
	HX_STACK_LINE(17)
	::openfl::_v2::display::Sprite logo = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(logo,"logo");
	HX_STACK_LINE(18)
	::flixel::system::FlxAssets_obj::drawLogo(logo->get_graphics());
	HX_STACK_LINE(19)
	logo->set_scaleX(logo->set_scaleY(0.2));
	HX_STACK_LINE(20)
	logo->set_x(logo->set_y((int)5));
	HX_STACK_LINE(21)
	logo->set_alpha(0.35);
	HX_STACK_LINE(22)
	this->addChild(logo);
	HX_STACK_LINE(24)
	this->set_visible(false);
}
;
	return null();
}

//FlxFocusLostScreen_obj::~FlxFocusLostScreen_obj() { }

Dynamic FlxFocusLostScreen_obj::__CreateEmpty() { return  new FlxFocusLostScreen_obj; }
hx::ObjectPtr< FlxFocusLostScreen_obj > FlxFocusLostScreen_obj::__new()
{  hx::ObjectPtr< FlxFocusLostScreen_obj > result = new FlxFocusLostScreen_obj();
	result->__construct();
	return result;}

Dynamic FlxFocusLostScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFocusLostScreen_obj > result = new FlxFocusLostScreen_obj();
	result->__construct();
	return result;}

Void FlxFocusLostScreen_obj::draw( ){
{
		HX_STACK_FRAME("flixel.system.ui.FlxFocusLostScreen","draw",0x9c914faf,"flixel.system.ui.FlxFocusLostScreen.draw","flixel/system/ui/FlxFocusLostScreen.hx",31,0x1e64ca7a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::openfl::_v2::display::Graphics gfx = this->get_graphics();		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(34)
		int screenWidth = ::Std_obj::_int(((::flixel::FlxCamera_obj::defaultZoom * ::flixel::FlxG_obj::width) * ::flixel::FlxG_obj::game->get_scaleX()));		HX_STACK_VAR(screenWidth,"screenWidth");
		HX_STACK_LINE(35)
		int screenHeight = ::Std_obj::_int(((::flixel::FlxCamera_obj::defaultZoom * ::flixel::FlxG_obj::height) * ::flixel::FlxG_obj::game->get_scaleY()));		HX_STACK_VAR(screenHeight,"screenHeight");
		HX_STACK_LINE(38)
		gfx->clear();
		HX_STACK_LINE(39)
		gfx->moveTo((int)0,(int)0);
		HX_STACK_LINE(40)
		gfx->beginFill((int)0,0.5);
		HX_STACK_LINE(41)
		gfx->drawRect((int)0,(int)0,screenWidth,screenHeight);
		HX_STACK_LINE(42)
		gfx->endFill();
		HX_STACK_LINE(45)
		int halfWidth = ::Std_obj::_int((Float(screenWidth) / Float((int)2)));		HX_STACK_VAR(halfWidth,"halfWidth");
		HX_STACK_LINE(46)
		int halfHeight = ::Std_obj::_int((Float(screenHeight) / Float((int)2)));		HX_STACK_VAR(halfHeight,"halfHeight");
		HX_STACK_LINE(47)
		int helper = ::Std_obj::_int((Float(::Math_obj::min(halfWidth,halfHeight)) / Float((int)3)));		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(48)
		gfx->moveTo((halfWidth - helper),(halfHeight - helper));
		HX_STACK_LINE(49)
		gfx->beginFill((int)16777215,0.65);
		HX_STACK_LINE(50)
		gfx->lineTo((halfWidth + helper),halfHeight);
		HX_STACK_LINE(51)
		gfx->lineTo((halfWidth - helper),(halfHeight + helper));
		HX_STACK_LINE(52)
		gfx->lineTo((halfWidth - helper),(halfHeight - helper));
		HX_STACK_LINE(53)
		gfx->endFill();
		HX_STACK_LINE(55)
		this->set_scaleX((Float((int)1) / Float(::flixel::FlxG_obj::game->get_scaleX())));
		HX_STACK_LINE(56)
		this->set_scaleY((Float((int)1) / Float(::flixel::FlxG_obj::game->get_scaleY())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFocusLostScreen_obj,draw,(void))


FlxFocusLostScreen_obj::FlxFocusLostScreen_obj()
{
}

Dynamic FlxFocusLostScreen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxFocusLostScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFocusLostScreen_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFocusLostScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFocusLostScreen_obj::__mClass,"__mClass");
};

#endif

Class FlxFocusLostScreen_obj::__mClass;

void FlxFocusLostScreen_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.ui.FlxFocusLostScreen"), hx::TCanCast< FlxFocusLostScreen_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void FlxFocusLostScreen_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace ui
