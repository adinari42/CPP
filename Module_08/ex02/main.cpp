#include "MutantStack.hpp"

int main(void)
{
	std::cout << std::endl << "output using MutantStack :" << std::endl << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "mstack.top(): " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "mstack.size(): " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "iterating through mtsack:" << std::endl;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << std::endl << "output using std::list :" << std::endl << std::endl;

	{
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << "mlist.back(): " << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << "mlist.size(): " << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		//[...]
		mlist.push_back(0);
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		std::cout << "Iterating through mlist:" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mlist.begin(), mlist.end()); // Initialize std::stack with a range of elements
	}
	return 0;
}