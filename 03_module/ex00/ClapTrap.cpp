#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{

}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    *this = src;
}

ClapTrap::~ClapTrap()
{

}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
	{
		std::cout << "no more energy points or hit_points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!";
	if(this->_energy_points > 0)
		this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
	std::cout << this->_name << " has now " << this->_hit_points << "HP" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0)
	{
		std::cout << "can't repair no more energy points left" << std::endl;
		return ;
	}
	this->_hit_points++;
	std::cout << "repairing...    " << this->_name << " has now " << this->_hit_points << " HP" << std::endl;
	if(this->_energy_points > 0)
		this->_energy_points--;
}
