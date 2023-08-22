#include "Zombie.hpp"

int main()
{
	Zombie *hord;
	int	N;

	N = 5;
	hord = zombieHorde(N, "joseph");
	for(int	i =0; i < N; i++)
	{
		hord[i].announce();
	}
	delete [] hord;
	return (0);
}