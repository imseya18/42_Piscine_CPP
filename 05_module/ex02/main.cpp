#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		PresidentialPardonForm form("roger");
		Bureaucrat				test("test" , 24);
		Bureaucrat				President("president" , 5);
		test.signForm(form);
		President.signForm(form);
		President.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}