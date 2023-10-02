#include "FragTrap.hpp"

int main()
{
	FragTrap john("John");
	FragTrap thiery("thiery");

	john.DisplayInfo();
	john.attack("thiery");
	thiery.takeDamage(john.GetAttack());
	john.highFivesGuys();
	return 0;
}