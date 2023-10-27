#ifndef WHATEVER_H
#define WHATEVER_H

#pragma once

#include <string>
#include <iostream>

template<typename T>
void swap(T &value_1, T &value_2)
{
	T tmp = value_1;
	value_1 = value_2;
	value_2 = tmp;
}

template<typename T>
T const &max(T const &value_1, T const &value_2)
{
	if(value_1 >= value_2)
		return value_1;
	else
		return value_2;
}

template<typename T>
T const &min(T const &value_1, T const &value_2)
{
	if(value_1 <= value_2)
		return value_1;
	else
		return value_2;
}

#endif