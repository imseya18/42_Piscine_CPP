#include "Span.hpp"

int main()
{	
	Span test(5);
	Span test2(test);
	test.addNumber(1);
	test.addNumber(2);
	test.fillVector();
	test.displayVector();

	test2.displayVector();
	std::cout << "longest span = " << test.longestSpan() << std::endl;
	std::cout << "shortest span = " << test.shortestSpan() << std::endl;
	test.displayVector();
}