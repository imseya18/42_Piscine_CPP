#include <string>
#include <iostream>
#include "inputFile.hpp"
#include <cstring>
std::string	search_and_replace(std::string	str, char *search, char	*replace)
{
	int search_size;
	int replace_size;
	size_t pos;

	search_size = std::strlen(search);
	replace_size = std::strlen(replace);
	pos = 0;
	while((pos = str.find(search, pos)) != std::string::npos)
	{
		str.erase(pos, search_size);
		str.insert(pos, replace);
		pos += replace_size;
	}
	return(str);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong number of argument" << std::endl;
		return 0;
	}
	else
	{
		inputFile	i_file(argv[1]);
		std::string	temp_file;

		if(i_file.check_valide_file() == false)
		{
			std::cout << "ERROR: Cannot open file" << std::endl;
			return 0;
		}
		temp_file = i_file.to_string();
		temp_file = search_and_replace(temp_file, argv[2], argv[3]);
		std::cout << temp_file << std::endl;

	}
}