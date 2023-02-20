#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name_) : name(name_), HP(10), energy(10), AD(0)
{
	std::cout << "constructor: created a weird looking clapTrap called " << name << std::endl;
}
ClapTrap::~ClapTrap(void)
{
	std::cout << "destructor: " << name << " is put to rest" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
	if (energy > 0 && HP > 0)
	{
		energy -= 1;
		std::cout << name << " attacked " << target << " dealing " << AD << " damage! " << HP << " HP, " << energy << " energy left" << std::endl;
	}
	else
		std::cout << name << ": insufficient energy to attack!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy > 0 && HP > 0)
	{
		std::cout << name << " repaired for " << amount << " HP" << std::endl;
		HP += amount;
	}
	else
		std::cout << name << ": insufficient energy to repair!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " received damage" << std::endl;
	HP -= amount;
	if (HP < 0)
		HP = 0;
}