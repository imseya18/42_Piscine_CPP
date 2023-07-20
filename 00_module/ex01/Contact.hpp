#ifndef CONTACT_H
#define CONTACT_H

#pragma once

#include <string>
#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();
		void set_name();
		void get_input(std::string *input, std::string info);

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
		void trim_space(std::string *string);
};

#endif