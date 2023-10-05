#include "Brain.hpp"

Brain::Brain()
{

}

Brain::Brain(Brain const & src)
{
    *this = src;
}

Brain::~Brain()
{

}

Brain &Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}
