#include "whatever.hpp"

int main(void)
{
	//pdf main
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


//my main
	// int x = 1;
	// int y = 2;

	// std::cout << "x     = " << x << std::endl;
	// std::cout << "y     = " << y << std::endl;
	// std::cout << "x &   = " << &x << std::endl;
	// std::cout << "y &   = " << &y << std::endl;
	// swap(x, y);
	// std::cout << "--------after swap--------" << std::endl;
	// std::cout << "x     = " << x << std::endl;
	// std::cout << "y     = " << y << std::endl;
	// std::cout << "x &   = " << &x << std::endl;
	// std::cout << "y &   = " << &y << std::endl;
	// std::cout << "--------function templ--------" << std::endl;
	// std::cout << "min   = " << min(x, y) << std::endl;
	// std::cout << "max   = " << max(x, y) << std::endl;
	// std::cout << "min & = " << &min(x, y) << std::endl;
	// std::cout << "max & = " << &max(x, y) << std::endl;
	// std::cout << "--------same value comparison--------" << std::endl;
	// int z = x;
	// std::cout << "x &   = " << &x << std::endl;
	// std::cout << "z &   = " << &z << std::endl;
	// std::cout << "min   = " << &min(x, z) << std::endl;//when equal we get the result on the right
	// std::cout << "max & = " << &min(z, x) << std::endl;//when equal we get the result on the right

	
	return 0;
}