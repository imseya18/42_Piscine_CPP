#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap john("John");
	john.DisplayInfo();
	john.attack("thiery");

	john.guardGate();
	john.highFivesGuys();
	john.whoAmI();
	return 0;
}