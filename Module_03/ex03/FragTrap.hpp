#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{	
	public:
		FragTrap();
		FragTrap(std::string name_);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
		void	attack(const std::string& target);//read only ref
		void highFivesGuys(void);
		~FragTrap(void);
};

#endif