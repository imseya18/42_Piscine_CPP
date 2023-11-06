#include "PmergeMe.hpp"
bool	checkValideArgument(char **argv)
{
	for(int i = 1; argv[i]; i++)
	{
		for(int j = 0; argv[i][j] ; j++)
			if (std::isdigit(argv[i][j]) == false)
				return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error: wrong number of argument" << std::endl;
		return 0;
	}
	if(checkValideArgument(argv) == false)
	{
		std::cout << "Error: Invalid argument" << std::endl;
		return 0;
	}
	
	PmergeMe test(argc - 1);
	test.fill_vec(argv);
	struct timeval end_value;
}