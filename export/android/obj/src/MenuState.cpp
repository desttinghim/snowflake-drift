#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
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

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",15,0xdfbcb22c)

HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(15)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",24,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->super::create();
		HX_STACK_LINE(27)
		::flixel::addons::display::FlxBackdrop background = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/backgroundhills.png"),0.8,(int)0,true,false);		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(28)
		background->velocity->set_x((int)-15);
		HX_STACK_LINE(29)
		this->add(background);
		HX_STACK_LINE(31)
		::flixel::addons::display::FlxBackdrop background2 = ::flixel::addons::display::FlxBackdrop_obj::__new(HX_CSTRING("assets/images/ground.png"),0.8,(int)0,true,false);		HX_STACK_VAR(background2,"background2");
		HX_STACK_LINE(32)
		background2->set_y((::flixel::FlxG_obj::height - (int)32));
		HX_STACK_LINE(33)
		background2->velocity->set_x((int)-100);
		HX_STACK_LINE(34)
		this->add(background2);
		HX_STACK_LINE(36)
		this->titleText = ::flixel::text::FlxText_obj::__new(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(37)
		this->titleText->setFormat(HX_CSTRING("assets/images/visitor1.ttf"),(int)24,(int)-1,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(38)
		this->titleText->set_text(HX_CSTRING("SNOWFLAKE DRIFT"));
		HX_STACK_LINE(39)
		this->add(this->titleText);
		HX_STACK_LINE(41)
		this->instructText = ::flixel::text::FlxText_obj::__new(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(42)
		this->instructText->setFormat(HX_CSTRING("assets/images/visitor1.ttf"),(int)16,(int)-1,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(43)
		this->instructText->set_text(HX_CSTRING("TAP TO BEGIN"));
		HX_STACK_LINE(44)
		this->add(this->instructText);
		HX_STACK_LINE(46)
		this->loaded = (int)1;
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",57,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",64,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		if (((this->loaded == (int)0))){
			HX_STACK_LINE(66)
			(this->loaded)--;
			HX_STACK_LINE(67)
			this->titleText->set_x(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (Float(this->titleText->get_width()) / Float((int)2))));
			HX_STACK_LINE(68)
			this->titleText->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)3)) - (Float(this->titleText->get_height()) / Float((int)2))));
			HX_STACK_LINE(70)
			this->instructText->set_x(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (Float(this->instructText->get_width()) / Float((int)2))));
			HX_STACK_LINE(71)
			this->instructText->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (Float(this->instructText->get_height()) / Float((int)2))));
		}
		else{
			HX_STACK_LINE(72)
			if (((this->loaded > (int)0))){
				HX_STACK_LINE(73)
				(this->loaded)--;
			}
		}
		HX_STACK_LINE(75)
		this->super::update();
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",76,0xdfbcb22c)
				{
					HX_STACK_LINE(76)
					::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(76)
					return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(76)
		if ((_Function_1_1::Block())){
			HX_STACK_LINE(77)
			::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(77)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(instructText,"instructText");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(instructText,"instructText");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { return loaded; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleText") ) { return titleText; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"instructText") ) { return instructText; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"instructText") ) { instructText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("loaded"));
	outFields->push(HX_CSTRING("titleText"));
	outFields->push(HX_CSTRING("instructText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MenuState_obj,loaded),HX_CSTRING("loaded")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,titleText),HX_CSTRING("titleText")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,instructText),HX_CSTRING("instructText")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("loaded"),
	HX_CSTRING("titleText"),
	HX_CSTRING("instructText"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
}

