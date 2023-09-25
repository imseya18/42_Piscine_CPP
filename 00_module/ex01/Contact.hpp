#ifndef CONTACT_H
#define CONTACT_H

#pragma once

#include <string>
#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <cstdlib>

class Contact
{
	public:

		Contact();
		~Contact();
		void 		set_name();
		std::string get_input(std::string info);
		void 		display_name();
		int			check_if_empty();
		void 		print_info(int index);
	private:

		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
		void 		trim_space(std::string *string);
		int			check_number(std::string *string);
		std::string format_for_book(std::string string);
};

#endif