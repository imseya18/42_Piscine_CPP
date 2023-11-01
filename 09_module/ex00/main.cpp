#include "BitcoinExchange.hpp"

int main()
{
	//std::string dateString = "2011-11-31";
	//tm dateInfo = {};
	//if (strptime(dateString.c_str(), "%Y-%m-%d", &dateInfo) == NULL)
    //    std::cerr << "Erreur d'analyse de la date." << std::endl;
	//time_t date = mktime(&dateInfo);
	//std::cout << date << std::endl;
	try
	{
		BitcoinExchange test("input.txt");
		test.storeFile();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}