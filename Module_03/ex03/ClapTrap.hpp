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
	private:
		std::string	name;
		int		HP;
		int		energy;
		int		AD;
	public:
		ClapTrap(std::string name_);
		~ClapTrap(void);
		void	attack(const std::string& target);//read only ref
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void setName(std::string name_)
		{
			name = name_;
		};
		void setHP(int HP_)
		{
			HP = HP_;
		};
		void setAD(int AD_)
		{
			AD = AD_;
		};
		void setEnergy(int energy_)
		{
			energy = energy_;
		};
		std::string getName(void)
		{
			return name;
		};
};

#endif