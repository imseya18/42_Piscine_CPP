#include "inputFile.hpp"
#include "outfile.hpp"
#include <cstring>

std::string search_and_replace(std::string str, char *search, char *replace)
{
	int search_size;
	int replace_size;
	size_t pos;

	search_size = std::strlen(search);
	replace_size = std::strlen(replace);
	pos = 0;
	while ((pos = str.find(search, pos)) != std::string::npos)
	{
		str.erase(pos, search_size);
		str.insert(pos, replace);
		pos += replace_size;
	}
	return (str);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong number of argument" << std::endl;
		return 0;
	}
		InputFile in_file(argv[1]);
		std::string temp_file;
		std::string out_file_name(argv[1]);

		out_file_name += ".replace";
		if (in_file.check_valide_file() == false)				//check open in file reussi
		{
			std::cout << "ERROR: Cannot open file" << std::endl;
			return 0;
		}
		Outfile	out_file(out_file_name);
		if	(out_file.check_valide_file() == false)				//check creation + open out file reussi
		{
			std::cout << "ERROR: Cannot open file" << std::endl;
			return 0;
		}
		temp_file = in_file.to_string();
		temp_file = search_and_replace(temp_file, argv[2], argv[3]);
		out_file.strToFile(temp_file);

		return 0;
}