#ifndef CLASS_Cat
# define CLASS_Cat

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat &operator=(const Cat& a);
		void makeSound() const;
};

#endif
