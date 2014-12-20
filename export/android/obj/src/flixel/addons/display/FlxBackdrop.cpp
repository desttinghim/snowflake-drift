#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace display{

Void FlxBackdrop_obj::__construct(Dynamic Graphic,hx::Null< Float >  __o_ScrollX,hx::Null< Float >  __o_ScrollY,hx::Null< bool >  __o_RepeatX,hx::Null< bool >  __o_RepeatY)
{
HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","new",0xbcdf9a65,"flixel.addons.display.FlxBackdrop.new","flixel/addons/display/FlxBackdrop.hx",17,0x7f3b228c)

HX_STACK_ARG(Graphic,"Graphic")

HX_STACK_ARG(__o_ScrollX,"ScrollX")

HX_STACK_ARG(__o_ScrollY,"ScrollY")

HX_STACK_ARG(__o_RepeatX,"RepeatX")

HX_STACK_ARG(__o_RepeatY,"RepeatY")
Float ScrollX = __o_ScrollX.Default(1);
Float ScrollY = __o_ScrollY.Default(1);
bool RepeatX = __o_RepeatX.Default(true);
bool RepeatY = __o_RepeatY.Default(true);
{
	HX_STACK_LINE(28)
	this->_numTiles = (int)0;
	HX_STACK_LINE(44)
	super::__construct(null(),null(),null());
	struct _Function_1_1{
		inline static ::flixel::util::loaders::CachedGraphics Block( Dynamic &Graphic){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/display/FlxBackdrop.hx",46,0x7f3b228c)
			{
				HX_STACK_LINE(46)
				bool Unique = false;		HX_STACK_VAR(Unique,"Unique");
				HX_STACK_LINE(46)
				return ::flixel::FlxG_obj::bitmap->addWithSpaces(Graphic,(int)0,(int)0,(int)1,(int)1,Unique,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(46)
	this->set_cachedGraphics(_Function_1_1::Block(Graphic));
	HX_STACK_LINE(48)
	if ((!(::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >())))){
		HX_STACK_LINE(50)
		int _g = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		this->region = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,_g,this->cachedGraphics->bitmap->get_height(),null(),null(),null(),null());
		HX_STACK_LINE(51)
		this->region->width = this->cachedGraphics->bitmap->get_width();
		HX_STACK_LINE(52)
		this->region->height = this->cachedGraphics->bitmap->get_height();
	}
	else{
		HX_STACK_LINE(56)
		this->region = (hx::TCast< flixel::util::loaders::TextureRegion >::cast(Graphic))->region->clone();
	}
	HX_STACK_LINE(59)
	int w = this->region->width;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(60)
	int h = this->region->height;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(62)
	if ((RepeatX)){
		HX_STACK_LINE(64)
		hx::AddEq(w,::flixel::FlxG_obj::width);
	}
	HX_STACK_LINE(66)
	if ((RepeatY)){
		HX_STACK_LINE(68)
		hx::AddEq(h,::flixel::FlxG_obj::height);
	}
	HX_STACK_LINE(74)
	this->_ppoint = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(76)
	this->_scrollW = this->region->width;
	HX_STACK_LINE(77)
	this->_scrollH = this->region->height;
	HX_STACK_LINE(78)
	this->_repeatX = RepeatX;
	HX_STACK_LINE(79)
	this->_repeatY = RepeatY;
	HX_STACK_LINE(82)
	this->_tileInfo = Array_obj< Float >::__new();
	HX_STACK_LINE(83)
	this->_numTiles = (int)0;
	HX_STACK_LINE(88)
	while(((this->_ppoint->y < h))){
		HX_STACK_LINE(90)
		while(((this->_ppoint->x < w))){
			HX_STACK_LINE(95)
			this->_tileInfo->push(this->_ppoint->x);
			HX_STACK_LINE(96)
			this->_tileInfo->push(this->_ppoint->y);
			HX_STACK_LINE(97)
			(this->_numTiles)++;
			HX_STACK_LINE(99)
			hx::AddEq(this->_ppoint->x,this->region->width);
		}
		HX_STACK_LINE(101)
		this->_ppoint->x = (int)0;
		HX_STACK_LINE(102)
		hx::AddEq(this->_ppoint->y,this->region->height);
	}
	HX_STACK_LINE(105)
	this->scrollFactor->set_x(ScrollX);
	HX_STACK_LINE(106)
	this->scrollFactor->set_y(ScrollY);
	HX_STACK_LINE(108)
	this->updateFrameData();
}
;
	return null();
}

//FlxBackdrop_obj::~FlxBackdrop_obj() { }

Dynamic FlxBackdrop_obj::__CreateEmpty() { return  new FlxBackdrop_obj; }
hx::ObjectPtr< FlxBackdrop_obj > FlxBackdrop_obj::__new(Dynamic Graphic,hx::Null< Float >  __o_ScrollX,hx::Null< Float >  __o_ScrollY,hx::Null< bool >  __o_RepeatX,hx::Null< bool >  __o_RepeatY)
{  hx::ObjectPtr< FlxBackdrop_obj > result = new FlxBackdrop_obj();
	result->__construct(Graphic,__o_ScrollX,__o_ScrollY,__o_RepeatX,__o_RepeatY);
	return result;}

Dynamic FlxBackdrop_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBackdrop_obj > result = new FlxBackdrop_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxBackdrop_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","destroy",0x54bfdd7f,"flixel.addons.display.FlxBackdrop.destroy","flixel/addons/display/FlxBackdrop.hx",112,0x7f3b228c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		this->_tileInfo = null();
		HX_STACK_LINE(118)
		this->_ppoint = null();
		HX_STACK_LINE(120)
		this->super::destroy();
	}
return null();
}


Void FlxBackdrop_obj::draw( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","draw",0x8035265f,"flixel.addons.display.FlxBackdrop.draw","flixel/addons/display/FlxBackdrop.hx",125,0x7f3b228c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(125)
		while(((_g < _g1->length))){
			HX_STACK_LINE(125)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(125)
			++(_g);
			HX_STACK_LINE(127)
			if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
				HX_STACK_LINE(129)
				continue;
			}
			HX_STACK_LINE(133)
			if ((this->_repeatX)){
				HX_STACK_LINE(135)
				this->_ppoint->x = hx::Mod(((this->x - (camera->scroll->x * this->scrollFactor->x))),this->_scrollW);
				HX_STACK_LINE(136)
				if (((this->_ppoint->x > (int)0))){
					HX_STACK_LINE(136)
					hx::SubEq(this->_ppoint->x,this->_scrollW);
				}
			}
			else{
				HX_STACK_LINE(140)
				this->_ppoint->x = (this->x - (camera->scroll->x * this->scrollFactor->x));
			}
			HX_STACK_LINE(144)
			if ((this->_repeatY)){
				HX_STACK_LINE(146)
				this->_ppoint->y = hx::Mod(((this->y - (camera->scroll->y * this->scrollFactor->y))),this->_scrollH);
				HX_STACK_LINE(147)
				if (((this->_ppoint->y > (int)0))){
					HX_STACK_LINE(147)
					hx::SubEq(this->_ppoint->y,this->_scrollH);
				}
			}
			else{
				HX_STACK_LINE(151)
				this->_ppoint->y = (this->y - (camera->scroll->y * this->scrollFactor->y));
			}
			HX_STACK_LINE(158)
			if (((this->cachedGraphics == null()))){
				HX_STACK_LINE(160)
				return null();
			}
			HX_STACK_LINE(163)
			Array< Float > currDrawData;		HX_STACK_VAR(currDrawData,"currDrawData");
			HX_STACK_LINE(164)
			int currIndex;		HX_STACK_VAR(currIndex,"currIndex");
			HX_STACK_LINE(165)
			::flixel::system::layer::DrawStackItem drawItem = camera->getDrawStackItem(this->cachedGraphics,false,(int)0,null());		HX_STACK_VAR(drawItem,"drawItem");
			HX_STACK_LINE(167)
			currDrawData = drawItem->drawData;
			HX_STACK_LINE(168)
			currIndex = drawItem->position;
			HX_STACK_LINE(170)
			int currPosInArr;		HX_STACK_VAR(currPosInArr,"currPosInArr");
			HX_STACK_LINE(171)
			Float currTileX;		HX_STACK_VAR(currTileX,"currTileX");
			HX_STACK_LINE(172)
			Float currTileY;		HX_STACK_VAR(currTileY,"currTileY");
			HX_STACK_LINE(174)
			{
				HX_STACK_LINE(174)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(174)
				int _g2 = this->_numTiles;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(174)
				while(((_g3 < _g2))){
					HX_STACK_LINE(174)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(176)
					currPosInArr = (j * (int)2);
					HX_STACK_LINE(177)
					currTileX = this->_tileInfo->__get(currPosInArr);
					HX_STACK_LINE(178)
					currTileY = this->_tileInfo->__get((currPosInArr + (int)1));
					HX_STACK_LINE(179)
					currDrawData[(currIndex)++] = (this->_ppoint->x + currTileX);
					HX_STACK_LINE(180)
					currDrawData[(currIndex)++] = (this->_ppoint->y + currTileY);
					HX_STACK_LINE(181)
					currDrawData[(currIndex)++] = this->_tileID;
					HX_STACK_LINE(183)
					currDrawData[(currIndex)++] = (int)1;
					HX_STACK_LINE(184)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(185)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(186)
					currDrawData[(currIndex)++] = (int)1;
					HX_STACK_LINE(189)
					currDrawData[(currIndex)++] = 1.0;
				}
			}
			HX_STACK_LINE(192)
			drawItem->position = currIndex;
		}
	}
return null();
}


Void FlxBackdrop_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxBackdrop","updateFrameData",0xa0442333,"flixel.addons.display.FlxBackdrop.updateFrameData","flixel/addons/display/FlxBackdrop.hx",200,0x7f3b228c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(200)
		if (((this->cachedGraphics != null()))){
			HX_STACK_LINE(202)
			::flixel::system::layer::TileSheetData _this = this->cachedGraphics->get_tilesheet();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(202)
			::openfl::_v2::geom::Rectangle tileRect = ::openfl::_v2::geom::Rectangle_obj::__new(this->region->startX,this->region->startY,this->_scrollW,this->_scrollH);		HX_STACK_VAR(tileRect,"tileRect");
			HX_STACK_LINE(202)
			::openfl::_v2::geom::Point point = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(202)
			this->_tileID = _this->tileSheet->addTileRectID(tileRect,point);
		}
	}
return null();
}



FlxBackdrop_obj::FlxBackdrop_obj()
{
}

void FlxBackdrop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBackdrop);
	HX_MARK_MEMBER_NAME(_ppoint,"_ppoint");
	HX_MARK_MEMBER_NAME(_scrollW,"_scrollW");
	HX_MARK_MEMBER_NAME(_scrollH,"_scrollH");
	HX_MARK_MEMBER_NAME(_repeatX,"_repeatX");
	HX_MARK_MEMBER_NAME(_repeatY,"_repeatY");
	HX_MARK_MEMBER_NAME(_tileID,"_tileID");
	HX_MARK_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_MARK_MEMBER_NAME(_numTiles,"_numTiles");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBackdrop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ppoint,"_ppoint");
	HX_VISIT_MEMBER_NAME(_scrollW,"_scrollW");
	HX_VISIT_MEMBER_NAME(_scrollH,"_scrollH");
	HX_VISIT_MEMBER_NAME(_repeatX,"_repeatX");
	HX_VISIT_MEMBER_NAME(_repeatY,"_repeatY");
	HX_VISIT_MEMBER_NAME(_tileID,"_tileID");
	HX_VISIT_MEMBER_NAME(_tileInfo,"_tileInfo");
	HX_VISIT_MEMBER_NAME(_numTiles,"_numTiles");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBackdrop_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_ppoint") ) { return _ppoint; }
		if (HX_FIELD_EQ(inName,"_tileID") ) { return _tileID; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_scrollW") ) { return _scrollW; }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { return _scrollH; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { return _repeatX; }
		if (HX_FIELD_EQ(inName,"_repeatY") ) { return _repeatY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { return _tileInfo; }
		if (HX_FIELD_EQ(inName,"_numTiles") ) { return _numTiles; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBackdrop_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_ppoint") ) { _ppoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileID") ) { _tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_scrollW") ) { _scrollW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollH") ) { _scrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatX") ) { _repeatX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeatY") ) { _repeatY=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tileInfo") ) { _tileInfo=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_numTiles") ) { _numTiles=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBackdrop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_ppoint"));
	outFields->push(HX_CSTRING("_scrollW"));
	outFields->push(HX_CSTRING("_scrollH"));
	outFields->push(HX_CSTRING("_repeatX"));
	outFields->push(HX_CSTRING("_repeatY"));
	outFields->push(HX_CSTRING("_tileID"));
	outFields->push(HX_CSTRING("_tileInfo"));
	outFields->push(HX_CSTRING("_numTiles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(FlxBackdrop_obj,_ppoint),HX_CSTRING("_ppoint")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_scrollW),HX_CSTRING("_scrollW")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_scrollH),HX_CSTRING("_scrollH")},
	{hx::fsBool,(int)offsetof(FlxBackdrop_obj,_repeatX),HX_CSTRING("_repeatX")},
	{hx::fsBool,(int)offsetof(FlxBackdrop_obj,_repeatY),HX_CSTRING("_repeatY")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_tileID),HX_CSTRING("_tileID")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxBackdrop_obj,_tileInfo),HX_CSTRING("_tileInfo")},
	{hx::fsInt,(int)offsetof(FlxBackdrop_obj,_numTiles),HX_CSTRING("_numTiles")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_ppoint"),
	HX_CSTRING("_scrollW"),
	HX_CSTRING("_scrollH"),
	HX_CSTRING("_repeatX"),
	HX_CSTRING("_repeatY"),
	HX_CSTRING("_tileID"),
	HX_CSTRING("_tileInfo"),
	HX_CSTRING("_numTiles"),
	HX_CSTRING("destroy"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateFrameData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBackdrop_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBackdrop_obj::__mClass,"__mClass");
};

#endif

Class FlxBackdrop_obj::__mClass;

void FlxBackdrop_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.display.FlxBackdrop"), hx::TCanCast< FlxBackdrop_obj> ,sStaticFields,sMemberFields,
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

void FlxBackdrop_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
