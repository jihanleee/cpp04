#ifndef Cat_HPP
# define Cat_HPP
# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(const Cat &a);
		~Cat();
		Cat & operator = (const Cat &a);
		void makeSound(void) const;
};

#endif
