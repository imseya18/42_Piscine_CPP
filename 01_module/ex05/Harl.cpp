#include "Harl.hpp"

Harl::Harl()
{
	functptr[0] = &Harl::debug;
	functptr[1] = &Harl::info;
	functptr[2] = &Harl::warning;
	functptr[3] = &Harl::error;

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
	for(int i = 0; i < 4; i++)
	{
		if(level == this->tab_str[i])
		{
			(this->*functptr[i])();
			return ;
		}
	}
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
