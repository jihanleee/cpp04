# include <string>
# include <iostream>
# include "Cat.hpp"
# include "Brain.hpp"

Cat::Cat() {
	std::cout << "Cat Default constructor called\n";
	_type = "Cat";
	_brain = new Brain();
	_brain->setIdeas("Catfood!");
}

Cat::~Cat() {
	std::cout << "Cat Destructor called\n";
	delete _brain;
}

Cat::Cat(const Cat &a) : Animal(), _brain(new Brain(*a._brain)) {
	std::cout << "Copy constructor called\n";
	_type = a._type;
}

Cat & Cat::operator = (const Cat &a) {
	if (this->_brain)
		delete this->_brain;
	_type = a._type;
	_brain = new Brain(*a._brain);
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout << "Yaong Yaong!\n";
}

Brain * Cat::_getBrain() {
	return _brain;
}

void Cat::think (int i) {
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

void Cat::memorize(std::string idea) {
	_getBrain()->setIdeas(idea);
}
