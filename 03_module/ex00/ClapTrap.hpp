#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();
        
        ClapTrap &     operator=(ClapTrap const & rhs);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
    private:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;
};

#endif