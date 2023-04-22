#include "AForm.hpp"
#include "Intern.hpp"
int main(void)
{

	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");


	Bureaucrat				dude2("prawn", 2);
	rrf->beSigned(dude2);
	dude2.executeForm(*rrf);




	// PresidentialPardonForm	presidentialform1("obama");
	// RobotomyRequestForm		roboto1("toaster");
	// ShrubberyCreationForm		shrubbery1("backyard");

	// std::cout << presidentialform1;
	// std::cout << roboto1;
	// std::cout << shrubbery1;
	// presidentialform1.beSigned(dude2);
	// roboto1.beSigned(dude2);
	// shrubbery1.beSigned(dude2);
	// dude2.executeForm(roboto1);
	// dude2.executeForm(presidentialform1);
	// dude2.executeForm(shrubbery1);

}