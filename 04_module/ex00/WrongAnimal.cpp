#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal Destructor has been called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if ( this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "I'm just an WrongAnimal don't know wich song i should make" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
	return ;
}