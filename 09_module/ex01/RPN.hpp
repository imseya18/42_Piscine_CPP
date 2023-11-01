#ifndef RPN_H
#define RPN_H

#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <stack>
#include <cstdlib>
class RPN
{
    public:
		RPN(std::string input);
        RPN(RPN const & src);
        ~RPN();
        //RPN &     operator=(RPN const & rhs);
		void parse_input();
		int doTheMath();
		bool checkValideNumber(std::string str);
		bool checkValideOperator(std::string str);
		void operatorCalcul(std::string str);
		int	 getNumberFromStack();
		class Error : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

    private:
		RPN();
		std::stack<int> _stock;
		std::string 	_input;
		std::string 	_valide_char;
};

#endif