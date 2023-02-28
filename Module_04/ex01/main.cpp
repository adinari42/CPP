#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;

	{
		Dog* a = new Dog();
		Dog* b = new Dog(*a);

		a->getBrain()->print();
		delete a;

		b->getBrain()->print();
	}
	system("leaks ex01");
	return 0;
}

