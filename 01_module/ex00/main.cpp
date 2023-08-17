#include "Zombie.hpp"

int main(void)
{
	Zombie *roger;
	roger = newZombie("roger");
	roger->announce();
	randomChump("jake");
	delete roger;
	return (0);
}