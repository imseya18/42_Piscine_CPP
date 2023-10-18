#include "Bureaucrat.hpp"

int main()
{
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