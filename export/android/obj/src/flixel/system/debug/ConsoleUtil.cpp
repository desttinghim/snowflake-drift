#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_system_debug_ConsoleUtil
#include <flixel/system/debug/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void ConsoleUtil_obj::__construct()
{
	return null();
}

//ConsoleUtil_obj::~ConsoleUtil_obj() { }

Dynamic ConsoleUtil_obj::__CreateEmpty() { return  new ConsoleUtil_obj; }
hx::ObjectPtr< ConsoleUtil_obj > ConsoleUtil_obj::__new()
{  hx::ObjectPtr< ConsoleUtil_obj > result = new ConsoleUtil_obj();
	result->__construct();
	return result;}

Dynamic ConsoleUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleUtil_obj > result = new ConsoleUtil_obj();
	result->__construct();
	return result;}

Dynamic ConsoleUtil_obj::attemptToCreateInstance_flixel_FlxObject( ::String ClassName,::Class type,Array< ::String > Params){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","attemptToCreateInstance_flixel_FlxObject",0xd1869411,"flixel.system.debug.ConsoleUtil.attemptToCreateInstance_flixel_FlxObject","flixel/system/debug/ConsoleUtil.hx",91,0x3784f9ee)
	HX_STACK_ARG(ClassName,"ClassName")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(Params,"Params")
	HX_STACK_LINE(92)
	if (((Params == null()))){
		HX_STACK_LINE(93)
		Params = Array_obj< ::String >::__new();
	}
	HX_STACK_LINE(95)
	Dynamic obj = ::Type_obj::resolveClass(ClassName);		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(96)
	if ((!(::Reflect_obj::isObject(obj)))){
		HX_STACK_LINE(98)
		::flixel::FlxG_obj::log->advanced((ClassName + HX_CSTRING("' is not a valid class name. Try passing the full class path. Also make sure the class is being compiled.")),::flixel::system::debug::LogStyle_obj::ERROR,true);
		HX_STACK_LINE(99)
		return null();
	}
	HX_STACK_LINE(102)
	Dynamic instance = ::Type_obj::createInstance(obj,Params);		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(104)
	if ((!(::Std_obj::is(instance,type)))){
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Dynamic Data = ((ClassName + HX_CSTRING("' is not a ")) + ::Type_obj::getClassName(type));		HX_STACK_VAR(Data,"Data");
			HX_STACK_LINE(106)
			::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
		}
		HX_STACK_LINE(107)
		return null();
	}
	HX_STACK_LINE(110)
	return instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ConsoleUtil_obj,attemptToCreateInstance_flixel_FlxObject,return )

Dynamic ConsoleUtil_obj::attemptToCreateInstance_flixel_FlxState( ::String ClassName,::Class type,Array< ::String > Params){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","attemptToCreateInstance_flixel_FlxState",0xf7aff0ff,"flixel.system.debug.ConsoleUtil.attemptToCreateInstance_flixel_FlxState","flixel/system/debug/ConsoleUtil.hx",91,0x3784f9ee)
	HX_STACK_ARG(ClassName,"ClassName")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(Params,"Params")
	HX_STACK_LINE(92)
	if (((Params == null()))){
		HX_STACK_LINE(93)
		Params = Array_obj< ::String >::__new();
	}
	HX_STACK_LINE(95)
	Dynamic obj = ::Type_obj::resolveClass(ClassName);		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(96)
	if ((!(::Reflect_obj::isObject(obj)))){
		HX_STACK_LINE(98)
		::flixel::FlxG_obj::log->advanced((ClassName + HX_CSTRING("' is not a valid class name. Try passing the full class path. Also make sure the class is being compiled.")),::flixel::system::debug::LogStyle_obj::ERROR,true);
		HX_STACK_LINE(99)
		return null();
	}
	HX_STACK_LINE(102)
	Dynamic instance = ::Type_obj::createInstance(obj,Params);		HX_STACK_VAR(instance,"instance");
	HX_STACK_LINE(104)
	if ((!(::Std_obj::is(instance,type)))){
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Dynamic Data = ((ClassName + HX_CSTRING("' is not a ")) + ::Type_obj::getClassName(type));		HX_STACK_VAR(Data,"Data");
			HX_STACK_LINE(106)
			::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
		}
		HX_STACK_LINE(107)
		return null();
	}
	HX_STACK_LINE(110)
	return instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ConsoleUtil_obj,attemptToCreateInstance_flixel_FlxState,return )

bool ConsoleUtil_obj::callFunction( Dynamic Function,Dynamic Args){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","callFunction",0x976d0913,"flixel.system.debug.ConsoleUtil.callFunction","flixel/system/debug/ConsoleUtil.hx",25,0x3784f9ee)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(Args,"Args")
	HX_STACK_LINE(25)
	try
	{
	HX_STACK_CATCHABLE(::openfl::errors::ArgumentError, 0);
	{
		HX_STACK_LINE(27)
		::Reflect_obj::callMethod(null(),Function,Args);
		HX_STACK_LINE(28)
		return true;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::openfl::errors::ArgumentError >() ){
			HX_STACK_BEGIN_CATCH
			::openfl::errors::ArgumentError e = __e;{
				HX_STACK_LINE(32)
				if (((e->errorID == (int)1063))){
					HX_STACK_LINE(37)
					int expected = ::Std_obj::parseInt(::flixel::util::FlxStringUtil_obj::filterDigits(e->message).charAt((int)4));		HX_STACK_VAR(expected,"expected");
					HX_STACK_LINE(40)
					if (((expected < Args->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(43)
						Dynamic shortenedArgs = Args->__Field(HX_CSTRING("slice"),true)((int)0,expected);		HX_STACK_VAR(shortenedArgs,"shortenedArgs");
						HX_STACK_LINE(45)
						::Reflect_obj::callMethod(null(),Function,shortenedArgs);
					}
					else{
						HX_STACK_LINE(50)
						::flixel::FlxG_obj::log->advanced(((((HX_CSTRING("Invalid number or parameters: ") + expected) + HX_CSTRING(" expected, ")) + Args->__Field(HX_CSTRING("length"),true)) + HX_CSTRING(" passed")),::flixel::system::debug::LogStyle_obj::ERROR,true);
						HX_STACK_LINE(51)
						return false;
					}
					HX_STACK_LINE(54)
					return true;
				}
				HX_STACK_LINE(57)
				return false;
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(25)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,callFunction,return )

Dynamic ConsoleUtil_obj::findCommand( ::String Alias,Dynamic Commands){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","findCommand",0x57346d75,"flixel.system.debug.ConsoleUtil.findCommand","flixel/system/debug/ConsoleUtil.hx",69,0x3784f9ee)
	HX_STACK_ARG(Alias,"Alias")
	HX_STACK_ARG(Commands,"Commands")
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		int _g = Commands->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		while(((_g1 < _g))){
			HX_STACK_LINE(70)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(72)
			if (((Commands->__GetItem(i)->__Field(HX_CSTRING("aliases"),true)->__Field(HX_CSTRING("indexOf"),true)(Alias,null()) != (int)-1))){
				HX_STACK_LINE(74)
				return Commands->__GetItem(i);
			}
		}
	}
	HX_STACK_LINE(77)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,findCommand,return )

Dynamic ConsoleUtil_obj::resolveObjectAndVariable( ::String ObjectAndVariable,Dynamic Object){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","resolveObjectAndVariable",0x216061e5,"flixel.system.debug.ConsoleUtil.resolveObjectAndVariable","flixel/system/debug/ConsoleUtil.hx",122,0x3784f9ee)
	HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
	HX_STACK_ARG(Object,"Object")
	HX_STACK_LINE(123)
	Array< ::String > searchArr = ObjectAndVariable.split(HX_CSTRING("."));		HX_STACK_VAR(searchArr,"searchArr");
	HX_STACK_LINE(125)
	if (((searchArr->length == (int)1))){
		struct _Function_2_1{
			inline static Dynamic Block( ::String &ObjectAndVariable,Dynamic &Object){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleUtil.hx",127,0x3784f9ee)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("object") , Object,false);
					__result->Add(HX_CSTRING("variableName") , ObjectAndVariable,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(127)
		return _Function_2_1::Block(ObjectAndVariable,Object);
	}
	HX_STACK_LINE(130)
	::String variableName = searchArr->join(HX_CSTRING("."));		HX_STACK_VAR(variableName,"variableName");
	HX_STACK_LINE(132)
	if ((!(::Reflect_obj::isObject(Object)))){
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			Dynamic Data;		HX_STACK_VAR(Data,"Data");
			struct _Function_3_1{
				inline static ::String Block( Dynamic &Object){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleUtil.hx",134,0x3784f9ee)
					{
						HX_STACK_LINE(134)
						::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(134)
						if ((::Std_obj::is(Object,hx::ClassOf< ::Class >()))){
							HX_STACK_LINE(134)
							cl = Object;
						}
						else{
							HX_STACK_LINE(134)
							cl = ::Type_obj::getClass(Object);
						}
						HX_STACK_LINE(134)
						::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(134)
						if (((s != null()))){
							HX_STACK_LINE(134)
							s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
							HX_STACK_LINE(134)
							s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
						}
						HX_STACK_LINE(134)
						return s;
					}
					return null();
				}
			};
			HX_STACK_LINE(134)
			Data = ((HX_CSTRING("'") + _Function_3_1::Block(Object)) + HX_CSTRING("' is not a valid Object"));
			HX_STACK_LINE(134)
			::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
		}
		HX_STACK_LINE(135)
		return null();
	}
	HX_STACK_LINE(139)
	int l = searchArr->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(140)
	Dynamic tempObj = Object;		HX_STACK_VAR(tempObj,"tempObj");
	HX_STACK_LINE(141)
	::String tempVarName = HX_CSTRING("");		HX_STACK_VAR(tempVarName,"tempVarName");
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(142)
		while(((_g < l))){
			HX_STACK_LINE(142)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(144)
			tempVarName = searchArr->__get(i);
			HX_STACK_LINE(146)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(148)
				if (((i < (l - (int)1)))){
					HX_STACK_LINE(150)
					tempObj = (  (((tempObj == null()))) ? Dynamic(null()) : Dynamic(tempObj->__Field(tempVarName,true)) );
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(155)
						{
							HX_STACK_LINE(155)
							Dynamic Data;		HX_STACK_VAR(Data,"Data");
							struct _Function_5_1{
								inline static ::String Block( Dynamic &tempObj){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleUtil.hx",155,0x3784f9ee)
									{
										HX_STACK_LINE(155)
										::Class cl;		HX_STACK_VAR(cl,"cl");
										HX_STACK_LINE(155)
										if ((::Std_obj::is(tempObj,hx::ClassOf< ::Class >()))){
											HX_STACK_LINE(155)
											cl = tempObj;
										}
										else{
											HX_STACK_LINE(155)
											cl = ::Type_obj::getClass(tempObj);
										}
										HX_STACK_LINE(155)
										::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
										HX_STACK_LINE(155)
										if (((s != null()))){
											HX_STACK_LINE(155)
											s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
											HX_STACK_LINE(155)
											s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
										}
										HX_STACK_LINE(155)
										return s;
									}
									return null();
								}
							};
							HX_STACK_LINE(155)
							Data = ((((HX_CSTRING("'") + _Function_5_1::Block(tempObj)) + HX_CSTRING("' does not have a field '")) + tempVarName) + HX_CSTRING("'"));
							HX_STACK_LINE(155)
							::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
						}
						HX_STACK_LINE(156)
						return null();
					}
				}
			}
		}
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tempVarName,Dynamic &tempObj){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleUtil.hx",160,0x3784f9ee)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("object") , tempObj,false);
				__result->Add(HX_CSTRING("variableName") , tempVarName,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(160)
	return _Function_1_1::Block(tempVarName,tempObj);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,resolveObjectAndVariable,return )

Dynamic ConsoleUtil_obj::resolveObjectAndVariableFromMap( ::String ObjectAndVariable,::haxe::ds::StringMap ObjectMap){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","resolveObjectAndVariableFromMap",0x374cd7ed,"flixel.system.debug.ConsoleUtil.resolveObjectAndVariableFromMap","flixel/system/debug/ConsoleUtil.hx",172,0x3784f9ee)
	HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
	HX_STACK_ARG(ObjectMap,"ObjectMap")
	HX_STACK_LINE(173)
	Array< ::String > splitString = ObjectAndVariable.split(HX_CSTRING("."));		HX_STACK_VAR(splitString,"splitString");
	HX_STACK_LINE(174)
	Dynamic object = ObjectMap->get(splitString->__get((int)0));		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(175)
	splitString->shift();
	HX_STACK_LINE(176)
	ObjectAndVariable = splitString->join(HX_CSTRING("."));
	HX_STACK_LINE(177)
	return ::flixel::system::debug::ConsoleUtil_obj::resolveObjectAndVariable(ObjectAndVariable,object);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,resolveObjectAndVariableFromMap,return )

Array< ::String > ConsoleUtil_obj::getInstanceFieldsAdvanced( ::Class cl,hx::Null< int >  __o_numSuperClassesToInclude){
int numSuperClassesToInclude = __o_numSuperClassesToInclude.Default(0);
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","getInstanceFieldsAdvanced",0x67fa5b89,"flixel.system.debug.ConsoleUtil.getInstanceFieldsAdvanced","flixel/system/debug/ConsoleUtil.hx",191,0x3784f9ee)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_ARG(numSuperClassesToInclude,"numSuperClassesToInclude")
{
		HX_STACK_LINE(192)
		Array< ::String > fields = ::Type_obj::getInstanceFields(cl);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(193)
		if (((numSuperClassesToInclude >= (int)0))){
			HX_STACK_LINE(195)
			::Class curClass = ::Type_obj::getSuperClass(cl);		HX_STACK_VAR(curClass,"curClass");
			HX_STACK_LINE(196)
			Array< ::Dynamic > superClasses = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(superClasses,"superClasses");
			HX_STACK_LINE(197)
			while(((curClass != null()))){
				HX_STACK_LINE(199)
				superClasses->push(curClass);
				HX_STACK_LINE(200)
				curClass = ::Type_obj::getSuperClass(curClass);
			}
			HX_STACK_LINE(203)
			superClasses->reverse();
			HX_STACK_LINE(205)
			if (((numSuperClassesToInclude > superClasses->length))){
				HX_STACK_LINE(206)
				numSuperClassesToInclude = superClasses->length;
			}
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(208)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(208)
				int _g = (superClasses->length - numSuperClassesToInclude);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(208)
				while(((_g1 < _g))){
					HX_STACK_LINE(208)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(210)
					Array< ::String > superFields = ::Type_obj::getInstanceFields(superClasses->__get(i).StaticCast< ::Class >());		HX_STACK_VAR(superFields,"superFields");
					HX_STACK_LINE(211)
					{
						HX_STACK_LINE(211)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(211)
						while(((_g2 < superFields->length))){
							HX_STACK_LINE(211)
							::String superField = superFields->__get(_g2);		HX_STACK_VAR(superField,"superField");
							HX_STACK_LINE(211)
							++(_g2);
							HX_STACK_LINE(213)
							if (((fields->indexOf(superField,null()) != (int)-1))){
								HX_STACK_LINE(214)
								fields->remove(superField);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(218)
		return fields;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConsoleUtil_obj,getInstanceFieldsAdvanced,return )

Dynamic ConsoleUtil_obj::parseBool( ::String s){
	HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","parseBool",0xb0a762a0,"flixel.system.debug.ConsoleUtil.parseBool","flixel/system/debug/ConsoleUtil.hx",230,0x3784f9ee)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(230)
	if (((s == HX_CSTRING("true")))){
		HX_STACK_LINE(231)
		return true;
	}
	else{
		HX_STACK_LINE(232)
		if (((s == HX_CSTRING("false")))){
			HX_STACK_LINE(233)
			return false;
		}
		else{
			HX_STACK_LINE(235)
			return null();
		}
	}
	HX_STACK_LINE(230)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,parseBool,return )

Void ConsoleUtil_obj::log( Dynamic Text){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleUtil","log",0x8132f4e7,"flixel.system.debug.ConsoleUtil.log","flixel/system/debug/ConsoleUtil.hx",245,0x3784f9ee)
		HX_STACK_ARG(Text,"Text")
		HX_STACK_LINE(245)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(Text)),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConsoleUtil_obj,log,(void))


ConsoleUtil_obj::ConsoleUtil_obj()
{
}

Dynamic ConsoleUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseBool") ) { return parseBool_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findCommand") ) { return findCommand_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callFunction") ) { return callFunction_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"resolveObjectAndVariable") ) { return resolveObjectAndVariable_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getInstanceFieldsAdvanced") ) { return getInstanceFieldsAdvanced_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"resolveObjectAndVariableFromMap") ) { return resolveObjectAndVariableFromMap_dyn(); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"attemptToCreateInstance_flixel_FlxState") ) { return attemptToCreateInstance_flixel_FlxState_dyn(); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"attemptToCreateInstance_flixel_FlxObject") ) { return attemptToCreateInstance_flixel_FlxObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConsoleUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("attemptToCreateInstance_flixel_FlxObject"),
	HX_CSTRING("attemptToCreateInstance_flixel_FlxState"),
	HX_CSTRING("callFunction"),
	HX_CSTRING("findCommand"),
	HX_CSTRING("resolveObjectAndVariable"),
	HX_CSTRING("resolveObjectAndVariableFromMap"),
	HX_CSTRING("getInstanceFieldsAdvanced"),
	HX_CSTRING("parseBool"),
	HX_CSTRING("log"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleUtil_obj::__mClass,"__mClass");
};

#endif

Class ConsoleUtil_obj::__mClass;

void ConsoleUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.ConsoleUtil"), hx::TCanCast< ConsoleUtil_obj> ,sStaticFields,sMemberFields,
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

void ConsoleUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
