#include "Span.hpp"

int main()
{	
	Span test(10000);
	test.addNumber(124);
	test.addNumber(1251235);
	test.fillVector();
	std::cout << test.getVectorSize() << std::endl;
	//std::cout << test.longestSpan() << std::endl;
}