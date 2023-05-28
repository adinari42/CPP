
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>
#include <time.h>

class ScalarConverter
{
	private:
		static std::string literal;
		static int	intRes;
		static double doubleRes;
		static float floatRes;
		static char charRes;
		static int	type;
		static int	res;
/*
it's not necessary to provide implementations for the constructors
and copy assignment operator in a static class that cannot be instantiated,
explicitly declaring them as private can serve as a way to 
communicate the intent of the class and prevent their usage.
*/
		ScalarConverter();
		ScalarConverter(const ScalarConverter &a);
		ScalarConverter &operator= (const ScalarConverter& a);

	public:
		~ScalarConverter();
		static void	convert(std::string literal);
};

#endif
