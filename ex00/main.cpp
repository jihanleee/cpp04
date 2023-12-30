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
	const WrongAnimal* k = new WrongCat();

	std::cout << std::endl;
	std::cout << meta->getType() << ":" ;
	meta->makeSound();
	std::cout << j->getType() << ":" ;
	j->makeSound();
	std::cout << i->getType() << ":" ;
	i->makeSound(); //will output the cat sound!
	std::cout << k->getType() << ":" ;
	k->makeSound();
	std::cout << std::endl;

	delete i;
	delete j;
	delete meta;
	delete k;
	return 0;
}
