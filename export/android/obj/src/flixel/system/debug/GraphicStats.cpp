#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicStats
#include <flixel/system/debug/GraphicStats.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void GraphicStats_obj::__construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{
HX_STACK_FRAME("flixel.system.debug.GraphicStats","new",0xb5925771,"flixel.system.debug.GraphicStats.new","openfl/_v2/Assets.hx",1654,0x2846aac8)

HX_STACK_ARG(width,"width")

HX_STACK_ARG(height,"height")

HX_STACK_ARG(__o_transparent,"transparent")

HX_STACK_ARG(__o_fillRGBA,"fillRGBA")
Dynamic transparent = __o_transparent.Default(true);
Dynamic fillRGBA = __o_fillRGBA.Default(-1);
{
	HX_STACK_LINE(1720)
	super::__construct(width,height,transparent,fillRGBA,null());
	HX_STACK_LINE(1722)
	::openfl::_v2::utils::ByteArray byteArray = ::openfl::_v2::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::system::debug::GraphicStats_obj::resourceName));		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(1723)
	this->__handle = ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_from_bytes(byteArray,null());
}
;
	return null();
}

//GraphicStats_obj::~GraphicStats_obj() { }

Dynamic GraphicStats_obj::__CreateEmpty() { return  new GraphicStats_obj; }
hx::ObjectPtr< GraphicStats_obj > GraphicStats_obj::__new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{  hx::ObjectPtr< GraphicStats_obj > result = new GraphicStats_obj();
	result->__construct(width,height,__o_transparent,__o_fillRGBA);
	return result;}

Dynamic GraphicStats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicStats_obj > result = new GraphicStats_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String GraphicStats_obj::resourceName;


GraphicStats_obj::GraphicStats_obj()
{
}

Dynamic GraphicStats_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicStats_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicStats_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("resourceName"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicStats_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicStats_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicStats_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicStats_obj::resourceName,"resourceName");
};

#endif

Class GraphicStats_obj::__mClass;

void GraphicStats_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.GraphicStats"), hx::TCanCast< GraphicStats_obj> ,sStaticFields,sMemberFields,
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

void GraphicStats_obj::__boot()
{
	resourceName= HX_CSTRING("__ASSET__:bitmap_flixel_system_debug_GraphicStats");
}

} // end namespace flixel
} // end namespace system
} // end namespace debug