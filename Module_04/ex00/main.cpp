#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output the default sound!
	delete meta;
	delete i;
	// const WrongAnimal* meta = new WrongAnimal();
	// // const Animal* j = new Dog();
	// const WrongAnimal* i = new WrongCat();
	// // std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// // j->makeSound(); //will output the dog sound!
	// meta->makeSound(); //will output the default sound!
system("leaks ex00");
	return 0;
}