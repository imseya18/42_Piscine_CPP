#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm::AForm("", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): AForm::AForm(name, 145, 137)
{
	this->_target = name;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm::AForm(src)
{
    *this = src;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	
}

ShrubberyCreationForm&     ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->_target = rhs._target;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const & rhs)
{
	o 	<< "target name: " <<  rhs.getTarget() << "\n"
		<< "is signed: " << rhs.getSigned() << "\n"
		<< "grade to sign: " << rhs.getGradeToSign() << "\n"
		<< "grade to execute: " << rhs.getGradeToExecute();
	return o;
}