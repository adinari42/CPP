#include	"WrongCat.hpp"

WrongCat::WrongCat()
{
	setType("WrongCat");
	std::cout << "WrongCat default constructor: created a weird looking WrongAnimal of " << type << " type" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	type = other.type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor: WrongAnimal of type " << type << " is put to rest" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	type = other.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << type << " Wrong Meow" << std::endl;
}