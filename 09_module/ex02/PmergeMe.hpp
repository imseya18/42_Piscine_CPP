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
#include <deque>
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
		void						FordJohnsonVec();
		void 						FordJohnsonDeque();
		long int					getTime();
		void 						vec_genesis();
		void						fill_vec(char **argv);
		void						displayVector(std::vector<unsigned int> & vec);
		void						displayDeque(std::deque<unsigned int> & deq);
		int							getResultTime();
		std::vector<unsigned int> 	getVec();
		void						fillDoubleVec();
		void 						insertSort(std::vector<unsigned int> &vec);
		void 						insertSortDeque(std::deque<unsigned int> &deq);
		void						SortDoubleVec();
		void 						SortDoubleDeque();
		void						mergeSort();
		void 						mergeSortDeque();
		void 						fillTabqueue();

    private:
		PmergeMe();
		std::deque<std::deque<unsigned int> > deque_tab;
		std::vector<std::vector<unsigned int> > double_vec;
		std::vector<unsigned int> vec_list;
		std::vector<unsigned int> unsorted_vec_list2;
		long int _start_time;
		long int _end_time;
};

#endif