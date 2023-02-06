#include "Weapon.hpp"


//setter
void	Weapon::setType(std::string wType)
{
	this->type = wType;
}

//getter
const std::string	&Weapon::getType(void)
{
	return (this->type);
}

//constructors
Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

//destructor
Weapon::~Weapon(void)
{
	// this->setType(type);
}