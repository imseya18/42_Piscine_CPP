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
	get_index();
}

void	PhoneBook::get_index()
{
	int index;
	std::string input;

	while(input.empty() || input.length() == 0)
	{
		std::cout << "Enter index: ";
		getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit (0);
		}
		if (check_number(&input) == true)
		{
			index = atoi(input.c_str());
			if (index > 7)
			{
				input.clear();
				std::cout << "index must be between 0 and 7" << std::endl;
			}
		}
	}
	if (this->contact[index].check_if_empty() == true)
		std::cout << "no info for this index" << std::endl;
	else
		this->contact[index].display_name();
}

int		PhoneBook::check_number(std::string *string)
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

void PhoneBook::add_contact()
{
	this->contact[this->size].set_name();
	if (this->size == 7)
		this->size = 0;
	else
		this->size++;
}

