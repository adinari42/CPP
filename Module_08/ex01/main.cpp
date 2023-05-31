#include "Span.hpp"

int main(void)
{
	try{
		int size = 5;
		Span sp = Span(size);
		sp.fillSpan();
		for (int i = 0; i < size; i++)
			std::cout << "sp["<< i << "] : " << sp[i] << std::endl;
		// Span sp1(sp);//copying with copy constructor (deep copy)
		Span sp1 = sp;//copying with copy assignment overlaod (deep copy)
		sp1[3] = 22;
		for (int i = 0; i < size; i++)
			std::cout << "sp1["<< i << "] : " << sp1[i] << std::endl;
		std::cout << std::endl << "shortest span res:" << std::endl;;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl ;
		std::cout << std::endl << "longest span res:" << std::endl;;
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}