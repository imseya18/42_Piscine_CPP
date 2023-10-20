#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute): _name(name), _is_signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	checkValideGrade(this->_gradeToExecute);
	checkValideGrade(this->_gradeToSign);
}
Form::Form(Form const & src): _name(src._name), _is_signed(src._is_signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{

}

Form::~Form()
{

}

std::string Form::getName() const
{
	return(this->_name);
}

bool	Form::getSigned() const
{
	return(this->_is_signed);
}

int		Form::getGradeToSign() const
{
	return(this->_gradeToSign);
}

int		Form::getGradeToExecute() const
{
	return(this->_gradeToExecute);
}

bool Form::beSigned(Bureaucrat const &Bureaucrat)
{
	if (this->_is_signed == true)
		return false;
	if (Bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException("to sign the form");
	else
	{
		this->_is_signed = true;
		return true;
	}
}

void Form::displayInfo()
{
	std::cout << this->_name <<"\n" << this->_is_signed << "\n" << this->_gradeToExecute << "\n" << this->_gradeToSign << std::endl;
}

void	Form::checkValideGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	if(grade > 150)
		throw Form::GradeTooLowException("");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is to high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return (_msg.c_str());
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
	o 	<< "Form name: " << rhs.getName() << "\n"
		<< "is signed: " << rhs.getSigned() << "\n"
		<< "grade to sign: " << rhs.getGradeToSign() << "\n"
		<< "grade to execute: " << rhs.getGradeToExecute();
	return o;
}

Form::GradeTooLowException::GradeTooLowException(std::string const &msg): _msg(msg)
{
	if (this->_msg.empty())
		this->_msg = "Grade is to low";
	else
		_msg = "Grade is to low: " + _msg;
}