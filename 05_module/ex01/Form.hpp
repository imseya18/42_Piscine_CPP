#ifndef FORM_H
#define FORM_H

#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class Form
{
    public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
        ~Form();
        Form(Form const & src);
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				GradeTooLowException(std::string const &msg);
				virtual ~GradeTooLowException() throw() {};
				virtual const char* what() const throw();
			private:
				std::string _msg;
		};
		void displayInfo();
		void	checkValideGrade(int grade);
		std::string getName() const;
		bool	getSigned() const;
		int		getGradeToSign() const;
		int		getGradeToExecute() const;
		bool 	beSigned(Bureaucrat const &Bureaucrat);
    private:
		Form &     operator=(Form const & rhs);
		Form();
		std::string const 	_name;
		bool				_is_signed;
		int	const			_gradeToSign;
		int const			_gradeToExecute;
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif