#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//const Animal* meta = new Animal();
	const Animal* dogo = new Dog();
	const Animal* cato = new Cat();
	Animal** manyAnimals = new Animal*[100];

	std::cout << dogo->getType() << " " << std::endl;
	std::cout << cato->getType() << " " << std::endl;
	dogo->makeSound(); //will output the cat sound!
	cato->makeSound();
	for (int i = 0; i < 100; i++) {
		if (i < 50)
			manyAnimals[i] = new Dog();
		else
			manyAnimals[i] = new Cat();
	}
	std::cout << "------------dog deep copy test----------\n";
	static_cast<Dog *>(manyAnimals[3])->think(4);
	static_cast<Dog *>(manyAnimals[4])->think(4);
	static_cast<Dog *>(manyAnimals[3])->memorize("bowwow");
	static_cast<Dog *>(manyAnimals[3])->think(4);
	*(static_cast<Dog *>(manyAnimals[4])) =  *static_cast<Dog *>(manyAnimals[3]);
	static_cast<Dog *>(manyAnimals[4])->think(4);

	Dog a = *static_cast<Dog *>(manyAnimals[4]);
	a.think(4);
	std::cout << "----------------------------------------\n";

	std::cout << "--------------cat deep copy test---------\n";
	static_cast<Cat *>(manyAnimals[53])->think(4);
	static_cast<Cat *>(manyAnimals[54])->think(4);
	static_cast<Cat *>(manyAnimals[53])->memorize("meowmeow");
	static_cast<Cat *>(manyAnimals[53])->think(4);
	*(static_cast<Cat *>(manyAnimals[54])) =  *static_cast<Cat *>(manyAnimals[53]);
	static_cast<Cat *>(manyAnimals[54])->think(4);

	Cat b(*static_cast<Cat *>(manyAnimals[4]));
	b.think(4);
	std::cout << "----------------------------------------\n";
	delete dogo;
	delete cato;
	for (int i = 0; i < 100; i++)
			delete manyAnimals[i];
	delete[] manyAnimals;
	return 0;
}
