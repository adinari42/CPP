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
template <typename T, size_t size> void iter (T (&arr)[size], size_t len, void (*func)(const T &))
{
	if (len > size)
	{
		std::cout << "length parameter is not valid" << std::endl;
		return ;
	}
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

template<class T>
void iter(const T* arr, size_t len, void (*f)(const T&)) {
	for (size_t i = 0; i < len; ++i) {
		f(arr[i]);
	}
}

template<class T>
void iter(T* arr, size_t len, void (*f)(T&)) {
	for (size_t i = 0; i < len; ++i) {
		f(arr[i]);
	}
}



#endif