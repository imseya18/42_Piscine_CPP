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
int easyfind(const T &container, int to_find)
{
	typename T::const_iterator it  = std::find(container.begin(), container.end(), to_find);
	if(it != container.end())
		return *it;
	else
		throw ErrorValue();
}
#endif