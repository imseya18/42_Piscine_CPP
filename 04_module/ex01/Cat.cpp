#include "Cat.hpp"

Cat::Cat() 
{
	this->_type = "Cat";
	std::cout << "Default Cat constructor has been called" << std::endl;
}

Cat::Cat(Cat const & src)
{
    *this = src;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor has been called" << std::endl;
}

Cat &Cat::operator=(Cat const & rhs)
{
	Animal::operator=(rhs);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaouh miaouh" << std::endl;
}
