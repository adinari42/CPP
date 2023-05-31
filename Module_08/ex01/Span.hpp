#ifndef SPAN_HPP
 #define SPAN_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>
#include <time.h>
#include <array>



class Span
{
	private:
		unsigned int N;
		int curr_n;
		int	*Nums;
	public:
		Span();
		Span(unsigned int N_);
		Span(const Span &a);
		~Span();
		int &operator[](int);
		Span &operator= (const Span& a);
		class IndexOutOfBonds;
		class SpanFull;
		class NotEnoughNumbers;
		void addNumber(unsigned int N_);
		int shortestSpan();
		int longestSpan();
		void fillSpan();
};


#endif