/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:41:25 by mmorue            #+#    #+#             */
/*   Updated: 2023/07/19 16:49:54 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

int main(void)
{
	std::string	cmd;
	Contact  contact[8];
	
	while (cmd != "EXIT")
	{
		std::cout << "waiting for a command: ";
		getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
		else if (cmd == "ADD")
			std::cout << "COUCOU" << std::endl;
		else if (cmd == "SEARCH")
			std::cout << "OK" << std::endl;
		else 
			std::cout << "this command doesn't exist" << std::endl;
	}
	return (0);
}
