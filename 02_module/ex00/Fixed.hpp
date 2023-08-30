#ifndef FIXED_H
#define FIXED_H

#pragma once

#include <string>
#include <iostream>

class Fixed
{
    public:

        Fixed();
        Fixed(Fixed const & src);
        ~Fixed();
        int getRawBits( void ) const;
		void setRawBits( int const raw );
        Fixed &operator=(Fixed const & rhs);

    private:
		int _value;
		static const int _bits;
};

#endif