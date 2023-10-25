#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#pragma once

#include <string>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <sstream>
class ScalarConverter
{
    public:
        ~ScalarConverter();
		static void		convert(std::string const &input);
		static void 	intConvertion(std::string const &input);
		static void 	charConvertion(std::string const &input);
		static void 	doubleConvertion(std::string const &input);
		static void 	floatConvertion(std::string const &input);
		static bool 	checkSpecific(std::string const &input);
		static bool		checkLimit(std::string const &input);
		class NotValideNumber : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
    private:
	    ScalarConverter();
        ScalarConverter(ScalarConverter const & src);
		ScalarConverter &     operator=(ScalarConverter const & rhs);
		static int		findPrecision(std::string const &input);
		static bool		CheckValideNumber(std::string const &input);
};

#endif