#ifndef Dog_HPP
# define Dog_HPP
# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(Dog &a);
		~Dog();
		Dog & operator = (const Dog &a);
		void makeSound() const;
};

#endif
