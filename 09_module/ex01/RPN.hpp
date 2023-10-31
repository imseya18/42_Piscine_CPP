#ifndef RPN_H
#define RPN_H

#pragma once

#include <string>
#include <iostream>
class RPN
{
    public:
		RPN(std::string input);
        RPN(RPN const & src);
        ~RPN();
        //RPN &     operator=(RPN const & rhs);
		void parse_input();

		class Error : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

    private:
		RPN();
		std::string _input;
		std::string _valide_char;
};

#endif