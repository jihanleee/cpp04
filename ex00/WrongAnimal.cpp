# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Default constructor called\n";
	_type = "base class";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &a) {
	std::cout << "Copy constructor called\n";
	_type = a._type;
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &a) {
	_type = a._type;
	return (*this);
}

std::string WrongAnimal::getType() const {
	return (_type);
}

void WrongAnimal::setType(std::string const &type) {
	_type = type;
}

void WrongAnimal::makeSound(void) const{
	std::cout << "Wrong sound because makeSound is not virtual\n";
}
