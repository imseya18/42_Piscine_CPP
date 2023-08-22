#include "Weapon.hpp"

Weapon::Weapon(std::string type_weapon) : _type(type_weapon)
{

}

Weapon::~Weapon()
{

}

std::string	const	&Weapon::getType() const
{
	return	(this->_type);
}

void	Weapon::setType(std::string weapon)
{
	_type = weapon;
}