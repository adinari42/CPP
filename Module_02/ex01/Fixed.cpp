#include "Fixed.hpp"

//default constructor that initializes the fixed-point number value to 0.
Fixed::Fixed(void) : fixed_point_val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNum)
{
	this->toInt();
	this->fixed_point_val = intNum;
}

Fixed::Fixed(const float floatNum)
{
	this->toFloat();
	this->fixed_point_val = floatNum;
}

// that converts the fixed-point value to a floating-point value.
float Fixed::toFloat( void ) const
{
	return(static_cast<float>(this->fixed_point_val));
}

// that converts the fixed-point value to an integer value
int Fixed::toInt( void ) const
{
	return(static_cast<int>(this->fixed_point_val));
}


//copy constructor	.
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
	this->fixed_point_val = a.getRawBits();
	return(*this);
}

//An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter
std::ostream &operator<<(std::ostream& os, const Fixed &a)
{
	// os << "insertion assignment operator called" << std::endl;
	os << a.toFloat();
	// std::cout << toFloat();
	return(os);
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
