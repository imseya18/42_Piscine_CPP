#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{

}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

std::string	HumanB::getName() const
{
	return this->_name;
}

void HumanB::attack()
{
	std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl;
}