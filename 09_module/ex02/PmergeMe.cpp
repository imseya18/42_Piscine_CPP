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

long int PmergeMe::getTime()
{
	struct timeval tp;
	gettimeofday(&tp, NULL);
	long int time = (tp.tv_sec * 1000 + tp.tv_usec / 1000);
	return time;
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
	//for(std::vector<std::vector<unsigned int> >::iterator it = double_vec.begin(); it != double_vec.end(); it++)
	//	displayVector(*it);
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

void PmergeMe::SortDoubleVec()
{
	for(std::vector<std::vector<unsigned int> >::iterator it = double_vec.begin(); it != double_vec.end(); it++)
		insertSort(*it);
	//for(std::vector<std::vector<unsigned int> >::iterator it = double_vec.begin(); it != double_vec.end(); it++)
	//	displayVector(*it);
}

void PmergeMe::mergeSort()
{
	size_t tmp_size = this->double_vec.size();
	//while (tmp_size > 1)
	//{
		for(size_t i = 1; i < tmp_size; i++)
		{
			for(int j = 0; j < 4; j++)
				double_vec[i - 1].push_back(double_vec[i][j]);
			double_vec[i].clear();
		}
	for(std::vector<std::vector<unsigned int> >::iterator it = double_vec.begin(); it != double_vec.end(); it++)
		displayVector(*it);
	//}
}
