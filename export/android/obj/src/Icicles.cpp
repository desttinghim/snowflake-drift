#include <hxcpp.h>

#ifndef INCLUDED_Icicles
#include <Icicles.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Icicles_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("Icicles","new",0x02a905f8,"Icicles.new","Icicles.hx",16,0x953fe078)

HX_STACK_ARG(__o_X,"X")

HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(17)
	super::__construct(X,Y,null());
	HX_STACK_LINE(18)
	::flixel::FlxSprite topIce = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(topIce,"topIce");
	HX_STACK_LINE(19)
	::flixel::FlxSprite bottomIce = ::flixel::FlxSprite_obj::__new((int)0,::flixel::FlxG_obj::height,null());		HX_STACK_VAR(bottomIce,"bottomIce");
	HX_STACK_LINE(21)
	topIce->loadGraphic(HX_CSTRING("assets/images/icicle.png"),null(),null(),null(),null(),null());
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		::flixel::FlxSprite _g = topIce;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		_g->set_height((_g->get_height() - (int)32));
	}
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::flixel::FlxSprite _g = topIce;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		_g->set_width((_g->get_width() - (int)32));
	}
	HX_STACK_LINE(24)
	topIce->centerOffsets(null());
	HX_STACK_LINE(26)
	bottomIce->loadGraphic(HX_CSTRING("assets/images/icicle.png"),null(),null(),null(),null(),null());
	HX_STACK_LINE(27)
	bottomIce->set_flipY(true);
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		::flixel::FlxSprite _g = bottomIce;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		_g->set_height((_g->get_height() - (int)32));
	}
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::flixel::FlxSprite _g = bottomIce;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		_g->set_width((_g->get_width() - (int)32));
	}
	HX_STACK_LINE(30)
	bottomIce->centerOffsets(null());
	HX_STACK_LINE(32)
	this->velocity->set_x((int)-100);
	HX_STACK_LINE(33)
	this->add(topIce);
	HX_STACK_LINE(34)
	this->add(bottomIce);
	HX_STACK_LINE(35)
	this->addScore = true;
}
;
	return null();
}

//Icicles_obj::~Icicles_obj() { }

Dynamic Icicles_obj::__CreateEmpty() { return  new Icicles_obj; }
hx::ObjectPtr< Icicles_obj > Icicles_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Icicles_obj > result = new Icicles_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Icicles_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Icicles_obj > result = new Icicles_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Icicles_obj::update( ){
{
		HX_STACK_FRAME("Icicles","update",0x5497df71,"Icicles.update","Icicles.hx",38,0x953fe078)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		this->super::update();
		HX_STACK_LINE(40)
		if (((this->x < -(this->get_width())))){
			HX_STACK_LINE(41)
			int rand = ::Math_obj::round((::Math_obj::random() * (int)160));		HX_STACK_VAR(rand,"rand");
			HX_STACK_LINE(42)
			this->set_x((::flixel::FlxG_obj::width + this->get_width()));
			HX_STACK_LINE(43)
			this->set_y(((int)-80 - rand));
			HX_STACK_LINE(44)
			this->addScore = true;
		}
	}
return null();
}


bool Icicles_obj::canAddScore( ){
	HX_STACK_FRAME("Icicles","canAddScore",0x3b46e739,"Icicles.canAddScore","Icicles.hx",49,0x953fe078)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	if ((this->addScore)){
		HX_STACK_LINE(50)
		this->addScore = false;
		HX_STACK_LINE(51)
		return true;
	}
	else{
		HX_STACK_LINE(53)
		return false;
	}
	HX_STACK_LINE(49)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Icicles_obj,canAddScore,return )


Icicles_obj::Icicles_obj()
{
}

Dynamic Icicles_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addScore") ) { return addScore; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canAddScore") ) { return canAddScore_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Icicles_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addScore") ) { addScore=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Icicles_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("addScore"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Icicles_obj,addScore),HX_CSTRING("addScore")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("addScore"),
	HX_CSTRING("update"),
	HX_CSTRING("canAddScore"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Icicles_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Icicles_obj::__mClass,"__mClass");
};

#endif

Class Icicles_obj::__mClass;

void Icicles_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Icicles"), hx::TCanCast< Icicles_obj> ,sStaticFields,sMemberFields,
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

void Icicles_obj::__boot()
{
}

