#include	"Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &a)
{
	std::cout << "Brain copy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = a.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain default destructor" << std::endl;
}

Brain &Brain::operator=(const Brain& a)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = a.ideas[i];
	return (*this);
}

void Brain::addThought(std::string thought)
{
	static int i = 0;

	if (i == 100)
		i = 0;
	ideas[i] = thought;
	i++;
}

void Brain::showThough()
{
	int i = 0;
	while (ideas[i] != "")
	{
		std::cout << ideas[i] << std::endl;
		i++;
	}
}
