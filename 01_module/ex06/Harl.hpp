#ifndef HARL_H
#define HARL_H

#pragma once

#include <string>
#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
		std::string	tab_str[4];
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif