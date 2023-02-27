#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << getName() << " is a scavtrap" << std::endl;
	setName("Default");
	setHP(100);
	setAD(20);
	setEnergy(50);
}
ScavTrap::ScavTrap(std::string name_) : ClapTrap(name_)
{
	std::cout << getName() << " is a scavtrap" << std::endl;
	setHP(100);
	setAD(20);
	setEnergy(50);
}
ScavTrap::ScavTrap(const ScavTrap &other)
{
	name = other.name;
	HP = other.HP;
	AD = other.AD;
	energy = other.energy;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	name = other.name;
	HP = other.HP;
	AD = other.AD;
	energy = other.energy;
	return (*this);
}
void ScavTrap::guardGate(void)
{
	std::cout << getName() << " is now in gate keeper mode\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << getName() << " scavtrap was destructed" << std::endl;
}