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
}