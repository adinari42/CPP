// #include "FragTrap.hpp"
// #include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	// ClapTrap clap1("benzema");
	// ScavTrap scav1("mbape");
	// FragTrap frag1("lukaku");
	DiamondTrap diamond1("zlatan");
	diamond1.whoAmI();
	diamond1.attack("ennemy1");
	// clap1.attack("ennemy1");
	// scav1.attack("ennemy2");
	// scav1.guardGate();
	// frag1.attack("ennemy3");
	// frag1.highFivesGuys();

	return 0;
}