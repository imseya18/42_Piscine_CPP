#ifndef FORM_H
#define FORM_H

#pragma once

#include <string>
#include <iostream>
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
				virtual const char* what() const throw();
		};
		void displayInfo();
    private:
		Form &     operator=(Form const & rhs);
		Form();
		std::string const 	_name;
		bool				_is_signed;
		int	const			_gradeToSign;
		int const			_gradeToExecute;
};

#endif