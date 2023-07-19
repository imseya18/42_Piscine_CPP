#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "je vis" << std::endl;
}

Contact::~Contact()
{
	std::cout << "je mourus" << std::endl;
	delete this;
}