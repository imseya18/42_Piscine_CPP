#ifndef SPAN_H
#define SPAN_H

#pragma once

//#include <string>
//#include <iostream>
#include <bits/stdc++.h>

class Span
{
    public:
		Span(unsigned int max_size);
        Span(Span const & src);
        ~Span();
        
        Span &     operator=(Span const & rhs);

		void addNumber(int number_to_add);


		class TabIsFull : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NotEnoughElement : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		int	getMaxValue();
		int getMinValue();
		int longestSpan();
		int shortestSpan();
		int getVectorSize();
		void fillVector();
		void displayVector();
    private:
	    Span();
		unsigned int		_max_size;
		int					_max_value;
		int					_min_value;
		std::vector<int>	_tab;
};

#endif