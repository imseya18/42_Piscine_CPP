#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{

}

Intern::Intern(Intern const & src)
{
    *this = src;
}

Intern::~Intern()
{

}

Intern&     Intern::operator=(Intern const & rhs)
{
	(void) rhs;
	return *this;
}

AForm*	Intern::makeForm(std::string form_name, std::string target_name)
{
	std::string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	for(; i < 3; i++)
	{
		if (form_name == tab[i])
			break;
	}
	switch (i)
	{
		case 0:
			return (new ShrubberyCreationForm(target_name));
			break;
		case 1:
			return (new RobotomyRequestForm(target_name));
			break;
		case 2:
			return (new PresidentialPardonForm(target_name));
			break;
		default:
			std::cout << "No form of this type exist" << std::endl;
			return (NULL);
			break;
	}
}