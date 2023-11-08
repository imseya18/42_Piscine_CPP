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
	test.fillDoubleVec();
	test.SortDoubleVec();
	test.mergeSort();
	//int element[] = {1,4,12,2,222222222};
	//std::vector< unsigned int> test2(element, element + (sizeof(element) / sizeof(element[0])));
	//std::vector< unsigned int> test3;
	//test3.reserve(15);
	//std::sort(test2.begin(), test2.end());
	//for (std::vector<unsigned int>::iterator it = test2.begin(); it != test2.end(); it++)
	//	std::cout << " " << *it;
	//std::cout << std::endl;
	//std::sort(test.getVec().begin(), test.getVec().end());
	//test.displayVector();
//
	//std::merge(test.getVec().begin(), test.getVec().end(), test2.begin(), test2.end(),  std::back_inserter(test3));
	//for (std::vector<unsigned int>::iterator it = test3.begin(); it != test3.end(); it++)
	//	std::cout << " " << *it;
	//std::cout << "Before: ";
	//test.displayVector();
	//std::cout << "After: ";
	//test.displayVector();
	//std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << test.getResultTime() << " ms" << std::endl;
}