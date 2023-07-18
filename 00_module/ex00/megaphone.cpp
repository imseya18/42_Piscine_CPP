/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seya <seya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:41:25 by mmorue            #+#    #+#             */
/*   Updated: 2023/07/18 23:19:09 by seya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	
	for (;argv[i]; i++)
	{
		for (int j = 0; argv[i][j]; j++)
			std::putchar(std::toupper(argv[i][j]));
	}
	std::cout << std::endl;
	return (0);
}