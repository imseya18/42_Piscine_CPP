#include "easyfind.hpp"

int main()
{	
	try
	{
		int element[] = {4,4,4,4,4};
		std::vector<int> test(element, element + (sizeof(element) / sizeof(element[0])));
		std::cout << easyfind(test, 4) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}