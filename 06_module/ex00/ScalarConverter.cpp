#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
    *this = src;
}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter&     ScalarConverter::operator=(ScalarConverter const & rhs)
{
	if (this != &rhs)
	{
		return *this;
	}
	return *this;
}

void ScalarConverter::convert(std::string input)
{
	charConvertion(input);
	intConvertion(input);
	floatConvertion(input);
	doubleConvertion(input);
}

void  ScalarConverter::charConvertion(std::string input)
{
	int result = atoi(input.c_str());
	std::cout << "char: ";
	if (result >= 32 && result <= 126)
		std::cout << static_cast<char>(result) << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	return ;
}

void  ScalarConverter::intConvertion(std::string input)
{
	int result = atoi(input.c_str());
	std::cout << "int: " << result << std::endl;
	return ;
}

void  ScalarConverter::floatConvertion(std::string input)
{
	double result = atof(input.c_str());
	if(result)
		std::cout << "float: " << static_cast<float>(result) << "f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(result) << ".0f" << std::endl;
	return ;
}

bool ScalarConverter::checkSpecific(std::string input)
{
	double result = atof(input.c_str());
	return false;
}

void  ScalarConverter::doubleConvertion(std::string input)
{
	double result = atof(input.c_str());

	std::cout << "Double: " << result << std::endl;
	return ;
}
