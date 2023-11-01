#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#pragma once

#include <iostream>
#include <map>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <map>

class BitcoinExchange
{
    public:
		//CONSTRUCEUR OPERATOR
        BitcoinExchange(std::string input_path);
        BitcoinExchange(BitcoinExchange const & src);
        ~BitcoinExchange();
        BitcoinExchange &     operator=(BitcoinExchange const & rhs);

		// ERROR CLASS
		class Error: public std::exception
		{
			public:
				virtual const char* what() const throw();
				Error(std::string const &msg);
				virtual ~Error() throw() {};
			private:
				std::string _msg;
		};

		//FONCTION
		void storeFile();
    private:
		BitcoinExchange();
		std::ifstream 	_file_database;
		std::ifstream 	_file_input;
		std::string		str_database;
		std::string		str_input;
		std::map<time_t, float> data_map;
		std::map<time_t, float> input_map;
};

#endif