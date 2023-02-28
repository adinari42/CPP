#include	"Cat.hpp"

Cat::Cat()
{
	setType("Cat");
	std::cout << "Cat default constructor: created a weird looking Animal of " << type << " type" << std::endl;
}

Cat::Cat(const Cat &other)
{
	type = other.type;
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor: animal of type " << type << " is put to rest" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << type << " Meow Meow" << std::endl;
}