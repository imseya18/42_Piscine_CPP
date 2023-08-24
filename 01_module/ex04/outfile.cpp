#include "outfile.hpp"

Outfile::Outfile(std::string str) : _out_file(str.c_str())
{

}

Outfile::~Outfile()
{
	if(_out_file.is_open() == true)
		this->_out_file.close();
}

bool	Outfile::check_valide_file()	const
{
	if(this->_out_file.is_open())
		return true;
	else
		return false;
}

void	Outfile::strToFile(std::string str)
{
	this->_out_file <<	str;
}