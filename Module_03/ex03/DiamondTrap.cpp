#include "DiamondTrap.hpp"

// DiamondTrap::DiamondTrap(std::string name_) : FragTrap(name_), ClapTrap(name_)//,ScavTrap(name_) //, 
DiamondTrap::DiamondTrap(std::string name_) : FragTrap(name_), ScavTrap(name_), ClapTrap(name_)//
{
	// DiamondTrap(name_) : ClapTrap(name_);

	
	// std::cout << "fragTrap construct test\n";
	// setHP(100);
	// setAD(100);
	// setEnergy(30);
}