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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#include <flixel/util/FlxBitmapDataPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
namespace util{

Void FlxCollision_obj::__construct()
{
	return null();
}

//FlxCollision_obj::~FlxCollision_obj() { }

Dynamic FlxCollision_obj::__CreateEmpty() { return  new FlxCollision_obj; }
hx::ObjectPtr< FlxCollision_obj > FlxCollision_obj::__new()
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

Dynamic FlxCollision_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCollision_obj > result = new FlxCollision_obj();
	result->__construct();
	return result;}

int FlxCollision_obj::CAMERA_WALL_OUTSIDE;

int FlxCollision_obj::CAMERA_WALL_INSIDE;

::openfl::_v2::geom::Point FlxCollision_obj::pointA;

::openfl::_v2::geom::Point FlxCollision_obj::pointB;

::openfl::_v2::geom::Point FlxCollision_obj::centerA;

::openfl::_v2::geom::Point FlxCollision_obj::centerB;

::openfl::_v2::geom::Matrix FlxCollision_obj::matrixA;

::openfl::_v2::geom::Matrix FlxCollision_obj::matrixB;

::openfl::_v2::geom::Matrix FlxCollision_obj::testMatrix;

::openfl::_v2::geom::Rectangle FlxCollision_obj::boundsA;

::openfl::_v2::geom::Rectangle FlxCollision_obj::boundsB;

bool FlxCollision_obj::pixelPerfectCheck( ::flixel::FlxSprite Contact,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectCheck",0xcaf595cd,"flixel.util.FlxCollision.pixelPerfectCheck","flixel/util/FlxCollision.hx",46,0x8c8a7b84)
	HX_STACK_ARG(Contact,"Contact")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(48)
		bool considerRotation = (bool((Contact->angle != (int)0)) || bool((Target->angle != (int)0)));		HX_STACK_VAR(considerRotation,"considerRotation");
		HX_STACK_LINE(50)
		if (((Camera != null()))){
			HX_STACK_LINE(50)
			Camera = Camera;
		}
		else{
			HX_STACK_LINE(50)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(52)
		::flixel::util::FlxCollision_obj::pointA->x = ((Contact->x - ::Std_obj::_int((Camera->scroll->x * Contact->scrollFactor->x))) - Contact->offset->x);
		HX_STACK_LINE(53)
		::flixel::util::FlxCollision_obj::pointA->y = ((Contact->y - ::Std_obj::_int((Camera->scroll->y * Contact->scrollFactor->y))) - Contact->offset->y);
		HX_STACK_LINE(55)
		::flixel::util::FlxCollision_obj::pointB->x = ((Target->x - ::Std_obj::_int((Camera->scroll->x * Target->scrollFactor->x))) - Target->offset->x);
		HX_STACK_LINE(56)
		::flixel::util::FlxCollision_obj::pointB->y = ((Target->y - ::Std_obj::_int((Camera->scroll->y * Target->scrollFactor->y))) - Target->offset->y);
		HX_STACK_LINE(58)
		if ((considerRotation)){
			HX_STACK_LINE(61)
			::flixel::util::FlxCollision_obj::centerA->setTo(Contact->origin->x,Contact->origin->y);
			HX_STACK_LINE(62)
			::flixel::util::FlxCollision_obj::centerB->setTo(Target->origin->x,Target->origin->y);
			HX_STACK_LINE(65)
			::flixel::util::FlxCollision_obj::boundsA->x = ((::flixel::util::FlxCollision_obj::pointA->x + ::flixel::util::FlxCollision_obj::centerA->x) - ::flixel::util::FlxCollision_obj::centerA->get_length());
			HX_STACK_LINE(66)
			::flixel::util::FlxCollision_obj::boundsA->y = ((::flixel::util::FlxCollision_obj::pointA->y + ::flixel::util::FlxCollision_obj::centerA->y) - ::flixel::util::FlxCollision_obj::centerA->get_length());
			HX_STACK_LINE(67)
			::flixel::util::FlxCollision_obj::boundsA->width = (::flixel::util::FlxCollision_obj::centerA->get_length() * (int)2);
			HX_STACK_LINE(68)
			::flixel::util::FlxCollision_obj::boundsA->height = ::flixel::util::FlxCollision_obj::boundsA->width;
			HX_STACK_LINE(70)
			::flixel::util::FlxCollision_obj::boundsB->x = ((::flixel::util::FlxCollision_obj::pointB->x + ::flixel::util::FlxCollision_obj::centerB->x) - ::flixel::util::FlxCollision_obj::centerB->get_length());
			HX_STACK_LINE(71)
			::flixel::util::FlxCollision_obj::boundsB->y = ((::flixel::util::FlxCollision_obj::pointB->y + ::flixel::util::FlxCollision_obj::centerB->y) - ::flixel::util::FlxCollision_obj::centerB->get_length());
			HX_STACK_LINE(72)
			::flixel::util::FlxCollision_obj::boundsB->width = (::flixel::util::FlxCollision_obj::centerB->get_length() * (int)2);
			HX_STACK_LINE(73)
			::flixel::util::FlxCollision_obj::boundsB->height = ::flixel::util::FlxCollision_obj::boundsB->width;
		}
		else{
			HX_STACK_LINE(77)
			::flixel::util::FlxCollision_obj::boundsA->x = ::flixel::util::FlxCollision_obj::pointA->x;
			HX_STACK_LINE(78)
			::flixel::util::FlxCollision_obj::boundsA->y = ::flixel::util::FlxCollision_obj::pointA->y;
			HX_STACK_LINE(79)
			::flixel::util::FlxCollision_obj::boundsA->width = Contact->frameWidth;
			HX_STACK_LINE(80)
			::flixel::util::FlxCollision_obj::boundsA->height = Contact->frameHeight;
			HX_STACK_LINE(82)
			::flixel::util::FlxCollision_obj::boundsB->x = ::flixel::util::FlxCollision_obj::pointB->x;
			HX_STACK_LINE(83)
			::flixel::util::FlxCollision_obj::boundsB->y = ::flixel::util::FlxCollision_obj::pointB->y;
			HX_STACK_LINE(84)
			::flixel::util::FlxCollision_obj::boundsB->width = Target->frameWidth;
			HX_STACK_LINE(85)
			::flixel::util::FlxCollision_obj::boundsB->height = Target->frameHeight;
		}
		HX_STACK_LINE(88)
		::openfl::_v2::geom::Rectangle intersect = ::flixel::util::FlxCollision_obj::boundsA->intersection(::flixel::util::FlxCollision_obj::boundsB);		HX_STACK_VAR(intersect,"intersect");
		HX_STACK_LINE(90)
		if (((  ((!(((  ((!(intersect->isEmpty()))) ? bool((intersect->width < (int)1)) : bool(true) ))))) ? bool((intersect->height < (int)1)) : bool(true) ))){
			HX_STACK_LINE(92)
			return false;
		}
		HX_STACK_LINE(96)
		::flixel::util::FlxCollision_obj::matrixA->identity();
		HX_STACK_LINE(97)
		::flixel::util::FlxCollision_obj::matrixA->translate(-(((intersect->x - ::flixel::util::FlxCollision_obj::boundsA->x))),-(((intersect->y - ::flixel::util::FlxCollision_obj::boundsA->y))));
		HX_STACK_LINE(99)
		::flixel::util::FlxCollision_obj::matrixB->identity();
		HX_STACK_LINE(100)
		::flixel::util::FlxCollision_obj::matrixB->translate(-(((intersect->x - ::flixel::util::FlxCollision_obj::boundsB->x))),-(((intersect->y - ::flixel::util::FlxCollision_obj::boundsB->y))));
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(103)
			Contact->calcFrame(true);
		}
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(104)
			Target->calcFrame(true);
		}
		HX_STACK_LINE(107)
		::openfl::_v2::display::BitmapData testA = Contact->framePixels;		HX_STACK_VAR(testA,"testA");
		HX_STACK_LINE(108)
		::openfl::_v2::display::BitmapData testB = Target->framePixels;		HX_STACK_VAR(testB,"testB");
		HX_STACK_LINE(110)
		int overlapWidth = ::Std_obj::_int(intersect->width);		HX_STACK_VAR(overlapWidth,"overlapWidth");
		HX_STACK_LINE(111)
		int overlapHeight = ::Std_obj::_int(intersect->height);		HX_STACK_VAR(overlapHeight,"overlapHeight");
		HX_STACK_LINE(114)
		if ((considerRotation)){
			HX_STACK_LINE(116)
			::flixel::util::FlxCollision_obj::testMatrix->identity();
			HX_STACK_LINE(119)
			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Contact->origin->x),-(Contact->origin->y));
			HX_STACK_LINE(122)
			::flixel::util::FlxCollision_obj::testMatrix->rotate((Contact->angle * ((Float(::Math_obj::PI) / Float((int)180)))));
			HX_STACK_LINE(125)
			::flixel::util::FlxCollision_obj::testMatrix->translate((Float(::flixel::util::FlxCollision_obj::boundsA->width) / Float((int)2)),(Float(::flixel::util::FlxCollision_obj::boundsA->height) / Float((int)2)));
			HX_STACK_LINE(128)
			int _g = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->width);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(128)
			::openfl::_v2::display::BitmapData testA2 = ::flixel::util::FlxBitmapDataPool_obj::get(_g,::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsA->height),true,(int)0,false);		HX_STACK_VAR(testA2,"testA2");
			HX_STACK_LINE(131)
			testA2->draw(testA,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
			HX_STACK_LINE(132)
			testA = testA2;
			HX_STACK_LINE(135)
			::flixel::util::FlxCollision_obj::testMatrix->identity();
			HX_STACK_LINE(136)
			::flixel::util::FlxCollision_obj::testMatrix->translate(-(Target->origin->x),-(Target->origin->y));
			HX_STACK_LINE(137)
			::flixel::util::FlxCollision_obj::testMatrix->rotate((Target->angle * ((Float(::Math_obj::PI) / Float((int)180)))));
			HX_STACK_LINE(138)
			::flixel::util::FlxCollision_obj::testMatrix->translate((Float(::flixel::util::FlxCollision_obj::boundsB->width) / Float((int)2)),(Float(::flixel::util::FlxCollision_obj::boundsB->height) / Float((int)2)));
			HX_STACK_LINE(140)
			int _g1 = ::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->width);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(140)
			::openfl::_v2::display::BitmapData testB2 = ::flixel::util::FlxBitmapDataPool_obj::get(_g1,::Math_obj::floor(::flixel::util::FlxCollision_obj::boundsB->height),true,(int)0,false);		HX_STACK_VAR(testB2,"testB2");
			HX_STACK_LINE(141)
			testB2->draw(testB,::flixel::util::FlxCollision_obj::testMatrix,null(),null(),null(),false);
			HX_STACK_LINE(142)
			testB = testB2;
		}
		HX_STACK_LINE(145)
		::flixel::util::FlxCollision_obj::boundsA->x = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixA->tx));
		HX_STACK_LINE(146)
		::flixel::util::FlxCollision_obj::boundsA->y = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixA->ty));
		HX_STACK_LINE(147)
		::flixel::util::FlxCollision_obj::boundsA->width = overlapWidth;
		HX_STACK_LINE(148)
		::flixel::util::FlxCollision_obj::boundsA->height = overlapHeight;
		HX_STACK_LINE(150)
		::flixel::util::FlxCollision_obj::boundsB->x = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixB->tx));
		HX_STACK_LINE(151)
		::flixel::util::FlxCollision_obj::boundsB->y = ::Std_obj::_int(-(::flixel::util::FlxCollision_obj::matrixB->ty));
		HX_STACK_LINE(152)
		::flixel::util::FlxCollision_obj::boundsB->width = overlapWidth;
		HX_STACK_LINE(153)
		::flixel::util::FlxCollision_obj::boundsB->height = overlapHeight;
		HX_STACK_LINE(155)
		::openfl::_v2::utils::ByteArray pixelsA = testA->getPixels(::flixel::util::FlxCollision_obj::boundsA);		HX_STACK_VAR(pixelsA,"pixelsA");
		HX_STACK_LINE(156)
		::openfl::_v2::utils::ByteArray pixelsB = testB->getPixels(::flixel::util::FlxCollision_obj::boundsB);		HX_STACK_VAR(pixelsB,"pixelsB");
		HX_STACK_LINE(158)
		bool hit = false;		HX_STACK_VAR(hit,"hit");
		HX_STACK_LINE(161)
		int alphaA = (int)0;		HX_STACK_VAR(alphaA,"alphaA");
		HX_STACK_LINE(162)
		int alphaB = (int)0;		HX_STACK_VAR(alphaB,"alphaB");
		HX_STACK_LINE(163)
		int overlapPixels = (overlapWidth * overlapHeight);		HX_STACK_VAR(overlapPixels,"overlapPixels");
		HX_STACK_LINE(164)
		int alphaIdx = (int)0;		HX_STACK_VAR(alphaIdx,"alphaIdx");
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(167)
			int _g = ::Math_obj::ceil((Float(overlapPixels) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(167)
			while(((_g1 < _g))){
				HX_STACK_LINE(167)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(169)
				alphaIdx = (int(i) << int((int)3));
				HX_STACK_LINE(170)
				pixelsA->position = pixelsB->position = alphaIdx;
				HX_STACK_LINE(171)
				if (((pixelsA->position < pixelsA->length))){
					HX_STACK_LINE(171)
					int pos = (pixelsA->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(171)
					alphaA = pixelsA->b->__get(pos);
				}
				else{
					HX_STACK_LINE(171)
					alphaA = pixelsA->__throwEOFi();
				}
				HX_STACK_LINE(172)
				if (((pixelsB->position < pixelsB->length))){
					HX_STACK_LINE(172)
					int pos = (pixelsB->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(172)
					alphaB = pixelsB->b->__get(pos);
				}
				else{
					HX_STACK_LINE(172)
					alphaB = pixelsB->__throwEOFi();
				}
				HX_STACK_LINE(174)
				if (((bool((alphaA >= AlphaTolerance)) && bool((alphaB >= AlphaTolerance))))){
					HX_STACK_LINE(176)
					hit = true;
					HX_STACK_LINE(177)
					break;
				}
			}
		}
		HX_STACK_LINE(181)
		if ((!(hit))){
			HX_STACK_LINE(184)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(184)
			int _g = (int(overlapPixels) >> int((int)1));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			while(((_g1 < _g))){
				HX_STACK_LINE(184)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(186)
				alphaIdx = (((int(i) << int((int)3))) + (int)4);
				HX_STACK_LINE(187)
				pixelsA->position = pixelsB->position = alphaIdx;
				HX_STACK_LINE(188)
				if (((pixelsA->position < pixelsA->length))){
					HX_STACK_LINE(188)
					int pos = (pixelsA->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(188)
					alphaA = pixelsA->b->__get(pos);
				}
				else{
					HX_STACK_LINE(188)
					alphaA = pixelsA->__throwEOFi();
				}
				HX_STACK_LINE(189)
				if (((pixelsB->position < pixelsB->length))){
					HX_STACK_LINE(189)
					int pos = (pixelsB->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(189)
					alphaB = pixelsB->b->__get(pos);
				}
				else{
					HX_STACK_LINE(189)
					alphaB = pixelsB->__throwEOFi();
				}
				HX_STACK_LINE(191)
				if (((bool((alphaA >= AlphaTolerance)) && bool((alphaB >= AlphaTolerance))))){
					HX_STACK_LINE(193)
					hit = true;
					HX_STACK_LINE(194)
					break;
				}
			}
		}
		HX_STACK_LINE(199)
		if ((considerRotation)){
			HX_STACK_LINE(201)
			::flixel::util::FlxBitmapDataPool_obj::put(testA);
			HX_STACK_LINE(202)
			::flixel::util::FlxBitmapDataPool_obj::put(testB);
		}
		HX_STACK_LINE(205)
		return hit;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectCheck,return )

bool FlxCollision_obj::pixelPerfectPointCheck( int PointX,int PointY,::flixel::FlxSprite Target,hx::Null< int >  __o_AlphaTolerance){
int AlphaTolerance = __o_AlphaTolerance.Default(1);
	HX_STACK_FRAME("flixel.util.FlxCollision","pixelPerfectPointCheck",0x29896333,"flixel.util.FlxCollision.pixelPerfectPointCheck","flixel/util/FlxCollision.hx",218,0x8c8a7b84)
	HX_STACK_ARG(PointX,"PointX")
	HX_STACK_ARG(PointY,"PointY")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
{
		HX_STACK_LINE(220)
		int _g = ::Math_obj::floor(Target->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(220)
		int _g1 = ::Math_obj::floor(Target->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(220)
		int _g2 = ::Std_obj::_int(Target->get_width());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(220)
		if (((::flixel::util::FlxMath_obj::pointInCoordinates(PointX,PointY,_g,_g1,_g2,::Std_obj::_int(Target->get_height())) == false))){
			HX_STACK_LINE(222)
			return false;
		}
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(226)
			Target->calcFrame(true);
		}
		HX_STACK_LINE(230)
		::openfl::_v2::display::BitmapData test = Target->framePixels;		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(232)
		int pixelAlpha = (int)0;		HX_STACK_VAR(pixelAlpha,"pixelAlpha");
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			int _g3 = ::Math_obj::floor((PointX - Target->x));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(233)
			int Color = test->getPixel32(_g3,::Math_obj::floor((PointY - Target->y)));		HX_STACK_VAR(Color,"Color");
			HX_STACK_LINE(233)
			pixelAlpha = (int((int(Color) >> int((int)24))) & int((int)255));
		}
		HX_STACK_LINE(236)
		pixelAlpha = ::Std_obj::_int((pixelAlpha * Target->alpha));
		HX_STACK_LINE(240)
		if (((pixelAlpha >= AlphaTolerance))){
			HX_STACK_LINE(242)
			return true;
		}
		else{
			HX_STACK_LINE(246)
			return false;
		}
		HX_STACK_LINE(240)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,pixelPerfectPointCheck,return )

::flixel::group::FlxGroup FlxCollision_obj::createCameraWall( ::flixel::FlxCamera Camera,int Placement,int Thickness,hx::Null< bool >  __o_AdjustWorldBounds){
bool AdjustWorldBounds = __o_AdjustWorldBounds.Default(false);
	HX_STACK_FRAME("flixel.util.FlxCollision","createCameraWall",0x3ca8e03f,"flixel.util.FlxCollision.createCameraWall","flixel/util/FlxCollision.hx",260,0x8c8a7b84)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Placement,"Placement")
	HX_STACK_ARG(Thickness,"Thickness")
	HX_STACK_ARG(AdjustWorldBounds,"AdjustWorldBounds")
{
		HX_STACK_LINE(261)
		::flixel::tile::FlxTileblock left = null();		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(262)
		::flixel::tile::FlxTileblock right = null();		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(263)
		::flixel::tile::FlxTileblock top = null();		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(264)
		::flixel::tile::FlxTileblock bottom = null();		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(266)
		switch( (int)(Placement)){
			case (int)0: {
				HX_STACK_LINE(269)
				int _g = ::Math_obj::floor((Camera->x - Thickness));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(269)
				left = ::flixel::tile::FlxTileblock_obj::__new(_g,::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(270)
				int _g1 = ::Math_obj::floor((Camera->x + Camera->width));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(270)
				right = ::flixel::tile::FlxTileblock_obj::__new(_g1,::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(271)
				int _g2 = ::Math_obj::floor((Camera->x - Thickness));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(271)
				top = ::flixel::tile::FlxTileblock_obj::__new(_g2,::Math_obj::floor((Camera->y - Thickness)),(Camera->width + (Thickness * (int)2)),Thickness);
				HX_STACK_LINE(272)
				bottom = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor((Camera->x - Thickness)),Camera->height,(Camera->width + (Thickness * (int)2)),Thickness);
				HX_STACK_LINE(274)
				if ((AdjustWorldBounds)){
					HX_STACK_LINE(276)
					::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(276)
					_this->x = (Camera->x - Thickness);
					HX_STACK_LINE(276)
					_this->y = (Camera->y - Thickness);
					HX_STACK_LINE(276)
					_this->width = (Camera->width + (Thickness * (int)2));
					HX_STACK_LINE(276)
					_this->height = (Camera->height + (Thickness * (int)2));
					HX_STACK_LINE(276)
					_this;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(279)
				int _g3 = ::Math_obj::floor(Camera->x);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(279)
				left = ::flixel::tile::FlxTileblock_obj::__new(_g3,::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(280)
				int _g4 = ::Math_obj::floor(((Camera->x + Camera->width) - Thickness));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(280)
				right = ::flixel::tile::FlxTileblock_obj::__new(_g4,::Math_obj::floor((Camera->y + Thickness)),Thickness,(Camera->height - (Thickness * (int)2)));
				HX_STACK_LINE(281)
				int _g5 = ::Math_obj::floor(Camera->x);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(281)
				top = ::flixel::tile::FlxTileblock_obj::__new(_g5,::Math_obj::floor(Camera->y),Camera->width,Thickness);
				HX_STACK_LINE(282)
				bottom = ::flixel::tile::FlxTileblock_obj::__new(::Math_obj::floor(Camera->x),(Camera->height - Thickness),Camera->width,Thickness);
				HX_STACK_LINE(284)
				if ((AdjustWorldBounds)){
					HX_STACK_LINE(286)
					::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					_this->x = Camera->x;
					HX_STACK_LINE(286)
					_this->y = Camera->y;
					HX_STACK_LINE(286)
					_this->width = Camera->width;
					HX_STACK_LINE(286)
					_this->height = Camera->height;
					HX_STACK_LINE(286)
					_this;
				}
			}
			;break;
		}
		HX_STACK_LINE(290)
		::flixel::group::FlxGroup result = ::flixel::group::FlxGroup_obj::__new((int)4);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(292)
		result->add(left);
		HX_STACK_LINE(293)
		result->add(right);
		HX_STACK_LINE(294)
		result->add(top);
		HX_STACK_LINE(295)
		result->add(bottom);
		HX_STACK_LINE(297)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxCollision_obj,createCameraWall,return )


FlxCollision_obj::FlxCollision_obj()
{
}

Dynamic FlxCollision_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { return pointA; }
		if (HX_FIELD_EQ(inName,"pointB") ) { return pointB; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { return centerA; }
		if (HX_FIELD_EQ(inName,"centerB") ) { return centerB; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { return matrixA; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { return matrixB; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { return boundsA; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { return boundsB; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { return testMatrix; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createCameraWall") ) { return createCameraWall_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"pixelPerfectCheck") ) { return pixelPerfectCheck_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"pixelPerfectPointCheck") ) { return pixelPerfectPointCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCollision_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pointA") ) { pointA=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pointB") ) { pointB=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"centerA") ) { centerA=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerB") ) { centerB=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrixA") ) { matrixA=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrixB") ) { matrixB=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundsA") ) { boundsA=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundsB") ) { boundsB=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testMatrix") ) { testMatrix=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCollision_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CAMERA_WALL_OUTSIDE"),
	HX_CSTRING("CAMERA_WALL_INSIDE"),
	HX_CSTRING("pointA"),
	HX_CSTRING("pointB"),
	HX_CSTRING("centerA"),
	HX_CSTRING("centerB"),
	HX_CSTRING("matrixA"),
	HX_CSTRING("matrixB"),
	HX_CSTRING("testMatrix"),
	HX_CSTRING("boundsA"),
	HX_CSTRING("boundsB"),
	HX_CSTRING("pixelPerfectCheck"),
	HX_CSTRING("pixelPerfectPointCheck"),
	HX_CSTRING("createCameraWall"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_OUTSIDE,"CAMERA_WALL_OUTSIDE");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_INSIDE,"CAMERA_WALL_INSIDE");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_MARK_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_OUTSIDE,"CAMERA_WALL_OUTSIDE");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::CAMERA_WALL_INSIDE,"CAMERA_WALL_INSIDE");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointA,"pointA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::pointB,"pointB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerA,"centerA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::centerB,"centerB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixA,"matrixA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::matrixB,"matrixB");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::testMatrix,"testMatrix");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsA,"boundsA");
	HX_VISIT_MEMBER_NAME(FlxCollision_obj::boundsB,"boundsB");
};

#endif

Class FlxCollision_obj::__mClass;

void FlxCollision_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxCollision"), hx::TCanCast< FlxCollision_obj> ,sStaticFields,sMemberFields,
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

void FlxCollision_obj::__boot()
{
	CAMERA_WALL_OUTSIDE= (int)0;
	CAMERA_WALL_INSIDE= (int)1;
	pointA= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	pointB= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	centerA= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	centerB= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	matrixA= ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	matrixB= ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	testMatrix= ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	boundsA= ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
	boundsB= ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace util