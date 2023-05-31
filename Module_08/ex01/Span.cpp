#include "Span.hpp"
#include <unistd.h>
class Span::IndexOutOfBonds : public std::exception {
	const char* what() const throw() {
		return "index out of bonds!";
}
};
class Span::SpanFull : public std::exception {
	const char* what() const throw() {
		return "Span is full!";
	}
};
class Span::NotEnoughNumbers : public std::exception {
	const char* what() const throw() {
		return "Not enough numbers!";
	}
};

Span::Span() : N(10), curr_n(0)
{
	Nums = new int[N];
}

Span::Span(unsigned int N_) : N(N_), curr_n(0)
{
	if (N_ < 1)
		throw  NotEnoughNumbers();
	Nums = new int[N];
}

Span::Span(const Span &a)
{
	Nums = NULL;
	*this = a;
}

Span::~Span()
{
	if (Nums)
		delete[] Nums;	
}


void Span::addNumber(unsigned int N_){
	try
	{
		if (curr_n == N)
			throw SpanFull();
		else if (curr_n < N)
			Nums[curr_n++] = N_;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << " : " << N_ << std::endl;
	}	
}
int Span::shortestSpan(){
	unsigned int shortestSpan = 4294967295 ;//unsigned int max
	try
	{
		if (curr_n <= 1)
			throw NotEnoughNumbers();
		else
		{
			for (size_t i = 0; i < curr_n; i++)
			{
				for (size_t j = 0; j < curr_n; j++)
				{
					if (i != j)
					{
						if (Nums[i] >= Nums[j]){
							if (Nums[i] - Nums[j] <= shortestSpan)
								shortestSpan = Nums[i] - Nums[j];
						}
						else if (Nums[j] >= Nums[i]){
							if (Nums[j] - Nums[i] <= shortestSpan)
								shortestSpan = Nums[j] - Nums[i];
						}
					}
				}
			}		
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << " : " << N << std::endl;
	}
	return (shortestSpan);
}

int Span::longestSpan(){
	unsigned int longestSpan = 0 ;
	try
	{
		if (curr_n <= 1)
			throw NotEnoughNumbers();
		else
		{
			for (size_t i = 0; i < curr_n; i++)
			{
				for (size_t j = 0; j < curr_n; j++)
				{
					if (i != j)
					{
						if (Nums[i] >= Nums[j]){
							if (Nums[i] - Nums[j] >= longestSpan)
								longestSpan = Nums[i] - Nums[j];
						}
						else if (Nums[j] >= Nums[i]){
							if (Nums[j] - Nums[i] >= longestSpan)
								longestSpan = Nums[j] - Nums[i];
						}
					}
				}
			}		
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << " : " << N << std::endl;
	}
	return (longestSpan);
}

void Span::fillSpan(){
	curr_n = N;
	srand(time(NULL));
	for (int i = 0; i < N; i++){
		int randNum = (rand() % (N + 1));//N+1 is the range of numbers that we will have
		int dup = 1;
		while (dup)//insures no duplicate numbers, remove this part if you need duplicates
		{
			if (i == 0)
				break;
			for (int j = 0; j <= i; j++)
			{
				if (Nums[j] == randNum)
					break;
				else if (j == i)
					dup = 0;
			}
			if (dup)
				randNum = (rand() % (N + 1));		
		}
		Nums[i] = randNum;
	}
}

int& Span::operator[](int index) {
	try{
		if (index >= N || index < 0)
			throw IndexOutOfBonds();		
	}
	catch(std::exception & e){
		std::cout << e.what() << " : " << index << std::endl;
	}
	return Nums[index];
}


Span &Span::operator=(const Span& a)
{
	N = a.N;
	if (Nums)
		delete[] Nums;
	Nums = new int[N];
	curr_n = a.curr_n;
	for (int i = 0; i < N; i++)
		Nums[i] = a.Nums[i];
	return (*this);
}

