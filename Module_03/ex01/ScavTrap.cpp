#include "ScavTrap.hpp"

// ScavTrap::ScavTrap(std::string name_) //: HP(100), energy(50), AD(20)
// {
// 	setName(name_);
// 	setHP();
// 	// HP = 100;
// 	// energy = 50;
// 	// AD = 20;
// }

void ScavTrap::guardGate(void)
{
	std::cout << getName() << " is now in gate keeper mode\n";
}