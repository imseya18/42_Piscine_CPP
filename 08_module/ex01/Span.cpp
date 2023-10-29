#include "Span.hpp"

int Span::getMaxValue()
{
	return this->_max_value;
}

int Span::getMinValue()
{
	return this->_min_value;
}

Span::Span()
{

}

Span::Span(unsigned int max_size): _max_size(max_size), _actual_size(0)
{
	this->_tab = new int[max_size];
}

Span::Span(Span const & src)
{
    *this = src;
}

//Span &     Span::operator=(Span const & rhs)
//{
//
//}

void Span::addNumber(int number_to_add)
{
	if (this->_actual_size >= this->_max_size)
		throw TabIsFull();

	this->_tab[_actual_size] = number_to_add;
	_actual_size++;
	this->_max_value = std::max(number_to_add, _max_value);
	if(_actual_size < 2)
		this->_min_value = number_to_add;
	else
		this->_min_value = std::min(number_to_add, _min_value);
}	
Span::~Span()
{
	delete [] _tab;
}

const char *Span::TabIsFull::what() const throw()
{
	return ("can't add number tab is full");
}
