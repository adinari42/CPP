#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default")
{
	std::cout << "WrongAnimal default constructor: created a weird looking WrongAnimal of " << type << " type" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	type = other.type;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	type = other.type;
	return (*this);
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal deconstructor: WrongAnimal of type " << type << " is put to rest" << std::endl;
}

void WrongAnimal::setType(std::string type_)
{
	type = type_;
}

std::string WrongAnimal::getType(void) const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << type << " wrong Animal sound" << std::endl;
}