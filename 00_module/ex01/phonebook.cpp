/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seya <seya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:41:25 by mmorue            #+#    #+#             */
/*   Updated: 2023/07/19 01:53:23 by seya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	cmd;

	while (cmd != "EXIT")
	{
		std::cout << "waiting for a command: ";
		getline(std::cin, cmd);
		if (std::cin.eof())
			return (0);
		std:: cout << std::endl;
		if (cmd == "ADD")
		{
			std::cout << "COUCOU" << std::endl;
		}
		if (cmd == "SEARCH")
			std::cout << "OK" << std::endl;
	}	
	return (0);
}