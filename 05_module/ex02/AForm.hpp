#ifndef FORM_H
#define FORM_H

#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class AForm
{
    public:
		AForm(std::string name, int gradeToSign, int gradeToExecute);
        virtual ~AForm();
        AForm(AForm const & src);
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class FormIsNotSigned: public std::exception
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
		bool	checkIsExecutable(int bureaucrat_grade) const;
		// GETTER
		std::string getName() const;
		bool	getSigned() const;
		int		getGradeToSign() const;
		int		getGradeToExecute() const;
		
		////SETTER
		//void 	setName(std::string name);
		//void	setSigned(bool is_signed);
		//void	setGradeToSign(int gradeToSign);
		//void	setGradeToExecute(int gradeToExecute);

		virtual void 	execute(Bureaucrat const & executor) const = 0;
		void 	beSigned(Bureaucrat const &Bureaucrat);
    private:
		AForm &     operator=(AForm const & rhs);
		AForm();
		std::string const 	_name;
		bool				_is_signed;
		int	const			_gradeToSign;
		int const			_gradeToExecute;
};
std::ostream &	operator<<(std::ostream & o, AForm const & rhs);

#endif