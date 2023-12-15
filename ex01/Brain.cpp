# include <string>
# include <iostream>
# include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default constructor called\n";
}

Brain::~Brain() {
	std::cout << "Brain Destructor called\n";
}

Brain::Brain(Brain &a) {
	std::cout << "Copy constructor called\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = a._ideas[i];
}

Brain & Brain::operator = (const Brain &a) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = a._ideas[i];
	return (*this);
}

void Brain::setIdeas (std::string idea) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
}
