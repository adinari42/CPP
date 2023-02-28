#ifndef CLASS_WrongCat
# define CLASS_WrongCat

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &other);
		~WrongCat();
		WrongCat &operator= (const WrongCat& a);
		void makeSound() const;
};

#endif
