#include "Bureaucrat.hpp"
#include "AForm.hpp"
int main()
{
	try
	{
		AForm test("Form_1", 150, 100);
		Bureaucrat john("john", 50);
		std::cout << test << std::endl;
		std::cout << john << std::endl;
		std::cout << "\n";
		test.beSigned(john);
		std::cout << "\n";
		std::cout << test << std::endl;
		test.beSigned(john);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}