#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace events{

Void IOErrorEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{
HX_STACK_FRAME("openfl.events.IOErrorEvent","new",0x69722dc1,"openfl.events.IOErrorEvent.new","openfl/events/IOErrorEvent.hx",12,0x9ba976af)

HX_STACK_ARG(type,"type")

HX_STACK_ARG(__o_bubbles,"bubbles")

HX_STACK_ARG(__o_cancelable,"cancelable")

HX_STACK_ARG(__o_text,"text")

HX_STACK_ARG(__o_id,"id")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_CSTRING(""));
int id = __o_id.Default(0);
{
	HX_STACK_LINE(12)
	super::__construct(type,bubbles,cancelable,text,id);
}
;
	return null();
}

//IOErrorEvent_obj::~IOErrorEvent_obj() { }

Dynamic IOErrorEvent_obj::__CreateEmpty() { return  new IOErrorEvent_obj; }
hx::ObjectPtr< IOErrorEvent_obj > IOErrorEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{  hx::ObjectPtr< IOErrorEvent_obj > result = new IOErrorEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return result;}

Dynamic IOErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IOErrorEvent_obj > result = new IOErrorEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::openfl::_v2::events::Event IOErrorEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.IOErrorEvent","clone",0xfbdc4afe,"openfl.events.IOErrorEvent.clone","openfl/events/IOErrorEvent.hx",17,0x9ba976af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::String _g = this->get_type();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	bool _g1 = this->get_bubbles();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(19)
	return ::openfl::events::IOErrorEvent_obj::__new(_g,_g1,this->get_cancelable(),this->text,this->errorID);
}


::String IOErrorEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.IOErrorEvent","toString",0xfbbd53ab,"openfl.events.IOErrorEvent.toString","openfl/events/IOErrorEvent.hx",24,0x9ba976af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	::String _g = ((HX_CSTRING("[IOErrorEvent type=") + this->get_type()) + HX_CSTRING(" bubbles="));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	::String _g1 = ((_g + ::Std_obj::string(this->get_bubbles())) + HX_CSTRING(" cancelable="));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(26)
	return ((((((_g1 + ::Std_obj::string(this->get_cancelable())) + HX_CSTRING(" text=")) + this->text) + HX_CSTRING(" errorID=")) + this->errorID) + HX_CSTRING("]"));
}


::String IOErrorEvent_obj::IO_ERROR;


IOErrorEvent_obj::IOErrorEvent_obj()
{
}

Dynamic IOErrorEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"IO_ERROR") ) { return IO_ERROR; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IOErrorEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"IO_ERROR") ) { IO_ERROR=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IOErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("IO_ERROR"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IOErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(IOErrorEvent_obj::IO_ERROR,"IO_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IOErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(IOErrorEvent_obj::IO_ERROR,"IO_ERROR");
};

#endif

Class IOErrorEvent_obj::__mClass;

void IOErrorEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.events.IOErrorEvent"), hx::TCanCast< IOErrorEvent_obj> ,sStaticFields,sMemberFields,
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

void IOErrorEvent_obj::__boot()
{
	IO_ERROR= HX_CSTRING("ioError");
}

} // end namespace openfl
} // end namespace events
