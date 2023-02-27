#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	ScavTrap Scavtmp;
	std::cout << getName() << " is a DiamondTrap" << std::endl;
	setName("Default");
	setHP(FragTrap::getAD());
	setAD(FragTrap::getHP());
    setEnergy(Scavtmp.getEnergy());
}

DiamondTrap::DiamondTrap(std::string name_) : FragTrap(name_), ScavTrap(name_), ClapTrap(name_ + "_clap_name"), name(name_)
{
	ScavTrap Scavtmp;
    setAD(FragTrap::getAD());
    setHP(FragTrap::getHP());
    setEnergy(Scavtmp.getEnergy());
    std::cout << getName() << " is a DiamondTrap" << std::endl;
	std::cout << "Diamond stats: AD " << AD << " HP " << HP << " energy " << energy << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << getName() << " DiamondTrap was destructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	name = other.name;
	HP = other.HP;
	AD = other.AD;
	energy = other.energy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	name = other.name;
	HP = other.HP;
	AD = other.AD;
	energy = other.energy;
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is " << name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}