#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
			std::string	name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name_);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);
		~DiamondTrap(void);
		void whoAmI(void);
		void attack(const std::string& target);
};

#endif