#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#pragma once

#include <string>
#include <iostream>
class Bureaucrat
{
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat();
        Bureaucrat &     operator=(Bureaucrat const & rhs);

		std::string getName() const; 
		int			getGrade() const;
		void		checkValideGrade();
		void		incrementGrade();
		void		decrementGrade();




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
		Bureaucrat();
		std::string const _name;
		int _grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);
#endif