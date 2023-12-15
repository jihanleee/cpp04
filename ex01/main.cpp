#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dogo = new Dog();
	const Animal* cato = new Cat();
	Animal** manyAnimals = new Animal*[100];

	std::cout << meta->getType() << " " << std::endl;
	std::cout << dogo->getType() << " " << std::endl;
	std::cout << cato->getType() << " " << std::endl;
	meta->makeSound();
	dogo->makeSound(); //will output the cat sound!
	cato->makeSound();
	for (int i = 0; i < 100; i++) {
		if (i < 50)
			manyAnimals[i] = new Dog();
		else
			manyAnimals[i] = new Cat();
	}
	delete dogo;
	delete cato;
	delete meta;
	for (int i = 0; i < 100; i++)
			delete manyAnimals[i];
	delete[] manyAnimals;
	return 0;
}
