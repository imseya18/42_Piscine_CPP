#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#pragma once

#include <string>
#include <iostream>

class AForm;

class Bureaucrat
{
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
		Bureaucrat(Bureaucrat const & src);
		std::string getName() const; 
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(AForm *form) const;
		void		executeForm(AForm const *form) const;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

    private:
		std::string const	_name;
		int 				_grade;
		void		checkValideGrade();
		Bureaucrat();
		Bureaucrat &     operator=(Bureaucrat const & rhs);
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);
#endif