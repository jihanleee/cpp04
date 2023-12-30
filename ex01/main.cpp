#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal** manyAnimals = new Animal*[100];

	for (int i = 0; i < 100; i++) {
		if (i < 50)
			manyAnimals[i] = new Dog();
		else
			manyAnimals[i] = new Cat();
	}
	static_cast<Dog *>(manyAnimals[3])->think(4);
	static_cast<Dog *>(manyAnimals[4])->think(4);
	static_cast<Dog *>(manyAnimals[3])->memorize("bowwow");
	static_cast<Dog *>(manyAnimals[3])->think(4);
	*(static_cast<Dog *>(manyAnimals[4])) =  *static_cast<Dog *>(manyAnimals[3]);
	static_cast<Dog *>(manyAnimals[4])->think(4);

	Dog a = *static_cast<Dog *>(manyAnimals[4]);
	a.think(4);
	for (int i = 0; i < 100; i++)
			delete manyAnimals[i];
	delete[] manyAnimals;
	return 0;
}
