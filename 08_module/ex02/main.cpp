#include "MutantStack.hpp"

int main()
{
	try
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top de ma stack = " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size de ma stack = " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		MutantStack<std::string> mstack;
		mstack.push("salut");
		mstack.push(" comment va tu");
		std::cout << "top de ma stack = " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size de ma stack = " << mstack.size() << std::endl;
		mstack.push("test 1");
		mstack.push("test 2");
		mstack.push("test 3");
		//[...]
		mstack.push("test 4");
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<std::string> s(mstack);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}