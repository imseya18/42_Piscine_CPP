#include "Array.hpp"

int main() {

	try
	{	
		Array<int> test(15);
		test[0] = 45;
		Array<int> copie(test);

		std::cout << "test[0] = " << test[0] << std::endl;
		std::cout << "copie[0] = " <<copie[0] << std::endl;

		copie[0] = 55;
		std::cout << "test[0] = "<<test[0] << std::endl;
		std::cout << "copie[0] = "<<copie[0] << std::endl;

		Array<std::string> basic(5);
		Array<std::string> basic2(5);
		std::cout << basic[2] << std::endl;
		basic[2] = "salut comment ca va";
		basic2 = basic;
		std::cout << "basic[0] = " << basic[2] << std::endl;
		std::cout << "basic size = " << basic.Size() << std::endl;
		std::cout << "basic2[0] = " << basic2[2] << std::endl;
		std::cout << "basic2 size = " << basic.Size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{	
		Array<int> test(15);
		std::cout << test.Size() << std::endl;
		test[-5] = 45;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
