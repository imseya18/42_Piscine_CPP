#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):  ClapTrap(name)
{
	std::cout << "Constructor for ScavTrap:  "<< this->_name << " has been called" << std::endl;
	this->_attack_damage = 20;
	this->_energy_points = 50;
	this->_hit_points = 100;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src)
{
    *this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor for Scavtrap: "<< this->_name << " has been called" << std::endl;
}

ScavTrap&     ScavTrap::operator=(ScavTrap const & rhs)
{
	if ( this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}

	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " ScavTrap is now in Gate kepper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points <= 0)
	{
		std::cout << this->_name << " has no more energy points" << std::endl;
		return ;
	}
	if ( this->_hit_points <= 0)
	{
		std::cout << this->_name << " has no more HP, try to repair" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	if (this->_energy_points > 0)
		this->_energy_points--;
	return ;
}
