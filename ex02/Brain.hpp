#ifndef Brain_HPP
# define Brain_HPP
# include <string>
# include <iostream>

class Brain{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain &a);
		virtual ~Brain();
		Brain & operator = (const Brain &a);
		void setIdeas (std::string idea);
		std::string getIdea (int i);
};

#endif