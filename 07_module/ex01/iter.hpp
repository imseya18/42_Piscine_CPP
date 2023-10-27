#ifndef ITER_H
#define ITER_H

#pragma once

#include <string>
#include <iostream>
template<typename T, typename Func>
void	iter(T *array, int size, Func func)
{
	if (size < 0)
		return;
	for(int i = 0; i < size; i++)
		func(array[i]);
}

#endif