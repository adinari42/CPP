#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed c;
Fixed d(1.123f);
Fixed e(1.125f);

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
if (a <= b)
	std::cout << "a <= b" << std::endl;
if (a >= b)
	std::cout << "a >= b" << std::endl;
std::cout << "min: " << Fixed::min( a, b ) << std::endl;
std::cout << "max: " << Fixed::max( a, b ) << std::endl;
std::cout << "a+b= " << a + b << std::endl;
std::cout << "a*b= " << a * b << std::endl;
c = b / a;
std::cout << "b/a= " << b / a << std::endl;
std::cout << "d+e= " << d + e << std::endl;
std::cout << "d-e= " << d - e << std::endl;
if (d >= e)
	std::cout << "d >= e" << std::endl;
if (d <= e)
	std::cout << "d <= e" << std::endl;

return 0;
}