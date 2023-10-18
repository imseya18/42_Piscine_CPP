#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	Form test("test", 12, 12);
	test.displayInfo();
	Form test2(test);
	test2.displayInfo();

}