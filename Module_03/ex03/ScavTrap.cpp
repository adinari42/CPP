#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name_) : ClapTrap(name_)
{
	setHP(100);
	setAD(20);
	setEnergy(50);
}

void ScavTrap::guardGate(void)
{
	std::cout << getName() << " is now in gate keeper mode\n";
}