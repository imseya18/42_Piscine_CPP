#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#pragma once

#include "Contact.hpp"
class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

	private:
		Contact contact[8];
};

#endif