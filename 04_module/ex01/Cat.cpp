#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	_brain = new Brain(this->_type);
	std::cout << "Default Cat constructor has been called" << std::endl;
}

Cat::Cat(std::string name)
{
	this->_type = name;
	_brain = new Brain(this->_type);
	std::cout << "String Cat constructor has been called" << std::endl;
}

Cat::Cat(Cat const & src)
{
    *this = src;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor has been called" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(Cat const & rhs)
{
	Animal::operator=(rhs);
	*_brain = *(rhs._brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaouh miaouh" << std::endl;
}

Brain &Cat::getBrain() const
{
	return(*(this->_brain));
}