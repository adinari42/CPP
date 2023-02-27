#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap1("karim benzema");

	clap1.attack("ennemy");
	std::cout << clap1.getName() << " has " << clap1.getEnergy() << ", " << clap1.getAD() << " AD," << clap1.getHP() << " HP" << std::endl;
	return 0;
}