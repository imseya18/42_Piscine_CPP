/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorue <mmorue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:41:25 by mmorue            #+#    #+#             */
/*   Updated: 2023/09/25 13:22:13 by mmorue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
	std::string	cmd;
	PhoneBook phonebook;

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
			phonebook.add_contact();
		else if (cmd == "SEARCH")
			phonebook.display_contact();
		else if (cmd == "EXIT")
			exit (0);
		else 
			std::cout << "this command doesn't exist" << std::endl;
	}
	return (0);
}
