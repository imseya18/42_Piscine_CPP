#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#pragma once

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <cstdlib>

class PhoneBook
{
	public:

		PhoneBook();
		~PhoneBook();
		void add_contact();
		void display_contact();
		void		get_index();
	
	private:
	
		Contact contact[8];
		int		check_number(std::string *string);
		int 	size;
};

#endif