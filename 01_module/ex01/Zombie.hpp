#ifndef ZOMBIE_H
#define ZOMBIE_H

#pragma once

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie() {};
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void setName(std::string name);
		std::string getName() const;

	private:

		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif