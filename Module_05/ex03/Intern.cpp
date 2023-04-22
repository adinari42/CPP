#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::Intern(const Intern &a)
{
	
}

Intern::~Intern()
{
	
}

Intern &Intern::operator=(const Intern& a)
{
	return (*this);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	AForm *resForm[3] = 
	{
		new PresidentialPardonForm(target),
		new RobotomyRequestForm(target),
		new ShrubberyCreationForm(target),
	};
	std::string	compIndex[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int i = 0;
	while (i < 3)
	{
		if (form == compIndex[i])
			return (resForm[i]);
		i++;
	}
	std::cout << "Error: form type doesn't exist" << std::endl;
	exit(22);
}