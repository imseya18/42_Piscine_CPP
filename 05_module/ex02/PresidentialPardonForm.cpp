#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm::AForm("", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string name): AForm::AForm(name, 25, 5)
{
	this->_target = name;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm::AForm(src)
{
    *this = src;
}


PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm&     PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	this->_target = rhs._target;
	return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
	return(this->_target);
}

bool PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (checkIsExecutable(executor.getGrade()) == true)
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return true;
}
std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs)
{
	o 	<< "target name: " <<  rhs.getTarget() << "\n"
		<< "is signed: " << rhs.getSigned() << "\n"
		<< "grade to sign: " << rhs.getGradeToSign() << "\n"
		<< "grade to execute: " << rhs.getGradeToExecute();
	return o;
}