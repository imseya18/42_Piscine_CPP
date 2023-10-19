#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm::AForm("", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): AForm::AForm(src)
{
	
    *this = src;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm&     ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{

}