#ifndef HUMANB_H
#define HUMANB_H

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
	    HumanB(std::string name);
	    ~HumanB();
		void setWeapon(Weapon &weapon);
		std::string	getName() const;
		void attack();
	private:
		Weapon	*_weapon;
		std::string _name;
};

#endif