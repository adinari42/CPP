
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

		ScalarConverter();
		ScalarConverter(const ScalarConverter &a);
		ScalarConverter &operator= (const ScalarConverter& a);

	public:
		~ScalarConverter();
		static void	convert(std::string literal);
};

#endif
