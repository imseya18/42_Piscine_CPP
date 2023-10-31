#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#pragma once

#include <string>
#include <iostream>
#include <bits/stdc++.h>

template<typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(MutantStack const & src);
        ~MutantStack();
        MutantStack &     operator=(MutantStack const & rhs);

		typedef typename std::deque<T>::iterator iterator;

		typename std::deque<T>::iterator begin();
		typename std::deque<T>::iterator end();
		const typename std::deque<T>::iterator cbegin() const;
		const typename std::deque<T>::iterator cend() const;
		typename std::deque<T>::iterator rbegin();
		typename std::deque<T>::iterator rend();
		const typename std::deque<T>::iterator rcbegin() const;
		const typename std::deque<T>::iterator rcend() const;
    private:

};

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const & src)
{
	*this = src;
}
template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T> &     MutantStack<T>::operator=(MutantStack const & rhs)
{
	if(this != &rhs)
	{
		this->c = rhs.c;
	}
	return *this;
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template <typename T>
const typename std::deque<T>::iterator MutantStack<T>::cbegin() const
{
	return this->c.cbegin();
}

template <typename T>
const typename std::deque<T>::iterator MutantStack<T>::cend() const
{
	return this->c.cend();
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::rend()
{
	return this->c.rend();
}

template <typename T>
const typename std::deque<T>::iterator MutantStack<T>::rcbegin() const
{
	return this->c.crbegin();
}

template <typename T>
inline const typename std::deque<T>::iterator MutantStack<T>::rcend() const
{
	return this->c.crend();
}

#endif