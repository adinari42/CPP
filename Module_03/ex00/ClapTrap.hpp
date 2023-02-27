#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <vector>

class ClapTrap {
	protected:
		std::string	name;
		int		HP;
		int		energy;
		int		AD;
	public:
		ClapTrap();
		ClapTrap(std::string name_);
		ClapTrap(const ClapTrap &other);
		~ClapTrap(void);
		ClapTrap &operator=(const ClapTrap &other);
		void	attack(const std::string& target);//read only ref
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void setName(std::string name_);
		std::string getName(void);
		void setHP(int HP_);
		int getHP(void);
		void setAD(int AD_);
		int getAD(void);
		void setEnergy(int energy_);
		int getEnergy(void);
};

#endif