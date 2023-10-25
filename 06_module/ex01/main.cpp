#include "Serialize.hpp"

int main()
{
	Data *test;
	uintptr_t stock;
	test = new Data;
	test->x = 42;
	test->address = &test;

	std::cout 	<< "Data x = " << test->x
				<< "\nData address = " << test->address << "\n\n";

	stock = Serialize::serialize(test);

	std::cout	<< "stock address: " << stock << "\n\n";

	test = Serialize::deserialize(stock);

	std::cout 	<< "Data x = " << test->x
				<< "\nData address = " << test->address << std::endl;
	delete test;
}