#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << getName() << " is a fragtrap" << std::endl;
	setName("Default");
	setHP(100);
	setAD(30);
	setEnergy(100);
}

FragTrap::FragTrap(std::string name_) : ClapTrap(name_)
{
	std::cout << getName() << " is a fragtrap" << std::endl;
	setHP(100);
	setAD(30);
	setEnergy(100);
}

FragTrap::FragTrap(const FragTrap &other)
{
	name = other.name;
	HP = other.HP;
	AD = other.AD;
	energy = other.energy;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	name = other.name;
	HP = other.HP;
	AD = other.AD;
	energy = other.energy;
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (energy > 0 && HP > 0)
	{
		energy -= 1;
		std::cout << name << " FragTrap attacked " << target << " dealing " << AD << " damage! " << HP << " HP, " << energy << " energy left" << std::endl;
	}
	else
		std::cout << name << ": insufficient energy to attack!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << getName() << " gives high fives to the face!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << getName() << " FragTrap was destructed" << std::endl;
}