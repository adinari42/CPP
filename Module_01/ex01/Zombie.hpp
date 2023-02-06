#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <vector>

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

Zombie* zombieHorde( int N, std::string name);

#endif