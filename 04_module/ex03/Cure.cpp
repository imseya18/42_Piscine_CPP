#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(Cure const & src)
{
    *this = src;
}

Cure::~Cure()
{

}

Cure&     Cure::operator=(Cure const & rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria* Cure::clone() const
{
	AMateria* clone = new Cure();

	return clone;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}