#ifndef HUMANB_HPP
#define HUMANB_HPP


#include "Weapon.hpp"

class HumanB {
	private:
		Weapon		*Weapon;// a pointer doesn't need to be initialized, so we can declare without initializing weapon
		std::string	name;
	public:
		HumanB(std::string name_);
		~HumanB(void);
		void	attack(void);
		void setWeapon(class::Weapon &Weapon_);
};

#endif
