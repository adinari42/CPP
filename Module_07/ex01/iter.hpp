#ifndef ITER_HPP
 #define ITER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>
#include <time.h>

//using a reference is necessary when we want to know the size of the passed array
template <typename T, size_t size> void iter (T (&arr)[size], size_t len, void (*func)(T&))
{
	if (len > size)
	{
		std::cout << "length parameter is not valid" << std::endl;
		return ;
	}
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}




#endif