#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(Ice const & src)
{
    *this = src;
}

Ice::~Ice()
{

}

Ice&     Ice::operator=(Ice const & rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice();
	return clone;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}