#include "Span.hpp"

int Span::getMaxValue()
{
	return this->_max_value;
}

int Span::getMinValue()
{
	return this->_min_value;
}

int Span::longestSpan()
{
	if(_tab.size() < 2)
		throw NotEnoughElement();
	_max_value = *(std::max_element(_tab.begin(), _tab.end()));
	_min_value = *(std::min_element(_tab.begin(), _tab.end()));
	return (_max_value - _min_value);
}

int Span::shortestSpan()
{
	if(_tab.size() < 2)
		throw NotEnoughElement();
	int span = -1;
	int temp_res;
	std::sort(_tab.begin(), _tab.end());
	for(size_t i = 0, j = i + 1; j < _tab.size(); i++, j++)
	{
		temp_res = abs(_tab[i] - _tab[j]);
		if(temp_res < span || span == -1)
			span = temp_res;
	}
	return span;
}

int Span::getVectorSize()
{
	return _tab.size();
}

void Span::fillVector()
{
	std::vector<int>::iterator it = _tab.end();
	_tab.resize(_max_size);
	std::generate(it, _tab.end(), rand);
}

void Span::displayVector()
{
	for (size_t i = 0; i < _tab.size(); i++)
		std::cout << _tab[i] << "\n";
}

Span::Span()
{

}

Span::Span(unsigned int max_size): _max_size(max_size)
{
	_tab.reserve(_max_size);
}

Span::Span(Span const & src)
{
    *this = src;
}

Span &     Span::operator=(Span const & rhs)
{
	if(this != &rhs)
	{
		_max_size = rhs._max_size;
		_max_value = rhs._max_value;
		_min_value = rhs._min_value;
		_tab = rhs._tab;
	}
	return *this;
}

void Span::addNumber(int number_to_add)
{
	if (_tab.size() >= this->_max_size)
		throw TabIsFull();
	_tab.push_back(number_to_add);
}	
Span::~Span()
{

}

const char *Span::TabIsFull::what() const throw()
{
	return ("can't add number tab is full");
}

const char *Span::NotEnoughElement::what() const throw()
{
	return "Not enough element to perfom this action";
}
