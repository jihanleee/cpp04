# include <string>
# include <iostream>
# include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Default constructor called\n";
	_type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called\n";
}

WrongCat::WrongCat(const WrongCat &a):Animal(){
	std::cout << "Copy constructor called\n";
	_type = a._type;
}

WrongCat & WrongCat::operator = (const WrongCat &a) {
	_type = a._type;
	return (*this);
}

void WrongCat::makeSound(void) const{
	std::cout << "Im a WrongCat!\n";
}
