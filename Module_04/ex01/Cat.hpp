#ifndef CLASS_Cat
# define CLASS_Cat

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
	private:
		Brain *catBrain;
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat &operator= (const Cat& a);
		void makeSound() const;
};

#endif
