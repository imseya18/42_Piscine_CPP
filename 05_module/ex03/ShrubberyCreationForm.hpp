#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
    public:
		ShrubberyCreationForm(std::string name);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &     operator=(ShrubberyCreationForm const & rhs);

		std::string getTarget() const;
		bool execute(Bureaucrat const & executor) const;
    private:
		ShrubberyCreationForm();
		std::string _target;
};

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const & rhs);

#endif