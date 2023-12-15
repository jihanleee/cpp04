#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* k = new WrongCat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	k->makeSound();
	delete i;
	delete j;
	delete meta;
	delete k;
	return 0;
}
