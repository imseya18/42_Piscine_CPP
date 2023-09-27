#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{

}

Point::Point(Point const & src): _x(src._x), _y(src._y)
{

}

Point::Point(float const x, float const y): _x(x), _y(y)
{

}

Point &Point::operator=(Point const & rhs)
{
	(void)rhs;
	return *this;
}

Point::~Point()
{
	return ;
}

Fixed  Point::getX() const
{
	return this->_x;
}
Fixed  Point::getY() const
{
	return this->_y;
}

std::ostream &	operator<<(std::ostream & o, Point const & rhs)
{
	o << "x = " << rhs.getX() << " y = " << rhs.getY(); 
	return o;
}