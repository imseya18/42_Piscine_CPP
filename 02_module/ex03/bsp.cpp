#include "Fixed.hpp"
#include "Point.hpp"
#include <cstdlib>

Fixed	area(Point const a, Point const b, Point const c)
{
	return Fixed(std::abs((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
				 + b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())
			 	 	+ c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2 ));
}
bool bsp( Point const a, Point const b, Point const c, Point const point)
{

	Fixed area1 = area(a, b, point);
	Fixed area2 = area(a, c, point);
	Fixed area3 = area(b, c, point);
	Fixed big 	= area(a, b, c);

	if ((big - (area1 + area2 + area3)) == 0 && area1 != 0 && area2 != 0 && area3 != 0)
		return (true);
	return (false);
}