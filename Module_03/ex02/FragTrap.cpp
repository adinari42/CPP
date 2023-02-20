#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name_) : ClapTrap(name_)
{
	// std::cout << "fragTrap construct test\n";
	setHP(100);
	setAD(100);
	setEnergy(30);
};

void FragTrap::highFivesGuys(void)
{
	std::cout << getName() << " gives high fives to the face!\n";
}