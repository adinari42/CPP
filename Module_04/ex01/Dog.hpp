#ifndef CLASS_Dog
# define CLASS_Dog

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
	private:
		Brain *dogBrain;
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog &operator=(const Dog& a);
		void makeSound() const;
		void getName() const;
};

#endif