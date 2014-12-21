#include <hxcpp.h>

#ifndef INCLUDED_GameOver
#include <GameOver.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
HX_STACK_FRAME("GameOver","new",0x1f3caa78,"GameOver.new","GameOver.hx",19,0x71ca4bf8)

HX_STACK_ARG(score,"score")
{
	HX_STACK_LINE(27)
	this->particles_count = (int)200;
	HX_STACK_LINE(33)
	super::__construct(null());
	HX_STACK_LINE(34)
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
		HX_STACK_FRAME("GameOver","create",0xc687ebe4,"GameOver.create","GameOver.hx",38,0x71ca4bf8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		this->super::create();
		HX_STACK_LINE(41)
		::flixel::addons::display::FlxBackdrop background = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/backgroundhills.png"),0.8,(int)0,true,false);		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(42)
		background->velocity->set_x((int)-15);
		HX_STACK_LINE(43)
		this->add(background);
		HX_STACK_LINE(45)
		::flixel::addons::display::FlxBackdrop background2 = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/ground.png"),0.8,(int)0,true,false);		HX_STACK_VAR(background2,"background2");
		HX_STACK_LINE(46)
		background2->set_y((::flixel::FlxG_obj::height - (int)32));
		HX_STACK_LINE(47)
		background2->velocity->set_x((int)-100);
		HX_STACK_LINE(48)
		this->add(background2);
		HX_STACK_LINE(51)
		this->gameOverText = ::flixel::text::FlxText_obj::__new(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(52)
		this->gameOverText->setFormat(HX_CSTRING("assets/images/visitor1.ttf"),(int)24,(int)-1,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(53)
		this->gameOverText->set_text(((HX_CSTRING("SCORE: ") + this->score) + HX_CSTRING("\nGAME OVER")));
		HX_STACK_LINE(54)
		this->add(this->gameOverText);
		HX_STACK_LINE(56)
		this->instructText = ::flixel::text::FlxText_obj::__new(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(57)
		this->instructText->setFormat(HX_CSTRING("assets/images/visitor1.ttf"),(int)16,(int)-1,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(58)
		this->instructText->set_text(HX_CSTRING("TAP TO RESTART"));
		HX_STACK_LINE(59)
		this->add(this->instructText);
		HX_STACK_LINE(61)
		this->snowEmitter = ::flixel::effects::particles::FlxEmitter_obj::__new((int)0,(int)0,null());
		HX_STACK_LINE(62)
		this->snowEmitter->setSize(::flixel::FlxG_obj::width,(int)0);
		HX_STACK_LINE(63)
		this->add(this->snowEmitter);
		HX_STACK_LINE(65)
		this->snowEmitter->setXSpeed((int)-5,(int)5);
		HX_STACK_LINE(66)
		this->snowEmitter->setYSpeed((int)60,(int)70);
		HX_STACK_LINE(67)
		this->snowEmitter->setRotation((int)0,(int)0);
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(69)
			int _g = (this->particles_count * (int)2);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(69)
			while(((_g1 < _g))){
				HX_STACK_LINE(69)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(70)
				::SnowParticle particle = ::SnowParticle_obj::__new();		HX_STACK_VAR(particle,"particle");
				HX_STACK_LINE(71)
				this->snowEmitter->add(particle);
			}
		}
		HX_STACK_LINE(74)
		this->snowEmitter->start(false,(int)10,.1,null(),null());
		HX_STACK_LINE(76)
		this->loaded = (int)1;
	}
return null();
}


Void GameOver_obj::destroy( ){
{
		HX_STACK_FRAME("GameOver","destroy",0x0381f312,"GameOver.destroy","GameOver.hx",85,0x71ca4bf8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		this->super::destroy();
	}
return null();
}


Void GameOver_obj::update( ){
{
		HX_STACK_FRAME("GameOver","update",0xd17e0af1,"GameOver.update","GameOver.hx",92,0x71ca4bf8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		if (((this->loaded == (int)0))){
			HX_STACK_LINE(94)
			this->gameOverText->set_x(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (Float(this->gameOverText->get_width()) / Float((int)2))));
			HX_STACK_LINE(95)
			this->gameOverText->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)3)) - (Float(this->gameOverText->get_height()) / Float((int)2))));
			HX_STACK_LINE(97)
			this->instructText->set_x(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (Float(this->instructText->get_width()) / Float((int)2))));
			HX_STACK_LINE(98)
			this->instructText->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (Float(this->instructText->get_height()) / Float((int)2))));
		}
		else{
			HX_STACK_LINE(99)
			if (((this->loaded > (int)0))){
				HX_STACK_LINE(100)
				(this->loaded)--;
			}
		}
		HX_STACK_LINE(102)
		this->super::update();
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameOver.hx",103,0x71ca4bf8)
				{
					HX_STACK_LINE(103)
					::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(103)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(103)
		if ((_Function_1_1::Block())){
			HX_STACK_LINE(104)
			::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(104)
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
	HX_MARK_MEMBER_NAME(snowEmitter,"snowEmitter");
	HX_MARK_MEMBER_NAME(particles_count,"particles_count");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOver_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameOverText,"gameOverText");
	HX_VISIT_MEMBER_NAME(instructText,"instructText");
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(snowEmitter,"snowEmitter");
	HX_VISIT_MEMBER_NAME(particles_count,"particles_count");
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
	case 11:
		if (HX_FIELD_EQ(inName,"snowEmitter") ) { return snowEmitter; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gameOverText") ) { return gameOverText; }
		if (HX_FIELD_EQ(inName,"instructText") ) { return instructText; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"particles_count") ) { return particles_count; }
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
	case 11:
		if (HX_FIELD_EQ(inName,"snowEmitter") ) { snowEmitter=inValue.Cast< ::flixel::effects::particles::FlxEmitter >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gameOverText") ) { gameOverText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"instructText") ) { instructText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"particles_count") ) { particles_count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gameOverText"));
	outFields->push(HX_CSTRING("instructText"));
	outFields->push(HX_CSTRING("score"));
	outFields->push(HX_CSTRING("loaded"));
	outFields->push(HX_CSTRING("snowEmitter"));
	outFields->push(HX_CSTRING("particles_count"));
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
	{hx::fsObject /*::flixel::effects::particles::FlxEmitter*/ ,(int)offsetof(GameOver_obj,snowEmitter),HX_CSTRING("snowEmitter")},
	{hx::fsInt,(int)offsetof(GameOver_obj,particles_count),HX_CSTRING("particles_count")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gameOverText"),
	HX_CSTRING("instructText"),
	HX_CSTRING("score"),
	HX_CSTRING("loaded"),
	HX_CSTRING("snowEmitter"),
	HX_CSTRING("particles_count"),
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

