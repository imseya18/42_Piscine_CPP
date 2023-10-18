#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	checkValideGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name), _grade(src._grade)
{

}

Bureaucrat::~Bureaucrat()
{

}

std::string Bureaucrat::getName() const
{
	return(this->_name);
}

int	Bureaucrat::getGrade() const 
{
	return(this->_grade);
}

void	Bureaucrat::checkValideGrade()
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
void Bureaucrat::incrementGrade()
{
	this->_grade--;
	checkValideGrade();
	return ;
}
void Bureaucrat::decrementGrade()
{
	this->_grade++;
	checkValideGrade();
	return ;
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is to high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is to low");
}


std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}