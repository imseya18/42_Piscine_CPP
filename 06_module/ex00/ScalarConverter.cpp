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

void ScalarConverter::convert(std::string const &input)
{
	if(CheckValideNumber(input) == false)
		throw ScalarConverter::NotValideNumber();
	charConvertion(input);
	intConvertion(input);
	floatConvertion(input);
	doubleConvertion(input);
}

void  ScalarConverter::charConvertion(std::string const &input)
{
	if(checkSpecific(input) == true)
		std::cout << "char: impossible" << std::endl;
	else
	{
		double result = atof(input.c_str());

		std::cout << "char: ";
		if (result >= 32 && result <= 126)
			std::cout << static_cast<char>(result) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	return ;
}

void  ScalarConverter::intConvertion(std::string const &input)
{
	if(checkSpecific(input) == true)
		std::cout << "int: impossible" << std::endl;
	else 
	{
		int result = atoi(input.c_str());
		std::cout << "int: " << result << std::endl;
	}
	return ;
}

void  ScalarConverter::floatConvertion(std::string const &input) 
{
	double result = atof(input.c_str());
	int precision = findPrecision(input);
	std::cout << "float: " << std::fixed << std::setprecision(precision) << static_cast<float>(result) << "f" << std::endl;
	return ;
}

int ScalarConverter::findPrecision(std::string const &input)
{
	size_t decimal_pos = input.find(".");
	if(decimal_pos != std::string::npos)
		return(input.size() - decimal_pos - 1);
	return 0;
}

bool ScalarConverter::CheckValideNumber(std::string const &input)
{
	int i = 0;
	size_t pos = 0;

	while((pos = input.find('.', pos)) != std::string::npos)
	{
		i++;
		pos++;
	}
	if (i > 1)
		return false;
	return true;
}

bool ScalarConverter::checkSpecific(std::string const &input)
{
	double result = atof(input.c_str());
	std::ostringstream strs;
	strs << result;
	std::string str = strs.str();

	if (str == "nan" || str == "-inf" || str == "+inf")
		return true;
	return false;
}

void  ScalarConverter::doubleConvertion(std::string const &input)
{
	double result = atof(input.c_str());

	std::cout << "Double: " << std::fixed <<result << std::endl;
	return ;
}


const char* ScalarConverter::NotValideNumber::what() const throw()
{
	return ("not a valide number");
}