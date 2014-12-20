#include <hxcpp.h>

#ifndef INCLUDED_GameOver
#include <GameOver.h>
#endif
#ifndef INCLUDED_Icicles
#include <Icicles.h>
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
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",18,0xb30d7781)

HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(18)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",35,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->super::create();
		HX_STACK_LINE(43)
		this->background = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/backgroundhills.png"),(int)0,(int)0,true,false);
		HX_STACK_LINE(44)
		this->background->velocity->set_x((int)-15);
		HX_STACK_LINE(45)
		this->add(this->background);
		HX_STACK_LINE(48)
		this->snowflake = ::flixel::FlxSprite_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)16),((Float(::flixel::FlxG_obj::height) / Float((int)4)) - (int)16),null());
		HX_STACK_LINE(49)
		this->snowflake->loadGraphic(HX_CSTRING("assets/images/snowflake.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(50)
		this->snowflake->maxVelocity->set_y((int)2000);
		HX_STACK_LINE(51)
		this->snowflake->acceleration->set_y((int)400);
		HX_STACK_LINE(52)
		this->snowflakeRotationSpeed = (int)0;
		HX_STACK_LINE(53)
		this->snowflake->set_width((this->snowflake->get_width() - (int)8));
		HX_STACK_LINE(54)
		this->snowflake->set_height((this->snowflake->get_height() - (int)8));
		HX_STACK_LINE(55)
		this->snowflake->centerOffsets(null());
		HX_STACK_LINE(56)
		this->add(this->snowflake);
		HX_STACK_LINE(59)
		int rand = ::Math_obj::round((::Math_obj::random() * (int)160));		HX_STACK_VAR(rand,"rand");
		HX_STACK_LINE(60)
		this->icicles = ::Icicles_obj::__new(::flixel::FlxG_obj::width,((int)-80 - rand));
		HX_STACK_LINE(61)
		this->add(this->icicles);
		HX_STACK_LINE(63)
		rand = ::Math_obj::round((::Math_obj::random() * (int)160));
		HX_STACK_LINE(64)
		this->icicles2 = ::Icicles_obj::__new(((::flixel::FlxG_obj::width + (Float(::flixel::FlxG_obj::width) / Float((int)2))) + (int)32),((int)-80 - rand));
		HX_STACK_LINE(65)
		this->add(this->icicles2);
		HX_STACK_LINE(67)
		::flixel::addons::display::FlxBackdrop ground = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/ground.png"),(int)0,(int)0,true,false);		HX_STACK_VAR(ground,"ground");
		HX_STACK_LINE(68)
		ground->set_y((::flixel::FlxG_obj::height - (int)32));
		HX_STACK_LINE(69)
		ground->velocity->set_x((int)-100);
		HX_STACK_LINE(70)
		this->add(ground);
		HX_STACK_LINE(73)
		this->score = (int)0;
		HX_STACK_LINE(74)
		this->scoreText = ::flixel::text::FlxText_obj::__new((int)8,(int)8,(int)-1,null(),null(),null());
		HX_STACK_LINE(75)
		this->scoreText->setFormat(HX_CSTRING("assets/images/visitor1.ttf"),(int)16,(int)-1,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(76)
		this->scoreText->set_text((HX_CSTRING("Score: ") + this->score));
		HX_STACK_LINE(77)
		this->add(this->scoreText);
		HX_STACK_LINE(79)
		this->scoreUpdate = true;
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",88,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",95,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->super::update();
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",97,0xb30d7781)
				{
					HX_STACK_LINE(97)
					::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(97)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(97)
		if (((  ((!(::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->justPressed->checkStatus)))) ? bool(_Function_1_1::Block()) : bool(true) ))){
			HX_STACK_LINE(98)
			this->snowflake->velocity->set_y((int)-350);
		}
		HX_STACK_LINE(100)
		if (((  (((this->icicles->x < this->snowflake->x))) ? bool(this->icicles->canAddScore()) : bool(false) ))){
			HX_STACK_LINE(101)
			hx::AddEq(this->score,(int)1);
			HX_STACK_LINE(102)
			this->scoreText->set_text((HX_CSTRING("Score: ") + this->score));
		}
		HX_STACK_LINE(104)
		if (((  (((this->icicles2->x < this->snowflake->x))) ? bool(this->icicles2->canAddScore()) : bool(false) ))){
			HX_STACK_LINE(105)
			hx::AddEq(this->score,(int)1);
			HX_STACK_LINE(106)
			this->scoreText->set_text((HX_CSTRING("Score: ") + this->score));
		}
		HX_STACK_LINE(108)
		if (((  ((!(((  ((!(((bool((this->snowflake->y > (::flixel::FlxG_obj::height - (int)32))) || bool((this->snowflake->y < (int)-32))))))) ? bool(::flixel::FlxG_obj::overlap(this->snowflake,this->icicles,null(),null())) : bool(true) ))))) ? bool(::flixel::FlxG_obj::overlap(this->snowflake,this->icicles2,null(),null())) : bool(true) ))){
			HX_STACK_LINE(109)
			this->gameOver(null(),null());
		}
		HX_STACK_LINE(111)
		this->snowflakeRotationSpeed = (Float(this->snowflake->velocity->y) / Float((int)50));
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			::flixel::FlxSprite _g = this->snowflake;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(112)
			_g->set_angle((_g->angle + this->snowflakeRotationSpeed));
		}
	}
return null();
}


Void PlayState_obj::gameOver( ::flixel::FlxSprite S,::flixel::FlxSprite I){
{
		HX_STACK_FRAME("PlayState","gameOver",0x64a21997,"PlayState.gameOver","PlayState.hx",116,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(S,"S")
		HX_STACK_ARG(I,"I")
		HX_STACK_LINE(116)
		::flixel::FlxState State = ::GameOver_obj::__new(this->score);		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(116)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,gameOver,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(snowflake,"snowflake");
	HX_MARK_MEMBER_NAME(snowflakeRotationSpeed,"snowflakeRotationSpeed");
	HX_MARK_MEMBER_NAME(icicles,"icicles");
	HX_MARK_MEMBER_NAME(icicles2,"icicles2");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(scoreUpdate,"scoreUpdate");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(snowflake,"snowflake");
	HX_VISIT_MEMBER_NAME(snowflakeRotationSpeed,"snowflakeRotationSpeed");
	HX_VISIT_MEMBER_NAME(icicles,"icicles");
	HX_VISIT_MEMBER_NAME(icicles2,"icicles2");
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(scoreUpdate,"scoreUpdate");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"icicles") ) { return icicles; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"icicles2") ) { return icicles2; }
		if (HX_FIELD_EQ(inName,"gameOver") ) { return gameOver_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"snowflake") ) { return snowflake; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { return scoreText; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scoreUpdate") ) { return scoreUpdate; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"snowflakeRotationSpeed") ) { return snowflakeRotationSpeed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"icicles") ) { icicles=inValue.Cast< ::Icicles >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"icicles2") ) { icicles2=inValue.Cast< ::Icicles >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"snowflake") ) { snowflake=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scoreUpdate") ) { scoreUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"snowflakeRotationSpeed") ) { snowflakeRotationSpeed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("snowflake"));
	outFields->push(HX_CSTRING("snowflakeRotationSpeed"));
	outFields->push(HX_CSTRING("icicles"));
	outFields->push(HX_CSTRING("icicles2"));
	outFields->push(HX_CSTRING("score"));
	outFields->push(HX_CSTRING("scoreText"));
	outFields->push(HX_CSTRING("scoreUpdate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::display::FlxBackdrop*/ ,(int)offsetof(PlayState_obj,background),HX_CSTRING("background")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,snowflake),HX_CSTRING("snowflake")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,snowflakeRotationSpeed),HX_CSTRING("snowflakeRotationSpeed")},
	{hx::fsObject /*::Icicles*/ ,(int)offsetof(PlayState_obj,icicles),HX_CSTRING("icicles")},
	{hx::fsObject /*::Icicles*/ ,(int)offsetof(PlayState_obj,icicles2),HX_CSTRING("icicles2")},
	{hx::fsInt,(int)offsetof(PlayState_obj,score),HX_CSTRING("score")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,scoreText),HX_CSTRING("scoreText")},
	{hx::fsBool,(int)offsetof(PlayState_obj,scoreUpdate),HX_CSTRING("scoreUpdate")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("background"),
	HX_CSTRING("snowflake"),
	HX_CSTRING("snowflakeRotationSpeed"),
	HX_CSTRING("icicles"),
	HX_CSTRING("icicles2"),
	HX_CSTRING("score"),
	HX_CSTRING("scoreText"),
	HX_CSTRING("scoreUpdate"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("gameOver"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

