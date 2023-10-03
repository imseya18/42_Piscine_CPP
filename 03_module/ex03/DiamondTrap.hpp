#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#pragma once

#include <string>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    public:
		DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & src);
        ~DiamondTrap();
        
        DiamondTrap &     operator=(DiamondTrap const & rhs);
		std::string GetClapTrapName();
		void DisplayInfo();
		void whoAmI();
		using ScavTrap::attack;
    private:
		std::string _name;
};

#endif