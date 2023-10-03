#include "FragTrap.hpp"
FragTrap::FragTrap()
{
	std::cout <<  "Default FragTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_name = name;
	std::cout << "Constructor for FragTrap:  "<< this->_name << " has been called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
{
    *this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor for FragTrap: "<< this->_name << " has been called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "hey i'm " << this->_name << " let's high fives" << std::endl;
}


