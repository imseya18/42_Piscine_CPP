#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	try
	{
		Form test("Form_1", 150, 100);
		Bureaucrat john("john", 50);
		std::cout << test << std::endl;
		std::cout << john << std::endl;
		std::cout << "\n";
		john.signForm(test);
		std::cout << "\n";
		std::cout << test << std::endl;
		john.signForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}