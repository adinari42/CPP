#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap(std::string name_) : ClapTrap(name_)
		{
			setHP(100);
			setAD(20);
			setEnergy(50);
		};
		void guardGate();
	// 	~ScavTrap(void);
};