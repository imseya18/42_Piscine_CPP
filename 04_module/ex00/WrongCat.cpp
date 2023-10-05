#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
	this->_type = "WrongCat";
	std::cout << "Default WrongCat constructor has been called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
    *this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor has been called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const & rhs)
{
	WrongAnimal::operator=(rhs);
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Miaouh miaouh" << std::endl;
}
