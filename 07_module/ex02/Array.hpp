#ifndef ARRAY_H
#define ARRAY_H

#pragma once

#include <string>
#include <iostream>

template< typename T >
class Array
{
    public:
        Array();
		Array(unsigned int size);
        Array(Array const & src);
        ~Array();
       	Array &     operator=(Array const & rhs);
	   class outOfRange : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	   	T&	operator[](unsigned int i);
		unsigned int& Size();
		void	displayTab();
    private:
		T *_tab;
		unsigned int _size;
};

template< typename T >
Array<T>::Array(): _tab(0), _size(0)
{
	_tab = 0;
	_size = 0;
}

template< typename T >
Array<T>::Array(unsigned int size)
{
	this->_tab = new T[size];
	_size = size;
}

template< typename T >
Array<T>::Array(Array const & src)
{
	_tab = 0;
	*this = src;
}

template< typename T >
Array<T> &     Array<T>::operator=(Array const & rhs)
{
	if (this != &rhs)
	{
		if(_tab)
			delete []_tab;
		_size = rhs._size;
		_tab = new T[rhs._size];
		for(unsigned int i = 0; i < rhs._size; i++)
			_tab[i] = rhs._tab[i];
	}
	return *this;
}

template< typename T >
Array<T>::~Array()
{
	if(_tab)
		delete [] _tab;
}

template< typename T >
unsigned int& Array<T>::Size()
{
	return(this->_size);
}

template< typename T >
void	Array<T>::displayTab()
{
	for(unsigned int i = 0; i < _size; i++)
	{
		std::cout << _tab[i] << "\n";
	}
}

template< typename T >
const char *Array<T>::outOfRange::what() const throw()
{
	return ("index is out of range");
}

template< typename T >
T&	Array<T>::operator[](unsigned int index)
{
		if(index >= this->_size)
			throw Array<T>::outOfRange();
		return (_tab[index]);
}
#endif