#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#pragma once

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact();
		void display_contact();
	private:
		Contact contact[8];
		int size;
};

#endif