#ifndef WEAPON_H
#define WEAPON_H

#pragma once

#include <string>
#include <iostream>

class Weapon
{
	public:
    	Weapon();
    	~Weapon();
		std::string	const	&getType() const;
		std::string			&setType();

	private:
		std::string	_type;
};

#endif