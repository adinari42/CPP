#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->Weapon->getType() << std::endl;
}

// HumanB::HumanB(void)
// {
// }

HumanB::HumanB(std::string name_) : name(name_)
{
	// this->name = nam;
	// this->Weapon = Weap;
}

HumanB::~HumanB(void)
{
}

void HumanB::setWeapon(class::Weapon &Weapon_)
{
	Weapon = &Weapon_;
}