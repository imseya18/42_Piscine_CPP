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

void	PmergeMe::displayVector()
{
	for (std::vector<unsigned int>::iterator it = vec_list.begin(); it != vec_list.end(); it++)
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
