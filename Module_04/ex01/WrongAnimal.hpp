#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <vector>

class WrongAnimal 
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal(void);
		WrongAnimal &operator=(const WrongAnimal &other);
		void setType(std::string type_);
		std::string getType(void) const;
		void makeSound() const;//any derived class can override this funct
};

#endif