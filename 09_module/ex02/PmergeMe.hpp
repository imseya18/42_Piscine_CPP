#ifndef PMERGEME_H
#define PMERGEME_H

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>
class PmergeMe
{
    public:
        PmergeMe();
        PmergeMe(PmergeMe const & src);
        ~PmergeMe();
        PmergeMe &     operator=(PmergeMe const & rhs);

		class Error: public std::exception
		{
			public:
				virtual const char* what() const throw();
				Error(std::string const &msg);
				virtual ~Error() throw() {};
			private:
				std::string _msg;
		};

		std::vector<unsigned int> & fill_vec(char **argv);
    private:
		std::vector<unsigned int> vec_list;

};

#endif