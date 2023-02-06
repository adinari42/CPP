#ifndef HUMANA_HPP
#define HUMANA_HPP


#include "Weapon.hpp"

class HumanA {
	private:
		Weapon		&Weapon;// a reference has to be initialized
		std::string	name;
	
	public:
		void	attack(void);
		HumanA(std::string name_ , class::Weapon &Weapon_);
		~HumanA(void);
};

#endif