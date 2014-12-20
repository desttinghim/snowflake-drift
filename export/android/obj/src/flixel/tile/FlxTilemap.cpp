#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
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
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCallbackPoint
#include <flixel/util/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
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
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace tile{

Void FlxTilemap_obj::__construct()
{
HX_STACK_FRAME("flixel.tile.FlxTilemap","new",0xbe02531c,"flixel.tile.FlxTilemap.new","flixel/tile/FlxTilemap.hx",39,0x448feb74)
{
	HX_STACK_LINE(191)
	this->_startingIndex = (int)0;
	HX_STACK_LINE(162)
	this->_scaledTileHeight = (int)0;
	HX_STACK_LINE(161)
	this->_scaledTileWidth = (int)0;
	HX_STACK_LINE(159)
	this->_tileHeight = (int)0;
	HX_STACK_LINE(155)
	this->_tileWidth = (int)0;
	HX_STACK_LINE(80)
	this->tileScaleHack = 1.01;
	HX_STACK_LINE(76)
	this->totalTiles = (int)0;
	HX_STACK_LINE(72)
	this->heightInTiles = (int)0;
	HX_STACK_LINE(68)
	this->widthInTiles = (int)0;
	HX_STACK_LINE(64)
	this->_auto = (int)0;
	HX_STACK_LINE(210)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(212)
	this->collisionType = (int)3;
	HX_STACK_LINE(214)
	this->_buffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(215)
	this->_flashPoint = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(217)
	this->set_immovable(true);
	HX_STACK_LINE(218)
	this->set_moves(false);
	HX_STACK_LINE(221)
	this->_helperPoint = ::openfl::_v2::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(224)
	this->scale = ::flixel::util::FlxCallbackPoint_obj::__new(this->setScaleXCallback_dyn(),this->setScaleYCallback_dyn(),this->setScaleXYCallback_dyn());
	HX_STACK_LINE(225)
	this->scale->set((int)1,(int)1);
	HX_STACK_LINE(227)
	::flixel::FlxG_obj::signals->gameResized->add(this->onGameResize_dyn());
}
;
	return null();
}

//FlxTilemap_obj::~FlxTilemap_obj() { }

Dynamic FlxTilemap_obj::__CreateEmpty() { return  new FlxTilemap_obj; }
hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new()
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Dynamic FlxTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Void FlxTilemap_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","destroy",0xa7f2bdb6,"flixel.tile.FlxTilemap.destroy","flixel/tile/FlxTilemap.hx",234,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		this->_flashPoint = null();
		HX_STACK_LINE(236)
		this->_flashRect = null();
		HX_STACK_LINE(237)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(238)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(240)
		if (((this->_tileObjects != null()))){
			HX_STACK_LINE(242)
			l = this->_tileObjects->length;
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(244)
				while(((_g < l))){
					HX_STACK_LINE(244)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(246)
					this->_tileObjects->__get(i1).StaticCast< ::flixel::tile::FlxTile >()->destroy();
				}
			}
			HX_STACK_LINE(249)
			this->_tileObjects = null();
		}
		HX_STACK_LINE(252)
		if (((this->_buffers != null()))){
			HX_STACK_LINE(254)
			i = (int)0;
			HX_STACK_LINE(255)
			l = this->_buffers->length;
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(257)
				while(((_g < l))){
					HX_STACK_LINE(257)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(259)
					this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->destroy();
				}
			}
			HX_STACK_LINE(262)
			this->_buffers = null();
		}
		HX_STACK_LINE(265)
		this->_data = null();
		HX_STACK_LINE(276)
		this->_helperPoint = null();
		HX_STACK_LINE(277)
		this->_rectIDs = null();
		HX_STACK_LINE(280)
		this->framesData = null();
		HX_STACK_LINE(281)
		this->set_cachedGraphics(null());
		HX_STACK_LINE(282)
		this->region = null();
		HX_STACK_LINE(285)
		this->scale = ::flixel::util::FlxDestroyUtil_obj::destroy(this->scale);
		HX_STACK_LINE(287)
		::flixel::FlxG_obj::signals->gameResized->remove(this->onGameResize_dyn());
		HX_STACK_LINE(289)
		this->super::destroy();
	}
return null();
}


::flixel::tile::FlxTilemap FlxTilemap_obj::loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int AutoTile = __o_AutoTile.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","loadMap",0x8c4a14d2,"flixel.tile.FlxTilemap.loadMap","flixel/tile/FlxTilemap.hx",306,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(307)
		this->_auto = AutoTile;
		HX_STACK_LINE(308)
		if (((StartingIndex <= (int)0))){
			HX_STACK_LINE(308)
			this->_startingIndex = (int)0;
		}
		else{
			HX_STACK_LINE(308)
			this->_startingIndex = StartingIndex;
		}
		HX_STACK_LINE(311)
		if ((::Std_obj::is(MapData,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(314)
			this->_data = Array_obj< int >::__new();
			HX_STACK_LINE(315)
			Array< ::String > columns;		HX_STACK_VAR(columns,"columns");
			HX_STACK_LINE(316)
			Array< ::String > rows = MapData->__Field(HX_CSTRING("split"),true)(HX_CSTRING("\n"));		HX_STACK_VAR(rows,"rows");
			HX_STACK_LINE(317)
			this->heightInTiles = rows->length;
			HX_STACK_LINE(318)
			this->widthInTiles = (int)0;
			HX_STACK_LINE(319)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(320)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(322)
			while(((row < this->heightInTiles))){
				HX_STACK_LINE(324)
				columns = rows->__get((row)++).split(HX_CSTRING(","));
				HX_STACK_LINE(326)
				if (((columns->length < (int)1))){
					HX_STACK_LINE(328)
					this->heightInTiles = (this->heightInTiles - (int)1);
					HX_STACK_LINE(329)
					continue;
				}
				HX_STACK_LINE(331)
				if (((this->widthInTiles == (int)0))){
					HX_STACK_LINE(333)
					this->widthInTiles = columns->length;
				}
				HX_STACK_LINE(335)
				column = (int)0;
				HX_STACK_LINE(337)
				while(((column < this->widthInTiles))){
					HX_STACK_LINE(340)
					int curTile = ::Std_obj::parseInt(columns->__get(column));		HX_STACK_VAR(curTile,"curTile");
					HX_STACK_LINE(362)
					this->_data->push(curTile);
					HX_STACK_LINE(363)
					(column)++;
				}
			}
		}
		else{
			HX_STACK_LINE(371)
			if ((::Std_obj::is(MapData,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(373)
				this->_data = MapData;
				HX_STACK_LINE(374)
				this->_data = this->_data->copy();
			}
			else{
				HX_STACK_LINE(378)
				HX_STACK_DO_THROW(((HX_CSTRING("Unexpected MapData format '") + ::Std_obj::string(::Type_obj::_typeof(MapData))) + HX_CSTRING("' passed into loadMap. Map data must be CSV string or Array<Int>.")));
			}
		}
		HX_STACK_LINE(382)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(383)
		this->totalTiles = this->_data->length;
		HX_STACK_LINE(385)
		if (((this->_auto > (int)0))){
			HX_STACK_LINE(387)
			this->_startingIndex = (int)1;
			HX_STACK_LINE(388)
			DrawIndex = (int)1;
			HX_STACK_LINE(389)
			CollideIndex = (int)1;
			HX_STACK_LINE(390)
			i = (int)0;
			HX_STACK_LINE(392)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(394)
				this->autoTile((i)++);
			}
		}
		HX_STACK_LINE(398)
		if (((this->customTileRemap != null()))){
			HX_STACK_LINE(400)
			i = (int)0;
			HX_STACK_LINE(401)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(403)
				int old_index = this->_data->__get(i);		HX_STACK_VAR(old_index,"old_index");
				HX_STACK_LINE(404)
				int new_index = old_index;		HX_STACK_VAR(new_index,"new_index");
				HX_STACK_LINE(405)
				if (((old_index < this->customTileRemap->length))){
					HX_STACK_LINE(407)
					new_index = this->customTileRemap->__get(old_index);
				}
				HX_STACK_LINE(409)
				this->_data[i] = new_index;
				HX_STACK_LINE(410)
				(i)++;
			}
		}
		HX_STACK_LINE(414)
		if (((this->_randomIndices != null()))){
			HX_STACK_LINE(416)
			Dynamic randLambda;		HX_STACK_VAR(randLambda,"randLambda");
			HX_STACK_LINE(416)
			if (((this->_randomLambda_dyn() != null()))){
				HX_STACK_LINE(416)
				randLambda = this->_randomLambda_dyn();
			}
			else{
				HX_STACK_LINE(416)
				randLambda = ::flixel::util::FlxRandom_obj::_float_dyn();
			}
			HX_STACK_LINE(418)
			i = (int)0;
			HX_STACK_LINE(419)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(421)
				int old_index = this->_data->__get(i);		HX_STACK_VAR(old_index,"old_index");
				HX_STACK_LINE(422)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(423)
				int new_index = old_index;		HX_STACK_VAR(new_index,"new_index");
				HX_STACK_LINE(424)
				{
					HX_STACK_LINE(424)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(424)
					Array< int > _g1 = this->_randomIndices;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(424)
					while(((_g < _g1->length))){
						HX_STACK_LINE(424)
						int rand = _g1->__get(_g);		HX_STACK_VAR(rand,"rand");
						HX_STACK_LINE(424)
						++(_g);
						HX_STACK_LINE(426)
						if (((old_index == rand))){
							HX_STACK_LINE(428)
							int k = ::Std_obj::_int((randLambda().Cast< Float >() * this->_randomChoices->__get(j).StaticCast< Array< int > >()->length));		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(429)
							new_index = this->_randomChoices->__get(j).StaticCast< Array< int > >()->__get(k);
						}
						HX_STACK_LINE(431)
						(j)++;
					}
				}
				HX_STACK_LINE(433)
				this->_data[i] = new_index;
				HX_STACK_LINE(434)
				(i)++;
			}
		}
		struct _Function_1_1{
			inline static ::flixel::util::loaders::CachedGraphics Block( Dynamic &TileGraphic){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",439,0x448feb74)
				{
					HX_STACK_LINE(439)
					bool Unique = false;		HX_STACK_VAR(Unique,"Unique");
					HX_STACK_LINE(439)
					return ::flixel::FlxG_obj::bitmap->addWithSpaces(TileGraphic,(int)0,(int)0,(int)1,(int)1,Unique,null());
				}
				return null();
			}
		};
		HX_STACK_LINE(439)
		this->set_cachedGraphics(_Function_1_1::Block(TileGraphic));
		HX_STACK_LINE(440)
		this->_tileWidth = TileWidth;
		HX_STACK_LINE(442)
		if (((this->_tileWidth <= (int)0))){
			HX_STACK_LINE(444)
			this->_tileWidth = this->cachedGraphics->bitmap->get_height();
		}
		HX_STACK_LINE(447)
		this->_tileHeight = TileHeight;
		HX_STACK_LINE(449)
		if (((this->_tileHeight <= (int)0))){
			HX_STACK_LINE(451)
			this->_tileHeight = this->_tileWidth;
		}
		HX_STACK_LINE(454)
		if ((!(::Std_obj::is(TileGraphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >())))){
			HX_STACK_LINE(456)
			this->region = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,this->_tileWidth,this->_tileHeight,null(),null(),null(),null());
			HX_STACK_LINE(457)
			this->region->width = (::Std_obj::_int((Float(this->cachedGraphics->bitmap->get_width()) / Float(this->_tileWidth))) * this->_tileWidth);
			HX_STACK_LINE(458)
			this->region->height = (::Std_obj::_int((Float(this->cachedGraphics->bitmap->get_height()) / Float(this->_tileHeight))) * this->_tileHeight);
		}
		else{
			HX_STACK_LINE(462)
			::flixel::util::loaders::TextureRegion spriteRegion = TileGraphic;		HX_STACK_VAR(spriteRegion,"spriteRegion");
			HX_STACK_LINE(463)
			this->region = spriteRegion->region->clone();
			HX_STACK_LINE(464)
			if (((this->region->tileWidth > (int)0))){
				HX_STACK_LINE(466)
				this->_tileWidth = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(470)
				this->region->tileWidth = this->_tileWidth;
			}
			HX_STACK_LINE(473)
			if (((this->region->tileHeight > (int)0))){
				HX_STACK_LINE(475)
				this->_tileHeight = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(479)
				this->region->tileHeight = this->_tileHeight;
			}
		}
		HX_STACK_LINE(484)
		this->_tileObjects = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(486)
		int length = this->region->get_numTiles();		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(487)
		hx::AddEq(length,this->_startingIndex);
		HX_STACK_LINE(489)
		{
			HX_STACK_LINE(489)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(489)
			while(((_g < length))){
				HX_STACK_LINE(489)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(491)
				this->_tileObjects[i1] = ::flixel::tile::FlxTile_obj::__new(hx::ObjectPtr<OBJ_>(this),i1,this->_tileWidth,this->_tileHeight,(i1 >= DrawIndex),(  (((i1 >= CollideIndex))) ? int(this->allowCollisions) : int((int)0) ));
			}
		}
		HX_STACK_LINE(501)
		this->_scaledTileWidth = (this->_tileWidth * this->scale->x);
		HX_STACK_LINE(502)
		this->_scaledTileHeight = (this->_tileHeight * this->scale->y);
		HX_STACK_LINE(505)
		this->set_width((this->widthInTiles * this->_scaledTileWidth));
		HX_STACK_LINE(506)
		this->set_height((this->heightInTiles * this->_scaledTileHeight));
		HX_STACK_LINE(522)
		this->updateFrameData();
		HX_STACK_LINE(525)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxTilemap_obj,loadMap,return )

Void FlxTilemap_obj::setCustomTileMappings( Array< int > mappings,Array< int > randomIndices,Array< ::Dynamic > randomChoices,Dynamic randomLambda){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setCustomTileMappings",0x2422e242,"flixel.tile.FlxTilemap.setCustomTileMappings","flixel/tile/FlxTilemap.hx",538,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mappings,"mappings")
		HX_STACK_ARG(randomIndices,"randomIndices")
		HX_STACK_ARG(randomChoices,"randomChoices")
		HX_STACK_ARG(randomLambda,"randomLambda")
		HX_STACK_LINE(539)
		this->customTileRemap = mappings;
		HX_STACK_LINE(540)
		this->_randomIndices = randomIndices;
		HX_STACK_LINE(541)
		this->_randomChoices = randomChoices;
		HX_STACK_LINE(542)
		this->_randomLambda = randomLambda;
		HX_STACK_LINE(545)
		if (((bool((this->_randomIndices != null())) && bool(((bool((this->_randomChoices == null())) || bool((this->_randomChoices->length == (int)0)))))))){
			HX_STACK_LINE(547)
			HX_STACK_DO_THROW(HX_CSTRING("You must provide valid 'randomChoices' if you wish to randomize tilemap indicies, please read documentation of 'setCustomTileMappings' function."));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setCustomTileMappings,(void))

Void FlxTilemap_obj::drawDebugOnCamera( ::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","drawDebugOnCamera",0x0d929baf,"flixel.tile.FlxTilemap.drawDebugOnCamera","flixel/tile/FlxTilemap.hx",553,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(555)
		::flixel::tile::FlxTilemapBuffer buffer = null();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(556)
		int l = ::flixel::FlxG_obj::cameras->list->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(558)
			while(((_g < l))){
				HX_STACK_LINE(558)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(560)
				if (((::flixel::FlxG_obj::cameras->list->__get(i).StaticCast< ::flixel::FlxCamera >() == Camera))){
					HX_STACK_LINE(562)
					buffer = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();
					HX_STACK_LINE(563)
					break;
				}
			}
		}
		HX_STACK_LINE(567)
		if (((buffer == null()))){
			HX_STACK_LINE(569)
			return null();
		}
		HX_STACK_LINE(573)
		this->_helperPoint->x = ((Float(::Math_obj::floor((((this->x - (::Math_obj::floor(Camera->scroll->x) * this->scrollFactor->x))) * (int)5))) / Float((int)5)) + 0.1);
		HX_STACK_LINE(574)
		this->_helperPoint->y = ((Float(::Math_obj::floor((((this->y - (::Math_obj::floor(Camera->scroll->y) * this->scrollFactor->y))) * (int)5))) / Float((int)5)) + 0.1);
		HX_STACK_LINE(576)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(577)
		int debugColor;		HX_STACK_VAR(debugColor,"debugColor");
		HX_STACK_LINE(578)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(579)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(583)
		this->_point->set_x(((Camera->scroll->x * this->scrollFactor->x) - this->x));
		HX_STACK_LINE(584)
		this->_point->set_y(((Camera->scroll->y * this->scrollFactor->y) - this->y));
		HX_STACK_LINE(585)
		int screenXInTiles = ::Math_obj::floor((Float(this->_point->x) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(586)
		int screenYInTiles = ::Math_obj::floor((Float(this->_point->y) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(587)
		int screenRows = buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(588)
		int screenColumns = buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(591)
		if (((screenXInTiles < (int)0))){
			HX_STACK_LINE(593)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(595)
		if (((screenXInTiles > (this->widthInTiles - screenColumns)))){
			HX_STACK_LINE(597)
			screenXInTiles = (this->widthInTiles - screenColumns);
		}
		HX_STACK_LINE(599)
		if (((screenYInTiles < (int)0))){
			HX_STACK_LINE(601)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(603)
		if (((screenYInTiles > (this->heightInTiles - screenRows)))){
			HX_STACK_LINE(605)
			screenYInTiles = (this->heightInTiles - screenRows);
		}
		HX_STACK_LINE(608)
		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(609)
		this->_flashPoint->y = (int)0;
		HX_STACK_LINE(610)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(611)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(612)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(613)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(614)
		::openfl::_v2::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
		HX_STACK_LINE(616)
		while(((row < screenRows))){
			HX_STACK_LINE(618)
			columnIndex = rowIndex;
			HX_STACK_LINE(619)
			column = (int)0;
			HX_STACK_LINE(620)
			this->_flashPoint->x = (int)0;
			HX_STACK_LINE(622)
			while(((column < screenColumns))){
				HX_STACK_LINE(624)
				tileID = this->_rectIDs->__get(columnIndex);
				HX_STACK_LINE(626)
				if (((tileID != (int)-1))){
					HX_STACK_LINE(628)
					drawX = (this->_helperPoint->x + (hx::Mod(columnIndex,this->widthInTiles) * this->_scaledTileWidth));
					HX_STACK_LINE(629)
					drawY = (this->_helperPoint->y + (::Math_obj::floor((Float(columnIndex) / Float(this->widthInTiles))) * this->_scaledTileHeight));
					HX_STACK_LINE(631)
					tile = this->_tileObjects->__get(this->_data->__get(columnIndex)).StaticCast< ::flixel::tile::FlxTile >();
					HX_STACK_LINE(633)
					if (((tile != null()))){
						HX_STACK_LINE(635)
						if (((tile->allowCollisions <= (int)0))){
							HX_STACK_LINE(637)
							debugColor = (int)-16776961;
						}
						else{
							HX_STACK_LINE(639)
							if (((tile->allowCollisions != (int)4369))){
								HX_STACK_LINE(641)
								debugColor = (int)-16181;
							}
							else{
								HX_STACK_LINE(645)
								debugColor = (int)-16744448;
							}
						}
						HX_STACK_LINE(649)
						::openfl::_v2::display::Graphics gfx = Camera->debugLayer->get_graphics();		HX_STACK_VAR(gfx,"gfx");
						HX_STACK_LINE(650)
						gfx->lineStyle((int)1,debugColor,0.5,null(),null(),null(),null(),null());
						HX_STACK_LINE(651)
						gfx->drawRect(drawX,drawY,this->_scaledTileWidth,this->_scaledTileHeight);
					}
				}
				HX_STACK_LINE(655)
				hx::AddEq(this->_flashPoint->x,this->_scaledTileWidth);
				HX_STACK_LINE(656)
				(column)++;
				HX_STACK_LINE(657)
				(columnIndex)++;
			}
			HX_STACK_LINE(660)
			hx::AddEq(rowIndex,this->widthInTiles);
			HX_STACK_LINE(661)
			hx::AddEq(this->_flashPoint->y,this->_scaledTileHeight);
			HX_STACK_LINE(662)
			(row)++;
		}
	}
return null();
}


Void FlxTilemap_obj::draw( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","draw",0x7d740dc8,"flixel.tile.FlxTilemap.draw","flixel/tile/FlxTilemap.hx",672,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(673)
		Array< ::Dynamic > cameras = this->get_cameras();		HX_STACK_VAR(cameras,"cameras");
		HX_STACK_LINE(674)
		::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(675)
		::flixel::tile::FlxTilemapBuffer buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(676)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(677)
		int l = cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(679)
		while(((i < l))){
			HX_STACK_LINE(681)
			camera = cameras->__get(i).StaticCast< ::flixel::FlxCamera >();
			HX_STACK_LINE(683)
			if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
				HX_STACK_LINE(685)
				continue;
			}
			HX_STACK_LINE(688)
			if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() == null()))){
				HX_STACK_LINE(690)
				::flixel::tile::FlxTilemapBuffer buffer1 = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);		HX_STACK_VAR(buffer1,"buffer1");
				HX_STACK_LINE(690)
				buffer1->pixelPerfectRender = this->pixelPerfectRender;
				HX_STACK_LINE(690)
				this->_buffers[i] = buffer1;
			}
			HX_STACK_LINE(693)
			buffer = this->_buffers->__get((i)++).StaticCast< ::flixel::tile::FlxTilemapBuffer >();
			HX_STACK_LINE(694)
			buffer->dirty = true;
			HX_STACK_LINE(715)
			this->drawTilemap(buffer,camera);
			HX_STACK_LINE(719)
			(::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
		}
		HX_STACK_LINE(724)
		if ((::flixel::FlxG_obj::debugger->drawDebug)){
			HX_STACK_LINE(725)
			this->drawDebug();
		}
	}
return null();
}


Array< int > FlxTilemap_obj::getData( hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getData",0x9852969c,"flixel.tile.FlxTilemap.getData","flixel/tile/FlxTilemap.hx",736,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Simple,"Simple")
{
		HX_STACK_LINE(737)
		if ((!(Simple))){
			HX_STACK_LINE(739)
			return this->_data;
		}
		HX_STACK_LINE(742)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(743)
		int l = this->_data->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(744)
		Array< int > data = Array_obj< int >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(745)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(data,l);
		HX_STACK_LINE(747)
		while(((i < l))){
			HX_STACK_LINE(749)
			if (((this->_tileObjects->__get(this->_data->__get(i)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0))){
				HX_STACK_LINE(749)
				data[i] = (int)1;
			}
			else{
				HX_STACK_LINE(749)
				data[i] = (int)0;
			}
			HX_STACK_LINE(750)
			(i)++;
		}
		HX_STACK_LINE(753)
		return data;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getData,return )

Void FlxTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setDirty",0x6396ccd4,"flixel.tile.FlxTilemap.setDirty","flixel/tile/FlxTilemap.hx",764,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Dirty,"Dirty")
{
		HX_STACK_LINE(764)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(764)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(764)
		while(((_g < _g1->length))){
			HX_STACK_LINE(764)
			::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(764)
			++(_g);
			HX_STACK_LINE(766)
			buffer->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setDirty,(void))

Array< ::Dynamic > FlxTilemap_obj::findPath( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,hx::Null< bool >  __o_Simplify,hx::Null< bool >  __o_RaySimplify,hx::Null< bool >  __o_WideDiagonal){
bool Simplify = __o_Simplify.Default(true);
bool RaySimplify = __o_RaySimplify.Default(false);
bool WideDiagonal = __o_WideDiagonal.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","findPath",0x18780642,"flixel.tile.FlxTilemap.findPath","flixel/tile/FlxTilemap.hx",782,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Simplify,"Simplify")
	HX_STACK_ARG(RaySimplify,"RaySimplify")
	HX_STACK_ARG(WideDiagonal,"WideDiagonal")
{
		HX_STACK_LINE(784)
		int _g = (::Std_obj::_int((Float(((Start->y - this->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(784)
		int startIndex = (_g + ::Std_obj::_int((Float(((Start->x - this->x))) / Float(this->_scaledTileWidth))));		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(785)
		int _g1 = (::Std_obj::_int((Float(((End->y - this->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(785)
		int endIndex = (_g1 + ::Std_obj::_int((Float(((End->x - this->x))) / Float(this->_scaledTileWidth))));		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(788)
		if (((bool((this->_tileObjects->__get(this->_data->__get(startIndex)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0)) || bool((this->_tileObjects->__get(this->_data->__get(endIndex)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0))))){
			HX_STACK_LINE(790)
			return null();
		}
		HX_STACK_LINE(794)
		Array< int > distances = this->computePathDistance(startIndex,endIndex,WideDiagonal,null());		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(796)
		if (((distances == null()))){
			HX_STACK_LINE(798)
			return null();
		}
		HX_STACK_LINE(802)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(803)
		this->walkPath(distances,endIndex,points);
		HX_STACK_LINE(806)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(807)
		node = points->__get((points->length - (int)1)).StaticCast< ::flixel::util::FlxPoint >();
		HX_STACK_LINE(808)
		node->set_x(Start->x);
		HX_STACK_LINE(809)
		node->set_y(Start->y);
		HX_STACK_LINE(810)
		node = points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();
		HX_STACK_LINE(811)
		node->set_x(End->x);
		HX_STACK_LINE(812)
		node->set_y(End->y);
		HX_STACK_LINE(815)
		if ((Simplify)){
			HX_STACK_LINE(817)
			this->simplifyPath(points);
		}
		HX_STACK_LINE(819)
		if ((RaySimplify)){
			HX_STACK_LINE(821)
			this->raySimplifyPath(points);
		}
		HX_STACK_LINE(825)
		Array< ::Dynamic > path = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(826)
		int i = (points->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(828)
		while(((i >= (int)0))){
			HX_STACK_LINE(830)
			node = points->__get((i)--).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(832)
			if (((node != null()))){
				HX_STACK_LINE(834)
				path->push(node);
			}
		}
		HX_STACK_LINE(838)
		return path;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,findPath,return )

bool FlxTilemap_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlaps",0xc0bce6d0,"flixel.tile.FlxTilemap.overlaps","flixel/tile/FlxTilemap.hx",852,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(853)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(853)
		{
			HX_STACK_LINE(853)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(853)
			if (((bool((ObjectOrGroup->collisionType == (int)4)) || bool((ObjectOrGroup->collisionType == (int)2))))){
				HX_STACK_LINE(853)
				if (((ObjectOrGroup->collisionType == (int)2))){
					HX_STACK_LINE(853)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(853)
					if (((ObjectOrGroup->collisionType == (int)4))){
						HX_STACK_LINE(853)
						group1 = (hx::TCast< flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(853)
			group = group1;
		}
		HX_STACK_LINE(854)
		if (((group != null()))){
			HX_STACK_LINE(856)
			Dynamic Callback = this->tilemapOverlapsCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(856)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(856)
			if (((group != null()))){
				HX_STACK_LINE(856)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(856)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(856)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(856)
				while(((i < l))){
					HX_STACK_LINE(856)
					basic = group->members->__GetItem((i)++);
					HX_STACK_LINE(856)
					if (((  (((basic != null()))) ? bool(Callback(basic,(int)0,(int)0,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(856)
						result = true;
						HX_STACK_LINE(856)
						break;
					}
				}
			}
			HX_STACK_LINE(856)
			return result;
		}
		else{
			struct _Function_2_1{
				inline static bool Block( ::flixel::tile::FlxTilemap_obj *__this,::flixel::FlxBasic &ObjectOrGroup){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",858,0x448feb74)
					{
						HX_STACK_LINE(858)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(858)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(858)
						bool InScreenSpace1 = false;		HX_STACK_VAR(InScreenSpace1,"InScreenSpace1");
						HX_STACK_LINE(858)
						return (  (((bool((ObjectOrGroup->collisionType == (int)1)) || bool((ObjectOrGroup->collisionType == (int)3))))) ? bool(__this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup),null(),null(),null())) : bool(__this->overlaps(ObjectOrGroup,InScreenSpace1,null())) );
					}
					return null();
				}
			};
			HX_STACK_LINE(858)
			if ((_Function_2_1::Block(this,ObjectOrGroup))){
				HX_STACK_LINE(860)
				return true;
			}
		}
		HX_STACK_LINE(862)
		return false;
	}
}


bool FlxTilemap_obj::tilemapOverlapsCallback( ::flixel::FlxBasic ObjectOrGroup,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tilemapOverlapsCallback",0x199365fb,"flixel.tile.FlxTilemap.tilemapOverlapsCallback","flixel/tile/FlxTilemap.hx",867,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(867)
		if (((bool((ObjectOrGroup->collisionType == (int)1)) || bool((ObjectOrGroup->collisionType == (int)3))))){
			HX_STACK_LINE(870)
			return this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup),null(),null(),null());
		}
		else{
			HX_STACK_LINE(874)
			return this->overlaps(ObjectOrGroup,InScreenSpace,Camera);
		}
		HX_STACK_LINE(867)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,tilemapOverlapsCallback,return )

bool FlxTilemap_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsAt",0x16e073e3,"flixel.tile.FlxTilemap.overlapsAt","flixel/tile/FlxTilemap.hx",891,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(892)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(892)
		{
			HX_STACK_LINE(892)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(892)
			if (((bool((ObjectOrGroup->collisionType == (int)4)) || bool((ObjectOrGroup->collisionType == (int)2))))){
				HX_STACK_LINE(892)
				if (((ObjectOrGroup->collisionType == (int)2))){
					HX_STACK_LINE(892)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(892)
					if (((ObjectOrGroup->collisionType == (int)4))){
						HX_STACK_LINE(892)
						group1 = (hx::TCast< flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(892)
			group = group1;
		}
		HX_STACK_LINE(893)
		if (((group != null()))){
			HX_STACK_LINE(895)
			Dynamic Callback = this->tilemapOverlapsAtCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(895)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(895)
			if (((group != null()))){
				HX_STACK_LINE(895)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(895)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(895)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(895)
				while(((i < l))){
					HX_STACK_LINE(895)
					basic = group->members->__GetItem((i)++);
					HX_STACK_LINE(895)
					if (((  (((basic != null()))) ? bool(Callback(basic,X,Y,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(895)
						result = true;
						HX_STACK_LINE(895)
						break;
					}
				}
			}
			HX_STACK_LINE(895)
			return result;
		}
		else{
			HX_STACK_LINE(897)
			if (((  (((bool((ObjectOrGroup->collisionType == (int)1)) || bool((ObjectOrGroup->collisionType == (int)3))))) ? bool(this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup),null(),false,this->_point->set(X,Y))) : bool(this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera)) ))){
				HX_STACK_LINE(899)
				return true;
			}
		}
		HX_STACK_LINE(902)
		return false;
	}
}


bool FlxTilemap_obj::tilemapOverlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tilemapOverlapsAtCallback",0xbad41b8e,"flixel.tile.FlxTilemap.tilemapOverlapsAtCallback","flixel/tile/FlxTilemap.hx",907,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(907)
	if (((bool((ObjectOrGroup->collisionType == (int)1)) || bool((ObjectOrGroup->collisionType == (int)3))))){
		HX_STACK_LINE(910)
		return this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup),null(),false,this->_point->set(X,Y));
	}
	else{
		HX_STACK_LINE(914)
		return this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
	}
	HX_STACK_LINE(907)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,tilemapOverlapsAtCallback,return )

bool FlxTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::util::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsWithCallback",0xe7b56cdb,"flixel.tile.FlxTilemap.overlapsWithCallback","flixel/tile/FlxTilemap.hx",930,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams")
	HX_STACK_ARG(Position,"Position")
{
		HX_STACK_LINE(931)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(933)
		Float X = this->x;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(934)
		Float Y = this->y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(936)
		if (((Position != null()))){
			HX_STACK_LINE(938)
			X = Position->x;
			HX_STACK_LINE(939)
			Y = Position->y;
		}
		HX_STACK_LINE(943)
		int selectionX = ::Math_obj::floor((Float(((Object->x - X))) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(selectionX,"selectionX");
		HX_STACK_LINE(944)
		int selectionY = ::Math_obj::floor((Float(((Object->y - Y))) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(selectionY,"selectionY");
		HX_STACK_LINE(945)
		int selectionWidth = ((selectionX + ::Math_obj::ceil((Float(Object->get_width()) / Float(this->_scaledTileWidth)))) + (int)1);		HX_STACK_VAR(selectionWidth,"selectionWidth");
		HX_STACK_LINE(946)
		int selectionHeight = ((selectionY + ::Math_obj::ceil((Float(Object->get_height()) / Float(this->_scaledTileHeight)))) + (int)1);		HX_STACK_VAR(selectionHeight,"selectionHeight");
		struct _Function_1_1{
			inline static Float Block( ::flixel::tile::FlxTilemap_obj *__this,int &selectionWidth){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",949,0x448feb74)
				{
					HX_STACK_LINE(949)
					Float Max = __this->widthInTiles;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(949)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(949)
					if (((selectionWidth < (int)0))){
						HX_STACK_LINE(949)
						lowerBound = (int)0;
					}
					else{
						HX_STACK_LINE(949)
						lowerBound = selectionWidth;
					}
					HX_STACK_LINE(949)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(949)
		selectionWidth = ::Std_obj::_int(_Function_1_1::Block(this,selectionWidth));
		struct _Function_1_2{
			inline static Float Block( ::flixel::tile::FlxTilemap_obj *__this,int &selectionHeight){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",950,0x448feb74)
				{
					HX_STACK_LINE(950)
					Float Max = __this->heightInTiles;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(950)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(950)
					if (((selectionHeight < (int)0))){
						HX_STACK_LINE(950)
						lowerBound = (int)0;
					}
					else{
						HX_STACK_LINE(950)
						lowerBound = selectionHeight;
					}
					HX_STACK_LINE(950)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(950)
		selectionHeight = ::Std_obj::_int(_Function_1_2::Block(this,selectionHeight));
		HX_STACK_LINE(953)
		int rowStart = (selectionY * this->widthInTiles);		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(954)
		int row = selectionY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(955)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(956)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(957)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(958)
		Float deltaX = (X - this->last->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(959)
		Float deltaY = (Y - this->last->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(961)
		while(((row < selectionHeight))){
			HX_STACK_LINE(963)
			column = selectionX;
			HX_STACK_LINE(965)
			while(((column < selectionWidth))){
				HX_STACK_LINE(967)
				int index = (rowStart + column);		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(968)
				if (((bool((index < (int)0)) || bool((index > (this->_data->length - (int)1)))))){
					HX_STACK_LINE(970)
					(column)++;
					HX_STACK_LINE(971)
					continue;
				}
				HX_STACK_LINE(974)
				int dataIndex = this->_data->__get(index);		HX_STACK_VAR(dataIndex,"dataIndex");
				HX_STACK_LINE(975)
				if (((dataIndex < (int)0))){
					HX_STACK_LINE(977)
					(column)++;
					HX_STACK_LINE(978)
					continue;
				}
				HX_STACK_LINE(981)
				tile = this->_tileObjects->__get(dataIndex).StaticCast< ::flixel::tile::FlxTile >();
				HX_STACK_LINE(982)
				tile->set_width(this->_scaledTileWidth);
				HX_STACK_LINE(983)
				tile->set_height(this->_scaledTileHeight);
				HX_STACK_LINE(984)
				tile->set_x((X + (column * tile->get_width())));
				HX_STACK_LINE(985)
				tile->set_y((Y + (row * tile->get_height())));
				HX_STACK_LINE(986)
				tile->last->set_x((tile->x - deltaX));
				HX_STACK_LINE(987)
				tile->last->set_y((tile->y - deltaY));
				HX_STACK_LINE(989)
				if (((  (((  ((((Object->x + Object->get_width()) > tile->x))) ? bool((Object->x < (tile->x + tile->get_width()))) : bool(false) ))) ? bool(((Object->y + Object->get_height()) > tile->y)) : bool(false) ))){
					HX_STACK_LINE(989)
					overlapFound = (Object->y < (tile->y + tile->get_height()));
				}
				else{
					HX_STACK_LINE(989)
					overlapFound = false;
				}
				HX_STACK_LINE(992)
				if (((tile->allowCollisions != (int)0))){
					HX_STACK_LINE(994)
					if (((Callback != null()))){
						HX_STACK_LINE(996)
						if ((FlipCallbackParams)){
							HX_STACK_LINE(998)
							overlapFound = Callback(Object,tile).Cast< bool >();
						}
						else{
							HX_STACK_LINE(1002)
							overlapFound = Callback(tile,Object).Cast< bool >();
						}
					}
				}
				HX_STACK_LINE(1007)
				if ((overlapFound)){
					struct _Function_4_1{
						inline static bool Block( ::flixel::tile::FlxTile &tile,::flixel::FlxObject &Object){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",1009,0x448feb74)
							{
								HX_STACK_LINE(1009)
								return (  ((!(((tile->filter == null()))))) ? bool(::Std_obj::is(Object,tile->filter)) : bool(true) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1009)
					if (((  (((tile->callbackFunction != null()))) ? bool(_Function_4_1::Block(tile,Object)) : bool(false) ))){
						HX_STACK_LINE(1011)
						tile->mapIndex = (rowStart + column);
						HX_STACK_LINE(1012)
						tile->callbackFunction(tile,Object);
					}
					HX_STACK_LINE(1015)
					if (((tile->allowCollisions != (int)0))){
						HX_STACK_LINE(1017)
						results = true;
					}
				}
				HX_STACK_LINE(1021)
				(column)++;
			}
			HX_STACK_LINE(1024)
			hx::AddEq(rowStart,this->widthInTiles);
			HX_STACK_LINE(1025)
			(row)++;
		}
		HX_STACK_LINE(1028)
		return results;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,overlapsWithCallback,return )

bool FlxTilemap_obj::overlapsPoint( ::flixel::util::FlxPoint WorldPoint,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsPoint",0xaeb98b60,"flixel.tile.FlxTilemap.overlapsPoint","flixel/tile/FlxTilemap.hx",1040,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(WorldPoint,"WorldPoint")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1041)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1043)
			return (this->_tileObjects->__get(this->_data->__get(::Math_obj::floor(((::Math_obj::floor((Float(((WorldPoint->y - this->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + (Float(((WorldPoint->x - this->x))) / Float(this->_scaledTileWidth)))))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0);
		}
		HX_STACK_LINE(1046)
		if (((Camera == null()))){
			HX_STACK_LINE(1048)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1051)
		WorldPoint->set_x((WorldPoint->x - Camera->scroll->x));
		HX_STACK_LINE(1052)
		WorldPoint->set_y((WorldPoint->y - Camera->scroll->y));
		HX_STACK_LINE(1053)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(1055)
		bool result = (this->_tileObjects->__get(this->_data->__get(::Std_obj::_int(((::Std_obj::_int((Float(((WorldPoint->y - WorldPoint->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + (Float(((WorldPoint->x - WorldPoint->x))) / Float(this->_scaledTileWidth)))))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1056)
		if ((WorldPoint->_weak)){
			HX_STACK_LINE(1056)
			WorldPoint->put();
		}
		HX_STACK_LINE(1057)
		return result;
	}
}


int FlxTilemap_obj::getTile( int X,int Y){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTile",0xa2ec0ba0,"flixel.tile.FlxTilemap.getTile","flixel/tile/FlxTilemap.hx",1069,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(1069)
	return this->_data->__get(((Y * this->widthInTiles) + X));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTile,return )

int FlxTilemap_obj::getTileByIndex( int Index){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileByIndex",0x27fbf9fb,"flixel.tile.FlxTilemap.getTileByIndex","flixel/tile/FlxTilemap.hx",1080,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(1080)
	return this->_data->__get(Index);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileByIndex,return )

int FlxTilemap_obj::getTileCollisions( int Index){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCollisions",0x0a549381,"flixel.tile.FlxTilemap.getTileCollisions","flixel/tile/FlxTilemap.hx",1091,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(1091)
	return this->_tileObjects->__get(Index).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileCollisions,return )

Array< int > FlxTilemap_obj::getTileInstances( int Index){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileInstances",0xee32e37e,"flixel.tile.FlxTilemap.getTileInstances","flixel/tile/FlxTilemap.hx",1101,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(1102)
	Array< int > array = null();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(1103)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1104)
	int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1106)
	while(((i < l))){
		HX_STACK_LINE(1108)
		if (((this->_data->__get(i) == Index))){
			HX_STACK_LINE(1110)
			if (((array == null()))){
				HX_STACK_LINE(1112)
				array = Array_obj< int >::__new();
			}
			HX_STACK_LINE(1114)
			array->push(i);
		}
		HX_STACK_LINE(1117)
		(i)++;
	}
	HX_STACK_LINE(1120)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileInstances,return )

Array< ::Dynamic > FlxTilemap_obj::getTileCoords( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCoords",0x02899bde,"flixel.tile.FlxTilemap.getTileCoords","flixel/tile/FlxTilemap.hx",1131,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(1132)
		Array< ::Dynamic > array = null();		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(1134)
		::flixel::util::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1135)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1136)
		int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1138)
		while(((i < l))){
			HX_STACK_LINE(1140)
			if (((this->_data->__get(i) == Index))){
				HX_STACK_LINE(1142)
				{
					HX_STACK_LINE(1142)
					Float X = (this->x + (::Std_obj::_int(hx::Mod(i,this->widthInTiles)) * this->_scaledTileWidth));		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1142)
					Float Y = (this->y + (::Std_obj::_int((Float(i) / Float(this->widthInTiles))) * this->_scaledTileHeight));		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1142)
					::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(1142)
					point1->_inPool = false;
					HX_STACK_LINE(1142)
					point = point1;
				}
				HX_STACK_LINE(1144)
				if ((Midpoint)){
					HX_STACK_LINE(1146)
					{
						HX_STACK_LINE(1146)
						::flixel::util::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1146)
						_g->set_x((_g->x + (this->_scaledTileWidth * 0.5)));
					}
					HX_STACK_LINE(1147)
					{
						HX_STACK_LINE(1147)
						::flixel::util::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1147)
						_g->set_y((_g->y + (this->_scaledTileHeight * 0.5)));
					}
				}
				HX_STACK_LINE(1150)
				if (((array == null()))){
					HX_STACK_LINE(1152)
					array = Array_obj< ::Dynamic >::__new();
				}
				HX_STACK_LINE(1154)
				array->push(point);
			}
			HX_STACK_LINE(1157)
			(i)++;
		}
		HX_STACK_LINE(1160)
		return array;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

bool FlxTilemap_obj::setTile( int X,int Y,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setTile",0x95ed9cac,"flixel.tile.FlxTilemap.setTile","flixel/tile/FlxTilemap.hx",1173,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(1174)
		if (((bool((X >= this->widthInTiles)) || bool((Y >= this->heightInTiles))))){
			HX_STACK_LINE(1176)
			return false;
		}
		HX_STACK_LINE(1179)
		return this->setTileByIndex(((Y * this->widthInTiles) + X),Tile,UpdateGraphics);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setTile,return )

bool FlxTilemap_obj::setTileByIndex( int Index,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setTileByIndex",0x481be26f,"flixel.tile.FlxTilemap.setTileByIndex","flixel/tile/FlxTilemap.hx",1191,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(1192)
		if (((Index >= this->_data->length))){
			HX_STACK_LINE(1194)
			return false;
		}
		HX_STACK_LINE(1197)
		bool ok = true;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(1198)
		this->_data[Index] = Tile;
		HX_STACK_LINE(1200)
		if ((!(UpdateGraphics))){
			HX_STACK_LINE(1202)
			return ok;
		}
		HX_STACK_LINE(1205)
		this->setDirty(null());
		HX_STACK_LINE(1207)
		if (((this->_auto == (int)0))){
			HX_STACK_LINE(1209)
			this->updateTile(Index);
			HX_STACK_LINE(1210)
			return ok;
		}
		HX_STACK_LINE(1214)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1215)
		int row = (::Std_obj::_int((Float(Index) / Float(this->widthInTiles))) - (int)1);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1216)
		int rowLength = (row + (int)3);		HX_STACK_VAR(rowLength,"rowLength");
		HX_STACK_LINE(1217)
		int column = (hx::Mod(Index,this->widthInTiles) - (int)1);		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1218)
		int columnHeight = (column + (int)3);		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(1220)
		while(((row < rowLength))){
			HX_STACK_LINE(1222)
			column = (columnHeight - (int)3);
			HX_STACK_LINE(1224)
			while(((column < columnHeight))){
				HX_STACK_LINE(1226)
				if (((bool((bool((bool((row >= (int)0)) && bool((row < this->heightInTiles)))) && bool((column >= (int)0)))) && bool((column < this->widthInTiles))))){
					HX_STACK_LINE(1228)
					i = ((row * this->widthInTiles) + column);
					HX_STACK_LINE(1229)
					this->autoTile(i);
					HX_STACK_LINE(1230)
					this->updateTile(i);
				}
				HX_STACK_LINE(1232)
				(column)++;
			}
			HX_STACK_LINE(1235)
			(row)++;
		}
		HX_STACK_LINE(1238)
		return ok;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,setTileByIndex,return )

Void FlxTilemap_obj::setTileProperties( int Tile,hx::Null< int >  __o_AllowCollisions,Dynamic Callback,::Class CallbackFilter,hx::Null< int >  __o_Range){
int AllowCollisions = __o_AllowCollisions.Default(4369);
int Range = __o_Range.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setTileProperties",0x96b8abbf,"flixel.tile.FlxTilemap.setTileProperties","flixel/tile/FlxTilemap.hx",1252,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(AllowCollisions,"AllowCollisions")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(CallbackFilter,"CallbackFilter")
	HX_STACK_ARG(Range,"Range")
{
		HX_STACK_LINE(1253)
		if (((Range <= (int)0))){
			HX_STACK_LINE(1255)
			Range = (int)1;
		}
		HX_STACK_LINE(1258)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1259)
		int i = Tile;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1260)
		int l = (Tile + Range);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1262)
		while(((i < l))){
			HX_STACK_LINE(1264)
			tile = this->_tileObjects->__get((i)++).StaticCast< ::flixel::tile::FlxTile >();
			HX_STACK_LINE(1265)
			tile->allowCollisions = AllowCollisions;
			HX_STACK_LINE(1266)
			tile->callbackFunction = Callback;
			HX_STACK_LINE(1267)
			tile->filter = CallbackFilter;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,setTileProperties,(void))

Void FlxTilemap_obj::follow( ::flixel::FlxCamera Camera,hx::Null< int >  __o_Border,hx::Null< bool >  __o_UpdateWorld){
int Border = __o_Border.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","follow",0xe6a96c35,"flixel.tile.FlxTilemap.follow","flixel/tile/FlxTilemap.hx",1279,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Border,"Border")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(1280)
		if (((Camera == null()))){
			HX_STACK_LINE(1282)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1285)
		Float _g = (this->get_width() - ((Border * this->_scaledTileWidth) * (int)2));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1285)
		Camera->setBounds((this->x + (Border * this->_scaledTileWidth)),(this->y + (Border * this->_scaledTileHeight)),_g,(this->get_height() - ((Border * this->_scaledTileHeight) * (int)2)),UpdateWorld);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

::flixel::util::FlxRect FlxTilemap_obj::getBounds( ::flixel::util::FlxRect Bounds){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getBounds",0x86b34767,"flixel.tile.FlxTilemap.getBounds","flixel/tile/FlxTilemap.hx",1295,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Bounds,"Bounds")
	HX_STACK_LINE(1296)
	if (((Bounds == null()))){
		HX_STACK_LINE(1298)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(1298)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(1298)
		Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(1298)
		Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(1298)
		::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(1298)
		{
			HX_STACK_LINE(1298)
			::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1298)
			_this->x = X;
			HX_STACK_LINE(1298)
			_this->y = Y;
			HX_STACK_LINE(1298)
			_this->width = Width;
			HX_STACK_LINE(1298)
			_this->height = Height;
			HX_STACK_LINE(1298)
			rect = _this;
		}
		HX_STACK_LINE(1298)
		rect->_inPool = false;
		HX_STACK_LINE(1298)
		Bounds = rect;
	}
	HX_STACK_LINE(1301)
	Float Width = this->get_width();		HX_STACK_VAR(Width,"Width");
	HX_STACK_LINE(1301)
	Float Height = this->get_height();		HX_STACK_VAR(Height,"Height");
	HX_STACK_LINE(1301)
	Bounds->x = this->x;
	HX_STACK_LINE(1301)
	Bounds->y = this->y;
	HX_STACK_LINE(1301)
	Bounds->width = Width;
	HX_STACK_LINE(1301)
	Bounds->height = Height;
	HX_STACK_LINE(1301)
	return Bounds;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getBounds,return )

bool FlxTilemap_obj::ray( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,::flixel::util::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","ray",0xbe0558a6,"flixel.tile.FlxTilemap.ray","flixel/tile/FlxTilemap.hx",1315,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Result,"Result")
	HX_STACK_ARG(Resolution,"Resolution")
{
		HX_STACK_LINE(1316)
		Float step = this->_scaledTileWidth;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(1318)
		if (((this->_scaledTileHeight < this->_scaledTileWidth))){
			HX_STACK_LINE(1320)
			step = this->_scaledTileHeight;
		}
		HX_STACK_LINE(1323)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(1324)
		Float deltaX = (End->x - Start->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1325)
		Float deltaY = (End->y - Start->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1326)
		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1327)
		int steps = ::Math_obj::ceil((Float(distance) / Float(step)));		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(1328)
		Float stepX = (Float(deltaX) / Float(steps));		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(1329)
		Float stepY = (Float(deltaY) / Float(steps));		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(1330)
		Float curX = ((Start->x - stepX) - this->x);		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1331)
		Float curY = ((Start->y - stepY) - this->y);		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1332)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(1333)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(1334)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1336)
		if ((Start->_weak)){
			HX_STACK_LINE(1336)
			Start->put();
		}
		HX_STACK_LINE(1337)
		if ((End->_weak)){
			HX_STACK_LINE(1337)
			End->put();
		}
		HX_STACK_LINE(1339)
		while(((i < steps))){
			HX_STACK_LINE(1341)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(1342)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(1344)
			if (((  ((!(((  ((!(((  ((!(((curX < (int)0))))) ? bool((curX > this->get_width())) : bool(true) ))))) ? bool((curY < (int)0)) : bool(true) ))))) ? bool((curY > this->get_height())) : bool(true) ))){
				HX_STACK_LINE(1346)
				(i)++;
				HX_STACK_LINE(1347)
				continue;
			}
			HX_STACK_LINE(1350)
			tileX = ::Math_obj::floor((Float(curX) / Float(this->_scaledTileWidth)));
			HX_STACK_LINE(1351)
			tileY = ::Math_obj::floor((Float(curY) / Float(this->_scaledTileHeight)));
			HX_STACK_LINE(1353)
			if (((this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions != (int)0))){
				HX_STACK_LINE(1356)
				hx::MultEq(tileX,::Std_obj::_int(this->_scaledTileWidth));
				HX_STACK_LINE(1357)
				hx::MultEq(tileY,::Std_obj::_int(this->_scaledTileHeight));
				HX_STACK_LINE(1358)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(1359)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(1360)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(1361)
				Float lx = (curX - stepX);		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(1362)
				Float ly = (curY - stepY);		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(1365)
				q = tileX;
				HX_STACK_LINE(1367)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(1369)
					hx::AddEq(q,this->_scaledTileWidth);
				}
				HX_STACK_LINE(1372)
				rx = q;
				HX_STACK_LINE(1373)
				ry = (ly + (stepY * ((Float(((q - lx))) / Float(stepX)))));
				HX_STACK_LINE(1375)
				if (((bool((ry > tileY)) && bool((ry < (tileY + this->_scaledTileHeight)))))){
					HX_STACK_LINE(1377)
					if (((Result == null()))){
						HX_STACK_LINE(1379)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(1379)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(1379)
						::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(1379)
						point->_inPool = false;
						HX_STACK_LINE(1379)
						Result = point;
					}
					HX_STACK_LINE(1382)
					Result->set_x(rx);
					HX_STACK_LINE(1383)
					Result->set_y(ry);
					HX_STACK_LINE(1385)
					return false;
				}
				HX_STACK_LINE(1389)
				q = tileY;
				HX_STACK_LINE(1391)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(1393)
					hx::AddEq(q,this->_scaledTileHeight);
				}
				HX_STACK_LINE(1396)
				rx = (lx + (stepX * ((Float(((q - ly))) / Float(stepY)))));
				HX_STACK_LINE(1397)
				ry = q;
				HX_STACK_LINE(1399)
				if (((bool((rx > tileX)) && bool((rx < (tileX + this->_scaledTileWidth)))))){
					HX_STACK_LINE(1401)
					if (((Result == null()))){
						HX_STACK_LINE(1403)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(1403)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(1403)
						::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(1403)
						point->_inPool = false;
						HX_STACK_LINE(1403)
						Result = point;
					}
					HX_STACK_LINE(1406)
					Result->set_x(rx);
					HX_STACK_LINE(1407)
					Result->set_y(ry);
					HX_STACK_LINE(1409)
					return false;
				}
				HX_STACK_LINE(1412)
				return true;
			}
			HX_STACK_LINE(1415)
			(i)++;
		}
		HX_STACK_LINE(1418)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,ray,return )

Void FlxTilemap_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateFrameData",0x0334926a,"flixel.tile.FlxTilemap.updateFrameData","flixel/tile/FlxTilemap.hx",1427,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1427)
		if (((bool((bool((this->cachedGraphics != null())) && bool((this->_tileWidth >= (int)1)))) && bool((this->_tileHeight >= (int)1))))){
			HX_STACK_LINE(1429)
			this->framesData = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,::openfl::_v2::geom::Point_obj::__new((int)0,(int)0));
			HX_STACK_LINE(1431)
			this->_rectIDs = Array_obj< int >::__new();
			HX_STACK_LINE(1432)
			::flixel::util::FlxArrayUtil_obj::setLength_Int(this->_rectIDs,this->totalTiles);
			HX_STACK_LINE(1434)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1436)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(1438)
				this->updateTile((i)++);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateFrameData,(void))

::flixel::FlxSprite FlxTilemap_obj::tileToFlxSprite( int X,int Y,hx::Null< int >  __o_NewTile){
int NewTile = __o_NewTile.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tileToFlxSprite",0x2b66754a,"flixel.tile.FlxTilemap.tileToFlxSprite","flixel/tile/FlxTilemap.hx",1453,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(NewTile,"NewTile")
{
		HX_STACK_LINE(1454)
		int rowIndex = (X + (Y * this->widthInTiles));		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(1456)
		::openfl::_v2::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(1462)
		::flixel::tile::FlxTile tile = this->_tileObjects->__get(this->_data->__get(rowIndex)).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1464)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
		}
		else{
			HX_STACK_LINE(1470)
			int rx = (((this->_data->__get(rowIndex) - this->_startingIndex)) * ((this->_tileWidth + this->region->spacingX)));		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(1471)
			int ry = (int)0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(1473)
			if (((rx >= this->region->width))){
				HX_STACK_LINE(1475)
				ry = (::Std_obj::_int((Float(rx) / Float(this->region->width))) * ((this->_tileHeight + this->region->spacingY)));
				HX_STACK_LINE(1476)
				hx::ModEq(rx,this->region->width);
			}
			HX_STACK_LINE(1479)
			rect = ::openfl::_v2::geom::Rectangle_obj::__new((rx + this->region->startX),(ry + this->region->startY),this->_tileWidth,this->_tileHeight);
		}
		HX_STACK_LINE(1484)
		::openfl::_v2::geom::Point pt = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(1485)
		::flixel::FlxSprite tileSprite = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tileSprite,"tileSprite");
		HX_STACK_LINE(1486)
		tileSprite->makeGraphic(this->_tileWidth,this->_tileHeight,(int)0,true,null());
		HX_STACK_LINE(1487)
		tileSprite->set_x(((X * this->_tileWidth) + this->x));
		HX_STACK_LINE(1488)
		tileSprite->set_y(((Y * this->_tileHeight) + this->y));
		HX_STACK_LINE(1489)
		tileSprite->scale->set_x(this->scale->x);
		HX_STACK_LINE(1490)
		tileSprite->scale->set_y(this->scale->y);
		HX_STACK_LINE(1492)
		if (((rect != null()))){
			HX_STACK_LINE(1494)
			tileSprite->get_pixels()->copyPixels(this->cachedGraphics->bitmap,rect,pt,null(),null(),null());
		}
		HX_STACK_LINE(1497)
		tileSprite->dirty = true;
		HX_STACK_LINE(1498)
		tileSprite->updateFrameData();
		HX_STACK_LINE(1500)
		if (((NewTile >= (int)0))){
			HX_STACK_LINE(1502)
			this->setTile(X,Y,NewTile,null());
		}
		HX_STACK_LINE(1505)
		return tileSprite;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,tileToFlxSprite,return )

Void FlxTilemap_obj::updateBuffers( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateBuffers",0xf5face26,"flixel.tile.FlxTilemap.updateBuffers","flixel/tile/FlxTilemap.hx",1512,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1513)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1514)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1516)
		if (((this->_buffers != null()))){
			HX_STACK_LINE(1518)
			i = (int)0;
			HX_STACK_LINE(1519)
			l = this->_buffers->length;
			HX_STACK_LINE(1521)
			{
				HX_STACK_LINE(1521)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1521)
				while(((_g < l))){
					HX_STACK_LINE(1521)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1523)
					this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->destroy();
				}
			}
			HX_STACK_LINE(1526)
			this->_buffers = null();
		}
		HX_STACK_LINE(1529)
		this->_buffers = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateBuffers,(void))

Void FlxTilemap_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","drawTilemap",0x2b20d346,"flixel.tile.FlxTilemap.drawTilemap","flixel/tile/FlxTilemap.hx",1539,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Buffer,"Buffer")
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(1543)
		this->_helperPoint->x = (this->x - (Camera->scroll->x * this->scrollFactor->x));
		HX_STACK_LINE(1544)
		this->_helperPoint->y = (this->y - (Camera->scroll->y * this->scrollFactor->y));
		HX_STACK_LINE(1546)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(1547)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(1548)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(1550)
		Float hackScaleX = (this->tileScaleHack * this->scale->x);		HX_STACK_VAR(hackScaleX,"hackScaleX");
		HX_STACK_LINE(1551)
		Float hackScaleY = (this->tileScaleHack * this->scale->y);		HX_STACK_VAR(hackScaleY,"hackScaleY");
		HX_STACK_LINE(1553)
		::flixel::system::layer::DrawStackItem drawItem = Camera->getDrawStackItem(this->cachedGraphics,false,(int)0,null());		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(1554)
		Array< Float > currDrawData = drawItem->drawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(1555)
		int currIndex = drawItem->position;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(1559)
		this->_point->set_x(((Camera->scroll->x * this->scrollFactor->x) - this->x));
		HX_STACK_LINE(1560)
		this->_point->set_y(((Camera->scroll->y * this->scrollFactor->y) - this->y));
		HX_STACK_LINE(1562)
		int screenXInTiles = ::Math_obj::floor((Float(this->_point->x) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(1563)
		int screenYInTiles = ::Math_obj::floor((Float(this->_point->y) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(1564)
		int screenRows = Buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(1565)
		int screenColumns = Buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(1568)
		if (((screenXInTiles < (int)0))){
			HX_STACK_LINE(1570)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(1572)
		if (((screenXInTiles > (this->widthInTiles - screenColumns)))){
			HX_STACK_LINE(1574)
			screenXInTiles = (this->widthInTiles - screenColumns);
		}
		HX_STACK_LINE(1576)
		if (((screenYInTiles < (int)0))){
			HX_STACK_LINE(1578)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(1580)
		if (((screenYInTiles > (this->heightInTiles - screenRows)))){
			HX_STACK_LINE(1582)
			screenYInTiles = (this->heightInTiles - screenRows);
		}
		HX_STACK_LINE(1585)
		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(1586)
		this->_flashPoint->y = (int)0;
		HX_STACK_LINE(1587)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1588)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1589)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(1590)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1593)
		::openfl::_v2::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
		HX_STACK_LINE(1596)
		while(((row < screenRows))){
			HX_STACK_LINE(1598)
			columnIndex = rowIndex;
			HX_STACK_LINE(1599)
			column = (int)0;
			HX_STACK_LINE(1600)
			this->_flashPoint->x = (int)0;
			HX_STACK_LINE(1602)
			while(((column < screenColumns))){
				HX_STACK_LINE(1640)
				tileID = this->_rectIDs->__get(columnIndex);
				HX_STACK_LINE(1642)
				if (((tileID != (int)-1))){
					HX_STACK_LINE(1644)
					drawX = (this->_helperPoint->x + (hx::Mod(columnIndex,this->widthInTiles) * this->_scaledTileWidth));
					HX_STACK_LINE(1645)
					drawY = (this->_helperPoint->y + (::Math_obj::floor((Float(columnIndex) / Float(this->widthInTiles))) * this->_scaledTileHeight));
					HX_STACK_LINE(1647)
					int _g = (currIndex)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1647)
					if ((this->pixelPerfectRender)){
						HX_STACK_LINE(1647)
						currDrawData[_g] = ::Math_obj::floor(drawX);
					}
					else{
						HX_STACK_LINE(1647)
						currDrawData[_g] = drawX;
					}
					HX_STACK_LINE(1648)
					int _g1 = (currIndex)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1648)
					if ((this->pixelPerfectRender)){
						HX_STACK_LINE(1648)
						currDrawData[_g1] = ::Math_obj::floor(drawY);
					}
					else{
						HX_STACK_LINE(1648)
						currDrawData[_g1] = drawY;
					}
					HX_STACK_LINE(1649)
					currDrawData[(currIndex)++] = tileID;
					HX_STACK_LINE(1652)
					currDrawData[(currIndex)++] = hackScaleX;
					HX_STACK_LINE(1653)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(1654)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(1656)
					currDrawData[(currIndex)++] = hackScaleY;
					HX_STACK_LINE(1659)
					currDrawData[(currIndex)++] = 1.0;
				}
				HX_STACK_LINE(1666)
				(column)++;
				HX_STACK_LINE(1667)
				(columnIndex)++;
			}
			HX_STACK_LINE(1673)
			hx::AddEq(rowIndex,this->widthInTiles);
			HX_STACK_LINE(1674)
			(row)++;
		}
		HX_STACK_LINE(1678)
		drawItem->position = currIndex;
		HX_STACK_LINE(1681)
		Buffer->x = (screenXInTiles * this->_scaledTileWidth);
		HX_STACK_LINE(1682)
		Buffer->y = (screenYInTiles * this->_scaledTileHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

Void FlxTilemap_obj::simplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","simplifyPath",0x8a506712,"flixel.tile.FlxTilemap.simplifyPath","flixel/tile/FlxTilemap.hx",1716,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1717)
		Float deltaPrevious;		HX_STACK_VAR(deltaPrevious,"deltaPrevious");
		HX_STACK_LINE(1718)
		Float deltaNext;		HX_STACK_VAR(deltaNext,"deltaNext");
		HX_STACK_LINE(1719)
		::flixel::util::FlxPoint last = Points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(1720)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1721)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1722)
		int l = (Points->length - (int)1);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1724)
		while(((i < l))){
			HX_STACK_LINE(1726)
			node = Points->__get(i).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(1727)
			deltaPrevious = (Float(((node->x - last->x))) / Float(((node->y - last->y))));
			HX_STACK_LINE(1728)
			deltaNext = (Float(((node->x - Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->x))) / Float(((node->y - Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->y))));
			HX_STACK_LINE(1730)
			if (((bool((bool((last->x == Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->x)) || bool((last->y == Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->y)))) || bool((deltaPrevious == deltaNext))))){
				HX_STACK_LINE(1732)
				Points[i] = null();
			}
			else{
				HX_STACK_LINE(1736)
				last = node;
			}
			HX_STACK_LINE(1739)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,simplifyPath,(void))

Void FlxTilemap_obj::raySimplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","raySimplifyPath",0xc5bc2714,"flixel.tile.FlxTilemap.raySimplifyPath","flixel/tile/FlxTilemap.hx",1749,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1750)
		::flixel::util::FlxPoint source = Points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(1751)
		int lastIndex = (int)-1;		HX_STACK_VAR(lastIndex,"lastIndex");
		HX_STACK_LINE(1752)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1753)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1754)
		int l = Points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1756)
		while(((i < l))){
			HX_STACK_LINE(1758)
			node = Points->__get((i)++).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(1760)
			if (((node == null()))){
				HX_STACK_LINE(1762)
				continue;
			}
			HX_STACK_LINE(1765)
			if ((this->ray(source,node,this->_point,null()))){
				HX_STACK_LINE(1767)
				if (((lastIndex >= (int)0))){
					HX_STACK_LINE(1769)
					Points[lastIndex] = null();
				}
			}
			else{
				HX_STACK_LINE(1774)
				source = Points->__get(lastIndex).StaticCast< ::flixel::util::FlxPoint >();
			}
			HX_STACK_LINE(1777)
			lastIndex = (i - (int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,raySimplifyPath,(void))

Array< int > FlxTilemap_obj::computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal,hx::Null< bool >  __o_StopOnEnd){
bool StopOnEnd = __o_StopOnEnd.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","computePathDistance",0x95b706cd,"flixel.tile.FlxTilemap.computePathDistance","flixel/tile/FlxTilemap.hx",1792,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
	HX_STACK_ARG(WideDiagonal,"WideDiagonal")
	HX_STACK_ARG(StopOnEnd,"StopOnEnd")
{
		HX_STACK_LINE(1795)
		int mapSize = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(mapSize,"mapSize");
		HX_STACK_LINE(1796)
		Array< int > distances = Array_obj< int >::__new();		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(1797)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(distances,mapSize);
		HX_STACK_LINE(1798)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1800)
		while(((i < mapSize))){
			HX_STACK_LINE(1802)
			if (((this->_tileObjects->__get(this->_data->__get(i)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions != (int)0))){
				HX_STACK_LINE(1804)
				distances[i] = (int)-2;
			}
			else{
				HX_STACK_LINE(1808)
				distances[i] = (int)-1;
			}
			HX_STACK_LINE(1810)
			(i)++;
		}
		HX_STACK_LINE(1813)
		distances[StartIndex] = (int)0;
		HX_STACK_LINE(1814)
		int distance = (int)1;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1815)
		Array< int > neighbors = Array_obj< int >::__new().Add(StartIndex);		HX_STACK_VAR(neighbors,"neighbors");
		HX_STACK_LINE(1816)
		Array< int > current;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1817)
		int currentIndex;		HX_STACK_VAR(currentIndex,"currentIndex");
		HX_STACK_LINE(1818)
		bool left;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(1819)
		bool right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(1820)
		bool up;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(1821)
		bool down;		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(1822)
		int currentLength;		HX_STACK_VAR(currentLength,"currentLength");
		HX_STACK_LINE(1823)
		bool foundEnd = false;		HX_STACK_VAR(foundEnd,"foundEnd");
		HX_STACK_LINE(1825)
		while(((neighbors->length > (int)0))){
			HX_STACK_LINE(1827)
			current = neighbors;
			HX_STACK_LINE(1828)
			neighbors = Array_obj< int >::__new();
			HX_STACK_LINE(1830)
			i = (int)0;
			HX_STACK_LINE(1831)
			currentLength = current->length;
			HX_STACK_LINE(1832)
			while(((i < currentLength))){
				HX_STACK_LINE(1834)
				currentIndex = current->__get((i)++);
				HX_STACK_LINE(1836)
				if (((currentIndex == ::Std_obj::_int(EndIndex)))){
					HX_STACK_LINE(1838)
					foundEnd = true;
					HX_STACK_LINE(1839)
					if ((StopOnEnd)){
						HX_STACK_LINE(1841)
						neighbors = Array_obj< int >::__new();
						HX_STACK_LINE(1842)
						break;
					}
				}
				HX_STACK_LINE(1847)
				left = (hx::Mod(currentIndex,this->widthInTiles) > (int)0);
				HX_STACK_LINE(1848)
				right = (hx::Mod(currentIndex,this->widthInTiles) < (this->widthInTiles - (int)1));
				HX_STACK_LINE(1849)
				up = ((Float(currentIndex) / Float(this->widthInTiles)) > (int)0);
				HX_STACK_LINE(1850)
				down = ((Float(currentIndex) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));
				HX_STACK_LINE(1852)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(1854)
				if ((up)){
					HX_STACK_LINE(1856)
					index = (currentIndex - this->widthInTiles);
					HX_STACK_LINE(1858)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(1860)
						distances[index] = distance;
						HX_STACK_LINE(1861)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(1864)
				if ((right)){
					HX_STACK_LINE(1866)
					index = (currentIndex + (int)1);
					HX_STACK_LINE(1868)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(1870)
						distances[index] = distance;
						HX_STACK_LINE(1871)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(1874)
				if ((down)){
					HX_STACK_LINE(1876)
					index = (currentIndex + this->widthInTiles);
					HX_STACK_LINE(1878)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(1880)
						distances[index] = distance;
						HX_STACK_LINE(1881)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(1884)
				if ((left)){
					HX_STACK_LINE(1886)
					index = (currentIndex - (int)1);
					HX_STACK_LINE(1888)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(1890)
						distances[index] = distance;
						HX_STACK_LINE(1891)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(1894)
				if (((bool(up) && bool(right)))){
					HX_STACK_LINE(1896)
					index = ((currentIndex - this->widthInTiles) + (int)1);
					HX_STACK_LINE(1898)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
						HX_STACK_LINE(1900)
						distances[index] = distance;
						HX_STACK_LINE(1901)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(1903)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(1905)
							distances[index] = distance;
							HX_STACK_LINE(1906)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(1909)
				if (((bool(right) && bool(down)))){
					HX_STACK_LINE(1911)
					index = ((currentIndex + this->widthInTiles) + (int)1);
					HX_STACK_LINE(1913)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
						HX_STACK_LINE(1915)
						distances[index] = distance;
						HX_STACK_LINE(1916)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(1918)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(1920)
							distances[index] = distance;
							HX_STACK_LINE(1921)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(1924)
				if (((bool(left) && bool(down)))){
					HX_STACK_LINE(1926)
					index = ((currentIndex + this->widthInTiles) - (int)1);
					HX_STACK_LINE(1928)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
						HX_STACK_LINE(1930)
						distances[index] = distance;
						HX_STACK_LINE(1931)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(1933)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(1935)
							distances[index] = distance;
							HX_STACK_LINE(1936)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(1939)
				if (((bool(up) && bool(left)))){
					HX_STACK_LINE(1941)
					index = ((currentIndex - this->widthInTiles) - (int)1);
					HX_STACK_LINE(1943)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
						HX_STACK_LINE(1945)
						distances[index] = distance;
						HX_STACK_LINE(1946)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(1948)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(1950)
							distances[index] = distance;
							HX_STACK_LINE(1951)
							neighbors->push(index);
						}
					}
				}
			}
			HX_STACK_LINE(1956)
			(distance)++;
		}
		HX_STACK_LINE(1958)
		if ((!(foundEnd))){
			HX_STACK_LINE(1960)
			distances = null();
		}
		HX_STACK_LINE(1963)
		return distances;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,computePathDistance,return )

Void FlxTilemap_obj::walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","walkPath",0xd33d3b12,"flixel.tile.FlxTilemap.walkPath","flixel/tile/FlxTilemap.hx",1974,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_ARG(Start,"Start")
		HX_STACK_ARG(Points,"Points")
		struct _Function_1_1{
			inline static ::flixel::util::FlxPoint Block( ::flixel::tile::FlxTilemap_obj *__this,int &Start){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",1975,0x448feb74)
				{
					HX_STACK_LINE(1975)
					Float X = ((__this->x + (::Math_obj::floor(hx::Mod(Start,__this->widthInTiles)) * __this->_scaledTileWidth)) + (__this->_scaledTileWidth * 0.5));		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1975)
					Float Y = ((__this->y + (::Math_obj::floor((Float(Start) / Float(__this->widthInTiles))) * __this->_scaledTileHeight)) + (__this->_scaledTileHeight * 0.5));		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1975)
					::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(1975)
					point->_inPool = false;
					HX_STACK_LINE(1975)
					return point;
				}
				return null();
			}
		};
		HX_STACK_LINE(1975)
		Points->push(_Function_1_1::Block(this,Start));
		HX_STACK_LINE(1977)
		if (((Data->__get(Start) == (int)0))){
			HX_STACK_LINE(1979)
			return null();
		}
		HX_STACK_LINE(1983)
		bool left = (hx::Mod(Start,this->widthInTiles) > (int)0);		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(1984)
		bool right = (hx::Mod(Start,this->widthInTiles) < (this->widthInTiles - (int)1));		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(1985)
		bool up = ((Float(Start) / Float(this->widthInTiles)) > (int)0);		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(1986)
		bool down = ((Float(Start) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(1988)
		int current = Data->__get(Start);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1989)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1991)
		if ((up)){
			HX_STACK_LINE(1993)
			i = (Start - this->widthInTiles);
			HX_STACK_LINE(1995)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1997)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2000)
		if ((right)){
			HX_STACK_LINE(2002)
			i = (Start + (int)1);
			HX_STACK_LINE(2004)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2006)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2009)
		if ((down)){
			HX_STACK_LINE(2011)
			i = (Start + this->widthInTiles);
			HX_STACK_LINE(2013)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2015)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2018)
		if ((left)){
			HX_STACK_LINE(2020)
			i = (Start - (int)1);
			HX_STACK_LINE(2022)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2024)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2027)
		if (((bool(up) && bool(right)))){
			HX_STACK_LINE(2029)
			i = ((Start - this->widthInTiles) + (int)1);
			HX_STACK_LINE(2031)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2033)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2036)
		if (((bool(right) && bool(down)))){
			HX_STACK_LINE(2038)
			i = ((Start + this->widthInTiles) + (int)1);
			HX_STACK_LINE(2040)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2042)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2045)
		if (((bool(left) && bool(down)))){
			HX_STACK_LINE(2047)
			i = ((Start + this->widthInTiles) - (int)1);
			HX_STACK_LINE(2049)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2051)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2054)
		if (((bool(up) && bool(left)))){
			HX_STACK_LINE(2056)
			i = ((Start - this->widthInTiles) - (int)1);
			HX_STACK_LINE(2058)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2060)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2064)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,walkPath,(void))

Void FlxTilemap_obj::updateTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateTile",0x18c3429b,"flixel.tile.FlxTilemap.updateTile","flixel/tile/FlxTilemap.hx",2073,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(2074)
		::flixel::tile::FlxTile tile = this->_tileObjects->__get(this->_data->__get(Index)).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2076)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
			HX_STACK_LINE(2081)
			this->_rectIDs[Index] = (int)-1;
			HX_STACK_LINE(2084)
			return null();
		}
		HX_STACK_LINE(2098)
		this->_rectIDs[Index] = this->framesData->frames->__get((this->_data->__get(Index) - this->_startingIndex)).StaticCast< ::flixel::system::layer::frames::FlxFrame >()->tileID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,updateTile,(void))

Void FlxTilemap_obj::autoTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","autoTile",0xabb4ce01,"flixel.tile.FlxTilemap.autoTile","flixel/tile/FlxTilemap.hx",2108,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(2109)
		if (((this->_data->__get(Index) == (int)0))){
			HX_STACK_LINE(2111)
			return null();
		}
		HX_STACK_LINE(2114)
		this->_data[Index] = (int)0;
		HX_STACK_LINE(2117)
		if (((bool(((Index - this->widthInTiles) < (int)0)) || bool((this->_data->__get((Index - this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(2119)
			hx::AddEq(this->_data[Index],(int)1);
		}
		HX_STACK_LINE(2122)
		if (((bool((hx::Mod(Index,this->widthInTiles) >= (this->widthInTiles - (int)1))) || bool((this->_data->__get((Index + (int)1)) > (int)0))))){
			HX_STACK_LINE(2124)
			hx::AddEq(this->_data[Index],(int)2);
		}
		HX_STACK_LINE(2127)
		if (((  ((!(((::Std_obj::_int((Index + this->widthInTiles)) >= this->totalTiles))))) ? bool((this->_data->__get((Index + this->widthInTiles)) > (int)0)) : bool(true) ))){
			HX_STACK_LINE(2129)
			hx::AddEq(this->_data[Index],(int)4);
		}
		HX_STACK_LINE(2132)
		if (((bool((hx::Mod(Index,this->widthInTiles) <= (int)0)) || bool((this->_data->__get((Index - (int)1)) > (int)0))))){
			HX_STACK_LINE(2134)
			hx::AddEq(this->_data[Index],(int)8);
		}
		HX_STACK_LINE(2138)
		if (((bool((this->_auto == (int)2)) && bool((this->_data->__get(Index) == (int)15))))){
			HX_STACK_LINE(2141)
			if (((  (((  (((hx::Mod(Index,this->widthInTiles) > (int)0))) ? bool((::Std_obj::_int((Index + this->widthInTiles)) < this->totalTiles)) : bool(false) ))) ? bool((this->_data->__get(((Index + this->widthInTiles) - (int)1)) <= (int)0)) : bool(false) ))){
				HX_STACK_LINE(2143)
				this->_data[Index] = (int)1;
			}
			HX_STACK_LINE(2146)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(2148)
				this->_data[Index] = (int)2;
			}
			HX_STACK_LINE(2151)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(2153)
				this->_data[Index] = (int)4;
			}
			HX_STACK_LINE(2156)
			if (((  (((  (((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1)))) ? bool((::Std_obj::_int((Index + this->widthInTiles)) < this->totalTiles)) : bool(false) ))) ? bool((this->_data->__get(((Index + this->widthInTiles) + (int)1)) <= (int)0)) : bool(false) ))){
				HX_STACK_LINE(2158)
				this->_data[Index] = (int)8;
			}
		}
		HX_STACK_LINE(2162)
		hx::AddEq(this->_data[Index],(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,autoTile,(void))

::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::createBuffer( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","createBuffer",0x170b42e0,"flixel.tile.FlxTilemap.createBuffer","flixel/tile/FlxTilemap.hx",2166,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(2167)
	::flixel::tile::FlxTilemapBuffer buffer = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(2168)
	buffer->pixelPerfectRender = this->pixelPerfectRender;
	HX_STACK_LINE(2169)
	return buffer;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,createBuffer,return )

Void FlxTilemap_obj::onGameResize( int _,int _1){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","onGameResize",0x47562b49,"flixel.tile.FlxTilemap.onGameResize","flixel/tile/FlxTilemap.hx",2177,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		HX_STACK_LINE(2177)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2177)
		int _g = this->get_cameras()->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2177)
		while(((_g1 < _g))){
			HX_STACK_LINE(2177)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2179)
			::flixel::FlxCamera camera = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(2180)
			::flixel::tile::FlxTilemapBuffer buffer = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(2183)
			::flixel::tile::FlxTilemap_obj::_helperBuffer->updateColumns(this->_tileWidth,this->widthInTiles,this->scale->x,camera);
			HX_STACK_LINE(2184)
			::flixel::tile::FlxTilemap_obj::_helperBuffer->updateRows(this->_tileHeight,this->heightInTiles,this->scale->y,camera);
			HX_STACK_LINE(2187)
			if (((bool((bool((buffer == null())) || bool((::flixel::tile::FlxTilemap_obj::_helperBuffer->columns != buffer->columns)))) || bool((::flixel::tile::FlxTilemap_obj::_helperBuffer->rows != buffer->rows))))){
				HX_STACK_LINE(2189)
				if (((buffer != null()))){
					HX_STACK_LINE(2190)
					buffer->destroy();
				}
				HX_STACK_LINE(2192)
				{
					HX_STACK_LINE(2192)
					::flixel::tile::FlxTilemapBuffer buffer1 = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(2192)
					buffer1->pixelPerfectRender = this->pixelPerfectRender;
					HX_STACK_LINE(2192)
					this->_buffers[i] = buffer1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,onGameResize,(void))

::flixel::util::loaders::CachedGraphics FlxTilemap_obj::set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_cachedGraphics",0xb8bccace,"flixel.tile.FlxTilemap.set_cachedGraphics","flixel/tile/FlxTilemap.hx",2202,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(2203)
	::flixel::util::loaders::CachedGraphics oldCached = this->cachedGraphics;		HX_STACK_VAR(oldCached,"oldCached");
	HX_STACK_LINE(2205)
	if (((bool((this->cachedGraphics != Value)) && bool((Value != null()))))){
		HX_STACK_LINE(2207)
		::flixel::util::loaders::CachedGraphics _g = Value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2207)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2207)
		_g->set_useCount((_g1 + (int)1));
		HX_STACK_LINE(2207)
		_g1;
	}
	HX_STACK_LINE(2210)
	if (((bool((oldCached != null())) && bool((oldCached != Value))))){
		HX_STACK_LINE(2212)
		::flixel::util::loaders::CachedGraphics _g = oldCached;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2212)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2212)
		_g->set_useCount((_g1 - (int)1));
		HX_STACK_LINE(2212)
		_g1;
	}
	HX_STACK_LINE(2215)
	return this->cachedGraphics = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_cachedGraphics,return )

bool FlxTilemap_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_pixelPerfectRender",0x5122f25e,"flixel.tile.FlxTilemap.set_pixelPerfectRender","flixel/tile/FlxTilemap.hx",2219,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(2220)
	if (((this->_buffers != null()))){
		HX_STACK_LINE(2222)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2222)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2222)
		while(((_g < _g1->length))){
			HX_STACK_LINE(2222)
			::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(2222)
			++(_g);
			HX_STACK_LINE(2224)
			buffer->pixelPerfectRender = Value;
		}
	}
	HX_STACK_LINE(2228)
	return this->pixelPerfectRender = Value;
}


Void FlxTilemap_obj::setScaleXYCallback( ::flixel::util::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXYCallback",0x2287ee32,"flixel.tile.FlxTilemap.setScaleXYCallback","flixel/tile/FlxTilemap.hx",2232,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(2233)
		this->setScaleXCallback(Scale);
		HX_STACK_LINE(2234)
		this->setScaleYCallback(Scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXYCallback,(void))

Void FlxTilemap_obj::setScaleXCallback( ::flixel::util::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXCallback",0x45b95971,"flixel.tile.FlxTilemap.setScaleXCallback","flixel/tile/FlxTilemap.hx",2238,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(2239)
		this->_scaledTileWidth = (this->_tileWidth * this->scale->x);
		HX_STACK_LINE(2240)
		this->set_width((this->widthInTiles * this->_scaledTileWidth));
		HX_STACK_LINE(2242)
		if (((this->get_cameras() != null()))){
			HX_STACK_LINE(2244)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2244)
			int _g = this->get_cameras()->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2244)
			while(((_g1 < _g))){
				HX_STACK_LINE(2244)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2246)
				if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() != null()))){
					HX_STACK_LINE(2248)
					this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->updateColumns(this->_tileWidth,this->widthInTiles,this->scale->x,this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXCallback,(void))

Void FlxTilemap_obj::setScaleYCallback( ::flixel::util::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleYCallback",0x18aac272,"flixel.tile.FlxTilemap.setScaleYCallback","flixel/tile/FlxTilemap.hx",2255,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(2256)
		this->_scaledTileHeight = (this->_tileHeight * this->scale->y);
		HX_STACK_LINE(2257)
		this->set_height((this->heightInTiles * this->_scaledTileHeight));
		HX_STACK_LINE(2259)
		if (((this->get_cameras() != null()))){
			HX_STACK_LINE(2261)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2261)
			int _g = this->get_cameras()->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2261)
			while(((_g1 < _g))){
				HX_STACK_LINE(2261)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2263)
				if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() != null()))){
					HX_STACK_LINE(2265)
					this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->updateRows(this->_tileHeight,this->heightInTiles,this->scale->y,this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleYCallback,(void))

int FlxTilemap_obj::OFF;

int FlxTilemap_obj::AUTO;

int FlxTilemap_obj::ALT;

::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::_helperBuffer;


FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(_auto,"auto");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_MARK_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(framesData,"framesData");
	HX_MARK_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_MARK_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_MARK_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_MARK_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_MARK_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_rectIDs,"_rectIDs");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_auto,"auto");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_VISIT_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(framesData,"framesData");
	HX_VISIT_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_VISIT_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_VISIT_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_VISIT_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_VISIT_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_rectIDs,"_rectIDs");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { return _auto; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMap") ) { return loadMap_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { return _rectIDs; }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return findPath_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return walkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"autoTile") ) { return autoTile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return totalTiles; }
		if (HX_FIELD_EQ(inName,"framesData") ) { return framesData; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return _tileHeight; }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return drawTilemap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return widthInTiles; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return _tileObjects; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return _helperPoint; }
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return simplifyPath_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameResize") ) { return onGameResize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { return _helperBuffer; }
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return heightInTiles; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { return tileScaleHack; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { return _randomLambda; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return getTileCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBuffers") ) { return updateBuffers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { return cachedGraphics; }
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { return _randomIndices; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { return _randomChoices; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return _startingIndex; }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return getTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return setTileByIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { return customTileRemap; }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"tileToFlxSprite") ) { return tileToFlxSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return raySimplifyPath_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { return _scaledTileWidth; }
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return getTileInstances_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { return _scaledTileHeight; }
		if (HX_FIELD_EQ(inName,"drawDebugOnCamera") ) { return drawDebugOnCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCollisions") ) { return getTileCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return setTileProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleXCallback") ) { return setScaleXCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleYCallback") ) { return setScaleYCallback_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_cachedGraphics") ) { return set_cachedGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleXYCallback") ) { return setScaleXYCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return computePathDistance_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setCustomTileMappings") ) { return setCustomTileMappings_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsCallback") ) { return tilemapOverlapsCallback_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsAtCallback") ) { return tilemapOverlapsAtCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _auto=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::system::layer::Region >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { _rectIDs=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesData") ) { framesData=inValue.Cast< ::flixel::system::layer::frames::FlxSpriteFrames >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { _helperBuffer=inValue.Cast< ::flixel::tile::FlxTilemapBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { tileScaleHack=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { _randomLambda=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { if (inCallProp) return set_cachedGraphics(inValue);cachedGraphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { _randomIndices=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { _randomChoices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { customTileRemap=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { _scaledTileWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { _scaledTileHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("auto"));
	outFields->push(HX_CSTRING("widthInTiles"));
	outFields->push(HX_CSTRING("heightInTiles"));
	outFields->push(HX_CSTRING("totalTiles"));
	outFields->push(HX_CSTRING("tileScaleHack"));
	outFields->push(HX_CSTRING("customTileRemap"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("region"));
	outFields->push(HX_CSTRING("framesData"));
	outFields->push(HX_CSTRING("cachedGraphics"));
	outFields->push(HX_CSTRING("_randomIndices"));
	outFields->push(HX_CSTRING("_randomChoices"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_buffers"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_tileWidth"));
	outFields->push(HX_CSTRING("_tileHeight"));
	outFields->push(HX_CSTRING("_scaledTileWidth"));
	outFields->push(HX_CSTRING("_scaledTileHeight"));
	outFields->push(HX_CSTRING("_tileObjects"));
	outFields->push(HX_CSTRING("_startingIndex"));
	outFields->push(HX_CSTRING("_helperPoint"));
	outFields->push(HX_CSTRING("_rectIDs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("OFF"),
	HX_CSTRING("AUTO"),
	HX_CSTRING("ALT"),
	HX_CSTRING("_helperBuffer"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_auto),HX_CSTRING("auto")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,widthInTiles),HX_CSTRING("widthInTiles")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,heightInTiles),HX_CSTRING("heightInTiles")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,totalTiles),HX_CSTRING("totalTiles")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,tileScaleHack),HX_CSTRING("tileScaleHack")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,customTileRemap),HX_CSTRING("customTileRemap")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTilemap_obj,scale),HX_CSTRING("scale")},
	{hx::fsObject /*::flixel::system::layer::Region*/ ,(int)offsetof(FlxTilemap_obj,region),HX_CSTRING("region")},
	{hx::fsObject /*::flixel::system::layer::frames::FlxSpriteFrames*/ ,(int)offsetof(FlxTilemap_obj,framesData),HX_CSTRING("framesData")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(FlxTilemap_obj,cachedGraphics),HX_CSTRING("cachedGraphics")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,_randomIndices),HX_CSTRING("_randomIndices")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_randomChoices),HX_CSTRING("_randomChoices")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTilemap_obj,_randomLambda),HX_CSTRING("_randomLambda")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_flashPoint),HX_CSTRING("_flashPoint")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(FlxTilemap_obj,_flashRect),HX_CSTRING("_flashRect")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_buffers),HX_CSTRING("_buffers")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,_data),HX_CSTRING("_data")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileWidth),HX_CSTRING("_tileWidth")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileHeight),HX_CSTRING("_tileHeight")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileWidth),HX_CSTRING("_scaledTileWidth")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileHeight),HX_CSTRING("_scaledTileHeight")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_tileObjects),HX_CSTRING("_tileObjects")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_startingIndex),HX_CSTRING("_startingIndex")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_helperPoint),HX_CSTRING("_helperPoint")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,_rectIDs),HX_CSTRING("_rectIDs")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("auto"),
	HX_CSTRING("widthInTiles"),
	HX_CSTRING("heightInTiles"),
	HX_CSTRING("totalTiles"),
	HX_CSTRING("tileScaleHack"),
	HX_CSTRING("customTileRemap"),
	HX_CSTRING("scale"),
	HX_CSTRING("region"),
	HX_CSTRING("framesData"),
	HX_CSTRING("cachedGraphics"),
	HX_CSTRING("_randomIndices"),
	HX_CSTRING("_randomChoices"),
	HX_CSTRING("_randomLambda"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_buffers"),
	HX_CSTRING("_data"),
	HX_CSTRING("_tileWidth"),
	HX_CSTRING("_tileHeight"),
	HX_CSTRING("_scaledTileWidth"),
	HX_CSTRING("_scaledTileHeight"),
	HX_CSTRING("_tileObjects"),
	HX_CSTRING("_startingIndex"),
	HX_CSTRING("_helperPoint"),
	HX_CSTRING("_rectIDs"),
	HX_CSTRING("destroy"),
	HX_CSTRING("loadMap"),
	HX_CSTRING("setCustomTileMappings"),
	HX_CSTRING("drawDebugOnCamera"),
	HX_CSTRING("draw"),
	HX_CSTRING("getData"),
	HX_CSTRING("setDirty"),
	HX_CSTRING("findPath"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("tilemapOverlapsCallback"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("tilemapOverlapsAtCallback"),
	HX_CSTRING("overlapsWithCallback"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("getTile"),
	HX_CSTRING("getTileByIndex"),
	HX_CSTRING("getTileCollisions"),
	HX_CSTRING("getTileInstances"),
	HX_CSTRING("getTileCoords"),
	HX_CSTRING("setTile"),
	HX_CSTRING("setTileByIndex"),
	HX_CSTRING("setTileProperties"),
	HX_CSTRING("follow"),
	HX_CSTRING("getBounds"),
	HX_CSTRING("ray"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("tileToFlxSprite"),
	HX_CSTRING("updateBuffers"),
	HX_CSTRING("drawTilemap"),
	HX_CSTRING("simplifyPath"),
	HX_CSTRING("raySimplifyPath"),
	HX_CSTRING("computePathDistance"),
	HX_CSTRING("walkPath"),
	HX_CSTRING("updateTile"),
	HX_CSTRING("autoTile"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("onGameResize"),
	HX_CSTRING("set_cachedGraphics"),
	HX_CSTRING("set_pixelPerfectRender"),
	HX_CSTRING("setScaleXYCallback"),
	HX_CSTRING("setScaleXCallback"),
	HX_CSTRING("setScaleYCallback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::OFF,"OFF");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::OFF,"OFF");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#endif

Class FlxTilemap_obj::__mClass;

void FlxTilemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxTilemap"), hx::TCanCast< FlxTilemap_obj> ,sStaticFields,sMemberFields,
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

void FlxTilemap_obj::__boot()
{
	OFF= (int)0;
	AUTO= (int)1;
	ALT= (int)2;
	_helperBuffer= ::Type_obj::createEmptyInstance(hx::ClassOf< ::flixel::tile::FlxTilemapBuffer >());
}

} // end namespace flixel
} // end namespace tile
