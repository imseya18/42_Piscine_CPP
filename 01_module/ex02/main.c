#include <iostream>

int main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string *p_str;

	p_str = &str;
	std::cout << "Address:" << std::endl;
	std::cout << &str << std::endl;
	std::cout << p_str << std::endl;
	std::cout << std::endl << "Contenu:" << std::endl;

	std::cout << str << std::endl;
	std::cout << *p_str << std::endl;
	return (0);
}