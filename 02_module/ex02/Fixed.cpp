#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;

	if ( this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int		Fixed::operator>(Fixed const & lhs, Fixed const & rhs)
{
	if(lhs.getRawBits() > rhs.getRawBits())
		return 1;
	return 0;
}

int		Fixed::operator<(Fixed const & lhs, Fixed const & rhs)
{
	if(lhs.getRawBits() < rhs.getRawBits())
		return 1;
	return 0;
}

int		Fixed::operator>=(Fixed const & lhs, Fixed const & rhs)
{
	if(lhs.getRawBits() >= rhs.getRawBits())
		return 1;
	return 0;
}

int		Fixed::operator<=(Fixed const & lhs, Fixed const & rhs)
{
	if(lhs.getRawBits() <= rhs.getRawBits())
		return 1;
	return 0;
}

int		Fixed::operator==(Fixed const & lhs, Fixed const & rhs)
{
	if(lhs.getRawBits() == rhs.getRawBits())
		return 1;
	return 0;
}

int		Fixed::operator!=(Fixed const & lhs, Fixed const & rhs)
{
	if(lhs.getRawBits() != rhs.getRawBits())
		return 1;
	return 0;
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