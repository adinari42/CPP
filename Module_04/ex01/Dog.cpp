#include	"Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	dogBrain = new Brain();
	std::cout << "Dog default constructor: created a weird looking Animal of " << type << " type" << std::endl;
}

Dog::Dog(const Dog &other)
{
	type = other.type;
	dogBrain = new Brain(*other.dogBrain);
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor: animal of type " << type << " is put to rest" << std::endl;
	delete (dogBrain);
}

Dog &Dog::operator=(const Dog& other)
{
	type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << type << " Woof Woof" << std::endl;
}
