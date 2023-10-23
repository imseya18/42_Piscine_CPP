#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{

	// TOUT OK
	try
	{
		ShrubberyCreationForm 	form("form");
		RobotomyRequestForm		form2("form2");
		PresidentialPardonForm	form3("form3");
		Bureaucrat				President("President" , 1);
		President.signForm(form);
		President.executeForm(form);
		President.signForm(form2);
		President.executeForm(form2);
		President.signForm(form3);
		President.executeForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// DOUBLE SIGNATURE

	//try
	//{
	//	PresidentialPardonForm	form3("form3");
	//	Bureaucrat				roger("Roger" , 25);
	//	Bureaucrat				President("President" , 5);
	//	President.signForm(form3);
	//	roger.signForm(form3);
	//	President.executeForm(form3);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}

	//	CAN'T EXECUTE

	//try
	//{
	//	PresidentialPardonForm	form3("form3");
	//	Bureaucrat				roger("Roger" , 25);
	//	Bureaucrat				President("President" , 6);
	//	roger.signForm(form3);
	//	President.executeForm(form3);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}

	// CAN'T SIGN

	//try
	//{
	//	PresidentialPardonForm	form3("form3");
	//	Bureaucrat				roger("Roger" , 26);
	//	Bureaucrat				President("President" , 6);
	//	roger.signForm(form3);
	//	President.executeForm(form3);
	//}
	//catch(const std::exception& e)
	//{
	//	std::cerr << e.what() << '\n';
	//}
}