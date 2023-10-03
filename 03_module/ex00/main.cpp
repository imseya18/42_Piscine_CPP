#include "ClapTrap.hpp"

int main()
{
	ClapTrap john("John");
	ClapTrap thiery("Thiery");
	
	john.SetAttack(1);
	john.attack(thiery.GetName());
	thiery.takeDamage(john.GetAttack());
	john.attack(thiery.GetName());
	thiery.takeDamage(john.GetAttack());
	thiery.DisplayInfo();
	john.DisplayInfo();
	return 0;
}