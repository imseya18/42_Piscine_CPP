#include <iostream>
#include "Fixed.hpp"


//int main()
//{
//	Fixed result;
//	Fixed valeur1(5);
//	Fixed valeur2(10);
//
//	std::cout << "valeur1 = " << valeur1 << std::endl;
//	std::cout << "valeur2 = " << valeur2 << std::endl;
//	if(valeur1 < valeur2)
//		std::cout << "< OK" << std::endl;
//	if(valeur2 > valeur1)
//		std::cout << "> OK" << std::endl;
//	valeur1 = 10;
//	std::cout << "valeur1 = " << valeur1 << std::endl;
//	std::cout << "valeur2 = " << valeur2 << std::endl;
//	if(valeur2 >= valeur1)
//		std::cout << " >= OK" << std::endl;
//	if(valeur2 <= valeur1)
//		std::cout << "<= OK" << std::endl;
//	if(valeur2 == valeur1)
//		std::cout << "== OK" << std::endl;
//	valeur1 = 15;
//	std::cout << "valeur1 = " << valeur1 << std::endl;
//	std::cout << "valeur2 = " << valeur2 << std::endl;
//	result = valeur1 + valeur2;
//	std::cout << "result of " << valeur1 << " + " << valeur2 << " = " << result << std::endl;
//	result = valeur1 - valeur2;
//	std::cout << "result of " << valeur1 << " - " << valeur2 << " = " << result << std::endl;
//	result = valeur1 * valeur2;
//	std::cout << "result of " << valeur1 << " * " << valeur2 << " = " << result << std::endl;
//	result = valeur1 / valeur2;
//	std::cout << "result of " << valeur1 << " / " << valeur2 << " = " << result << std::endl;
//
//	std::cout << Fixed::min(valeur1, valeur2) << std::endl;
//	std::cout << Fixed::max(valeur1, valeur2) << std::endl;
//	Fixed test;
//	std::cout << test << std::endl;
//	std::cout << ++test << std::endl;
//	std::cout << test++ << std::endl;
//	std::cout << test << std::endl;
//}

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}