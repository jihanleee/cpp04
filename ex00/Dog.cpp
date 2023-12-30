# include <string>
# include <iostream>
# include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default constructor called\n";
	_type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog Destructor called\n";
}

Dog::Dog(const Dog &a):Animal(){
	std::cout << "Copy constructor called\n";
	_type = a._type;
}

Dog & Dog::operator = (const Dog &a) {
	_type = a._type;
	return (*this);
}

void Dog::makeSound(void) const{
	std::cout << "Meong Meong!\n";
}
