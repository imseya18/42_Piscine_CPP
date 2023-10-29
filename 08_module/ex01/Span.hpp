#ifndef SPAN_H
#define SPAN_H

#pragma once

#include <string>
#include <iostream>
#include <bits/stdc++.h>

class Span
{
    public:
		Span(unsigned int max_size);
        Span(Span const & src);
        ~Span();
        
        //Span &     operator=(Span const & rhs);

		void addNumber(int number_to_add);


		class TabIsFull : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		int	getMaxValue();
		int getMinValue();
    private:
	    Span();
		unsigned int	_max_size;
		unsigned int	_actual_size;
		int				_max_value;
		int				_min_value;
		int				*_tab;
};

#endif