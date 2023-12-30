#include <string>
#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default constructor called\n";
	_type = "Dog";
	_brain = new Brain();
	_brain->setIdeas("Dogfood!");
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
	if (this->_brain)
		delete this->_brain;
	_type = a._type;
	_brain = new Brain(*a._brain);
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Meong Meong!\n";
}

Brain * Dog::_getBrain() {
	return _brain;
}

void Dog::think (int i) {
	if (i > 100) {
		std::cout << "my brain is not that big\n";
		return ;
	}
	if (i < 0) {
		std::cout << "my brain is not that small\n";
		return ;
	}
	std::cout << _getBrain()->getIdea(i) << std::endl;
}

void Dog::memorize(std::string idea) {
	_getBrain()->setIdeas(idea);
}
