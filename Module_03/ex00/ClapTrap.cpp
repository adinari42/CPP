#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), HP(10), energy(10), AD(0)
{
	std::cout << "default constructor: created a weird looking clapTrap called " << name << std::endl;
}
ClapTrap::ClapTrap(std::string name_) : name(name_), HP(10), energy(10), AD(0)
{
	std::cout << "constructor: created a weird looking clapTrap called " << name << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
	name = other.name;
	HP = other.HP;
	AD = other.AD;
	energy = other.energy;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	name = other.name;
	HP = other.HP;
	AD = other.AD;
	energy = other.energy;
	return (*this);
}
ClapTrap::~ClapTrap(void)
{
	std::cout << "destructor: " << name << " is put to rest" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
	if (energy > 0 && HP > 0)
	{
		energy -= 1;
		std::cout << name << " attacked " << target << " dealing " << AD << " damage! " << HP << " HP, " << energy << " energy left" << std::endl;
	}
	else
		std::cout << name << ": insufficient energy to attack!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy > 0 && HP > 0)
	{
		std::cout << name << " repaired for " << amount << " HP" << std::endl;
		HP += amount;
	}
	else
		std::cout << name << ": insufficient energy to repair!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " received " << amount << " damage" << std::endl;
	HP -= amount;
	if (HP < 0)
		HP = 0;
}
void ClapTrap::setName(std::string name_)
{
	name = name_;
}
void ClapTrap::setHP(int HP_)
{
	HP = HP_;
}
void ClapTrap::setAD(int AD_)
{
	AD = AD_;
}
void ClapTrap::setEnergy(int energy_)
{
	energy = energy_;
}
std::string ClapTrap::getName(void)
{
	return name;
}
int ClapTrap::getHP(void)
{
	return HP;
}

int ClapTrap::getAD(void)
{
	return AD;
}
int ClapTrap::getEnergy(void)
{
	return energy;
}
