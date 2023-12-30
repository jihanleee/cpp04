#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP
# include <string>
# include <iostream>

class WrongAnimal{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &a);
		virtual ~WrongAnimal();
		WrongAnimal & operator = (const WrongAnimal &a);
		std::string getType() const;
		void setType(std::string const &type);
		void makeSound(void) const;
};

#endif
