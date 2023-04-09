#include "Animal.hpp"

Animal::Animal() : type("Default")
{
	std::cout << "Animal default constructor: created a weird looking Animal of " << type << " type" << std::endl;
}

Animal::Animal(const Animal &other)
{
	type = other.type;
}
Animal &Animal::operator=(const Animal &other)
{
	type = other.type;
	return (*this);
}

/*making the destructor virtual in a base class ensures
that the correct destructor is called 
when an object of a derived class is destroyed*/
Animal::~Animal(void)
{
	std::cout << "Animal destructor: animal of type " << type << " is put to rest" << std::endl;
}

void Animal::setType(std::string type_)
{
	type = type_;
}

std::string Animal::getType(void) const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << type << " Animal sound" << std::endl;
}
