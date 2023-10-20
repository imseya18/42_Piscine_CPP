#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string name): AForm::AForm(name, 72, 45)
{
	this->_target = name;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm::AForm(src)
{
    *this = src;
}


RobotomyRequestForm::~RobotomyRequestForm()
{

}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	
}

RobotomyRequestForm&     RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	this->_target = rhs._target;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const & rhs)
{
	o 	<< "target name: " <<  rhs.getTarget() << "\n"
		<< "is signed: " << rhs.getSigned() << "\n"
		<< "grade to sign: " << rhs.getGradeToSign() << "\n"
		<< "grade to execute: " << rhs.getGradeToExecute();
	return o;
}