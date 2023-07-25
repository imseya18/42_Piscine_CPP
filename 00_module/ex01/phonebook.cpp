#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : size(0)
{

}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::display_contact()
{
	for(int i = 0; i < 8; i++)
	{
		if (this->contact[i].check_if_empty() == true)
			break ;
		else
		{
			std::cout << "contact number " << i << ":" << std::endl;
			this->contact[i].display_name();
		}
	}
}

void PhoneBook::add_contact()
{
	this->contact[this->size].set_name();
	std::cout << "size = " << size << std::endl;
	if (this->size == 7)
		this->size = 0;
	else
		this->size++;
}

