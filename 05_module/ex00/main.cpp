#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat test("jacque", 1);
	std::cout << test << std::endl;
	Bureaucrat test2(test);
	std::cout << test2 << std::endl;
	try
	{
		Bureaucrat test("test", 1);
		std::cout << test << std::endl;
		test.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "ok ok" << std::endl;
}