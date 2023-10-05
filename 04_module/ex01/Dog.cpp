#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Default Dog constructor has been called" << std::endl;
}

Dog::Dog(Dog const & src)
{
    *this = src;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor has been called" << std::endl;
}

Dog &Dog::operator=(Dog const & rhs)
{
	Animal::operator=(rhs);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf wouaf" << std::endl;
}