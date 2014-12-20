#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
namespace openfl{
namespace events{

Void FocusEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::_v2::display::InteractiveObject relatedObject,hx::Null< bool >  __o_shiftKey,hx::Null< int >  __o_keyCode)
{
HX_STACK_FRAME("openfl.events.FocusEvent","new",0xf00a0d8b,"openfl.events.FocusEvent.new","openfl/events/FocusEvent.hx",20,0xe559e625)

HX_STACK_ARG(type,"type")

HX_STACK_ARG(__o_bubbles,"bubbles")

HX_STACK_ARG(__o_cancelable,"cancelable")

HX_STACK_ARG(relatedObject,"relatedObject")

HX_STACK_ARG(__o_shiftKey,"shiftKey")

HX_STACK_ARG(__o_keyCode,"keyCode")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
int keyCode = __o_keyCode.Default(0);
{
	HX_STACK_LINE(22)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(24)
	this->keyCode = keyCode;
	HX_STACK_LINE(25)
	this->shiftKey = shiftKey;
	HX_STACK_LINE(26)
	this->relatedObject = relatedObject;
}
;
	return null();
}

//FocusEvent_obj::~FocusEvent_obj() { }

Dynamic FocusEvent_obj::__CreateEmpty() { return  new FocusEvent_obj; }
hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::_v2::display::InteractiveObject relatedObject,hx::Null< bool >  __o_shiftKey,hx::Null< int >  __o_keyCode)
{  hx::ObjectPtr< FocusEvent_obj > result = new FocusEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,relatedObject,__o_shiftKey,__o_keyCode);
	return result;}

Dynamic FocusEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FocusEvent_obj > result = new FocusEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::openfl::_v2::events::Event FocusEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.FocusEvent","clone",0x40033148,"openfl.events.FocusEvent.clone","openfl/events/FocusEvent.hx",31,0xe559e625)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	::String _g = this->get_type();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(33)
	bool _g1 = this->get_bubbles();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(33)
	::openfl::events::FocusEvent event = ::openfl::events::FocusEvent_obj::__new(_g,_g1,this->get_cancelable(),this->relatedObject,this->shiftKey,this->keyCode);		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(34)
	event->set_target(this->get_target());
	HX_STACK_LINE(35)
	event->set_currentTarget(this->get_currentTarget());
	HX_STACK_LINE(39)
	return event;
}


::String FocusEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.FocusEvent","toString",0x8b53f7a1,"openfl.events.FocusEvent.toString","openfl/events/FocusEvent.hx",44,0xe559e625)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	::String _g = ((HX_CSTRING("[FocusEvent type=") + this->get_type()) + HX_CSTRING(" bubbles="));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	::String _g1 = ((_g + ::Std_obj::string(this->get_bubbles())) + HX_CSTRING(" cancelable="));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(46)
	::String _g2 = ((_g1 + ::Std_obj::string(this->get_cancelable())) + HX_CSTRING(" relatedObject="));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(46)
	::String _g3 = ((_g2 + ::Std_obj::string(this->relatedObject)) + HX_CSTRING(" shiftKey="));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(46)
	return ((((_g3 + ::Std_obj::string(this->shiftKey)) + HX_CSTRING(" keyCode=")) + this->keyCode) + HX_CSTRING("]"));
}


::String FocusEvent_obj::FOCUS_IN;

::String FocusEvent_obj::FOCUS_OUT;

::String FocusEvent_obj::KEY_FOCUS_CHANGE;

::String FocusEvent_obj::MOUSE_FOCUS_CHANGE;


FocusEvent_obj::FocusEvent_obj()
{
}

void FocusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusEvent);
	HX_MARK_MEMBER_NAME(keyCode,"keyCode");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	::openfl::_v2::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FocusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyCode,"keyCode");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	::openfl::_v2::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FocusEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return keyCode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FOCUS_IN") ) { return FOCUS_IN; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FOCUS_OUT") ) { return FOCUS_OUT; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return relatedObject; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"KEY_FOCUS_CHANGE") ) { return KEY_FOCUS_CHANGE; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MOUSE_FOCUS_CHANGE") ) { return MOUSE_FOCUS_CHANGE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FocusEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FOCUS_IN") ) { FOCUS_IN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FOCUS_OUT") ) { FOCUS_OUT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast< ::openfl::_v2::display::InteractiveObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"KEY_FOCUS_CHANGE") ) { KEY_FOCUS_CHANGE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MOUSE_FOCUS_CHANGE") ) { MOUSE_FOCUS_CHANGE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FocusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("keyCode"));
	outFields->push(HX_CSTRING("relatedObject"));
	outFields->push(HX_CSTRING("shiftKey"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FOCUS_IN"),
	HX_CSTRING("FOCUS_OUT"),
	HX_CSTRING("KEY_FOCUS_CHANGE"),
	HX_CSTRING("MOUSE_FOCUS_CHANGE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FocusEvent_obj,keyCode),HX_CSTRING("keyCode")},
	{hx::fsObject /*::openfl::_v2::display::InteractiveObject*/ ,(int)offsetof(FocusEvent_obj,relatedObject),HX_CSTRING("relatedObject")},
	{hx::fsBool,(int)offsetof(FocusEvent_obj,shiftKey),HX_CSTRING("shiftKey")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("keyCode"),
	HX_CSTRING("relatedObject"),
	HX_CSTRING("shiftKey"),
	HX_CSTRING("clone"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

#endif

Class FocusEvent_obj::__mClass;

void FocusEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.events.FocusEvent"), hx::TCanCast< FocusEvent_obj> ,sStaticFields,sMemberFields,
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

void FocusEvent_obj::__boot()
{
	FOCUS_IN= HX_CSTRING("focusIn");
	FOCUS_OUT= HX_CSTRING("focusOut");
	KEY_FOCUS_CHANGE= HX_CSTRING("keyFocusChange");
	MOUSE_FOCUS_CHANGE= HX_CSTRING("mouseFocusChange");
}

} // end namespace openfl
} // end namespace events