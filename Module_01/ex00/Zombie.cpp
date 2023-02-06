
#include "Zombie.hpp"

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{
	static int n = 0;

	std::cout <<  "created zombie" << std::endl;
	this->name = "C";
	this->id = n++;
}

Zombie::~Zombie()
{
	std::cout << this->name << this->id << " deleted" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";	
}