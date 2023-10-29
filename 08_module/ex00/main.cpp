#include "easyfind.hpp"

int main()
{	
	try
	{
		int element[] = {1,4,5,6,4};
		int to_search = 4;
		std::vector<int> test(element, element + (sizeof(element) / sizeof(element[0])));
		std::vector<int>::iterator it = easyfind(test, to_search);
		std::cout << "my vector: " << std::endl;
		for(size_t i = 0; i < test.size(); i++)
			std::cout << test[i] << "\n";
		std::cout << "\nsearch for value: " << to_search << std::endl;
		if(it != test.end())
		{
			std::cout << to_search << " has been found" << std::endl;
			*it = 45;
			std::cout << "\nmy vector after finding the value: " << std::endl;
			for(size_t i = 0; i < test.size(); i++)
				std::cout << test[i] << "\n";
			std::cout << "\n";
		}
		else
			throw ErrorValue();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::list<int>	new_list;
		int to_search = 346346;

		new_list.push_back(1);
		new_list.push_back(5645);
		new_list.push_back(236236);
		new_list.push_back(23462436);

		std::cout << "my list: " << std::endl;
		for(std::list<int>::iterator it = new_list.begin(); it != new_list.end(); it++)
				std::cout << *it << "\n";

		std::cout << "\nsearch for value: " << to_search << std::endl;
		std::list<int>::iterator it;
		it = easyfind(new_list, to_search);

		if (it != new_list.end())
		{
			std::cout << to_search << " has been found" << std::endl;
				*it = 45;
			for(std::list<int>::iterator it = new_list.begin(); it != new_list.end(); it++)
					std::cout << *it << "\n";
		}
		else
			throw ErrorValue();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}