#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>

class Zombie {
	private:
		std::string name;
		int			id;
	
	public:
		void	set_name(std::string name);
		Zombie(void);
		~Zombie(void);
		void	announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif