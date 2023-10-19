#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#pragma once

#include <string>
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
    public:
		ShrubberyCreationForm(std::string name);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm();
        
    private:
	 	ShrubberyCreationForm &     operator=(ShrubberyCreationForm const & rhs);
		ShrubberyCreationForm();

};

#endif