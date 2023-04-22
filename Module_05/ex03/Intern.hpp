
#ifndef CLASS_Intern
# define CLASS_Intern

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
	 
	public:
		Intern();
		Intern(const Intern &a);
		~Intern();
		AForm *makeForm(std::string form, std::string target);
		Intern &operator= (const Intern& a);
};

#endif
