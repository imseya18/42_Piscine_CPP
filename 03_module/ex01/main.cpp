#include "ScavTrap.hpp"

int main()
{
	ScavTrap john("John");
	ScavTrap thiery("thiery");

	john.DisplayInfo();
	john.attack("thiery");
	thiery.takeDamage(john.GetAttack());
	john.attack("thiery");
	thiery.takeDamage(john.GetAttack());
	john.attack("thiery");
	thiery.takeDamage(john.GetAttack());
	john.attack("thiery");
	thiery.takeDamage(john.GetAttack());
	john.attack("thiery");
	thiery.takeDamage(john.GetAttack());
	john.DisplayInfo();
	john.guardGate();
	return 0;
}