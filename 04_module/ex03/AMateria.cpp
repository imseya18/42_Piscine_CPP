#include "AMateria.hpp"

AMateria::AMateria()
{

}
AMateria::AMateria(std::string const &type): _type(type)
{

}
AMateria::AMateria(AMateria const & src)
{
    *this = src;
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(AMateria const & rhs)
{

}

std::string const & AMateria::getType() const
{
	return(this->_type);
}