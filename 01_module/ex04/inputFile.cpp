#include "inputFile.hpp"

InputFile::InputFile(char *file_path): _file(file_path)
{

}

InputFile::~InputFile()
{
	if(this->_file.is_open() == true)
		this->_file.close();
}

bool	InputFile::check_valide_file()	const
{
	if(this->_file.is_open())
		return true;
	else
		return false;
}
std::string	InputFile::to_string()
{
	std::string	temp;
	char	c;

	while(this->_file.get(c))
		temp += c;
	
	return (temp);
}