#include "ScavTrap.hpp"

int main()
{
	ScavTrap john("John");
	ScavTrap thiery("thiery");

	john = thiery;

	john.DisplayInfo();
	return 0;
}