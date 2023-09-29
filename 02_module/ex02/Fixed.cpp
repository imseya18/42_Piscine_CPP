#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;

	return ;
}

Fixed::Fixed(int const value)
{
	this->_value = value * 256;
}

Fixed::Fixed(float const value)
{
	this->_value = roundf(value * 256);
}

Fixed::~Fixed()
{
	return ;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	if ( this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

bool		Fixed::operator>(Fixed const & rhs)
{
	if(getRawBits() > rhs.getRawBits())
		return 1;
	return 0;
}

bool		Fixed::operator<(Fixed const & rhs)
{
	if(getRawBits() < rhs.getRawBits())
		return 1;
	return 0;
}

bool		Fixed::operator>=(Fixed const & rhs)
{
	if(getRawBits() >= rhs.getRawBits())
		return 1;
	return 0;
}

bool		Fixed::operator<=(Fixed const & rhs)
{
	if(getRawBits() <= rhs.getRawBits())
		return 1;
	return 0;
}

bool		Fixed::operator==(Fixed const & rhs)
{
	if(getRawBits() == rhs.getRawBits())
		return 1;
	return 0;
}

bool		Fixed::operator!=(Fixed const & rhs)
{
	if(getRawBits() != rhs.getRawBits())
		return 1;
	return 0;
}

Fixed		Fixed::operator+(Fixed const & rhs)
{
	return(Fixed(toFloat() + rhs.toFloat()));
}

Fixed		Fixed::operator-(Fixed const & rhs)
{
	return(Fixed(toFloat() - rhs.toFloat()));
}


Fixed		Fixed::operator/(Fixed const & rhs)
{
	if(rhs.toFloat() == 0)
			std::cout << "division by 0 is undefined value is unpredictable" << std::endl;
	return(Fixed(toFloat() / rhs.toFloat()));
}


Fixed		Fixed::operator*(Fixed const & rhs)
{
	return(Fixed(toFloat() * rhs.toFloat()));
}

Fixed			&Fixed::operator++()
{
	this->_value++;
	return(*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return(temp);
}

Fixed			&Fixed::operator--()
{
	this->_value--;
	return(*this);
}

Fixed			Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return(temp);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

int Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	this->_value = raw * 256;
}

float Fixed::toFloat( void ) const
{
	return (float)this->getRawBits() / 256;
}

int Fixed::toInt( void ) const
{
	return this->getRawBits() / 256;
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if(a.getRawBits() < b.getRawBits())
		return(a);
	return(b);
}
Fixed	Fixed::min(Fixed const &a, Fixed const  &b)
{
	if(a.getRawBits() < b.getRawBits())
		return(a);
	return(b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return(a);
	return(b);
}
Fixed	Fixed::max(Fixed const &a, Fixed const  &b)
{
	if(a.getRawBits() > b.getRawBits())
		return(a);
	return(b);
}