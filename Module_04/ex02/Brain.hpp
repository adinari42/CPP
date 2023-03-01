
#ifndef CLASS_Brain
# define CLASS_Brain

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <vector>

class Brain
{
	private:
	 	std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &a);
		~Brain();
		Brain &operator= (const Brain& a);
		void addThought(std::string thought);
		void showThough();
};

#endif