#ifndef WrongCat_HPP
# define WrongCat_HPP
# include <string>
# include <iostream>
# include "Animal.hpp"

class WrongCat : public Animal{
	public:
		WrongCat();
		WrongCat(WrongCat &a);
		~WrongCat();
		WrongCat & operator = (const WrongCat &a);
		void makeSound(void) const;
};

#endif
