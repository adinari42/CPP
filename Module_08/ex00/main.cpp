#include "easyfind.hpp"

int main(void)
{
	std::cout << "--------------------------finding int--------------------------" << std::endl;
	std::array<int, 5> arr = {10, 11, 12, 12, 13};
	try {
		std::cout << "adress of 13: " << &arr[4] << std::endl;
		std::cout << "res: " << *easyfind(arr, 13) << ", adress: "  << easyfind(arr, 13) << std::endl;//will print 13
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------finding non exsistant --------------------------" << std::endl;
	try{
		std::cout << *easyfind(arr, 14) << std::endl;//doesn't exist
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}




	std::cout << "--------------------------finding string-----------------------" << std::endl;
	std::array<std::string, 5> arr2 = {"anas", "dinari", "sergiu", "khiro", "mo"};
	try {
		std::cout << "adress of khiro: " << &arr2[3] << std::endl;
		std::cout << "res: " << *easyfind(arr2, "khiro") << ", adress: "  << easyfind(arr2, "khiro") << std::endl;//will print 13
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}