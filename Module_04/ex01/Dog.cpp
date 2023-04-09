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
	std::cout << "Dog copy constructor: created a weird looking Animal of " << type << " type" << std::endl;
	// dogBrain = other.dogBrain; //causes shallow copy, copies address of brain so it is shared between this and other
	dogBrain = new Brain(*other.dogBrain);//deep copy
}

Dog::~Dog()
{
	std::cout << "Dog destructor: animal of type " << type << " is put to rest" << std::endl;
	delete (dogBrain);
}

Brain *Dog::getBrain(void)
{
	return (dogBrain);
}

Dog &Dog::operator=(const Dog& other)
{
	type = other.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << type << " Woof Woof bi###" << std::endl;
}
