#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
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
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void Log_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.Log","new",0x84cc67ce,"flixel.system.debug.Log.new","flixel/system/debug/Log.hx",28,0xb2bca443)
{
	HX_STACK_LINE(29)
	super::__construct(HX_CSTRING("log"),::flixel::system::debug::GraphicLog_obj::__new((int)0,(int)0,null(),null()),null(),null(),null(),null(),null());
	HX_STACK_LINE(31)
	this->_text = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(32)
	this->_text->set_x((int)2);
	HX_STACK_LINE(33)
	this->_text->set_y((int)15);
	HX_STACK_LINE(34)
	this->_text->set_multiline(true);
	HX_STACK_LINE(35)
	this->_text->set_wordWrap(true);
	HX_STACK_LINE(36)
	this->_text->set_selectable(true);
	HX_STACK_LINE(37)
	this->_text->set_embedFonts(true);
	HX_STACK_LINE(38)
	this->_text->set_defaultTextFormat(::openfl::_v2::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEBUGGER,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(39)
	this->addChild(this->_text);
	HX_STACK_LINE(41)
	this->_lines = Array_obj< ::String >::__new();
}
;
	return null();
}

//Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new()
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct();
	return result;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct();
	return result;}

Void Log_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.Log","destroy",0x1caa1368,"flixel.system.debug.Log.destroy","flixel/system/debug/Log.hx",48,0xb2bca443)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		if (((this->_text != null()))){
			HX_STACK_LINE(51)
			this->removeChild(this->_text);
			HX_STACK_LINE(52)
			this->_text = null();
		}
		HX_STACK_LINE(55)
		this->_lines = null();
		HX_STACK_LINE(56)
		this->super::destroy();
	}
return null();
}


bool Log_obj::add( Dynamic Data,::flixel::system::debug::LogStyle Style,hx::Null< bool >  __o_FireOnce){
bool FireOnce = __o_FireOnce.Default(false);
	HX_STACK_FRAME("flixel.system.debug.Log","add",0x84c2898f,"flixel.system.debug.Log.add","flixel/system/debug/Log.hx",66,0xb2bca443)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(FireOnce,"FireOnce")
{
		HX_STACK_LINE(67)
		if (((Data == null()))){
			HX_STACK_LINE(69)
			return false;
		}
		HX_STACK_LINE(72)
		Array< ::String > texts = Array_obj< ::String >::__new();		HX_STACK_VAR(texts,"texts");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(75)
			int _g = Data->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			while(((_g1 < _g))){
				HX_STACK_LINE(75)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(77)
				texts[i] = ::Std_obj::string(Data->__GetItem(i));
				HX_STACK_LINE(80)
				texts[i] = ::StringTools_obj::htmlEscape(texts->__get(i),null());
			}
		}
		HX_STACK_LINE(83)
		::String text = (Style->prefix + texts->join(HX_CSTRING(" ")));		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(87)
		text = ::flixel::util::FlxStringUtil_obj::htmlFormat(text,Style->size,Style->color,Style->bold,Style->italic,Style->underlined);
		HX_STACK_LINE(91)
		if ((FireOnce)){
			HX_STACK_LINE(93)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			Array< ::String > _g1 = this->_lines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			while(((_g < _g1->length))){
				HX_STACK_LINE(93)
				::String line = _g1->__get(_g);		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(93)
				++(_g);
				HX_STACK_LINE(95)
				if (((text == line))){
					HX_STACK_LINE(97)
					return false;
				}
			}
		}
		HX_STACK_LINE(103)
		if (((this->_lines->length <= (int)0))){
			HX_STACK_LINE(105)
			this->_text->set_text(HX_CSTRING(""));
		}
		HX_STACK_LINE(108)
		this->_lines->push(text);
		HX_STACK_LINE(110)
		if (((this->_lines->length > (int)200))){
			HX_STACK_LINE(112)
			this->_lines->shift();
			HX_STACK_LINE(113)
			::String newText = HX_CSTRING("");		HX_STACK_VAR(newText,"newText");
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(114)
				int _g = this->_lines->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(114)
				while(((_g1 < _g))){
					HX_STACK_LINE(114)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(116)
					hx::AddEq(newText,(this->_lines->__get(i) + HX_CSTRING("<br>")));
				}
			}
			HX_STACK_LINE(120)
			this->_text->set_htmlText(newText);
		}
		else{
			HX_STACK_LINE(129)
			::openfl::_v2::text::TextField _g = this->_text;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			_g->set_htmlText((_g->get_htmlText() + ((text + HX_CSTRING("<br>")))));
		}
		HX_STACK_LINE(135)
		this->_text->set_scrollV(::Std_obj::_int(this->_text->get_maxScrollV()));
		HX_STACK_LINE(136)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Log_obj,add,return )

Void Log_obj::clear( ){
{
		HX_STACK_FRAME("flixel.system.debug.Log","clear",0x4dbb407b,"flixel.system.debug.Log.clear","flixel/system/debug/Log.hx",140,0xb2bca443)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		this->_text->set_text(HX_CSTRING(""));
		HX_STACK_LINE(142)
		this->_lines->splice((int)0,this->_lines->length);
		HX_STACK_LINE(144)
		this->_text->set_scrollV((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Log_obj,clear,(void))

Void Log_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.Log","updateSize",0xd48dddbc,"flixel.system.debug.Log.updateSize","flixel/system/debug/Log.hx",152,0xb2bca443)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		this->super::updateSize();
		HX_STACK_LINE(155)
		this->_text->set_width((this->_width - (int)10));
		HX_STACK_LINE(156)
		this->_text->set_height((this->_height - (int)15));
	}
return null();
}


int Log_obj::MAX_LOG_LINES;

::String Log_obj::LINE_BREAK;


Log_obj::Log_obj()
{
}

void Log_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Log);
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_lines,"_lines");
	::flixel::system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Log_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_lines,"_lines");
	::flixel::system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Log_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { return _lines; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Log_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_lines") ) { _lines=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Log_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_text"));
	outFields->push(HX_CSTRING("_lines"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MAX_LOG_LINES"),
	HX_CSTRING("LINE_BREAK"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Log_obj,_text),HX_CSTRING("_text")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Log_obj,_lines),HX_CSTRING("_lines")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_text"),
	HX_CSTRING("_lines"),
	HX_CSTRING("destroy"),
	HX_CSTRING("add"),
	HX_CSTRING("clear"),
	HX_CSTRING("updateSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_MARK_MEMBER_NAME(Log_obj::LINE_BREAK,"LINE_BREAK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::MAX_LOG_LINES,"MAX_LOG_LINES");
	HX_VISIT_MEMBER_NAME(Log_obj::LINE_BREAK,"LINE_BREAK");
};

#endif

Class Log_obj::__mClass;

void Log_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Log"), hx::TCanCast< Log_obj> ,sStaticFields,sMemberFields,
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

void Log_obj::__boot()
{
	MAX_LOG_LINES= (int)200;
	LINE_BREAK= HX_CSTRING("<br>");
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
