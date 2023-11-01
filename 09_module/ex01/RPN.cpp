#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(std::string input): _input(input), _valide_char("0123456789+-/* ")
{

}

RPN::RPN(RPN const &src)
{
    *this = src;
}

//RPN &     RPN::operator=(RPN const & rhs)
//{
//
//}

void RPN::parse_input()
{
	for(size_t i = 0; i < _input.size(); i++)
	{
		if (_valide_char.find(_input[i]) == std::string::npos)
			throw Error();
	}
}

int RPN::doTheMath()
{
	std::string str;
	std::stringstream test(_input);
	while(getline(test, str, ' '))
	{
		if(checkValideNumber(str) == true)
		{
			this->_stock.push(atoi(str.c_str()));
		}
		else if(checkValideOperator(str) == true)
		{
			operatorCalcul(str);
		}
		else
			throw Error();
	}
	int result = _stock.top();
	_stock.pop();
	if (_stock.empty() == false)
		throw Error();
	return (result);
}

bool RPN::checkValideNumber(std::string str)
{
	if(str.size() != 1)
		return false;
	if(std::isdigit(str[0]) == false)
			return false;
	return true;
}

bool RPN::checkValideOperator(std::string str)
{
	if(str.size() != 1)
		return false;
	if (str != "*" && str != "/" && str != "+" && str != "-")
		return false;
	return true;
}

void RPN::operatorCalcul(std::string str)
{
	int nombre_1 = getNumberFromStack();
	int nombre_2 = getNumberFromStack();

	if(str == "+")
		_stock.push(nombre_2 + nombre_1);
	else if(str == "-")
		_stock.push(nombre_2 - nombre_1);
	else if(str == "/" && nombre_1 != 0 && nombre_2 != 0)
		_stock.push(nombre_2 / nombre_1);
	else if(str == "*")
		_stock.push(nombre_2 * nombre_1);
	else
		throw Error();
}

int RPN::getNumberFromStack()
{
	int temp;
	if(_stock.empty() == false)
	{
		temp = _stock.top();
		_stock.pop();
	}
	else
		throw Error();
	
	return temp;
}

RPN::~RPN()
{

}

const char *RPN::Error::what() const throw()
{
	return "error";
}
