
#include "Zombie.hpp"

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
	static int n = 0;

	std::cout <<  "created zombie " << n << std::endl;
	this->name = "Default";
	this->id = n++;
}

Zombie::~Zombie()
{
	std::cout   << "deleted zombie " << this->name << " " << this->id << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n" ;
	// std::cout << this->name << this->id << ": BraiiiiiiinnnzzzZ...\n" ;	
}