#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm test_shrubbery("Shrubbery");
		ShrubberyCreationForm test_shrubbery2("Shrubbery2");
		PresidentialPardonForm test_president("president");
		PresidentialPardonForm test_president2("president2");
		RobotomyRequestForm test_robot("robot");
		RobotomyRequestForm test_robot2("robot2");
		std::cout << test_shrubbery << std::endl;
		std::cout << test_president << std::endl;
		std::cout << test_robot << std::endl;
		test_robot = test_robot2;
		test_president = test_president2;
		test_shrubbery = test_shrubbery2;
		std::cout << test_shrubbery << std::endl;
		std::cout << test_president << std::endl;
		std::cout << test_robot << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}