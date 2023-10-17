#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	_brain = new Brain(this->_type);
	std::cout << "Default Dog constructor has been called" << std::endl;
}

Dog::Dog(std::string name)
{
	this->_type = name;
	_brain = new Brain(this->_type);
	std::cout << "String Dog constructor has been called" << std::endl;
}

Dog::Dog(Dog const & src)
{
	std::cout << "copy Dog constructor has been called" << std::endl;
	_brain = 0;
    *this = src;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor has been called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(Dog const & rhs)
{
	if(this != &rhs)
	{	
		Animal::operator=(rhs);
		if (_brain)
			delete _brain;

		_brain = new Brain(*rhs._brain);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf wouaf" << std::endl;
}

Brain &Dog::getBrain() const
{
	return(*(this->_brain));
}