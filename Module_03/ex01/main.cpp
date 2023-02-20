#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap1("benzema");
	ScavTrap scav1("mbape");

	clap1.attack("ennemy1");
	clap1.attack("ennemy1");
	scav1.attack("ennemy2");
	scav1.attack("ennemy2");
	scav1.guardGate();
	return 0;
}