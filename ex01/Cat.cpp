# include <string>
# include <iostream>
# include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default constructor called\n";
	_type = "Cat";
	_brain = new Brain();
	_brain->setIdeas("Catfood!\n");
}

Cat::~Cat() {
	std::cout << "Cat Destructor called\n";
	delete _brain;
}

Cat::Cat(Cat &a) : Animal(), _brain(new Brain(*a._brain)) {
	std::cout << "Copy constructor called\n";
	_type = a._type;
}

Cat & Cat::operator = (const Cat &a) {
	_type = a._type;
	_brain = a._brain;
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout << "Yaong Yaong!\n";
}
