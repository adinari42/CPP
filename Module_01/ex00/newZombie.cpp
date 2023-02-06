#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie	*NewZomb = new Zombie;
	
	NewZomb->set_name(name);
	return NewZomb;
}
