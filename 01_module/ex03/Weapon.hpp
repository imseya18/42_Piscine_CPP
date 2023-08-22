#ifndef WEAPON_H
#define WEAPON_H

#pragma once

#include <string>
#include <iostream>

class Weapon
{
	public:
    	Weapon(std::string type_weapon);
    	~Weapon();
		std::string	const	&getType() const;
		void				setType(std::string weapon);
	private:
		std::string	_type;
};

#endif