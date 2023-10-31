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

RPN::~RPN()
{

}

const char *RPN::Error::what() const throw()
{
	return "error";
}
