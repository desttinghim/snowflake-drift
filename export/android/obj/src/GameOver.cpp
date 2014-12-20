#include <hxcpp.h>

#ifndef INCLUDED_GameOver
#include <GameOver.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
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

Void GameOver_obj::__construct(int score)
{
HX_STACK_FRAME("GameOver","new",0x1f3caa78,"GameOver.new","GameOver.hx",28,0x71ca4bf8)

HX_STACK_ARG(score,"score")
{
	HX_STACK_LINE(29)
	super::__construct(null());
	HX_STACK_LINE(30)
	this->score = score;
}
;
	return null();
}

//GameOver_obj::~GameOver_obj() { }

Dynamic GameOver_obj::__CreateEmpty() { return  new GameOver_obj; }
hx::ObjectPtr< GameOver_obj > GameOver_obj::__new(int score)
{  hx::ObjectPtr< GameOver_obj > result = new GameOver_obj();
	result->__construct(score);
	return result;}

Dynamic GameOver_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameOver_obj > result = new GameOver_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GameOver_obj::create( ){
{
		HX_STACK_FRAME("GameOver","create",0xc687ebe4,"GameOver.create","GameOver.hx",34,0x71ca4bf8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::create();
		HX_STACK_LINE(37)
		::flixel::addons::display::FlxBackdrop background = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/backgroundhills.png"),0.8,(int)0,true,false);		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(38)
		background->velocity->set_x((int)-15);
		HX_STACK_LINE(39)
		this->add(background);
		HX_STACK_LINE(41)
		::flixel::addons::display::FlxBackdrop background2 = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/ground.png"),0.8,(int)0,true,false);		HX_STACK_VAR(background2,"background2");
		HX_STACK_LINE(42)
		background2->set_y((::flixel::FlxG_obj::height - (int)32));
		HX_STACK_LINE(43)
		background2->velocity->set_x((int)-100);
		HX_STACK_LINE(44)
		this->add(background2);
		HX_STACK_LINE(47)
		this->gameOverText = ::flixel::text::FlxText_obj::__new(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(48)
		this->gameOverText->setFormat(HX_CSTRING("assets/images/visitor1.ttf"),(int)24,(int)-1,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(49)
		this->gameOverText->set_text(((HX_CSTRING("SCORE: ") + this->score) + HX_CSTRING("\nGAME OVER")));
		HX_STACK_LINE(50)
		this->add(this->gameOverText);
		HX_STACK_LINE(52)
		this->instructText = ::flixel::text::FlxText_obj::__new(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(53)
		this->instructText->setFormat(HX_CSTRING("assets/images/visitor1.ttf"),(int)16,(int)-1,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(54)
		this->instructText->set_text(HX_CSTRING("TAP TO RESTART"));
		HX_STACK_LINE(55)
		this->add(this->instructText);
		HX_STACK_LINE(57)
		this->loaded = (int)1;
	}
return null();
}


Void GameOver_obj::destroy( ){
{
		HX_STACK_FRAME("GameOver","destroy",0x0381f312,"GameOver.destroy","GameOver.hx",66,0x71ca4bf8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->super::destroy();
	}
return null();
}


Void GameOver_obj::update( ){
{
		HX_STACK_FRAME("GameOver","update",0xd17e0af1,"GameOver.update","GameOver.hx",73,0x71ca4bf8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		if (((this->loaded == (int)0))){
			HX_STACK_LINE(75)
			this->gameOverText->set_x(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (Float(this->gameOverText->get_width()) / Float((int)2))));
			HX_STACK_LINE(76)
			this->gameOverText->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)3)) - (Float(this->gameOverText->get_height()) / Float((int)2))));
			HX_STACK_LINE(78)
			this->instructText->set_x(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (Float(this->instructText->get_width()) / Float((int)2))));
			HX_STACK_LINE(79)
			this->instructText->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (Float(this->instructText->get_height()) / Float((int)2))));
		}
		else{
			HX_STACK_LINE(80)
			if (((this->loaded > (int)0))){
				HX_STACK_LINE(81)
				(this->loaded)--;
			}
		}
		HX_STACK_LINE(83)
		this->super::update();
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameOver.hx",84,0x71ca4bf8)
				{
					HX_STACK_LINE(84)
					::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(84)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(84)
		if ((_Function_1_1::Block())){
			HX_STACK_LINE(85)
			::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(85)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
	}
return null();
}



GameOver_obj::GameOver_obj()
{
}

void GameOver_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOver);
	HX_MARK_MEMBER_NAME(gameOverText,"gameOverText");
	HX_MARK_MEMBER_NAME(instructText,"instructText");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOver_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameOverText,"gameOverText");
	HX_VISIT_MEMBER_NAME(instructText,"instructText");
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameOver_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gameOverText") ) { return gameOverText; }
		if (HX_FIELD_EQ(inName,"instructText") ) { return instructText; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameOver_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gameOverText") ) { gameOverText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"instructText") ) { instructText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gameOverText"));
	outFields->push(HX_CSTRING("instructText"));
	outFields->push(HX_CSTRING("score"));
	outFields->push(HX_CSTRING("loaded"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOver_obj,gameOverText),HX_CSTRING("gameOverText")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOver_obj,instructText),HX_CSTRING("instructText")},
	{hx::fsInt,(int)offsetof(GameOver_obj,score),HX_CSTRING("score")},
	{hx::fsInt,(int)offsetof(GameOver_obj,loaded),HX_CSTRING("loaded")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gameOverText"),
	HX_CSTRING("instructText"),
	HX_CSTRING("score"),
	HX_CSTRING("loaded"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOver_obj::__mClass,"__mClass");
};

#endif

Class GameOver_obj::__mClass;

void GameOver_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameOver"), hx::TCanCast< GameOver_obj> ,sStaticFields,sMemberFields,
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

void GameOver_obj::__boot()
{
}

