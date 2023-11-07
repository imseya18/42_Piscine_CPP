#ifndef PMERGEME_H
#define PMERGEME_H

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <sys/time.h>
#include <algorithm>
class PmergeMe
{
    public:
        PmergeMe(int size);
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
		long int getTime();
		void	fill_vec(char **argv);
		void	displayVector();
		int		getResultTime();
		std::vector<unsigned int> getVec();
    private:
		PmergeMe();
		std::vector<unsigned int> vec_list;
		std::vector<unsigned int> unsorted_vec_list2;
		long int _start_time;
		long int _end_time;
};

#endif