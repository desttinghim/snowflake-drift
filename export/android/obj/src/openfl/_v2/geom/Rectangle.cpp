#include <hxcpp.h>

#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace openfl{
namespace _v2{
namespace geom{

Void Rectangle_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
HX_STACK_FRAME("openfl._v2.geom.Rectangle","new",0xf68f97e0,"openfl._v2.geom.Rectangle.new","openfl/_v2/geom/Rectangle.hx",20,0xceeaba4f)

HX_STACK_ARG(__o_x,"x")

HX_STACK_ARG(__o_y,"y")

HX_STACK_ARG(__o_width,"width")

HX_STACK_ARG(__o_height,"height")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	HX_STACK_LINE(22)
	this->x = x;
	HX_STACK_LINE(23)
	this->y = y;
	HX_STACK_LINE(24)
	this->width = width;
	HX_STACK_LINE(25)
	this->height = height;
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(__o_x,__o_y,__o_width,__o_height);
	return result;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::openfl::_v2::geom::Rectangle Rectangle_obj::clone( ){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","clone",0x1abfbadd,"openfl._v2.geom.Rectangle.clone","openfl/_v2/geom/Rectangle.hx",32,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return ::openfl::_v2::geom::Rectangle_obj::__new(this->x,this->y,this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::contains( Float x,Float y){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","contains",0xf2dc629f,"openfl._v2.geom.Rectangle.contains","openfl/_v2/geom/Rectangle.hx",39,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(39)
	if (((  (((bool((x >= this->x)) && bool((y >= this->y))))) ? bool((x < this->get_right())) : bool(false) ))){
		HX_STACK_LINE(39)
		return (y < this->get_bottom());
	}
	else{
		HX_STACK_LINE(39)
		return false;
	}
	HX_STACK_LINE(39)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains,return )

bool Rectangle_obj::containsPoint( ::openfl::_v2::geom::Point point){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","containsPoint",0x157be131,"openfl._v2.geom.Rectangle.containsPoint","openfl/_v2/geom/Rectangle.hx",46,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(46)
	return this->contains(point->x,point->y);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::containsRect( ::openfl::_v2::geom::Rectangle rect){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","containsRect",0x98ec1763,"openfl._v2.geom.Rectangle.containsRect","openfl/_v2/geom/Rectangle.hx",53,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(53)
	if (((bool((rect->width <= (int)0)) || bool((rect->height <= (int)0))))){
		struct _Function_2_1{
			inline static bool Block( ::openfl::_v2::geom::Rectangle_obj *__this,::openfl::_v2::geom::Rectangle &rect){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_v2/geom/Rectangle.hx",55,0xceeaba4f)
				{
					HX_STACK_LINE(55)
					Float _g = rect->get_right();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(55)
					return (_g < __this->get_right());
				}
				return null();
			}
		};
		HX_STACK_LINE(55)
		if (((  (((bool((rect->x > this->x)) && bool((rect->y > this->y))))) ? bool(_Function_2_1::Block(this,rect)) : bool(false) ))){
			HX_STACK_LINE(55)
			Float _g1 = rect->get_bottom();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(55)
			return (_g1 < this->get_bottom());
		}
		else{
			HX_STACK_LINE(55)
			return false;
		}
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ::openfl::_v2::geom::Rectangle_obj *__this,::openfl::_v2::geom::Rectangle &rect){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_v2/geom/Rectangle.hx",59,0xceeaba4f)
				{
					HX_STACK_LINE(59)
					Float _g2 = rect->get_right();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(59)
					return (_g2 <= __this->get_right());
				}
				return null();
			}
		};
		HX_STACK_LINE(59)
		if (((  (((bool((rect->x >= this->x)) && bool((rect->y >= this->y))))) ? bool(_Function_2_1::Block(this,rect)) : bool(false) ))){
			HX_STACK_LINE(59)
			Float _g3 = rect->get_bottom();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(59)
			return (_g3 <= this->get_bottom());
		}
		else{
			HX_STACK_LINE(59)
			return false;
		}
	}
	HX_STACK_LINE(53)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

Void Rectangle_obj::copyFrom( ::openfl::_v2::geom::Rectangle sourceRect){
{
		HX_STACK_FRAME("openfl._v2.geom.Rectangle","copyFrom",0x8ec2143f,"openfl._v2.geom.Rectangle.copyFrom","openfl/_v2/geom/Rectangle.hx",66,0xceeaba4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_LINE(68)
		this->x = sourceRect->x;
		HX_STACK_LINE(69)
		this->y = sourceRect->y;
		HX_STACK_LINE(70)
		this->width = sourceRect->width;
		HX_STACK_LINE(71)
		this->height = sourceRect->height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,copyFrom,(void))

bool Rectangle_obj::equals( ::openfl::_v2::geom::Rectangle toCompare){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","equals",0xfea8d6bf,"openfl._v2.geom.Rectangle.equals","openfl/_v2/geom/Rectangle.hx",78,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_LINE(78)
	return (bool((bool((bool((this->x == toCompare->x)) && bool((this->y == toCompare->y)))) && bool((this->width == toCompare->width)))) && bool((this->height == toCompare->height)));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

Void Rectangle_obj::extendBounds( ::openfl::_v2::geom::Rectangle r){
{
		HX_STACK_FRAME("openfl._v2.geom.Rectangle","extendBounds",0x1355f46f,"openfl._v2.geom.Rectangle.extendBounds","openfl/_v2/geom/Rectangle.hx",83,0xceeaba4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(85)
		Float dx = (this->x - r->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(86)
		if (((dx > (int)0))){
			HX_STACK_LINE(88)
			hx::SubEq(this->x,dx);
			HX_STACK_LINE(89)
			hx::AddEq(this->width,dx);
		}
		HX_STACK_LINE(93)
		Float dy = (this->y - r->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(94)
		if (((dy > (int)0))){
			HX_STACK_LINE(96)
			hx::SubEq(this->y,dy);
			HX_STACK_LINE(97)
			hx::AddEq(this->height,dy);
		}
		HX_STACK_LINE(101)
		Float _g = r->get_right();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		if (((_g > this->get_right()))){
			HX_STACK_LINE(103)
			this->set_right(r->get_right());
		}
		HX_STACK_LINE(107)
		Float _g1 = r->get_bottom();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		if (((_g1 > this->get_bottom()))){
			HX_STACK_LINE(109)
			this->set_bottom(r->get_bottom());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,extendBounds,(void))

Void Rectangle_obj::inflate( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl._v2.geom.Rectangle","inflate",0xac912407,"openfl._v2.geom.Rectangle.inflate","openfl/_v2/geom/Rectangle.hx",116,0xceeaba4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(118)
		hx::SubEq(this->x,dx);
		HX_STACK_LINE(119)
		hx::SubEq(this->y,dy);
		HX_STACK_LINE(120)
		hx::AddEq(this->width,(dx * (int)2));
		HX_STACK_LINE(121)
		hx::AddEq(this->height,(dy * (int)2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

Void Rectangle_obj::inflatePoint( ::openfl::_v2::geom::Point point){
{
		HX_STACK_FRAME("openfl._v2.geom.Rectangle","inflatePoint",0x250906c9,"openfl._v2.geom.Rectangle.inflatePoint","openfl/_v2/geom/Rectangle.hx",128,0xceeaba4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(128)
		this->inflate(point->x,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,inflatePoint,(void))

::openfl::_v2::geom::Rectangle Rectangle_obj::intersection( ::openfl::_v2::geom::Rectangle toIntersect){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","intersection",0x7b30eac9,"openfl._v2.geom.Rectangle.intersection","openfl/_v2/geom/Rectangle.hx",133,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(135)
	Float x0;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(135)
	if (((this->x < toIntersect->x))){
		HX_STACK_LINE(135)
		x0 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(135)
		x0 = this->x;
	}
	HX_STACK_LINE(136)
	Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(136)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(136)
	if (((_g > toIntersect->get_right()))){
		HX_STACK_LINE(136)
		x1 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(136)
		x1 = this->get_right();
	}
	HX_STACK_LINE(137)
	if (((x1 <= x0))){
		HX_STACK_LINE(139)
		return ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(143)
	Float y0;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(143)
	if (((this->y < toIntersect->y))){
		HX_STACK_LINE(143)
		y0 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(143)
		y0 = this->y;
	}
	HX_STACK_LINE(144)
	Float _g1 = this->get_bottom();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(144)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(144)
	if (((_g1 > toIntersect->get_bottom()))){
		HX_STACK_LINE(144)
		y1 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(144)
		y1 = this->get_bottom();
	}
	HX_STACK_LINE(145)
	if (((y1 <= y0))){
		HX_STACK_LINE(147)
		return ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
	}
	HX_STACK_LINE(151)
	return ::openfl::_v2::geom::Rectangle_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersection,return )

bool Rectangle_obj::intersects( ::openfl::_v2::geom::Rectangle toIntersect){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","intersects",0xcaffeb34,"openfl._v2.geom.Rectangle.intersects","openfl/_v2/geom/Rectangle.hx",156,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(158)
	Float x0;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(158)
	if (((this->x < toIntersect->x))){
		HX_STACK_LINE(158)
		x0 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(158)
		x0 = this->x;
	}
	HX_STACK_LINE(159)
	Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(159)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(159)
	if (((_g > toIntersect->get_right()))){
		HX_STACK_LINE(159)
		x1 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(159)
		x1 = this->get_right();
	}
	HX_STACK_LINE(160)
	if (((x1 <= x0))){
		HX_STACK_LINE(162)
		return false;
	}
	HX_STACK_LINE(166)
	Float y0;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(166)
	if (((this->y < toIntersect->y))){
		HX_STACK_LINE(166)
		y0 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(166)
		y0 = this->y;
	}
	HX_STACK_LINE(167)
	Float _g1 = this->get_bottom();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(167)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(167)
	if (((_g1 > toIntersect->get_bottom()))){
		HX_STACK_LINE(167)
		y1 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(167)
		y1 = this->get_bottom();
	}
	HX_STACK_LINE(168)
	return (y1 > y0);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

bool Rectangle_obj::isEmpty( ){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","isEmpty",0xacd565c3,"openfl._v2.geom.Rectangle.isEmpty","openfl/_v2/geom/Rectangle.hx",175,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	return (bool((this->width <= (int)0)) || bool((this->height <= (int)0)));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

Void Rectangle_obj::offset( Float dx,Float dy){
{
		HX_STACK_FRAME("openfl._v2.geom.Rectangle","offset",0x9ef58013,"openfl._v2.geom.Rectangle.offset","openfl/_v2/geom/Rectangle.hx",180,0xceeaba4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(182)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(183)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,offset,(void))

Void Rectangle_obj::offsetPoint( ::openfl::_v2::geom::Point point){
{
		HX_STACK_FRAME("openfl._v2.geom.Rectangle","offsetPoint",0xa99f7f3d,"openfl._v2.geom.Rectangle.offsetPoint","openfl/_v2/geom/Rectangle.hx",188,0xceeaba4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(190)
		hx::AddEq(this->x,point->x);
		HX_STACK_LINE(191)
		hx::AddEq(this->y,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,offsetPoint,(void))

Void Rectangle_obj::setEmpty( ){
{
		HX_STACK_FRAME("openfl._v2.geom.Rectangle","setEmpty",0x446fac0b,"openfl._v2.geom.Rectangle.setEmpty","openfl/_v2/geom/Rectangle.hx",196,0xceeaba4f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		this->x = (int)0;
		HX_STACK_LINE(199)
		this->y = (int)0;
		HX_STACK_LINE(200)
		this->width = (int)0;
		HX_STACK_LINE(201)
		this->height = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,setEmpty,(void))

Void Rectangle_obj::setTo( Float xa,Float ya,Float widtha,Float heighta){
{
		HX_STACK_FRAME("openfl._v2.geom.Rectangle","setTo",0x4c8c393d,"openfl._v2.geom.Rectangle.setTo","openfl/_v2/geom/Rectangle.hx",206,0xceeaba4f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_ARG(widtha,"widtha")
		HX_STACK_ARG(heighta,"heighta")
		HX_STACK_LINE(208)
		this->x = xa;
		HX_STACK_LINE(209)
		this->y = ya;
		HX_STACK_LINE(210)
		this->width = widtha;
		HX_STACK_LINE(211)
		this->height = heighta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,setTo,(void))

::String Rectangle_obj::toString( ){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","toString",0xfecfd92c,"openfl._v2.geom.Rectangle.toString","openfl/_v2/geom/Rectangle.hx",218,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	return ((((((((HX_CSTRING("(x=") + this->x) + HX_CSTRING(", y=")) + this->y) + HX_CSTRING(", width=")) + this->width) + HX_CSTRING(", height=")) + this->height) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )

::openfl::_v2::geom::Rectangle Rectangle_obj::transform( ::openfl::_v2::geom::Matrix m){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","transform",0x141994ec,"openfl._v2.geom.Rectangle.transform","openfl/_v2/geom/Rectangle.hx",223,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(225)
	Float tx0 = ((m->a * this->x) + (m->c * this->y));		HX_STACK_VAR(tx0,"tx0");
	HX_STACK_LINE(226)
	Float tx1 = tx0;		HX_STACK_VAR(tx1,"tx1");
	HX_STACK_LINE(227)
	Float ty0 = ((m->b * this->x) + (m->d * this->y));		HX_STACK_VAR(ty0,"ty0");
	HX_STACK_LINE(228)
	Float ty1 = tx0;		HX_STACK_VAR(ty1,"ty1");
	HX_STACK_LINE(230)
	Float tx = ((m->a * ((this->x + this->width))) + (m->c * this->y));		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(231)
	Float ty = ((m->b * ((this->x + this->width))) + (m->d * this->y));		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(232)
	if (((tx < tx0))){
		HX_STACK_LINE(232)
		tx0 = tx;
	}
	HX_STACK_LINE(233)
	if (((ty < ty0))){
		HX_STACK_LINE(233)
		ty0 = ty;
	}
	HX_STACK_LINE(234)
	if (((tx > tx1))){
		HX_STACK_LINE(234)
		tx1 = tx;
	}
	HX_STACK_LINE(235)
	if (((ty > ty1))){
		HX_STACK_LINE(235)
		ty1 = ty;
	}
	HX_STACK_LINE(237)
	tx = ((m->a * ((this->x + this->width))) + (m->c * ((this->y + this->height))));
	HX_STACK_LINE(238)
	ty = ((m->b * ((this->x + this->width))) + (m->d * ((this->y + this->height))));
	HX_STACK_LINE(239)
	if (((tx < tx0))){
		HX_STACK_LINE(239)
		tx0 = tx;
	}
	HX_STACK_LINE(240)
	if (((ty < ty0))){
		HX_STACK_LINE(240)
		ty0 = ty;
	}
	HX_STACK_LINE(241)
	if (((tx > tx1))){
		HX_STACK_LINE(241)
		tx1 = tx;
	}
	HX_STACK_LINE(242)
	if (((ty > ty1))){
		HX_STACK_LINE(242)
		ty1 = ty;
	}
	HX_STACK_LINE(244)
	tx = ((m->a * this->x) + (m->c * ((this->y + this->height))));
	HX_STACK_LINE(245)
	ty = ((m->b * this->x) + (m->d * ((this->y + this->height))));
	HX_STACK_LINE(246)
	if (((tx < tx0))){
		HX_STACK_LINE(246)
		tx0 = tx;
	}
	HX_STACK_LINE(247)
	if (((ty < ty0))){
		HX_STACK_LINE(247)
		ty0 = ty;
	}
	HX_STACK_LINE(248)
	if (((tx > tx1))){
		HX_STACK_LINE(248)
		tx1 = tx;
	}
	HX_STACK_LINE(249)
	if (((ty > ty1))){
		HX_STACK_LINE(249)
		ty1 = ty;
	}
	HX_STACK_LINE(251)
	return ::openfl::_v2::geom::Rectangle_obj::__new((tx0 + m->tx),(ty0 + m->ty),(tx1 - tx0),(ty1 - ty0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,transform,return )

::openfl::_v2::geom::Rectangle Rectangle_obj::_union( ::openfl::_v2::geom::Rectangle toUnion){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","union",0x79440c8f,"openfl._v2.geom.Rectangle.union","openfl/_v2/geom/Rectangle.hx",256,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toUnion,"toUnion")
	HX_STACK_LINE(258)
	Float x0;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(258)
	if (((this->x > toUnion->x))){
		HX_STACK_LINE(258)
		x0 = toUnion->x;
	}
	else{
		HX_STACK_LINE(258)
		x0 = this->x;
	}
	HX_STACK_LINE(259)
	Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(259)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(259)
	if (((_g < toUnion->get_right()))){
		HX_STACK_LINE(259)
		x1 = toUnion->get_right();
	}
	else{
		HX_STACK_LINE(259)
		x1 = this->get_right();
	}
	HX_STACK_LINE(260)
	Float y0;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(260)
	if (((this->y > toUnion->y))){
		HX_STACK_LINE(260)
		y0 = toUnion->y;
	}
	else{
		HX_STACK_LINE(260)
		y0 = this->y;
	}
	HX_STACK_LINE(261)
	Float _g1 = this->get_bottom();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(261)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(261)
	if (((_g1 < toUnion->get_bottom()))){
		HX_STACK_LINE(261)
		y1 = toUnion->get_bottom();
	}
	else{
		HX_STACK_LINE(261)
		y1 = this->get_bottom();
	}
	HX_STACK_LINE(262)
	return ::openfl::_v2::geom::Rectangle_obj::__new(x0,y0,(x1 - x0),(y1 - y0));
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,_union,return )

Float Rectangle_obj::get_bottom( ){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","get_bottom",0x3d147f34,"openfl._v2.geom.Rectangle.get_bottom","openfl/_v2/geom/Rectangle.hx",274,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(274)
	return (this->y + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom( Float value){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","set_bottom",0x40921da8,"openfl._v2.geom.Rectangle.set_bottom","openfl/_v2/geom/Rectangle.hx",275,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(275)
	this->height = (value - this->y);
	HX_STACK_LINE(275)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

::openfl::_v2::geom::Point Rectangle_obj::get_bottomRight( ){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","get_bottomRight",0x745f6008,"openfl._v2.geom.Rectangle.get_bottomRight","openfl/_v2/geom/Rectangle.hx",276,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(276)
	return ::openfl::_v2::geom::Point_obj::__new((this->x + this->width),(this->y + this->height));
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottomRight,return )

::openfl::_v2::geom::Point Rectangle_obj::set_bottomRight( ::openfl::_v2::geom::Point value){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","set_bottomRight",0x702add14,"openfl._v2.geom.Rectangle.set_bottomRight","openfl/_v2/geom/Rectangle.hx",277,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(277)
	this->width = (value->x - this->x);
	HX_STACK_LINE(277)
	this->height = (value->y - this->y);
	HX_STACK_LINE(277)
	return value->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottomRight,return )

Float Rectangle_obj::get_left( ){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","get_left",0x8dcbcc10,"openfl._v2.geom.Rectangle.get_left","openfl/_v2/geom/Rectangle.hx",278,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_left,return )

Float Rectangle_obj::set_left( Float value){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","set_left",0x3c292584,"openfl._v2.geom.Rectangle.set_left","openfl/_v2/geom/Rectangle.hx",279,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(279)
	hx::SubEq(this->width,(value - this->x));
	HX_STACK_LINE(279)
	this->x = value;
	HX_STACK_LINE(279)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_left,return )

Float Rectangle_obj::get_right( ){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","get_right",0xfb93cfb3,"openfl._v2.geom.Rectangle.get_right","openfl/_v2/geom/Rectangle.hx",280,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	return (this->x + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right( Float value){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","set_right",0xdee4bbbf,"openfl._v2.geom.Rectangle.set_right","openfl/_v2/geom/Rectangle.hx",281,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(281)
	this->width = (value - this->x);
	HX_STACK_LINE(281)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

::openfl::_v2::geom::Point Rectangle_obj::get_size( ){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","get_size",0x926f64ca,"openfl._v2.geom.Rectangle.get_size","openfl/_v2/geom/Rectangle.hx",282,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(282)
	return ::openfl::_v2::geom::Point_obj::__new(this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_size,return )

::openfl::_v2::geom::Point Rectangle_obj::set_size( ::openfl::_v2::geom::Point value){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","set_size",0x40ccbe3e,"openfl._v2.geom.Rectangle.set_size","openfl/_v2/geom/Rectangle.hx",283,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(283)
	this->width = value->x;
	HX_STACK_LINE(283)
	this->height = value->y;
	HX_STACK_LINE(283)
	return value->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_size,return )

Float Rectangle_obj::get_top( ){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","get_top",0xc742b6ac,"openfl._v2.geom.Rectangle.get_top","openfl/_v2/geom/Rectangle.hx",284,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_top,return )

Float Rectangle_obj::set_top( Float value){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","set_top",0xba4447b8,"openfl._v2.geom.Rectangle.set_top","openfl/_v2/geom/Rectangle.hx",285,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(285)
	hx::SubEq(this->height,(value - this->y));
	HX_STACK_LINE(285)
	this->y = value;
	HX_STACK_LINE(285)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_top,return )

::openfl::_v2::geom::Point Rectangle_obj::get_topLeft( ){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","get_topLeft",0xb94ab0d3,"openfl._v2.geom.Rectangle.get_topLeft","openfl/_v2/geom/Rectangle.hx",286,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	return ::openfl::_v2::geom::Point_obj::__new(this->x,this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_topLeft,return )

::openfl::_v2::geom::Point Rectangle_obj::set_topLeft( ::openfl::_v2::geom::Point value){
	HX_STACK_FRAME("openfl._v2.geom.Rectangle","set_topLeft",0xc3b7b7df,"openfl._v2.geom.Rectangle.set_topLeft","openfl/_v2/geom/Rectangle.hx",287,0xceeaba4f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(287)
	this->x = value->x;
	HX_STACK_LINE(287)
	this->y = value->y;
	HX_STACK_LINE(287)
	return value->clone();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_topLeft,return )


Rectangle_obj::Rectangle_obj()
{
}

Dynamic Rectangle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return get_left(); }
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return get_right(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return get_bottom(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { return get_topLeft(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setEmpty") ) { return setEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { return get_bottomRight(); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return offsetPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_topLeft") ) { return get_topLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_topLeft") ) { return set_topLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return containsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"extendBounds") ) { return extendBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"inflatePoint") ) { return inflatePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bottomRight") ) { return get_bottomRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottomRight") ) { return set_bottomRight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return set_left(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return set_bottom(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { return set_topLeft(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { return set_bottomRight(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("bottomRight"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("topLeft"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("clone"),
	HX_CSTRING("contains"),
	HX_CSTRING("containsPoint"),
	HX_CSTRING("containsRect"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("equals"),
	HX_CSTRING("extendBounds"),
	HX_CSTRING("inflate"),
	HX_CSTRING("inflatePoint"),
	HX_CSTRING("intersection"),
	HX_CSTRING("intersects"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("offset"),
	HX_CSTRING("offsetPoint"),
	HX_CSTRING("setEmpty"),
	HX_CSTRING("setTo"),
	HX_CSTRING("toString"),
	HX_CSTRING("transform"),
	HX_CSTRING("union"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("set_bottom"),
	HX_CSTRING("get_bottomRight"),
	HX_CSTRING("set_bottomRight"),
	HX_CSTRING("get_left"),
	HX_CSTRING("set_left"),
	HX_CSTRING("get_right"),
	HX_CSTRING("set_right"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_size"),
	HX_CSTRING("get_top"),
	HX_CSTRING("set_top"),
	HX_CSTRING("get_topLeft"),
	HX_CSTRING("set_topLeft"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.geom.Rectangle"), hx::TCanCast< Rectangle_obj> ,sStaticFields,sMemberFields,
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

void Rectangle_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _v2
} // end namespace geom
