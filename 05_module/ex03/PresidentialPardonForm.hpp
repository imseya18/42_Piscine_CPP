#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#pragma once

#include <string>
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    public:
		PresidentialPardonForm(std::string name);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm();
		PresidentialPardonForm &     operator=(PresidentialPardonForm const & rhs);
		std::string getTarget() const;
		bool 	execute(Bureaucrat const & executor) const;
    private:

		PresidentialPardonForm();
		std::string _target;
};

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const & rhs);

#endif