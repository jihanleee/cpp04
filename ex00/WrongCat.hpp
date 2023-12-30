#ifndef WrongCat_HPP
# define WrongCat_HPP
# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(const WrongCat &a);
		~WrongCat();
		WrongCat & operator = (const WrongCat &a);
		void makeSound(void) const;
};

#endif
