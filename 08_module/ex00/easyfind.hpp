#ifndef EASYFIND_H
#define EASYFIND_H

#pragma once

#include <string>
#include <iostream>
#include <bits/stdc++.h>


class ErrorValue: public std::exception
{
		public:
			virtual const char* what() const throw()
			{
				return ("value not find in this container");
			}
};

template<typename T>
typename T::iterator easyfind(T &container, int to_find)
{
	typename T::iterator it  = std::find(container.begin(), container.end(), to_find);
	return it;
}
#endif