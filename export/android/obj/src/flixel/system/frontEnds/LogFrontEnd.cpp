#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Log
#include <flixel/system/debug/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
#ifndef INCLUDED_openfl__v2_media_Sound
#include <openfl/_v2/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__v2_media_SoundChannel
#include <openfl/_v2/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void LogFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","new",0xf2533c4e,"flixel.system.frontEnds.LogFrontEnd.new","flixel/system/frontEnds/LogFrontEnd.hx",9,0x686ab8c3)
{
	HX_STACK_LINE(14)
	this->redirectTraces = false;
	HX_STACK_LINE(107)
	this->_standardTraceFunction = ::haxe::Log_obj::trace_dyn();
}
;
	return null();
}

//LogFrontEnd_obj::~LogFrontEnd_obj() { }

Dynamic LogFrontEnd_obj::__CreateEmpty() { return  new LogFrontEnd_obj; }
hx::ObjectPtr< LogFrontEnd_obj > LogFrontEnd_obj::__new()
{  hx::ObjectPtr< LogFrontEnd_obj > result = new LogFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic LogFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogFrontEnd_obj > result = new LogFrontEnd_obj();
	result->__construct();
	return result;}

Void LogFrontEnd_obj::add( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","add",0xf2495e0f,"flixel.system.frontEnds.LogFrontEnd.add","flixel/system/frontEnds/LogFrontEnd.hx",21,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_LINE(21)
		this->advanced(Data,::flixel::system::debug::LogStyle_obj::NORMAL,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,add,(void))

Void LogFrontEnd_obj::warn( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","warn",0x1c716698,"flixel.system.frontEnds.LogFrontEnd.warn","flixel/system/frontEnds/LogFrontEnd.hx",28,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_LINE(28)
		this->advanced(Data,::flixel::system::debug::LogStyle_obj::WARNING,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,warn,(void))

Void LogFrontEnd_obj::error( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","error",0x74ce8f36,"flixel.system.frontEnds.LogFrontEnd.error","flixel/system/frontEnds/LogFrontEnd.hx",35,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_LINE(35)
		this->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,error,(void))

Void LogFrontEnd_obj::notice( Dynamic Data){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","notice",0xa03f14ea,"flixel.system.frontEnds.LogFrontEnd.notice","flixel/system/frontEnds/LogFrontEnd.hx",42,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_LINE(42)
		this->advanced(Data,::flixel::system::debug::LogStyle_obj::NOTICE,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,notice,(void))

Void LogFrontEnd_obj::advanced( Dynamic Data,::flixel::system::debug::LogStyle Style,hx::Null< bool >  __o_FireOnce){
bool FireOnce = __o_FireOnce.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","advanced",0x05a7fef4,"flixel.system.frontEnds.LogFrontEnd.advanced","flixel/system/frontEnds/LogFrontEnd.hx",54,0x686ab8c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(FireOnce,"FireOnce")
{
		HX_STACK_LINE(56)
		if (((::flixel::FlxG_obj::game->debugger == null()))){
			HX_STACK_LINE(58)
			this->_standardTraceFunction(Data);
			HX_STACK_LINE(59)
			return null();
		}
		HX_STACK_LINE(62)
		if (((Style == null()))){
			HX_STACK_LINE(64)
			Style = ::flixel::system::debug::LogStyle_obj::NORMAL;
		}
		HX_STACK_LINE(67)
		if ((!(::Std_obj::is(Data,hx::ClassOf< Array<int> >())))){
			HX_STACK_LINE(69)
			Data = Dynamic( Array_obj<Dynamic>::__new().Add(Data));
		}
		HX_STACK_LINE(72)
		if ((::flixel::FlxG_obj::game->debugger->log->add(Data,Style,FireOnce))){
			HX_STACK_LINE(75)
			if (((Style->errorSound != null()))){
				struct _Function_3_1{
					inline static ::openfl::_v2::media::Sound Block( ::flixel::system::debug::LogStyle &Style){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/frontEnds/LogFrontEnd.hx",77,0x686ab8c3)
						{
							HX_STACK_LINE(77)
							::String extension = HX_CSTRING("");		HX_STACK_VAR(extension,"extension");
							HX_STACK_LINE(77)
							extension = HX_CSTRING(".ogg");
							HX_STACK_LINE(77)
							return ::openfl::_v2::Assets_obj::getSound((Style->errorSound + extension),null());
						}
						return null();
					}
				};
				HX_STACK_LINE(77)
				::flixel::FlxG_obj::sound->load((_Function_3_1::Block(Style))->play(null(),null(),null()),null(),null(),null(),null(),null(),null());
			}
			HX_STACK_LINE(81)
			if ((Style->openConsole)){
				HX_STACK_LINE(83)
				::flixel::FlxG_obj::game->debugger->set_visible(true);
				HX_STACK_LINE(83)
				::flixel::FlxG_obj::debugger->visible = true;
			}
			HX_STACK_LINE(86)
			if ((Style->callbackFunction = null())){
				HX_STACK_LINE(88)
				Style->callbackFunction();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(LogFrontEnd_obj,advanced,(void))

Void LogFrontEnd_obj::clear( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","clear",0x4a0034fb,"flixel.system.frontEnds.LogFrontEnd.clear","flixel/system/frontEnds/LogFrontEnd.hx",100,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::flixel::FlxG_obj::game->debugger->log->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LogFrontEnd_obj,clear,(void))

bool LogFrontEnd_obj::set_redirectTraces( bool Redirect){
	HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","set_redirectTraces",0xf7f71199,"flixel.system.frontEnds.LogFrontEnd.set_redirectTraces","flixel/system/frontEnds/LogFrontEnd.hx",111,0x686ab8c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Redirect,"Redirect")
	HX_STACK_LINE(112)
	if ((Redirect)){
		HX_STACK_LINE(112)
		::haxe::Log_obj::trace = this->processTraceData_dyn();
	}
	else{
		HX_STACK_LINE(112)
		::haxe::Log_obj::trace = this->_standardTraceFunction;
	}
	HX_STACK_LINE(113)
	return this->redirectTraces = Redirect;
}


HX_DEFINE_DYNAMIC_FUNC1(LogFrontEnd_obj,set_redirectTraces,return )

Void LogFrontEnd_obj::processTraceData( Dynamic Data,Dynamic Info){
{
		HX_STACK_FRAME("flixel.system.frontEnds.LogFrontEnd","processTraceData",0x5a916632,"flixel.system.frontEnds.LogFrontEnd.processTraceData","flixel/system/frontEnds/LogFrontEnd.hx",123,0x686ab8c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_ARG(Info,"Info")
		HX_STACK_LINE(124)
		Dynamic paramArray = Dynamic( Array_obj<Dynamic>::__new().Add(Data));		HX_STACK_VAR(paramArray,"paramArray");
		HX_STACK_LINE(126)
		if (((Info->__Field(HX_CSTRING("customParams"),true) != null()))){
			HX_STACK_LINE(128)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(128)
			Dynamic _g1 = Info->__Field(HX_CSTRING("customParams"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(128)
			while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(128)
				Dynamic i = _g1->__GetItem(_g);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(128)
				++(_g);
				HX_STACK_LINE(130)
				paramArray->__Field(HX_CSTRING("push"),true)(i);
			}
		}
		HX_STACK_LINE(134)
		this->advanced(paramArray,::flixel::system::debug::LogStyle_obj::NORMAL,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LogFrontEnd_obj,processTraceData,(void))


LogFrontEnd_obj::LogFrontEnd_obj()
{
}

void LogFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogFrontEnd);
	HX_MARK_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_MARK_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
	HX_MARK_END_CLASS();
}

void LogFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(redirectTraces,"redirectTraces");
	HX_VISIT_MEMBER_NAME(_standardTraceFunction,"_standardTraceFunction");
}

Dynamic LogFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"warn") ) { return warn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { return notice_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"advanced") ) { return advanced_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { return redirectTraces; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processTraceData") ) { return processTraceData_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_redirectTraces") ) { return set_redirectTraces_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { return _standardTraceFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LogFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"redirectTraces") ) { if (inCallProp) return set_redirectTraces(inValue);redirectTraces=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_standardTraceFunction") ) { _standardTraceFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("redirectTraces"));
	outFields->push(HX_CSTRING("_standardTraceFunction"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(LogFrontEnd_obj,redirectTraces),HX_CSTRING("redirectTraces")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LogFrontEnd_obj,_standardTraceFunction),HX_CSTRING("_standardTraceFunction")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("redirectTraces"),
	HX_CSTRING("_standardTraceFunction"),
	HX_CSTRING("add"),
	HX_CSTRING("warn"),
	HX_CSTRING("error"),
	HX_CSTRING("notice"),
	HX_CSTRING("advanced"),
	HX_CSTRING("clear"),
	HX_CSTRING("set_redirectTraces"),
	HX_CSTRING("processTraceData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class LogFrontEnd_obj::__mClass;

void LogFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.LogFrontEnd"), hx::TCanCast< LogFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void LogFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
