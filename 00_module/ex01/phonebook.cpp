#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : size(0)
{

}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::display_contact()
{

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|   INDEX  |   FIRST  |   LAST   |   NICK   |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for(int i = 0; i < 8; i++)
	{
		if (this->contact[i].check_if_empty() == true)
			break;
		this->contact[i].print_info(i);
	}
}

void PhoneBook::add_contact()
{
	this->contact[this->size].set_name();
	if (this->size == 7)
		this->size = 0;
	else
		this->size++;
}

