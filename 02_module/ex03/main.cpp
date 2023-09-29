#include "Fixed.hpp"
#include "Point.hpp"
#include <cstdlib>

int main()
{
	Point a;
	Point b(5, 10);
	Point c(5, 3);
	Point point(4, 3);

	if(bsp(a, b , c , point) == true)
		std::cout << point << " is inside" << std::endl;
	else
		std::cout << point << " is outside" << std::endl;
}