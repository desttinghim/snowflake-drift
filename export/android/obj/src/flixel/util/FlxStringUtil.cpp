#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{

Void FlxStringUtil_obj::__construct()
{
	return null();
}

//FlxStringUtil_obj::~FlxStringUtil_obj() { }

Dynamic FlxStringUtil_obj::__CreateEmpty() { return  new FlxStringUtil_obj; }
hx::ObjectPtr< FlxStringUtil_obj > FlxStringUtil_obj::__new()
{  hx::ObjectPtr< FlxStringUtil_obj > result = new FlxStringUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxStringUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxStringUtil_obj > result = new FlxStringUtil_obj();
	result->__construct();
	return result;}

::String FlxStringUtil_obj::formatTicks( int StartTicks,int EndTicks){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatTicks",0xe4bb609c,"flixel.util.FlxStringUtil.formatTicks","flixel/util/FlxStringUtil.hx",28,0x4e012e33)
	HX_STACK_ARG(StartTicks,"StartTicks")
	HX_STACK_ARG(EndTicks,"EndTicks")
	HX_STACK_LINE(28)
	return ((Float(::Math_obj::abs((EndTicks - StartTicks))) / Float((int)1000)) + HX_CSTRING("s"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTicks,return )

::String FlxStringUtil_obj::formatTime( Float Seconds,hx::Null< bool >  __o_ShowMS){
bool ShowMS = __o_ShowMS.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatTime",0xcfa9a0a7,"flixel.util.FlxStringUtil.formatTime","flixel/util/FlxStringUtil.hx",39,0x4e012e33)
	HX_STACK_ARG(Seconds,"Seconds")
	HX_STACK_ARG(ShowMS,"ShowMS")
{
		HX_STACK_LINE(40)
		::String timeString = (::Std_obj::_int((Float(Seconds) / Float((int)60))) + HX_CSTRING(":"));		HX_STACK_VAR(timeString,"timeString");
		HX_STACK_LINE(41)
		int timeStringHelper = hx::Mod(::Std_obj::_int(Seconds),(int)60);		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
		HX_STACK_LINE(42)
		if (((timeStringHelper < (int)10))){
			HX_STACK_LINE(44)
			hx::AddEq(timeString,HX_CSTRING("0"));
		}
		HX_STACK_LINE(46)
		hx::AddEq(timeString,timeStringHelper);
		HX_STACK_LINE(47)
		if ((ShowMS)){
			HX_STACK_LINE(49)
			hx::AddEq(timeString,HX_CSTRING("."));
			HX_STACK_LINE(50)
			timeStringHelper = ::Std_obj::_int((((Seconds - ::Std_obj::_int(Seconds))) * (int)100));
			HX_STACK_LINE(51)
			if (((timeStringHelper < (int)10))){
				HX_STACK_LINE(53)
				hx::AddEq(timeString,HX_CSTRING("0"));
			}
			HX_STACK_LINE(55)
			hx::AddEq(timeString,timeStringHelper);
		}
		HX_STACK_LINE(58)
		return timeString;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTime,return )

::String FlxStringUtil_obj::formatArray( Dynamic AnyArray){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatArray",0xfa1c9fbf,"flixel.util.FlxStringUtil.formatArray","flixel/util/FlxStringUtil.hx",69,0x4e012e33)
	HX_STACK_ARG(AnyArray,"AnyArray")
	HX_STACK_LINE(70)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(71)
	if (((bool((AnyArray != null())) && bool((AnyArray->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(73)
		string = ::Std_obj::string(AnyArray->__GetItem((int)0));
		HX_STACK_LINE(74)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(75)
		int l = AnyArray->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(76)
		while(((i < l))){
			HX_STACK_LINE(78)
			hx::AddEq(string,(HX_CSTRING(", ") + ::Std_obj::string(AnyArray->__GetItem((i)++))));
		}
	}
	HX_STACK_LINE(81)
	return string;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatArray,return )

::String FlxStringUtil_obj::formatStringMap( ::haxe::ds::StringMap AnyMap){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatStringMap",0x51016f71,"flixel.util.FlxStringUtil.formatStringMap","flixel/util/FlxStringUtil.hx",91,0x4e012e33)
	HX_STACK_ARG(AnyMap,"AnyMap")
	HX_STACK_LINE(92)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(93)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(AnyMap->keys());  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(94)
			hx::AddEq(string,::Std_obj::string(key));
			HX_STACK_LINE(95)
			hx::AddEq(string,HX_CSTRING(", "));
		}
;
	}
	HX_STACK_LINE(98)
	return string.substring((int)0,(string.length - (int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatStringMap,return )

::String FlxStringUtil_obj::formatMoney( Float Amount,hx::Null< bool >  __o_ShowDecimal,hx::Null< bool >  __o_EnglishStyle){
bool ShowDecimal = __o_ShowDecimal.Default(true);
bool EnglishStyle = __o_EnglishStyle.Default(true);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatMoney",0xe0ecec66,"flixel.util.FlxStringUtil.formatMoney","flixel/util/FlxStringUtil.hx",113,0x4e012e33)
	HX_STACK_ARG(Amount,"Amount")
	HX_STACK_ARG(ShowDecimal,"ShowDecimal")
	HX_STACK_ARG(EnglishStyle,"EnglishStyle")
{
		HX_STACK_LINE(114)
		int helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(115)
		int amount = ::Math_obj::floor(Amount);		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(116)
		::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
		HX_STACK_LINE(117)
		::String comma = HX_CSTRING("");		HX_STACK_VAR(comma,"comma");
		HX_STACK_LINE(118)
		::String zeroes = HX_CSTRING("");		HX_STACK_VAR(zeroes,"zeroes");
		HX_STACK_LINE(119)
		while(((amount > (int)0))){
			HX_STACK_LINE(121)
			if (((bool((string.length > (int)0)) && bool((comma.length <= (int)0))))){
				HX_STACK_LINE(123)
				if ((EnglishStyle)){
					HX_STACK_LINE(125)
					comma = HX_CSTRING(",");
				}
				else{
					HX_STACK_LINE(129)
					comma = HX_CSTRING(".");
				}
			}
			HX_STACK_LINE(132)
			zeroes = HX_CSTRING("");
			HX_STACK_LINE(133)
			helper = (amount - (::Math_obj::floor((Float(amount) / Float((int)1000))) * (int)1000));
			HX_STACK_LINE(134)
			amount = ::Math_obj::floor((Float(amount) / Float((int)1000)));
			HX_STACK_LINE(135)
			if (((amount > (int)0))){
				HX_STACK_LINE(137)
				if (((helper < (int)100))){
					HX_STACK_LINE(139)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
				HX_STACK_LINE(141)
				if (((helper < (int)10))){
					HX_STACK_LINE(143)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
			}
			HX_STACK_LINE(146)
			string = (((zeroes + helper) + comma) + string);
		}
		HX_STACK_LINE(148)
		if ((ShowDecimal)){
			HX_STACK_LINE(150)
			int _g = ::Std_obj::_int((Amount * (int)100));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(150)
			amount = (_g - (::Std_obj::_int(Amount) * (int)100));
			HX_STACK_LINE(151)
			hx::AddEq(string,(((  ((EnglishStyle)) ? ::String(HX_CSTRING(".")) : ::String(HX_CSTRING(",")) )) + amount));
			HX_STACK_LINE(152)
			if (((amount < (int)10))){
				HX_STACK_LINE(154)
				hx::AddEq(string,HX_CSTRING("0"));
			}
		}
		HX_STACK_LINE(157)
		return string;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,formatMoney,return )

::String FlxStringUtil_obj::formatBytes( Float Bytes,hx::Null< int >  __o_Precision){
int Precision = __o_Precision.Default(2);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","formatBytes",0x92253a91,"flixel.util.FlxStringUtil.formatBytes","flixel/util/FlxStringUtil.hx",165,0x4e012e33)
	HX_STACK_ARG(Bytes,"Bytes")
	HX_STACK_ARG(Precision,"Precision")
{
		HX_STACK_LINE(166)
		Array< ::String > units = Array_obj< ::String >::__new().Add(HX_CSTRING("Bytes")).Add(HX_CSTRING("kB")).Add(HX_CSTRING("MB")).Add(HX_CSTRING("GB")).Add(HX_CSTRING("TB")).Add(HX_CSTRING("PB"));		HX_STACK_VAR(units,"units");
		HX_STACK_LINE(167)
		int curUnit = (int)0;		HX_STACK_VAR(curUnit,"curUnit");
		HX_STACK_LINE(168)
		while(((bool((Bytes >= (int)1024)) && bool((curUnit < (units->length - (int)1)))))){
			HX_STACK_LINE(170)
			hx::DivEq(Bytes,(int)1024);
			HX_STACK_LINE(171)
			(curUnit)++;
		}
		HX_STACK_LINE(173)
		return (::flixel::util::FlxMath_obj::roundDecimal(Bytes,Precision) + units->__get(curUnit));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatBytes,return )

::String FlxStringUtil_obj::filterDigits( ::String Input){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","filterDigits",0xab6a2081,"flixel.util.FlxStringUtil.filterDigits","flixel/util/FlxStringUtil.hx",183,0x4e012e33)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(184)
	::StringBuf output = ::StringBuf_obj::__new();		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(185)
		int _g = Input.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(185)
		while(((_g1 < _g))){
			HX_STACK_LINE(185)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(186)
			Dynamic c = Input.charCodeAt(i);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(187)
			if (((bool((c >= (int)48)) && bool((c <= (int)57))))){
				HX_STACK_LINE(188)
				int c1 = c;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(188)
				output->b->push(::String::fromCharCode(c1));
			}
		}
	}
	HX_STACK_LINE(191)
	return output->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,filterDigits,return )

::String FlxStringUtil_obj::htmlFormat( ::String Text,hx::Null< int >  __o_Size,::String __o_Color,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined){
int Size = __o_Size.Default(12);
::String Color = __o_Color.Default(HX_CSTRING("FFFFFF"));
bool Bold = __o_Bold.Default(false);
bool Italic = __o_Italic.Default(false);
bool Underlined = __o_Underlined.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","htmlFormat",0x8e97acc5,"flixel.util.FlxStringUtil.htmlFormat","flixel/util/FlxStringUtil.hx",207,0x4e012e33)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Bold,"Bold")
	HX_STACK_ARG(Italic,"Italic")
	HX_STACK_ARG(Underlined,"Underlined")
{
		HX_STACK_LINE(208)
		::String prefix = ((((HX_CSTRING("<font size='") + Size) + HX_CSTRING("' color='#")) + Color) + HX_CSTRING("'>"));		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(209)
		::String suffix = HX_CSTRING("</font>");		HX_STACK_VAR(suffix,"suffix");
		HX_STACK_LINE(211)
		if ((Bold)){
			HX_STACK_LINE(213)
			prefix = (HX_CSTRING("<b>") + prefix);
			HX_STACK_LINE(214)
			suffix = (suffix + HX_CSTRING("</b>"));
		}
		HX_STACK_LINE(216)
		if ((Italic)){
			HX_STACK_LINE(218)
			prefix = (HX_CSTRING("<i>") + prefix);
			HX_STACK_LINE(219)
			suffix = (suffix + HX_CSTRING("</i>"));
		}
		HX_STACK_LINE(221)
		if ((Underlined)){
			HX_STACK_LINE(223)
			prefix = (HX_CSTRING("<u>") + prefix);
			HX_STACK_LINE(224)
			suffix = (suffix + HX_CSTRING("</u>"));
		}
		HX_STACK_LINE(227)
		return ((prefix + Text) + suffix);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxStringUtil_obj,htmlFormat,return )

::String FlxStringUtil_obj::getDomain( ::String url){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","getDomain",0x05683217,"flixel.util.FlxStringUtil.getDomain","flixel/util/FlxStringUtil.hx",266,0x4e012e33)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(267)
	int urlStart = (url.indexOf(HX_CSTRING("://"),null()) + (int)3);		HX_STACK_VAR(urlStart,"urlStart");
	HX_STACK_LINE(268)
	int urlEnd = url.indexOf(HX_CSTRING("/"),urlStart);		HX_STACK_VAR(urlEnd,"urlEnd");
	HX_STACK_LINE(269)
	::String home = url.substring(urlStart,urlEnd);		HX_STACK_VAR(home,"home");
	HX_STACK_LINE(270)
	int LastDot = (home.lastIndexOf(HX_CSTRING("."),null()) - (int)1);		HX_STACK_VAR(LastDot,"LastDot");
	HX_STACK_LINE(271)
	int domEnd = (home.lastIndexOf(HX_CSTRING("."),LastDot) + (int)1);		HX_STACK_VAR(domEnd,"domEnd");
	HX_STACK_LINE(272)
	home = home.substring(domEnd,home.length);
	HX_STACK_LINE(273)
	home = home.split(HX_CSTRING(":"))->__get((int)0);
	HX_STACK_LINE(274)
	if (((home == HX_CSTRING("")))){
		HX_STACK_LINE(274)
		return HX_CSTRING("local");
	}
	else{
		HX_STACK_LINE(274)
		return home;
	}
	HX_STACK_LINE(274)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDomain,return )

bool FlxStringUtil_obj::sameClassName( Dynamic Obj1,Dynamic Obj2,hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(true);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","sameClassName",0x3be7dc7a,"flixel.util.FlxStringUtil.sameClassName","flixel/util/FlxStringUtil.hx",286,0x4e012e33)
	HX_STACK_ARG(Obj1,"Obj1")
	HX_STACK_ARG(Obj2,"Obj2")
	HX_STACK_ARG(Simple,"Simple")
{
		HX_STACK_LINE(287)
		::String _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			::Class cl;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(287)
			if ((::Std_obj::is(Obj1,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(287)
				cl = Obj1;
			}
			else{
				HX_STACK_LINE(287)
				cl = ::Type_obj::getClass(Obj1);
			}
			HX_STACK_LINE(287)
			::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(287)
			if (((s != null()))){
				HX_STACK_LINE(287)
				s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
				HX_STACK_LINE(287)
				if ((Simple)){
					HX_STACK_LINE(287)
					s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
				}
			}
			HX_STACK_LINE(287)
			_g = s;
		}
		struct _Function_1_1{
			inline static ::String Block( Dynamic &Obj2,bool &Simple){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxStringUtil.hx",287,0x4e012e33)
				{
					HX_STACK_LINE(287)
					::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(287)
					if ((::Std_obj::is(Obj2,hx::ClassOf< ::Class >()))){
						HX_STACK_LINE(287)
						cl = Obj2;
					}
					else{
						HX_STACK_LINE(287)
						cl = ::Type_obj::getClass(Obj2);
					}
					HX_STACK_LINE(287)
					::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(287)
					if (((s != null()))){
						HX_STACK_LINE(287)
						s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
						HX_STACK_LINE(287)
						if ((Simple)){
							HX_STACK_LINE(287)
							s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
						}
					}
					HX_STACK_LINE(287)
					return s;
				}
				return null();
			}
		};
		HX_STACK_LINE(287)
		return (_g == _Function_1_1::Block(Obj2,Simple));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,sameClassName,return )

Array< int > FlxStringUtil_obj::toIntArray( ::String Data){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","toIntArray",0xa370d488,"flixel.util.FlxStringUtil.toIntArray","flixel/util/FlxStringUtil.hx",298,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_LINE(299)
	if (((bool((Data != null())) && bool((Data != HX_CSTRING("")))))){
		HX_STACK_LINE(301)
		Array< ::String > strArray = Data.split(HX_CSTRING(","));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(302)
		Array< int > iArray = Array_obj< int >::__new();		HX_STACK_VAR(iArray,"iArray");
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(303)
			while(((_g < strArray->length))){
				HX_STACK_LINE(303)
				::String str = strArray->__get(_g);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(303)
				++(_g);
				HX_STACK_LINE(305)
				iArray->push(::Std_obj::parseInt(str));
			}
		}
		HX_STACK_LINE(307)
		return iArray;
	}
	HX_STACK_LINE(309)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toIntArray,return )

Array< Float > FlxStringUtil_obj::toFloatArray( ::String Data){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","toFloatArray",0xcff15c3b,"flixel.util.FlxStringUtil.toFloatArray","flixel/util/FlxStringUtil.hx",319,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_LINE(320)
	if (((bool((Data != null())) && bool((Data != HX_CSTRING("")))))){
		HX_STACK_LINE(322)
		Array< ::String > strArray = Data.split(HX_CSTRING(","));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(323)
		Array< Float > fArray = Array_obj< Float >::__new();		HX_STACK_VAR(fArray,"fArray");
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(324)
			while(((_g < strArray->length))){
				HX_STACK_LINE(324)
				::String str = strArray->__get(_g);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(324)
				++(_g);
				HX_STACK_LINE(326)
				fArray->push(::Std_obj::parseFloat(str));
			}
		}
		HX_STACK_LINE(328)
		return fArray;
	}
	HX_STACK_LINE(330)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toFloatArray,return )

::String FlxStringUtil_obj::arrayToCSV( Array< int > Data,int Width,hx::Null< bool >  __o_Invert){
bool Invert = __o_Invert.Default(false);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","arrayToCSV",0xd181e275,"flixel.util.FlxStringUtil.arrayToCSV","flixel/util/FlxStringUtil.hx",342,0x4e012e33)
	HX_STACK_ARG(Data,"Data")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Invert,"Invert")
{
		HX_STACK_LINE(343)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(344)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(345)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(346)
		int Height = ::Std_obj::_int((Float(Data->length) / Float(Width)));		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(347)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(348)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(350)
		while(((row < Height))){
			HX_STACK_LINE(352)
			column = (int)0;
			HX_STACK_LINE(354)
			while(((column < Width))){
				HX_STACK_LINE(356)
				index = Data->__get(offset);
				HX_STACK_LINE(358)
				if ((Invert)){
					HX_STACK_LINE(360)
					if (((index == (int)0))){
						HX_STACK_LINE(362)
						index = (int)1;
					}
					else{
						HX_STACK_LINE(364)
						if (((index == (int)1))){
							HX_STACK_LINE(366)
							index = (int)0;
						}
					}
				}
				HX_STACK_LINE(370)
				if (((column == (int)0))){
					HX_STACK_LINE(372)
					if (((row == (int)0))){
						HX_STACK_LINE(374)
						hx::AddEq(csv,index);
					}
					else{
						HX_STACK_LINE(378)
						hx::AddEq(csv,(HX_CSTRING("\n") + index));
					}
				}
				else{
					HX_STACK_LINE(383)
					hx::AddEq(csv,(HX_CSTRING(", ") + index));
				}
				HX_STACK_LINE(386)
				(column)++;
				HX_STACK_LINE(387)
				(offset)++;
			}
			HX_STACK_LINE(390)
			(row)++;
		}
		HX_STACK_LINE(393)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,arrayToCSV,return )

::String FlxStringUtil_obj::bitmapToCSV( ::openfl::_v2::display::BitmapData Bitmap,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale,Array< int > ColorMap){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","bitmapToCSV",0x6fd72f79,"flixel.util.FlxStringUtil.bitmapToCSV","flixel/util/FlxStringUtil.hx",407,0x4e012e33)
	HX_STACK_ARG(Bitmap,"Bitmap")
	HX_STACK_ARG(Invert,"Invert")
	HX_STACK_ARG(Scale,"Scale")
	HX_STACK_ARG(ColorMap,"ColorMap")
{
		HX_STACK_LINE(408)
		if (((Scale < (int)1))){
			HX_STACK_LINE(410)
			Scale = (int)1;
		}
		HX_STACK_LINE(414)
		if (((Scale > (int)1))){
			HX_STACK_LINE(416)
			::openfl::_v2::display::BitmapData bd = Bitmap;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(417)
			int _g = (Bitmap->get_width() * Scale);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(417)
			Bitmap = ::openfl::_v2::display::BitmapData_obj::__new(_g,(Bitmap->get_height() * Scale),null(),null(),null());
			HX_STACK_LINE(440)
			::openfl::_v2::geom::Matrix mtx = ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mtx,"mtx");
			HX_STACK_LINE(441)
			mtx->scale(Scale,Scale);
			HX_STACK_LINE(442)
			Bitmap->draw(bd,mtx,null(),null(),null(),null());
		}
		HX_STACK_LINE(447)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(448)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(449)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(450)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(451)
		int bitmapWidth = Bitmap->get_width();		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(452)
		int bitmapHeight = Bitmap->get_height();		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(454)
		while(((row < bitmapHeight))){
			HX_STACK_LINE(456)
			column = (int)0;
			HX_STACK_LINE(458)
			while(((column < bitmapWidth))){
				HX_STACK_LINE(461)
				pixel = Bitmap->getPixel(column,row);
				HX_STACK_LINE(463)
				if (((ColorMap != null()))){
					HX_STACK_LINE(465)
					pixel = ColorMap->indexOf(pixel,null());
				}
				else{
					HX_STACK_LINE(467)
					if (((bool((bool(Invert) && bool((pixel > (int)0)))) || bool((bool(!(Invert)) && bool((pixel == (int)0))))))){
						HX_STACK_LINE(469)
						pixel = (int)1;
					}
					else{
						HX_STACK_LINE(473)
						pixel = (int)0;
					}
				}
				HX_STACK_LINE(477)
				if (((column == (int)0))){
					HX_STACK_LINE(479)
					if (((row == (int)0))){
						HX_STACK_LINE(481)
						hx::AddEq(csv,pixel);
					}
					else{
						HX_STACK_LINE(485)
						hx::AddEq(csv,(HX_CSTRING("\n") + pixel));
					}
				}
				else{
					HX_STACK_LINE(490)
					hx::AddEq(csv,(HX_CSTRING(", ") + pixel));
				}
				HX_STACK_LINE(493)
				(column)++;
			}
			HX_STACK_LINE(496)
			(row)++;
		}
		HX_STACK_LINE(499)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxStringUtil_obj,bitmapToCSV,return )

::String FlxStringUtil_obj::imageToCSV( Dynamic ImageFile,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_FRAME("flixel.util.FlxStringUtil","imageToCSV",0xe3229173,"flixel.util.FlxStringUtil.imageToCSV","flixel/util/FlxStringUtil.hx",512,0x4e012e33)
	HX_STACK_ARG(ImageFile,"ImageFile")
	HX_STACK_ARG(Invert,"Invert")
	HX_STACK_ARG(Scale,"Scale")
{
		HX_STACK_LINE(513)
		::openfl::_v2::display::BitmapData tempBitmapData;		HX_STACK_VAR(tempBitmapData,"tempBitmapData");
		HX_STACK_LINE(515)
		if ((::Std_obj::is(ImageFile,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(517)
			::String id = ImageFile;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(517)
			tempBitmapData = ::openfl::_v2::Assets_obj::getBitmapData(id,false);
		}
		else{
			HX_STACK_LINE(521)
			tempBitmapData = ::Type_obj::createInstance(ImageFile,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		HX_STACK_LINE(524)
		return ::flixel::util::FlxStringUtil_obj::bitmapToCSV(tempBitmapData,Invert,Scale,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,imageToCSV,return )

::String FlxStringUtil_obj::getDebugString( Array< ::Dynamic > LabelValuePairs){
	HX_STACK_FRAME("flixel.util.FlxStringUtil","getDebugString",0x47d891d1,"flixel.util.FlxStringUtil.getDebugString","flixel/util/FlxStringUtil.hx",534,0x4e012e33)
	HX_STACK_ARG(LabelValuePairs,"LabelValuePairs")
	HX_STACK_LINE(535)
	::String output = HX_CSTRING("(");		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(536)
	{
		HX_STACK_LINE(536)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(536)
		while(((_g < LabelValuePairs->length))){
			HX_STACK_LINE(536)
			::flixel::util::LabelValuePair pair = LabelValuePairs->__get(_g).StaticCast< ::flixel::util::LabelValuePair >();		HX_STACK_VAR(pair,"pair");
			HX_STACK_LINE(536)
			++(_g);
			HX_STACK_LINE(538)
			hx::AddEq(output,(pair->label + HX_CSTRING(": ")));
			HX_STACK_LINE(539)
			Dynamic value = pair->value;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(540)
			if ((::Std_obj::is(value,hx::ClassOf< ::Float >()))){
				HX_STACK_LINE(542)
				value = ::flixel::util::FlxMath_obj::roundDecimal(value,::flixel::FlxG_obj::debugger->precision);
			}
			HX_STACK_LINE(544)
			hx::AddEq(output,(::Std_obj::string(value) + HX_CSTRING(" | ")));
			HX_STACK_LINE(545)
			::flixel::util::LabelValuePair_obj::_pool->put(pair);
		}
	}
	HX_STACK_LINE(548)
	output = ::StringTools_obj::trim(output.substr((int)0,(output.length - (int)2)));
	HX_STACK_LINE(549)
	return (output + HX_CSTRING(")"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDebugString,return )


FlxStringUtil_obj::FlxStringUtil_obj()
{
}

Dynamic FlxStringUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getDomain") ) { return getDomain_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"formatTime") ) { return formatTime_dyn(); }
		if (HX_FIELD_EQ(inName,"htmlFormat") ) { return htmlFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"toIntArray") ) { return toIntArray_dyn(); }
		if (HX_FIELD_EQ(inName,"arrayToCSV") ) { return arrayToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"imageToCSV") ) { return imageToCSV_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"formatTicks") ) { return formatTicks_dyn(); }
		if (HX_FIELD_EQ(inName,"formatArray") ) { return formatArray_dyn(); }
		if (HX_FIELD_EQ(inName,"formatMoney") ) { return formatMoney_dyn(); }
		if (HX_FIELD_EQ(inName,"formatBytes") ) { return formatBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"bitmapToCSV") ) { return bitmapToCSV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filterDigits") ) { return filterDigits_dyn(); }
		if (HX_FIELD_EQ(inName,"toFloatArray") ) { return toFloatArray_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sameClassName") ) { return sameClassName_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDebugString") ) { return getDebugString_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"formatStringMap") ) { return formatStringMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxStringUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxStringUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("formatTicks"),
	HX_CSTRING("formatTime"),
	HX_CSTRING("formatArray"),
	HX_CSTRING("formatStringMap"),
	HX_CSTRING("formatMoney"),
	HX_CSTRING("formatBytes"),
	HX_CSTRING("filterDigits"),
	HX_CSTRING("htmlFormat"),
	HX_CSTRING("getDomain"),
	HX_CSTRING("sameClassName"),
	HX_CSTRING("toIntArray"),
	HX_CSTRING("toFloatArray"),
	HX_CSTRING("arrayToCSV"),
	HX_CSTRING("bitmapToCSV"),
	HX_CSTRING("imageToCSV"),
	HX_CSTRING("getDebugString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

#endif

Class FlxStringUtil_obj::__mClass;

void FlxStringUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxStringUtil"), hx::TCanCast< FlxStringUtil_obj> ,sStaticFields,sMemberFields,
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

void FlxStringUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
