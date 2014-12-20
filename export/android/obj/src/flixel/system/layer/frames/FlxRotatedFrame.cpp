#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxRotatedFrame
#include <flixel/system/layer/frames/FlxRotatedFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FrameType
#include <flixel/system/layer/frames/FrameType.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace system{
namespace layer{
namespace frames{

Void FlxRotatedFrame_obj::__construct(::flixel::system::layer::TileSheetData tileSheet)
{
HX_STACK_FRAME("flixel.system.layer.frames.FlxRotatedFrame","new",0x9022602a,"flixel.system.layer.frames.FlxRotatedFrame.new","flixel/system/layer/frames/FlxRotatedFrame.hx",10,0x68b07e86)

HX_STACK_ARG(tileSheet,"tileSheet")
{
	HX_STACK_LINE(11)
	super::__construct(tileSheet);
	HX_STACK_LINE(13)
	this->type = ::flixel::system::layer::frames::FrameType_obj::ROTATED;
}
;
	return null();
}

//FlxRotatedFrame_obj::~FlxRotatedFrame_obj() { }

Dynamic FlxRotatedFrame_obj::__CreateEmpty() { return  new FlxRotatedFrame_obj; }
hx::ObjectPtr< FlxRotatedFrame_obj > FlxRotatedFrame_obj::__new(::flixel::system::layer::TileSheetData tileSheet)
{  hx::ObjectPtr< FlxRotatedFrame_obj > result = new FlxRotatedFrame_obj();
	result->__construct(tileSheet);
	return result;}

Dynamic FlxRotatedFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRotatedFrame_obj > result = new FlxRotatedFrame_obj();
	result->__construct(inArgs[0]);
	return result;}

::openfl::_v2::display::BitmapData FlxRotatedFrame_obj::paintOnBitmap( ::openfl::_v2::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.system.layer.frames.FlxRotatedFrame","paintOnBitmap",0xb37f3876,"flixel.system.layer.frames.FlxRotatedFrame.paintOnBitmap","flixel/system/layer/frames/FlxRotatedFrame.hx",17,0x68b07e86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(18)
	::openfl::_v2::display::BitmapData result = null();		HX_STACK_VAR(result,"result");
	struct _Function_1_1{
		inline static bool Block( ::flixel::system::layer::frames::FlxRotatedFrame_obj *__this,::openfl::_v2::display::BitmapData &bmd){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/layer/frames/FlxRotatedFrame.hx",20,0x68b07e86)
			{
				HX_STACK_LINE(20)
				return (  (((bmd->get_width() == __this->sourceSize->x))) ? bool((bmd->get_height() == __this->sourceSize->y)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(20)
	if (((  (((bmd != null()))) ? bool(_Function_1_1::Block(this,bmd)) : bool(false) ))){
		HX_STACK_LINE(22)
		result = bmd;
	}
	else{
		HX_STACK_LINE(24)
		if (((bmd != null()))){
			HX_STACK_LINE(26)
			bmd->dispose();
		}
	}
	HX_STACK_LINE(29)
	if (((result == null()))){
		HX_STACK_LINE(31)
		int _g = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		result = ::openfl::_v2::display::BitmapData_obj::__new(_g,::Std_obj::_int(this->sourceSize->y),true,(int)0,null());
	}
	HX_STACK_LINE(34)
	int _g1 = ::Std_obj::_int(this->frame->width);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(34)
	::openfl::_v2::display::BitmapData temp = ::openfl::_v2::display::BitmapData_obj::__new(_g1,::Std_obj::_int(this->frame->height),true,(int)0,null());		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(35)
	::flixel::system::layer::frames::FlxFrame_obj::POINT->x = ::flixel::system::layer::frames::FlxFrame_obj::POINT->y = (int)0;
	HX_STACK_LINE(36)
	temp->copyPixels(this->_tileSheet->bitmap,this->frame,::flixel::system::layer::frames::FlxFrame_obj::POINT,null(),null(),null());
	HX_STACK_LINE(38)
	::flixel::system::layer::frames::FlxFrame_obj::MATRIX->identity();
	HX_STACK_LINE(39)
	::flixel::system::layer::frames::FlxFrame_obj::MATRIX->translate((-0.5 * this->frame->width),(-0.5 * this->frame->height));
	HX_STACK_LINE(40)
	::flixel::system::layer::frames::FlxFrame_obj::MATRIX->rotate((-90. * ((Float(::Math_obj::PI) / Float((int)180)))));
	HX_STACK_LINE(41)
	::flixel::system::layer::frames::FlxFrame_obj::MATRIX->translate((this->offset->x + (0.5 * this->frame->height)),(this->offset->y + (0.5 * this->frame->width)));
	HX_STACK_LINE(43)
	int _g2 = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(43)
	result = ::openfl::_v2::display::BitmapData_obj::__new(_g2,::Std_obj::_int(this->sourceSize->y),true,(int)0,null());
	HX_STACK_LINE(44)
	result->draw(temp,::flixel::system::layer::frames::FlxFrame_obj::MATRIX,null(),null(),null(),null());
	HX_STACK_LINE(45)
	temp->dispose();
	HX_STACK_LINE(47)
	return result;
}



FlxRotatedFrame_obj::FlxRotatedFrame_obj()
{
}

Dynamic FlxRotatedFrame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"paintOnBitmap") ) { return paintOnBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRotatedFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRotatedFrame_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("paintOnBitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRotatedFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRotatedFrame_obj::__mClass,"__mClass");
};

#endif

Class FlxRotatedFrame_obj::__mClass;

void FlxRotatedFrame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.frames.FlxRotatedFrame"), hx::TCanCast< FlxRotatedFrame_obj> ,sStaticFields,sMemberFields,
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

void FlxRotatedFrame_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames
