#include "inputFile.hpp"

inputFile::inputFile(char *file_path): _file(file_path)
{

}

inputFile::~inputFile()
{

}

bool	inputFile::check_valide_file()	const
{
	if(this->_file.is_open())
		return true;
	else
		return false;
}
std::string	inputFile::to_string()
{
	std::string	temp;
	char	c;

	while(this->_file.get(c))
		temp += c;
	
	return (temp);
}