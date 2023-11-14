#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(int size)
{
	vec_list.reserve(size);
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
    *this = src;
}

PmergeMe &     PmergeMe::operator=(PmergeMe const & rhs)
{
	(void)rhs;
	return *this;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::Error::Error(std::string const &msg): _msg(msg)
{

}

const char* PmergeMe::Error::what() const throw()
{
	return (_msg.c_str());
}

void PmergeMe::FordJohnsonVec()
{
	fillDoubleVec();
	SortDoubleVec();
	mergeSort();
}

void PmergeMe::FordJohnsonDeque()
{
	fillTabqueue();
	SortDoubleDeque();
	mergeSortDeque();
}

double PmergeMe::getTime()
{
	struct timeval tp;
	gettimeofday(&tp, NULL);
	double time = (tp.tv_sec * 1000000 + tp.tv_usec);
	return time;
}

void PmergeMe::vec_genesis()
{
	std::cout << "Before: ";
	displayVector(this->vec_list);
	this->_start_time = getTime();
	FordJohnsonVec();
	this->_end_time = getTime();
	std::cout << "After: ";
	displayVector(this->double_vec[0]);
	std::cout << "Time to process a range of " << this->vec_list.size() << " elements with std::vector: " 
	<< _end_time - _start_time << " us" << std::endl;
	this->_start_time = getTime();
	FordJohnsonDeque();
	this->_end_time = getTime();
	std::cout << "Time to process a range of " << this->vec_list.size() << " elements with std::deque: " 
	<< _end_time - _start_time << " us" << std::endl;
}

void PmergeMe::fill_vec(char **argv)
{
	unsigned int temp;

	for(int i = 1; argv[i]; i++)
	{
		temp = static_cast<unsigned int>(atof(argv[i]));
		if (temp > 2147483647)
			throw Error("Value over MAX_INT");
		vec_list.push_back(temp);
	}
}

void	PmergeMe::displayVector(std::vector<unsigned int> & vec)
{
	for (std::vector<unsigned int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << " " << *it;
	std::cout << std::endl;
}

void	PmergeMe::displayDeque(std::deque<unsigned int> & deq)
{
	for (std::deque<unsigned int>::iterator it = deq.begin(); it != deq.end(); it++)
		std::cout << " " << *it;
	std::cout << std::endl;
}

int PmergeMe::getResultTime()
{
	return (this->_end_time - this->_start_time);
}

std::vector<unsigned int> PmergeMe::getVec()
{
	return this->vec_list;
}

void PmergeMe::fillDoubleVec()
{
	for(size_t i = 0; i < vec_list.size();)
	{
		std::vector<unsigned int> temp;
		for(size_t j = 0; j < 4 && i < vec_list.size(); i++, j++)
		{
			temp.push_back(vec_list[i]);
		}
		double_vec.push_back(temp);
	}
}

void PmergeMe::fillTabqueue()
{
	for(size_t i = 0; i < vec_list.size();)
	{
		std::deque<unsigned int> temp;
		for(size_t j = 0; j < 4 && i < vec_list.size(); i++, j++)
		{
			temp.push_back(vec_list[i]);
		}
		deque_tab.push_back(temp);
	}
}

void PmergeMe::insertSort(std::vector<unsigned int> &vec)
{
	int j; 
	unsigned int key;
	for(size_t i = 1; i < vec.size(); i++)
	{
		j = i - 1;
		key = vec[i];

		while(j >= 0 && vec[j] > key)
		{
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
	}
}

void PmergeMe::insertSortDeque(std::deque<unsigned int> &deq)
{
	int j; 
	unsigned int key;
	for(size_t i = 1; i < deq.size(); i++)
	{
		j = i - 1;
		key = deq[i];

		while(j >= 0 && deq[j] > key)
		{
			deq[j + 1] = deq[j];
			j--;
		}
		deq[j + 1] = key;
	}
}

void PmergeMe::SortDoubleVec()
{
	for(std::vector<std::vector<unsigned int> >::iterator it = double_vec.begin(); it != double_vec.end(); it++)
		insertSort(*it);
}

void PmergeMe::SortDoubleDeque()
{
	for(std::deque<std::deque<unsigned int> >::iterator it = deque_tab.begin(); it != deque_tab.end(); it++)
		insertSortDeque(*it);
}

void PmergeMe::mergeSort()
{
	size_t tmp_size = this->double_vec.size();
	int index = 0;
	while (tmp_size > 1)
	{
		for(size_t i = 1; i <= tmp_size; i++)
		{
			for(size_t j = 0; j < double_vec[i].size(); j++)
				double_vec[index].push_back(double_vec[i][j]);
			double_vec[i].clear();
			if((i + 1) % 2 == 0)
				index++;
		}
		tmp_size = index;
		index = 0;
		for(size_t i = 0; i <= tmp_size; i++)
			insertSort(this->double_vec[i]);
	}
}

void PmergeMe::mergeSortDeque()
{
	size_t tmp_size = this->deque_tab.size();
	int index = 0;
	while (tmp_size > 1)
	{
		for(size_t i = 1; i <= tmp_size; i++)
		{
			for(size_t j = 0; j < deque_tab[i].size(); j++)
				deque_tab[index].push_back(deque_tab[i][j]);
			deque_tab[i].clear();
			if((i + 1) % 2 == 0)
				index++;
		}
		tmp_size = index;
		index = 0;
		for(size_t i = 0; i <= tmp_size; i++)
			insertSortDeque(this->deque_tab[i]);
	}
}
