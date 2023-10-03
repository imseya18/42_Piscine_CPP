#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#pragma once

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:
		FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap();
        
        FragTrap &     operator=(FragTrap const & rhs);

		void highFivesGuys(void);
    private:

};

#endif