#include "Contact.hpp"

Contact::Contact()
{
	
}

Contact::~Contact()
{

}

void Contact::set_name()
{
	this->_first_name = get_input("FIRST NAME: ");
	this->_last_name = get_input("LAST NAME: ");
	this->_nickname = get_input("NICKNAME: ");
	this->_phone_number = get_input("PHONE NUMBER: ");
	this->_darkest_secret = get_input("DARKEST SECRET: ");
}

void Contact::print_info(int index)  //print info for SEARCH command
{
	int i = index;
	std::string first_name;
	std::string last_name;
	std::string nickname;

	first_name = format_for_book(this->_first_name);
	last_name = format_for_book(this->_last_name);
	nickname = format_for_book(this->_nickname);
	std::cout <<"|" <<	std::setw(10) 
						<<	i 
						<<	"|"
						<<	std::setw(10)
						<<	first_name
						<< 	"|"
						<<	std::setw(10)
						<<	last_name
						<<	"|"
						<<	std::setw(10)
						<<	nickname
						<<	"|"
						<< std::endl;
}

std::string Contact::format_for_book(std::string string) //format for SEARCH command
{
	if (string.length() > 10)
	{
		string = string.substr(0,9);
		string += '.';
	}
	return(string);
}

std::string Contact::get_input(std::string info)
{
	std::string input;

	while(input.empty() || input.length() == 0)
	{
		std::cout << info;
		getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit (0);
		}
		trim_space(&input);
		if (info == "PHONE NUMBER: ")
			check_number(&input);			
	}
	return	(input);
}

int	Contact::check_number(std::string *string)
{
	for(size_t i = 0; i < string->length(); i++)
	{
		if (std::isdigit((*string)[i]) == false)
		{
			(*string).clear();
			std::cout << "only numbers are allowed" <<  std::endl;
			return (false);
		}
	}
	return (true);
}

int	Contact::check_if_empty()
{
	if (this->_first_name.empty() == true)
		return(true);
	else
		return(false);
}

void Contact::display_name()
{
	std::cout << _first_name << std::endl;
	std::cout << _last_name << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _phone_number << std::endl;
	std::cout << _darkest_secret << std::endl;
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