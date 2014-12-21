#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::background__svg;

::String AssetPaths_obj::backgroundhills__png;

::String AssetPaths_obj::backgroundhills__svg;

::String AssetPaths_obj::Fipps_Regular__otf;

::String AssetPaths_obj::ground__png;

::String AssetPaths_obj::ground__svg;

::String AssetPaths_obj::icicle__png;

::String AssetPaths_obj::icicle__svg;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::snowflake__png;

::String AssetPaths_obj::snowflake__svg;

::String AssetPaths_obj::Thumbs__db;

::String AssetPaths_obj::visitor1__ttf;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::crashsound__mp3;

::String AssetPaths_obj::crashsound__wav;

::String AssetPaths_obj::floatsound__mp3;

::String AssetPaths_obj::floatsound__wav;

::String AssetPaths_obj::sounds_go_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

Dynamic AssetPaths_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AssetPaths_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetPaths_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("data_goes_here__txt"),
	HX_CSTRING("background__svg"),
	HX_CSTRING("backgroundhills__png"),
	HX_CSTRING("backgroundhills__svg"),
	HX_CSTRING("Fipps_Regular__otf"),
	HX_CSTRING("ground__png"),
	HX_CSTRING("ground__svg"),
	HX_CSTRING("icicle__png"),
	HX_CSTRING("icicle__svg"),
	HX_CSTRING("images_go_here__txt"),
	HX_CSTRING("snowflake__png"),
	HX_CSTRING("snowflake__svg"),
	HX_CSTRING("Thumbs__db"),
	HX_CSTRING("visitor1__ttf"),
	HX_CSTRING("music_goes_here__txt"),
	HX_CSTRING("crashsound__mp3"),
	HX_CSTRING("crashsound__wav"),
	HX_CSTRING("floatsound__mp3"),
	HX_CSTRING("floatsound__wav"),
	HX_CSTRING("sounds_go_here__txt"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::background__svg,"background__svg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::backgroundhills__png,"backgroundhills__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::backgroundhills__svg,"backgroundhills__svg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Fipps_Regular__otf,"Fipps_Regular__otf");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::ground__png,"ground__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::ground__svg,"ground__svg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::icicle__png,"icicle__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::icicle__svg,"icicle__svg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::snowflake__png,"snowflake__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::snowflake__svg,"snowflake__svg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Thumbs__db,"Thumbs__db");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::visitor1__ttf,"visitor1__ttf");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::crashsound__mp3,"crashsound__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::crashsound__wav,"crashsound__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::floatsound__mp3,"floatsound__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::floatsound__wav,"floatsound__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::background__svg,"background__svg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::backgroundhills__png,"backgroundhills__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::backgroundhills__svg,"backgroundhills__svg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Fipps_Regular__otf,"Fipps_Regular__otf");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::ground__png,"ground__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::ground__svg,"ground__svg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::icicle__png,"icicle__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::icicle__svg,"icicle__svg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::snowflake__png,"snowflake__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::snowflake__svg,"snowflake__svg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Thumbs__db,"Thumbs__db");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::visitor1__ttf,"visitor1__ttf");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::crashsound__mp3,"crashsound__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::crashsound__wav,"crashsound__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::floatsound__mp3,"floatsound__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::floatsound__wav,"floatsound__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#endif

Class AssetPaths_obj::__mClass;

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AssetPaths"), hx::TCanCast< AssetPaths_obj> ,sStaticFields,sMemberFields,
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

void AssetPaths_obj::__boot()
{
	data_goes_here__txt= HX_CSTRING("assets/data/data-goes-here.txt");
	background__svg= HX_CSTRING("assets/images/background.svg");
	backgroundhills__png= HX_CSTRING("assets/images/backgroundhills.png");
	backgroundhills__svg= HX_CSTRING("assets/images/backgroundhills.svg");
	Fipps_Regular__otf= HX_CSTRING("assets/images/Fipps_Regular.otf");
	ground__png= HX_CSTRING("assets/images/ground.png");
	ground__svg= HX_CSTRING("assets/images/ground.svg");
	icicle__png= HX_CSTRING("assets/images/icicle.png");
	icicle__svg= HX_CSTRING("assets/images/icicle.svg");
	images_go_here__txt= HX_CSTRING("assets/images/images-go-here.txt");
	snowflake__png= HX_CSTRING("assets/images/snowflake.png");
	snowflake__svg= HX_CSTRING("assets/images/snowflake.svg");
	Thumbs__db= HX_CSTRING("assets/images/Thumbs.db");
	visitor1__ttf= HX_CSTRING("assets/images/visitor1.ttf");
	music_goes_here__txt= HX_CSTRING("assets/music/music-goes-here.txt");
	crashsound__mp3= HX_CSTRING("assets/sounds/crashsound.mp3");
	crashsound__wav= HX_CSTRING("assets/sounds/crashsound.wav");
	floatsound__mp3= HX_CSTRING("assets/sounds/floatsound.mp3");
	floatsound__wav= HX_CSTRING("assets/sounds/floatsound.wav");
	sounds_go_here__txt= HX_CSTRING("assets/sounds/sounds-go-here.txt");
}

