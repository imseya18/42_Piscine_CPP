#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#pragma once

#include <string>
#include <iostream>
#include <stdlib.h>
#include <iomanip>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(ScalarConverter const & src);
        ~ScalarConverter();
        
        ScalarConverter &     operator=(ScalarConverter const & rhs);

		static void		convert(std::string const &input);
		static void 	intConvertion(std::string const &input);
		static void 	charConvertion(std::string const &input);
		static void 	doubleConvertion(std::string const &input);
		static void 	floatConvertion(std::string const &input);
		static bool 	checkSpecific(std::string const &input);
		class NotValideNumber : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
    private:
		static int		findPrecision(std::string const &input);
		static bool		CheckValideNumber(std::string const &input);
};

#endif