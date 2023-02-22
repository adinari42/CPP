#include "Fixed.hpp"

//default constructor that initializes the fixed-point number value to 0.
Fixed::Fixed(void) : fixed_point_val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/*constructors*/

//in both int and float cases we are bitshifting to the left to create margin
//and eliminate the fractional part until it's brought back later
Fixed::Fixed(const int intNum)
{
	//bitshifting to the left
	fixed_point_val = intNum << fract_bit;//bitshifting to the left by fract_bit bits
}

Fixed::Fixed(const float floatNum)
{
	/*float method of bitshifting to the left , plus roundf to get the nearest first digit which is 2
	or else it will be incorrect (42.418)*/
	fixed_point_val = roundf(floatNum * (1 << fract_bit));
}
//copy constructor	.
Fixed::Fixed (const Fixed &a) 
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_val = a.getRawBits();
}
/**************************************/

//converts the fixed-point value to a floating-point value.
float Fixed::toFloat( void ) const
{
	//division by 2^fract_bit bitshifts the number to the right, creating fractional part
	float floatRes = static_cast<float>(fixed_point_val) / static_cast<float>(1 << fract_bit);
	//we cant bitshift / divide a float by 2^8 so we have to bitshift the int 1 by 2^8
	//then divide the float by it
	return (floatRes);
}

//converts the fixed-point value to an integer value
int Fixed::toInt( void ) const
{
	//division by 2^fract_bit binary shifts the number to the right, creating integer part
	int intRes = fixed_point_val >> fract_bit;
	return (intRes);
}

/**************************************/


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
	/*
		uses toFloat() to devide the number by 2^8 because the current value is
		multiplied by 2^8 and is bigger than the original.
	*/
	// os << "insertion assignment operator called" << std::endl;
	os << a.toFloat();
	return(os);
}


/**************************************/


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
