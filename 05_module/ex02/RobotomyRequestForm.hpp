#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#pragma once

#include <string>
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    public:
		RobotomyRequestForm(std::string name);
        RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm &     operator=(RobotomyRequestForm const & rhs);
        ~RobotomyRequestForm();
        
		std::string	getTarget() const;
		void 	execute(Bureaucrat const & executor) const;
    private:

		RobotomyRequestForm();
		std::string _target;
};

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const & rhs);
#endif