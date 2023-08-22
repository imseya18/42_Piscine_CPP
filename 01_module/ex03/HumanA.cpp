#include "HumanA.hpp"

HumanA::HumanA(std::string name ,Weapon &weapon): _weapon(weapon) , _name(name) 
{

}

HumanA::~HumanA()
{

}

std::string	HumanA::getName() const
{
	return this->_name;
}

void HumanA::attack() const
{
	std::cout << getName() << " attacks with their " << _weapon.getType() << std::endl;
}