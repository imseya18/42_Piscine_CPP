#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#pragma once

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap();
        ScavTrap &     operator=(ScavTrap const &rhs);

		void guardGate();
		void attack(const std::string& target);
    private:

};

#endif