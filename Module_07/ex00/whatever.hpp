#ifndef WHATEVER_HPP
 #define WHATEVER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>
#include <time.h>

template <typename T> void swap (T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template <typename T> T &min (T &x, T &y)
{
	if (x < y)
		return x;
	else if (x > y)
		return y;
	else
		return y;
}

template <typename T> T &max (T &x, T &y)
{
	if (x > y)
		return x;
	else if (x < y)
		return y;
	else
		return y;
}



#endif

