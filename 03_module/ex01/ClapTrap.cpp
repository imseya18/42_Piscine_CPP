#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor for ClapTrap: " << this->_name << " has been called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    *this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Desctructor for ClapTrap: " << this->_name << " has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs)
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

int ClapTrap::GetAttack()
{
	return this->_attack_damage;
}

void ClapTrap::SetAttack(int attack)
{
	if(attack < 0)
	{
		std::cout << "attack can't be a negative value" << std::endl;
		return ; 
	}
	this->_attack_damage = attack;
	return ; 
}

int ClapTrap::GetEnergy()
{
	return this->_energy_points;
}

int ClapTrap::GetHp()
{
	return this->_hit_points;
}

std::string ClapTrap::GetName()
{
	return this->_name;
}

void ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	if (this->_energy_points > 0)
		this->_energy_points--;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
	std::cout << this->_name << " has now " << this->_hit_points << "HP" << std::endl;
	return ; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0)
	{
		std::cout << "can't repair no more energy points left" << std::endl;
		return ;
	}
	this->_hit_points += amount;
	std::cout << "repairing...    " << this->_name << " has now " << this->_hit_points << " HP" << std::endl;
	if(this->_energy_points > 0)
		this->_energy_points--;
	return ; 
}

void ClapTrap::DisplayInfo()
{
	std::cout 	<< "Name: " << this->_name << std:: endl
				<< "HP: " << this->_hit_points << std::endl 
				<< "Energy: " << this->_energy_points << std::endl
				<< "AD: " << this->_attack_damage << std::endl;
}


