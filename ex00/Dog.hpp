#ifndef Dog_HPP
# define Dog_HPP
# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(Dog &a);
		~Dog();
		Dog & operator = (const Dog &a);
		void makeSound() const;
};

#endif
