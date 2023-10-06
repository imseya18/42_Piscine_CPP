#include "Brain.hpp"

Brain::Brain()
{
	std::ostringstream oss;
	std::cout << "Default constructor for Brain has beeen called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		oss << i;
		this->_ideas[i] = "ideas" + oss.str();
		oss.str("");
	}
}

Brain::Brain(std::string type)
{
	std::ostringstream oss;
	std::cout << "Constructor for Brain has beeen called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		oss << i;
		this->_ideas[i] = type + " ideas" + oss.str();
		oss.str("");
	}
}

Brain::Brain(Brain const & src)
{
    *this = src;
}

Brain::~Brain()
{
	std::cout << "Default destructor for Brain has beeen called" << std::endl;
}

void Brain::displaySpecificIdea(int i)
{
	if(i >= int(sizeof(this->_ideas) / sizeof(this->_ideas[0])) || i < 0)
	{
		std::cout << "index is out of range" << std::endl;
		return ;
	}
	std::cout << this->_ideas[i] << std::endl;
}

void Brain::displayIdeas()
{
	for(int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << "\n";

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
