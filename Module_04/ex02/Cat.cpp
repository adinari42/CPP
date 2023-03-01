#include	"Cat.hpp"

Cat::Cat()
{
	setType("Cat");
	catBrain = new Brain();
	std::cout << "Cat default constructor: created a weird looking Animal of " << type << " type" << std::endl;
}

Cat::Cat(const Cat &other)
{
	type = other.type;
	std::cout << "Cat copy constructor: created a weird looking Animal of " << type << " type" << std::endl;
	// catBrain = other.catBrain; //causes shallow copy, copies address of brain so it is shared between this and other
	catBrain = new Brain(*other.catBrain);
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor: animal of type " << type << " is put to rest" << std::endl;
	delete (catBrain);
}

Brain *Cat::getBrain(void)
{
	return (catBrain);
}

Cat &Cat::operator=(const Cat &other)
{
	type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << type << " Meow Meow bi###" << std::endl;
}