#include "iter.hpp"

void incr(int &n)
{
	n++;
}

int main(void)
{
	int test[] = {1, 2, 3};

	iter(test, 3, &incr);//correct length passed
	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "[" << i << "] = " << test[i] << ", ";
	}
	std::cout << std::endl;


	iter(test, 4, &incr);//incorrect length passed
	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "[" << i << "] = " << test[i] << ", ";
	}
	std::cout << std::endl;
	
	return 0;
}