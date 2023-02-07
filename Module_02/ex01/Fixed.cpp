#include "Fixed.hpp"

//default constructor that initializes the fixed-point number value to 0.
Fixed::Fixed(void) : fixed_point_val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intNum)
{
	// this->toInt();
	// this->fixed_point_val = intNum;
	this->fixed_point_val = intNum << this->fract_bit;//bitshifting to the left by fract_bit bits

}

Fixed::Fixed(const float floatNum)
{
	// this->toFloat();
	// this->fixed_point_val = floatNum;
	this->fixed_point_val = roundf(floatNum * (1 << this->fract_bit));
}

// that converts the fixed-point value to a floating-point value.
float Fixed::toFloat( void ) const
{
	// float res = static_cast<float>(this->fixed_point_val);
	// return(res);
	float converted = (float)(this->fixed_point_val) / (float)(1 << this->fract_bit);
	return (converted);
}

// that converts the fixed-point value to an integer value
int Fixed::toInt( void ) const
{
	// int res = static_cast<int>(this->fixed_point_val);
	// return(res);
	int16_t converted = this->fixed_point_val >> this->fract_bit;
	return (converted);
}


//copy constructor	.
Fixed::Fixed (const Fixed &a) 
{
	std::cout << "Copy constructor called" << std::endl;
	// Fixed::operator=(a);
	this->fixed_point_val = a.getRawBits();
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
