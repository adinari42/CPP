#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->Weapon.getType() << std::endl;
}


HumanA::HumanA(std::string name_ , class::Weapon &Weapon_) : name(name_), Weapon(Weapon_)
{
	/*second way of initialization*/
	// this->name = nam;
	// this->Weapon = Weap;
}


HumanA::~HumanA(void)
{

}