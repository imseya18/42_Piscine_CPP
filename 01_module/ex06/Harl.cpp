#include "Harl.hpp"

Harl::Harl()
{
	tab_str[0] = "DEBUG";
	tab_str[1] = "INFO"; 
	tab_str[2] = "WARNING";
	tab_str[3] = "ERROR";
}

Harl::~Harl()
{

}

void	Harl::complain(std::string level)
{	
	int i;

	i = 0;
	for(; i < 4; i++)
	{
		if(level == this->tab_str[i])
			break;
	}

	switch (i)
	{
		case 0:
			debug();

		case 1:
			info();

		case 2:
			warning();

		case 3:
			error();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void Harl::debug(void)
{
	std::cout	<< "[ DEBUG ]"
				<< std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"
				<< std::endl;
}

void Harl::info(void)
{
	std::cout 	<< "[ INFO ]"
				<< std::endl
				<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
				<< std::endl;
}

void Harl::warning(void)
{
	std::cout	<< "[ WARNING ]"
				<< std::endl 
				<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." 
				<< std::endl;
}

void Harl::error(void)
{
	std::cout 	<< "[ ERROR ]"
				<< std::endl
				<< "This is unacceptable ! I want to speak to the manager now."
				<< std::endl;
}
