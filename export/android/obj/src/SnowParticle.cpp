#include <hxcpp.h>

#ifndef INCLUDED_SnowParticle
#include <SnowParticle.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxParticle
#include <flixel/interfaces/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif

Void SnowParticle_obj::__construct()
{
HX_STACK_FRAME("SnowParticle","new",0x04403d7b,"SnowParticle.new","SnowParticle.hx",13,0xd4654a55)
{
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	this->makeGraphic((int)2,(int)2,(int)-1,false,null());
}
;
	return null();
}

//SnowParticle_obj::~SnowParticle_obj() { }

Dynamic SnowParticle_obj::__CreateEmpty() { return  new SnowParticle_obj; }
hx::ObjectPtr< SnowParticle_obj > SnowParticle_obj::__new()
{  hx::ObjectPtr< SnowParticle_obj > result = new SnowParticle_obj();
	result->__construct();
	return result;}

Dynamic SnowParticle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SnowParticle_obj > result = new SnowParticle_obj();
	result->__construct();
	return result;}


SnowParticle_obj::SnowParticle_obj()
{
}

Dynamic SnowParticle_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SnowParticle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SnowParticle_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SnowParticle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SnowParticle_obj::__mClass,"__mClass");
};

#endif

Class SnowParticle_obj::__mClass;

void SnowParticle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SnowParticle"), hx::TCanCast< SnowParticle_obj> ,sStaticFields,sMemberFields,
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

void SnowParticle_obj::__boot()
{
}

