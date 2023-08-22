#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

std::string	const	&Weapon::getType() const
{
	return	(this->_type);
}

std::string	&Weapon::setType()
{
	return	(this->_type);
}