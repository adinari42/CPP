#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	Zombie *Horde = new Zombie[N];
	int i;

	i = 0;
	while (i < N)
	{
		Horde[i].set_name(name);
		i++;
	}
	return (Horde);
}