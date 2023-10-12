#include "Animal.hpp"

AAnimal::AAnimal(): _type("Animal")
{
	std::cout << "Default AAnimal constructor has been called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
    *this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "Default AAnimal Destructor has been called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const & rhs)
{
	if ( this != &rhs)
		this->_type = rhs._type;
	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << "I'm just an AAnimal don't know wich song i should make" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->_type;
}

void AAnimal::setType(std::string type)
{
	this->_type = type;
	return ;
}