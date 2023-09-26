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
        Fixed			&operator=(Fixed const & rhs);
		Fixed			operator+(Fixed const & rhs);
		Fixed			operator-(Fixed const & rhs);
		Fixed			operator/(Fixed const & rhs);
		Fixed			operator*(Fixed const & rhs);
		Fixed			&operator++();
		Fixed			operator++(int);
		Fixed			&operator--();
		Fixed			operator--(int);
		static Fixed	min(Fixed &a, Fixed &b);
		static Fixed	min(Fixed const &a, Fixed const  &b);
		static Fixed	max(Fixed &a, Fixed &b);
		static Fixed	max(Fixed const &a, Fixed const  &b);
		bool			operator>(Fixed const & rhs);
		bool			operator<(Fixed const & rhs);
		bool			operator>=(Fixed const & rhs);
		bool			operator<=(Fixed const & rhs);
		bool			operator==(Fixed const & rhs);
		bool			operator!=(Fixed const & rhs);

    private:
		int _value;
		static const int _bits = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif