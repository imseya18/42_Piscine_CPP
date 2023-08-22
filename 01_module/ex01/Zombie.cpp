#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	
}

Zombie::~Zombie()
{
	std::cout << getName() << ": destructor called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName() const
{
	return(this->_name);
}