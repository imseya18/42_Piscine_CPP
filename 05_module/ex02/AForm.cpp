#include "AForm.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute): _name(name), _is_signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	checkValideGrade(this->_gradeToExecute);
	checkValideGrade(this->_gradeToSign);
}
AForm::AForm(AForm const & src): _name(src._name), _is_signed(src._is_signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{

}

AForm::~AForm()
{

}

void AForm::beSigned(Bureaucrat const &Bureaucrat)
{
	if (this->_is_signed == true)
	{
		Bureaucrat.signForm(this->_name, false, "this form is already signed");
		return ;
	}
	if (Bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException("to sign the form");
	else
	{
		this->_is_signed = true;
		Bureaucrat.signForm(this->_name, true, "");
	}
}

void AForm::displayInfo()
{
	std::cout << this->_name <<"\n" << this->_is_signed << "\n" << this->_gradeToExecute << "\n" << this->_gradeToSign << std::endl;
}

void	AForm::checkValideGrade(int grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	if(grade > 150)
		throw AForm::GradeTooLowException("");
}

bool AForm::checkIsExecutable(int bureaucrat_grade) const
{
	if (this->_is_signed == false)
		throw AForm::FormIsNotSigned();
	if (bureaucrat_grade > this->_gradeToExecute)
		throw AForm::GradeTooLowException("to execute the form");
	return true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is to high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return (_msg.c_str());
}

const char* AForm::FormIsNotSigned::what() const throw()
{
	return ("Form is not signed");
}

std::string AForm::getName() const
{
	return(this->_name);
}

bool	AForm::getSigned() const
{
	return(this->_is_signed);
}

int		AForm::getGradeToSign() const
{
	return(this->_gradeToSign);
}

int		AForm::getGradeToExecute() const
{
	return(this->_gradeToExecute);
}

std::ostream &	operator<<(std::ostream & o, AForm const & rhs)
{
	o 	<< "Form name: " << rhs.getName() << "\n"
		<< "is signed: " << rhs.getSigned() << "\n"
		<< "grade to sign: " << rhs.getGradeToSign() << "\n"
		<< "grade to execute: " << rhs.getGradeToExecute();
	return o;
}

AForm::GradeTooLowException::GradeTooLowException(std::string const &msg): _msg(msg)
{
	if (this->_msg.empty())
		this->_msg = "Grade is to low";
	else
		_msg = "Grade is to low: " + _msg;
}