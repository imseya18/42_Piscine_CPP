#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		try
		{
			BitcoinExchange test(argv[1]);
			test.storeFile();
			test.execute();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
		std::cout << "wrong number of arguments" << std::endl;
}