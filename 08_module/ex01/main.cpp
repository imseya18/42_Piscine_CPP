#include "Span.hpp"

int main()
{	
	Span test(3);

	test.addNumber(5);
	test.addNumber(10);

	std::cout << "min = " << test.getMinValue() << std::endl;
	std::cout << "max = " << test.getMaxValue() << std::endl;
}