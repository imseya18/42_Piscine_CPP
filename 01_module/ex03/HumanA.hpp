#ifndef HUMANA_H
#define HUMANA_H

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
	    HumanA(std::string name ,Weapon &weapon);
	    ~HumanA();
		std::string	getName() const;
		void attack() const;
	private:
		Weapon &_weapon;
		std::string _name;
};

#endif