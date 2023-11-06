#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		try
		{
			RPN input(argv[1]);
			input.parse_input();
			std::cout << input.doTheMath() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}	
	}
	return 0;
}