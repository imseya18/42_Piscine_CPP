#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#pragma once

#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <map>
#include <cstring>
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
		time_t checkValideDate(std::string str_date);
		void storeFile();
		void storeData(std::string data, std::string bitcoin_value);
		void parseAndMath(std::string date, std::string bitcoin_nb);
		float checkValideNumber(std::string bitcoin_nb);
		void  checkValideFormat(std::string line_to_check);
		void execute();
    private:
		BitcoinExchange();
		std::ifstream 	_file_database;
		std::ifstream 	_file_input;
		std::string		str_database;
		std::string		str_input;
		std::map<time_t, float> _data_map;
		std::map<time_t, float> _input_map;
};

#endif