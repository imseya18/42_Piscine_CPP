#include "Fixed.hpp"
#include "Point.hpp"
int main()
{
	Point b(5, 10);
	Point a(b);

	std::cout << a << std::endl;
}