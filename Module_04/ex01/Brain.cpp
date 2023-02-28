#include	"Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &a)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = a.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain default deconstructor" << std::endl;
}

// Brain &Brain::operator=(const Brain& a)
// {
	
// }
