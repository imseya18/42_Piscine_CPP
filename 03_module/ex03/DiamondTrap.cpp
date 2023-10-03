#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	std::cout << "Constructor for Diamondtrap:  "<< this->_name << " has been called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	FragTrap::_attack_damage = 30;
	FragTrap::_hit_points = 100;
	ScavTrap::_energy_points = 50;
}

DiamondTrap::DiamondTrap()
{
	std::cout <<  "Default Diamond constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
    *this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Desctructor for DiamondTrap: " << this->_name << " has been called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	this->_name = rhs._name;
	return *this;
}

std::string DiamondTrap::GetClapTrapName()
{
	return ClapTrap::_name;
}

void DiamondTrap::DisplayInfo()
{
		std::cout 	<< "Name: " << this->_name << std:: endl
					<< "HP: " << this->_hit_points << std::endl 
					<< "Energy: " << this->_energy_points << std::endl
					<< "AD: " << this->_attack_damage << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout 	<< "My name is: " << this->_name << "\n"
				<< "My ClapTrap name is: " << GetClapTrapName() << std::endl;
}
