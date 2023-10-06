#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Default Animal constructor has been called" << std::endl;
}

Animal::Animal(Animal const & src)
{
    *this = src;
}

Animal::~Animal()
{
	std::cout << "Default Animal Destructor has been called" << std::endl;
}

Animal &Animal::operator=(Animal const & rhs)
{
	if ( this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "I'm just an Animal don't know wich song i should make" << std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::setType(std::string type)
{
	this->_type = type;
	return ;
}