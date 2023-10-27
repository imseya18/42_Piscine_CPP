#include "iter.hpp"

template< typename T >
void print( T const & x )
{
  std::cout << x << std::endl;
  return;
}


template< typename T >
void add_number( T& x)
{
  x += 35;
  return;
}

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };
	std::string test[] = {"test", "ok", "ouioui"};
	iter( tab, 5, add_number<int>);
	iter( test, 3, add_number<std::string>);
	iter( tab, 5, print<const int>);
	iter( test, 3, print<const std::string>);
  return 0;
}
