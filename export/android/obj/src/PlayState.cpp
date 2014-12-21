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
#ifndef INCLUDED_SnowParticle
#include <SnowParticle.h>
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
#ifndef INCLUDED_flixel_effects_particles_FlxEmitter
#include <flixel/effects/particles/FlxEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxParticle
#include <flixel/interfaces/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",19,0xb30d7781)

HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(34)
	this->particles_count = (int)200;
	HX_STACK_LINE(19)
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
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",39,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		this->super::create();
		HX_STACK_LINE(47)
		this->background = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/backgroundhills.png"),(int)0,(int)0,true,false);
		HX_STACK_LINE(48)
		this->background->velocity->set_x((int)-15);
		HX_STACK_LINE(49)
		this->add(this->background);
		HX_STACK_LINE(52)
		this->snowflake = ::flixel::FlxSprite_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)16),((Float(::flixel::FlxG_obj::height) / Float((int)4)) - (int)16),null());
		HX_STACK_LINE(53)
		this->snowflake->loadGraphic(HX_CSTRING("assets/images/snowflake.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(54)
		this->snowflake->maxVelocity->set_y((int)2000);
		HX_STACK_LINE(55)
		this->snowflake->acceleration->set_y((int)400);
		HX_STACK_LINE(56)
		this->snowflakeRotationSpeed = (int)0;
		HX_STACK_LINE(57)
		this->snowflake->set_width((this->snowflake->get_width() - (int)8));
		HX_STACK_LINE(58)
		this->snowflake->set_height((this->snowflake->get_height() - (int)8));
		HX_STACK_LINE(59)
		this->snowflake->centerOffsets(null());
		HX_STACK_LINE(60)
		this->add(this->snowflake);
		HX_STACK_LINE(63)
		int rand = ::Math_obj::round((::Math_obj::random() * (int)160));		HX_STACK_VAR(rand,"rand");
		HX_STACK_LINE(64)
		this->icicles = ::Icicles_obj::__new(::flixel::FlxG_obj::width,((int)-80 - rand));
		HX_STACK_LINE(65)
		this->add(this->icicles);
		HX_STACK_LINE(67)
		rand = ::Math_obj::round((::Math_obj::random() * (int)160));
		HX_STACK_LINE(68)
		this->icicles2 = ::Icicles_obj::__new(((::flixel::FlxG_obj::width + (Float(::flixel::FlxG_obj::width) / Float((int)2))) + (int)32),((int)-80 - rand));
		HX_STACK_LINE(69)
		this->add(this->icicles2);
		HX_STACK_LINE(71)
		::flixel::addons::display::FlxBackdrop ground = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/ground.png"),(int)0,(int)0,true,false);		HX_STACK_VAR(ground,"ground");
		HX_STACK_LINE(72)
		ground->set_y((::flixel::FlxG_obj::height - (int)32));
		HX_STACK_LINE(73)
		ground->velocity->set_x((int)-100);
		HX_STACK_LINE(74)
		this->add(ground);
		HX_STACK_LINE(77)
		this->score = (int)0;
		HX_STACK_LINE(78)
		this->scoreText = ::flixel::text::FlxText_obj::__new((int)8,(int)8,(int)-1,null(),null(),null());
		HX_STACK_LINE(79)
		this->scoreText->setFormat(HX_CSTRING("assets/images/visitor1.ttf"),(int)16,(int)-1,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(80)
		this->scoreText->set_text((HX_CSTRING("Score: ") + this->score));
		HX_STACK_LINE(81)
		this->add(this->scoreText);
		HX_STACK_LINE(83)
		this->snowEmitter = ::flixel::effects::particles::FlxEmitter_obj::__new((int)0,(int)0,null());
		HX_STACK_LINE(84)
		this->snowEmitter->setSize(::flixel::FlxG_obj::width,(int)0);
		HX_STACK_LINE(85)
		this->add(this->snowEmitter);
		HX_STACK_LINE(87)
		this->snowEmitter->setXSpeed((int)-5,(int)5);
		HX_STACK_LINE(88)
		this->snowEmitter->setYSpeed((int)60,(int)70);
		HX_STACK_LINE(89)
		this->snowEmitter->setRotation((int)0,(int)0);
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(91)
			int _g = (this->particles_count * (int)2);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			while(((_g1 < _g))){
				HX_STACK_LINE(91)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(92)
				::SnowParticle particle = ::SnowParticle_obj::__new();		HX_STACK_VAR(particle,"particle");
				HX_STACK_LINE(93)
				this->snowEmitter->add(particle);
			}
		}
		HX_STACK_LINE(96)
		this->snowEmitter->start(false,(int)10,.1,null(),null());
		HX_STACK_LINE(98)
		this->scoreUpdate = true;
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",107,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",114,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		this->super::update();
		HX_STACK_LINE(116)
		if ((this->snowflake->alive)){
			struct _Function_2_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",117,0xb30d7781)
					{
						HX_STACK_LINE(117)
						::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(117)
						return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
					}
					return null();
				}
			};
			HX_STACK_LINE(117)
			if (((  ((!(::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->justPressed->checkStatus)))) ? bool(_Function_2_1::Block()) : bool(true) ))){
				HX_STACK_LINE(118)
				this->snowflake->velocity->set_y((int)-350);
				HX_STACK_LINE(119)
				::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/floatsound.wav"),(int)1,false,true,null());
			}
			HX_STACK_LINE(121)
			if (((  (((this->icicles->x < this->snowflake->x))) ? bool(this->icicles->canAddScore()) : bool(false) ))){
				HX_STACK_LINE(122)
				hx::AddEq(this->score,(int)1);
				HX_STACK_LINE(123)
				this->scoreText->set_text((HX_CSTRING("Score: ") + this->score));
			}
			HX_STACK_LINE(125)
			if (((  (((this->icicles2->x < this->snowflake->x))) ? bool(this->icicles2->canAddScore()) : bool(false) ))){
				HX_STACK_LINE(126)
				hx::AddEq(this->score,(int)1);
				HX_STACK_LINE(127)
				this->scoreText->set_text((HX_CSTRING("Score: ") + this->score));
			}
			HX_STACK_LINE(129)
			if (((  ((!(((  ((!(((bool((this->snowflake->y > (::flixel::FlxG_obj::height - (int)32))) || bool((this->snowflake->y < (int)-32))))))) ? bool(::flixel::FlxG_obj::overlap(this->snowflake,this->icicles,null(),null())) : bool(true) ))))) ? bool(::flixel::FlxG_obj::overlap(this->snowflake,this->icicles2,null(),null())) : bool(true) ))){
				HX_STACK_LINE(130)
				::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/crashsound.wav"),(int)1,false,true,null());
				HX_STACK_LINE(131)
				this->snowflake->set_alive(false);
			}
			HX_STACK_LINE(133)
			this->snowflakeRotationSpeed = (Float(this->snowflake->velocity->y) / Float((int)50));
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				::flixel::FlxSprite _g = this->snowflake;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(134)
				_g->set_angle((_g->angle + this->snowflakeRotationSpeed));
			}
		}
		HX_STACK_LINE(136)
		if (((this->snowflake->y > (::flixel::FlxG_obj::height * 1.3333333333333333)))){
			HX_STACK_LINE(137)
			this->gameOver(null(),null());
		}
	}
return null();
}


Void PlayState_obj::gameOver( ::flixel::FlxSprite S,::flixel::FlxSprite I){
{
		HX_STACK_FRAME("PlayState","gameOver",0x64a21997,"PlayState.gameOver","PlayState.hx",142,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(S,"S")
		HX_STACK_ARG(I,"I")
		HX_STACK_LINE(142)
		::flixel::FlxState State = ::GameOver_obj::__new(this->score);		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(142)
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
	HX_MARK_MEMBER_NAME(snowEmitter,"snowEmitter");
	HX_MARK_MEMBER_NAME(particles_count,"particles_count");
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
	HX_VISIT_MEMBER_NAME(snowEmitter,"snowEmitter");
	HX_VISIT_MEMBER_NAME(particles_count,"particles_count");
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
		if (HX_FIELD_EQ(inName,"snowEmitter") ) { return snowEmitter; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"particles_count") ) { return particles_count; }
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
		if (HX_FIELD_EQ(inName,"snowEmitter") ) { snowEmitter=inValue.Cast< ::flixel::effects::particles::FlxEmitter >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"particles_count") ) { particles_count=inValue.Cast< int >(); return inValue; }
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
	outFields->push(HX_CSTRING("snowEmitter"));
	outFields->push(HX_CSTRING("particles_count"));
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
	{hx::fsObject /*::flixel::effects::particles::FlxEmitter*/ ,(int)offsetof(PlayState_obj,snowEmitter),HX_CSTRING("snowEmitter")},
	{hx::fsInt,(int)offsetof(PlayState_obj,particles_count),HX_CSTRING("particles_count")},
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
	HX_CSTRING("snowEmitter"),
	HX_CSTRING("particles_count"),
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

