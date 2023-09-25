#ifndef POINT_H
#define POINT_H

#pragma once

#include <string>
#include <iostream>
class Point
{
    public:
        Point();
        Point(Point const & src);
        ~Point();
        
        Point &     operator=(Point const & rhs);
    private:

};

#endif