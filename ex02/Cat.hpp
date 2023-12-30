#ifndef Cat_HPP
# define Cat_HPP
# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *_brain;
		Brain * _getBrain();
	public:
		Cat();
		Cat(const Cat &a);
		~Cat();
		Cat & operator = (const Cat &a);
		void makeSound(void) const;
		void think(int i);
		void memorize(std::string idea);
};

#endif
