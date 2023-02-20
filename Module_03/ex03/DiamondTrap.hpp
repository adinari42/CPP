#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.cpp"
// #include "ClapTrap.hpp"
class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(std::string name_);
		void whoAmI(void);
};

#endif