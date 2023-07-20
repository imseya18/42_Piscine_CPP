#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
}

PhoneBook::~PhoneBook()
{

}

void PhoneBook::add_contact()
{
	this->contact[this->size].set_name();

	if (this->size == 7)
		this->size = 0;
	else
		this->size++;
}
