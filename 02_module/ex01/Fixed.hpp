#ifndef FIXED_H
#define FIXED_H

#pragma once

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
    public:

        Fixed();
        Fixed(Fixed const & src);
		Fixed(int const value);
		Fixed(float const value);
        ~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
        int getRawBits( void ) const;
		void setRawBits( int const raw );
        Fixed &operator=(Fixed const & rhs);

    private:
		int _value;
		static const int _bits = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif