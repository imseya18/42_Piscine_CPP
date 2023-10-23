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
bool RobotomyRequestForm::execute(Bureaucrat const &executor) const
{ 
	if(checkIsExecutable(executor.getGrade()) == true)
	{
		srand (time(NULL));
		int random_value;

		random_value = rand() % 2 + 1;
		std::cout << "ZzZzzZ ... ZzZzzZ\n";
		if(random_value % 2 == 0)
			std::cout << executor.getName() << " has been robotomized" << std::endl;
		else
			std::cout << "robotomy failed" << std::endl; 
	}
	return true;
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