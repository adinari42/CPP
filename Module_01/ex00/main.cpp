#include "Zombie.hpp"

int	main(void)
{
	Zombie *testZomb1;
	Zombie testZomb2;

	testZomb1 = newZombie("A");
	testZomb1->announce();
	randomChump("B");
	delete(testZomb1);
	return (0);
}