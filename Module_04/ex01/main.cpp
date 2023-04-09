#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *k = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;


	Animal *zoo[6] = 
	{
		new Dog(),
		new Dog(),
		new Dog(),
		new Cat(),
		new Cat(),
		new Cat(),
	};
	for (int j = 0; j < 6; j++)
		delete zoo[j];

	Dog* a = new Dog();
	Dog* b = new Dog(*a);
	a->getBrain()->addThought("dog thought!");
	a->getBrain()->addThought("im actually a raccoon!");
	a->getBrain()->showThough();
	delete a;//try switching constructor to shallow copy, this part will cause an error
	delete b;
	b->getBrain()->showThough();

	system("leaks ex01");
	return 0;
}

