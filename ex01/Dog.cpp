#include <string>
#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default constructor called\n";
	_type = "Dog";
	_brain = new Brain();
	_brain->setIdeas("Dogfood!\n");
}

Dog::~Dog() {
	std::cout << "Dog Destructor called\n";
	delete _brain;
}

Dog::Dog(Dog &a) : Animal(), _brain(new Brain(*a._brain)) {
	std::cout << "Copy constructor called\n";
	_type = a._type;
}

Dog & Dog::operator=(const Dog &a) {
	_type = a._type;
	_brain = a._brain;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Meong Meong!\n";
}
