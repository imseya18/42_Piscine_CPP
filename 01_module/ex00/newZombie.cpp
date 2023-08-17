#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *test;
	test = new Zombie(name);
	return (test);
}