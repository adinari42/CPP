#include "Array.hpp"

int main(void)
{
        int n = 10;
        srand(time(NULL));
		try{
			Array<int> numbers(n);
			int* a = new int[n];
			std::cout << "Elements size: " << numbers.size() << std::endl;
			std::cout << "a       >> ";
			for (int i = 0; i < n; i++)
			{
				numbers[i] = a[i] = rand() % 10;
				std::cout << std::setw(6) << a[i];
			}
			std::cout << std::endl << std::endl;
			std::cout << "numbers >> " << numbers << std::endl;
			Array<int> numbers2 = numbers;//assigning using copy assignment
			Array<int> numbers3(numbers);//using copy constructor
			//both arrays should be deep copies and not share memory
			//changing values of array elements
			numbers2[1] = 69;
			numbers3[2] = 420;
			//demonstrating differences due to usage of deep copies
			std::cout << "numbers  >> " << numbers << std::endl;
			std::cout << "numbers2 >> " << numbers2 << std::endl;
			std::cout << "numbers3 >> " << numbers3 << std::endl;
		}
		catch (std::exception & e)
		{
				std::cout << e.what() << std::endl;
		}
	return 0;
}