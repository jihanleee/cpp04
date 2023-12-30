#ifndef Animal_HPP
# define Animal_HPP
# include <string>
# include <iostream>

class Animal{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &a);
		virtual ~Animal();
		Animal & operator = (const Animal &a);
		std::string getType() const;
		void setType(std::string const &type);
		virtual void makeSound(void) const = 0;
};

#endif
