#ifndef POINT_H
#define POINT_H

#pragma once

#include <string>
#include <iostream>
#include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(Point const & src);
		Point(float const x, float const y);
        ~Point();
		Fixed  getX() const; 
		Fixed  getY() const;
        Point &operator=(Point const & rhs);
    private:
		Fixed const _x;
		Fixed const _y;
};

std::ostream &	operator<<(std::ostream & o, Point const & rhs);

#endif