#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
int main()
{

	// TOUT OK
	AForm* rrf;
	try
	{
		Bureaucrat				President("President" , 5);
		Intern someRandomIntern;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		President.signForm(rrf);
		President.executeForm(rrf);
		if (rrf)
			delete rrf;
	}
	catch(const std::exception& e)
	{
		if (rrf)
			delete rrf;
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