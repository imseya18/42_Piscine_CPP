#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#pragma once

#include <string>
#include <iostream>
#include <stdlib.h>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(ScalarConverter const & src);
        ~ScalarConverter();
        
        ScalarConverter &     operator=(ScalarConverter const & rhs);

		static void		convert(std::string input);
		static void 	intConvertion(std::string input);
		static void 	charConvertion(std::string input);
		static void 	doubleConvertion(std::string input);
		static void 	floatConvertion(std::string input);
		static bool 	checkSpecific(std::string input);
    private:

};

#endif