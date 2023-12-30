# include <string>
# include <iostream>
# include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal Default constructor called\n";
}

Animal::~Animal() {
	std::cout << "Animal Destructor called\n";
}

Animal::Animal(const Animal &a) {
	std::cout << "Copy constructor called\n";
	_type = a._type;
}

Animal & Animal::operator = (const Animal &a) {
	_type = a._type;
	return (*this);
}

std::string Animal::getType() const {
	return (_type);
}

void Animal::setType(std::string const &type) {
	_type = type;
}

void Animal::makeSound(void) const{
	std::cout << "no sound\n";
}
