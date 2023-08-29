#include "Harl.hpp"

int main(int argc, char	**argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return 0;
	}
	Harl test;

	test.complain(argv[1]);
}