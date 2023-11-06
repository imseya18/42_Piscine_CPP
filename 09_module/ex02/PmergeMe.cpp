#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(PmergeMe const & src)
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

std::vector<unsigned int> &PmergeMe::fill_vec(char **argv)
{
	unsigned int temp;

	for(int i = 1; argv[i]; i++)
	{
		temp = static_cast<unsigned int>(atof(argv[i]));
		if (temp > 2147483647)
			throw Error("Value over MAX_INT");
	}
	
}