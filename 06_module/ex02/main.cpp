#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>
#include <cstdlib>

Base * generate(void)
{
	srand(time(NULL));

	int random_number = rand() % 3;

	switch (random_number)
	{
	case 0:
		std::cout << "I create a type A class" << std::endl;
		return (new A);
		break;
	
	case 1:
		std::cout << "I create a type B class" << std::endl;
		return (new B);
		break;

	case 2:
		std::cout << "I create a type C class" << std::endl;
		return (new C);
		break;
	default:
		std::cout << "error wrong value" << std::endl;
		break;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "it's a type A class" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "it's a type B class" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "it's a type C class" << std::endl;
	else
		std::cout << "Wrong type of class" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "it's a type A class" << std::endl;
		return ;
	}
	catch(...) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "it's a type B class" << std::endl;
		return ;
	}
	catch(...) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "it's a type C class" << std::endl;
		return ;
	}
	catch(...) {}
	std::cout << "Wrong type of class" << std::endl;
	return ;
}

int main()
{
	Base *Random_class;
	Random_class = generate();
	identify(Random_class);
	identify(Random_class);
	delete Random_class;
}