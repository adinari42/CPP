#include "Fixed.hpp"

//default constructor that initializes the fixed-point number value to 0.
Fixed::Fixed(void) : fixed_point_val(0)
{
	std::cout << "Default constructor called" << std::endl;
}
//copy constructor.
Fixed::Fixed (const Fixed &a) 
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(a);
}
//an operator overload basically "overloads" the given operator like = sign
//so you can customize it's behaviour whenever it's called with the Fixed class
Fixed &Fixed::operator=(const Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	// this->setRawBits(a.getRawBits());
	this->fixed_point_val = a.getRawBits();
	return(*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point_val = raw;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_val);
}
