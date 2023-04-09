#ifndef CLASS_Dog
# define CLASS_Dog

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog &operator=(const Dog& a);
		void makeSound() const;
};

#endif