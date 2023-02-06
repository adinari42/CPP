#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	*NewZomb;
	
	NewZomb = newZombie(name);
	NewZomb->announce();
	delete (NewZomb);
}