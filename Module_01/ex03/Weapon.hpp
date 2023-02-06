#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <vector>

class Weapon {
	private:
		std::string type;
	
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		void setType(std::string wType);
		const std::string &getType(void);
};

#endif