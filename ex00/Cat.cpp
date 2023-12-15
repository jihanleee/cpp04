# include <string>
# include <iostream>
# include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default constructor called\n";
	_type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat Destructor called\n";
}

Cat::Cat(Cat &a):Animal(){
	std::cout << "Copy constructor called\n";
	_type = a._type;
}

Cat & Cat::operator = (const Cat &a) {
	_type = a._type;
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout << "Yaong Yaong!\n";
}
