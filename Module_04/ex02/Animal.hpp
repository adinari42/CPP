#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <vector>

class Animal 
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal &other);
		virtual ~Animal(void);//allows for derived classes to override the constructor
		Animal &operator=(const Animal &other);
		void setType(std::string type_);
		std::string getType(void) const;
		virtual void makeSound() const = 0;//any derived class can override this funct
		//setting a class method to 0 / making it a pure virtual function makes the class abstract
		//an abstract class cannot be instantiated
};

#endif