#include "BitcoinExchange.hpp"
#include <vector>
BitcoinExchange::BitcoinExchange(std::string input_path): _file_database("data.csv"),_file_input(input_path.c_str())
{
	if(_file_database.is_open() == false)
		throw Error("can't open the database file");
	if(_file_input.is_open() == false)
		throw Error("can't open the input file");
	
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
    *this = src;
}

BitcoinExchange &     BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	(void) rhs;
	return *this;
}

void BitcoinExchange::storeFile()
{
	std::string line;
	std::vector<std::string> test;
	while(std::getline(_file_database, line, ','))
	{
		test.push_back(line);
	}
	for(size_t i = 0; i < test.size(); i++)
	{
		std::cout << test[i] << std::endl;
	}
}

BitcoinExchange::~BitcoinExchange()
{
	if(_file_input.is_open())
		_file_input.close();
	if(_file_database.is_open())
		_file_database.close();
}

BitcoinExchange::Error::Error(std::string const &msg): _msg(msg)
{

}

const char* BitcoinExchange::Error::what() const throw()
{
	return (_msg.c_str());
}
