#include "Contact.hpp"

Contact::Contact()
{
	
}

Contact::~Contact()
{

}

void Contact::set_name()
{
	get_input(&(this->_first_name), "FIRST NAME: ");
	get_input(&(this->_last_name), "LAST NAME: ");
	get_input(&(this->_nickname), "NICKNAME: ");
	get_input(&(this->_phone_number), "PHONE NUMBER: ");   //finir check only chiffres
	get_input(&(this->_darkest_secret), "DARKEST SECRET: ");
	std::cout << _first_name << std::endl;
	std::cout << _last_name << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _phone_number << std::endl;
	std::cout << _darkest_secret << std::endl;
}

void Contact::get_input(std::string *input, std::string info)
{
	while((*input).empty() || (*input).length() == 0)
	{
		std::cout << info;
		getline(std::cin, *input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit (0);
		}
		trim_space(input);
		//if (info == "PHONE NUMBER: ")  //check only chiffre;
	}

}

void Contact::trim_space(std::string *string)
{
	int start;
	int end;

	start = 0;
	end = 0;
	for (size_t i = 0; i < (*string).length(); i++)
	{
		if (isspace((*string)[i]) == false)
		{
			start = i;
			break;
		}
	}
	for (size_t i = (*string).length() - 1; i > 0; i--)
	{
		if (isspace((*string)[i]) == false)
		{
			end = i + 1;
			break;
		}
	}
	*string = (*string).substr(start, end - start);
}