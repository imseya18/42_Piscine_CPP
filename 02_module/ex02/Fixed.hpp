#ifndef FIXED_H
#define FIXED_H

#pragma once

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
    public:
	// CONSTRUCTEUR
        Fixed();
        Fixed(Fixed const & src);
		Fixed(int const value);
		Fixed(float const value);

	// DESTRUCTEUR
        ~Fixed();

	//FONCTION
		float toFloat( void ) const;
		int toInt( void ) const;
        int getRawBits( void ) const;
		void setRawBits( int const raw );

	//OPPERATEUR
        Fixed	&operator=(Fixed const & rhs);
		int		operator>(Fixed const & lhs, Fixed const & rhs);
		int		operator<(Fixed const & lhs, Fixed const & rhs);
		int		operator>=(Fixed const & lhs, Fixed const & rhs);
		int		operator<=(Fixed const & lhs, Fixed const & rhs);
		int		operator==(Fixed const & lhs, Fixed const & rhs);
		int		operator!=(Fixed const & lhs, Fixed const & rhs);

    private:
		int _value;
		static const int _bits = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif